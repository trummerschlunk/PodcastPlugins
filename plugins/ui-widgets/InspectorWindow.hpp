// Copyright 2022-2025 Filipe Coelho <falktx@falktx.com>
// SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#include "DearImGui.hpp"
#include "PodcastTheme.hpp"
#include "DistrhoPluginUtils.hpp"
#include "extra/Filesystem.hpp"

#include "json.hpp"

#include <list>

START_NAMESPACE_DGL

// --------------------------------------------------------------------------------------------------------------------

static std::string ColorToString(const Color& color)
{
    char str[10];
    std::snprintf(str,
                  sizeof(str),
                  "#%02x%02x%02x",
                  d_roundToIntPositive(color.red * 255),
                  d_roundToIntPositive(color.green * 255),
                  d_roundToIntPositive(color.blue * 255));
    return str;
}

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
          themeChangeCallback(cb) {}

protected:
    void onImGuiDisplay() override
    {
        if (!isOpen)
            return;

        double scaleFactor = getScaleFactor() * userScaling;

        ImGui::SetNextWindowPos(ImVec2(90 * scaleFactor, 5 * scaleFactor), ImGuiCond_Once);
        ImGui::SetNextWindowSize(ImVec2(600 * scaleFactor, 490 * scaleFactor), ImGuiCond_Once);

        ImGui::Begin("Theme", &isOpen, ImGuiWindowFlags_NoCollapse);

        int val;
        bool changedSize = false;
        bool changedColors = false;

        if (ImGui::Button("Reset"))
        {
            changedColors = true;
            theme = PodcastTheme(scaleFactor, false);
        }

        ImGui::SameLine();

        if (ImGui::Button("Save"))
        {
            String filename(getConfigDir());
            filename += "PodcastTheme.json";

            const SafeFileWriter file(filename);
            if (file.ok())
            {
                nlohmann::json j;
                j["borderSize"] = d_roundToIntPositive(theme.borderSize / scaleFactor);
                j["padding"] = d_roundToIntPositive(theme.padding / scaleFactor);
                j["fontSize"] = d_roundToIntPositive(theme.fontSize / scaleFactor);
                j["textHeight"] = d_roundToIntPositive(theme.textHeight / scaleFactor);
                j["knobIndicatorSize"] = d_roundToIntPositive(theme.knobIndicatorSize / scaleFactor);
                j["widgetLineSize"] = d_roundToIntPositive(theme.widgetLineSize / scaleFactor);
                j["sidelabelsFontSize"] = d_roundToIntPositive(theme.sidelabelsFontSize / scaleFactor);
                j["levelMeterColor"] = ColorToString(theme.levelMeterColor);
                j["inputLevelBracket1"] = ColorToString(theme.inputLevelBracket1);
                j["inputLevelBracket2"] = ColorToString(theme.inputLevelBracket2);
                j["levelMeterAlternativeColor"] = ColorToString(theme.levelMeterAlternativeColor);
                j["knobRingColor"] = ColorToString(theme.knobRingColor);
                j["knobAlternativeRingColor"] = ColorToString(theme.knobAlternativeRingColor);
                j["widgetBackgroundColor"] = ColorToString(theme.widgetBackgroundColor);
                j["widgetActiveColor"] = ColorToString(theme.widgetActiveColor);
                j["widgetAlternativeColor"] = ColorToString(theme.widgetAlternativeColor);
                j["widgetForegroundColor"] = ColorToString(theme.widgetForegroundColor);
                j["windowBackgroundColor"] = ColorToString(theme.windowBackgroundColor);
                j["textLightColor"] = ColorToString(theme.textLightColor);
                j["textMidColor"] = ColorToString(theme.textMidColor);
                j["textDarkColor"] = ColorToString(theme.textDarkColor);

                const std::string jsonstr = j.dump(2, ' ', false, nlohmann::detail::error_handler_t::replace);

                file.write(jsonstr.c_str(), jsonstr.length());
            }
        }

        val = d_roundToIntPositive(theme.borderSize / scaleFactor);
        if (ImGui::SliderInt("Border Size", &val, 1, 10))
        {
            changedSize = true;
            theme.borderSize = val * scaleFactor;
        }

        val = d_roundToIntPositive(theme.padding / scaleFactor);
        if (ImGui::SliderInt("Padding", &val, 0, 20))
        {
            changedSize = true;
            theme.padding = val * scaleFactor;
        }

        val = d_roundToIntPositive(theme.fontSize / scaleFactor);
        if (ImGui::SliderInt("Font Size", &val, 8, 50))
        {
            changedSize = true;
            theme.fontSize = val * scaleFactor;
            if (theme.fontSize > theme.textHeight)
                theme.textHeight = theme.fontSize;
        }

        val = d_roundToIntPositive(theme.sidelabelsFontSize / scaleFactor);
        if (ImGui::SliderInt("Size Labels Font Size", &val, 8, 20))
        {
            changedSize = true;
            theme.sidelabelsFontSize = val * scaleFactor;
        }

        val = d_roundToIntPositive(theme.textHeight / scaleFactor);
        if (ImGui::SliderInt("Text Height", &val, theme.fontSize / scaleFactor, 60))
        {
            changedSize = true;
            theme.textHeight = val * scaleFactor;
        }

        val = d_roundToIntPositive(theme.knobIndicatorSize / scaleFactor);
        if (ImGui::SliderInt("Knob Indicator Size", &val, 2, 8))
        {
            changedSize = true;
            theme.knobIndicatorSize = val * scaleFactor;
        }

        val = d_roundToIntPositive(theme.widgetLineSize / scaleFactor);
        if (ImGui::SliderInt("Widget Line Size", &val, 1, 10))
        {
            changedSize = true;
            theme.widgetLineSize = val * scaleFactor;
        }

        changedColors |= ImGui::ColorEdit4("Knob Ring", theme.knobRingColor.rgba);
        changedColors |= ImGui::ColorEdit4("Knob Ring Alternative", theme.knobAlternativeRingColor.rgba);
        changedColors |= ImGui::ColorEdit4("Input Level Bracket 1", theme.inputLevelBracket1.rgba);
        changedColors |= ImGui::ColorEdit4("Input Level Bracket 2", theme.inputLevelBracket2.rgba);
        changedColors |= ImGui::ColorEdit4("Level Meter", theme.levelMeterColor.rgba);
        changedColors |= ImGui::ColorEdit4("Level Meter Alternative", theme.levelMeterAlternativeColor.rgba);
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
