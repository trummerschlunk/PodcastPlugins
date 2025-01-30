// Copyright 2022-2025 Filipe Coelho <falktx@falktx.com>
// SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#include "Quantum.hpp"

// --------------------------------------------------------------------------------------------------------------------
// our custom theme, using line size 1 and adds bar colors

struct PodcastTheme : QuantumTheme
{
    uint sidelabelsFontSize = 13;
    Color barsColor = knobRimColor;
    Color barsAlternativeColor = knobAlternativeRimColor.withAlpha(0.666f);
    Color nameColor = widgetAlternativeColor;

    PodcastTheme() noexcept
    {
        widgetLineSize = 1;
    }

    PodcastTheme(const double scaleFactor) noexcept
    {
        widgetLineSize = 1;

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
};
