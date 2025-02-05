// Copyright 2022-2025 Filipe Coelho <falktx@falktx.com>
// SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#include "Quantum.hpp"
#include "json.hpp"

#include <fstream>

// --------------------------------------------------------------------------------------------------------------------
// our custom theme, using line size 1 and adds bar colors

struct PodcastTheme : QuantumTheme
{
    uint sidelabelsFontSize = 13;

    PodcastTheme(const double scaleFactor, const bool loadThemeNow = true) noexcept
    {
        widgetLineSize = 1;

        if (loadThemeNow)
            loadTheme();

        borderSize *= scaleFactor;
        padding *= scaleFactor;
        fontSize *= scaleFactor;
        sidelabelsFontSize *= scaleFactor;
        knobIndicatorSize *= scaleFactor;
        textHeight *= scaleFactor;
        widgetLineSize *= scaleFactor;
        windowPadding *= scaleFactor;
        textPixelRatioWidthCompensation = static_cast<uint>(scaleFactor - 1.0 + 0.25);
    }

    void loadTheme()
    {
        std::ifstream f("PodcastTheme.json");
        if (! f.good())
            return;

        nlohmann::json j;
        try {
            j = nlohmann::json::parse(f);

            borderSize = j["borderSize"].get<uint>();
            padding = j["padding"].get<uint>();
            fontSize = j["fontSize"].get<uint>();
            textHeight = j["textHeight"].get<uint>();
            knobIndicatorSize = j["knobIndicatorSize"].get<uint>();
            widgetLineSize = j["widgetLineSize"].get<uint>();
            sidelabelsFontSize = j["sidelabelsFontSize"].get<uint>();
            levelMeterColor = Color::fromHTML(j["levelMeterColor"].get<std::string>().c_str());
            levelMeterAlternativeColor = Color::fromHTML(j["levelMeterAlternativeColor"].get<std::string>().c_str());
            knobRingColor = Color::fromHTML(j["knobRingColor"].get<std::string>().c_str());
            knobAlternativeRingColor = Color::fromHTML(j["knobAlternativeRingColor"].get<std::string>().c_str());
            widgetBackgroundColor = Color::fromHTML(j["widgetBackgroundColor"].get<std::string>().c_str());
            widgetActiveColor = Color::fromHTML(j["widgetActiveColor"].get<std::string>().c_str());
            widgetAlternativeColor = Color::fromHTML(j["widgetAlternativeColor"].get<std::string>().c_str());
            widgetForegroundColor = Color::fromHTML(j["widgetForegroundColor"].get<std::string>().c_str());
            windowBackgroundColor = Color::fromHTML(j["windowBackgroundColor"].get<std::string>().c_str());
            textLightColor = Color::fromHTML(j["textLightColor"].get<std::string>().c_str());
            textMidColor = Color::fromHTML(j["textMidColor"].get<std::string>().c_str());
            textDarkColor = Color::fromHTML(j["textDarkColor"].get<std::string>().c_str());
        } catch (const std::exception& e) {
            d_stderr("failed to parse PodcastTheme: %s", e.what());
            return;
        } catch (...) {
            d_stderr("failed to parse PodcastTheme: unknown exception");
            return;
        }
    }
};
