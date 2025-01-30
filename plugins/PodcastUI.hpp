// Copyright 2022-2025 Filipe Coelho <falktx@falktx.com>
// SPDX-License-Identifier: GPL-3.0-or-later

#include "DistrhoUI.hpp"

#include "NanoVG.hpp"
#include "Quantum.hpp"
#include "extra/ScopedPointer.hpp"
#include "ui-widgets/BlockGraph.hpp"
#include "ui-widgets/InspectorWindow.hpp"

#include "BuildInfo.hpp"
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
    const PodcastTheme& theme;

   #ifdef PODCAST_MASTER
    QuantumStereoLevelMeterWithLUFS meter;
   #else
    QuantumStereoLevelMeter meter;
   #endif
    QuantumSmallKnob gainKnob;

    explicit InputMeterGroup(NanoTopLevelWidget* const parent,
                             KnobEventHandler::Callback* const cb,
                             const PodcastTheme& t)
        : QuantumFrame(parent, t),
          theme(t),
          meter(this, t),
          gainKnob(this, t)
    {
        setName("Inputs");

        meter.setName(" + Meter");
        meter.setRange(kParameterRanges[kParameter_input_peak_channel_0].min,
                       kParameterRanges[kParameter_input_peak_channel_0].max);
       #ifdef PODCAST_MASTER
        meter.setValues(kParameterRanges[kParameter_input_peak_channel_0].min,
                        kParameterRanges[kParameter_input_peak_channel_1].min,
                        0.f,
                        kParameterRanges[kParameter_lufs_in_meter].min);
       #else
        meter.setValues(kParameterRanges[kParameter_input_peak_channel_0].min,
                        kParameterRanges[kParameter_input_peak_channel_1].min);
       #endif

        gainKnob.setCallback(cb);
        gainKnob.setId(kParameter_input_gain);
        gainKnob.setLabel("Input\nGain");
        gainKnob.setName("Gain");
        gainKnob.setOrientation(QuantumSmallKnob::CenterToSides);
        gainKnob.setRange(kParameterRanges[kParameter_input_gain].min,
                          kParameterRanges[kParameter_input_gain].max);
        gainKnob.setDefault(kParameterRanges[kParameter_input_gain].def);
        gainKnob.setStep(1.f);
        gainKnob.setUnitLabel(kParameterUnits[kParameter_input_gain]);
        gainKnob.setValue(kParameterRanges[kParameter_input_gain].def, false);
        gainKnob.setRingColor(theme.levelMeterColor);
    }

    void adjustSize(const QuantumMetrics& metrics, const uint height)
    {
       #ifdef PODCAST_MASTER
        const uint meterWidth = metrics.stereoLevelMeterWithLufs.getWidth();
        const uint usableWidth = meterWidth;
        const uint usableHeight = height - theme.borderSize * 2 - theme.padding * 2;
       #else
        const uint meterWidth = metrics.stereoLevelMeter.getWidth();
        const uint usableWidth = meterWidth + theme.fontSize + theme.padding * 2 + theme.borderSize * 2;
        const uint usableHeight = height - theme.borderSize * 2 - theme.padding * 4 - theme.fontSize;
       #endif
        const uint knobWidth = metrics.stereoLevelMeter.getWidth() + theme.fontSize;

        meter.setSize(meterWidth, usableHeight - knobWidth - theme.fontSize);
        gainKnob.setSize(knobWidth, knobWidth + theme.fontSize);

        setSize(usableWidth + theme.borderSize * 2 + theme.padding * 2, height);
    }

    void setAbsolutePos(const int x, const int y)
    {
        QuantumFrame::setAbsolutePos(x, y);
        meter.setAbsolutePos(x + getWidth() / 2 - meter.getWidth() / 2, y + theme.borderSize + theme.padding);
        gainKnob.setAbsolutePos(x + getWidth() / 2 - gainKnob.getWidth() / 2,
                                meter.getAbsoluteY() + meter.getHeight()
                               #ifndef PODCAST_MASTER
                                + theme.fontSize + theme.padding * 2
                               #endif
                                );
    }

