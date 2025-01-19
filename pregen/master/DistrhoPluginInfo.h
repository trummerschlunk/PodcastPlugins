
//------------------------------------------------------------------------------
// This file was generated using the Faust compiler (https://faust.grame.fr),
// and the Faust post-processor (https://github.com/jpcima/faustpp).
//
// Source: PodcastPluginMaster.dsp
// Name: master_me
// Description: 
// Author: Klaus Scheuermann
// Copyright: 
// License: GPLv3+
// Version: 1.0
//------------------------------------------------------------------------------






#pragma once

#define DISTRHO_PLUGIN_NAME "master_me"
#define DISTRHO_PLUGIN_URI  "https://github.com/trummerschlunk/PodcastPlugins#Master"

#define DISTRHO_PLUGIN_HAS_UI          1
#define DISTRHO_PLUGIN_IS_RT_SAFE      1
#define DISTRHO_PLUGIN_NUM_INPUTS      2
#define DISTRHO_PLUGIN_NUM_OUTPUTS     2

enum Parameters {
    // inputs
    kParameter_global_bypass,
    kParameter_target,
    kParameter_in_gain,
    kParameter_dc_blocker,
    kParameter_eq_bypass,
    kParameter_eq_highpass_freq,
    kParameter_eq_tilt_gain,
    kParameter_eq_side_gain,
    kParameter_eq_side_freq,
    kParameter_eq_side_bandwidth,
    kParameter_leveler_bypass,
    kParameter_leveler_speed,
    kParameter_leveler_brake_threshold,
    kParameter_leveler_max_plus,
    kParameter_leveler_max_minus,
    kParameter_kneecomp_bypass,
    kParameter_kneecomp_strength,
    kParameter_kneecomp_threshold,
    kParameter_kneecomp_attack,
    kParameter_kneecomp_release,
    kParameter_kneecomp_knee,
    kParameter_kneecomp_link,
    kParameter_kneecomp_fffb,
    kParameter_kneecomp_makeup,
    kParameter_kneecomp_drywet,
    kParameter_limiter_bypass,
    kParameter_limiter_strength,
    kParameter_limiter_threshold,
    kParameter_limiter_attack,
    kParameter_limiter_release,
    kParameter_limiter_knee,
    kParameter_limiter_fffb,
    kParameter_limiter_makeup,
    
    // outputs
    kParameter_limiter_gain,
    kParameter_latency_global,
    kParameter_peakmeter_in_l,
    kParameter_peakmeter_in_r,
    kParameter_lufs_in,
    kParameter_leveler_gain,
    kParameter_lufs_out,
    kParameter_peakmeter_out_l,
    kParameter_peakmeter_out_r,
    kParameter_leveler_brake,
    kParameter_kneecomp_meter_0,
    kParameter_kneecomp_meter_1,
    kParameter_limiter_gain_reduction,
    
    // terminator
    kParameterCount
};

enum Programs {
    kProgramCount
};

enum States {
    kStateCount
};

static constexpr const char* kParameterNames[46] = {
    // inputs
    "global bypass",
    "Target",
    "input gain",
    "dc blocker",
    "eq bypass",
    "eq highpass freq",
    "eq tilt gain",
    "eq side gain",
    "eq side freq",
    "eq side bandwidth",
    "leveler bypass",
    "leveler speed",
    "leveler brake threshold",
    "leveler max +",
    "leveler max -",
    "kneecomp bypass",
    "kneecomp strength",
    "kneecomp tar-thresh",
    "kneecomp attack",
    "kneecomp release",
    "kneecomp knee",
    "kneecomp link",
    "kneecomp ff-fb",
    "kneecomp makeup",
    "kneecomp dry/wet",
    "limiter bypass",
    "limiter strength",
    "limiter tar-thresh",
    "limiter attack",
    "limiter release",
    "limiter knee",
    "limiter ff-fb",
    "limiter makeup",
    
    // ouputs
    "LimiterGR",
    "latency",
    "in L",
    "in R",
    "in lufs-s",
    "leveler gain",
    "out lufs-s",
    "out L",
    "out R",
    "leveler brake",
    "kneecomp meter 0",
    "kneecomp meter 1",
    "limiter gain reduction",
    
};

