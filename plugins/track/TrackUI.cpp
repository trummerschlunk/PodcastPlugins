// Copyright 2025 Filipe Coelho <falktx@falktx.com>
// SPDX-License-Identifier: GPL-3.0-or-later

#define PODCAST_TRACK
#include "PodcastUI.hpp"

START_NAMESPACE_DISTRHO

// --------------------------------------------------------------------------------------------------------------------

class TrackUI : public PodcastUI
{
public:
    TrackUI() {}

protected:
    /* ----------------------------------------------------------------------------------------------------------------
     * DSP/Plugin Callbacks */

    void parameterChanged(const uint32_t index, const float value) override
    {
        switch (index)
        {
        // outputs
        case kParameter_spectral_ballancer_gain_band__0:
        case kParameter_spectral_ballancer_gain_band__1:
        case kParameter_spectral_ballancer_gain_band__2:
        case kParameter_spectral_ballancer_gain_band__3:
        case kParameter_spectral_ballancer_gain_band__4:
        case kParameter_spectral_ballancer_gain_band__5:
        case kParameter_spectral_ballancer_gain_band__6:
        case kParameter_spectral_ballancer_gain_band__7:
        case kParameter_spectral_ballancer_gain_band__8:
        case kParameter_spectral_ballancer_gain_band__9:
        case kParameter_spectral_ballancer_gain_band_10:
        case kParameter_spectral_ballancer_gain_band_11:
        case kParameter_spectral_ballancer_gain_band_12:
        case kParameter_spectral_ballancer_gain_band_13:
        case kParameter_spectral_ballancer_gain_band_14:
        case kParameter_spectral_ballancer_gain_band_15:
        case kParameter_spectral_ballancer_gain_band_16:
        case kParameter_spectral_ballancer_gain_band_17:
        case kParameter_spectral_ballancer_gain_band_18:
        case kParameter_spectral_ballancer_gain_band_19:
            contentGroup.graph.update2(index - kParameter_spectral_ballancer_gain_band__0, value);
            return;
        case kParameter_leveler_gain:
            inputLevelerGroup.leveler.setValue(value);
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
