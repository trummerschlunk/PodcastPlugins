// Copyright 2025 Filipe Coelho <falktx@falktx.com>
// SPDX-License-Identifier: GPL-3.0-or-later

#include "PodcastUI.hpp"

START_NAMESPACE_DISTRHO

// --------------------------------------------------------------------------------------------------------------------

class TrackUI : public PodcastUI
{
public:
    TrackUI()
    {
    }

    ~TrackUI() override
    {
    }

    // ----------------------------------------------------------------------------------------------------------------

    DISTRHO_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(TrackUI)
};

// --------------------------------------------------------------------------------------------------------------------

UI* createUI()
{
    return new TrackUI();
}

// --------------------------------------------------------------------------------------------------------------------

END_NAMESPACE_DISTRHO