#ifndef PODCAST_MASTER
    void displayBrackets(const float db1, const float db2)
    {
        const int strokeSize = theme.widgetLineSize * 2;
        const int sectionWidth = theme.fontSize / 2;

        const float verticalReservedHeight = theme.textHeight;
        const float usableMeterHeight = meter.getHeight() - verticalReservedHeight;
        const float db1norm = 1.f - normalizedLevelMeterValue(db1);
        const float db2norm = 1.f - normalizedLevelMeterValue(db2);

        const float yOffset = theme.borderSize + verticalReservedHeight + usableMeterHeight * db1norm /*- strokeSize*/;
        const float ySize = usableMeterHeight * db2norm - usableMeterHeight * db1norm;

        save();
        translate(getWidth() / 2 - meter.getWidth() / 2 - sectionWidth - theme.padding, yOffset);
        beginPath();
        moveTo(0, 0);
        lineTo(sectionWidth, 0);
        lineTo(sectionWidth, strokeSize);
        lineTo(strokeSize, strokeSize);
        lineTo(strokeSize, ySize - strokeSize);
        lineTo(sectionWidth, ySize - strokeSize);
        lineTo(sectionWidth, ySize);
        lineTo(0, ySize);
        lineTo(0, 0);
        restore();
        fill();

        save();
        translate(getWidth() / 2 + meter.getWidth() / 2 + theme.padding, yOffset);
        beginPath();
        moveTo(0, 0);
        lineTo(sectionWidth, 0);
        lineTo(sectionWidth, ySize);
        lineTo(0, ySize);
        lineTo(0, ySize - strokeSize);
        lineTo(sectionWidth - strokeSize, ySize - strokeSize);
        lineTo(sectionWidth - strokeSize, strokeSize);
        lineTo(0, strokeSize);
        lineTo(0, 0);
        restore();
        fill();

    }

    void onNanoDisplay() override
    {
        QuantumFrame::onNanoDisplay();

        fillColor(Color(255, 0, 0));
        displayBrackets(-0.5, -5.9);

        fillColor(Color(0, 255, 0));
        displayBrackets(-6.1, -16);
    }
#endif
};

// --------------------------------------------------------------------------------------------------------------------
// custom layout for input leveler

struct InputLevelerGroup : QuantumFrame
{
    const PodcastTheme& theme;

    QuantumGainReductionMeter leveler;
    QuantumRadioSwitch enableSwitch;
    QuantumSmallKnob targetKnob;

   #ifdef PODCAST_MASTER
    static constexpr const char* kInputLevelerName = "Leveler 1";
    static constexpr const Parameters kParameter_leveler_gain = kParameter_leveler_gain1;
   #else
    static constexpr const char* kInputLevelerName = "Leveler";
   #endif

    explicit InputLevelerGroup(NanoTopLevelWidget* const parent,
                               ButtonEventHandler::Callback* const bcb,
                               KnobEventHandler::Callback* const kcb,
                               const PodcastTheme& t)
        : QuantumFrame(parent, t),
          theme(t),
          leveler(this, t),
          enableSwitch(this, t),
          targetKnob(this, t)
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

        enableSwitch.setCallback(bcb);
        enableSwitch.setCheckable(true);
        enableSwitch.setChecked(!kParameterRanges[kParameter_bypass_leveler].def, false);
        enableSwitch.setId(kParameter_bypass_leveler);
        enableSwitch.setName("Enable Button");

        targetKnob.setCallback(kcb);
        targetKnob.setId(kParameter_leveler_target);
        targetKnob.setLabel("Target Loudness");
        targetKnob.setName("Target");

        targetKnob.setOrientation(QuantumSmallKnob::CenterToSides);
        targetKnob.setRange(kParameterRanges[kParameter_leveler_target].min,
                            kParameterRanges[kParameter_leveler_target].max);
        targetKnob.setDefault(kParameterRanges[kParameter_leveler_target].def);
        targetKnob.setStep(1.f);
        targetKnob.setUnitLabel(kParameterUnits[kParameter_leveler_target]);
        targetKnob.setValue(kParameterRanges[kParameter_leveler_target].def, false);

        enableSwitch.setBackgroundColor(theme.widgetAlternativeColor);
        targetKnob.setRingColor(theme.widgetAlternativeColor);
    }

    void adjustSize(const QuantumMetrics& metrics, const uint height)
    {
        const uint levelerWidth = metrics.gainReductionMeter.getWidth();
        const uint usableWidth = levelerWidth + theme.fontSize;
        const uint usableHeight = height - theme.borderSize * 2 - theme.padding * 2;

        enableSwitch.adjustSize();
        targetKnob.setSize(usableWidth, usableWidth + theme.fontSize);
        leveler.setSize(levelerWidth,
                        usableHeight - usableWidth - theme.fontSize - enableSwitch.getHeight() - theme.padding * 2);
        setSize(usableWidth + theme.borderSize * 2 + theme.padding * 2, height);
    }

    void setAbsolutePos(const int x, const int y)
    {
        QuantumFrame::setAbsolutePos(x, y);

        const int xfinal = x + theme.borderSize + theme.padding;
        leveler.setAbsolutePos(xfinal + theme.fontSize / 2, y + theme.borderSize + theme.padding);
        enableSwitch.setAbsolutePos(x + getWidth() / 2 - enableSwitch.getWidth() / 2,
                                    leveler.getAbsoluteY() + leveler.getHeight() + theme.padding);
        targetKnob.setAbsolutePos(xfinal, enableSwitch.getAbsoluteY() + enableSwitch.getHeight() + theme.padding);
    }
};

