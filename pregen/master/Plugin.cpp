
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


#include "DistrhoPlugin.hpp"
#include "extra/ScopedPointer.hpp"

// --------------------------------------------------------------------------------------------------------------------

// inline code when possible
#define FAUSTPP_VIRTUAL inline

// make everything available directly
#define FAUSTPP_PRIVATE public
#define FAUSTPP_PROTECTED public

// match distrho namespace
#define FAUSTPP_BEGIN_NAMESPACE START_NAMESPACE_DISTRHO
#define FAUSTPP_END_NAMESPACE END_NAMESPACE_DISTRHO

// --------------------------------------------------------------------------------------------------------------------

START_NAMESPACE_DISTRHO

template <class T> inline T min(T a, T b) { return (a < b) ? a : b; }
template <class T> inline T max(T a, T b) { return (a > b) ? a : b; }

class dsp {
public:
    virtual ~dsp() {}
};

class Meta {
public:
    // dummy
    void declare(...) {}
};

class UI {
public:
    // dummy
    void openHorizontalBox(...) {}
    void openVerticalBox(...) {}
    void openTabBox(...) {}
    void closeBox(...) {}
    void declare(...) {}
    void addButton(...) {}
    void addCheckButton(...) {}
    void addVerticalSlider(...) {}
    void addHorizontalSlider(...) {}
    void addVerticalBargraph(...) {}
    void addHorizontalBargraph(...) {}
};

END_NAMESPACE_DISTRHO

// --------------------------------------------------------------------------------------------------------------------


#if defined(__GNUC__)
#   pragma GCC diagnostic push
#   pragma GCC diagnostic ignored "-Wunused-parameter"
#endif

#ifndef FAUSTPP_PRIVATE
#   define FAUSTPP_PRIVATE private
#endif
#ifndef FAUSTPP_PROTECTED
#   define FAUSTPP_PROTECTED protected
#endif
#ifndef FAUSTPP_VIRTUAL
#   define FAUSTPP_VIRTUAL virtual
#endif

#ifndef FAUSTPP_BEGIN_NAMESPACE
#   define FAUSTPP_BEGIN_NAMESPACE
#endif
#ifndef FAUSTPP_END_NAMESPACE
#   define FAUSTPP_END_NAMESPACE
#endif

FAUSTPP_BEGIN_NAMESPACE

#ifndef FAUSTFLOAT
#define FAUSTFLOAT float
#endif 

FAUSTPP_END_NAMESPACE
#include <algorithm>
#include <cmath>
#include <cstdint>
#include <math.h>
FAUSTPP_BEGIN_NAMESPACE

#ifndef FAUSTCLASS 
#define FAUSTCLASS mydsp
#endif

#ifdef __APPLE__ 
#define exp10f __exp10f
#define exp10 __exp10
#endif

#if defined(_WIN32)
#define RESTRICT __restrict
#else
#define RESTRICT __restrict__
#endif

static float mydsp_faustpower2_f(float value) {
	return value * value;
}

class mydsp : public dsp {
	
 FAUSTPP_PRIVATE:
	
	int fSampleRate;
	float fConst1;
	float fConst2;
	FAUSTFLOAT fCheckbox0;
	float fConst3;
	float fRec1[2];
	float fConst4;
	float fConst5;
	FAUSTFLOAT fCheckbox1;
	float fRec12[2];
	FAUSTFLOAT fVslider0;
	int iConst6;
	FAUSTFLOAT fCheckbox2;
	float fRec16[2];
	FAUSTFLOAT fVslider1;
	float fRec18[2];
	float fRec17[2];
	FAUSTFLOAT fVbargraph0;
	float fVec0[2];
	FAUSTFLOAT fCheckbox3;
	float fRec19[2];
	float fConst8;
	float fConst9;
	float fRec20[2];
	float fVec1[2];
	float fConst11;
	float fConst13;
	float fConst14;
	float fConst15;
	float fConst16;
	FAUSTFLOAT fVslider2;
	float fRec23[2];
	float fRec22[2];
	float fRec24[2];
	FAUSTFLOAT fVslider3;
	float fRec25[2];
	float fVec2[2];
	float fRec21[2];
	float fRec26[2];
	float fConst18;
	int iConst19;
	float fConst24;
	float fConst28;
	float fConst29;
	float fConst31;
	float fVec3[2];
	float fConst32;
	float fConst33;
	float fConst34;
	float fRec34[2];
	float fRec33[2];
	float fConst35;
	float fConst36;
	float fVec4[2];
	float fConst37;
	float fRec32[2];
	float fRec31[2];
	float fVec5[2];
	float fVec6[3];
	float fVec7[7];
	float fVec8[15];
	int IOTA0;
	float fVec9[32];
	float fVec10[64];
	float fVec11[128];
	float fVec12[256];
	float fVec13[512];
	float fVec14[1024];
	float fVec15[2048];
	float fVec16[4096];
	float fVec17[8192];
	float fVec18[16384];
	float fVec19[32768];
	float fVec20[65536];
	float fVec21[131072];
	float fVec22[262144];
	float fVec23[524288];
	float fVec24[1048576];
	int iConst38;
	int iConst39;
	int iConst40;
	int iConst41;
	int iConst42;
	int iConst43;
	int iConst44;
	int iConst45;
	int iConst46;
	int iConst47;
	int iConst48;
	int iConst49;
	int iConst50;
	int iConst51;
	int iConst52;
	int iConst53;
	int iConst54;
	int iConst55;
	int iConst56;
	int iConst57;
	int iConst58;
	int iConst59;
	int iConst60;
	int iConst61;
	int iConst62;
	int iConst63;
	int iConst64;
	int iConst65;
	int iConst66;
	int iConst67;
	int iConst68;
	int iConst69;
	int iConst70;
	int iConst71;
	int iConst72;
	int iConst73;
	int iConst74;
	float fRec39[2];
	FAUSTFLOAT fVbargraph1;
	float fVec25[2];
	float fVec26[2];
	float fRec38[2];
	float fRec37[2];
	float fVec27[2];
	float fRec36[2];
	float fRec35[2];
	float fVec28[2];
	float fVec29[3];
	float fVec30[7];
	float fVec31[15];
	float fVec32[32];
	float fVec33[64];
	float fVec34[128];
	float fVec35[256];
	float fVec36[512];
	float fVec37[1024];
	float fVec38[2048];
	float fVec39[4096];
	float fVec40[8192];
	float fVec41[16384];
	float fVec42[32768];
	float fVec43[65536];
	float fVec44[131072];
	float fVec45[262144];
	float fVec46[524288];
	float fVec47[1048576];
	FAUSTFLOAT fVbargraph2;
	float fVec48[2];
	float fRec30[2];
	float fVec49[2];
	float fRec29[2];
	float fRec28[2];
	float fRec40[2];
	float fVec50[2];
	float fRec27[2];
	float fRec41[2];
	FAUSTFLOAT fVslider4;
	FAUSTFLOAT fVslider5;
	FAUSTFLOAT fVslider6;
	float fRec50[2];
	float fRec46[2];
	float fRec47[2];
	float fRec42[2];
	float fRec43[2];
	float fVec51[2];
	int iConst75;
	float fVec52[3];
	int iConst76;
	float fVec53[7];
	int iConst77;
	int iConst78;
	float fVec54[15];
	int iConst79;
	int iConst80;
	float fVec55[32];
	int iConst81;
	int iConst82;
	float fVec56[64];
	int iConst83;
	int iConst84;
	float fVec57[128];
	int iConst85;
	int iConst86;
	float fVec58[256];
	int iConst87;
	int iConst88;
	float fVec59[512];
	int iConst89;
	int iConst90;
	float fVec60[1024];
	int iConst91;
	int iConst92;
	float fVec61[2048];
	int iConst93;
	int iConst94;
	float fVec62[4096];
	int iConst95;
	int iConst96;
	float fVec63[8192];
	int iConst97;
	int iConst98;
	float fVec64[16384];
	int iConst99;
	int iConst100;
	float fVec65[32768];
	int iConst101;
	FAUSTFLOAT fVslider7;
	float fConst102;
	float fConst103;
	float fRec15[2];
	FAUSTFLOAT fVbargraph3;
	float fConst104;
	FAUSTFLOAT fVslider8;
	FAUSTFLOAT fVslider9;
	FAUSTFLOAT fVslider10;
	float fConst106;
	int iConst107;
	float fVec66[2];
	float fRec54[2];
	float fRec53[2];
	float fVec67[2];
	float fRec52[2];
	float fRec51[2];
	float fVec68[2];
	float fVec69[3];
	float fVec70[7];
	float fVec71[15];
	float fVec72[32];
	float fVec73[64];
	float fVec74[128];
	float fVec75[256];
	float fVec76[512];
	float fVec77[1024];
	float fVec78[2048];
	float fVec79[4096];
	float fVec80[8192];
	float fVec81[16384];
	float fVec82[32768];
	float fVec83[65536];
	float fVec84[131072];
	int iConst108;
	int iConst109;
	int iConst110;
	int iConst111;
	int iConst112;
	int iConst113;
	int iConst114;
	int iConst115;
	int iConst116;
	int iConst117;
	int iConst118;
	int iConst119;
	int iConst120;
	int iConst121;
	int iConst122;
	int iConst123;
	int iConst124;
	int iConst125;
	int iConst126;
	int iConst127;
	int iConst128;
	int iConst129;
	int iConst130;
	int iConst131;
	int iConst132;
	int iConst133;
	int iConst134;
	int iConst135;
	int iConst136;
	int iConst137;
	int iConst138;
	float fVec85[2];
	float fRec58[2];
	float fRec57[2];
	float fVec86[2];
	float fRec56[2];
	float fRec55[2];
	float fVec87[2];
	float fVec88[3];
	float fVec89[7];
	float fVec90[15];
	float fVec91[32];
	float fVec92[64];
	float fVec93[128];
	float fVec94[256];
	float fVec95[512];
	float fVec96[1024];
	float fVec97[2048];
	float fVec98[4096];
	float fVec99[8192];
	float fVec100[16384];
	float fVec101[32768];
	float fVec102[65536];
	float fVec103[131072];
	float fRec14[2];
	FAUSTFLOAT fVbargraph4;
	float fRec13[2];
	float fConst139;
	FAUSTFLOAT fVslider11;
	float fRec59[2];
	FAUSTFLOAT fCheckbox4;
	float fRec60[2];
	FAUSTFLOAT fVslider12;
	float fRec61[2];
	FAUSTFLOAT fVslider13;
	float fConst140;
	FAUSTFLOAT fVslider14;
	FAUSTFLOAT fVslider15;
	float fRec63[262144];
	FAUSTFLOAT fVslider16;
	float fRec62[2];
	FAUSTFLOAT fVslider17;
	FAUSTFLOAT fVslider18;
	FAUSTFLOAT fVslider19;
	float fRec65[262144];
	float fRec64[2];
	FAUSTFLOAT fVbargraph5;
	FAUSTFLOAT fVbargraph6;
	FAUSTFLOAT fVslider20;
	FAUSTFLOAT fVslider21;
	FAUSTFLOAT fVslider22;
	float fRec67[131072];
	FAUSTFLOAT fVslider23;
	float fRec66[2];
	FAUSTFLOAT fVslider24;
	FAUSTFLOAT fVslider25;
	float fRec69[131072];
	float fRec68[2];
	FAUSTFLOAT fVbargraph7;
	float fRec10[2];
	float fRec11[2];
	FAUSTFLOAT fVslider26;
	float fRec70[2];
	FAUSTFLOAT fCheckbox5;
	float fRec71[2];
	float fVec104[2048];
	float fVec105[2048];
	float fConst141;
	int iRec8[2];
	float fRec9[2];
	float fRec7[2];
	float fConst142;
	float fConst143;
	float fRec6[2];
	FAUSTFLOAT fVbargraph8;
	FAUSTFLOAT fVbargraph9;
	int iConst144;
	float fRec4[2];
	float fRec5[2];
	float fRec2[3];
	float fRec3[3];
	float fVec106[2];
	float fRec0[2];
	FAUSTFLOAT fVbargraph10;
	float fVec107[2];
	float fRec76[2];
	float fRec75[2];
	float fVec108[2];
	float fRec74[2];
	float fRec73[2];
	float fVec109[2];
	float fVec110[3];
	float fVec111[7];
	float fVec112[15];
	float fVec113[32];
	float fVec114[64];
	float fVec115[128];
	float fVec116[256];
	float fVec117[512];
	float fVec118[1024];
	float fVec119[2048];
	float fVec120[4096];
	float fVec121[8192];
	float fVec122[16384];
	float fVec123[32768];
	float fVec124[65536];
	float fVec125[131072];
	float fVec126[262144];
	float fVec127[524288];
	float fVec128[1048576];
	float fVec129[2];
	float fVec130[2];
	float fRec80[2];
	float fRec79[2];
	float fVec131[2];
	float fRec78[2];
	float fRec77[2];
	float fVec132[2];
	float fVec133[3];
	float fVec134[7];
	float fVec135[15];
	float fVec136[32];
	float fVec137[64];
	float fVec138[128];
	float fVec139[256];
	float fVec140[512];
	float fVec141[1024];
	float fVec142[2048];
	float fVec143[4096];
	float fVec144[8192];
	float fVec145[16384];
	float fVec146[32768];
	float fVec147[65536];
	float fVec148[131072];
	float fVec149[262144];
	float fVec150[524288];
	float fVec151[1048576];
	FAUSTFLOAT fVbargraph11;
	float fRec72[2];
	FAUSTFLOAT fVbargraph12;
	
 public:
	
