
//------------------------------------------------------------------------------
// This file was generated using the Faust compiler (https://faust.grame.fr),
// and the Faust post-processor (https://github.com/jpcima/faustpp).
//
// Source: PodcastPluginMaster.dsp
// Name: PodcastPlugins MASTER
// Description: 
// Author: Klaus Scheuermann
// Copyright: 
// License: GPLv3+
// Version: 0.1
//------------------------------------------------------------------------------






#pragma once

#define DISTRHO_PLUGIN_NAME "PodcastPlugins MASTER"
#define DISTRHO_PLUGIN_URI  "https://github.com/trummerschlunk/PodcastPlugins#Master"

#define DISTRHO_PLUGIN_HAS_UI          1
#define DISTRHO_PLUGIN_IS_RT_SAFE      1
#define DISTRHO_PLUGIN_NUM_INPUTS      2
#define DISTRHO_PLUGIN_NUM_OUTPUTS     2

enum Parameters {
    // inputs
    kParameter_bypass_timbre,
    kParameter_bypass_leveler,
    kParameter_bypass_style,
    kParameter_bypass_global,
    kParameter_input_gain,
    kParameter_leveler_target,
    kParameter_style,
    kParameter_timbre,
    
    // outputs
    kParameter_latency_global,
    kParameter_input_peak_channel_0,
    kParameter_input_peak_channel_1,
    kParameter_lufs_in_meter,
    kParameter_leveler_gain1,
    kParameter_multiband_compressor_gain_band_1,
    kParameter_multiband_compressor_gain_band_2,
    kParameter_multiband_compressor_gain_band_3,
    kParameter_multiband_compressor_gain_band_4,
    kParameter_multiband_compressor_gain_band_5,
    kParameter_leveler_gain2,
    kParameter_limiter_gain,
    kParameter_lufs_out_meter,
    kParameter_output_peak_channel_0,
    kParameter_output_peak_channel_1,
    
    // terminator
    kParameterCount
};

enum Programs {
    kProgramCount
};

enum States {
    kStateCount
};

static constexpr const char* kParameterNames[23] = {
    // inputs
    "bypass timbre",
    "bypass leveler",
    "bypass style",
    "bypass global",
    "PreGain",
    "target",
    "mb morph",
    "timbre",
    
    // ouputs
    "latency",
    "In 0",
    "In 1",
    "lufs IN",
    "gain 1",
    "gr 1",
    "gr 2",
    "gr 3",
    "gr 4",
    "gr 5",
    "gain 2",
    "LimiterGR",
    "lufs OUT",
    "Out 0",
    "Out 1",
    
};

static constexpr const struct { float def, min, max; } kParameterRanges[23] = {
    // inputs
    { 0, 0, 1 },
    { 0, 0, 1 },
    { 0, 0, 1 },
    { 0, 0, 1 },
    { 0.0, -20.0, 20.0 },
    { -18.0, -30.0, -6.0 },
    { 0.0, -5.0, 5.0 },
    { 0.0, -5.0, 5.0 },
    
    // ouputs
    { 0, 0.0, 1.0 },
    { 0, -70.0, 0.0 },
    { 0, -70.0, 0.0 },
    { 0, -120.0, 0.0 },
    { 0, -50.0, 50.0 },
    { 0, -12.0, 12.0 },
    { 0, -12.0, 12.0 },
    { 0, -12.0, 12.0 },
    { 0, -12.0, 12.0 },
    { 0, -12.0, 12.0 },
    { 0, -50.0, 50.0 },
    { 0, -60.0, 0.0 },
    { 0, -120.0, 0.0 },
    { 0, -70.0, 0.0 },
    { 0, -70.0, 0.0 },
    
};

static constexpr const char* kParameterSymbols[23] = {
    // inputs
    "bypass_timbre",
    "bypass_leveler",
    "bypass_style",
    "bypass_global",
    "input_gain",
    "leveler_target",
    "style",
    "timbre",
    
    // ouputs
    "latency_global",
    "input_peak_channel_0",
    "input_peak_channel_1",
    "lufs_in_meter",
    "leveler_gain1",
    "multiband_compressor_gain_band_1",
    "multiband_compressor_gain_band_2",
    "multiband_compressor_gain_band_3",
    "multiband_compressor_gain_band_4",
    "multiband_compressor_gain_band_5",
    "leveler_gain2",
    "limiter_gain",
    "lufs_out_meter",
    "output_peak_channel_0",
    "output_peak_channel_1",
    
};

static constexpr const char* kParameterUnits[23] = {
    // inputs
    "",
    "",
    "",
    "",
    "dB",
    "dB",
    "",
    "",
    
    // ouputs
    "",
    "",
    "",
    "dB",
    "dB",
    "dB",
    "dB",
    "dB",
    "dB",
    "dB",
    "dB",
    "",
    "dB",
    "",
    "",
    
};

// #if __has_include("ExtraProperties.h")
#include "ExtraProperties.h"
// #endif


