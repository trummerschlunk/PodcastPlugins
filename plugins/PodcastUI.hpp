// Copyright 2022-2025 Filipe Coelho <falktx@falktx.com>
// SPDX-License-Identifier: GPL-3.0-or-later

#include "DistrhoUI.hpp"

#include "Quantum.hpp"
#include "extra/ScopedPointer.hpp"
#include "ui-widgets/InspectorWindow.hpp"

#include "BuildInfo1.hpp"
#include "BuildInfo2.hpp"
#include "Logo.hpp"

#include <functional>

START_NAMESPACE_DISTRHO

// --------------------------------------------------------------------------------------------------------------------
// make sure our expectations match

static_assert(kParameterRanges[kParameter_input_peak_channel_0].def ==
              kParameterRanges[kParameter_input_peak_channel_1].def, "channel data mismatch");
static_assert(kParameterRanges[kParameter_input_peak_channel_0].min ==
              kParameterRanges[kParameter_input_peak_channel_1].min, "channel data mismatch");
static_assert(kParameterRanges[kParameter_input_peak_channel_0].max ==
              kParameterRanges[kParameter_input_peak_channel_1].max, "channel data mismatch");

static_assert(kParameterRanges[kParameter_output_peak_channel_0].def ==
              kParameterRanges[kParameter_output_peak_channel_1].def, "channel data mismatch");
static_assert(kParameterRanges[kParameter_output_peak_channel_0].min ==
              kParameterRanges[kParameter_output_peak_channel_1].min, "channel data mismatch");
static_assert(kParameterRanges[kParameter_output_peak_channel_0].max ==
              kParameterRanges[kParameter_output_peak_channel_1].max, "channel data mismatch");

static_assert(kParameterRanges[kParameter_output_peak_channel_0].def ==
              kParameterRanges[kParameter_lufs_out_meter].def, "channel data mismatch");
static_assert(kParameterRanges[kParameter_output_peak_channel_0].min >=
              kParameterRanges[kParameter_lufs_out_meter].min, "channel data mismatch");
static_assert(kParameterRanges[kParameter_output_peak_channel_0].max ==
              kParameterRanges[kParameter_lufs_out_meter].max, "channel data mismatch");

static_assert(kParameterRanges[kParameter_input_peak_channel_0].def ==
              kParameterRanges[kParameter_output_peak_channel_0].def, "channel data mismatch");
static_assert(kParameterRanges[kParameter_input_peak_channel_0].min ==
              kParameterRanges[kParameter_output_peak_channel_0].min, "channel data mismatch");
static_assert(kParameterRanges[kParameter_input_peak_channel_0].max ==
              kParameterRanges[kParameter_output_peak_channel_0].max, "channel data mismatch");

// static_assert(kParameterRanges[kParameter_target].min == -50.f, "lufs target -50 dB min");
// static_assert(kParameterRanges[kParameter_target].max == -2.f, "lufs target -2 dB max");

#ifdef PODCAST_MASTER
static_assert(kParameterRanges[kParameter_leveler_gain1].min == -50.f, "leveler1 gain -50 dB min");
static_assert(kParameterRanges[kParameter_leveler_gain1].max == +50.f, "leveler1 gain +50 dB max");
static_assert(kParameterRanges[kParameter_leveler_gain1].def == 0.f, "leveler1 gain 0 dB default");
static_assert(kParameterRanges[kParameter_leveler_gain2].min == -50.f, "leveler2 gain -50 dB min");
static_assert(kParameterRanges[kParameter_leveler_gain2].max == +50.f, "leveler2 gain +50 dB max");
static_assert(kParameterRanges[kParameter_leveler_gain2].def == 0.f, "leveler2 gain 0 dB default");
#else
static_assert(kParameterRanges[kParameter_leveler_gain].min == -50.f, "leveler gain -50 dB min");
static_assert(kParameterRanges[kParameter_leveler_gain].max == +50.f, "leveler gain +50 dB max");
static_assert(kParameterRanges[kParameter_leveler_gain].def == 0.f, "leveler gain 0 dB default");
#endif

// --------------------------------------------------------------------------------------------------------------------
// custom layout for input levels (single widget)