	void metadata(Meta* m) { 
		m->declare("analyzers.lib/name", "Faust Analyzer Library");
		m->declare("analyzers.lib/version", "0.2");
		m->declare("author", "Klaus Scheuermann");
		m->declare("basics.lib/bypass1:author", "Julius Smith");
		m->declare("basics.lib/name", "Faust Basic Element Library");
		m->declare("basics.lib/parallelMin:author", "Bart Brouns");
		m->declare("basics.lib/parallelMin:copyright", "Copyright (c) 2020 Bart Brouns <bart@magnetophon.nl>");
		m->declare("basics.lib/parallelMin:licence", "GPL-3.0");
		m->declare("basics.lib/parallelOp:author", "Bart Brouns");
		m->declare("basics.lib/parallelOp:copyright", "Copyright (c) 2020 Bart Brouns <bart@magnetophon.nl>");
		m->declare("basics.lib/parallelOp:licence", "GPL-3.0");
		m->declare("basics.lib/peakholder:author", "Dario Sanfilippo");
		m->declare("basics.lib/peakholder:copyright", "Copyright (C) 2022 Dario Sanfilippo <sanfilippo.dario@gmail.com>");
		m->declare("basics.lib/peakholder:license", "MIT-style STK-4.3 license");
		m->declare("basics.lib/version", "0.9");
		m->declare("compile_options", "-a /tmp/tmpct7gtc8d.cpp -lang cpp -es 1 -mcd 16 -single -ftz 0");
		m->declare("compressors.lib/RMS_FBFFcompressor_N_chan:author", "Bart Brouns");
		m->declare("compressors.lib/RMS_FBFFcompressor_N_chan:license", "GPLv3");
		m->declare("compressors.lib/RMS_compression_gain_N_chan_db:author", "Bart Brouns");
		m->declare("compressors.lib/RMS_compression_gain_N_chan_db:license", "GPLv3");
		m->declare("compressors.lib/RMS_compression_gain_mono_db:author", "Bart Brouns");
		m->declare("compressors.lib/RMS_compression_gain_mono_db:license", "GPLv3");
		m->declare("compressors.lib/name", "Faust Compressor Effect Library");
		m->declare("compressors.lib/version", "0.4");
		m->declare("ebur128.lib/author", "Jakob Dübel");
		m->declare("ebur128.lib/license", "ISC");
		m->declare("ebur128.lib/name", "ITU-R BS.1770-4 prefilter");
		m->declare("ebur128.lib/version", "1.0");
		m->declare("filename", "PodcastPluginMaster.dsp");
		m->declare("filters.lib/dcblockerat:author", "Julius O. Smith III");
		m->declare("filters.lib/dcblockerat:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/dcblockerat:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/filterbank:author", "Julius O. Smith III");
		m->declare("filters.lib/filterbank:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/filterbank:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/highpass:author", "Julius O. Smith III");
		m->declare("filters.lib/highpass:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/highshelf:author", "Julius O. Smith III");
		m->declare("filters.lib/highshelf:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/highshelf:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/integrator:author", "Julius O. Smith III");
		m->declare("filters.lib/integrator:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/integrator:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowpass0_highpass1", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowpass0_highpass1:author", "Julius O. Smith III");
		m->declare("filters.lib/lowpass:author", "Julius O. Smith III");
		m->declare("filters.lib/lowpass:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/lowpass:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowshelf:author", "Julius O. Smith III");
		m->declare("filters.lib/lowshelf:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/lowshelf:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/name", "Faust Filters Library");
		m->declare("filters.lib/pole:author", "Julius O. Smith III");
		m->declare("filters.lib/pole:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/pole:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/svf:author", "Oleg Nesterov");
		m->declare("filters.lib/svf:copyright", "Copyright (C) 2020 Oleg Nesterov <oleg@redhat.com>");
		m->declare("filters.lib/svf:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/tf1:author", "Julius O. Smith III");
		m->declare("filters.lib/tf1:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf1:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/tf1s:author", "Julius O. Smith III");
		m->declare("filters.lib/tf1s:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf1s:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/tf22t:author", "Julius O. Smith III");
		m->declare("filters.lib/tf22t:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf22t:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/version", "0.3");
		m->declare("filters.lib/zero:author", "Julius O. Smith III");
		m->declare("filters.lib/zero:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/zero:license", "MIT-style STK-4.3 license");
		m->declare("interpolators.lib/interpolate_linear:author", "Stéphane Letz");
		m->declare("interpolators.lib/interpolate_linear:licence", "MIT");
		m->declare("interpolators.lib/name", "Faust Interpolator Library");
		m->declare("interpolators.lib/version", "0.3");
		m->declare("license", "GPLv3");
		m->declare("maths.lib/author", "GRAME");
		m->declare("maths.lib/copyright", "GRAME");
		m->declare("maths.lib/license", "LGPL with exception");
		m->declare("maths.lib/name", "Faust Math Library");
		m->declare("maths.lib/version", "2.5");
		m->declare("name", "master_me");
		m->declare("platform.lib/name", "Generic Platform Library");
		m->declare("platform.lib/version", "0.3");
		m->declare("routes.lib/name", "Faust Signal Routing Library");
		m->declare("routes.lib/version", "0.2");
		m->declare("signals.lib/name", "Faust Signal Routing Library");
		m->declare("signals.lib/onePoleSwitching:author", "Jonatan Liljedahl, revised by Dario Sanfilippo");
		m->declare("signals.lib/onePoleSwitching:licence", "STK-4.3");
		m->declare("signals.lib/version", "0.3");
		m->declare("version", "1.0");
	}

	FAUSTPP_VIRTUAL int getNumInputs() {
		return 2;
	}
	FAUSTPP_VIRTUAL int getNumOutputs() {
		return 2;
	}
	
	static void classInit(int sample_rate) {
	}
	
	FAUSTPP_VIRTUAL void instanceConstants(int sample_rate) {
		fSampleRate = sample_rate;
		float fConst0 = std::min<float>(1.92e+05f, std::max<float>(1.0f, float(fSampleRate)));
		fConst1 = 8e+01f / fConst0;
		fConst2 = 44.1f / fConst0;
		fConst3 = 1.0f - fConst2;
		fConst4 = std::exp(0.0f - 125.0f / fConst0);
		fConst5 = 1.0f - fConst4;
		iConst6 = int(std::floor(0.1f * fConst0)) % 2;
		float fConst7 = 31.415926f / fConst0;
		fConst8 = 1.0f / (fConst7 + 1.0f);
		fConst9 = 1.0f - fConst7;
		float fConst10 = std::tan(1979.2034f / fConst0);
		fConst11 = 1.0f / fConst10;
		float fConst12 = fConst11 + 1.0f;
		fConst13 = 1.0f / fConst12;
		fConst14 = 1.0f - fConst11;
		fConst15 = 0.0f - 1.0f / (fConst10 * fConst12);
		fConst16 = 3.1415927f / fConst0;
		float fConst17 = std::rint(3.0f * fConst0);
		fConst18 = 1.0f / std::max<float>(fConst17, 1.1920929e-07f);
		iConst19 = int(std::floor(1.9073486e-06f * fConst17)) % 2;
		float fConst20 = std::tan(119.806114f / fConst0);
		float fConst21 = mydsp_faustpower2_f(fConst20);
		float fConst22 = 0.50032705f * (fConst21 + 1.0f);
		float fConst23 = fConst20 + fConst22;
		fConst24 = 0.0f - 1.0006541f / fConst23;
		float fConst25 = std::tan(5283.415f / fConst0);
		float fConst26 = mydsp_faustpower2_f(fConst25);
		float fConst27 = 1.4142135f * fConst25;
		fConst28 = 1.0f / (fConst26 + fConst27 + 1.0f);
		fConst29 = fConst26 + (1.0f - fConst27);
		float fConst30 = 1.7803667f * fConst25;
		fConst31 = fConst26 + (1.5848527f - fConst30);
		fConst32 = fConst26 + fConst30 + 1.5848527f;
		fConst33 = fConst26 + -1.0f;
		fConst34 = fConst26 + -1.5848527f;
		fConst35 = 1.0f / fConst23;
		fConst36 = fConst22 - fConst20;
		fConst37 = 1.0006541f * (fConst21 + -1.0f);
		iConst38 = int(std::floor(fConst17)) % 2;
		iConst39 = int(std::floor(0.5f * fConst17)) % 2;
		iConst40 = iConst38 + 2 * iConst39;
		iConst41 = int(std::floor(0.25f * fConst17)) % 2;
		iConst42 = iConst40 + 4 * iConst41;
		iConst43 = int(std::floor(0.125f * fConst17)) % 2;
		iConst44 = iConst42 + 8 * iConst43;
		iConst45 = int(std::floor(0.0625f * fConst17)) % 2;
		iConst46 = iConst44 + 16 * iConst45;
		iConst47 = int(std::floor(0.03125f * fConst17)) % 2;
		iConst48 = iConst46 + 32 * iConst47;
		iConst49 = int(std::floor(0.015625f * fConst17)) % 2;
		iConst50 = iConst48 + 64 * iConst49;
		iConst51 = int(std::floor(0.0078125f * fConst17)) % 2;
		iConst52 = iConst50 + 128 * iConst51;
		iConst53 = int(std::floor(0.00390625f * fConst17)) % 2;
		iConst54 = iConst52 + 256 * iConst53;
		iConst55 = int(std::floor(0.001953125f * fConst17)) % 2;
		iConst56 = iConst54 + 512 * iConst55;
		iConst57 = int(std::floor(0.0009765625f * fConst17)) % 2;
		iConst58 = iConst56 + 1024 * iConst57;
		iConst59 = int(std::floor(0.00048828125f * fConst17)) % 2;
		iConst60 = iConst58 + 2048 * iConst59;
		iConst61 = int(std::floor(0.00024414062f * fConst17)) % 2;
		iConst62 = iConst60 + 4096 * iConst61;
		iConst63 = int(std::floor(0.00012207031f * fConst17)) % 2;
		iConst64 = iConst62 + 8192 * iConst63;
		iConst65 = int(std::floor(6.1035156e-05f * fConst17)) % 2;
		iConst66 = iConst64 + 16384 * iConst65;
		iConst67 = int(std::floor(3.0517578e-05f * fConst17)) % 2;
		iConst68 = iConst66 + 32768 * iConst67;
		iConst69 = int(std::floor(1.5258789e-05f * fConst17)) % 2;
		iConst70 = iConst68 + 65536 * iConst69;
		iConst71 = int(std::floor(7.6293945e-06f * fConst17)) % 2;
		iConst72 = iConst70 + 131072 * iConst71;
		iConst73 = int(std::floor(3.8146973e-06f * fConst17)) % 2;
		iConst74 = iConst72 + 262144 * iConst73;
		iConst75 = int(std::floor(0.05f * fConst0)) % 2;
		iConst76 = int(std::floor(0.025f * fConst0)) % 2;
		iConst77 = iConst6 + 2 * iConst75;
		iConst78 = int(std::floor(0.0125f * fConst0)) % 2;
		iConst79 = iConst77 + 4 * iConst76;
		iConst80 = int(std::floor(0.00625f * fConst0)) % 2;
		iConst81 = iConst79 + 8 * iConst78;
		iConst82 = int(std::floor(0.003125f * fConst0)) % 2;
		iConst83 = iConst81 + 16 * iConst80;
		iConst84 = int(std::floor(0.0015625f * fConst0)) % 2;
		iConst85 = iConst83 + 32 * iConst82;
		iConst86 = int(std::floor(0.00078125f * fConst0)) % 2;
		iConst87 = iConst85 + 64 * iConst84;
		iConst88 = int(std::floor(0.000390625f * fConst0)) % 2;
		iConst89 = iConst87 + 128 * iConst86;
		iConst90 = int(std::floor(0.0001953125f * fConst0)) % 2;
		iConst91 = iConst89 + 256 * iConst88;
		iConst92 = int(std::floor(9.765625e-05f * fConst0)) % 2;
		iConst93 = iConst91 + 512 * iConst90;
		iConst94 = int(std::floor(4.8828126e-05f * fConst0)) % 2;
		iConst95 = iConst93 + 1024 * iConst92;
		iConst96 = int(std::floor(2.4414063e-05f * fConst0)) % 2;
		iConst97 = iConst95 + 2048 * iConst94;
		iConst98 = int(std::floor(1.2207031e-05f * fConst0)) % 2;
		iConst99 = iConst97 + 4096 * iConst96;
		iConst100 = int(std::floor(6.1035157e-06f * fConst0)) % 2;
		iConst101 = iConst99 + 8192 * iConst98;
		fConst102 = std::exp(0.0f - 3.3333333f / fConst0);
		fConst103 = std::exp(0.0f - 2e+01f / fConst0);
		fConst104 = 1.0f / fConst0;
		float fConst105 = std::rint(0.4f * fConst0);
		fConst106 = 1.0f / std::max<float>(fConst105, 1.1920929e-07f);
		iConst107 = int(std::floor(1.5258789e-05f * fConst105)) % 2;
		iConst108 = int(std::floor(fConst105)) % 2;
		iConst109 = int(std::floor(0.5f * fConst105)) % 2;
		iConst110 = iConst108 + 2 * iConst109;
		iConst111 = int(std::floor(0.25f * fConst105)) % 2;
		iConst112 = iConst110 + 4 * iConst111;
		iConst113 = int(std::floor(0.125f * fConst105)) % 2;
		iConst114 = iConst112 + 8 * iConst113;
		iConst115 = int(std::floor(0.0625f * fConst105)) % 2;
		iConst116 = iConst114 + 16 * iConst115;
		iConst117 = int(std::floor(0.03125f * fConst105)) % 2;
		iConst118 = iConst116 + 32 * iConst117;
		iConst119 = int(std::floor(0.015625f * fConst105)) % 2;
		iConst120 = iConst118 + 64 * iConst119;
		iConst121 = int(std::floor(0.0078125f * fConst105)) % 2;
		iConst122 = iConst120 + 128 * iConst121;
		iConst123 = int(std::floor(0.00390625f * fConst105)) % 2;
		iConst124 = iConst122 + 256 * iConst123;
		iConst125 = int(std::floor(0.001953125f * fConst105)) % 2;
		iConst126 = iConst124 + 512 * iConst125;
		iConst127 = int(std::floor(0.0009765625f * fConst105)) % 2;
		iConst128 = iConst126 + 1024 * iConst127;
		iConst129 = int(std::floor(0.00048828125f * fConst105)) % 2;
		iConst130 = iConst128 + 2048 * iConst129;
		iConst131 = int(std::floor(0.00024414062f * fConst105)) % 2;
		iConst132 = iConst130 + 4096 * iConst131;
		iConst133 = int(std::floor(0.00012207031f * fConst105)) % 2;
		iConst134 = iConst132 + 8192 * iConst133;
		iConst135 = int(std::floor(6.1035156e-05f * fConst105)) % 2;
		iConst136 = iConst134 + 16384 * iConst135;
		iConst137 = int(std::floor(3.0517578e-05f * fConst105)) % 2;
		iConst138 = iConst136 + 32768 * iConst137;
		fConst139 = 0.441f / fConst0;
		fConst140 = 0.001f * fConst0;
		fConst141 = 0.01f * fConst0;
		fConst142 = std::exp(0.0f - 1e+01f / fConst0);
		fConst143 = 1.0f - fConst142;
		iConst144 = int(0.01f * fConst0);
	}
	
	FAUSTPP_VIRTUAL void instanceResetUserInterface() {
		fCheckbox0 = FAUSTFLOAT(0.0f);
		fCheckbox1 = FAUSTFLOAT(0.0f);
		fVslider0 = FAUSTFLOAT(2e+01f);
		fCheckbox2 = FAUSTFLOAT(0.0f);
		fVslider1 = FAUSTFLOAT(0.0f);
		fCheckbox3 = FAUSTFLOAT(0.0f);
		fVslider2 = FAUSTFLOAT(5.0f);
		fVslider3 = FAUSTFLOAT(0.0f);
		fVslider4 = FAUSTFLOAT(6e+02f);
		fVslider5 = FAUSTFLOAT(1.0f);
		fVslider6 = FAUSTFLOAT(0.0f);
		fVslider7 = FAUSTFLOAT(-14.0f);
		fVslider8 = FAUSTFLOAT(2e+01f);
		fVslider9 = FAUSTFLOAT(2e+01f);
		fVslider10 = FAUSTFLOAT(-18.0f);
		fVslider11 = FAUSTFLOAT(1e+02f);
		fCheckbox4 = FAUSTFLOAT(0.0f);
		fVslider12 = FAUSTFLOAT(0.0f);
		fVslider13 = FAUSTFLOAT(2e+01f);
		fVslider14 = FAUSTFLOAT(2e+02f);
		fVslider15 = FAUSTFLOAT(5e+01f);
		fVslider16 = FAUSTFLOAT(2e+01f);
		fVslider17 = FAUSTFLOAT(-6.0f);
		fVslider18 = FAUSTFLOAT(6.0f);
		fVslider19 = FAUSTFLOAT(6e+01f);
		fVslider20 = FAUSTFLOAT(8e+01f);
		fVslider21 = FAUSTFLOAT(5e+01f);
		fVslider22 = FAUSTFLOAT(4e+01f);
		fVslider23 = FAUSTFLOAT(1.0f);
		fVslider24 = FAUSTFLOAT(6.0f);
		fVslider25 = FAUSTFLOAT(8.0f);
		fVslider26 = FAUSTFLOAT(0.0f);
		fCheckbox5 = FAUSTFLOAT(0.0f);
	}
	
	FAUSTPP_VIRTUAL void instanceClear() {
		for (int l0 = 0; l0 < 2; l0 = l0 + 1) {
			fRec1[l0] = 0.0f;
		}
		for (int l1 = 0; l1 < 2; l1 = l1 + 1) {
			fRec12[l1] = 0.0f;
		}
		for (int l2 = 0; l2 < 2; l2 = l2 + 1) {
			fRec16[l2] = 0.0f;
		}
		for (int l3 = 0; l3 < 2; l3 = l3 + 1) {
			fRec18[l3] = 0.0f;
		}
		for (int l4 = 0; l4 < 2; l4 = l4 + 1) {
			fRec17[l4] = 0.0f;
		}
		for (int l5 = 0; l5 < 2; l5 = l5 + 1) {
			fVec0[l5] = 0.0f;
		}
		for (int l6 = 0; l6 < 2; l6 = l6 + 1) {
			fRec19[l6] = 0.0f;
		}
		for (int l7 = 0; l7 < 2; l7 = l7 + 1) {
			fRec20[l7] = 0.0f;
		}
		for (int l8 = 0; l8 < 2; l8 = l8 + 1) {
			fVec1[l8] = 0.0f;
		}
		for (int l9 = 0; l9 < 2; l9 = l9 + 1) {
			fRec23[l9] = 0.0f;
		}
		for (int l10 = 0; l10 < 2; l10 = l10 + 1) {
			fRec22[l10] = 0.0f;
		}
		for (int l11 = 0; l11 < 2; l11 = l11 + 1) {
			fRec24[l11] = 0.0f;
		}
		for (int l12 = 0; l12 < 2; l12 = l12 + 1) {
			fRec25[l12] = 0.0f;
		}
		for (int l13 = 0; l13 < 2; l13 = l13 + 1) {
			fVec2[l13] = 0.0f;
		}
		for (int l14 = 0; l14 < 2; l14 = l14 + 1) {
			fRec21[l14] = 0.0f;
		}
		for (int l15 = 0; l15 < 2; l15 = l15 + 1) {
			fRec26[l15] = 0.0f;
		}
		for (int l16 = 0; l16 < 2; l16 = l16 + 1) {
			fVec3[l16] = 0.0f;
		}
		for (int l17 = 0; l17 < 2; l17 = l17 + 1) {
			fRec34[l17] = 0.0f;
		}
		for (int l18 = 0; l18 < 2; l18 = l18 + 1) {
			fRec33[l18] = 0.0f;
		}
		for (int l19 = 0; l19 < 2; l19 = l19 + 1) {
			fVec4[l19] = 0.0f;
		}
		for (int l20 = 0; l20 < 2; l20 = l20 + 1) {
			fRec32[l20] = 0.0f;
		}
		for (int l21 = 0; l21 < 2; l21 = l21 + 1) {
			fRec31[l21] = 0.0f;
		}
		for (int l22 = 0; l22 < 2; l22 = l22 + 1) {
			fVec5[l22] = 0.0f;
		}
		for (int l23 = 0; l23 < 3; l23 = l23 + 1) {
			fVec6[l23] = 0.0f;
		}
		for (int l24 = 0; l24 < 7; l24 = l24 + 1) {
			fVec7[l24] = 0.0f;
		}
		for (int l25 = 0; l25 < 15; l25 = l25 + 1) {
			fVec8[l25] = 0.0f;
		}
		IOTA0 = 0;
		for (int l26 = 0; l26 < 32; l26 = l26 + 1) {
			fVec9[l26] = 0.0f;
		}
		for (int l27 = 0; l27 < 64; l27 = l27 + 1) {
			fVec10[l27] = 0.0f;
		}
		for (int l28 = 0; l28 < 128; l28 = l28 + 1) {
			fVec11[l28] = 0.0f;
		}
		for (int l29 = 0; l29 < 256; l29 = l29 + 1) {
			fVec12[l29] = 0.0f;
		}
		for (int l30 = 0; l30 < 512; l30 = l30 + 1) {
			fVec13[l30] = 0.0f;
		}
		for (int l31 = 0; l31 < 1024; l31 = l31 + 1) {
			fVec14[l31] = 0.0f;
		}
		for (int l32 = 0; l32 < 2048; l32 = l32 + 1) {
			fVec15[l32] = 0.0f;
		}
		for (int l33 = 0; l33 < 4096; l33 = l33 + 1) {
			fVec16[l33] = 0.0f;
		}
		for (int l34 = 0; l34 < 8192; l34 = l34 + 1) {
			fVec17[l34] = 0.0f;
		}
		for (int l35 = 0; l35 < 16384; l35 = l35 + 1) {
			fVec18[l35] = 0.0f;
		}
		for (int l36 = 0; l36 < 32768; l36 = l36 + 1) {
			fVec19[l36] = 0.0f;
		}
		for (int l37 = 0; l37 < 65536; l37 = l37 + 1) {
			fVec20[l37] = 0.0f;
		}
		for (int l38 = 0; l38 < 131072; l38 = l38 + 1) {
			fVec21[l38] = 0.0f;
		}
		for (int l39 = 0; l39 < 262144; l39 = l39 + 1) {
			fVec22[l39] = 0.0f;
		}
		for (int l40 = 0; l40 < 524288; l40 = l40 + 1) {
			fVec23[l40] = 0.0f;
		}
		for (int l41 = 0; l41 < 1048576; l41 = l41 + 1) {
			fVec24[l41] = 0.0f;
		}
		for (int l42 = 0; l42 < 2; l42 = l42 + 1) {
			fRec39[l42] = 0.0f;
		}
		for (int l43 = 0; l43 < 2; l43 = l43 + 1) {
			fVec25[l43] = 0.0f;
		}
		for (int l44 = 0; l44 < 2; l44 = l44 + 1) {
			fVec26[l44] = 0.0f;
		}
		for (int l45 = 0; l45 < 2; l45 = l45 + 1) {
			fRec38[l45] = 0.0f;
		}
		for (int l46 = 0; l46 < 2; l46 = l46 + 1) {
			fRec37[l46] = 0.0f;
		}
		for (int l47 = 0; l47 < 2; l47 = l47 + 1) {
			fVec27[l47] = 0.0f;
		}
		for (int l48 = 0; l48 < 2; l48 = l48 + 1) {
			fRec36[l48] = 0.0f;
		}
		for (int l49 = 0; l49 < 2; l49 = l49 + 1) {
			fRec35[l49] = 0.0f;
		}
		for (int l50 = 0; l50 < 2; l50 = l50 + 1) {
			fVec28[l50] = 0.0f;
		}
		for (int l51 = 0; l51 < 3; l51 = l51 + 1) {
			fVec29[l51] = 0.0f;
		}
		for (int l52 = 0; l52 < 7; l52 = l52 + 1) {
			fVec30[l52] = 0.0f;
		}
		for (int l53 = 0; l53 < 15; l53 = l53 + 1) {
			fVec31[l53] = 0.0f;
		}
		for (int l54 = 0; l54 < 32; l54 = l54 + 1) {
			fVec32[l54] = 0.0f;
		}
		for (int l55 = 0; l55 < 64; l55 = l55 + 1) {
			fVec33[l55] = 0.0f;
		}
		for (int l56 = 0; l56 < 128; l56 = l56 + 1) {
			fVec34[l56] = 0.0f;
		}
		for (int l57 = 0; l57 < 256; l57 = l57 + 1) {
			fVec35[l57] = 0.0f;
		}
		for (int l58 = 0; l58 < 512; l58 = l58 + 1) {
			fVec36[l58] = 0.0f;
		}
		for (int l59 = 0; l59 < 1024; l59 = l59 + 1) {
			fVec37[l59] = 0.0f;
		}
		for (int l60 = 0; l60 < 2048; l60 = l60 + 1) {
			fVec38[l60] = 0.0f;
		}
		for (int l61 = 0; l61 < 4096; l61 = l61 + 1) {
			fVec39[l61] = 0.0f;
		}
		for (int l62 = 0; l62 < 8192; l62 = l62 + 1) {
			fVec40[l62] = 0.0f;
		}
		for (int l63 = 0; l63 < 16384; l63 = l63 + 1) {
			fVec41[l63] = 0.0f;
		}
		for (int l64 = 0; l64 < 32768; l64 = l64 + 1) {
			fVec42[l64] = 0.0f;
		}
		for (int l65 = 0; l65 < 65536; l65 = l65 + 1) {
			fVec43[l65] = 0.0f;
		}
		for (int l66 = 0; l66 < 131072; l66 = l66 + 1) {
			fVec44[l66] = 0.0f;
		}
		for (int l67 = 0; l67 < 262144; l67 = l67 + 1) {
			fVec45[l67] = 0.0f;
		}
		for (int l68 = 0; l68 < 524288; l68 = l68 + 1) {
			fVec46[l68] = 0.0f;
		}
		for (int l69 = 0; l69 < 1048576; l69 = l69 + 1) {
			fVec47[l69] = 0.0f;
		}
		for (int l70 = 0; l70 < 2; l70 = l70 + 1) {
			fVec48[l70] = 0.0f;
		}
		for (int l71 = 0; l71 < 2; l71 = l71 + 1) {
			fRec30[l71] = 0.0f;
		}
		for (int l72 = 0; l72 < 2; l72 = l72 + 1) {
			fVec49[l72] = 0.0f;
		}
		for (int l73 = 0; l73 < 2; l73 = l73 + 1) {
			fRec29[l73] = 0.0f;
		}
		for (int l74 = 0; l74 < 2; l74 = l74 + 1) {
			fRec28[l74] = 0.0f;
		}
		for (int l75 = 0; l75 < 2; l75 = l75 + 1) {
			fRec40[l75] = 0.0f;
		}
		for (int l76 = 0; l76 < 2; l76 = l76 + 1) {
			fVec50[l76] = 0.0f;
		}
		for (int l77 = 0; l77 < 2; l77 = l77 + 1) {
			fRec27[l77] = 0.0f;
		}
		for (int l78 = 0; l78 < 2; l78 = l78 + 1) {
			fRec41[l78] = 0.0f;
		}
		for (int l79 = 0; l79 < 2; l79 = l79 + 1) {
			fRec50[l79] = 0.0f;
		}
		for (int l80 = 0; l80 < 2; l80 = l80 + 1) {
			fRec46[l80] = 0.0f;
		}
		for (int l81 = 0; l81 < 2; l81 = l81 + 1) {
			fRec47[l81] = 0.0f;
		}
		for (int l82 = 0; l82 < 2; l82 = l82 + 1) {
			fRec42[l82] = 0.0f;
		}
		for (int l83 = 0; l83 < 2; l83 = l83 + 1) {
			fRec43[l83] = 0.0f;
		}
		for (int l84 = 0; l84 < 2; l84 = l84 + 1) {
			fVec51[l84] = 0.0f;
		}
		for (int l85 = 0; l85 < 3; l85 = l85 + 1) {
			fVec52[l85] = 0.0f;
		}
		for (int l86 = 0; l86 < 7; l86 = l86 + 1) {
			fVec53[l86] = 0.0f;
		}
		for (int l87 = 0; l87 < 15; l87 = l87 + 1) {
			fVec54[l87] = 0.0f;
		}
		for (int l88 = 0; l88 < 32; l88 = l88 + 1) {
			fVec55[l88] = 0.0f;
		}
		for (int l89 = 0; l89 < 64; l89 = l89 + 1) {
			fVec56[l89] = 0.0f;
		}
		for (int l90 = 0; l90 < 128; l90 = l90 + 1) {
			fVec57[l90] = 0.0f;
		}
		for (int l91 = 0; l91 < 256; l91 = l91 + 1) {
			fVec58[l91] = 0.0f;
		}
		for (int l92 = 0; l92 < 512; l92 = l92 + 1) {
			fVec59[l92] = 0.0f;
		}
		for (int l93 = 0; l93 < 1024; l93 = l93 + 1) {
			fVec60[l93] = 0.0f;
		}
		for (int l94 = 0; l94 < 2048; l94 = l94 + 1) {
			fVec61[l94] = 0.0f;
		}
		for (int l95 = 0; l95 < 4096; l95 = l95 + 1) {
			fVec62[l95] = 0.0f;
		}
		for (int l96 = 0; l96 < 8192; l96 = l96 + 1) {
			fVec63[l96] = 0.0f;
		}
		for (int l97 = 0; l97 < 16384; l97 = l97 + 1) {
			fVec64[l97] = 0.0f;
		}
		for (int l98 = 0; l98 < 32768; l98 = l98 + 1) {
			fVec65[l98] = 0.0f;
		}
		for (int l99 = 0; l99 < 2; l99 = l99 + 1) {
			fRec15[l99] = 0.0f;
		}
		for (int l100 = 0; l100 < 2; l100 = l100 + 1) {
			fVec66[l100] = 0.0f;
		}
		for (int l101 = 0; l101 < 2; l101 = l101 + 1) {
			fRec54[l101] = 0.0f;
		}
		for (int l102 = 0; l102 < 2; l102 = l102 + 1) {
			fRec53[l102] = 0.0f;
		}
		for (int l103 = 0; l103 < 2; l103 = l103 + 1) {
			fVec67[l103] = 0.0f;
		}
		for (int l104 = 0; l104 < 2; l104 = l104 + 1) {
			fRec52[l104] = 0.0f;
		}
		for (int l105 = 0; l105 < 2; l105 = l105 + 1) {
			fRec51[l105] = 0.0f;
		}
		for (int l106 = 0; l106 < 2; l106 = l106 + 1) {
			fVec68[l106] = 0.0f;
		}
		for (int l107 = 0; l107 < 3; l107 = l107 + 1) {
			fVec69[l107] = 0.0f;
		}
		for (int l108 = 0; l108 < 7; l108 = l108 + 1) {
			fVec70[l108] = 0.0f;
		}
		for (int l109 = 0; l109 < 15; l109 = l109 + 1) {
			fVec71[l109] = 0.0f;
		}
		for (int l110 = 0; l110 < 32; l110 = l110 + 1) {
			fVec72[l110] = 0.0f;
		}
		for (int l111 = 0; l111 < 64; l111 = l111 + 1) {
			fVec73[l111] = 0.0f;
		}
		for (int l112 = 0; l112 < 128; l112 = l112 + 1) {
			fVec74[l112] = 0.0f;
		}
		for (int l113 = 0; l113 < 256; l113 = l113 + 1) {
			fVec75[l113] = 0.0f;
		}
		for (int l114 = 0; l114 < 512; l114 = l114 + 1) {
			fVec76[l114] = 0.0f;
		}
		for (int l115 = 0; l115 < 1024; l115 = l115 + 1) {
			fVec77[l115] = 0.0f;
		}
		for (int l116 = 0; l116 < 2048; l116 = l116 + 1) {
			fVec78[l116] = 0.0f;
		}
		for (int l117 = 0; l117 < 4096; l117 = l117 + 1) {
			fVec79[l117] = 0.0f;
		}
		for (int l118 = 0; l118 < 8192; l118 = l118 + 1) {
			fVec80[l118] = 0.0f;
		}
		for (int l119 = 0; l119 < 16384; l119 = l119 + 1) {
			fVec81[l119] = 0.0f;
		}
		for (int l120 = 0; l120 < 32768; l120 = l120 + 1) {
			fVec82[l120] = 0.0f;
		}
		for (int l121 = 0; l121 < 65536; l121 = l121 + 1) {
			fVec83[l121] = 0.0f;
		}
		for (int l122 = 0; l122 < 131072; l122 = l122 + 1) {
			fVec84[l122] = 0.0f;
		}
		for (int l123 = 0; l123 < 2; l123 = l123 + 1) {
			fVec85[l123] = 0.0f;
		}
		for (int l124 = 0; l124 < 2; l124 = l124 + 1) {
			fRec58[l124] = 0.0f;
		}
		for (int l125 = 0; l125 < 2; l125 = l125 + 1) {
			fRec57[l125] = 0.0f;
		}
		for (int l126 = 0; l126 < 2; l126 = l126 + 1) {
			fVec86[l126] = 0.0f;
		}
		for (int l127 = 0; l127 < 2; l127 = l127 + 1) {
			fRec56[l127] = 0.0f;
		}
		for (int l128 = 0; l128 < 2; l128 = l128 + 1) {
			fRec55[l128] = 0.0f;
		}
		for (int l129 = 0; l129 < 2; l129 = l129 + 1) {
			fVec87[l129] = 0.0f;
		}
		for (int l130 = 0; l130 < 3; l130 = l130 + 1) {
			fVec88[l130] = 0.0f;
		}
		for (int l131 = 0; l131 < 7; l131 = l131 + 1) {
			fVec89[l131] = 0.0f;
		}
		for (int l132 = 0; l132 < 15; l132 = l132 + 1) {
			fVec90[l132] = 0.0f;
		}
		for (int l133 = 0; l133 < 32; l133 = l133 + 1) {
			fVec91[l133] = 0.0f;
		}
		for (int l134 = 0; l134 < 64; l134 = l134 + 1) {
			fVec92[l134] = 0.0f;
		}
		for (int l135 = 0; l135 < 128; l135 = l135 + 1) {
			fVec93[l135] = 0.0f;
		}
		for (int l136 = 0; l136 < 256; l136 = l136 + 1) {
			fVec94[l136] = 0.0f;
		}
		for (int l137 = 0; l137 < 512; l137 = l137 + 1) {
			fVec95[l137] = 0.0f;
		}
		for (int l138 = 0; l138 < 1024; l138 = l138 + 1) {
			fVec96[l138] = 0.0f;
		}
		for (int l139 = 0; l139 < 2048; l139 = l139 + 1) {
			fVec97[l139] = 0.0f;
		}
		for (int l140 = 0; l140 < 4096; l140 = l140 + 1) {
			fVec98[l140] = 0.0f;
		}
		for (int l141 = 0; l141 < 8192; l141 = l141 + 1) {
			fVec99[l141] = 0.0f;
		}
		for (int l142 = 0; l142 < 16384; l142 = l142 + 1) {
			fVec100[l142] = 0.0f;
		}
		for (int l143 = 0; l143 < 32768; l143 = l143 + 1) {
			fVec101[l143] = 0.0f;
		}
		for (int l144 = 0; l144 < 65536; l144 = l144 + 1) {
			fVec102[l144] = 0.0f;
		}
		for (int l145 = 0; l145 < 131072; l145 = l145 + 1) {
			fVec103[l145] = 0.0f;
		}
		for (int l146 = 0; l146 < 2; l146 = l146 + 1) {
			fRec14[l146] = 0.0f;
		}
		for (int l147 = 0; l147 < 2; l147 = l147 + 1) {
			fRec13[l147] = 0.0f;
		}
		for (int l148 = 0; l148 < 2; l148 = l148 + 1) {
			fRec59[l148] = 0.0f;
		}
		for (int l149 = 0; l149 < 2; l149 = l149 + 1) {
			fRec60[l149] = 0.0f;
		}
		for (int l150 = 0; l150 < 2; l150 = l150 + 1) {
			fRec61[l150] = 0.0f;
		}
		for (int l151 = 0; l151 < 262144; l151 = l151 + 1) {
			fRec63[l151] = 0.0f;
		}
		for (int l152 = 0; l152 < 2; l152 = l152 + 1) {
			fRec62[l152] = 0.0f;
		}
		for (int l153 = 0; l153 < 262144; l153 = l153 + 1) {
			fRec65[l153] = 0.0f;
		}
		for (int l154 = 0; l154 < 2; l154 = l154 + 1) {
			fRec64[l154] = 0.0f;
		}
		for (int l155 = 0; l155 < 131072; l155 = l155 + 1) {
			fRec67[l155] = 0.0f;
		}
		for (int l156 = 0; l156 < 2; l156 = l156 + 1) {
			fRec66[l156] = 0.0f;
		}
		for (int l157 = 0; l157 < 131072; l157 = l157 + 1) {
			fRec69[l157] = 0.0f;
		}
		for (int l158 = 0; l158 < 2; l158 = l158 + 1) {
			fRec68[l158] = 0.0f;
		}
		for (int l159 = 0; l159 < 2; l159 = l159 + 1) {
			fRec10[l159] = 0.0f;
		}
		for (int l160 = 0; l160 < 2; l160 = l160 + 1) {
			fRec11[l160] = 0.0f;
		}
		for (int l161 = 0; l161 < 2; l161 = l161 + 1) {
			fRec70[l161] = 0.0f;
		}
		for (int l162 = 0; l162 < 2; l162 = l162 + 1) {
			fRec71[l162] = 0.0f;
		}
		for (int l163 = 0; l163 < 2048; l163 = l163 + 1) {
			fVec104[l163] = 0.0f;
		}
		for (int l164 = 0; l164 < 2048; l164 = l164 + 1) {
			fVec105[l164] = 0.0f;
		}
		for (int l165 = 0; l165 < 2; l165 = l165 + 1) {
			iRec8[l165] = 0;
		}
		for (int l166 = 0; l166 < 2; l166 = l166 + 1) {
			fRec9[l166] = 0.0f;
		}
		for (int l167 = 0; l167 < 2; l167 = l167 + 1) {
			fRec7[l167] = 0.0f;
		}
		for (int l168 = 0; l168 < 2; l168 = l168 + 1) {
			fRec6[l168] = 0.0f;
		}
		for (int l169 = 0; l169 < 2; l169 = l169 + 1) {
			fRec4[l169] = 0.0f;
		}
		for (int l170 = 0; l170 < 2; l170 = l170 + 1) {
			fRec5[l170] = 0.0f;
		}
		for (int l171 = 0; l171 < 3; l171 = l171 + 1) {
			fRec2[l171] = 0.0f;
		}
		for (int l172 = 0; l172 < 3; l172 = l172 + 1) {
			fRec3[l172] = 0.0f;
		}
		for (int l173 = 0; l173 < 2; l173 = l173 + 1) {
			fVec106[l173] = 0.0f;
		}
		for (int l174 = 0; l174 < 2; l174 = l174 + 1) {
			fRec0[l174] = 0.0f;
		}
		for (int l175 = 0; l175 < 2; l175 = l175 + 1) {
			fVec107[l175] = 0.0f;
		}
		for (int l176 = 0; l176 < 2; l176 = l176 + 1) {
			fRec76[l176] = 0.0f;
		}
		for (int l177 = 0; l177 < 2; l177 = l177 + 1) {
			fRec75[l177] = 0.0f;
		}
		for (int l178 = 0; l178 < 2; l178 = l178 + 1) {
			fVec108[l178] = 0.0f;
		}
		for (int l179 = 0; l179 < 2; l179 = l179 + 1) {
			fRec74[l179] = 0.0f;
		}
		for (int l180 = 0; l180 < 2; l180 = l180 + 1) {
			fRec73[l180] = 0.0f;
		}
		for (int l181 = 0; l181 < 2; l181 = l181 + 1) {
			fVec109[l181] = 0.0f;
		}
		for (int l182 = 0; l182 < 3; l182 = l182 + 1) {
			fVec110[l182] = 0.0f;
		}
		for (int l183 = 0; l183 < 7; l183 = l183 + 1) {
			fVec111[l183] = 0.0f;
		}
		for (int l184 = 0; l184 < 15; l184 = l184 + 1) {
			fVec112[l184] = 0.0f;
		}
		for (int l185 = 0; l185 < 32; l185 = l185 + 1) {
			fVec113[l185] = 0.0f;
		}
		for (int l186 = 0; l186 < 64; l186 = l186 + 1) {
			fVec114[l186] = 0.0f;
		}
		for (int l187 = 0; l187 < 128; l187 = l187 + 1) {
			fVec115[l187] = 0.0f;
		}
		for (int l188 = 0; l188 < 256; l188 = l188 + 1) {
			fVec116[l188] = 0.0f;
		}
		for (int l189 = 0; l189 < 512; l189 = l189 + 1) {
			fVec117[l189] = 0.0f;
		}
		for (int l190 = 0; l190 < 1024; l190 = l190 + 1) {
			fVec118[l190] = 0.0f;
		}
		for (int l191 = 0; l191 < 2048; l191 = l191 + 1) {
			fVec119[l191] = 0.0f;
		}
		for (int l192 = 0; l192 < 4096; l192 = l192 + 1) {
			fVec120[l192] = 0.0f;
		}
		for (int l193 = 0; l193 < 8192; l193 = l193 + 1) {
			fVec121[l193] = 0.0f;
		}
		for (int l194 = 0; l194 < 16384; l194 = l194 + 1) {
			fVec122[l194] = 0.0f;
		}
		for (int l195 = 0; l195 < 32768; l195 = l195 + 1) {
			fVec123[l195] = 0.0f;
		}
		for (int l196 = 0; l196 < 65536; l196 = l196 + 1) {
			fVec124[l196] = 0.0f;
		}
		for (int l197 = 0; l197 < 131072; l197 = l197 + 1) {
			fVec125[l197] = 0.0f;
		}
		for (int l198 = 0; l198 < 262144; l198 = l198 + 1) {
			fVec126[l198] = 0.0f;
		}
		for (int l199 = 0; l199 < 524288; l199 = l199 + 1) {
			fVec127[l199] = 0.0f;
		}
		for (int l200 = 0; l200 < 1048576; l200 = l200 + 1) {
			fVec128[l200] = 0.0f;
		}
		for (int l201 = 0; l201 < 2; l201 = l201 + 1) {
			fVec129[l201] = 0.0f;
		}
		for (int l202 = 0; l202 < 2; l202 = l202 + 1) {
			fVec130[l202] = 0.0f;
		}
		for (int l203 = 0; l203 < 2; l203 = l203 + 1) {
			fRec80[l203] = 0.0f;
		}
		for (int l204 = 0; l204 < 2; l204 = l204 + 1) {
			fRec79[l204] = 0.0f;
		}
		for (int l205 = 0; l205 < 2; l205 = l205 + 1) {
			fVec131[l205] = 0.0f;
		}
		for (int l206 = 0; l206 < 2; l206 = l206 + 1) {
			fRec78[l206] = 0.0f;
		}
		for (int l207 = 0; l207 < 2; l207 = l207 + 1) {
			fRec77[l207] = 0.0f;
		}
		for (int l208 = 0; l208 < 2; l208 = l208 + 1) {
			fVec132[l208] = 0.0f;
		}
		for (int l209 = 0; l209 < 3; l209 = l209 + 1) {
			fVec133[l209] = 0.0f;
		}
		for (int l210 = 0; l210 < 7; l210 = l210 + 1) {
			fVec134[l210] = 0.0f;
		}
		for (int l211 = 0; l211 < 15; l211 = l211 + 1) {
			fVec135[l211] = 0.0f;
		}
		for (int l212 = 0; l212 < 32; l212 = l212 + 1) {
			fVec136[l212] = 0.0f;
		}
		for (int l213 = 0; l213 < 64; l213 = l213 + 1) {
			fVec137[l213] = 0.0f;
		}
		for (int l214 = 0; l214 < 128; l214 = l214 + 1) {
			fVec138[l214] = 0.0f;
		}
		for (int l215 = 0; l215 < 256; l215 = l215 + 1) {
			fVec139[l215] = 0.0f;
		}
		for (int l216 = 0; l216 < 512; l216 = l216 + 1) {
			fVec140[l216] = 0.0f;
		}
		for (int l217 = 0; l217 < 1024; l217 = l217 + 1) {
			fVec141[l217] = 0.0f;
		}
		for (int l218 = 0; l218 < 2048; l218 = l218 + 1) {
			fVec142[l218] = 0.0f;
		}
		for (int l219 = 0; l219 < 4096; l219 = l219 + 1) {
			fVec143[l219] = 0.0f;
		}
		for (int l220 = 0; l220 < 8192; l220 = l220 + 1) {
			fVec144[l220] = 0.0f;
		}
		for (int l221 = 0; l221 < 16384; l221 = l221 + 1) {
			fVec145[l221] = 0.0f;
		}
		for (int l222 = 0; l222 < 32768; l222 = l222 + 1) {
			fVec146[l222] = 0.0f;
		}
		for (int l223 = 0; l223 < 65536; l223 = l223 + 1) {
			fVec147[l223] = 0.0f;
		}
		for (int l224 = 0; l224 < 131072; l224 = l224 + 1) {
			fVec148[l224] = 0.0f;
		}
		for (int l225 = 0; l225 < 262144; l225 = l225 + 1) {
			fVec149[l225] = 0.0f;
		}
		for (int l226 = 0; l226 < 524288; l226 = l226 + 1) {
			fVec150[l226] = 0.0f;
		}
		for (int l227 = 0; l227 < 1048576; l227 = l227 + 1) {
			fVec151[l227] = 0.0f;
		}
		for (int l228 = 0; l228 < 2; l228 = l228 + 1) {
			fRec72[l228] = 0.0f;
		}
	}
	
	FAUSTPP_VIRTUAL void init(int sample_rate) {
		classInit(sample_rate);
		instanceInit(sample_rate);
	}
	FAUSTPP_VIRTUAL void instanceInit(int sample_rate) {
		instanceConstants(sample_rate);
		instanceResetUserInterface();
		instanceClear();
	}
	
	FAUSTPP_VIRTUAL mydsp* clone() {
		return new mydsp();
	}
	
	FAUSTPP_VIRTUAL int getSampleRate() {
		return fSampleRate;
	}
	
	FAUSTPP_VIRTUAL void buildUserInterface(UI* ui_interface) {
		ui_interface->openVerticalBox("master_me");
		ui_interface->openVerticalBox("Podcast Plugins");
		ui_interface->declare(0, "2", "");
		ui_interface->openHorizontalBox("Leveler, MBcomp, Limiter");
		ui_interface->declare(0, "6", "");
		ui_interface->openHorizontalBox("PostStage");
		ui_interface->declare(&fVbargraph8, "0", "");
		ui_interface->declare(&fVbargraph8, "symbol", "limiter_gain");
		ui_interface->addVerticalBargraph("LimiterGR", &fVbargraph8, FAUSTFLOAT(-6e+01f), FAUSTFLOAT(0.0f));
		ui_interface->closeBox();
		ui_interface->closeBox();
		ui_interface->closeBox();
		ui_interface->declare(&fCheckbox0, "symbol", "global_bypass");
		ui_interface->addCheckButton("global bypass", &fCheckbox0);
		ui_interface->declare(&fVbargraph9, "symbol", "latency_global");
		ui_interface->addVerticalBargraph("latency", &fVbargraph9, FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->openVerticalBox("master_me");
		ui_interface->openHorizontalBox("easy");
		ui_interface->declare(&fVbargraph0, "0", "");
		ui_interface->declare(&fVbargraph0, "symbol", "peakmeter_in_l");
		ui_interface->declare(&fVbargraph0, "unit", "dB");
		ui_interface->addVerticalBargraph("in L", &fVbargraph0, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph1, "1", "");
		ui_interface->declare(&fVbargraph1, "symbol", "peakmeter_in_r");
		ui_interface->declare(&fVbargraph1, "unit", "dB");
		ui_interface->addVerticalBargraph("in R", &fVbargraph1, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph2, "2", "");
		ui_interface->declare(&fVbargraph2, "symbol", "lufs_in");
		ui_interface->declare(&fVbargraph2, "unit", "dB");
		ui_interface->addVerticalBargraph("in lufs-s", &fVbargraph2, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVslider10, "3", "");
		ui_interface->declare(&fVslider10, "integer", "");
		ui_interface->declare(&fVslider10, "symbol", "target");
		ui_interface->declare(&fVslider10, "unit", "dB");
		ui_interface->addVerticalSlider("Target", &fVslider10, FAUSTFLOAT(-18.0f), FAUSTFLOAT(-5e+01f), FAUSTFLOAT(-2.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVbargraph4, "4", "");
		ui_interface->declare(&fVbargraph4, "symbol", "leveler_gain");
		ui_interface->declare(&fVbargraph4, "unit", "dB");
		ui_interface->addVerticalBargraph("leveler gain", &fVbargraph4, FAUSTFLOAT(-5e+01f), FAUSTFLOAT(5e+01f));
		ui_interface->declare(&fVbargraph11, "7", "");
		ui_interface->declare(&fVbargraph11, "symbol", "lufs_out");
		ui_interface->declare(&fVbargraph11, "unit", "dB");
		ui_interface->addVerticalBargraph("out lufs-s", &fVbargraph11, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph10, "8", "");
		ui_interface->declare(&fVbargraph10, "symbol", "peakmeter_out_l");
		ui_interface->declare(&fVbargraph10, "unit", "dB");
		ui_interface->addVerticalBargraph("out L", &fVbargraph10, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph12, "9", "");
		ui_interface->declare(&fVbargraph12, "symbol", "peakmeter_out_r");
		ui_interface->declare(&fVbargraph12, "unit", "dB");
		ui_interface->addVerticalBargraph("out R", &fVbargraph12, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->closeBox();
		ui_interface->openTabBox("expert");
		ui_interface->declare(0, "1", "");
		ui_interface->openHorizontalBox("pre-processing");
		ui_interface->declare(&fVslider1, "1", "");
		ui_interface->declare(&fVslider1, "symbol", "in_gain");
		ui_interface->declare(&fVslider1, "unit", "dB");
		ui_interface->addVerticalSlider("input gain", &fVslider1, FAUSTFLOAT(0.0f), FAUSTFLOAT(-1e+02f), FAUSTFLOAT(24.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fCheckbox3, "5", "");
		ui_interface->declare(&fCheckbox3, "symbol", "dc_blocker");
		ui_interface->addCheckButton("dc blocker", &fCheckbox3);
		ui_interface->closeBox();
		ui_interface->declare(0, "3", "");
		ui_interface->openHorizontalBox("eq");
		ui_interface->declare(&fCheckbox2, "1", "");
		ui_interface->declare(&fCheckbox2, "symbol", "eq_bypass");
		ui_interface->addCheckButton("eq bypass", &fCheckbox2);
		ui_interface->declare(0, "1", "");
		ui_interface->openHorizontalBox("highpass");
		ui_interface->declare(&fVslider2, "1", "");
		ui_interface->declare(&fVslider2, "scale", "log");
		ui_interface->declare(&fVslider2, "symbol", "eq_highpass_freq");
		ui_interface->declare(&fVslider2, "unit", "Hz");
		ui_interface->addVerticalSlider("eq highpass freq", &fVslider2, FAUSTFLOAT(5.0f), FAUSTFLOAT(5.0f), FAUSTFLOAT(1e+03f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->declare(0, "2", "");
		ui_interface->openHorizontalBox("tilt eq");
		ui_interface->declare(&fVslider3, "1", "");
		ui_interface->declare(&fVslider3, "symbol", "eq_tilt_gain");
		ui_interface->declare(&fVslider3, "unit", "dB");
		ui_interface->addVerticalSlider("eq tilt gain", &fVslider3, FAUSTFLOAT(0.0f), FAUSTFLOAT(-6.0f), FAUSTFLOAT(6.0f), FAUSTFLOAT(0.5f));
		ui_interface->closeBox();
		ui_interface->declare(0, "3", "");
		ui_interface->openHorizontalBox("side eq");
		ui_interface->declare(&fVslider6, "1", "");
		ui_interface->declare(&fVslider6, "symbol", "eq_side_gain");
		ui_interface->declare(&fVslider6, "unit", "dB");
		ui_interface->addVerticalSlider("eq side gain", &fVslider6, FAUSTFLOAT(0.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(12.0f), FAUSTFLOAT(0.5f));
		ui_interface->declare(&fVslider4, "2", "");
		ui_interface->declare(&fVslider4, "scale", "log");
		ui_interface->declare(&fVslider4, "symbol", "eq_side_freq");
		ui_interface->declare(&fVslider4, "unit", "Hz");
		ui_interface->addVerticalSlider("eq side freq", &fVslider4, FAUSTFLOAT(6e+02f), FAUSTFLOAT(2e+02f), FAUSTFLOAT(5e+03f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider5, "3", "");
		ui_interface->declare(&fVslider5, "symbol", "eq_side_bandwidth");
		ui_interface->addVerticalSlider("eq side bandwidth", &fVslider5, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.5f), FAUSTFLOAT(4.0f), FAUSTFLOAT(0.5f));
		ui_interface->closeBox();
		ui_interface->closeBox();
		ui_interface->declare(0, "3", "");
		ui_interface->openHorizontalBox("leveler");
		ui_interface->declare(&fCheckbox1, "1", "");
		ui_interface->declare(&fCheckbox1, "symbol", "leveler_bypass");
		ui_interface->addCheckButton("leveler bypass", &fCheckbox1);
		ui_interface->declare(&fVslider0, "4", "");
		ui_interface->declare(&fVslider0, "integer", "");
		ui_interface->declare(&fVslider0, "symbol", "leveler_speed");
		ui_interface->declare(&fVslider0, "unit", "%");
		ui_interface->addVerticalSlider("leveler speed", &fVslider0, FAUSTFLOAT(2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider7, "5", "");
		ui_interface->declare(&fVslider7, "symbol", "leveler_brake_threshold");
		ui_interface->declare(&fVslider7, "unit", "dB");
		ui_interface->addVerticalSlider("leveler brake threshold", &fVslider7, FAUSTFLOAT(-14.0f), FAUSTFLOAT(-9e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVbargraph3, "6", "");
		ui_interface->declare(&fVbargraph3, "integer", "");
		ui_interface->declare(&fVbargraph3, "symbol", "leveler_brake");
		ui_interface->declare(&fVbargraph3, "unit", "%");
		ui_interface->addVerticalBargraph("leveler brake", &fVbargraph3, FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f));
		ui_interface->declare(&fVslider9, "7", "");
		ui_interface->declare(&fVslider9, "symbol", "leveler_max_plus");
		ui_interface->declare(&fVslider9, "unit", "dB");
		ui_interface->addVerticalSlider("leveler max +", &fVslider9, FAUSTFLOAT(2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(6e+01f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider8, "8", "");
		ui_interface->declare(&fVslider8, "symbol", "leveler_max_minus");
		ui_interface->declare(&fVslider8, "unit", "dB");
		ui_interface->addVerticalSlider("leveler max -", &fVslider8, FAUSTFLOAT(2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(6e+01f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->declare(0, "5", "");
		ui_interface->openHorizontalBox("kneecomp");
		ui_interface->declare(&fCheckbox4, "0", "");
		ui_interface->declare(&fCheckbox4, "symbol", "kneecomp_bypass");
		ui_interface->addCheckButton("kneecomp bypass", &fCheckbox4);
		ui_interface->declare(&fVslider13, "1", "");
		ui_interface->declare(&fVslider13, "integer", "");
		ui_interface->declare(&fVslider13, "symbol", "kneecomp_strength");
		ui_interface->declare(&fVslider13, "unit", "%");
		ui_interface->addVerticalSlider("kneecomp strength", &fVslider13, FAUSTFLOAT(2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider17, "2", "");
		ui_interface->declare(&fVslider17, "symbol", "kneecomp_threshold");
		ui_interface->declare(&fVslider17, "unit", "dB");
		ui_interface->addVerticalSlider("kneecomp tar-thresh", &fVslider17, FAUSTFLOAT(-6.0f), FAUSTFLOAT(-12.0f), FAUSTFLOAT(6.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider16, "3", "");
		ui_interface->declare(&fVslider16, "symbol", "kneecomp_attack");
		ui_interface->declare(&fVslider16, "unit", "ms");
		ui_interface->addVerticalSlider("kneecomp attack", &fVslider16, FAUSTFLOAT(2e+01f), FAUSTFLOAT(1.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider14, "4", "");
		ui_interface->declare(&fVslider14, "symbol", "kneecomp_release");
		ui_interface->declare(&fVslider14, "unit", "ms");
		ui_interface->addVerticalSlider("kneecomp release", &fVslider14, FAUSTFLOAT(2e+02f), FAUSTFLOAT(1.0f), FAUSTFLOAT(1e+03f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider18, "5", "");
		ui_interface->declare(&fVslider18, "symbol", "kneecomp_knee");
		ui_interface->declare(&fVslider18, "unit", "dB");
		ui_interface->addVerticalSlider("kneecomp knee", &fVslider18, FAUSTFLOAT(6.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(3e+01f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider19, "6", "");
		ui_interface->declare(&fVslider19, "integer", "");
		ui_interface->declare(&fVslider19, "symbol", "kneecomp_link");
		ui_interface->declare(&fVslider19, "unit", "%");
		ui_interface->addVerticalSlider("kneecomp link", &fVslider19, FAUSTFLOAT(6e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider15, "7", "");
		ui_interface->declare(&fVslider15, "integer", "");
		ui_interface->declare(&fVslider15, "symbol", "kneecomp_fffb");
		ui_interface->declare(&fVslider15, "unit", "%");
		ui_interface->addVerticalSlider("kneecomp ff-fb", &fVslider15, FAUSTFLOAT(5e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider12, "8", "");
		ui_interface->declare(&fVslider12, "symbol", "kneecomp_makeup");
		ui_interface->declare(&fVslider12, "unit", "dB");
		ui_interface->addVerticalSlider("kneecomp makeup", &fVslider12, FAUSTFLOAT(0.0f), FAUSTFLOAT(-1e+01f), FAUSTFLOAT(1e+01f), FAUSTFLOAT(0.5f));
		ui_interface->declare(&fVslider11, "9", "");
		ui_interface->declare(&fVslider11, "integer", "");
		ui_interface->declare(&fVslider11, "symbol", "kneecomp_drywet");
		ui_interface->declare(&fVslider11, "unit", "%");
		ui_interface->addVerticalSlider("kneecomp dry/wet", &fVslider11, FAUSTFLOAT(1e+02f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVbargraph5, "symbol", "kneecomp_meter_0");
		ui_interface->declare(&fVbargraph5, "unit", "dB");
		ui_interface->addVerticalBargraph("kneecomp meter 0", &fVbargraph5, FAUSTFLOAT(-6.0f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph6, "symbol", "kneecomp_meter_1");
		ui_interface->declare(&fVbargraph6, "unit", "dB");
		ui_interface->addVerticalBargraph("kneecomp meter 1", &fVbargraph6, FAUSTFLOAT(-6.0f), FAUSTFLOAT(0.0f));
		ui_interface->closeBox();
		ui_interface->declare(0, "7", "");
		ui_interface->openHorizontalBox("limiter");
		ui_interface->declare(&fCheckbox5, "0", "");
		ui_interface->declare(&fCheckbox5, "symbol", "limiter_bypass");
		ui_interface->addCheckButton("limiter bypass", &fCheckbox5);
		ui_interface->declare(&fVslider20, "1", "");
		ui_interface->declare(&fVslider20, "integer", "");
		ui_interface->declare(&fVslider20, "symbol", "limiter_strength");
		ui_interface->declare(&fVslider20, "unit", "%");
		ui_interface->addVerticalSlider("limiter strength", &fVslider20, FAUSTFLOAT(8e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider24, "2", "");
		ui_interface->declare(&fVslider24, "symbol", "limiter_threshold");
		ui_interface->declare(&fVslider24, "unit", "dB");
		ui_interface->addVerticalSlider("limiter tar-thresh", &fVslider24, FAUSTFLOAT(6.0f), FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider23, "3", "");
		ui_interface->declare(&fVslider23, "symbol", "limiter_attack");
		ui_interface->declare(&fVslider23, "unit", "ms");
		ui_interface->addVerticalSlider("limiter attack", &fVslider23, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider22, "4", "");
		ui_interface->declare(&fVslider22, "symbol", "limiter_release");
		ui_interface->declare(&fVslider22, "unit", "ms");
		ui_interface->addVerticalSlider("limiter release", &fVslider22, FAUSTFLOAT(4e+01f), FAUSTFLOAT(1.0f), FAUSTFLOAT(4e+02f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider25, "5", "");
		ui_interface->declare(&fVslider25, "symbol", "limiter_knee");
		ui_interface->declare(&fVslider25, "unit", "dB");
		ui_interface->addVerticalSlider("limiter knee", &fVslider25, FAUSTFLOAT(8.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(12.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider21, "6", "");
		ui_interface->declare(&fVslider21, "integer", "");
		ui_interface->declare(&fVslider21, "symbol", "limiter_fffb");
		ui_interface->declare(&fVslider21, "unit", "%");
		ui_interface->addVerticalSlider("limiter ff-fb", &fVslider21, FAUSTFLOAT(5e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider26, "8", "");
		ui_interface->declare(&fVslider26, "symbol", "limiter_makeup");
		ui_interface->declare(&fVslider26, "unit", "dB");
		ui_interface->addVerticalSlider("limiter makeup", &fVslider26, FAUSTFLOAT(0.0f), FAUSTFLOAT(-1e+01f), FAUSTFLOAT(1e+01f), FAUSTFLOAT(0.5f));
		ui_interface->declare(&fVbargraph7, "9", "");
		ui_interface->declare(&fVbargraph7, "symbol", "limiter_gain_reduction");
		ui_interface->declare(&fVbargraph7, "unit", "dB");
		ui_interface->addVerticalBargraph("limiter gain reduction", &fVbargraph7, FAUSTFLOAT(-12.0f), FAUSTFLOAT(0.0f));
		ui_interface->closeBox();
		ui_interface->closeBox();
		ui_interface->closeBox();
		ui_interface->closeBox();
	}
	
	FAUSTPP_VIRTUAL void compute(int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
		FAUSTFLOAT* input0 = inputs[0];
		FAUSTFLOAT* input1 = inputs[1];
		FAUSTFLOAT* output0 = outputs[0];
		FAUSTFLOAT* output1 = outputs[1];
		float fSlow0 = fConst2 * float(fCheckbox0);
		float fSlow1 = fConst2 * float(fCheckbox1);
		float fSlow2 = 106.103294f / float(fVslider0);
		float fSlow3 = fConst2 * float(fCheckbox2);
		float fSlow4 = fConst2 * std::pow(1e+01f, 0.05f * float(fVslider1));
		float fSlow5 = fConst2 * (1.0f - float(fCheckbox3));
		float fSlow6 = std::tan(fConst16 * float(fVslider2));
		float fSlow7 = 1.0f / fSlow6;
		float fSlow8 = fSlow7 + 1.0f;
		float fSlow9 = 0.0f - 1.0f / (fSlow6 * fSlow8);
		float fSlow10 = 1.0f / fSlow8;
		float fSlow11 = 1.0f - fSlow7;
		float fSlow12 = fConst2 * float(fVslider3);
		float fSlow13 = float(fVslider4);
		float fSlow14 = float(fVslider5);
		float fSlow15 = std::tan(fConst16 * std::min<float>(8e+03f, fSlow13 * (fSlow14 + 1.0f)));
		float fSlow16 = std::tan(fConst16 * std::max<float>(5e+01f, fSlow13 * (1.0f - fSlow14)));
		float fSlow17 = fConst2 * float(fVslider6);
		float fSlow18 = float(fVslider7);
		float fSlow19 = fSlow18 + -6.0f;
		float fSlow20 = fSlow18 + 6.0f;
		float fSlow21 = -1.0f * float(fVslider8);
		float fSlow22 = float(fVslider9);
		float fSlow23 = float(fVslider10);
		float fSlow24 = fConst139 * float(fVslider11);
		float fSlow25 = fConst2 * float(fCheckbox4);
		float fSlow26 = fConst2 * float(fVslider12);
		float fSlow27 = float(fVslider13);
		int iSlow28 = std::max<int>(1, int(fConst140 * float(fVslider14)));
		float fSlow29 = 1.0f / float(iSlow28);
		float fSlow30 = 0.01f * float(fVslider15);
		float fSlow31 = 1.0f - fSlow30;
		int iSlow32 = std::max<int>(0, iSlow28);
		float fSlow33 = 0.001f * float(fVslider16);
		int iSlow34 = std::fabs(fSlow33) < 1.1920929e-07f;
		float fSlow35 = ((iSlow34) ? 0.0f : std::exp(0.0f - fConst104 / ((iSlow34) ? 1.0f : fSlow33)));
		float fSlow36 = float(fVslider17);
		float fSlow37 = fSlow23 + fSlow36;
		float fSlow38 = float(fVslider18);
		float fSlow39 = 0.5f * fSlow38;
		float fSlow40 = fSlow37 - fSlow39;
		float fSlow41 = fSlow23 + fSlow36 + fSlow39;
		float fSlow42 = 0.5f / std::max<float>(1.1920929e-07f, fSlow38);
		float fSlow43 = float(fVslider19);
		float fSlow44 = 0.01f * fSlow27;
		float fSlow45 = 0.01f * float(fVslider21);
		float fSlow46 = 0.01f * float(fVslider20) * (2.0f - fSlow45);
		int iSlow47 = std::max<int>(1, int(fConst140 * float(fVslider22)));
		float fSlow48 = 1.0f / float(iSlow47);
		int iSlow49 = std::max<int>(0, iSlow47);
		float fSlow50 = 0.001f * float(fVslider23);
		int iSlow51 = std::fabs(fSlow50) < 1.1920929e-07f;
		float fSlow52 = ((iSlow51) ? 0.0f : std::exp(0.0f - fConst104 / ((iSlow51) ? 1.0f : fSlow50)));
		float fSlow53 = fSlow23 + float(fVslider24);
		float fSlow54 = float(fVslider25);
		float fSlow55 = 0.5f * fSlow54;
		float fSlow56 = fSlow53 - fSlow55;
		float fSlow57 = fSlow53 + fSlow55;
		float fSlow58 = 0.5f / std::max<float>(1.1920929e-07f, fSlow54);
		float fSlow59 = fConst2 * std::pow(1e+01f, 0.05f * float(fVslider26));
		float fSlow60 = fConst2 * float(fCheckbox5);
		fVbargraph9 = FAUSTFLOAT(0.01f);
		for (int i0 = 0; i0 < count; i0 = i0 + 1) {
			float fTemp0 = float(input0[i0]);
			fRec1[0] = fSlow0 + fConst3 * fRec1[1];
			fRec12[0] = fSlow1 + fConst3 * fRec12[1];
			fRec16[0] = fSlow3 + fConst3 * fRec16[1];
			fRec18[0] = fSlow4 + fConst3 * fRec18[1];
			float fTemp1 = fTemp0 * fRec18[0];
			fRec17[0] = std::max<float>(fRec17[1] - fConst1, std::min<float>(1e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(0.00031622776f, std::fabs(fTemp1))))));
			fVbargraph0 = FAUSTFLOAT(fRec17[0]);
			float fTemp2 = fTemp1;
			fVec0[0] = fTemp2;
			fRec19[0] = fSlow5 + fConst3 * fRec19[1];
			fRec20[0] = fConst8 * (fTemp2 - fVec0[1] + fConst9 * fRec20[1]);
			float fTemp3 = 1.0f - fRec19[0];
			float fTemp4 = fTemp2 * fRec19[0] + fRec20[0] * fTemp3;
			fVec1[0] = fTemp4;
			float fTemp5 = 1.0f - fRec16[0];
			fRec23[0] = fSlow9 * fVec1[1] - fSlow10 * (fSlow11 * fRec23[1] - fSlow7 * fTemp4);
			fRec22[0] = fConst15 * fRec23[1] - fConst13 * (fConst14 * fRec22[1] - fConst11 * fRec23[0]);
			fRec24[0] = 0.0f - fConst13 * (fConst14 * fRec24[1] - (fRec23[0] + fRec23[1]));
			fRec25[0] = fSlow12 + fConst3 * fRec25[1];
			float fTemp6 = 0.05f * fRec25[0];
			float fTemp7 = std::pow(1e+01f, 0.0f - fTemp6);
			float fTemp8 = fRec22[0] + fRec24[0] * fTemp7;
			fVec2[0] = fTemp8;
			fRec21[0] = 0.0f - fConst13 * (fConst14 * fRec21[1] - (fTemp8 + fVec2[1]));
			fRec26[0] = fConst15 * fVec2[1] - fConst13 * (fConst14 * fRec26[1] - fConst11 * fTemp8);
			float fTemp9 = std::pow(1e+01f, fTemp6);
			float fTemp10 = fRec21[0] + fRec26[0] * fTemp9;
			fVec3[0] = 0.0f - fConst28 * (fConst29 * fRec33[1] - fConst31 * fVec0[1]);
			fRec34[0] = fVec3[1] + fConst28 * (fConst32 * fTemp2 - 2.0f * (fConst33 * fRec34[1] - fConst34 * fVec0[1]));
			fRec33[0] = fRec34[0];
			fVec4[0] = 0.50032705f * fRec33[1] - fConst36 * fRec31[1];
			fRec32[0] = fConst24 * fRec33[1] + fConst35 * (fVec4[1] - fConst37 * fRec32[1] + 0.50032705f * fRec33[0]);
			fRec31[0] = fRec32[0];
			float fTemp11 = mydsp_faustpower2_f(fRec31[0]);
			fVec5[0] = fTemp11;
			float fTemp12 = fTemp11 + fVec5[1];
			fVec6[0] = fTemp12;
			float fTemp13 = fTemp12 + fVec6[2];
			fVec7[0] = fTemp13;
			float fTemp14 = fTemp13 + fVec7[4];
			fVec8[0] = fTemp14;
			float fTemp15 = fTemp14 + fVec8[8];
			fVec9[IOTA0 & 31] = fTemp15;
			float fTemp16 = fTemp15 + fVec9[(IOTA0 - 16) & 31];
			fVec10[IOTA0 & 63] = fTemp16;
			float fTemp17 = fTemp16 + fVec10[(IOTA0 - 32) & 63];
			fVec11[IOTA0 & 127] = fTemp17;
			float fTemp18 = fTemp17 + fVec11[(IOTA0 - 64) & 127];
			fVec12[IOTA0 & 255] = fTemp18;
			float fTemp19 = fTemp18 + fVec12[(IOTA0 - 128) & 255];
			fVec13[IOTA0 & 511] = fTemp19;
			float fTemp20 = fTemp19 + fVec13[(IOTA0 - 256) & 511];
			fVec14[IOTA0 & 1023] = fTemp20;
			float fTemp21 = fTemp20 + fVec14[(IOTA0 - 512) & 1023];
			fVec15[IOTA0 & 2047] = fTemp21;
			float fTemp22 = fTemp21 + fVec15[(IOTA0 - 1024) & 2047];
			fVec16[IOTA0 & 4095] = fTemp22;
			float fTemp23 = fTemp22 + fVec16[(IOTA0 - 2048) & 4095];
			fVec17[IOTA0 & 8191] = fTemp23;
			float fTemp24 = fTemp23 + fVec17[(IOTA0 - 4096) & 8191];
			fVec18[IOTA0 & 16383] = fTemp24;
			float fTemp25 = fTemp24 + fVec18[(IOTA0 - 8192) & 16383];
			fVec19[IOTA0 & 32767] = fTemp25;
			float fTemp26 = fTemp25 + fVec19[(IOTA0 - 16384) & 32767];
			fVec20[IOTA0 & 65535] = fTemp26;
			float fTemp27 = fTemp26 + fVec20[(IOTA0 - 32768) & 65535];
			fVec21[IOTA0 & 131071] = fTemp27;
			float fTemp28 = fTemp27 + fVec21[(IOTA0 - 65536) & 131071];
			fVec22[IOTA0 & 262143] = fTemp28;
			float fTemp29 = fTemp28 + fVec22[(IOTA0 - 131072) & 262143];
			fVec23[IOTA0 & 524287] = fTemp29;
			fVec24[IOTA0 & 1048575] = fTemp29 + fVec23[(IOTA0 - 262144) & 524287];
			float fTemp30 = float(input1[i0]);
			float fTemp31 = fTemp30 * fRec18[0];
			fRec39[0] = std::max<float>(fRec39[1] - fConst1, std::min<float>(1e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(0.00031622776f, std::fabs(fTemp31))))));
			fVbargraph1 = FAUSTFLOAT(fRec39[0]);
			float fTemp32 = fTemp31;
			fVec25[0] = fTemp32;
			fVec26[0] = 0.0f - fConst28 * (fConst29 * fRec37[1] - fConst31 * fVec25[1]);
			fRec38[0] = fVec26[1] + fConst28 * (fConst32 * fTemp32 - 2.0f * (fConst33 * fRec38[1] - fConst34 * fVec25[1]));
			fRec37[0] = fRec38[0];
			fVec27[0] = 0.50032705f * fRec37[1] - fConst36 * fRec35[1];
			fRec36[0] = fConst24 * fRec37[1] + fConst35 * (fVec27[1] - fConst37 * fRec36[1] + 0.50032705f * fRec37[0]);
			fRec35[0] = fRec36[0];
			float fTemp33 = mydsp_faustpower2_f(fRec35[0]);
			fVec28[0] = fTemp33;
			float fTemp34 = fTemp33 + fVec28[1];
			fVec29[0] = fTemp34;
			float fTemp35 = fTemp34 + fVec29[2];
			fVec30[0] = fTemp35;
			float fTemp36 = fTemp35 + fVec30[4];
			fVec31[0] = fTemp36;
			float fTemp37 = fTemp36 + fVec31[8];
			fVec32[IOTA0 & 31] = fTemp37;
			float fTemp38 = fTemp37 + fVec32[(IOTA0 - 16) & 31];
			fVec33[IOTA0 & 63] = fTemp38;
			float fTemp39 = fTemp38 + fVec33[(IOTA0 - 32) & 63];
			fVec34[IOTA0 & 127] = fTemp39;
			float fTemp40 = fTemp39 + fVec34[(IOTA0 - 64) & 127];
			fVec35[IOTA0 & 255] = fTemp40;
			float fTemp41 = fTemp40 + fVec35[(IOTA0 - 128) & 255];
			fVec36[IOTA0 & 511] = fTemp41;
			float fTemp42 = fTemp41 + fVec36[(IOTA0 - 256) & 511];
			fVec37[IOTA0 & 1023] = fTemp42;
			float fTemp43 = fTemp42 + fVec37[(IOTA0 - 512) & 1023];
			fVec38[IOTA0 & 2047] = fTemp43;
			float fTemp44 = fTemp43 + fVec38[(IOTA0 - 1024) & 2047];
			fVec39[IOTA0 & 4095] = fTemp44;
			float fTemp45 = fTemp44 + fVec39[(IOTA0 - 2048) & 4095];
			fVec40[IOTA0 & 8191] = fTemp45;
			float fTemp46 = fTemp45 + fVec40[(IOTA0 - 4096) & 8191];
			fVec41[IOTA0 & 16383] = fTemp46;
			float fTemp47 = fTemp46 + fVec41[(IOTA0 - 8192) & 16383];
			fVec42[IOTA0 & 32767] = fTemp47;
			float fTemp48 = fTemp47 + fVec42[(IOTA0 - 16384) & 32767];
			fVec43[IOTA0 & 65535] = fTemp48;
			float fTemp49 = fVec43[(IOTA0 - 32768) & 65535];
			float fTemp50 = fTemp48 + fTemp49;
			fVec44[IOTA0 & 131071] = fTemp50;
			float fTemp51 = fVec44[(IOTA0 - 65536) & 131071];
			float fTemp52 = fTemp50 + fTemp51;
			fVec45[IOTA0 & 262143] = fTemp52;
			float fTemp53 = fTemp51 + fTemp49 + fTemp48 + fVec45[(IOTA0 - 131072) & 262143];
			fVec46[IOTA0 & 524287] = fTemp53;
			fVec47[IOTA0 & 1048575] = fTemp53 + fVec46[(IOTA0 - 262144) & 524287];
			fVbargraph2 = FAUSTFLOAT(4.3429446f * std::log(std::max<float>(1e-12f, fConst18 * (((iConst19) ? fVec24[(IOTA0 - iConst74) & 1048575] : 0.0f) + ((iConst73) ? fVec23[(IOTA0 - iConst72) & 524287] : 0.0f) + ((iConst71) ? fVec22[(IOTA0 - iConst70) & 262143] : 0.0f) + ((iConst69) ? fVec21[(IOTA0 - iConst68) & 131071] : 0.0f) + ((iConst67) ? fVec20[(IOTA0 - iConst66) & 65535] : 0.0f) + ((iConst65) ? fVec19[(IOTA0 - iConst64) & 32767] : 0.0f) + ((iConst63) ? fVec18[(IOTA0 - iConst62) & 16383] : 0.0f) + ((iConst61) ? fVec17[(IOTA0 - iConst60) & 8191] : 0.0f) + ((iConst59) ? fVec16[(IOTA0 - iConst58) & 4095] : 0.0f) + ((iConst57) ? fVec15[(IOTA0 - iConst56) & 2047] : 0.0f) + ((iConst55) ? fVec14[(IOTA0 - iConst54) & 1023] : 0.0f) + ((iConst53) ? fVec13[(IOTA0 - iConst52) & 511] : 0.0f) + ((iConst51) ? fVec12[(IOTA0 - iConst50) & 255] : 0.0f) + ((iConst49) ? fVec11[(IOTA0 - iConst48) & 127] : 0.0f) + ((iConst47) ? fVec10[(IOTA0 - iConst46) & 63] : 0.0f) + ((iConst45) ? fVec9[(IOTA0 - iConst44) & 31] : 0.0f) + ((iConst43) ? fVec8[iConst42] : 0.0f) + ((iConst41) ? fVec7[iConst40] : 0.0f) + ((iConst38) ? fTemp11 : 0.0f) + ((iConst39) ? fVec6[iConst38] : 0.0f) + ((iConst19) ? fVec47[(IOTA0 - iConst74) & 1048575] : 0.0f) + ((iConst73) ? fVec46[(IOTA0 - iConst72) & 524287] : 0.0f) + ((iConst69) ? fVec44[(IOTA0 - iConst68) & 131071] : 0.0f) + ((iConst67) ? fVec43[(IOTA0 - iConst66) & 65535] : 0.0f) + ((iConst65) ? fVec42[(IOTA0 - iConst64) & 32767] : 0.0f) + ((iConst63) ? fVec41[(IOTA0 - iConst62) & 16383] : 0.0f) + ((iConst61) ? fVec40[(IOTA0 - iConst60) & 8191] : 0.0f) + ((iConst59) ? fVec39[(IOTA0 - iConst58) & 4095] : 0.0f) + ((iConst57) ? fVec38[(IOTA0 - iConst56) & 2047] : 0.0f) + ((iConst55) ? fVec37[(IOTA0 - iConst54) & 1023] : 0.0f) + ((iConst53) ? fVec36[(IOTA0 - iConst52) & 511] : 0.0f) + ((iConst51) ? fVec35[(IOTA0 - iConst50) & 255] : 0.0f) + ((iConst71) ? fVec45[(IOTA0 - iConst70) & 262143] : 0.0f) + ((iConst49) ? fVec34[(IOTA0 - iConst48) & 127] : 0.0f) + ((iConst47) ? fVec33[(IOTA0 - iConst46) & 63] : 0.0f) + ((iConst45) ? fVec32[(IOTA0 - iConst44) & 31] : 0.0f) + ((iConst43) ? fVec31[iConst42] : 0.0f) + ((iConst41) ? fVec30[iConst40] : 0.0f) + ((iConst38) ? fTemp33 : 0.0f) + ((iConst39) ? fVec29[iConst38] : 0.0f)))) + -0.691f);
			float fTemp54 = fTemp32;
			fVec48[0] = fTemp54;
			fRec30[0] = fConst8 * (fTemp54 - fVec48[1] + fConst9 * fRec30[1]);
			float fTemp55 = fRec30[0] * fTemp3 + fRec19[0] * fTemp54;
			fVec49[0] = fTemp55;
			fRec29[0] = fSlow9 * fVec49[1] - fSlow10 * (fSlow11 * fRec29[1] - fSlow7 * fTemp55);
			fRec28[0] = fConst15 * fRec29[1] - fConst13 * (fConst14 * fRec28[1] - fConst11 * fRec29[0]);
			fRec40[0] = 0.0f - fConst13 * (fConst14 * fRec40[1] - (fRec29[0] + fRec29[1]));
			float fTemp56 = fRec28[0] + fRec40[0] * fTemp7;
			fVec50[0] = fTemp56;
			fRec27[0] = 0.0f - fConst13 * (fConst14 * fRec27[1] - (fTemp56 + fVec50[1]));
			fRec41[0] = fConst15 * fVec50[1] - fConst13 * (fConst14 * fRec41[1] - fConst11 * fTemp56);
			float fTemp57 = fRec27[0] + fRec41[0] * fTemp9;
			float fTemp58 = fTemp10 + fTemp57;
			float fTemp59 = fTemp10 - fTemp57;
			float fTemp60 = 0.5f * fTemp59;
			fRec50[0] = fSlow17 + fConst3 * fRec50[1];
			float fTemp61 = 0.025f * fRec50[0];
			float fTemp62 = std::pow(1e+01f, 0.0f - fTemp61);
			float fTemp63 = std::sqrt(fTemp62);
			float fTemp64 = fRec46[1] + fSlow16 * ((fTemp60 - fRec47[1]) / fTemp63);
			float fTemp65 = fSlow16 * ((fSlow16 / fTemp63 + 1.4285715f) / fTemp63) + 1.0f;
			float fTemp66 = fTemp64 / fTemp65;
			fRec46[0] = 2.0f * fTemp66 - fRec46[1];
			float fTemp67 = fRec47[1] + fSlow16 * (fTemp64 / (fTemp63 * fTemp65));
			fRec47[0] = 2.0f * fTemp67 - fRec47[1];
			float fRec48 = fTemp66;
			float fRec49 = fTemp67;
			float fTemp68 = fRec48 * (fTemp62 + -1.0f);
			float fTemp69 = fRec49 * (mydsp_faustpower2_f(fTemp62) + -1.0f);
			float fTemp70 = fTemp60 + 1.4285715f * fTemp68 + fTemp69;
			float fTemp71 = std::pow(1e+01f, fTemp61);
			float fTemp72 = std::sqrt(fTemp71);
			float fTemp73 = fRec42[1] + fSlow15 * ((fTemp70 - fRec43[1]) / fTemp72);
			float fTemp74 = fSlow15 * ((fSlow15 / fTemp72 + 1.4285715f) / fTemp72) + 1.0f;
			float fTemp75 = fTemp73 / fTemp74;
			fRec42[0] = 2.0f * fTemp75 - fRec42[1];
			float fTemp76 = fRec43[1] + fSlow15 * (fTemp73 / (fTemp72 * fTemp74));
			fRec43[0] = 2.0f * fTemp76 - fRec43[1];
			float fRec44 = fTemp75;
			float fRec45 = fTemp76;
			float fTemp77 = fRec45 * (mydsp_faustpower2_f(fTemp71) + -1.0f) + fTemp69 + 1.4285715f * (fTemp68 + fRec44 * (fTemp71 + -1.0f));
			float fTemp78 = fRec16[0] * fTemp4 + fTemp5 * (0.5f * (fTemp58 + fTemp59) + fTemp77);
			float fTemp79 = fRec16[0] * fTemp55 + fTemp5 * (0.5f * (fTemp58 - fTemp59) - fTemp77);
			float fTemp80 = std::fabs(std::fabs(fTemp78) + std::fabs(fTemp79));
			fVec51[0] = fTemp80;
			float fTemp81 = std::max<float>(fTemp80, fVec51[1]);
			fVec52[0] = fTemp81;
			float fTemp82 = std::max<float>(fTemp81, fVec52[2]);
			fVec53[0] = fTemp82;
			float fTemp83 = std::max<float>(fTemp82, fVec53[4]);
			fVec54[0] = fTemp83;
			float fTemp84 = std::max<float>(fTemp83, fVec54[8]);
			fVec55[IOTA0 & 31] = fTemp84;
			float fTemp85 = std::max<float>(fTemp84, fVec55[(IOTA0 - 16) & 31]);
			fVec56[IOTA0 & 63] = fTemp85;
			float fTemp86 = std::max<float>(fTemp85, fVec56[(IOTA0 - 32) & 63]);
			fVec57[IOTA0 & 127] = fTemp86;
			float fTemp87 = std::max<float>(fTemp86, fVec57[(IOTA0 - 64) & 127]);
			fVec58[IOTA0 & 255] = fTemp87;
			float fTemp88 = std::max<float>(fTemp87, fVec58[(IOTA0 - 128) & 255]);
			fVec59[IOTA0 & 511] = fTemp88;
			float fTemp89 = std::max<float>(fTemp88, fVec59[(IOTA0 - 256) & 511]);
			fVec60[IOTA0 & 1023] = fTemp89;
			float fTemp90 = std::max<float>(fTemp89, fVec60[(IOTA0 - 512) & 1023]);
			fVec61[IOTA0 & 2047] = fTemp90;
			float fTemp91 = std::max<float>(fTemp90, fVec61[(IOTA0 - 1024) & 2047]);
			fVec62[IOTA0 & 4095] = fTemp91;
			float fTemp92 = std::max<float>(fTemp91, fVec62[(IOTA0 - 2048) & 4095]);
			fVec63[IOTA0 & 8191] = fTemp92;
			float fTemp93 = std::max<float>(fTemp92, fVec63[(IOTA0 - 4096) & 8191]);
			fVec64[IOTA0 & 16383] = fTemp93;
			fVec65[IOTA0 & 32767] = std::max<float>(fTemp93, fVec64[(IOTA0 - 8192) & 16383]);
			float fTemp94 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst6) ? fTemp80 : -3.4028235e+38f), ((iConst75) ? fVec52[iConst6] : -3.4028235e+38f)), ((iConst76) ? fVec53[iConst77] : -3.4028235e+38f)), ((iConst78) ? fVec54[iConst79] : -3.4028235e+38f)), ((iConst80) ? fVec55[(IOTA0 - iConst81) & 31] : -3.4028235e+38f)), ((iConst82) ? fVec56[(IOTA0 - iConst83) & 63] : -3.4028235e+38f)), ((iConst84) ? fVec57[(IOTA0 - iConst85) & 127] : -3.4028235e+38f)), ((iConst86) ? fVec58[(IOTA0 - iConst87) & 255] : -3.4028235e+38f)), ((iConst88) ? fVec59[(IOTA0 - iConst89) & 511] : -3.4028235e+38f)), ((iConst90) ? fVec60[(IOTA0 - iConst91) & 1023] : -3.4028235e+38f)), ((iConst92) ? fVec61[(IOTA0 - iConst93) & 2047] : -3.4028235e+38f)), ((iConst94) ? fVec62[(IOTA0 - iConst95) & 4095] : -3.4028235e+38f)), ((iConst96) ? fVec63[(IOTA0 - iConst97) & 8191] : -3.4028235e+38f)), ((iConst98) ? fVec64[(IOTA0 - iConst99) & 16383] : -3.4028235e+38f)), ((iConst100) ? fVec65[(IOTA0 - iConst101) & 32767] : -3.4028235e+38f))));
			int iTemp95 = (fTemp94 > fSlow19) + (fTemp94 > fSlow20);
			float fTemp96 = std::max<float>(-1.2e+02f, 2.0f * ((iTemp95 == 0) ? fTemp94 - fSlow18 : ((iTemp95 == 1) ? 0.0f - 0.041666668f * mydsp_faustpower2_f(fTemp94 + -6.0f - fSlow18) : 0.0f)));
			float fTemp97 = ((fTemp96 > fRec15[1]) ? fConst103 : fConst102);
			fRec15[0] = fTemp96 * (1.0f - fTemp97) + fRec15[1] * fTemp97;
			float fTemp98 = std::min<float>(1.0f, std::max<float>(0.0f, std::pow(1e+01f, 0.05f * fRec15[0])));
			fVbargraph3 = FAUSTFLOAT(1e+02f * (1.0f - fTemp98));
			float fTemp99 = fSlow2 / fTemp98;
			int iTemp100 = std::fabs(fTemp99) < 1.1920929e-07f;
			float fTemp101 = ((iTemp100) ? 0.0f : std::exp(0.0f - fConst104 / ((iTemp100) ? 1.0f : fTemp99)));
			fVec66[0] = 0.0f - fConst28 * (fConst29 * fRec53[1] - fConst31 * fRec2[2]);
			fRec54[0] = fVec66[1] + fConst28 * (fConst32 * fRec2[1] - 2.0f * (fConst33 * fRec54[1] - fConst34 * fRec2[2]));
			fRec53[0] = fRec54[0];
			fVec67[0] = 0.50032705f * fRec53[1] - fConst36 * fRec51[1];
			fRec52[0] = fConst24 * fRec53[1] + fConst35 * (fVec67[1] - fConst37 * fRec52[1] + 0.50032705f * fRec53[0]);
			fRec51[0] = fRec52[0];
			float fTemp102 = mydsp_faustpower2_f(fRec51[0]);
			fVec68[0] = fTemp102;
			float fTemp103 = fTemp102 + fVec68[1];
			fVec69[0] = fTemp103;
			float fTemp104 = fTemp103 + fVec69[2];
			fVec70[0] = fTemp104;
			float fTemp105 = fTemp104 + fVec70[4];
			fVec71[0] = fTemp105;
			float fTemp106 = fTemp105 + fVec71[8];
			fVec72[IOTA0 & 31] = fTemp106;
			float fTemp107 = fTemp106 + fVec72[(IOTA0 - 16) & 31];
			fVec73[IOTA0 & 63] = fTemp107;
			float fTemp108 = fTemp107 + fVec73[(IOTA0 - 32) & 63];
			fVec74[IOTA0 & 127] = fTemp108;
			float fTemp109 = fTemp108 + fVec74[(IOTA0 - 64) & 127];
			fVec75[IOTA0 & 255] = fTemp109;
			float fTemp110 = fTemp109 + fVec75[(IOTA0 - 128) & 255];
			fVec76[IOTA0 & 511] = fTemp110;
			float fTemp111 = fTemp110 + fVec76[(IOTA0 - 256) & 511];
			fVec77[IOTA0 & 1023] = fTemp111;
			float fTemp112 = fTemp111 + fVec77[(IOTA0 - 512) & 1023];
			fVec78[IOTA0 & 2047] = fTemp112;
			float fTemp113 = fTemp112 + fVec78[(IOTA0 - 1024) & 2047];
			fVec79[IOTA0 & 4095] = fTemp113;
			float fTemp114 = fTemp113 + fVec79[(IOTA0 - 2048) & 4095];
			fVec80[IOTA0 & 8191] = fTemp114;
			float fTemp115 = fTemp114 + fVec80[(IOTA0 - 4096) & 8191];
			fVec81[IOTA0 & 16383] = fTemp115;
			float fTemp116 = fTemp115 + fVec81[(IOTA0 - 8192) & 16383];
			fVec82[IOTA0 & 32767] = fTemp116;
			float fTemp117 = fTemp116 + fVec82[(IOTA0 - 16384) & 32767];
			fVec83[IOTA0 & 65535] = fTemp117;
			fVec84[IOTA0 & 131071] = fTemp117 + fVec83[(IOTA0 - 32768) & 65535];
			fVec85[0] = 0.0f - fConst28 * (fConst29 * fRec57[1] - fConst31 * fRec3[2]);
			fRec58[0] = fVec85[1] + fConst28 * (fConst32 * fRec3[1] - 2.0f * (fConst33 * fRec58[1] - fConst34 * fRec3[2]));
			fRec57[0] = fRec58[0];
			fVec86[0] = 0.50032705f * fRec57[1] - fConst36 * fRec55[1];
			fRec56[0] = fConst24 * fRec57[1] + fConst35 * (fVec86[1] - fConst37 * fRec56[1] + 0.50032705f * fRec57[0]);
			fRec55[0] = fRec56[0];
			float fTemp118 = mydsp_faustpower2_f(fRec55[0]);
			fVec87[0] = fTemp118;
			float fTemp119 = fTemp118 + fVec87[1];
			fVec88[0] = fTemp119;
			float fTemp120 = fTemp119 + fVec88[2];
			fVec89[0] = fTemp120;
			float fTemp121 = fTemp120 + fVec89[4];
			fVec90[0] = fTemp121;
			float fTemp122 = fTemp121 + fVec90[8];
			fVec91[IOTA0 & 31] = fTemp122;
			float fTemp123 = fTemp122 + fVec91[(IOTA0 - 16) & 31];
			fVec92[IOTA0 & 63] = fTemp123;
			float fTemp124 = fTemp123 + fVec92[(IOTA0 - 32) & 63];
			fVec93[IOTA0 & 127] = fTemp124;
			float fTemp125 = fTemp124 + fVec93[(IOTA0 - 64) & 127];
			fVec94[IOTA0 & 255] = fTemp125;
			float fTemp126 = fTemp125 + fVec94[(IOTA0 - 128) & 255];
			fVec95[IOTA0 & 511] = fTemp126;
			float fTemp127 = fTemp126 + fVec95[(IOTA0 - 256) & 511];
			fVec96[IOTA0 & 1023] = fTemp127;
			float fTemp128 = fTemp127 + fVec96[(IOTA0 - 512) & 1023];
			fVec97[IOTA0 & 2047] = fTemp128;
			float fTemp129 = fVec97[(IOTA0 - 1024) & 2047];
			float fTemp130 = fTemp128 + fTemp129;
			fVec98[IOTA0 & 4095] = fTemp130;
			float fTemp131 = fVec98[(IOTA0 - 2048) & 4095];
			float fTemp132 = fTemp130 + fTemp131;
			fVec99[IOTA0 & 8191] = fTemp132;
			float fTemp133 = fTemp131 + fTemp129 + fTemp128 + fVec99[(IOTA0 - 4096) & 8191];
			fVec100[IOTA0 & 16383] = fTemp133;
			float fTemp134 = fTemp133 + fVec100[(IOTA0 - 8192) & 16383];
			fVec101[IOTA0 & 32767] = fTemp134;
			float fTemp135 = fTemp134 + fVec101[(IOTA0 - 16384) & 32767];
			fVec102[IOTA0 & 65535] = fTemp135;
			fVec103[IOTA0 & 131071] = fTemp135 + fVec102[(IOTA0 - 32768) & 65535];
			fRec14[0] = (1.0f - fTemp101) * std::max<float>(fSlow21, std::min<float>(fSlow22, fSlow23 + fRec13[1] + (0.691f - 4.3429446f * std::log(std::max<float>(1e-12f, fConst106 * (((iConst107) ? fVec84[(IOTA0 - iConst138) & 131071] : 0.0f) + ((iConst137) ? fVec83[(IOTA0 - iConst136) & 65535] : 0.0f) + ((iConst135) ? fVec82[(IOTA0 - iConst134) & 32767] : 0.0f) + ((iConst133) ? fVec81[(IOTA0 - iConst132) & 16383] : 0.0f) + ((iConst131) ? fVec80[(IOTA0 - iConst130) & 8191] : 0.0f) + ((iConst129) ? fVec79[(IOTA0 - iConst128) & 4095] : 0.0f) + ((iConst127) ? fVec78[(IOTA0 - iConst126) & 2047] : 0.0f) + ((iConst125) ? fVec77[(IOTA0 - iConst124) & 1023] : 0.0f) + ((iConst123) ? fVec76[(IOTA0 - iConst122) & 511] : 0.0f) + ((iConst121) ? fVec75[(IOTA0 - iConst120) & 255] : 0.0f) + ((iConst119) ? fVec74[(IOTA0 - iConst118) & 127] : 0.0f) + ((iConst117) ? fVec73[(IOTA0 - iConst116) & 63] : 0.0f) + ((iConst115) ? fVec72[(IOTA0 - iConst114) & 31] : 0.0f) + ((iConst113) ? fVec71[iConst112] : 0.0f) + ((iConst111) ? fVec70[iConst110] : 0.0f) + ((iConst108) ? fTemp102 : 0.0f) + ((iConst109) ? fVec69[iConst108] : 0.0f) + ((iConst107) ? fVec103[(IOTA0 - iConst138) & 131071] : 0.0f) + ((iConst137) ? fVec102[(IOTA0 - iConst136) & 65535] : 0.0f) + ((iConst135) ? fVec101[(IOTA0 - iConst134) & 32767] : 0.0f) + ((iConst133) ? fVec100[(IOTA0 - iConst132) & 16383] : 0.0f) + ((iConst129) ? fVec98[(IOTA0 - iConst128) & 4095] : 0.0f) + ((iConst127) ? fVec97[(IOTA0 - iConst126) & 2047] : 0.0f) + ((iConst125) ? fVec96[(IOTA0 - iConst124) & 1023] : 0.0f) + ((iConst123) ? fVec95[(IOTA0 - iConst122) & 511] : 0.0f) + ((iConst121) ? fVec94[(IOTA0 - iConst120) & 255] : 0.0f) + ((iConst131) ? fVec99[(IOTA0 - iConst130) & 8191] : 0.0f) + ((iConst119) ? fVec93[(IOTA0 - iConst118) & 127] : 0.0f) + ((iConst117) ? fVec92[(IOTA0 - iConst116) & 63] : 0.0f) + ((iConst115) ? fVec91[(IOTA0 - iConst114) & 31] : 0.0f) + ((iConst113) ? fVec90[iConst112] : 0.0f) + ((iConst111) ? fVec89[iConst110] : 0.0f) + ((iConst108) ? fTemp118 : 0.0f) + ((iConst109) ? fVec88[iConst108] : 0.0f))))))) + fTemp101 * fRec14[1];
			fVbargraph4 = FAUSTFLOAT(fRec14[0]);
			fRec13[0] = fVbargraph4;
			float fTemp136 = fRec12[0] + (1.0f - fRec12[0]) * std::pow(1e+01f, 0.05f * fRec13[0]);
			fRec59[0] = fSlow24 + fConst3 * fRec59[1];
			fRec60[0] = fSlow25 + fConst3 * fRec60[1];
			float fTemp137 = 1.0f - fRec60[0];
			fRec61[0] = fSlow26 + fConst3 * fRec61[1];
			float fTemp138 = fSlow30 * fRec4[1] + fSlow31 * fTemp78 * fTemp136;
			float fTemp139 = fSlow30 * fRec5[1] + fSlow31 * fTemp79 * fTemp136;
			fRec63[IOTA0 & 262143] = fRec63[(IOTA0 - 1) & 262143] + mydsp_faustpower2_f(0.5f * (fTemp138 + fTemp139));
			float fTemp140 = std::sqrt(fSlow29 * (fRec63[IOTA0 & 262143] - fRec63[(IOTA0 - iSlow32) & 262143]));
			float fTemp141 = ((fTemp140 > fRec62[1]) ? fSlow35 : 0.0f);
			fRec62[0] = fTemp140 * (1.0f - fTemp141) + fRec62[1] * fTemp141;
			float fTemp142 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fRec62[0]));
			int iTemp143 = (fTemp142 > fSlow40) + (fTemp142 > fSlow41);
			float fTemp144 = fTemp142 - fSlow37;
			float fTemp145 = std::max<float>(0.0f, ((iTemp143 == 0) ? 0.0f : ((iTemp143 == 1) ? fSlow42 * mydsp_faustpower2_f(fSlow39 + fTemp144) : fTemp144)));
			float fTemp146 = fSlow44 * fTemp145;
			fRec65[IOTA0 & 262143] = fRec65[(IOTA0 - 1) & 262143] + mydsp_faustpower2_f(0.5f * (fTemp138 - fTemp139));
			float fTemp147 = std::sqrt(fSlow29 * (fRec65[IOTA0 & 262143] - fRec65[(IOTA0 - iSlow32) & 262143]));
			float fTemp148 = ((fTemp147 > fRec64[1]) ? fSlow35 : 0.0f);
			fRec64[0] = fTemp147 * (1.0f - fTemp148) + fRec64[1] * fTemp148;
			float fTemp149 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fRec64[0]));
			int iTemp150 = (fTemp149 > fSlow40) + (fTemp149 > fSlow41);
			float fTemp151 = fTemp149 - fSlow37;
			float fTemp152 = std::max<float>(0.0f, ((iTemp150 == 0) ? 0.0f : ((iTemp150 == 1) ? fSlow42 * mydsp_faustpower2_f(fSlow39 + fTemp151) : fTemp151)));
			float fTemp153 = fSlow44 * fTemp152;
			float fTemp154 = std::min<float>(0.0f - fTemp146, 0.0f - fTemp153);
			float fTemp155 = 0.0f - 0.01f * (fSlow27 * fTemp145 - fSlow43 * (fTemp146 + fTemp154));
			fVbargraph5 = FAUSTFLOAT(std::min<float>(0.0f, std::max<float>(-6.0f, fTemp155)));
			float fTemp156 = (fRec60[0] + fTemp137 * std::pow(1e+01f, 0.05f * (fRec61[0] + fTemp155))) * (fTemp78 + fTemp79);
			float fTemp157 = 0.0f - 0.01f * (fSlow27 * fTemp152 - fSlow43 * (fTemp153 + fTemp154));
			fVbargraph6 = FAUSTFLOAT(std::min<float>(0.0f, std::max<float>(-6.0f, fTemp157)));
			float fTemp158 = (fRec60[0] + fTemp137 * std::pow(1e+01f, 0.05f * (fRec61[0] + fTemp157))) * (fTemp78 - fTemp79);
			float fTemp159 = fTemp78 + fRec59[0] * (0.5f * (fTemp156 + fTemp158) - fTemp78);
			float fTemp160 = fTemp136 * fTemp159;
			float fTemp161 = std::fabs(fRec10[1]);
			fRec67[IOTA0 & 131071] = fRec67[(IOTA0 - 1) & 131071] + mydsp_faustpower2_f(fTemp161 + fSlow45 * (std::fabs(fTemp160) - fTemp161));
			float fTemp162 = std::sqrt(fSlow48 * (fRec67[IOTA0 & 131071] - fRec67[(IOTA0 - iSlow49) & 131071]));
			float fTemp163 = ((fTemp162 > fRec66[1]) ? fSlow52 : 0.0f);
			fRec66[0] = fTemp162 * (1.0f - fTemp163) + fRec66[1] * fTemp163;
			float fTemp164 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fRec66[0]));
			int iTemp165 = (fTemp164 > fSlow56) + (fTemp164 > fSlow57);
			float fTemp166 = fTemp164 - fSlow53;
			float fTemp167 = std::fabs(fRec11[1]);
			float fTemp168 = fTemp79 + fRec59[0] * (0.5f * (fTemp156 - fTemp158) - fTemp79);
			float fTemp169 = fTemp136 * fTemp168;
			fRec69[IOTA0 & 131071] = fRec69[(IOTA0 - 1) & 131071] + mydsp_faustpower2_f(fTemp167 + fSlow45 * (std::fabs(fTemp169) - fTemp167));
			float fTemp170 = std::sqrt(fSlow48 * (fRec69[IOTA0 & 131071] - fRec69[(IOTA0 - iSlow49) & 131071]));
			float fTemp171 = ((fTemp170 > fRec68[1]) ? fSlow52 : 0.0f);
			fRec68[0] = fTemp170 * (1.0f - fTemp171) + fRec68[1] * fTemp171;
			float fTemp172 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fRec68[0]));
			int iTemp173 = (fTemp172 > fSlow56) + (fTemp172 > fSlow57);
			float fTemp174 = fTemp172 - fSlow53;
			float fTemp175 = std::min<float>(0.0f - fSlow46 * std::max<float>(0.0f, ((iTemp165 == 0) ? 0.0f : ((iTemp165 == 1) ? fSlow58 * mydsp_faustpower2_f(fSlow55 + fTemp166) : fTemp166))), 0.0f - fSlow46 * std::max<float>(0.0f, ((iTemp173 == 0) ? 0.0f : ((iTemp173 == 1) ? fSlow58 * mydsp_faustpower2_f(fSlow55 + fTemp174) : fTemp174))));
			fVbargraph7 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp175)));
			float fTemp176 = std::pow(1e+01f, 0.05f * fTemp175);
			fRec10[0] = fTemp160 * fTemp176;
			fRec11[0] = fTemp169 * fTemp176;
			fRec70[0] = fSlow59 + fConst3 * fRec70[1];
			fRec71[0] = fSlow60 + fConst3 * fRec71[1];
			float fTemp177 = 1.0f - fRec71[0];
			float fTemp178 = fRec71[0] * fTemp136;
			float fTemp179 = fRec10[0] * fRec70[0] * fTemp177 + fTemp178 * fTemp159;
			fVec104[IOTA0 & 2047] = fTemp179;
			float fTemp180 = fTemp178 * fTemp168 + fRec70[0] * fRec11[0] * fTemp177;
			fVec105[IOTA0 & 2047] = fTemp180;
			float fTemp181 = std::fabs(std::max<float>(std::fabs(fTemp179), std::fabs(fTemp180)));
			int iTemp182 = (fTemp181 >= fRec9[1]) | (float(iRec8[1]) >= fConst141);
			iRec8[0] = ((iTemp182) ? 0 : iRec8[1] + 1);
			fRec9[0] = ((iTemp182) ? fTemp181 : fRec9[1]);
			fRec7[0] = fConst5 * fRec9[0] + fConst4 * fRec7[1];
			float fTemp183 = std::fabs(fRec7[0]);
			fRec6[0] = std::max<float>(fTemp183, fConst142 * fRec6[1] + fConst143 * fTemp183);
			float fTemp184 = std::min<float>(1.0f, 0.8912509f / std::max<float>(fRec6[0], 1.1920929e-07f));
			fVbargraph8 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp184))));
			float fTemp185 = fTemp184;
			fRec4[0] = fTemp185 * fVec104[(IOTA0 - iConst144) & 2047];
			fRec5[0] = fTemp185 * fVec105[(IOTA0 - iConst144) & 2047];
			fRec2[0] = fRec4[0];
			fRec3[0] = fRec5[0];
			float fTemp186 = 1.0f - fRec1[0];
			float fTemp187 = fTemp0 * fRec1[0] + fRec2[0] * fTemp186;
			fVec106[0] = fTemp187;
			fRec0[0] = std::max<float>(fRec0[1] - fConst1, std::min<float>(1e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(0.00031622776f, std::fabs(fTemp187))))));
			fVbargraph10 = FAUSTFLOAT(fRec0[0]);
			output0[i0] = FAUSTFLOAT(fTemp187);
			fVec107[0] = 0.0f - fConst28 * (fConst29 * fRec75[1] - fConst31 * fVec106[1]);
			fRec76[0] = fVec107[1] + fConst28 * (fConst32 * fTemp187 - 2.0f * (fConst33 * fRec76[1] - fConst34 * fVec106[1]));
			fRec75[0] = fRec76[0];
			fVec108[0] = 0.50032705f * fRec75[1] - fConst36 * fRec73[1];
			fRec74[0] = fConst24 * fRec75[1] + fConst35 * (fVec108[1] - fConst37 * fRec74[1] + 0.50032705f * fRec75[0]);
			fRec73[0] = fRec74[0];
			float fTemp188 = mydsp_faustpower2_f(fRec73[0]);
			fVec109[0] = fTemp188;
			float fTemp189 = fTemp188 + fVec109[1];
			fVec110[0] = fTemp189;
			float fTemp190 = fTemp189 + fVec110[2];
			fVec111[0] = fTemp190;
			float fTemp191 = fTemp190 + fVec111[4];
			fVec112[0] = fTemp191;
			float fTemp192 = fTemp191 + fVec112[8];
			fVec113[IOTA0 & 31] = fTemp192;
			float fTemp193 = fTemp192 + fVec113[(IOTA0 - 16) & 31];
			fVec114[IOTA0 & 63] = fTemp193;
			float fTemp194 = fTemp193 + fVec114[(IOTA0 - 32) & 63];
			fVec115[IOTA0 & 127] = fTemp194;
			float fTemp195 = fTemp194 + fVec115[(IOTA0 - 64) & 127];
			fVec116[IOTA0 & 255] = fTemp195;
			float fTemp196 = fTemp195 + fVec116[(IOTA0 - 128) & 255];
			fVec117[IOTA0 & 511] = fTemp196;
			float fTemp197 = fTemp196 + fVec117[(IOTA0 - 256) & 511];
			fVec118[IOTA0 & 1023] = fTemp197;
			float fTemp198 = fTemp197 + fVec118[(IOTA0 - 512) & 1023];
			fVec119[IOTA0 & 2047] = fTemp198;
			float fTemp199 = fTemp198 + fVec119[(IOTA0 - 1024) & 2047];
			fVec120[IOTA0 & 4095] = fTemp199;
			float fTemp200 = fTemp199 + fVec120[(IOTA0 - 2048) & 4095];
			fVec121[IOTA0 & 8191] = fTemp200;
			float fTemp201 = fTemp200 + fVec121[(IOTA0 - 4096) & 8191];
			fVec122[IOTA0 & 16383] = fTemp201;
			float fTemp202 = fTemp201 + fVec122[(IOTA0 - 8192) & 16383];
			fVec123[IOTA0 & 32767] = fTemp202;
			float fTemp203 = fTemp202 + fVec123[(IOTA0 - 16384) & 32767];
			fVec124[IOTA0 & 65535] = fTemp203;
			float fTemp204 = fTemp203 + fVec124[(IOTA0 - 32768) & 65535];
			fVec125[IOTA0 & 131071] = fTemp204;
			float fTemp205 = fTemp204 + fVec125[(IOTA0 - 65536) & 131071];
			fVec126[IOTA0 & 262143] = fTemp205;
			float fTemp206 = fTemp205 + fVec126[(IOTA0 - 131072) & 262143];
			fVec127[IOTA0 & 524287] = fTemp206;
			fVec128[IOTA0 & 1048575] = fTemp206 + fVec127[(IOTA0 - 262144) & 524287];
			float fTemp207 = fTemp30 * fRec1[0] + fRec3[0] * fTemp186;
			fVec129[0] = fTemp207;
			fVec130[0] = 0.0f - fConst28 * (fConst29 * fRec79[1] - fConst31 * fVec129[1]);
			fRec80[0] = fVec130[1] + fConst28 * (fConst32 * fTemp207 - 2.0f * (fConst33 * fRec80[1] - fConst34 * fVec129[1]));
			fRec79[0] = fRec80[0];
			fVec131[0] = 0.50032705f * fRec79[1] - fConst36 * fRec77[1];
			fRec78[0] = fConst24 * fRec79[1] + fConst35 * (fVec131[1] - fConst37 * fRec78[1] + 0.50032705f * fRec79[0]);
			fRec77[0] = fRec78[0];
			float fTemp208 = mydsp_faustpower2_f(fRec77[0]);
			fVec132[0] = fTemp208;
			float fTemp209 = fTemp208 + fVec132[1];
			fVec133[0] = fTemp209;
			float fTemp210 = fTemp209 + fVec133[2];
			fVec134[0] = fTemp210;
			float fTemp211 = fTemp210 + fVec134[4];
			fVec135[0] = fTemp211;
			float fTemp212 = fTemp211 + fVec135[8];
			fVec136[IOTA0 & 31] = fTemp212;
			float fTemp213 = fTemp212 + fVec136[(IOTA0 - 16) & 31];
			fVec137[IOTA0 & 63] = fTemp213;
			float fTemp214 = fTemp213 + fVec137[(IOTA0 - 32) & 63];
			fVec138[IOTA0 & 127] = fTemp214;
			float fTemp215 = fTemp214 + fVec138[(IOTA0 - 64) & 127];
			fVec139[IOTA0 & 255] = fTemp215;
			float fTemp216 = fTemp215 + fVec139[(IOTA0 - 128) & 255];
			fVec140[IOTA0 & 511] = fTemp216;
			float fTemp217 = fTemp216 + fVec140[(IOTA0 - 256) & 511];
			fVec141[IOTA0 & 1023] = fTemp217;
			float fTemp218 = fTemp217 + fVec141[(IOTA0 - 512) & 1023];
			fVec142[IOTA0 & 2047] = fTemp218;
			float fTemp219 = fTemp218 + fVec142[(IOTA0 - 1024) & 2047];
			fVec143[IOTA0 & 4095] = fTemp219;
			float fTemp220 = fTemp219 + fVec143[(IOTA0 - 2048) & 4095];
			fVec144[IOTA0 & 8191] = fTemp220;
			float fTemp221 = fTemp220 + fVec144[(IOTA0 - 4096) & 8191];
			fVec145[IOTA0 & 16383] = fTemp221;
			float fTemp222 = fTemp221 + fVec145[(IOTA0 - 8192) & 16383];
			fVec146[IOTA0 & 32767] = fTemp222;
			float fTemp223 = fTemp222 + fVec146[(IOTA0 - 16384) & 32767];
			fVec147[IOTA0 & 65535] = fTemp223;
			float fTemp224 = fTemp223 + fVec147[(IOTA0 - 32768) & 65535];
			fVec148[IOTA0 & 131071] = fTemp224;
			float fTemp225 = fTemp224 + fVec148[(IOTA0 - 65536) & 131071];
			fVec149[IOTA0 & 262143] = fTemp225;
			float fTemp226 = fTemp225 + fVec149[(IOTA0 - 131072) & 262143];
			fVec150[IOTA0 & 524287] = fTemp226;
			fVec151[IOTA0 & 1048575] = fTemp226 + fVec150[(IOTA0 - 262144) & 524287];
			fVbargraph11 = FAUSTFLOAT(4.3429446f * std::log(std::max<float>(1e-12f, fConst18 * (((iConst19) ? fVec128[(IOTA0 - iConst74) & 1048575] : 0.0f) + ((iConst73) ? fVec127[(IOTA0 - iConst72) & 524287] : 0.0f) + ((iConst71) ? fVec126[(IOTA0 - iConst70) & 262143] : 0.0f) + ((iConst69) ? fVec125[(IOTA0 - iConst68) & 131071] : 0.0f) + ((iConst67) ? fVec124[(IOTA0 - iConst66) & 65535] : 0.0f) + ((iConst65) ? fVec123[(IOTA0 - iConst64) & 32767] : 0.0f) + ((iConst63) ? fVec122[(IOTA0 - iConst62) & 16383] : 0.0f) + ((iConst61) ? fVec121[(IOTA0 - iConst60) & 8191] : 0.0f) + ((iConst59) ? fVec120[(IOTA0 - iConst58) & 4095] : 0.0f) + ((iConst57) ? fVec119[(IOTA0 - iConst56) & 2047] : 0.0f) + ((iConst55) ? fVec118[(IOTA0 - iConst54) & 1023] : 0.0f) + ((iConst53) ? fVec117[(IOTA0 - iConst52) & 511] : 0.0f) + ((iConst51) ? fVec116[(IOTA0 - iConst50) & 255] : 0.0f) + ((iConst49) ? fVec115[(IOTA0 - iConst48) & 127] : 0.0f) + ((iConst47) ? fVec114[(IOTA0 - iConst46) & 63] : 0.0f) + ((iConst45) ? fVec113[(IOTA0 - iConst44) & 31] : 0.0f) + ((iConst43) ? fVec112[iConst42] : 0.0f) + ((iConst41) ? fVec111[iConst40] : 0.0f) + ((iConst38) ? fTemp188 : 0.0f) + ((iConst39) ? fVec110[iConst38] : 0.0f) + ((iConst73) ? fVec150[(IOTA0 - iConst72) & 524287] : 0.0f) + ((iConst71) ? fVec149[(IOTA0 - iConst70) & 262143] : 0.0f) + ((iConst69) ? fVec148[(IOTA0 - iConst68) & 131071] : 0.0f) + ((iConst67) ? fVec147[(IOTA0 - iConst66) & 65535] : 0.0f) + ((iConst65) ? fVec146[(IOTA0 - iConst64) & 32767] : 0.0f) + ((iConst63) ? fVec145[(IOTA0 - iConst62) & 16383] : 0.0f) + ((iConst61) ? fVec144[(IOTA0 - iConst60) & 8191] : 0.0f) + ((iConst59) ? fVec143[(IOTA0 - iConst58) & 4095] : 0.0f) + ((iConst57) ? fVec142[(IOTA0 - iConst56) & 2047] : 0.0f) + ((iConst19) ? fVec151[(IOTA0 - iConst74) & 1048575] : 0.0f) + ((iConst55) ? fVec141[(IOTA0 - iConst54) & 1023] : 0.0f) + ((iConst53) ? fVec140[(IOTA0 - iConst52) & 511] : 0.0f) + ((iConst51) ? fVec139[(IOTA0 - iConst50) & 255] : 0.0f) + ((iConst49) ? fVec138[(IOTA0 - iConst48) & 127] : 0.0f) + ((iConst47) ? fVec137[(IOTA0 - iConst46) & 63] : 0.0f) + ((iConst45) ? fVec136[(IOTA0 - iConst44) & 31] : 0.0f) + ((iConst43) ? fVec135[iConst42] : 0.0f) + ((iConst41) ? fVec134[iConst40] : 0.0f) + ((iConst38) ? fTemp208 : 0.0f) + ((iConst39) ? fVec133[iConst38] : 0.0f)))) + -0.691f);
			float fTemp227 = fTemp207;
			fRec72[0] = std::max<float>(fRec72[1] - fConst1, std::min<float>(1e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(0.00031622776f, std::fabs(fTemp227))))));
			fVbargraph12 = FAUSTFLOAT(fRec72[0]);
			output1[i0] = FAUSTFLOAT(fTemp227);
			fRec1[1] = fRec1[0];
			fRec12[1] = fRec12[0];
			fRec16[1] = fRec16[0];
			fRec18[1] = fRec18[0];
			fRec17[1] = fRec17[0];
			fVec0[1] = fVec0[0];
			fRec19[1] = fRec19[0];
			fRec20[1] = fRec20[0];
			fVec1[1] = fVec1[0];
			fRec23[1] = fRec23[0];
			fRec22[1] = fRec22[0];
			fRec24[1] = fRec24[0];
			fRec25[1] = fRec25[0];
			fVec2[1] = fVec2[0];
			fRec21[1] = fRec21[0];
			fRec26[1] = fRec26[0];
			fVec3[1] = fVec3[0];
			fRec34[1] = fRec34[0];
			fRec33[1] = fRec33[0];
			fVec4[1] = fVec4[0];
			fRec32[1] = fRec32[0];
			fRec31[1] = fRec31[0];
			fVec5[1] = fVec5[0];
			fVec6[2] = fVec6[1];
			fVec6[1] = fVec6[0];
			for (int j0 = 6; j0 > 0; j0 = j0 - 1) {
				fVec7[j0] = fVec7[j0 - 1];
			}
			for (int j1 = 14; j1 > 0; j1 = j1 - 1) {
				fVec8[j1] = fVec8[j1 - 1];
			}
			IOTA0 = IOTA0 + 1;
			fRec39[1] = fRec39[0];
			fVec25[1] = fVec25[0];
			fVec26[1] = fVec26[0];
			fRec38[1] = fRec38[0];
			fRec37[1] = fRec37[0];
			fVec27[1] = fVec27[0];
			fRec36[1] = fRec36[0];
			fRec35[1] = fRec35[0];
			fVec28[1] = fVec28[0];
			fVec29[2] = fVec29[1];
			fVec29[1] = fVec29[0];
			for (int j2 = 6; j2 > 0; j2 = j2 - 1) {
				fVec30[j2] = fVec30[j2 - 1];
			}
			for (int j3 = 14; j3 > 0; j3 = j3 - 1) {
				fVec31[j3] = fVec31[j3 - 1];
			}
			fVec48[1] = fVec48[0];
			fRec30[1] = fRec30[0];
			fVec49[1] = fVec49[0];
			fRec29[1] = fRec29[0];
			fRec28[1] = fRec28[0];
			fRec40[1] = fRec40[0];
			fVec50[1] = fVec50[0];
			fRec27[1] = fRec27[0];
			fRec41[1] = fRec41[0];
			fRec50[1] = fRec50[0];
			fRec46[1] = fRec46[0];
			fRec47[1] = fRec47[0];
			fRec42[1] = fRec42[0];
			fRec43[1] = fRec43[0];
			fVec51[1] = fVec51[0];
			fVec52[2] = fVec52[1];
			fVec52[1] = fVec52[0];
			for (int j4 = 6; j4 > 0; j4 = j4 - 1) {
				fVec53[j4] = fVec53[j4 - 1];
			}
			for (int j5 = 14; j5 > 0; j5 = j5 - 1) {
				fVec54[j5] = fVec54[j5 - 1];
			}
			fRec15[1] = fRec15[0];
			fVec66[1] = fVec66[0];
			fRec54[1] = fRec54[0];
			fRec53[1] = fRec53[0];
			fVec67[1] = fVec67[0];
			fRec52[1] = fRec52[0];
			fRec51[1] = fRec51[0];
			fVec68[1] = fVec68[0];
			fVec69[2] = fVec69[1];
			fVec69[1] = fVec69[0];
			for (int j6 = 6; j6 > 0; j6 = j6 - 1) {
				fVec70[j6] = fVec70[j6 - 1];
			}
			for (int j7 = 14; j7 > 0; j7 = j7 - 1) {
				fVec71[j7] = fVec71[j7 - 1];
			}
			fVec85[1] = fVec85[0];
			fRec58[1] = fRec58[0];
			fRec57[1] = fRec57[0];
			fVec86[1] = fVec86[0];
			fRec56[1] = fRec56[0];
			fRec55[1] = fRec55[0];
			fVec87[1] = fVec87[0];
			fVec88[2] = fVec88[1];
			fVec88[1] = fVec88[0];
			for (int j8 = 6; j8 > 0; j8 = j8 - 1) {
				fVec89[j8] = fVec89[j8 - 1];
			}
			for (int j9 = 14; j9 > 0; j9 = j9 - 1) {
				fVec90[j9] = fVec90[j9 - 1];
			}
			fRec14[1] = fRec14[0];
			fRec13[1] = fRec13[0];
			fRec59[1] = fRec59[0];
			fRec60[1] = fRec60[0];
			fRec61[1] = fRec61[0];
			fRec62[1] = fRec62[0];
			fRec64[1] = fRec64[0];
			fRec66[1] = fRec66[0];
			fRec68[1] = fRec68[0];
			fRec10[1] = fRec10[0];
			fRec11[1] = fRec11[0];
			fRec70[1] = fRec70[0];
			fRec71[1] = fRec71[0];
			iRec8[1] = iRec8[0];
			fRec9[1] = fRec9[0];
			fRec7[1] = fRec7[0];
			fRec6[1] = fRec6[0];
			fRec4[1] = fRec4[0];
			fRec5[1] = fRec5[0];
			fRec2[2] = fRec2[1];
			fRec2[1] = fRec2[0];
			fRec3[2] = fRec3[1];
			fRec3[1] = fRec3[0];
			fVec106[1] = fVec106[0];
			fRec0[1] = fRec0[0];
			fVec107[1] = fVec107[0];
			fRec76[1] = fRec76[0];
			fRec75[1] = fRec75[0];
			fVec108[1] = fVec108[0];
			fRec74[1] = fRec74[0];
			fRec73[1] = fRec73[0];
			fVec109[1] = fVec109[0];
			fVec110[2] = fVec110[1];
			fVec110[1] = fVec110[0];
			for (int j10 = 6; j10 > 0; j10 = j10 - 1) {
				fVec111[j10] = fVec111[j10 - 1];
			}
			for (int j11 = 14; j11 > 0; j11 = j11 - 1) {
				fVec112[j11] = fVec112[j11 - 1];
			}
			fVec129[1] = fVec129[0];
			fVec130[1] = fVec130[0];
			fRec80[1] = fRec80[0];
			fRec79[1] = fRec79[0];
			fVec131[1] = fVec131[0];
			fRec78[1] = fRec78[0];
			fRec77[1] = fRec77[0];
			fVec132[1] = fVec132[0];
			fVec133[2] = fVec133[1];
			fVec133[1] = fVec133[0];
			for (int j12 = 6; j12 > 0; j12 = j12 - 1) {
				fVec134[j12] = fVec134[j12 - 1];
			}
			for (int j13 = 14; j13 > 0; j13 = j13 - 1) {
				fVec135[j13] = fVec135[j13 - 1];
			}
			fRec72[1] = fRec72[0];
		}
	}

};
FAUSTPP_END_NAMESPACE


