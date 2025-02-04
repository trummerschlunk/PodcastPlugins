// Copyright 2022-2025 Filipe Coelho <falktx@falktx.com>
// SPDX-License-Identifier: GPL-3.0-or-later

#include "DistrhoUI.hpp"

#include "NanoVG.hpp"
#include "Quantum.hpp"
#include "extra/ScopedPointer.hpp"
#include "ui-widgets/BlockGraph.hpp"
#include "ui-widgets/DoubleClickHelper.hpp"
#include "ui-widgets/InspectorWindow.hpp"

#include "BuildInfo.hpp"
#include "Logo.hpp"
#include "Name.hpp"

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
// custom layout for input levels

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
        meter.setTopLabel("Input");
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
       #else
        const uint meterWidth = metrics.stereoLevelMeter.getWidth();
        const uint usableWidth = meterWidth + theme.fontSize + theme.padding * 2 + theme.borderSize * 2;
       #endif
        const uint usableHeight = height - theme.borderSize * 2 - theme.padding * 2;
        const uint knobWidth = metrics.stereoLevelMeter.getWidth() + theme.fontSize;

        meter.setSize(meterWidth, usableHeight - knobWidth - theme.fontSize - theme.padding);
        gainKnob.setSize(knobWidth, knobWidth + theme.fontSize);

        setSize(usableWidth + theme.borderSize * 2 + theme.padding * 2, height);
    }

    void setAbsolutePos(const int x, const int y)
    {
        QuantumFrame::setAbsolutePos(x, y);
        meter.setAbsolutePos(x + getWidth() / 2 - meter.getWidth() / 2, y + theme.borderSize + theme.padding);
        gainKnob.setAbsolutePos(x + getWidth() / 2 - gainKnob.getWidth() / 2,
                                meter.getAbsoluteY() + meter.getHeight() + theme.padding);
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

        fillColor(meter.isEnabled() ? Color(255, 0, 0, 0.75f) : theme.windowBackgroundColor);
        displayBrackets(-0.5, -5.9);

        fillColor(meter.isEnabled() ? Color(0, 255, 0, 0.75f) : theme.windowBackgroundColor);
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

        const int xmid = x + getWidth() / 2;
        leveler.setAbsolutePos(xmid - leveler.getWidth() / 2, y + theme.borderSize + theme.padding);
        enableSwitch.setAbsolutePos(xmid - enableSwitch.getWidth() / 2,
                                    leveler.getAbsoluteY() + leveler.getHeight() + theme.padding);
        targetKnob.setAbsolutePos(xmid - targetKnob.getWidth() / 2,
                                  enableSwitch.getAbsoluteY() + enableSwitch.getHeight() + theme.padding);
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
        meter.setTopLabel("Output");
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

#ifdef PODCAST_TRACK
    QuantumValueSlider timbreStrengthSlider;
#endif

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
#ifdef PODCAST_TRACK
        , timbreStrengthSlider(this, t)
#endif
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

#ifdef PODCAST_TRACK
        timbreStrengthSlider.setCallback(kcb);
        timbreStrengthSlider.setId(kParameter_timbre_strength);
        timbreStrengthSlider.setName("Timbre Strength Slider");
        timbreStrengthSlider.setRange(kParameterRanges[kParameter_timbre_strength].min,
                                      kParameterRanges[kParameter_timbre_strength].max);
        timbreStrengthSlider.setDefault(kParameterRanges[kParameter_timbre_strength].def);
        timbreStrengthSlider.setStep(1.f);
        timbreStrengthSlider.setValue(kParameterRanges[kParameter_timbre_strength].def, false);
        timbreStrengthSlider.setUnitLabel(kParameterUnits[kParameter_timbre_strength]);
#endif
    }

    void adjustSize()
    {
        graph.setSize(getWidth() - theme.borderSize * 2 - theme.padding * 2,
                      getHeight() / 2 - theme.borderSize * 2 - theme.padding * 2 - theme.fontSize);

        timbreSwitch.adjustSize();
        styleSwitch.adjustSize();
#ifdef PODCAST_TRACK
        timbreStrengthSlider.setWidth(60 * getTopLevelWidget()->getScaleFactor());
#endif

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
                             y + theme.fontSize * 2 / 3 + theme.borderSize + theme.padding * 2);

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

       #ifdef PODCAST_TRACK
        const uint timbreCenterX = timbreKnob.getAbsoluteX() + timbreKnob.getWidth() / 2;
        timbreStrengthSlider.setAbsolutePos(timbreCenterX - timbreStrengthSlider.getWidth() / 2,
                                            timbreSwitch.getAbsoluteY() + timbreSwitch.getHeight() + theme.padding * 2);
       #endif
    }