struct InputMeterGroup : QuantumFrame
{
    const QuantumTheme& theme;

   #ifdef PODCAST_MASTER
    QuantumStereoLevelMeterWithLUFS meter;
   #else
    QuantumStereoLevelMeter meter;
   #endif

    explicit InputMeterGroup(NanoTopLevelWidget* const parent,
                             KnobEventHandler::Callback* const cb,
                             const QuantumTheme& t)
        : QuantumFrame(parent, t),
          theme(t),
          meter(this, t)
    {
        setName("Inputs");

        meter.setName(" + Meter");
        meter.setRange(kParameterRanges[kParameter_input_peak_channel_0].min,
                       kParameterRanges[kParameter_input_peak_channel_0].max);
       #ifdef PODCAST_MASTER
        meter.setValues(kParameterRanges[kParameter_input_peak_channel_0].min,
                        kParameterRanges[kParameter_input_peak_channel_1].min,
                        kParameterRanges[kParameter_lufs_in_meter].min);
       #else
        meter.setValues(kParameterRanges[kParameter_input_peak_channel_0].min,
                        kParameterRanges[kParameter_input_peak_channel_1].min);
       #endif
    }

    void adjustSize(const QuantumMetrics& metrics, const uint height)
    {
       #ifdef PODCAST_MASTER
        const uint usableWidth = metrics.stereoLevelMeterWithLufs.getWidth();
       #else
        const uint usableWidth = metrics.stereoLevelMeter.getWidth();
       #endif
        const uint usableHeight = height - theme.borderSize * 2 - theme.padding * 2;
        meter.setSize(usableWidth, usableHeight);
        setSize(meter.getWidth() + theme.borderSize * 2 + theme.padding * 2, height);
    }

    void setAbsolutePos(const int x, const int y)
    {
        QuantumFrame::setAbsolutePos(x, y);
        meter.setAbsolutePos(x + theme.borderSize + theme.padding, y + theme.borderSize + theme.padding);
    }
};

// --------------------------------------------------------------------------------------------------------------------
// custom layout for input or output leveler (single widget)

struct LevelerGroup : QuantumFrame
{
    const QuantumTheme& theme;

    QuantumGainReductionMeter leveler;

   #ifdef PODCAST_MASTER
    static constexpr const char* kInputLevelerName = "Leveler 1";
    static constexpr const Parameters kParameter_leveler_gain = kParameter_leveler_gain1;
   #else
    static constexpr const char* kInputLevelerName = "Leveler";
   #endif

    explicit LevelerGroup(NanoTopLevelWidget* const parent,
                          KnobEventHandler::Callback* const cb,
                          const QuantumTheme& t)
        : QuantumFrame(parent, t),
          theme(t),
          leveler(this, t)
    {
        setName(kInputLevelerName);

        leveler.setLabel(kInputLevelerName);
        leveler.setName(" + Gain");
        leveler.setId(kParameter_leveler_gain);
        leveler.setName(kParameterNames[kParameter_leveler_gain]);
        // NOTE this special meter assumes -50 to 50 dB range
        // leveler.setRange(kParameterRanges[kParameter_leveler_gain].min,
        //                  kParameterRanges[kParameter_leveler_gain].max);
        // leveler.setUnitLabel(kParameterUnits[kParameter_leveler_gain]);
        leveler.setValue(kParameterRanges[kParameter_leveler_gain].def);
    }

   #ifdef PODCAST_MASTER
    explicit LevelerGroup(NanoTopLevelWidget* const parent,
                          const QuantumTheme& t)
        : QuantumFrame(parent, t),
          theme(t),
          leveler(this, t)
    {
        setName("Leveler 2");

        leveler.setLabel("Leveler 2");
        leveler.setName(" + Gain");
        leveler.setId(kParameter_leveler_gain2);
        leveler.setName(kParameterNames[kParameter_leveler_gain2]);
        // NOTE this special meter assumes -50 to 50 dB range
        // leveler.setRange(kParameterRanges[kParameter_leveler_gain2].min,
        //                  kParameterRanges[kParameter_leveler_gain2].max);
        // leveler.setUnitLabel(kParameterUnits[kParameter_leveler_gain2]);
        leveler.setValue(kParameterRanges[kParameter_leveler_gain2].def);
    }
   #endif