#if defined(__GNUC__)
#   pragma GCC diagnostic pop
#endif



// --------------------------------------------------------------------------------------------------------------------

START_NAMESPACE_DISTRHO

// --------------------------------------------------------------------------------------------------------------------

class FaustGeneratedPlugin : public Plugin
{
protected:
    ScopedPointer<mydsp> dsp;

public:
    FaustGeneratedPlugin(const uint32_t extraParameters = 0,
                         const uint32_t extraPrograms = 0,
                         const uint32_t extraStates = 0)
        : Plugin(kParameterCount + extraParameters, kProgramCount + extraPrograms, kStateCount + extraStates)
    {
        dsp = new mydsp;
        dsp->init(getSampleRate());

        // passive controls are only updated on first run, make sure they have valid values now
        dsp->fVbargraph8 = 0;
        dsp->fVbargraph9 = 0;
        dsp->fVbargraph0 = 0;
        dsp->fVbargraph1 = 0;
        dsp->fVbargraph2 = 0;
        dsp->fVbargraph4 = 0;
        dsp->fVbargraph11 = 0;
        dsp->fVbargraph10 = 0;
        dsp->fVbargraph12 = 0;
        dsp->fVbargraph3 = 0;
        dsp->fVbargraph5 = 0;
        dsp->fVbargraph6 = 0;
        dsp->fVbargraph7 = 0;
        
    }

