// Copyright 2025 Filipe Coelho <falktx@falktx.com>
// SPDX-License-Identifier: GPL-3.0-or-later

#include "DistrhoPlugin.hpp"
#include "extra/ScopedDenormalDisable.hpp"

// faustpp generated plugin template
#include "DistrhoPluginInfo.h"
#include "Plugin.cpp"

// checks to ensure things are still as we expect them to be from faust dsp side
static_assert(DISTRHO_PLUGIN_NUM_INPUTS == 2, "has 2 audio inputs");
static_assert(DISTRHO_PLUGIN_NUM_OUTPUTS == 2, "has 2 audio outputs");

START_NAMESPACE_DISTRHO

// --------------------------------------------------------------------------------------------------------------------

class PodcastPlugin : public FaustGeneratedPlugin
{
public:
    PodcastPlugin()
        : FaustGeneratedPlugin(kExtraParameterCount, kExtraProgramCount, kExtraStateCount)
    {
        // pre-roll to make sure latency value is updated
        float* in[2] = {};
        float* out[2] = {};
        dsp->compute(0, in, out);

        setLatency(getParameterValue(kParameter_latency_global) * getSampleRate());
    }

protected:
   /* -----------------------------------------------------------------------------------------------------------------
    * Init */

    void initAudioPort(const bool input, const uint32_t index, AudioPort& port) override
    {
        // always stereo
        port.groupId = kPortGroupStereo;

        // everything else is as default
        Plugin::initAudioPort(input, index, port);
    }

    void initParameter(const uint32_t index, Parameter& param) override
    {
        FaustGeneratedPlugin::initParameter(index, param);

        switch (index)
        {
        case kParameter_input_gain:
        case kParameter_leveler_target:
            param.hints |= kParameterIsInteger;
            break;
        }
    }

   /* -----------------------------------------------------------------------------------------------------------------
    * Audio/MIDI Processing */

    void run(const float** const inputs, float** const outputs, const uint32_t frames) override
    {
        // optimize for non-denormal usage
        const ScopedDenormalDisable sdd;
        for (uint32_t i = 0; i < frames; ++i)
        {
            if (!std::isfinite(inputs[0][i]))
                __builtin_unreachable();
            if (!std::isfinite(inputs[1][i]))
                __builtin_unreachable();
            if (!std::isfinite(outputs[0][i]))
                __builtin_unreachable();
            if (!std::isfinite(outputs[1][i]))
                __builtin_unreachable();
        }

        dsp->compute(frames, const_cast<float**>(inputs), outputs);
    }

    void sampleRateChanged(const double newSampleRate) override
    {
        FaustGeneratedPlugin::sampleRateChanged(newSampleRate);

        setLatency(getParameterValue(kParameter_latency_global) * newSampleRate);
    }

    // ----------------------------------------------------------------------------------------------------------------

    DISTRHO_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(PodcastPlugin)
};

// --------------------------------------------------------------------------------------------------------------------

END_NAMESPACE_DISTRHO