// --------------------------------------------------------------------------------------------------------------------
// custom layout for output leveler (single widget)

#ifdef PODCAST_MASTER
struct OutputLevelerGroup : QuantumFrame
{
    const PodcastTheme& theme;

    QuantumGainReductionMeter leveler;

    explicit OutputLevelerGroup(NanoTopLevelWidget* const parent, const PodcastTheme& t)
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
#endif

// --------------------------------------------------------------------------------------------------------------------
// custom layout for output levels (single widget)

struct OutputMeterGroup : QuantumFrame
{
    const PodcastTheme& theme;

    QuantumStereoLevelMeterWithLUFS meter;

    explicit OutputMeterGroup(NanoTopLevelWidget* const parent, const PodcastTheme& t)
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
                        kParameterRanges[kParameter_limiter_gain].max,
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
    const PodcastTheme& theme;

   #ifndef __MOD_DEVICES__
    QuantumLabel globalEnableLabel;
    QuantumRadioSwitch globalEnableSwitch;
    QuantumVerticalSeparatorLine separator;
   #endif

    explicit TopCenteredGroup(NanoTopLevelWidget* const parent,
                              ButtonEventHandler::Callback* const bcb,
                              const PodcastTheme& t)
        : NanoSubWidget(parent),
          theme(t)
       #ifndef __MOD_DEVICES__
        , globalEnableLabel(this, t)
        , globalEnableSwitch(this, t)
        , separator(this, t)
       #endif
    {
        setName("Top Center");

       #ifndef __MOD_DEVICES__
        globalEnableLabel.setLabel("Global Enable");
        globalEnableLabel.setName("Global Enable Label");

        globalEnableSwitch.setCallback(bcb);
        globalEnableSwitch.setCheckable(true);
        globalEnableSwitch.setChecked(!kParameterRanges[kParameter_bypass_global].def, false);
        globalEnableSwitch.setId(kParameter_bypass_global);
        globalEnableSwitch.setName("Global Enable Button");

        separator.setName("+ separator");
       #endif
    }

    void adjustSize(const QuantumMetrics& metrics, const uint width, const uint height, const uint widgetsHeight)
    {
       #ifndef __MOD_DEVICES__
        globalEnableLabel.adjustSize();
        globalEnableSwitch.adjustSize();
        separator.setSize(metrics.separatorVertical);
        separator.setHeight(widgetsHeight);
       #endif
        setSize(width, height);
    }

    void setAbsolutePos(int x, const int y)
    {
       #ifndef __MOD_DEVICES__
        globalEnableLabel.setAbsolutePos(x, y + (separator.getHeight() / 2 - globalEnableLabel.getHeight() / 2));
        globalEnableSwitch.setAbsolutePos(globalEnableLabel.getAbsoluteX() + globalEnableLabel.getWidth() + theme.padding,
                                          y + (separator.getHeight() / 2 - globalEnableSwitch.getHeight() / 2));
        separator.setAbsolutePos(globalEnableSwitch.getAbsoluteX() + globalEnableSwitch.getWidth() + theme.padding * 4, y);
       #endif
    }

    void onNanoDisplay() override
    {
    }
};

// --------------------------------------------------------------------------------------------------------------------
// custom widget for main centered content

struct ContentGroup : QuantumFrame
{
    const PodcastTheme& theme;

    BlockGraph graph;

    QuantumKnob timbreKnob;
    QuantumKnob styleKnob;