    /*
    void printCurrentValues()
    {
        d_stdout("==== preset data start ===");
        printf("%.12g,", dsp->fCheckbox0);
        printf("%.12g,", dsp->fVslider10);
        printf("%.12g,", dsp->fVslider1);
        printf("%.12g,", dsp->fCheckbox3);
        printf("%.12g,", dsp->fCheckbox2);
        printf("%.12g,", dsp->fVslider2);
        printf("%.12g,", dsp->fVslider3);
        printf("%.12g,", dsp->fVslider6);
        printf("%.12g,", dsp->fVslider4);
        printf("%.12g,", dsp->fVslider5);
        printf("%.12g,", dsp->fCheckbox1);
        printf("%.12g,", dsp->fVslider0);
        printf("%.12g,", dsp->fVslider7);
        printf("%.12g,", dsp->fVslider9);
        printf("%.12g,", dsp->fVslider8);
        printf("%.12g,", dsp->fCheckbox4);
        printf("%.12g,", dsp->fVslider13);
        printf("%.12g,", dsp->fVslider17);
        printf("%.12g,", dsp->fVslider16);
        printf("%.12g,", dsp->fVslider14);
        printf("%.12g,", dsp->fVslider18);
        printf("%.12g,", dsp->fVslider19);
        printf("%.12g,", dsp->fVslider15);
        printf("%.12g,", dsp->fVslider12);
        printf("%.12g,", dsp->fVslider11);
        printf("%.12g,", dsp->fCheckbox5);
        printf("%.12g,", dsp->fVslider20);
        printf("%.12g,", dsp->fVslider24);
        printf("%.12g,", dsp->fVslider23);
        printf("%.12g,", dsp->fVslider22);
        printf("%.12g,", dsp->fVslider25);
        printf("%.12g,", dsp->fVslider21);
        printf("%.12g,", dsp->fVslider26);
        
        d_stdout("\n==== preset data end ===");
    }
    */

protected:
   /* -----------------------------------------------------------------------------------------------------------------
    * Information */

