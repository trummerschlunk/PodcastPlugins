// Copyright 2025 Filipe Coelho <falktx@falktx.com>
// SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#define DISTRHO_PLUGIN_HAS_UI          1
#define DISTRHO_PLUGIN_WANT_LATENCY    1
#define DISTRHO_UI_FILE_BROWSER        0
#define DISTRHO_UI_USE_NANOVG          1
#define DISTRHO_UI_USER_RESIZABLE      0

#define DISTRHO_UI_DEFAULT_WIDTH 1030
#define DISTRHO_UI_DEFAULT_HEIGHT 597

#define DISTRHO_PLUGIN_CLAP_ID "trummerschlunk.podcast-plugins.master"
#define DISTRHO_PLUGIN_BRAND_ID KlSc
#define DISTRHO_PLUGIN_UNIQUE_ID PoMs

enum ExtraParameters {
    kExtraParameterCount
};

enum ExtraPrograms {
    kExtraProgramCount
};

enum ExtraStates {
    kExtraStateCount
};
