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

ifeq ($(WASM),true)
UI_TYPE = gles2
else
UI_TYPE = opengl
endif

dgl:
ifeq ($(HAVE_OPENGL),true)
	$(MAKE) -C dpf/dgl $(UI_TYPE) $(DPF_EXTRA_ARGS)
endif

# ---------------------------------------------------------------------------------------------------------------------
# list of plugin source code files to generate, converted from faust dsp files

PLUGIN_TEMPLATE_FILES   = $(subst template/,,$(wildcard template/*.*))
PLUGIN_GENERATED_FILES  = $(foreach f,$(PLUGIN_TEMPLATE_FILES),pregen/master/$(f))
PLUGIN_GENERATED_FILES += $(foreach f,$(PLUGIN_TEMPLATE_FILES),pregen/track/$(f))
PLUGIN_GENERATED_FILES += bin/pp-master.lv2/manifest.ttl
PLUGIN_GENERATED_FILES += bin/pp-master.lv2/plugin.ttl
PLUGIN_GENERATED_FILES += bin/pp-master.lv2/ui.ttl
PLUGIN_GENERATED_FILES += bin/pp-track.lv2/manifest.ttl
PLUGIN_GENERATED_FILES += bin/pp-track.lv2/plugin.ttl
PLUGIN_GENERATED_FILES += bin/pp-track.lv2/ui.ttl
PLUGIN_GENERATED_FILES += build/BuildInfo.hpp
PLUGIN_GENERATED_FILES += build/master/Name.hpp
PLUGIN_GENERATED_FILES += build/track/Name.hpp

gen: $(PLUGIN_GENERATED_FILES)

# ---------------------------------------------------------------------------------------------------------------------
# podcast-plugins target, for actual building the plugin after its source code has been generated

podcast-plugins: $(PLUGIN_GENERATED_FILES) dgl
	$(MAKE) -C plugins/master
	$(MAKE) -C plugins/track

# ---------------------------------------------------------------------------------------------------------------------
# install target, does what you think it does

PREFIX  ?= /usr/local
DESTDIR ?=

install: podcast-plugins
	install -d $(DESTDIR)$(PREFIX)/bin
	install -d $(DESTDIR)$(PREFIX)/lib/clap
	install -d $(DESTDIR)$(PREFIX)/lib/ladspa
	install -d $(DESTDIR)$(PREFIX)/lib/lv2/pp-master.lv2
	install -d $(DESTDIR)$(PREFIX)/lib/lv2/pp-track.lv2
	install -d $(DESTDIR)$(PREFIX)/lib/vst
	install -d $(DESTDIR)$(PREFIX)/lib/vst3/pp-master.vst3/$(VST3_BINARY_DIR)
	install -d $(DESTDIR)$(PREFIX)/lib/vst3/pp-track.vst3/$(VST3_BINARY_DIR)

	install -m 755 bin/pp-master                           $(DESTDIR)$(PREFIX)/bin/
	install -m 644 bin/pp-master.clap                      $(DESTDIR)$(PREFIX)/lib/clap/
	install -m 644 bin/pp-master-ladspa.*                  $(DESTDIR)$(PREFIX)/lib/ladspa/
	install -m 644 bin/pp-master.lv2/*                     $(DESTDIR)$(PREFIX)/lib/lv2/pp-master.lv2/
	install -m 644 bin/pp-master-vst.*                     $(DESTDIR)$(PREFIX)/lib/vst/
	install -m 644 bin/pp-master.vst3/$(VST3_BINARY_DIR)/* $(DESTDIR)$(PREFIX)/lib/vst3/pp-master.vst3/$(VST3_BINARY_DIR)

	install -m 755 bin/pp-track                           $(DESTDIR)$(PREFIX)/bin/
	install -m 644 bin/pp-track.clap                      $(DESTDIR)$(PREFIX)/lib/clap/
	install -m 644 bin/pp-track-ladspa.*                  $(DESTDIR)$(PREFIX)/lib/ladspa/
	install -m 644 bin/pp-track.lv2/*                     $(DESTDIR)$(PREFIX)/lib/lv2/pp-track.lv2/
	install -m 644 bin/pp-track-vst.*                     $(DESTDIR)$(PREFIX)/lib/vst/
	install -m 644 bin/pp-track.vst3/$(VST3_BINARY_DIR)/* $(DESTDIR)$(PREFIX)/lib/vst3/pp-track.vst3/$(VST3_BINARY_DIR)

# ---------------------------------------------------------------------------------------------------------------------
# rules for faust dsp to plugin code conversion

FAUSTPP_RUN = \
	$(FAUSTPP_EXEC) \
	$(FAUSTPP_ARGS) \
	-Dbrand="Klaus Scheuermann" \
	-Dhomepage="https://4ohm.de/" \
	-Dlicense="GPLv3+" \
	-Dlicenseurl="http://spdx.org/licenses/GPL-3.0-or-later.html" \
	-Dlibext=\@libext\@ \
	-Duitype=\@uitype\@ \
	-Dversion_major=$(VERSION_MAJOR) \
	-Dversion_minor=$(VERSION_MINOR) \
	-Dversion_micro=$(VERSION_MICRO)

FAUSTPP_RUN_MASTER = \
	$(FAUSTPP_RUN) \
	-Dbinary_name="pp-master" \
	-Dlabel="pp_master" \
	-Dlv2uri="https://github.com/trummerschlunk/PodcastPlugins\#Master" \
	dsp/PodcastPluginMaster.dsp

FAUSTPP_RUN_TRACK = \
	$(FAUSTPP_RUN) \
	-Dbinary_name="pp-track" \
	-Dlabel="pp_track" \
	-Dlv2uri="https://github.com/trummerschlunk/PodcastPlugins\#Track" \
	dsp/PodcastPluginTrack.dsp

# -X-scal
# -X-fm -Xfastmath.cpp
# FAUSTPP_OPTS = -X-vec -X-lv -X1 -X-vs -X8

pregen:
	mkdir -p pregen/master pregen/pp-master.lv2
	$(FAUSTPP_RUN_MASTER) $(FAUSTPP_OPTS) -a template/DistrhoPluginInfo.h -o pregen/master/DistrhoPluginInfo.h
	$(FAUSTPP_RUN_MASTER) $(FAUSTPP_OPTS) -a template/Plugin.cpp          -o pregen/master/Plugin.cpp
	$(FAUSTPP_RUN_MASTER)                 -a template/LV2/manifest.ttl    -o pregen/pp-master.lv2/manifest.ttl
	$(FAUSTPP_RUN_MASTER)                 -a template/LV2/plugin.ttl      -o pregen/pp-master.lv2/plugin.ttl
	$(FAUSTPP_RUN_MASTER)                 -a template/LV2/ui.ttl          -o pregen/pp-master.lv2/ui.ttl

	mkdir -p pregen/track pregen/pp-track.lv2
	$(FAUSTPP_RUN_TRACK) $(FAUSTPP_OPTS) -a template/DistrhoPluginInfo.h -o pregen/track/DistrhoPluginInfo.h
	$(FAUSTPP_RUN_TRACK) $(FAUSTPP_OPTS) -a template/Plugin.cpp          -o pregen/track/Plugin.cpp
	$(FAUSTPP_RUN_TRACK)                 -a template/LV2/manifest.ttl    -o pregen/pp-track.lv2/manifest.ttl
	$(FAUSTPP_RUN_TRACK)                 -a template/LV2/plugin.ttl      -o pregen/pp-track.lv2/plugin.ttl
	$(FAUSTPP_RUN_TRACK)                 -a template/LV2/ui.ttl          -o pregen/pp-track.lv2/ui.ttl

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

bin/pp-master.lv2/%: pregen/pp-master.lv2/%
	mkdir -p bin/pp-master.lv2
	sed -e "s/@libext@/$(LIB_EXT)/g" -e "s/@uitype@/$(UITYPE)/g" $< > $@

bin/pp-track.lv2/%: pregen/pp-track.lv2/%
	mkdir -p bin/pp-track.lv2
	sed -e "s/@libext@/$(LIB_EXT)/g" -e "s/@uitype@/$(UITYPE)/g" $< > $@

# ---------------------------------------------------------------------------------------------------------------------
# rules for intermediate plugin code generation

ifeq ($(shell echo -e escaped-by-default | grep -- '-e escaped-by-default'),-e escaped-by-default)
NEWLINE = '\\\\$(nothing)n'
else
NEWLINE = '\\$(nothing)n'
endif

# regenerated on every possible change
build/BuildInfo.hpp: dsp/* plugins/* plugins/*/* template/* template/LV2/* VERSION.mk
	mkdir -p build
	echo 'constexpr const char kBuildInfoString[] = ""' > $@
ifneq ($(wildcard .git/HEAD),)
	echo '"Built using `$(shell git branch --show-current | tr -d "'")` branch with commit:$(NEWLINE)$(shell git log -n 1 --decorate=no --pretty=oneline --abbrev-commit | tr -d "'")"' >> $@
else
	echo '"v$(VERSION)"' >> $@
endif
	echo ';' >> $@

# convert name png into raw data for C++ code
build/%/Name.hpp: img/%/name.png img/%/name@2x.png
	mkdir -p build/$*
	./dpf/utils/res2c.py Name img/$*/ build/$*/

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
	--transform='s,^\.,podcast-plugins-$(VERSION)-src,' \
	--transform='s,^-\.-\.,..,' \

tarball:
	rm -f ../podcast-plugins-$(VERSION)-src.tar.xz
	tar -c --lzma $(TAR_ARGS) -f ../podcast-plugins-$(VERSION)-src.tar.xz .
	mv ../podcast-plugins-$(VERSION)-src.tar.xz .

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