    const char* getLabel() const override
    {
        return "pod-master";
    }

    const char* getDescription() const override
    {
        return "";
    }

    const char* getMaker() const override
    {
        return "Klaus Scheuermann";
    }

    const char* getHomePage() const override
    {
        return "https://4ohm.de/";
    }

    const char* getLicense() const override
    {
        return "GPLv3+";
    }

    uint32_t getVersion() const override
    {
        return d_version(0, 1, 0);
    }

   /* -----------------------------------------------------------------------------------------------------------------
    * Init */

    void initAudioPort(const bool input, const uint32_t index, AudioPort& port) override
    {
        /* make assumptions related to IO.
         * 1 audio port means mono, 2 means stereo.
         */
        
            
            
        port.groupId = kPortGroupStereo;
            
        

        // everything else is as default
        Plugin::initAudioPort(input, index, port);
    }

    void initParameter(const uint32_t index, Parameter& param) override
    {
        switch (index)
        {
        case kParameter_global_bypass:
            param.hints = kParameterIsAutomatable
            
            
                |kParameterIsBoolean
            
            
                |kParameterIsInteger
            
            
            ;
            param.name = kParameterNames[0];
            param.unit = kParameterUnits[0];
            param.symbol = kParameterSymbols[0];
            param.shortName = "";
            param.ranges.def = kParameterRanges[0].def;
            param.ranges.min = kParameterRanges[0].min;
            param.ranges.max = kParameterRanges[0].max;
            break;
        case kParameter_target:
            param.hints = kParameterIsAutomatable
            
            
            
                |kParameterIsInteger
            
            
            ;
            param.name = kParameterNames[1];
            param.unit = kParameterUnits[1];
            param.symbol = kParameterSymbols[1];
            param.shortName = "";
            param.ranges.def = kParameterRanges[1].def;
            param.ranges.min = kParameterRanges[1].min;
            param.ranges.max = kParameterRanges[1].max;
            break;
        case kParameter_in_gain:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[2];
            param.unit = kParameterUnits[2];
            param.symbol = kParameterSymbols[2];
            param.shortName = "";
            param.ranges.def = kParameterRanges[2].def;
            param.ranges.min = kParameterRanges[2].min;
            param.ranges.max = kParameterRanges[2].max;
            break;
        case kParameter_dc_blocker:
            param.hints = kParameterIsAutomatable
            
            
                |kParameterIsBoolean
            
            
                |kParameterIsInteger
            
            
            ;
            param.name = kParameterNames[3];
            param.unit = kParameterUnits[3];
            param.symbol = kParameterSymbols[3];
            param.shortName = "";
            param.ranges.def = kParameterRanges[3].def;
            param.ranges.min = kParameterRanges[3].min;
            param.ranges.max = kParameterRanges[3].max;
            break;
        case kParameter_eq_bypass:
            param.hints = kParameterIsAutomatable
            
            
                |kParameterIsBoolean
            
            
                |kParameterIsInteger
            
            
            ;
            param.name = kParameterNames[4];
            param.unit = kParameterUnits[4];
            param.symbol = kParameterSymbols[4];
            param.shortName = "";
            param.ranges.def = kParameterRanges[4].def;
            param.ranges.min = kParameterRanges[4].min;
            param.ranges.max = kParameterRanges[4].max;
            break;
        case kParameter_eq_highpass_freq:
            param.hints = kParameterIsAutomatable
            
            
            
            
                |kParameterIsLogarithmic
            
            ;
            param.name = kParameterNames[5];
            param.unit = kParameterUnits[5];
            param.symbol = kParameterSymbols[5];
            param.shortName = "";
            param.ranges.def = kParameterRanges[5].def;
            param.ranges.min = kParameterRanges[5].min;
            param.ranges.max = kParameterRanges[5].max;
            break;
        case kParameter_eq_tilt_gain:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[6];
            param.unit = kParameterUnits[6];
            param.symbol = kParameterSymbols[6];
            param.shortName = "";
            param.ranges.def = kParameterRanges[6].def;
            param.ranges.min = kParameterRanges[6].min;
            param.ranges.max = kParameterRanges[6].max;
            break;
        case kParameter_eq_side_gain:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[7];
            param.unit = kParameterUnits[7];
            param.symbol = kParameterSymbols[7];
            param.shortName = "";
            param.ranges.def = kParameterRanges[7].def;
            param.ranges.min = kParameterRanges[7].min;
            param.ranges.max = kParameterRanges[7].max;
            break;
        case kParameter_eq_side_freq:
            param.hints = kParameterIsAutomatable
            
            
            
            
                |kParameterIsLogarithmic
            
            ;
            param.name = kParameterNames[8];
            param.unit = kParameterUnits[8];
            param.symbol = kParameterSymbols[8];
            param.shortName = "";
            param.ranges.def = kParameterRanges[8].def;
            param.ranges.min = kParameterRanges[8].min;
            param.ranges.max = kParameterRanges[8].max;
            break;
        case kParameter_eq_side_bandwidth:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[9];
            param.unit = kParameterUnits[9];
            param.symbol = kParameterSymbols[9];
            param.shortName = "";
            param.ranges.def = kParameterRanges[9].def;
            param.ranges.min = kParameterRanges[9].min;
            param.ranges.max = kParameterRanges[9].max;
            break;
        case kParameter_leveler_bypass:
            param.hints = kParameterIsAutomatable
            
            
                |kParameterIsBoolean
            
            
                |kParameterIsInteger
            
            
            ;
            param.name = kParameterNames[10];
            param.unit = kParameterUnits[10];
            param.symbol = kParameterSymbols[10];
            param.shortName = "";
            param.ranges.def = kParameterRanges[10].def;
            param.ranges.min = kParameterRanges[10].min;
            param.ranges.max = kParameterRanges[10].max;
            break;
        case kParameter_leveler_speed:
            param.hints = kParameterIsAutomatable
            
            
            
                |kParameterIsInteger
            
            
            ;
            param.name = kParameterNames[11];
            param.unit = kParameterUnits[11];
            param.symbol = kParameterSymbols[11];
            param.shortName = "";
            param.ranges.def = kParameterRanges[11].def;
            param.ranges.min = kParameterRanges[11].min;
            param.ranges.max = kParameterRanges[11].max;
            break;
        case kParameter_leveler_brake_threshold:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[12];
            param.unit = kParameterUnits[12];
            param.symbol = kParameterSymbols[12];
            param.shortName = "";
            param.ranges.def = kParameterRanges[12].def;
            param.ranges.min = kParameterRanges[12].min;
            param.ranges.max = kParameterRanges[12].max;
            break;
        case kParameter_leveler_max_plus:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[13];
            param.unit = kParameterUnits[13];
            param.symbol = kParameterSymbols[13];
            param.shortName = "";
            param.ranges.def = kParameterRanges[13].def;
            param.ranges.min = kParameterRanges[13].min;
            param.ranges.max = kParameterRanges[13].max;
            break;
        case kParameter_leveler_max_minus:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[14];
            param.unit = kParameterUnits[14];
            param.symbol = kParameterSymbols[14];
            param.shortName = "";
            param.ranges.def = kParameterRanges[14].def;
            param.ranges.min = kParameterRanges[14].min;
            param.ranges.max = kParameterRanges[14].max;
            break;
        case kParameter_kneecomp_bypass:
            param.hints = kParameterIsAutomatable
            
            
                |kParameterIsBoolean
            
            
                |kParameterIsInteger
            
            
            ;
            param.name = kParameterNames[15];
            param.unit = kParameterUnits[15];
            param.symbol = kParameterSymbols[15];
            param.shortName = "";
            param.ranges.def = kParameterRanges[15].def;
            param.ranges.min = kParameterRanges[15].min;
            param.ranges.max = kParameterRanges[15].max;
            break;
        case kParameter_kneecomp_strength:
            param.hints = kParameterIsAutomatable
            
            
            
                |kParameterIsInteger
            
            
            ;
            param.name = kParameterNames[16];
            param.unit = kParameterUnits[16];
            param.symbol = kParameterSymbols[16];
            param.shortName = "";
            param.ranges.def = kParameterRanges[16].def;
            param.ranges.min = kParameterRanges[16].min;
            param.ranges.max = kParameterRanges[16].max;
            break;
        case kParameter_kneecomp_threshold:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[17];
            param.unit = kParameterUnits[17];
            param.symbol = kParameterSymbols[17];
            param.shortName = "";
            param.ranges.def = kParameterRanges[17].def;
            param.ranges.min = kParameterRanges[17].min;
            param.ranges.max = kParameterRanges[17].max;
            break;
        case kParameter_kneecomp_attack:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[18];
            param.unit = kParameterUnits[18];
            param.symbol = kParameterSymbols[18];
            param.shortName = "";
            param.ranges.def = kParameterRanges[18].def;
            param.ranges.min = kParameterRanges[18].min;
            param.ranges.max = kParameterRanges[18].max;
            break;
        case kParameter_kneecomp_release:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[19];
            param.unit = kParameterUnits[19];
            param.symbol = kParameterSymbols[19];
            param.shortName = "";
            param.ranges.def = kParameterRanges[19].def;
            param.ranges.min = kParameterRanges[19].min;
            param.ranges.max = kParameterRanges[19].max;
            break;
        case kParameter_kneecomp_knee:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[20];
            param.unit = kParameterUnits[20];
            param.symbol = kParameterSymbols[20];
            param.shortName = "";
            param.ranges.def = kParameterRanges[20].def;
            param.ranges.min = kParameterRanges[20].min;
            param.ranges.max = kParameterRanges[20].max;
            break;
        case kParameter_kneecomp_link:
            param.hints = kParameterIsAutomatable
            
            
            
                |kParameterIsInteger
            
            
            ;
            param.name = kParameterNames[21];
            param.unit = kParameterUnits[21];
            param.symbol = kParameterSymbols[21];
            param.shortName = "";
            param.ranges.def = kParameterRanges[21].def;
            param.ranges.min = kParameterRanges[21].min;
            param.ranges.max = kParameterRanges[21].max;
            break;
        case kParameter_kneecomp_fffb:
            param.hints = kParameterIsAutomatable
            
            
            
                |kParameterIsInteger
            
            
            ;
            param.name = kParameterNames[22];
            param.unit = kParameterUnits[22];
            param.symbol = kParameterSymbols[22];
            param.shortName = "";
            param.ranges.def = kParameterRanges[22].def;
            param.ranges.min = kParameterRanges[22].min;
            param.ranges.max = kParameterRanges[22].max;
            break;
        case kParameter_kneecomp_makeup:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[23];
            param.unit = kParameterUnits[23];
            param.symbol = kParameterSymbols[23];
            param.shortName = "";
            param.ranges.def = kParameterRanges[23].def;
            param.ranges.min = kParameterRanges[23].min;
            param.ranges.max = kParameterRanges[23].max;
            break;
        case kParameter_kneecomp_drywet:
            param.hints = kParameterIsAutomatable
            
            
            
                |kParameterIsInteger
            
            
            ;
            param.name = kParameterNames[24];
            param.unit = kParameterUnits[24];
            param.symbol = kParameterSymbols[24];
            param.shortName = "";
            param.ranges.def = kParameterRanges[24].def;
            param.ranges.min = kParameterRanges[24].min;
            param.ranges.max = kParameterRanges[24].max;
            break;
        case kParameter_limiter_bypass:
            param.hints = kParameterIsAutomatable
            
            
                |kParameterIsBoolean
            
            
                |kParameterIsInteger
            
            
            ;
            param.name = kParameterNames[25];
            param.unit = kParameterUnits[25];
            param.symbol = kParameterSymbols[25];
            param.shortName = "";
            param.ranges.def = kParameterRanges[25].def;
            param.ranges.min = kParameterRanges[25].min;
            param.ranges.max = kParameterRanges[25].max;
            break;
        case kParameter_limiter_strength:
            param.hints = kParameterIsAutomatable
            
            
            
                |kParameterIsInteger
            
            
            ;
            param.name = kParameterNames[26];
            param.unit = kParameterUnits[26];
            param.symbol = kParameterSymbols[26];
            param.shortName = "";
            param.ranges.def = kParameterRanges[26].def;
            param.ranges.min = kParameterRanges[26].min;
            param.ranges.max = kParameterRanges[26].max;
            break;
        case kParameter_limiter_threshold:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[27];
            param.unit = kParameterUnits[27];
            param.symbol = kParameterSymbols[27];
            param.shortName = "";
            param.ranges.def = kParameterRanges[27].def;
            param.ranges.min = kParameterRanges[27].min;
            param.ranges.max = kParameterRanges[27].max;
            break;
        case kParameter_limiter_attack:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[28];
            param.unit = kParameterUnits[28];
            param.symbol = kParameterSymbols[28];
            param.shortName = "";
            param.ranges.def = kParameterRanges[28].def;
            param.ranges.min = kParameterRanges[28].min;
            param.ranges.max = kParameterRanges[28].max;
            break;
        case kParameter_limiter_release:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[29];
            param.unit = kParameterUnits[29];
            param.symbol = kParameterSymbols[29];
            param.shortName = "";
            param.ranges.def = kParameterRanges[29].def;
            param.ranges.min = kParameterRanges[29].min;
            param.ranges.max = kParameterRanges[29].max;
            break;
        case kParameter_limiter_knee:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[30];
            param.unit = kParameterUnits[30];
            param.symbol = kParameterSymbols[30];
            param.shortName = "";
            param.ranges.def = kParameterRanges[30].def;
            param.ranges.min = kParameterRanges[30].min;
            param.ranges.max = kParameterRanges[30].max;
            break;
        case kParameter_limiter_fffb:
            param.hints = kParameterIsAutomatable
            
            
            
                |kParameterIsInteger
            
            
            ;
            param.name = kParameterNames[31];
            param.unit = kParameterUnits[31];
            param.symbol = kParameterSymbols[31];
            param.shortName = "";
            param.ranges.def = kParameterRanges[31].def;
            param.ranges.min = kParameterRanges[31].min;
            param.ranges.max = kParameterRanges[31].max;
            break;
        case kParameter_limiter_makeup:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[32];
            param.unit = kParameterUnits[32];
            param.symbol = kParameterSymbols[32];
            param.shortName = "";
            param.ranges.def = kParameterRanges[32].def;
            param.ranges.min = kParameterRanges[32].min;
            param.ranges.max = kParameterRanges[32].max;
            break;
        
        case kParameter_limiter_gain:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[33];
            param.unit = kParameterUnits[33];
            param.symbol = kParameterSymbols[33];
            param.shortName = "";
            param.ranges.def = kParameterRanges[33].def;
            param.ranges.min = kParameterRanges[33].min;
            param.ranges.max = kParameterRanges[33].max;
            break;
        case kParameter_latency_global:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[34];
            param.unit = kParameterUnits[34];
            param.symbol = kParameterSymbols[34];
            param.shortName = "";
            param.ranges.def = kParameterRanges[34].def;
            param.ranges.min = kParameterRanges[34].min;
            param.ranges.max = kParameterRanges[34].max;
            break;
        case kParameter_peakmeter_in_l:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[35];
            param.unit = kParameterUnits[35];
            param.symbol = kParameterSymbols[35];
            param.shortName = "";
            param.ranges.def = kParameterRanges[35].def;
            param.ranges.min = kParameterRanges[35].min;
            param.ranges.max = kParameterRanges[35].max;
            break;
        case kParameter_peakmeter_in_r:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[36];
            param.unit = kParameterUnits[36];
            param.symbol = kParameterSymbols[36];
            param.shortName = "";
            param.ranges.def = kParameterRanges[36].def;
            param.ranges.min = kParameterRanges[36].min;
            param.ranges.max = kParameterRanges[36].max;
            break;
        case kParameter_lufs_in:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[37];
            param.unit = kParameterUnits[37];
            param.symbol = kParameterSymbols[37];
            param.shortName = "";
            param.ranges.def = kParameterRanges[37].def;
            param.ranges.min = kParameterRanges[37].min;
            param.ranges.max = kParameterRanges[37].max;
            break;
        case kParameter_leveler_gain:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[38];
            param.unit = kParameterUnits[38];
            param.symbol = kParameterSymbols[38];
            param.shortName = "";
            param.ranges.def = kParameterRanges[38].def;
            param.ranges.min = kParameterRanges[38].min;
            param.ranges.max = kParameterRanges[38].max;
            break;
        case kParameter_lufs_out:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[39];
            param.unit = kParameterUnits[39];
            param.symbol = kParameterSymbols[39];
            param.shortName = "";
            param.ranges.def = kParameterRanges[39].def;
            param.ranges.min = kParameterRanges[39].min;
            param.ranges.max = kParameterRanges[39].max;
            break;
        case kParameter_peakmeter_out_l:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[40];
            param.unit = kParameterUnits[40];
            param.symbol = kParameterSymbols[40];
            param.shortName = "";
            param.ranges.def = kParameterRanges[40].def;
            param.ranges.min = kParameterRanges[40].min;
            param.ranges.max = kParameterRanges[40].max;
            break;
        case kParameter_peakmeter_out_r:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[41];
            param.unit = kParameterUnits[41];
            param.symbol = kParameterSymbols[41];
            param.shortName = "";
            param.ranges.def = kParameterRanges[41].def;
            param.ranges.min = kParameterRanges[41].min;
            param.ranges.max = kParameterRanges[41].max;
            break;
        case kParameter_leveler_brake:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
                |kParameterIsInteger
            
            
            ;
            param.name = kParameterNames[42];
            param.unit = kParameterUnits[42];
            param.symbol = kParameterSymbols[42];
            param.shortName = "";
            param.ranges.def = kParameterRanges[42].def;
            param.ranges.min = kParameterRanges[42].min;
            param.ranges.max = kParameterRanges[42].max;
            break;
        case kParameter_kneecomp_meter_0:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[43];
            param.unit = kParameterUnits[43];
            param.symbol = kParameterSymbols[43];
            param.shortName = "";
            param.ranges.def = kParameterRanges[43].def;
            param.ranges.min = kParameterRanges[43].min;
            param.ranges.max = kParameterRanges[43].max;
            break;
        case kParameter_kneecomp_meter_1:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[44];
            param.unit = kParameterUnits[44];
            param.symbol = kParameterSymbols[44];
            param.shortName = "";
            param.ranges.def = kParameterRanges[44].def;
            param.ranges.min = kParameterRanges[44].min;
            param.ranges.max = kParameterRanges[44].max;
            break;
        case kParameter_limiter_gain_reduction:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[45];
            param.unit = kParameterUnits[45];
            param.symbol = kParameterSymbols[45];
            param.shortName = "";
            param.ranges.def = kParameterRanges[45].def;
            param.ranges.min = kParameterRanges[45].min;
            param.ranges.max = kParameterRanges[45].max;
            break;
        
        }
    }

