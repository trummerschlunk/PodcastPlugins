// Copyright 2022-2025 Filipe Coelho <falktx@falktx.com>
// SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#include "Quantum.hpp"
#include "DistrhoPluginUtils.hpp"
#include "json.hpp"

#include <fstream>

// --------------------------------------------------------------------------------------------------------------------
// our custom theme, using line size 1 and adds bar colors

struct PodcastTheme : QuantumTheme
{
    uint sidelabelsFontSize = 13;
    Color inputLevelBracket1 = Color::fromHTML("#7f4500");
    Color inputLevelBracket2 = Color::fromHTML("#336c33");

    PodcastTheme(const double scaleFactor, const bool loadThemeNow = true) noexcept
    {
        widgetLineSize = 1;
        knobIndicatorSize = 3;
        knobAlternativeRingColor = Color::fromHTML("#b055bf");
        knobRingColor = Color::fromHTML("#3cb4aa");
        levelMeterAlternativeColor = Color::fromHTML("#b055bf");
        levelMeterColor = Color::fromHTML("#3cb4aa");
        textMidColor = Color::fromHTML("#a1a1a1");
        widgetActiveColor = Color::fromHTML("#3cb4aa");
        widgetAlternativeColor = Color::fromHTML("#6159ff");

        if (loadThemeNow)
        {
            String filename(getConfigDir());
            filename += "PodcastTheme.json";
            loadTheme(filename);
        }

        scaleAll(scaleFactor);
    }

    void loadTheme(const char* const filename)
    {
        std::ifstream f(filename);
        if (! f.good())
            return;

        nlohmann::json j;

        try {
            j = nlohmann::json::parse(f);

            #define LOAD_UINT(var) if (j.contains(#var)) var = j[#var].get<uint>();
            LOAD_UINT(borderSize)
            LOAD_UINT(padding)
            LOAD_UINT(fontSize)
            LOAD_UINT(textHeight)
            LOAD_UINT(knobIndicatorSize)
            LOAD_UINT(widgetLineSize)
            LOAD_UINT(sidelabelsFontSize)
            #undef LOAD_UINT

            #define LOAD_COLOR(var) if (j.contains(#var)) var = Color::fromHTML(j[#var].get<std::string>().c_str());
            LOAD_COLOR(inputLevelBracket1)
            LOAD_COLOR(inputLevelBracket2)
            LOAD_COLOR(levelMeterColor)
            LOAD_COLOR(levelMeterAlternativeColor)
            LOAD_COLOR(knobRingColor)
            LOAD_COLOR(knobAlternativeRingColor)
            LOAD_COLOR(widgetBackgroundColor)
            LOAD_COLOR(widgetActiveColor)
            LOAD_COLOR(widgetAlternativeColor)
            LOAD_COLOR(widgetForegroundColor)
            LOAD_COLOR(windowBackgroundColor)
            LOAD_COLOR(textLightColor)
            LOAD_COLOR(textMidColor)
            LOAD_COLOR(textDarkColor)
            #undef LOAD_COLOR

        } catch (const std::exception& e) {
            d_stderr("failed to parse PodcastTheme: %s", e.what());
            return;
        } catch (...) {
            d_stderr("failed to parse PodcastTheme: unknown exception");
            return;
        }
    }

    void scaleAll(const double scaleFactor)
    {
        if (d_isNotEqual(scaleFactor, 1.0))
        {
            borderSize *= scaleFactor;
            padding *= scaleFactor;
            fontSize *= scaleFactor;
            sidelabelsFontSize *= scaleFactor;
            knobIndicatorSize *= scaleFactor;
            textHeight *= scaleFactor;
            widgetLineSize *= scaleFactor;
        }

        windowPadding = borderSize + padding * 3;
        textPixelRatioWidthCompensation = static_cast<uint>(scaleFactor - 1.0 + 0.25);
    }
};
