// Copyright 2025 Filipe Coelho <falktx@falktx.com>
// SPDX-License-Identifier: GPL-3.0-or-later

#define PODCAST_MASTER
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

protected:
    /* ----------------------------------------------------------------------------------------------------------------
     * DSP/Plugin Callbacks */

    void parameterChanged(const uint32_t index, const float value) override
    {
        switch (index)
        {
        // inputs
        case kParameter_multiband_compressor_style:
            // TODO
            return;
        // outputs
        case kParameter_lufs_in_meter:
            inputGroup.meter.setValueLufs(value);
            return;
        case kParameter_leveler_gain1:
            inputLevelerGroup.leveler.setValue(value);
            return;
        case kParameter_leveler_gain2:
            outputLevelerGroup.leveler.setValue(value);
            return;
        }

        PodcastUI::parameterChanged(index, value);
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