    void adjustSize(const QuantumMetrics& metrics, const uint height)
    {
        const uint usableHeight = height - theme.borderSize * 2 - theme.padding * 2;
        leveler.setSize(metrics.gainReductionMeter.getWidth(), usableHeight);
        setSize(leveler.getWidth() + theme.borderSize * 2 + theme.padding * 2, height);
    }

    void setAbsolutePos(const int x, const int y)
    {
        QuantumFrame::setAbsolutePos(x, y);
        leveler.setAbsolutePos(x + theme.borderSize + theme.padding, y + theme.borderSize + theme.padding);
    }
};

// --------------------------------------------------------------------------------------------------------------------
// custom layout for output levels (single widget)

struct OutputMeterGroup : QuantumFrame
{
    const QuantumTheme& theme;

    QuantumStereoLevelMeterWithLUFS meter;

    explicit OutputMeterGroup(NanoTopLevelWidget* const parent, const QuantumTheme& t)
        : QuantumFrame(parent, t),
          theme(t),
          meter(this, t)
    {
        setName("Outputs");

        meter.setName(" + Meter");
        meter.setRange(kParameterRanges[kParameter_output_peak_channel_0].min,
                       kParameterRanges[kParameter_output_peak_channel_0].max);
        meter.setValues(kParameterRanges[kParameter_output_peak_channel_0].min,
                        kParameterRanges[kParameter_output_peak_channel_1].min,
                        kParameterRanges[kParameter_lufs_out_meter].min);
    }

    void adjustSize(const QuantumMetrics& metrics, const uint height)
    {
        const uint usableHeight = height - theme.borderSize * 2 - theme.padding * 2;
        meter.setSize(metrics.stereoLevelMeterWithLufs.getWidth(), usableHeight);
        setSize(meter.getWidth() + theme.borderSize * 2 + theme.padding * 2, height);
    }

    void setAbsolutePos(const int x, const int y)
    {
        QuantumFrame::setAbsolutePos(x, y);
        meter.setAbsolutePos(x + theme.borderSize + theme.padding, y + theme.borderSize + theme.padding);
    }
};

// --------------------------------------------------------------------------------------------------------------------
// custom layout for top centered content (global enable and leveler gain)

struct TopCenteredGroup : NanoSubWidget
{
    const QuantumTheme& theme;

   #ifndef __MOD_DEVICES__
    QuantumSwitch globalEnableSwitch;
    QuantumVerticalSeparatorLine separator;
   #endif

    explicit TopCenteredGroup(NanoTopLevelWidget* const parent,
                              ButtonEventHandler::Callback* const bcb,
                              const QuantumTheme& t)
        : NanoSubWidget(parent),
          theme(t)
       #ifndef __MOD_DEVICES__
        , globalEnableSwitch(this, t)
        , separator(this, t)
       #endif
    {
        setName("Top Center");

       #ifndef __MOD_DEVICES__
        globalEnableSwitch.setCallback(bcb);
        globalEnableSwitch.setCheckable(true);
        // globalEnableSwitch.setChecked(kParameterRanges[kParameter_global_bypass].def, false);
        // globalEnableSwitch.setId(kParameter_global_bypass);
        globalEnableSwitch.setLabel("Enable");
        globalEnableSwitch.setName("Global Enable Button");

        separator.setName("+ separator");
       #endif
    }

    void adjustSize(const QuantumMetrics& metrics, const uint width, const uint height, const uint widgetsHeight)
    {
       #ifndef __MOD_DEVICES__
        globalEnableSwitch.adjustSize();
        globalEnableSwitch.setHeight(widgetsHeight);
        separator.setSize(metrics.separatorVertical);
        separator.setHeight(widgetsHeight);
       #endif
        setSize(width, height);
    }

    void setAbsolutePos(int x, const int y)
    {
       #ifndef __MOD_DEVICES__
        globalEnableSwitch.setAbsolutePos(x, y);
        separator.setAbsolutePos(globalEnableSwitch.getAbsoluteX() + globalEnableSwitch.getWidth() + theme.padding * 4, y);
       #endif
    }