    QuantumRadioSwitch timbreSwitch;
    QuantumRadioSwitch styleSwitch;

public:
    explicit ContentGroup(NanoTopLevelWidget* const parent,
                          ButtonEventHandler::Callback* const bcb,
                          KnobEventHandler::Callback* const kcb,
                          const PodcastTheme& t)
        : QuantumFrame(parent, t),
          theme(t),
          graph(parent, t),
          timbreKnob(this, t),
          styleKnob(this, t),
          timbreSwitch(this, t),
          styleSwitch(this, t)
    {
        loadSharedResources();
        setName("Content");

        timbreKnob.setCallback(kcb);
        timbreKnob.setId(kParameter_timbre);
        timbreKnob.setName("Timbre");
        timbreKnob.setOrientation(QuantumKnob::CenterToSides);
        timbreKnob.setRange(kParameterRanges[kParameter_timbre].min,
                            kParameterRanges[kParameter_timbre].max);
        timbreKnob.setDefault(kParameterRanges[kParameter_timbre].def);
        timbreKnob.setValue(kParameterRanges[kParameter_timbre].def, false);
        timbreKnob.setLabel("Timbre");
        timbreKnob.setSideLabels("warmer", "brighter");
        timbreKnob.setSideLabelsFontSize(theme.sidelabelsFontSize);
        timbreKnob.setRingColor(theme.levelMeterColor);
        timbreKnob.setUnitLabel(kParameterUnits[kParameter_timbre]);
        timbreKnob.setRingColor(theme.knobRimColor);

        styleKnob.setCallback(kcb);
        styleKnob.setId(kParameter_style);
        styleKnob.setName("Style");
        styleKnob.setOrientation(QuantumKnob::CenterToSides);
        styleKnob.setRange(kParameterRanges[kParameter_style].min,
                           kParameterRanges[kParameter_style].max);
        styleKnob.setDefault(kParameterRanges[kParameter_style].def);
        styleKnob.setValue(kParameterRanges[kParameter_style].def, false);
        styleKnob.setLabel("Style");
        styleKnob.setSideLabels("natural", "radio-ish");
        styleKnob.setSideLabelsFontSize(theme.sidelabelsFontSize);
        styleKnob.setRingColor(theme.levelMeterAlternativeColor);
        styleKnob.setUnitLabel(kParameterUnits[kParameter_style]);
        styleKnob.setRingColor(theme.knobAlternativeRimColor);

        timbreSwitch.setCallback(bcb);
        timbreSwitch.setCheckable(true);
        timbreSwitch.setChecked(!kParameterRanges[kParameter_bypass_timbre].def, false);
        timbreSwitch.setId(kParameter_bypass_timbre);
        timbreSwitch.setName("Timbre Enable Button");

        styleSwitch.setCallback(bcb);
        styleSwitch.setCheckable(true);
        styleSwitch.setChecked(!kParameterRanges[kParameter_bypass_style].def, false);
        styleSwitch.setId(kParameter_bypass_style);
        styleSwitch.setName("Style Enable Button");
    }

    void adjustSize(const QuantumMetrics& metrics)
    {
        graph.setSize(getWidth() - theme.borderSize * 2 - theme.padding * 2,
                      getHeight() / 2 - theme.borderSize * 2 - theme.padding * 2);

        timbreSwitch.adjustSize();
        styleSwitch.adjustSize();

        const uint knobSize = getHeight() / 3 - theme.borderSize * 2 - theme.padding * 2;
        timbreKnob.setSize(knobSize, knobSize);
        styleKnob.setSize(knobSize, knobSize);
    }

    void setAbsolutePos(const int x, const int y)
    {
        QuantumFrame::setAbsolutePos(x, y);

        const uint knobSize = getHeight() / 3 - theme.borderSize * 2 - theme.padding * 2;
        const uint midPoint = x / 2 + getWidth() / 2;
        const int yfinal = y + getHeight() - knobSize * 1.5 - theme.borderSize - theme.padding;

        graph.setAbsolutePos(x + theme.borderSize + theme.padding,
                             y + theme.borderSize + theme.padding);

        timbreKnob.setAbsolutePos(midPoint - knobSize * 0.75, yfinal);
        styleKnob.setAbsolutePos(midPoint + knobSize * 0.75, yfinal);

        timbreSwitch.setAbsolutePos(timbreKnob.getAbsoluteX() +
                                    timbreKnob.getWidth() / 2 -
                                    timbreSwitch.getWidth() / 2,
                                    timbreKnob.getAbsoluteY() + timbreKnob.getHeight() + theme.padding * 2);

        styleSwitch.setAbsolutePos(styleKnob.getAbsoluteX() +
                                   styleKnob.getWidth() / 2 -
                                   styleSwitch.getWidth() / 2,
                                   styleKnob.getAbsoluteY() + styleKnob.getHeight() + theme.padding * 2);
    }

protected:
    void onNanoDisplay() override
    {
        QuantumFrame::onNanoDisplay();

        fontSize(theme.fontSize);
        fillColor(theme.textMidColor);
        textAlign(ALIGN_BOTTOM|ALIGN_RIGHT);

        const int yoffset = std::strchr(kBuildInfoString, '\n') ? theme.fontSize : 0;
        textBox(0,
                getHeight() - yoffset - theme.padding,
                getWidth() - theme.borderSize * 2 - theme.padding * 2,
                kBuildInfoString,
                nullptr);
    }
};

// --------------------------------------------------------------------------------------------------------------------
// custom widget for drawing plugin name (so it appears on top of other widgets if needed)

class PodcastNameWidget : public NanoSubWidget
{
    PodcastTheme& theme;
    QuantumThemeCallback* const callback;
    NanoImage image, image2x;
    ScopedPointer<InspectorWindow> inspectorWindow;

public:
    explicit PodcastNameWidget(NanoTopLevelWidget* const parent, QuantumThemeCallback* const cb, PodcastTheme& t)
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
    PodcastTheme theme;

