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
#include "Quantum.hpp"

#include "TopLevelWidget.hpp"
#include "implot/implot.h"
#include "src/DistrhoDefines.h"

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

}

// --------------------------------------------------------------------------------------------------------------------

START_NAMESPACE_DGL

// --------------------------------------------------------------------------------------------------------------------

constexpr inline ImVec4 ImVec4Color(const Color& c)
{
    return ImVec4(c.red, c.blue, c.green, c.alpha);
}

class BlockGraph : public ImGuiSubWidget
{
    ImPlotContext* const context;

   #ifdef PODCAST_MASTER
    std::array<float, 5> buffer1;
   #else
    std::array<float, 5> buffer1;
    std::array<float, 20> buffer2;
   #endif

public:
    explicit BlockGraph(TopLevelWidget* const parent, const QuantumTheme& theme)
        : ImGuiSubWidget(parent),
          context(ImPlot::CreateContext())
    {
        setName("BlockGraph");

        ImVec4 colors[2] = {
            ImVec4Color(theme.levelMeterColor),
            ImVec4Color(theme.levelMeterAlternativeColor),
        };

        colors[0].w = colors[1].w = 0.666f;

        ImGuiStyle& style(ImGui::GetStyle());
        style.WindowPadding = ImVec2();
        style.WindowRounding = style.WindowBorderSize = 0.f;
        style.Colors[ImGuiCol_FrameBg] = ImVec4();

        ImPlotStyle& plotSyle(ImPlot::GetStyle());
        plotSyle.Colormap = ImPlot::AddColormap("BlockGraph", colors, ARRAY_SIZE(colors));

        clear();
    }

    ~BlockGraph() override
    {
        ImPlot::DestroyContext(context);
    }

    void clear()
    {
        buffer1.fill(0.f);
       #ifndef PODCAST_MASTER
        buffer2.fill(0.f);
       #endif
    }

    void update1(const int block, const float value)
    {
        buffer1[block] = value;
    }

   #ifndef PODCAST_MASTER
    void update2(const int block, const float value)
    {
        buffer2[block] = value;
    }
   #endif

protected:
    void onImGuiDisplay() override
    {
        ImPlot::SetCurrentContext(context);

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
                |ImPlotAxisFlags_Lock;
            constexpr const ImPlotLegendFlags legendFlags = 0
                |ImPlotLegendFlags_NoMenus
                |ImPlotLegendFlags_Horizontal;
           #ifdef PODCAST_MASTER
            constexpr const char* axisLabelsX[6] = {
                "", "60", "225", "850", "3.2k", "12k",
            };
           #else
            constexpr const char* axisLabelsX[21] = {
                "", "60", "80", "100", "140", "185", "240", "320", "420", "560", "740", "975", "1.3k", "1.7k", "2.3k", "3k", "4k", "5.2k", "7k", "9k", "12k",
            };
           #endif
            constexpr const double axisValuesX[21] = {
                0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
            };
            constexpr const char* axisLabelsY[9] = {
                "-12", "-9", "-6", "-3", "0", "3", "6", "9", "12",
            };
            constexpr const double axisValuesY[9] = {
                -12, -9, -6, -3, 0, 3, 6, 9, 12,
            };
            ImPlot::SetupAxis(ImAxis_X1, "Freq (Hz)", axisFlags);
            ImPlot::SetupAxis(ImAxis_Y1, "Gain (dB)", axisFlags | ImPlotAxisFlags_Opposite);
            ImPlot::SetupAxisLimits(ImAxis_X1, 0.5, ARRAY_SIZE(axisLabelsX) - 0.5, ImGuiCond_Always);
            ImPlot::SetupAxisLimits(ImAxis_Y1, -13, 13, ImGuiCond_Always);
            ImPlot::SetupAxisScale(ImAxis_Y1, ImPlotScale_Linear);
            ImPlot::SetupAxisTicks(ImAxis_X1, axisValuesX, ARRAY_SIZE(axisLabelsX), axisLabelsX);
            ImPlot::SetupAxisTicks(ImAxis_Y1, axisValuesY, ARRAY_SIZE(axisLabelsY), axisLabelsY, false, 4);
            ImPlot::SetupLegend(ImPlotLocation_NorthWest, legendFlags);
            ImPlot::SetupFinish();

           #ifdef PODCAST_MASTER
            ImPlot::PlotBars("Multiband Compressor Gain", buffer1.data(), 5, 0.9, 1.0);
           #else
            ImPlot::PlotShaded("Multiband Compressor Gain", buffer1.data(), 5, 0, 5.5);
            // ImPlot::PlotBars("Multiband Compressor Gain", buffer1.data(), 20, 1.0, 1.0);
            ImPlot::PlotBars("Spectral Balancer Gain", buffer2.data(), 20, 0.8, 1.0);
           #endif

            ImPlot::EndPlot();
        }

        ImGui::End();
    }
};

// --------------------------------------------------------------------------------------------------------------------

END_NAMESPACE_DGL