   /* -----------------------------------------------------------------------------------------------------------------
    * Internal data */

    float getParameterValue(const uint32_t index) const override
    {
        switch (index)
        {
        case kParameter_global_bypass:
            return dsp->fCheckbox0;
        case kParameter_target:
            return dsp->fVslider10;
        case kParameter_in_gain:
            return dsp->fVslider1;
        case kParameter_dc_blocker:
            return dsp->fCheckbox3;
        case kParameter_eq_bypass:
            return dsp->fCheckbox2;
        case kParameter_eq_highpass_freq:
            return dsp->fVslider2;
        case kParameter_eq_tilt_gain:
            return dsp->fVslider3;
        case kParameter_eq_side_gain:
            return dsp->fVslider6;
        case kParameter_eq_side_freq:
            return dsp->fVslider4;
        case kParameter_eq_side_bandwidth:
            return dsp->fVslider5;
        case kParameter_leveler_bypass:
            return dsp->fCheckbox1;
        case kParameter_leveler_speed:
            return dsp->fVslider0;
        case kParameter_leveler_brake_threshold:
            return dsp->fVslider7;
        case kParameter_leveler_max_plus:
            return dsp->fVslider9;
        case kParameter_leveler_max_minus:
            return dsp->fVslider8;
        case kParameter_kneecomp_bypass:
            return dsp->fCheckbox4;
        case kParameter_kneecomp_strength:
            return dsp->fVslider13;
        case kParameter_kneecomp_threshold:
            return dsp->fVslider17;
        case kParameter_kneecomp_attack:
            return dsp->fVslider16;
        case kParameter_kneecomp_release:
            return dsp->fVslider14;
        case kParameter_kneecomp_knee:
            return dsp->fVslider18;
        case kParameter_kneecomp_link:
            return dsp->fVslider19;
        case kParameter_kneecomp_fffb:
            return dsp->fVslider15;
        case kParameter_kneecomp_makeup:
            return dsp->fVslider12;
        case kParameter_kneecomp_drywet:
            return dsp->fVslider11;
        case kParameter_limiter_bypass:
            return dsp->fCheckbox5;
        case kParameter_limiter_strength:
            return dsp->fVslider20;
        case kParameter_limiter_threshold:
            return dsp->fVslider24;
        case kParameter_limiter_attack:
            return dsp->fVslider23;
        case kParameter_limiter_release:
            return dsp->fVslider22;
        case kParameter_limiter_knee:
            return dsp->fVslider25;
        case kParameter_limiter_fffb:
            return dsp->fVslider21;
        case kParameter_limiter_makeup:
            return dsp->fVslider26;
        case kParameter_limiter_gain:
            return dsp->fVbargraph8;
        case kParameter_latency_global:
            return dsp->fVbargraph9;
        case kParameter_peakmeter_in_l:
            return dsp->fVbargraph0;
        case kParameter_peakmeter_in_r:
            return dsp->fVbargraph1;
        case kParameter_lufs_in:
            return dsp->fVbargraph2;
        case kParameter_leveler_gain:
            return dsp->fVbargraph4;
        case kParameter_lufs_out:
            return dsp->fVbargraph11;
        case kParameter_peakmeter_out_l:
            return dsp->fVbargraph10;
        case kParameter_peakmeter_out_r:
            return dsp->fVbargraph12;
        case kParameter_leveler_brake:
            return dsp->fVbargraph3;
        case kParameter_kneecomp_meter_0:
            return dsp->fVbargraph5;
        case kParameter_kneecomp_meter_1:
            return dsp->fVbargraph6;
        case kParameter_limiter_gain_reduction:
            return dsp->fVbargraph7;
        
        default:
            return 0.0f;
        }
    }

