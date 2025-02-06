// Copyright 2025 Filipe Coelho <falktx@falktx.com>
// SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#define DISTRHO_PLUGIN_HAS_UI          1
#define DISTRHO_PLUGIN_WANT_LATENCY    1
#define DISTRHO_UI_FILE_BROWSER        0
#define DISTRHO_UI_USE_NANOVG          1
#define DISTRHO_UI_USER_RESIZABLE      0

#define DISTRHO_UI_DEFAULT_WIDTH 850
#define DISTRHO_UI_DEFAULT_HEIGHT 500

#define DISTRHO_UI_MINIMUM_WIDTH 825
#define DISTRHO_UI_MINIMUM_HEIGHT 430

#define DISTRHO_PLUGIN_CLAP_ID "trummerschlunk.podcast-plugins.track"
#define DISTRHO_PLUGIN_BRAND_ID KlSc
#define DISTRHO_PLUGIN_UNIQUE_ID PoTr

enum ExtraParameters {
    kExtraParameterCount
};

enum ExtraPrograms {
    kExtraProgramCount
};

enum ExtraStates {
    kExtraStateCount
};