protected:
    void onNanoDisplay() override
    {
        QuantumFrame::onNanoDisplay();

       #ifdef PODCAST_TRACK
        fillColor(timbreStrengthSlider.isEnabled() ? theme.textLightColor : theme.textDarkColor);
        fontSize(theme.sidelabelsFontSize);
        textAlign(ALIGN_TOP|ALIGN_CENTER);
        text(timbreStrengthSlider.getAbsoluteX() + timbreStrengthSlider.getWidth() / 2 - getAbsoluteX(),
             timbreStrengthSlider.getAbsoluteY() + timbreStrengthSlider.getHeight() + theme.padding - getAbsoluteY(),
             "Strength",
             nullptr);
       #endif

        const bool hasNewline = std::strchr(kBuildInfoString, '\n');

        fontSize(hasNewline ? d_roundToIntPositive(theme.fontSize * 0.8f) : theme.fontSize);
        fillColor(hasNewline ? theme.textDarkColor : theme.textMidColor);
        textAlign(ALIGN_BOTTOM|ALIGN_RIGHT);

        textBox(0,
                getHeight() - theme.padding - (hasNewline ? theme.fontSize : 0),
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

        image = createImageFromMemory(Logo::signetData, Logo::signetDataSize, 0);
        image2x = createImageFromMemory(Logo::signet_2xData, Logo::signet_2xDataSize, 0);
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
        const uint width = getWidth();
        const uint height = getHeight();
        const double scaleFactor = getTopLevelWidget()->getScaleFactor();

        beginPath();
        rect(0, 0, width, height);
        fillPaint(imagePattern(0, 0, width, height, 0, scaleFactor >= 1.5 ? image2x : image, 1));
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
                  public DoubleClickHelper::Callback,
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
    NanoImage imageName;

    // for when theme changes
    bool resizeOnNextIdle = false;

    // little helper for text input on double click
    ScopedPointer<DoubleClickHelper> doubleClickHelper;

    // cached enabled state
    struct {
        bool global = true;
        bool leveler = true;
        bool timbre = true;
        bool style = true;
    } enabled;

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

        if (scaleFactor >= 1.5)
            imageName = createImageFromMemory(Name::name_2xData, Name::name_2xDataSize, 0);
        else
            imageName = createImageFromMemory(Name::nameData, Name::nameDataSize, 0);

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
        contentGroup.adjustSize();
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
        case kParameter_bypass_leveler:
            enabled.leveler = value < 0.5f;
            inputLevelerGroup.enableSwitch.setChecked(enabled.leveler, false);
            inputLevelerGroup.leveler.setEnabled(enabled.leveler && enabled.global);
            inputLevelerGroup.targetKnob.setEnabled(enabled.leveler && enabled.global, false);
           #ifdef PODCAST_MASTER
            outputLevelerGroup.leveler.setEnabled(enabled.leveler && enabled.global);
           #endif
            break;
        case kParameter_bypass_timbre:
            enabled.timbre = value < 0.5f;
            contentGroup.timbreSwitch.setChecked(enabled.timbre, false);
            contentGroup.timbreKnob.setEnabled(enabled.timbre && enabled.global, false);
            contentGroup.graph.setEnabled2(enabled.timbre && enabled.global);
           #ifdef PODCAST_TRACK
            contentGroup.timbreStrengthSlider.setEnabled(enabled.timbre && enabled.global, false);
           #endif
            break;
        case kParameter_bypass_style:
            enabled.style = value < 0.5f;
            contentGroup.styleSwitch.setChecked(enabled.style, false);
            contentGroup.styleKnob.setEnabled(enabled.style && enabled.global, false);
            contentGroup.graph.setEnabled1(enabled.style && enabled.global);
            break;
        case kParameter_bypass_global:
            enabled.global = value < 0.5f;
           #ifndef __MOD_DEVICES__
            topCenteredGroup.globalEnableSwitch.setChecked(enabled.global, false);
           #endif
            inputGroup.meter.setEnabled(enabled.global);
            inputGroup.gainKnob.setEnabled(enabled.global, false);
            outputGroup.meter.setEnabled(enabled.global);
            inputLevelerGroup.enableSwitch.setEnabled(enabled.leveler && enabled.global, false);
            inputLevelerGroup.leveler.setEnabled(enabled.leveler && enabled.global);
            inputLevelerGroup.targetKnob.setEnabled(enabled.leveler && enabled.global, false);
           #ifdef PODCAST_MASTER
            outputLevelerGroup.leveler.setEnabled(enabled.leveler && enabled.global);
           #endif
            contentGroup.timbreSwitch.setEnabled(enabled.timbre && enabled.global, false);
            contentGroup.timbreKnob.setEnabled(enabled.timbre && enabled.global, false);
            contentGroup.graph.setEnabled2(enabled.timbre && enabled.global);
           #ifdef PODCAST_TRACK
            contentGroup.timbreStrengthSlider.setEnabled(enabled.timbre && enabled.global, false);
           #endif
            contentGroup.styleSwitch.setEnabled(enabled.style && enabled.global, false);
            contentGroup.styleKnob.setEnabled(enabled.style && enabled.global, false);
            contentGroup.graph.setEnabled1(enabled.style && enabled.global);
            break;
        case kParameter_input_gain:
            inputGroup.gainKnob.setValue(value, false);
            break;
        case kParameter_leveler_target:
            inputLevelerGroup.targetKnob.setValue(value, false);
            break;
        case kParameter_timbre:
            contentGroup.timbreKnob.setValue(value, false);
           #ifdef PODCAST_MASTER
            contentGroup.graph.update2(value);
           #endif
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

        // image name
        const Size<uint> imgSize = imageName.getSize();
        const double targetHeight = 28 * getScaleFactor();
        const double imgScaleFactor = targetHeight / imgSize.getHeight();

        const int x = inputGroup.getAbsoluteX() + theme.padding;
        const int y = inputGroup.getAbsoluteY() * 0.5f - targetHeight * 0.5f;
        beginPath();
        rect(x, y, imgSize.getWidth() * imgScaleFactor, targetHeight);
        fillPaint(imagePattern(x, y,
                               imgSize.getWidth() * imgScaleFactor,
                               imgSize.getHeight() * imgScaleFactor,
                               0, imageName, 1.f));
        fill();

        /*
        fontSize(theme.fontSize * 1.5);
        fillColor(theme.nameColor);
        textAlign(ALIGN_LEFT|ALIGN_MIDDLE);
        text(inputGroup.getAbsoluteX() + theme.padding,
             inputGroup.getAbsoluteY() / 2 + theme.padding,
            #ifdef PODCAST_MASTER
             "MASTER",
            #else
             "TRACK",
            #endif
             nullptr);
        */
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
            resizeWidgets(getWidth(), getHeight());

            // TODO calculate next size to use

            resizeOnNextIdle = false;
        }
    }

    /* ----------------------------------------------------------------------------------------------------------------
     * Custom Widget Callbacks */

    void buttonClicked(SubWidget* const widget, int) override
    {
        const uint id = widget->getId();

        QuantumRadioSwitch* const qswitch = reinterpret_cast<QuantumRadioSwitch*>(widget);
        DISTRHO_SAFE_ASSERT_RETURN(qswitch != nullptr,);

        const bool enable = qswitch->isChecked();

        float value;

        switch (id)
        {
        // bypass switches, inverted operation
        case kParameter_bypass_leveler:
        case kParameter_bypass_timbre:
        case kParameter_bypass_style:
        case kParameter_bypass_global:
            value = enable ? 0.f : 1.f;
            break;
        default:
            return;
        }

        editParameter(id, true);
        setParameterValue(id, value);
        editParameter(id, false);

        // extra handling for setting enabled color
        switch (id)
        {
        case kParameter_bypass_leveler:
            enabled.leveler = enable;
            inputLevelerGroup.leveler.setEnabled(enable && enabled.global);
            inputLevelerGroup.targetKnob.setEnabled(enable && enabled.global, false);
           #ifdef PODCAST_MASTER
            outputLevelerGroup.leveler.setEnabled(enable && enabled.global);
           #endif
            break;
        case kParameter_bypass_timbre:
            enabled.timbre = enable;
            contentGroup.timbreKnob.setEnabled(enable && enabled.global, false);
            contentGroup.graph.setEnabled2(enable && enabled.global);
           #ifdef PODCAST_TRACK
            contentGroup.timbreStrengthSlider.setEnabled(enable && enabled.global, false);
           #endif
            break;
        case kParameter_bypass_style:
            enabled.style = enable;
            contentGroup.styleKnob.setEnabled(enable && enabled.global, false);
            contentGroup.graph.setEnabled1(enable && enabled.global);
            break;
        case kParameter_bypass_global:
            enabled.global = enable;
            inputGroup.meter.setEnabled(enable);
            inputGroup.gainKnob.setEnabled(enable, false);
            outputGroup.meter.setEnabled(enable);
            inputLevelerGroup.enableSwitch.setEnabled(enable && enabled.leveler, false);
            inputLevelerGroup.leveler.setEnabled(enable && enabled.leveler);
            inputLevelerGroup.targetKnob.setEnabled(enable && enabled.leveler, false);
           #ifdef PODCAST_MASTER
            outputLevelerGroup.leveler.setEnabled(enable && enabled.leveler);
           #endif
            contentGroup.timbreSwitch.setEnabled(enable && enabled.timbre, false);
            contentGroup.timbreKnob.setEnabled(enable && enabled.timbre, false);
            contentGroup.graph.setEnabled2(enable && enabled.timbre);
           #ifdef PODCAST_TRACK
            contentGroup.timbreStrengthSlider.setEnabled(enable && enabled.timbre, false);
           #endif
            contentGroup.styleSwitch.setEnabled(enable && enabled.style, false);
            contentGroup.styleKnob.setEnabled(enable && enabled.style, false);
            contentGroup.graph.setEnabled1(enable && enabled.style);
            break;
        }
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

       #ifdef PODCAST_MASTER
        if (widget->getId() == kParameter_timbre)
            contentGroup.graph.update2(value);
       #endif
    }

    void knobDoubleClicked(SubWidget* const widget) override
    {
        doubleClickHelper = nullptr;

#if 1
        // value entry
        bool isInteger;
        float value;
        uint fontSize = theme.fontSize;
        Rectangle<int> area;

        switch (widget->getId())
        {
        case kParameter_input_gain:
        case kParameter_leveler_target:
        {
            QuantumSmallKnob* const knob = dynamic_cast<QuantumSmallKnob*>(widget);
            DISTRHO_SAFE_ASSERT_RETURN(knob != nullptr,);
            isInteger = true;
            value = knob->getValue();

            const uint knobWidth = knob->getWidth();
            area = Rectangle<int>(knob->getAbsoluteX() + knobWidth * 0.125,
                                  knob->getAbsoluteY() + knobWidth / 2 - theme.fontSize,
                                  knobWidth * 0.75,
                                  theme.fontSize * 1.5);
            break;
        }
        case kParameter_style:
        case kParameter_timbre:
        {
            QuantumKnob* const knob = dynamic_cast<QuantumKnob*>(widget);
            DISTRHO_SAFE_ASSERT_RETURN(knob != nullptr,);
            isInteger = false;
            value = knob->getValue();
            fontSize *= 2;

            const uint knobWidth = knob->getWidth();
            area = Rectangle<int>(knob->getAbsoluteX() + knobWidth * 0.125,
                                  knob->getAbsoluteY() + knobWidth / 2 - theme.fontSize,
                                  knobWidth * 0.75,
                                  theme.fontSize * 2.5);
            break;
        }
       #ifdef PODCAST_TRACK
        case kParameter_timbre_strength:
        {
            QuantumValueSlider* const slider = dynamic_cast<QuantumValueSlider*>(widget);
            DISTRHO_SAFE_ASSERT_RETURN(slider != nullptr,);
            isInteger = true;
            value = slider->getValue();
            area = slider->getAbsoluteArea();
            break;
        }
       #endif
        default:
            return;
        }

        char text[32] = {};
        if (isInteger)
            std::snprintf(text, 31, "%d", static_cast<int>(value));
        else
            std::snprintf(text, 31, "%.2f", std::round(value * 100.f)/100.f);

        doubleClickHelper = new DoubleClickHelper(this, this, widget, text, area, theme, fontSize);
#else
        // reset to default
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
#endif
    }

    static inline float safeNumberFromText(const uint id, const bool isInteger, const char* const text) noexcept
    {
        float value;

        if (isInteger)
        {
            try {
                value = static_cast<float>(std::atoi(text));
            } DISTRHO_SAFE_EXCEPTION_RETURN("safeNumberFromText", kParameterRanges[id].def);
        }
        else
        {
            const ScopedSafeLocale ssl;

            try {
                value = static_cast<float>(std::atof(text));
            } DISTRHO_SAFE_EXCEPTION_RETURN("safeNumberFromText", kParameterRanges[id].def);
        }

        return std::max(kParameterRanges[id].min, std::min(kParameterRanges[id].max, value));
    }

    void doubleClickHelperDone(SubWidget* const widget, const char* const text) override
    {
        doubleClickHelper = nullptr;
        repaint();

        const uint id = widget->getId();

        switch (id)
        {
        case kParameter_input_gain:
        case kParameter_leveler_target:
        {
            QuantumSmallKnob* const knob = dynamic_cast<QuantumSmallKnob*>(widget);
            DISTRHO_SAFE_ASSERT_RETURN(knob != nullptr,);
            knob->setValue(safeNumberFromText(id, true, text), true);
            break;
        }
        case kParameter_style:
        case kParameter_timbre:
        {
            QuantumKnob* const knob = dynamic_cast<QuantumKnob*>(widget);
            DISTRHO_SAFE_ASSERT_RETURN(knob != nullptr,);
            knob->setValue(safeNumberFromText(id, false, text), true);
            break;
        }
       #ifdef PODCAST_TRACK
        case kParameter_timbre_strength:
        {
            QuantumValueSlider* const slider = dynamic_cast<QuantumValueSlider*>(widget);
            DISTRHO_SAFE_ASSERT_RETURN(slider != nullptr,);
            slider->setValue(safeNumberFromText(id, true, text), true);
            break;
        }
       #endif
        default:
            return;
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
            resizeOnNextIdle = true;
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