    void setParameterValue(const uint32_t index, const float value) override
    {
        switch (index)
        {
        case kParameter_global_bypass:
            dsp->fCheckbox0 = value;
            break;
        case kParameter_target:
            dsp->fVslider10 = value;
            break;
        case kParameter_in_gain:
            dsp->fVslider1 = value;
            break;
        case kParameter_dc_blocker:
            dsp->fCheckbox3 = value;
            break;
        case kParameter_eq_bypass:
            dsp->fCheckbox2 = value;
            break;
        case kParameter_eq_highpass_freq:
            dsp->fVslider2 = value;
            break;
        case kParameter_eq_tilt_gain:
            dsp->fVslider3 = value;
            break;
        case kParameter_eq_side_gain:
            dsp->fVslider6 = value;
            break;
        case kParameter_eq_side_freq:
            dsp->fVslider4 = value;
            break;
        case kParameter_eq_side_bandwidth:
            dsp->fVslider5 = value;
            break;
        case kParameter_leveler_bypass:
            dsp->fCheckbox1 = value;
            break;
        case kParameter_leveler_speed:
            dsp->fVslider0 = value;
            break;
        case kParameter_leveler_brake_threshold:
            dsp->fVslider7 = value;
            break;
        case kParameter_leveler_max_plus:
            dsp->fVslider9 = value;
            break;
        case kParameter_leveler_max_minus:
            dsp->fVslider8 = value;
            break;
        case kParameter_kneecomp_bypass:
            dsp->fCheckbox4 = value;
            break;
        case kParameter_kneecomp_strength:
            dsp->fVslider13 = value;
            break;
        case kParameter_kneecomp_threshold:
            dsp->fVslider17 = value;
            break;
        case kParameter_kneecomp_attack:
            dsp->fVslider16 = value;
            break;
        case kParameter_kneecomp_release:
            dsp->fVslider14 = value;
            break;
        case kParameter_kneecomp_knee:
            dsp->fVslider18 = value;
            break;
        case kParameter_kneecomp_link:
            dsp->fVslider19 = value;
            break;
        case kParameter_kneecomp_fffb:
            dsp->fVslider15 = value;
            break;
        case kParameter_kneecomp_makeup:
            dsp->fVslider12 = value;
            break;
        case kParameter_kneecomp_drywet:
            dsp->fVslider11 = value;
            break;
        case kParameter_limiter_bypass:
            dsp->fCheckbox5 = value;
            break;
        case kParameter_limiter_strength:
            dsp->fVslider20 = value;
            break;
        case kParameter_limiter_threshold:
            dsp->fVslider24 = value;
            break;
        case kParameter_limiter_attack:
            dsp->fVslider23 = value;
            break;
        case kParameter_limiter_release:
            dsp->fVslider22 = value;
            break;
        case kParameter_limiter_knee:
            dsp->fVslider25 = value;
            break;
        case kParameter_limiter_fffb:
            dsp->fVslider21 = value;
            break;
        case kParameter_limiter_makeup:
            dsp->fVslider26 = value;
            break;
        
        }
    }

