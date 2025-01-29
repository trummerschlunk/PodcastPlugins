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
    Color barsAlternativeColor = knobAlternativeRimColor;
    Color nameColor = widgetAlternativeColor;

    PodcastTheme() noexcept
    {
        widgetLineSize = 1;
    }
};