    void onNanoDisplay() override
    {
    }
};

// --------------------------------------------------------------------------------------------------------------------
// custom widget for drawing build info within frame

class ContentGroup : public QuantumFrame
{
    const QuantumTheme& theme;

public:
    explicit ContentGroup(NanoTopLevelWidget* const parent, const QuantumTheme& t)
        : QuantumFrame(parent, t),
          theme(t)
    {
        loadSharedResources();
        setName("Content");
    }

protected:
    void onNanoDisplay() override
    {
        QuantumFrame::onNanoDisplay();

        fontSize(theme.fontSize);
        fillColor(theme.textMidColor);
        textAlign(ALIGN_BOTTOM|ALIGN_RIGHT);

        const int yoffset = std::strchr(kBuildInfoString2, '\n') ? theme.fontSize : 0;
        textBox(0,
                getHeight() - yoffset - theme.padding,
                getWidth() - theme.borderSize * 2 - theme.padding * 2,
                kBuildInfoString2,
                nullptr);
    }
};

// --------------------------------------------------------------------------------------------------------------------
// custom widget for drawing plugin name (so it appears on top of other widgets if needed)

class PodcastNameWidget : public NanoSubWidget
{
    QuantumTheme& theme;
    QuantumThemeCallback* const callback;
    NanoImage image, image2x;
    ScopedPointer<InspectorWindow> inspectorWindow;

public:
    explicit PodcastNameWidget(NanoTopLevelWidget* const parent, QuantumThemeCallback* const cb, QuantumTheme& t)
        : NanoSubWidget(parent),
          theme(t),
          callback(cb)
    {
        setName("Name");

        image = createImageFromMemory(Logo::signet_master_me_whiteData, Logo::signet_master_me_whiteDataSize, 0);
        image2x = createImageFromMemory(Logo::signet_master_me_white_2xData, Logo::signet_master_me_white_2xDataSize, 0);
    }

    void adjustSize()
    {
        const double scaleFactor = getTopLevelWidget()->getScaleFactor();
        const Size<uint> imgSize = image.getSize();

        setSize(imgSize.getWidth() * scaleFactor, imgSize.getHeight() * scaleFactor);
    }

protected:
    void onNanoDisplay() override
    {
        const double scaleFactor = getTopLevelWidget()->getScaleFactor();

        beginPath();
        rect(0, 0, getWidth(), getHeight());
        fillPaint(imagePattern(0, 0, getWidth(), getHeight(), 0, scaleFactor >= 1.5 ? image2x : image, 1));
        fill();
    }

    bool onMouse(const MouseEvent& ev) override
    {
        if (ev.button == 1 && ev.press && contains(ev.pos))
        {
            if (inspectorWindow == nullptr)
                inspectorWindow = new InspectorWindow(getTopLevelWidget(), theme, callback);

            inspectorWindow->isOpen = true;
        }

        return false;
    }
};

// --------------------------------------------------------------------------------------------------------------------