static constexpr const struct { float def, min, max; } kParameterRanges[46] = {
    // inputs
    { 0, 0, 1 },
    { -18.0, -50.0, -2.0 },
    { 0.0, -100.0, 24.0 },
    { 0, 0, 1 },
    { 0, 0, 1 },
    { 5.0, 5.0, 1000.0 },
    { 0.0, -6.0, 6.0 },
    { 0.0, 0.0, 12.0 },
    { 600.0, 200.0, 5000.0 },
    { 1.0, 0.5, 4.0 },
    { 0, 0, 1 },
    { 20.0, 0.0, 100.0 },
    { -14.0, -90.0, 0.0 },
    { 20.0, 0.0, 60.0 },
    { 20.0, 0.0, 60.0 },
    { 0, 0, 1 },
    { 20.0, 0.0, 100.0 },
    { -6.0, -12.0, 6.0 },
    { 20.0, 1.0, 100.0 },
    { 200.0, 1.0, 1000.0 },
    { 6.0, 0.0, 30.0 },
    { 60.0, 0.0, 100.0 },
    { 50.0, 0.0, 100.0 },
    { 0.0, -10.0, 10.0 },
    { 100.0, 0.0, 100.0 },
    { 0, 0, 1 },
    { 80.0, 0.0, 100.0 },
    { 6.0, -12.0, 12.0 },
    { 1.0, 0.0, 100.0 },
    { 40.0, 1.0, 400.0 },
    { 8.0, 0.0, 12.0 },
    { 50.0, 0.0, 100.0 },
    { 0.0, -10.0, 10.0 },
    
    // ouputs
    { 0, -60.0, 0.0 },
    { 0, 0.0, 1.0 },
    { 0, -70.0, 0.0 },
    { 0, -70.0, 0.0 },
    { 0, -70.0, 0.0 },
    { 0, -50.0, 50.0 },
    { 0, -70.0, 0.0 },
    { 0, -70.0, 0.0 },
    { 0, -70.0, 0.0 },
    { 0, 0.0, 100.0 },
    { 0, -6.0, 0.0 },
    { 0, -6.0, 0.0 },
    { 0, -12.0, 0.0 },
    
};

static constexpr const char* kParameterSymbols[46] = {
    // inputs
    "global_bypass",
    "target",
    "in_gain",
    "dc_blocker",
    "eq_bypass",
    "eq_highpass_freq",
    "eq_tilt_gain",
    "eq_side_gain",
    "eq_side_freq",
    "eq_side_bandwidth",
    "leveler_bypass",
    "leveler_speed",
    "leveler_brake_threshold",
    "leveler_max_plus",
    "leveler_max_minus",
    "kneecomp_bypass",
    "kneecomp_strength",
    "kneecomp_threshold",
    "kneecomp_attack",
    "kneecomp_release",
    "kneecomp_knee",
    "kneecomp_link",
    "kneecomp_fffb",
    "kneecomp_makeup",
    "kneecomp_drywet",
    "limiter_bypass",
    "limiter_strength",
    "limiter_threshold",
    "limiter_attack",
    "limiter_release",
    "limiter_knee",
    "limiter_fffb",
    "limiter_makeup",
    
    // ouputs
    "limiter_gain",
    "latency_global",
    "peakmeter_in_l",
    "peakmeter_in_r",
    "lufs_in",
    "leveler_gain",
    "lufs_out",
    "peakmeter_out_l",
    "peakmeter_out_r",
    "leveler_brake",
    "kneecomp_meter_0",
    "kneecomp_meter_1",
    "limiter_gain_reduction",
    
};

static constexpr const char* kParameterUnits[46] = {
    // inputs
    "",
    "dB",
    "dB",
    "",
    "",
    "Hz",
    "dB",
    "dB",
    "Hz",
    "",
    "",
    "%",
    "dB",
    "dB",
    "dB",
    "",
    "%",
    "dB",
    "ms",
    "ms",
    "dB",
    "%",
    "%",
    "dB",
    "%",
    "",
    "%",
    "dB",
    "ms",
    "ms",
    "dB",
    "%",
    "dB",
    
    // ouputs
    "",
    "",
    "dB",
    "dB",
    "dB",
    "dB",
    "dB",
    "dB",
    "dB",
    "%",
    "dB",
    "dB",
    "dB",
    
};

// #if __has_include("ExtraProperties.h")
#include "ExtraProperties.h"
// #endif