    // group of widgets
    TopCenteredGroup topCenteredGroup;
    InputMeterGroup inputGroup;
    InputLevelerGroup inputLevelerGroup;
    ContentGroup contentGroup;
   #ifdef PODCAST_MASTER
    OutputLevelerGroup outputLevelerGroup;
   #endif
    OutputMeterGroup outputGroup;

    // plugin name
    PodcastNameWidget name;

public:
    PodcastUI()
        : UI(DISTRHO_UI_DEFAULT_WIDTH, DISTRHO_UI_DEFAULT_HEIGHT),
          theme(getScaleFactor()),
          topCenteredGroup(this, this, theme),
          inputGroup(this, this, theme),
          inputLevelerGroup(this, this, this, theme),
          contentGroup(this, this, this, theme),
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
            setGeometryConstraints(DISTRHO_UI_MINIMUM_WIDTH * scaleFactor, DISTRHO_UI_MINIMUM_HEIGHT * scaleFactor);
            setSize(DISTRHO_UI_DEFAULT_WIDTH * scaleFactor, DISTRHO_UI_DEFAULT_HEIGHT * scaleFactor);
        }
        else
        {
            setGeometryConstraints(DISTRHO_UI_MINIMUM_WIDTH * scaleFactor, DISTRHO_UI_MINIMUM_HEIGHT * scaleFactor);
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
                                        - topCenteredGroup.globalEnableLabel.getWidth()
                                        - theme.padding
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
        contentGroup.adjustSize(metrics);
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
        // inputs
        case kParameter_bypass_timbre:
            contentGroup.timbreSwitch.setChecked(value < 0.5f, false);
            break;
        case kParameter_bypass_leveler:
            inputLevelerGroup.enableSwitch.setChecked(value < 0.5f, false);
            break;
        case kParameter_bypass_style:
            contentGroup.styleSwitch.setChecked(value < 0.5f, false);
            break;
        case kParameter_bypass_global:
           #ifndef __MOD_DEVICES__
            topCenteredGroup.globalEnableSwitch.setChecked(value < 0.5f, false);
           #endif
            break;
        case kParameter_input_gain:
            inputGroup.gainKnob.setValue(value, false);
            break;
        case kParameter_leveler_target:
            inputLevelerGroup.targetKnob.setValue(value, false);
            break;
        case kParameter_timbre:
            contentGroup.timbreKnob.setValue(value, false);
            break;
        case kParameter_style:
            contentGroup.styleKnob.setValue(value, false);
            break;
        // outputs
        case kParameter_input_peak_channel_0:
            inputGroup.meter.setValueL(value);
            break;
        case kParameter_input_peak_channel_1:
            inputGroup.meter.setValueR(value);
            break;
        case kParameter_multiband_compressor_gain_band_1:
        case kParameter_multiband_compressor_gain_band_2:
        case kParameter_multiband_compressor_gain_band_3:
        case kParameter_multiband_compressor_gain_band_4:
        case kParameter_multiband_compressor_gain_band_5:
            contentGroup.graph.update1(index - kParameter_multiband_compressor_gain_band_1, value);
            break;
        case kParameter_limiter_gain:
            outputGroup.meter.setValueLimiter(value);
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

    void sampleRateChanged(double) override
    {
        contentGroup.graph.clear();
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

        fontSize(theme.fontSize * 1.25);
        fillColor(theme.textLightColor);
        textAlign(ALIGN_CENTER|ALIGN_MIDDLE);
        text(inputGroup.getAbsoluteX() + inputGroup.getWidth() / 2 + inputLevelerGroup.getWidth() / 2 + theme.padding,
             inputGroup.getAbsoluteY() / 2 + theme.padding, "Podcast Plugins", nullptr);

        fontSize(theme.fontSize * 1.5);
        fillColor(theme.nameColor);
        textAlign(ALIGN_LEFT|ALIGN_MIDDLE);
        text(contentGroup.getAbsoluteX(), inputGroup.getAbsoluteY() / 2 + theme.padding,
            #ifdef PODCAST_MASTER
             "MASTER",
            #else
             "TRACK",
            #endif
             nullptr);
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

    /* ----------------------------------------------------------------------------------------------------------------
     * Custom Widget Callbacks */

    void buttonClicked(SubWidget* const widget, int) override
    {
        const uint id = widget->getId();

        QuantumRadioSwitch* const qswitch = reinterpret_cast<QuantumRadioSwitch*>(widget);
        DISTRHO_SAFE_ASSERT_RETURN(qswitch != nullptr,);

        const bool enabled = qswitch->isChecked();

        float value;

        switch (id)
        {
        // bypass switches, inverted operation
        case kParameter_bypass_timbre:
        case kParameter_bypass_leveler:
        case kParameter_bypass_style:
        case kParameter_bypass_global:
            value = enabled ? 0.f : 1.f;
            break;
        default:
            return;
        }

        editParameter(id, true);
        setParameterValue(id, value);
        editParameter(id, false);

        // extra handling for setting enabled color
        // TODO
        /*
        switch (id)
        {
        case kParameter_bypass_timbre:
            contentGroup.timbreKnob.setEnabled(enabled);
            break;
        case kParameter_bypass_leveler:
            inputLevelerGroup.leveler.setEnabled(enabled);
            inputLevelerGroup.targetKnob.setEnabled(enabled);
            break;
        case kParameter_bypass_style:
            contentGroup.styleKnob.setEnabled(enabled);
            break;
        }
        */
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
        const uint id = widget->getId();

        switch (id)
        {
        case kParameter_timbre:
        case kParameter_style:
            static_cast<QuantumKnob*>(widget)->setValue(kParameterRanges[id].def, true);
            break;
        case kParameter_input_gain:
        case kParameter_leveler_target:
            static_cast<QuantumKnob*>(widget)->setValue(kParameterRanges[id].def, true);
            break;
        }
    }

    void quantumThemeChanged(const bool size, const bool colors) override
    {
        if (colors)
        {
            recursiveTypeFind<QuantumButton>(getChildren(), [=](QuantumButton* const w){
                w->setBackgroundColor(theme.widgetActiveColor);
            });
            recursiveTypeFind<QuantumLevelMeter>(getChildren(), [=](QuantumLevelMeter* const w){
                w->setBackgroundColor(theme.levelMeterColor);
            });
            recursiveTypeFind<QuantumRadioSwitch>(getChildren(), [=](QuantumRadioSwitch* const w){
                w->setBackgroundColor(theme.widgetActiveColor);
            });
            recursiveTypeFind<QuantumValueSlider>(getChildren(), [=](QuantumValueSlider* const w){
                w->setBackgroundColor(theme.widgetActiveColor);
                w->setTextColor(theme.textLightColor);
            });
            recursiveTypeFind<QuantumValueMeter>(getChildren(), [=](QuantumValueMeter* const w){
                w->setBackgroundColor(theme.widgetAlternativeColor);
                w->setTextColor(theme.textLightColor);
            });

            inputGroup.gainKnob.setRingColor(theme.levelMeterColor);
            inputLevelerGroup.enableSwitch.setBackgroundColor(theme.widgetAlternativeColor);
            inputLevelerGroup.targetKnob.setRingColor(theme.widgetAlternativeColor);
            contentGroup.timbreKnob.setRingColor(theme.knobRimColor);
            contentGroup.styleKnob.setRingColor(theme.knobAlternativeRimColor);
        }

        if (size)
        {
            contentGroup.timbreKnob.setSideLabelsFontSize(theme.sidelabelsFontSize);
            contentGroup.styleKnob.setSideLabelsFontSize(theme.sidelabelsFontSize);
            resizeWidgets(getWidth(), getHeight());
        }
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