class PodcastUI : public UI,
                  public ButtonEventHandler::Callback,
                  public KnobEventHandler::Callback,
                  public QuantumThemeCallback
{
protected:
    QuantumTheme theme;

    // group of widgets
    TopCenteredGroup topCenteredGroup;
    InputMeterGroup inputGroup;
    LevelerGroup inputLevelerGroup;
    ContentGroup contentGroup;
   #ifdef PODCAST_MASTER
    LevelerGroup outputLevelerGroup;
   #endif
    OutputMeterGroup outputGroup;

    // plugin name
    PodcastNameWidget name;

    // for when theme changes
    bool resizeOnNextIdle = false;

    // little helper for text input on double click
    // ScopedPointer<DoubleClickHelper> doubleClickHelper;

public:
    PodcastUI()
        : UI(DISTRHO_UI_DEFAULT_WIDTH, DISTRHO_UI_DEFAULT_HEIGHT, true),
          topCenteredGroup(this, this, theme),
          inputGroup(this, this, theme),
          inputLevelerGroup(this, this, theme),
          contentGroup(this, theme),
         #ifdef PODCAST_MASTER
          outputLevelerGroup(this, theme),
         #endif
          outputGroup(this, theme),
          name(this, this, theme)
    {
        loadSharedResources();

        const double scaleFactor = getScaleFactor();

        if (d_isNotEqual(scaleFactor, 1.0))
        {
            setSize(DISTRHO_UI_DEFAULT_WIDTH * scaleFactor, DISTRHO_UI_DEFAULT_HEIGHT * scaleFactor);

            theme.borderSize *= scaleFactor;
            theme.padding *= scaleFactor;
            theme.fontSize *= scaleFactor;
            theme.textHeight *= scaleFactor;
            theme.widgetLineSize *= scaleFactor;
            theme.windowPadding *= scaleFactor;
            theme.textPixelRatioWidthCompensation = static_cast<uint>(scaleFactor - 1.0 + 0.25);
        }

        // bottom of the drawing stack
        topCenteredGroup.toBottom();

        // initial resize and reposition
        resizeWidgets(getWidth(), getHeight());
    }

    ~PodcastUI() override
    {
    }

    void repositionWidgets()
    {
        const QuantumMetrics metrics(theme);

        const uint width = getWidth();
        const uint startY = theme.windowPadding * 2 + metrics.button.getHeight();

        inputGroup.setAbsolutePos(theme.windowPadding, startY);
        inputLevelerGroup.setAbsolutePos(theme.windowPadding + inputGroup.getWidth() + theme.padding, startY);
        contentGroup.setAbsolutePos(theme.windowPadding +
                                    inputGroup.getWidth() +
                                    inputLevelerGroup.getWidth() +
                                    theme.padding * 2,
                                    startY);
       #ifdef PODCAST_MASTER
        outputLevelerGroup.setAbsolutePos(theme.windowPadding +
                                          inputGroup.getWidth() +
                                          inputLevelerGroup.getWidth() +
                                          contentGroup.getWidth() +
                                          theme.padding * 3,
                                          startY);
       #endif
        outputGroup.setAbsolutePos(width - outputGroup.getWidth() - theme.windowPadding - theme.padding,
                                   startY);

        name.setAbsolutePos(outputGroup.getAbsoluteX() + outputGroup.getWidth() - name.getWidth(),
                            (outputGroup.getAbsoluteY() - name.getHeight()) / 2);

        topCenteredGroup.setAbsolutePos(name.getAbsoluteX()
                                       #ifndef __MOD_DEVICES__
                                        - topCenteredGroup.globalEnableSwitch.getWidth()
                                       #endif
                                        - theme.padding * 8 - theme.borderSize,
                                        theme.windowPadding + theme.borderSize);
    }

    void resizeWidgets(const uint width, const uint height)
    {
        const QuantumMetrics metrics(theme);

        const uint startY = theme.windowPadding * 2 + metrics.button.getHeight();
        const uint contentHeight = height - startY - theme.windowPadding;

        name.adjustSize();

        inputGroup.adjustSize(metrics, contentHeight);
        inputLevelerGroup.adjustSize(metrics, contentHeight);
       #ifdef PODCAST_MASTER
        outputLevelerGroup.adjustSize(metrics, contentHeight);
       #endif
        outputGroup.adjustSize(metrics, contentHeight);
        contentGroup.setSize(width - theme.windowPadding * 2 -
                            #ifdef PODCAST_MASTER
                             theme.padding * 5 -
                             outputLevelerGroup.getWidth() -
                            #else
                             theme.padding * 4 -
                            #endif
                             inputGroup.getWidth() -
                             inputLevelerGroup.getWidth() -
                             outputGroup.getWidth(),
                             contentHeight);
        topCenteredGroup.adjustSize(metrics, width, height, name.getHeight() / 1.5);

        repositionWidgets();
    }

protected:
    /* ----------------------------------------------------------------------------------------------------------------
     * DSP/Plugin Callbacks */

    void parameterChanged(const uint32_t index, const float value) override
    {
        switch (index)
        {
        case kParameter_input_peak_channel_0:
            inputGroup.meter.setValueL(value);
            break;
        case kParameter_input_peak_channel_1:
            inputGroup.meter.setValueR(value);
            break;
        case kParameter_limiter_gain:
            // TODO
            // outputGroup.limiter.setValueR(value);
            break;
        case kParameter_lufs_out_meter:
            outputGroup.meter.setValueLufs(value);
            break;
        case kParameter_output_peak_channel_0:
            outputGroup.meter.setValueL(value);
            break;
        case kParameter_output_peak_channel_1:
            outputGroup.meter.setValueR(value);
            break;
        }
    }

    /* ----------------------------------------------------------------------------------------------------------------
     * Widget Callbacks */

    void onNanoDisplay() override
    {
        beginPath();
        rect(0, 0, getWidth(), getHeight());
        fillColor(theme.windowBackgroundColor);
        fill();

        const Color color2(Color(theme.widgetBackgroundColor, theme.windowBackgroundColor, 0.5f).withAlpha(0.5f));
        const Color color1(color2.withAlpha(0.f));
        const uint widthBy3 = getWidth() / 3;
        const uint height = getHeight();

        beginPath();
        rect(0, 0, widthBy3, height);
        fillPaint(linearGradient(0, 0, widthBy3, 0, color2, color1));
        fill();

        beginPath();
        rect(getWidth() - widthBy3, 0, widthBy3, height);
        fillPaint(linearGradient(getWidth() - widthBy3, 0, getWidth(), 0, color1, color2));
        fill();

        beginPath();
        rect(widthBy3 - 1, 0, widthBy3 + 2, height);
        fillColor(color1);
        fill();
    }

    bool onMouse(const MouseEvent& ev) override
    {
        if (ev.press)
            getWindow().focus();

        return UI::onMouse(ev);
    }

    void onResize(const ResizeEvent& ev) override
    {
        UI::onResize(ev);
        resizeWidgets(ev.size.getWidth(), ev.size.getHeight());
    }

    void uiIdle() override
    {
        if (resizeOnNextIdle)
        {
            // TODO

            resizeOnNextIdle = false;
        }
    }

    /* ----------------------------------------------------------------------------------------------------------------
     * Custom Widget Callbacks */

    void buttonClicked(SubWidget* const widget, int) override
    {
    }

    void knobDragStarted(SubWidget* const widget) override
    {
        editParameter(widget->getId(), true);
    }

    void knobDragFinished(SubWidget* const widget) override
    {
        editParameter(widget->getId(), false);
    }

    void knobValueChanged(SubWidget* const widget, const float value) override
    {
        setParameterValue(widget->getId(), value);
    }

    void knobDoubleClicked(SubWidget* const widget) override
    {
    }

    void quantumThemeChanged(const bool size, const bool colors) override
    {
        if (colors)
        {
            recursiveTypeFind<QuantumButton>(getChildren(), [=](QuantumButton* const w){
                w->setBackgroundColor(theme.widgetDefaultActiveColor);
            });
            recursiveTypeFind<QuantumValueSlider>(getChildren(), [=](QuantumValueSlider* const w){
                w->setBackgroundColor(theme.widgetDefaultActiveColor);
                w->setTextColor(theme.textLightColor);
            });
            recursiveTypeFind<QuantumValueMeter>(getChildren(), [=](QuantumValueMeter* const w){
                w->setBackgroundColor(theme.widgetDefaultAlternativeColor);
                w->setTextColor(theme.textLightColor);
            });
            recursiveTypeFind<QuantumLevelMeter>(getChildren(), [=](QuantumLevelMeter* const w){
                w->setBackgroundColor(theme.levelMeterColor);
            });
        }

        if (size)
            resizeOnNextIdle = true;
    }

    template<class W>
    static void recursiveTypeFind(std::list<SubWidget*> children, std::function<void(W*)> fn)
    {
        for (SubWidget* w : children)
        {
            if (W* const w2 = dynamic_cast<W*>(w))
                fn(w2);

            recursiveTypeFind<W>(w->getChildren(), fn);
        }
    }

    DISTRHO_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(PodcastUI)
};

// --------------------------------------------------------------------------------------------------------------------

END_NAMESPACE_DISTRHO
