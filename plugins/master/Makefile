#!/usr/bin/make -f

NAME = pod-master
FILES_DSP = MasterPlugin.cpp
FILES_UI  = MasterUI.cpp
FILES_UI += ../../dpf-widgets/opengl/DearImGui.cpp
FILES_UI += ../../dpf-widgets/opengl/Quantum.cpp

DPF_TARGET_DIR = ../../bin
DPF_BUILD_DIR = ../../build
DPF_PATH = ../../dpf

# tweak DPF build
export DGL_NAMESPACE = PodcastPluginsDGL
export MODGUI_CLASS_NAME = pod_track
export NVG_FONT_TEXTURE_FLAGS = NVG_IMAGE_NEAREST
export SKIP_NATIVE_AUDIO_FALLBACK = true

include $(DPF_PATH)/Makefile.plugins.mk

BUILD_CXX_FLAGS += -DIMGUI_DISABLE_DEBUG_TOOLS
BUILD_CXX_FLAGS += -DIMGUI_DISABLE_DEMO_WINDOWS
BUILD_CXX_FLAGS += -I..
BUILD_CXX_FLAGS += -I../../build
BUILD_CXX_FLAGS += -I../../dpf-widgets/opengl
BUILD_CXX_FLAGS += -I../../pregen/master
BUILD_CXX_FLAGS += -funroll-loops
ifeq ($(GCC),true)
BUILD_CXX_FLAGS += -fprefetch-loop-arrays
endif

PLUGIN_TARGETS = au clap jack ladspa lv2_sep vst2 vst3

all: $(PLUGIN_TARGETS)
