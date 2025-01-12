#!/usr/bin/make -f

# include dpf base makefile definitions
include dpf/Makefile.base.mk

# include version details
include VERSION.mk
VERSION = $(VERSION_MAJOR).$(VERSION_MINOR).$(VERSION_MICRO)

# default build target
all: podcast-plugins

# ---------------------------------------------------------------------------------------------------------------------
# clean target, removes any build artifacts

clean:
	rm -rf bin build
	rm -rf dpf/build
	rm -f dpf-widgets/opengl/*.d
	rm -f dpf-widgets/opengl/*.o

# ---------------------------------------------------------------------------------------------------------------------
# faustpp target, building it ourselves if not available from the system

ifeq ($(shell command -v faustpp 1>/dev/null && echo true),true)
FAUSTPP_TARGET =
FAUSTPP_EXEC = faustpp
else
FAUSTPP_TARGET = build/faustpp/faustpp$(APP_EXT)
FAUSTPP_EXEC = $(CURDIR)/$(FAUSTPP_TARGET)
endif

faustpp:

# never rebuild faustpp
ifneq ($(FAUSTPP_TARGET),)
ifeq ($(wildcard $(FAUSTPP_TARGET)),)
faustpp: $(FAUSTPP_TARGET)
.PHONY: faustpp
endif
endif

# ---------------------------------------------------------------------------------------------------------------------
# dgl target, building the dpf little graphics library

DPF_EXTRA_ARGS  = DGL_NAMESPACE=PodcastPluginsDGL
DPF_EXTRA_ARGS += NVG_FONT_TEXTURE_FLAGS=NVG_IMAGE_NEAREST
DPF_EXTRA_ARGS += SKIP_NATIVE_AUDIO_FALLBACK=true

dgl:
ifeq ($(HAVE_OPENGL),true)
	$(MAKE) -C dpf/dgl opengl $(DPF_EXTRA_ARGS)
endif

# ---------------------------------------------------------------------------------------------------------------------
# list of plugin source code files to generate, converted from faust dsp files

PLUGIN_TEMPLATE_FILES   = $(subst template/,,$(wildcard template/*.*))
PLUGIN_GENERATED_FILES  = $(foreach f,$(PLUGIN_TEMPLATE_FILES),pregen/track/$(f))
PLUGIN_GENERATED_FILES += bin/pod-track.lv2/manifest.ttl
PLUGIN_GENERATED_FILES += bin/pod-track.lv2/plugin.ttl
PLUGIN_GENERATED_FILES += bin/pod-track.lv2/ui.ttl
PLUGIN_GENERATED_FILES += build/BuildInfo1.hpp
PLUGIN_GENERATED_FILES += build/BuildInfo2.hpp

gen: $(PLUGIN_GENERATED_FILES)

# ---------------------------------------------------------------------------------------------------------------------
# podcast-plugins target, for actual building the plugin after its source code has been generated

podcast-plugins: $(PLUGIN_GENERATED_FILES) dgl
	$(MAKE) -C plugins/track

# ---------------------------------------------------------------------------------------------------------------------
# install target, does what you think it does

PREFIX  ?= /usr/local
DESTDIR ?=

install: podcast-plugins
	install -d $(DESTDIR)$(PREFIX)/bin
	install -d $(DESTDIR)$(PREFIX)/lib/clap
	install -d $(DESTDIR)$(PREFIX)/lib/ladspa
	install -d $(DESTDIR)$(PREFIX)/lib/lv2/pod-track.lv2
	install -d $(DESTDIR)$(PREFIX)/lib/vst
	install -d $(DESTDIR)$(PREFIX)/lib/vst3/pod-track.vst3/$(VST3_BINARY_DIR)

	install -m 755 bin/pod-track                           $(DESTDIR)$(PREFIX)/bin/
	install -m 644 bin/pod-track.clap                      $(DESTDIR)$(PREFIX)/lib/clap/
	install -m 644 bin/pod-track-ladspa.*                  $(DESTDIR)$(PREFIX)/lib/ladspa/
	install -m 644 bin/pod-track.lv2/*                     $(DESTDIR)$(PREFIX)/lib/lv2/pod-track.lv2/
	install -m 644 bin/pod-track-vst.*                     $(DESTDIR)$(PREFIX)/lib/vst/
	install -m 644 bin/pod-track.vst3/$(VST3_BINARY_DIR)/* $(DESTDIR)$(PREFIX)/lib/vst3/pod-track.vst3/$(VST3_BINARY_DIR)

# ---------------------------------------------------------------------------------------------------------------------
# rules for faust dsp to plugin code conversion

FAUSTPP_RUN = \
	$(FAUSTPP_EXEC) \
	$(FAUSTPP_ARGS) \
	-Dbinary_name="pod-track" \
	-Dbrand="Klaus Scheuermann" \
	-Dhomepage="https://4ohm.de/" \
	-Dlabel="pod-track" \
	-Dlicense="GPLv3+" \
	-Dlicenseurl="http://spdx.org/licenses/GPL-3.0-or-later.html" \
	-Dlibext=\@libext\@ \
	-Duitype=\@uitype\@ \
	-Dversion_major=$(VERSION_MAJOR) \
	-Dversion_minor=$(VERSION_MINOR) \
	-Dversion_micro=$(VERSION_MICRO)

FAUSTPP_RUN_TRACK = \
	$(FAUSTPP_RUN) \
	-Dlv2uri="https://github.com/trummerschlunk/PodcastPlugins\#Track" \
	dsp/PodcastPluginTrack.dsp

# -X-scal
# -X-fm -Xfastmath.cpp
# FAUSTPP_OPTS = -X-vec -X-lv -X1 -X-vs -X8

pregen:
	$(FAUSTPP_RUN_TRACK) $(FAUSTPP_OPTS) -a template/DistrhoPluginInfo.h -o pregen/track/DistrhoPluginInfo.h
	$(FAUSTPP_RUN_TRACK) $(FAUSTPP_OPTS) -a template/Plugin.cpp          -o pregen/track/Plugin.cpp
	$(FAUSTPP_RUN_TRACK)                 -a template/LV2/manifest.ttl    -o pregen/pod-track.lv2/manifest.ttl
	$(FAUSTPP_RUN_TRACK)                 -a template/LV2/plugin.ttl      -o pregen/pod-track.lv2/plugin.ttl
	$(FAUSTPP_RUN_TRACK)                 -a template/LV2/ui.ttl          -o pregen/pod-track.lv2/ui.ttl

.PHONY: pregen

# ---------------------------------------------------------------------------------------------------------------------
# rules for static LV2 data

ifeq ($(MACOS),true)
UITYPE = Cocoa
else ifeq ($(WINDOWS),true)
UITYPE = Windows
else
UITYPE = X11
endif

bin/pod-track.lv2/%: pregen/pod-track.lv2/%
	mkdir -p bin/pod-track.lv2
	sed -e "s/@libext@/$(LIB_EXT)/g" -e "s/@uitype@/$(UITYPE)/g" $< > $@

# ---------------------------------------------------------------------------------------------------------------------
# rules for intermediate plugin code generation

ifeq ($(shell echo -e escaped-by-default | grep -- '-e escaped-by-default'),-e escaped-by-default)
NEWLINE = '\\\\$(nothing)n'
else
NEWLINE = '\\$(nothing)n'
endif

# only generated once
build/BuildInfo1.hpp:
	mkdir -p build
	echo 'constexpr const char kBuildInfoString1[] = ""' > $@
	echo '"A plugin by Klaus Scheuermann, made with Faust and DPF$(NEWLINE)"' >> $@
	echo '"DSP: Klaus Scheuermann, magnetophon, x42, jkbd$(NEWLINE)"' >> $@
	echo '"GUI, Plugin: falkTX$(NEWLINE)"' >> $@
	echo '"Supported by the Prototype Fund / German Federal Ministry of Education and Research"' >> $@
	echo ';' >> $@

# regenerated on every possible change
build/BuildInfo2.hpp: dsp/* plugins/*/* template/* template/LV2/* VERSION.mk
	mkdir -p build
	echo 'constexpr const char kBuildInfoString2[] = ""' > $@
ifneq ($(wildcard .git/HEAD),)
	echo '"Built using `$(shell git branch --show-current | tr -d "'")` branch with commit:$(NEWLINE)$(shell git log -n 1 --decorate=no --pretty=oneline --abbrev-commit | tr -d "'")"' >> $@
else
	echo '"v$(VERSION)"' >> $@
endif
	echo ';' >> $@

# ---------------------------------------------------------------------------------------------------------------------
# tarball target, generating release source-code tarballs ready for packaging

TAR_ARGS = \
	--exclude=".appveyor*" \
	--exclude=".ci*" \
	--exclude=".clang*" \
	--exclude=".drone*" \
	--exclude=".editor*" \
	--exclude=".git*" \
	--exclude="*.kdev*" \
	--exclude=".travis*" \
	--exclude=".vscode*" \
	--exclude="*.d" \
	--exclude="*.o" \
	--exclude=bin \
	--exclude=build \
	--exclude=dpf/build \
	--exclude=dpf/cmake \
	--exclude=dpf/examples \
	--exclude=dpf/lac \
	--exclude=dpf/tests \
	--exclude=dpf-widgets/generic \
	--exclude=dpf-widgets/opengl/Blendish* \
	--exclude=dpf-widgets/opengl/DearImGuiColorTextEditor* \
	--exclude=dpf-widgets/tests \
	--transform='s,^\.\.,-.-.,' \
	--transform='s,^\.,podcast-plugins-$(VERSION),' \
	--transform='s,^-\.-\.,..,' \

tarball:
	rm -f ../podcast-plugins-$(VERSION).tar.xz
	tar -c --lzma $(TAR_ARGS) -f ../podcast-plugins-$(VERSION).tar.xz .

# ---------------------------------------------------------------------------------------------------------------------
# rules for custom faustpp build

CMAKE_ARGS  = -G 'Unix Makefiles'
ifeq ($(DEBUG),true)
CMAKE_ARGS += -DCMAKE_BUILD_TYPE=Debug
else
CMAKE_ARGS += -DCMAKE_BUILD_TYPE=Release
endif
ifeq ($(WINDOWS),true)
CMAKE_ARGS += -DCMAKE_SYSTEM_NAME=Windows
endif

faustpp/CMakeLists.txt:
	git clone --recursive https://github.com/falkTX/faustpp.git --depth=1 -b use-internal=boost

build/faustpp/Makefile: faustpp/CMakeLists.txt
	cmake -Bbuild/faustpp -Sfaustpp -DFAUSTPP_USE_INTERNAL_BOOST=ON $(CMAKE_ARGS)

build/faustpp/faustpp$(APP_EXT): build/faustpp/Makefile
	$(MAKE) -C build/faustpp

# ---------------------------------------------------------------------------------------------------------------------