   /* -----------------------------------------------------------------------------------------------------------------
    * Audio/MIDI Processing */

    void run(const float** const inputs, float** const outputs, const uint32_t frames) override
    {
        dsp->compute(frames, const_cast<float**>(inputs), outputs);
    }

    void sampleRateChanged(const double newSampleRate) override
    {
        // retrieve parameter info first
        float params[33] = {
            dsp->fCheckbox0,
            dsp->fVslider10,
            dsp->fVslider1,
            dsp->fCheckbox3,
            dsp->fCheckbox2,
            dsp->fVslider2,
            dsp->fVslider3,
            dsp->fVslider6,
            dsp->fVslider4,
            dsp->fVslider5,
            dsp->fCheckbox1,
            dsp->fVslider0,
            dsp->fVslider7,
            dsp->fVslider9,
            dsp->fVslider8,
            dsp->fCheckbox4,
            dsp->fVslider13,
            dsp->fVslider17,
            dsp->fVslider16,
            dsp->fVslider14,
            dsp->fVslider18,
            dsp->fVslider19,
            dsp->fVslider15,
            dsp->fVslider12,
            dsp->fVslider11,
            dsp->fCheckbox5,
            dsp->fVslider20,
            dsp->fVslider24,
            dsp->fVslider23,
            dsp->fVslider22,
            dsp->fVslider25,
            dsp->fVslider21,
            dsp->fVslider26,
            
        };

        // tell dsp to change sample rate
        dsp->init(newSampleRate);

        // set parameters back, which have been reset in the dsp
        dsp->fCheckbox0 = params[0];
        dsp->fVslider10 = params[1];
        dsp->fVslider1 = params[2];
        dsp->fCheckbox3 = params[3];
        dsp->fCheckbox2 = params[4];
        dsp->fVslider2 = params[5];
        dsp->fVslider3 = params[6];
        dsp->fVslider6 = params[7];
        dsp->fVslider4 = params[8];
        dsp->fVslider5 = params[9];
        dsp->fCheckbox1 = params[10];
        dsp->fVslider0 = params[11];
        dsp->fVslider7 = params[12];
        dsp->fVslider9 = params[13];
        dsp->fVslider8 = params[14];
        dsp->fCheckbox4 = params[15];
        dsp->fVslider13 = params[16];
        dsp->fVslider17 = params[17];
        dsp->fVslider16 = params[18];
        dsp->fVslider14 = params[19];
        dsp->fVslider18 = params[20];
        dsp->fVslider19 = params[21];
        dsp->fVslider15 = params[22];
        dsp->fVslider12 = params[23];
        dsp->fVslider11 = params[24];
        dsp->fCheckbox5 = params[25];
        dsp->fVslider20 = params[26];
        dsp->fVslider24 = params[27];
        dsp->fVslider23 = params[28];
        dsp->fVslider22 = params[29];
        dsp->fVslider25 = params[30];
        dsp->fVslider21 = params[31];
        dsp->fVslider26 = params[32];
        
    }

    // ----------------------------------------------------------------------------------------------------------------

    DISTRHO_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(FaustGeneratedPlugin)
};

// --------------------------------------------------------------------------------------------------------------------

#if 0


Plugin* createPlugin()
{
    return new FaustGeneratedPlugin();
}


#endif

// --------------------------------------------------------------------------------------------------------------------

END_NAMESPACE_DISTRHO