
//------------------------------------------------------------------------------
// This file was generated using the Faust compiler (https://faust.grame.fr),
// and the Faust post-processor (https://github.com/jpcima/faustpp).
//
// Source: PodcastPluginTrack.dsp
// Name: PodcastPlugin Track
// Description: 
// Author: Klaus Scheuermann
// Copyright: 
// License: GPLv3+
// Version: 0.1
//------------------------------------------------------------------------------






#pragma once

#define DISTRHO_PLUGIN_NAME "PodcastPlugin Track"
#define DISTRHO_PLUGIN_URI  "https://github.com/trummerschlunk/PodcastPlugins#Track"

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
    kParameter_timbre_strength,
    kParameter_timbre,
    kParameter_input_gain,
    kParameter_leveler_target,
    kParameter_style,
    
    // outputs
    kParameter_latency_global,
    kParameter_spectral_ballancer_gain_band__0,
    kParameter_spectral_ballancer_gain_band__1,
    kParameter_spectral_ballancer_gain_band__2,
    kParameter_spectral_ballancer_gain_band__3,
    kParameter_spectral_ballancer_gain_band__4,
    kParameter_spectral_ballancer_gain_band__5,
    kParameter_spectral_ballancer_gain_band__6,
    kParameter_spectral_ballancer_gain_band__7,
    kParameter_spectral_ballancer_gain_band__8,
    kParameter_spectral_ballancer_gain_band__9,
    kParameter_spectral_ballancer_gain_band_10,
    kParameter_spectral_ballancer_gain_band_11,
    kParameter_spectral_ballancer_gain_band_12,
    kParameter_spectral_ballancer_gain_band_13,
    kParameter_spectral_ballancer_gain_band_14,
    kParameter_spectral_ballancer_gain_band_15,
    kParameter_spectral_ballancer_gain_band_16,
    kParameter_spectral_ballancer_gain_band_17,
    kParameter_spectral_ballancer_gain_band_18,
    kParameter_spectral_ballancer_gain_band_19,
    kParameter_input_peak_channel_0,
    kParameter_input_peak_channel_1,
    kParameter_leveler_gain,
    kParameter_multiband_compressor_gain_band_1,
    kParameter_multiband_compressor_gain_band_2,
    kParameter_multiband_compressor_gain_band_3,
    kParameter_multiband_compressor_gain_band_4,
    kParameter_multiband_compressor_gain_band_5,
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

static constexpr const char* kParameterNames[42] = {
    // inputs
    "bypass timbre",
    "bypass_leveler",
    "bypass style",
    "bypass global",
    "strength",
    "timbre",
    "PreGain",
    "target",
    "style",
    
    // ouputs
    "latency_global",
    "gr  0",
    "gr  1",
    "gr  2",
    "gr  3",
    "gr  4",
    "gr  5",
    "gr  6",
    "gr  7",
    "gr  8",
    "gr  9",
    "gr 10",
    "gr 11",
    "gr 12",
    "gr 13",
    "gr 14",
    "gr 15",
    "gr 16",
    "gr 17",
    "gr 18",
    "gr 19",
    "In 0",
    "In 1",
    "gain",
    "gr 1",
    "gr 2",
    "gr 3",
    "gr 4",
    "gr 5",
    "LimiterGR",
    "lufs",
    "Out 0",
    "Out 1",
    
};

static constexpr const struct { float def, min, max; } kParameterRanges[42] = {
    // inputs
    { 0, 0, 1 },
    { 0, 0, 1 },
    { 0, 0, 1 },
    { 0, 0, 1 },
    { 80.0, 0.0, 100.0 },
    { 0.0, -5.0, 5.0 },
    { 0.0, -20.0, 20.0 },
    { -18.0, -30.0, -6.0 },
    { 0.0, -5.0, 5.0 },
    
    // ouputs
    { 0, 0.0, 1.0 },
    { 0, -12.0, 12.0 },
    { 0, -12.0, 12.0 },
    { 0, -12.0, 12.0 },
    { 0, -12.0, 12.0 },
    { 0, -12.0, 12.0 },
    { 0, -12.0, 12.0 },
    { 0, -12.0, 12.0 },
    { 0, -12.0, 12.0 },
    { 0, -12.0, 12.0 },
    { 0, -12.0, 12.0 },
    { 0, -12.0, 12.0 },
    { 0, -12.0, 12.0 },
    { 0, -12.0, 12.0 },
    { 0, -12.0, 12.0 },
    { 0, -12.0, 12.0 },
    { 0, -12.0, 12.0 },
    { 0, -12.0, 12.0 },
    { 0, -12.0, 12.0 },
    { 0, -12.0, 12.0 },
    { 0, -12.0, 12.0 },
    { 0, -70.0, 0.0 },
    { 0, -70.0, 0.0 },
    { 0, -50.0, 50.0 },
    { 0, -12.0, 12.0 },
    { 0, -12.0, 12.0 },
    { 0, -12.0, 12.0 },
    { 0, -12.0, 12.0 },
    { 0, -12.0, 12.0 },
    { 0, -60.0, 0.0 },
    { 0, -120.0, 0.0 },
    { 0, -70.0, 0.0 },
    { 0, -70.0, 0.0 },
    
};

static constexpr const char* kParameterSymbols[42] = {
    // inputs
    "bypass_timbre",
    "bypass_leveler",
    "bypass_style",
    "bypass_global",
    "timbre_strength",
    "timbre",
    "input_gain",
    "leveler_target",
    "style",
    
    // ouputs
    "latency_global",
    "spectral_ballancer_gain_band__0",
    "spectral_ballancer_gain_band__1",
    "spectral_ballancer_gain_band__2",
    "spectral_ballancer_gain_band__3",
    "spectral_ballancer_gain_band__4",
    "spectral_ballancer_gain_band__5",
    "spectral_ballancer_gain_band__6",
    "spectral_ballancer_gain_band__7",
    "spectral_ballancer_gain_band__8",
    "spectral_ballancer_gain_band__9",
    "spectral_ballancer_gain_band_10",
    "spectral_ballancer_gain_band_11",
    "spectral_ballancer_gain_band_12",
    "spectral_ballancer_gain_band_13",
    "spectral_ballancer_gain_band_14",
    "spectral_ballancer_gain_band_15",
    "spectral_ballancer_gain_band_16",
    "spectral_ballancer_gain_band_17",
    "spectral_ballancer_gain_band_18",
    "spectral_ballancer_gain_band_19",
    "input_peak_channel_0",
    "input_peak_channel_1",
    "leveler_gain",
    "multiband_compressor_gain_band_1",
    "multiband_compressor_gain_band_2",
    "multiband_compressor_gain_band_3",
    "multiband_compressor_gain_band_4",
    "multiband_compressor_gain_band_5",
    "limiter_gain",
    "lufs_out_meter",
    "output_peak_channel_0",
    "output_peak_channel_1",
    
};

static constexpr const char* kParameterUnits[42] = {
    // inputs
    "",
    "",
    "",
    "",
    "%",
    "",
    "dB",
    "dB",
    "",
    
    // ouputs
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
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


