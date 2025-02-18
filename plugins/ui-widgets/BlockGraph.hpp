/*
 * Block Graph widget for DPF
 * Copyright (C) 2022-2025 Filipe Coelho <falktx@falktx.com>
 *
 * Permission to use, copy, modify, and/or distribute this software for any purpose with
 * or without fee is hereby granted, provided that the above copyright notice and this
 * permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES WITH REGARD
 * TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS. IN
 * NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER
 * IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN
 * CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#pragma once

#include "DearImGui.hpp"
#include "PodcastTheme.hpp"
#include "extra/ValueSmoother.hpp"

#include "implot/implot.h"

#include <array>

// --------------------------------------------------------------------------------------------------------------------

#include "implot/implot_internal.h"

namespace ImPlot {

// AddTicksCustom with major arg
static void AddTicksCustom(const double* values, const char* const labels[], int n, int major, ImPlotTicker& ticker, ImPlotFormatter formatter, void* data) {
    for (int i = 0; i < n; ++i) {
        if (labels != nullptr)
            ticker.AddTick(values[i], major == i, 0, true, labels[i]);
        else
            ticker.AddTick(values[i], major == i, 0, true, formatter, data);
    }
}

// SetupAxisTicks with major arg
static void SetupAxisTicks(ImAxis idx, const double* values, int n_ticks, const char* const labels[], bool show_default, int major) {
    ImPlotContext& gp = *GImPlot;
    IM_ASSERT_USER_ERROR(gp.CurrentPlot != nullptr && !gp.CurrentPlot->SetupLocked,
                        "Setup needs to be called after BeginPlot and before any setup locking functions (e.g. PlotX)!");
    ImPlotPlot& plot = *gp.CurrentPlot;
    ImPlotAxis& axis = plot.Axes[idx];
    IM_ASSERT_USER_ERROR(axis.Enabled, "Axis is not enabled! Did you forget to call SetupAxis()?");
    axis.ShowDefaultTicks = show_default;
    AddTicksCustom(values,
                  labels,
                  n_ticks,
                  major,
                  axis.Ticker,
                  axis.Formatter ? axis.Formatter : Formatter_Default,
                  (axis.Formatter && axis.FormatterData) ? axis.FormatterData : axis.HasFormatSpec ? axis.FormatSpec : (void*)IMPLOT_LABEL_FORMAT);
}

static void ScaleAllSizes(ImPlotStyle& style, const float scale_factor)
{
    style.LineWeight = ImFloor(style.LineWeight * scale_factor);
    style.MarkerSize = ImFloor(style.MarkerSize * scale_factor);
    style.MarkerWeight = ImFloor(style.MarkerWeight * scale_factor);
    style.ErrorBarSize = ImFloor(style.ErrorBarSize * scale_factor);
    style.ErrorBarWeight = ImFloor(style.ErrorBarWeight * scale_factor);
    style.DigitalBitHeight = ImFloor(style.DigitalBitHeight * scale_factor);
    style.DigitalBitGap = ImFloor(style.DigitalBitGap * scale_factor);
    style.PlotBorderSize = ImFloor(style.PlotBorderSize * scale_factor);
    style.MajorTickLen = ImFloor(style.MajorTickLen * scale_factor);
    style.MinorTickLen = ImFloor(style.MinorTickLen * scale_factor);
    style.MajorTickSize = ImFloor(style.MajorTickSize * scale_factor);
    style.MinorTickSize = ImFloor(style.MinorTickSize * scale_factor);
    style.MajorGridSize = ImFloor(style.MajorGridSize * scale_factor);
    style.MinorGridSize = ImFloor(style.MinorGridSize * scale_factor);
    style.PlotPadding = ImFloor(style.PlotPadding * scale_factor);
    style.LabelPadding = ImFloor(style.LabelPadding * scale_factor);
    style.LegendPadding = ImFloor(style.LegendPadding * scale_factor);
    style.LegendInnerPadding = ImFloor(style.LegendInnerPadding * scale_factor);
    style.LegendSpacing = ImFloor(style.LegendSpacing * scale_factor);
    style.MousePosPadding = ImFloor(style.MousePosPadding * scale_factor);
    style.AnnotationPadding = ImFloor(style.AnnotationPadding * scale_factor);
    style.PlotDefaultSize = ImFloor(style.PlotDefaultSize * scale_factor);
    style.PlotMinSize = ImFloor(style.PlotMinSize * scale_factor);
}

}

// --------------------------------------------------------------------------------------------------------------------

START_NAMESPACE_DGL

// --------------------------------------------------------------------------------------------------------------------

constexpr inline ImVec4 ImVec4Color(const Color& c)
{
    return ImVec4(c.red, c.green, c.blue, c.alpha);
}

class BlockGraph : public ImGuiSubWidget
{
    ImPlotContext* const context;
    const PodcastTheme& theme;
    const float lineWeight;

   #ifdef PODCAST_MASTER
    static constexpr float lineFillOpacity = 0.666f;
    std::array<float, 5> buffer1;
    std::array<float, 5> buffer2;
   #else
    static constexpr float lineFillOpacity = 0.15f;
    std::array<float, 20> buffer1;
    std::array<float, 21> buffer2;
   #endif

    std::array<LinearValueSmoother, 5> values1;

    bool enabled[2] = { true, true };

public:
    explicit BlockGraph(TopLevelWidget* const parent, const PodcastTheme& t)
        : ImGuiSubWidget(parent),
          context(ImPlot::CreateContext()),
          theme(t),
          lineWeight(parent->getScaleFactor() * 2)
    {
        setName("BlockGraph");

        for (LinearValueSmoother& value1 : values1)
        {
            value1.setSampleRate(60.f);
            value1.setTimeConstant(1.f / 15.f);
        }

        ImGuiStyle& style(ImGui::GetStyle());
        style.FramePadding = style.WindowPadding = ImVec2();
        style.WindowRounding = style.WindowBorderSize = 0.f;
        style.Colors[ImGuiCol_FrameBg] = ImVec4();

        ImPlotStyle& pstyle(ImPlot::GetStyle());
        ImPlot::ScaleAllSizes(pstyle, parent->getScaleFactor());
        pstyle.PlotPadding = ImVec2();

        clear();
    }

    ~BlockGraph() override
    {
        ImPlot::DestroyContext(context);
    }

    void clear()
    {
        buffer1.fill(0.f);
        buffer2.fill(0.f);

        for (LinearValueSmoother& value1 : values1)
        {
            value1.setTargetValue(0.f);
            value1.clearToTargetValue();
        }
    }

    void setEnabled1(const bool enable)
    {
        enabled[0] = enable;
    }

    void setEnabled2(const bool enable)
    {
        enabled[1] = enable;
    }

    void update1(const int block, const float value)
    {
        values1[block].setTargetValue(value);
    }

   #ifdef PODCAST_MASTER
    void update2(const float value)
    {
        buffer2[0] = - value;
        buffer2[1] = - value * 0.5f;
        buffer2[3] = value * 0.5f;
        buffer2[4] = value;
    }
   #else
    void update2(const int block, const float value)
    {
        buffer2[block] = value;
    }
   #endif

protected:
    void onImGuiDisplay() override
    {
        ImPlot::SetCurrentContext(context);

        ImGuiStyle& style(ImGui::GetStyle());
        style.Colors[ImGuiCol_Border] = ImVec4Color(theme.widgetBackgroundColor);
        style.Colors[ImGuiCol_Text] = ImVec4Color(theme.textDarkColor);
        style.Colors[ImGuiCol_WindowBg] = ImVec4Color(Color(theme.windowBackgroundColor, theme.widgetBackgroundColor, 0.75f));

        ImPlotStyle& pstyle(ImPlot::GetStyle());
        pstyle.Colors[ImPlotCol_Crosshairs] = ImVec4Color(theme.textDarkColor.withAlpha(0.5f));

        ImGui::SetNextWindowPos(ImVec2(0, 0));
        ImGui::SetNextWindowSize(ImVec2(getWidth(), getHeight()));

        constexpr const ImGuiWindowFlags windowFlags = 0
            |ImGuiWindowFlags_NoDecoration
            |ImGuiWindowFlags_NoMove
            |ImGuiWindowFlags_NoScrollWithMouse
            |ImGuiWindowFlags_AlwaysAutoResize
            |ImGuiWindowFlags_NoBackground;

        ImGui::Begin("BlockGraph", nullptr, windowFlags);

        constexpr const ImPlotFlags plotFlags = 0
            |ImPlotFlags_NoTitle
            |ImPlotFlags_NoLegend
            |ImPlotFlags_NoMouseText
            |ImPlotFlags_NoMenus
            |ImPlotFlags_NoBoxSelect
            |ImPlotFlags_NoFrame
            |ImPlotFlags_Crosshairs;

        if (ImPlot::BeginPlot("##blockgraph", ImVec2(getWidth(), getHeight()), plotFlags))
        {
            constexpr const ImPlotAxisFlags axisFlags = 0
                |ImPlotAxisFlags_NoLabel
                |ImPlotAxisFlags_NoMenus
                |ImPlotAxisFlags_NoSideSwitch
                |ImPlotAxisFlags_NoHighlight
                |ImPlotAxisFlags_Foreground
                |ImPlotAxisFlags_Lock;
           #ifdef PODCAST_MASTER
            constexpr const char* axisLabelsX[5] = {
                "60",
                "225",
                "850",
                "3.2k",
                "12k",
            };
           #else
            constexpr const char* axisLabelsX[20] = {
                "60",
                "80",
                "100",
                "140",
                "185",
                "240",
                "320",
                "420",
                "560",
                "740",
                "975",
                "1.3k",
                "1.7k",
                "2.3k",
                "3k",
                "4k",
                "5.2k",
                "7k",
                "9k",
                "12k",
            };
           #endif
            constexpr const double axisValuesX[20] = {
                0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19,
            };
            constexpr const char* axisLabelsY[9] = {
                "-12", "-9", "-6", "-3", "0", "3", "6", "9", "12",
            };
            constexpr const double axisValuesY[9] = {
                -12, -9, -6, -3, 0, 3, 6, 9, 12,
            };
            ImPlot::SetupAxis(ImAxis_X1, nullptr, axisFlags);
            ImPlot::SetupAxis(ImAxis_Y1, nullptr, axisFlags | ImPlotAxisFlags_Opposite);
            ImPlot::SetupAxisLimits(ImAxis_X1, 0, ARRAY_SIZE(axisLabelsX), ImGuiCond_Always);
            ImPlot::SetupAxisLimits(ImAxis_Y1, -13, 13, ImGuiCond_Always);
            ImPlot::SetupAxisScale(ImAxis_Y1, ImPlotScale_Linear);
            ImPlot::SetupAxisTicks(ImAxis_X1, axisValuesX, ARRAY_SIZE(axisLabelsX), axisLabelsX);
            ImPlot::SetupAxisTicks(ImAxis_Y1, axisValuesY, ARRAY_SIZE(axisLabelsY), axisLabelsY, false, 4);
            ImPlot::SetupFinish();

            ImPlot::SetNextFillStyle(ImVec4Color(enabled[0] ? theme.knobAlternativeRingColor : theme.textDarkColor.withAlpha(0.5f)));
           #ifdef PODCAST_MASTER
            for (int i = 0; i < 5; ++i)
                buffer1[i] = values1[i].next();
            ImPlot::PlotBars("Multiband Compressor Gain", buffer1.data(), 5, 1.0, 0.5);
           #else
            for (int i = 0; i < 5; ++i)
                buffer1[i * 4] = buffer1[i * 4 + 1] = buffer1[i * 4 + 2] = buffer1[i * 4 + 3] = values1[i].next();
            ImPlot::PlotBars("Multiband Compressor Gain", buffer1.data(), 20, 1.0, 0.5);
           #endif

            ImPlot::SetNextLineStyle(ImVec4Color(enabled[1] ? theme.knobRingColor : theme.textDarkColor.withAlpha(0.5f)), lineWeight);
            ImPlot::SetNextFillStyle(ImVec4Color(enabled[1] ? theme.knobRingColor : theme.textDarkColor.withAlpha(0.5f)), lineFillOpacity);
           #ifdef PODCAST_MASTER
            ImPlot::PlotLine("Tilt", buffer2.data(), 5, 1.25, 0, ImPlotLineFlags_Shaded);
           #else
            buffer2[20] = buffer2[19];
            ImPlot::PlotStairs("Spectral Balancer Gain", buffer2.data(), 21, 1, 0, ImPlotStairsFlags_Shaded);
           #endif

            ImPlot::EndPlot();
        }

        ImGui::End();
    }
};

// --------------------------------------------------------------------------------------------------------------------

END_NAMESPACE_DGL
