// Copyright 2022-2025 Filipe Coelho <falktx@falktx.com>
// SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#include "DearImGui.hpp"
#include "PodcastTheme.hpp"

#include "Application.hpp"
#include "extra/String.hpp"

#include <list>

START_NAMESPACE_DGL

// --------------------------------------------------------------------------------------------------------------------

class InspectorWindow : public ImGuiTopLevelWidget
{
    std::list<SubWidget*> subwidgets;

    PodcastTheme& theme;
    QuantumThemeCallback* const themeChangeCallback;

public:
    bool isOpen = true;
    double userScaling = 1;

    explicit InspectorWindow(TopLevelWidget* const tlw, PodcastTheme& t, QuantumThemeCallback* const cb)
        : ImGuiTopLevelWidget(tlw->getWindow()),
          subwidgets(tlw->getChildren()),
          theme(t),
          themeChangeCallback(cb)
    {
        ResizeEvent ev;
        ev.size = tlw->getSize();
        onResize(ev);
    }

protected:
    void onImGuiDisplay() override
    {
        if (!isOpen)
            return;

        double scaleFactor = getScaleFactor() * userScaling;
        const double initialSize = 1200 * scaleFactor;

        ImGui::SetNextWindowPos(ImVec2(initialSize / 4, initialSize / 16), ImGuiCond_Once);
        ImGui::SetNextWindowSize(ImVec2(initialSize / 2, initialSize / 3), ImGuiCond_Once);

        ImGui::Begin("Theme", &isOpen, ImGuiWindowFlags_NoCollapse);

        int val;
        bool changedSize = false;
        bool changedColors = false;

        if (ImGui::Button("Reset"))
        {
            changedColors = true;
            theme = PodcastTheme();
            theme.borderSize *= scaleFactor;
            theme.padding *= scaleFactor;
            theme.fontSize *= scaleFactor;
            theme.sidelabelsFontSize *= scaleFactor;
            theme.textHeight *= scaleFactor;
            theme.knobIndicatorSize *= scaleFactor;
            theme.widgetLineSize *= scaleFactor;
            theme.windowPadding *= scaleFactor;
            theme.textPixelRatioWidthCompensation = static_cast<uint>(scaleFactor - 1.0 + 0.25);
        }

        /*
        ImGui::SameLine();

        if (ImGui::Button("Save"))
        {
        }
        */

        val = static_cast<int>(theme.borderSize / scaleFactor + 0.5f);
        if (ImGui::SliderInt("Border Size", &val, 1, 10))
        {
            changedSize = true;
            theme.borderSize = val * scaleFactor;
        }

        val = static_cast<int>(theme.padding / scaleFactor + 0.5f);
        if (ImGui::SliderInt("Padding", &val, 0, 20))
        {
            changedSize = true;
            theme.padding = val * scaleFactor;
        }

        val = static_cast<int>(theme.fontSize / scaleFactor + 0.5f);
        if (ImGui::SliderInt("Font Size", &val, 8, 50))
        {
            changedSize = true;
            theme.fontSize = val * scaleFactor;
            if (theme.fontSize > theme.textHeight)
                theme.textHeight = theme.fontSize;
        }

        val = static_cast<int>(theme.sidelabelsFontSize / scaleFactor + 0.5f);
        if (ImGui::SliderInt("Size Labels Font Size", &val, 8, 20))
        {
            changedSize = true;
            theme.sidelabelsFontSize = val * scaleFactor;
        }

        val = static_cast<int>(theme.textHeight / scaleFactor + 0.5f);
        if (ImGui::SliderInt("Text Height", &val, theme.fontSize / scaleFactor, 60))
        {
            changedSize = true;
            theme.textHeight = val * scaleFactor;
        }

        val = static_cast<int>(theme.knobIndicatorSize / scaleFactor + 0.5f);
        if (ImGui::SliderInt("Knob Indicator Size", &val, 2, 8))
        {
            changedSize = true;
            theme.knobIndicatorSize = val * scaleFactor;
        }

        val = static_cast<int>(theme.widgetLineSize / scaleFactor + 0.5f);
        if (ImGui::SliderInt("Widget Line Size", &val, 1, 10))
        {
            changedSize = true;
            theme.widgetLineSize = val * scaleFactor;
        }

        changedColors |= ImGui::ColorEdit4("Bars", theme.barsColor.rgba);
        changedColors |= ImGui::ColorEdit4("Bars Alternative", theme.barsAlternativeColor.rgba);
        changedColors |= ImGui::ColorEdit4("Knob Rim", theme.knobRimColor.rgba);
        changedColors |= ImGui::ColorEdit4("Knob Rim Alternative", theme.knobAlternativeRimColor.rgba);
        changedColors |= ImGui::ColorEdit4("Level Meter", theme.levelMeterColor.rgba);
        changedColors |= ImGui::ColorEdit4("Level Meter Alternative", theme.levelMeterAlternativeColor.rgba);
        changedColors |= ImGui::ColorEdit4("Plugin Name", theme.nameColor.rgba);
        changedColors |= ImGui::ColorEdit4("Widget Background", theme.widgetBackgroundColor.rgba);
        changedColors |= ImGui::ColorEdit4("Widget Active", theme.widgetActiveColor.rgba);
        changedColors |= ImGui::ColorEdit4("Widget Alternative", theme.widgetAlternativeColor.rgba);
        changedColors |= ImGui::ColorEdit4("Widget Foreground", theme.widgetForegroundColor.rgba);
        changedColors |= ImGui::ColorEdit4("Window Background", theme.windowBackgroundColor.rgba);
        changedColors |= ImGui::ColorEdit4("Text Light", theme.textLightColor.rgba);
        changedColors |= ImGui::ColorEdit4("Text Mid", theme.textMidColor.rgba);
        changedColors |= ImGui::ColorEdit4("Text Dark", theme.textDarkColor.rgba);

        ImGui::Separator();
        ImGui::TextUnformatted("Widgets");
        displaySubWidget(subwidgets);

        ImGui::End();

        if (changedSize || changedColors)
        {
            theme.windowPadding = theme.borderSize + theme.padding * 3;
            themeChangeCallback->quantumThemeChanged(changedSize, changedColors);
        }
    }

private:
    static void displaySubWidget(const std::list<SubWidget*>& subwidgets)
    {
        for (SubWidget* w : subwidgets)
        {
            if (ImGui::TreeNode(w->getName()))
            {
                float val;

                if (ImGui::Button("Bring To Front"))
                    w->toFront();

                ImGui::SameLine();

                if (w->isVisible())
                {
                    if (ImGui::Button("Hide"))
                        w->hide();
                }
                else
                {
                    if (ImGui::Button("Show"))
                        w->show();
                }

                val = w->getAbsoluteX();
                if (ImGui::DragFloat("Absolute X", &val))
                    w->setAbsoluteX(val);

                val = w->getAbsoluteY();
                if (ImGui::DragFloat("Absolute Y", &val))
                    w->setAbsoluteY(val);

                val = w->getWidth();
                if (ImGui::DragFloat("Width", &val))
                    w->setWidth(std::max(0.f, val));

                val = w->getHeight();
                if (ImGui::DragFloat("Height", &val))
                    w->setHeight(std::max(0.f, val));

                displaySubWidget(w->getChildren());

                ImGui::TreePop();
            }
        }
    }
};

// --------------------------------------------------------------------------------------------------------------------

END_NAMESPACE_DGL
