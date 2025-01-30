
//------------------------------------------------------------------------------
// This file was generated using the Faust compiler (https://faust.grame.fr),
// and the Faust post-processor (https://github.com/jpcima/faustpp).
//
// Source: PodcastPluginMaster.dsp
// Name: PodcastPlugin Master
// Description: 
// Author: Klaus Scheuermann
// Copyright: 
// License: GPLv3+
// Version: 0.1
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
	FAUSTFLOAT fVslider0;
	float fConst3;
	float fRec2[2];
	float fRec1[2];
	FAUSTFLOAT fVbargraph0;
	float fVec0[2];
	FAUSTFLOAT fCheckbox0;
	float fRec3[2];
	float fConst4;
	float fConst5;
	FAUSTFLOAT fCheckbox1;
	float fConst6;
	float fConst7;
	int iConst8;
	float fVec1[2];
	int iConst9;
	float fVec2[3];
	int iConst10;
	float fVec3[7];
	int iConst11;
	int iConst12;
	float fVec4[15];
	int iConst13;
	int iConst14;
	int IOTA0;
	float fVec5[32];
	int iConst15;
	FAUSTFLOAT fVslider1;
	float fConst16;
	float fRec18[2];
	float fConst17;
	float fConst20;
	int iConst21;
	float fConst26;
	float fConst30;
	float fConst31;
	float fConst33;
	float fVec6[2];
	float fConst34;
	float fConst35;
	float fConst36;
	float fRec22[2];
	float fRec21[2];
	float fConst37;
	float fConst38;
	float fVec7[2];
	float fConst39;
	float fRec20[2];
	float fRec19[2];
	float fVec8[2];
	float fVec9[3];
	float fVec10[7];
	float fVec11[15];
	float fVec12[32];
	float fVec13[64];
	float fVec14[128];
	float fVec15[256];
	float fVec16[512];
	float fVec17[1024];
	float fVec18[2048];
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
	float fVec19[2];
	float fRec26[2];
	float fRec25[2];
	float fVec20[2];
	float fRec24[2];
	float fRec23[2];
	float fVec21[2];
	float fVec22[3];
	float fVec23[7];
	float fVec24[15];
	float fVec25[32];
	float fVec26[64];
	float fVec27[128];
	float fVec28[256];
	float fVec29[512];
	float fVec30[1024];
	float fVec31[2048];
	float fRec13[2];
	float fRec14[2];
	float fRec11[2];
	FAUSTFLOAT fVbargraph1;
	float fRec10[2];
	FAUSTFLOAT fCheckbox2;
	float fRec27[2];
	float fVec32[2];
	float fVec33[3];
	float fVec34[7];
	float fVec35[15];
	float fVec36[32];
	float fRec38[2];
	float fVec37[2];
	float fRec42[2];
	float fRec41[2];
	float fVec38[2];
	float fRec40[2];
	float fRec39[2];
	float fVec39[2];
	float fVec40[3];
	float fVec41[7];
	float fVec42[15];
	float fVec43[32];
	float fVec44[64];
	float fVec45[128];
	float fVec46[256];
	float fVec47[512];
	float fVec48[1024];
	float fVec49[2048];
	float fVec50[2];
	float fRec46[2];
	float fRec45[2];
	float fVec51[2];
	float fRec44[2];
	float fRec43[2];
	float fVec52[2];
	float fVec53[3];
	float fVec54[7];
	float fVec55[15];
	float fVec56[32];
	float fVec57[64];
	float fVec58[128];
	float fVec59[256];
	float fVec60[512];
	float fVec61[1024];
	float fVec62[2048];
	float fRec33[2];
	float fRec34[2];
	float fRec31[2];
	FAUSTFLOAT fVbargraph2;
	float fRec30[2];
	float fConst60;
	float fConst61;
	float fRec47[2];
	FAUSTFLOAT fCheckbox3;
	float fRec48[2];
	float fConst63;
	float fConst65;
	float fConst66;
	float fConst67;
	float fRec50[2];
	float fRec51[2];
	FAUSTFLOAT fVslider2;
	float fRec52[2];
	float fVec63[2];
	float fRec49[2];
	float fRec53[2];
	float fRec28[3];
	float fConst69;
	int iConst70;
	float fVec64[2];
	float fRec58[2];
	float fRec57[2];
	float fVec65[2];
	float fRec56[2];
	float fRec55[2];
	float fVec66[2];
	float fVec67[3];
	float fVec68[7];
	float fVec69[15];
	float fVec70[32];
	float fVec71[64];
	float fVec72[128];
	float fVec73[256];
	float fVec74[512];
	float fVec75[1024];
	float fVec76[2048];
	float fVec77[4096];
	float fVec78[8192];
	float fVec79[16384];
	float fVec80[32768];
	float fVec81[65536];
	float fVec82[131072];
	int iConst71;
	int iConst72;
	int iConst73;
	int iConst74;
	int iConst75;
	int iConst76;
	int iConst77;
	int iConst78;
	int iConst79;
	int iConst80;
	int iConst81;
	int iConst82;
	int iConst83;
	int iConst84;
	int iConst85;
	int iConst86;
	int iConst87;
	int iConst88;
	int iConst89;
	int iConst90;
	int iConst91;
	int iConst92;
	int iConst93;
	int iConst94;
	int iConst95;
	int iConst96;
	int iConst97;
	int iConst98;
	int iConst99;
	int iConst100;
	int iConst101;
	float fRec63[2];
	FAUSTFLOAT fVbargraph3;
	float fVec83[2];
	float fVec84[2];
	float fRec62[2];
	float fRec61[2];
	float fVec85[2];
	float fRec60[2];
	float fRec59[2];
	float fVec86[2];
	float fVec87[3];
	float fVec88[7];
	float fVec89[15];
	float fVec90[32];
	float fVec91[64];
	float fVec92[128];
	float fVec93[256];
	float fVec94[512];
	float fVec95[1024];
	float fVec96[2048];
	float fVec97[4096];
	float fVec98[8192];
	float fVec99[16384];
	float fVec100[32768];
	float fVec101[65536];
	float fVec102[131072];
	FAUSTFLOAT fVbargraph4;
	float fVec103[2];
	float fRec54[2];
	float fRec65[2];
	float fRec66[2];
	float fVec104[2];
	float fRec64[2];
	float fRec67[2];
	float fRec29[3];
	FAUSTFLOAT fVslider3;
	float fConst102;
	float fConst104;
	float fConst106;
	float fConst107;
	float fConst108;
	float fConst109;
	float fConst110;
	float fRec71[3];
	float fConst111;
	float fConst112;
	float fRec70[3];
	float fConst113;
	float fRec69[3];
	float fVec105[2];
	float fConst114;
	float fRec68[2];
	float fRec75[3];
	float fRec74[3];
	float fRec73[3];
	float fVec106[2];
	float fRec72[2];
	int iConst115;
	int iConst116;
	float fVec107[3];
	int iConst117;
	float fVec108[7];
	int iConst118;
	int iConst119;
	float fVec109[15];
	int iConst120;
	int iConst121;
	float fVec110[32];
	int iConst122;
	int iConst123;
	float fVec111[64];
	int iConst124;
	int iConst125;
	float fVec112[128];
	int iConst126;
	int iConst127;
	float fVec113[256];
	int iConst128;
	int iConst129;
	float fVec114[512];
	int iConst130;
	int iConst131;
	float fVec115[1024];
	int iConst132;
	int iConst133;
	float fVec116[2048];
	int iConst134;
	int iConst135;
	float fVec117[4096];
	int iConst136;
	float fRec76[2];
	float fVec118[3];
	float fVec119[7];
	float fVec120[15];
	float fVec121[32];
	float fVec122[64];
	float fVec123[128];
	float fVec124[256];
	float fVec125[512];
	float fVec126[1024];
	float fVec127[2048];
	float fVec128[4096];
	float fRec77[2];
	FAUSTFLOAT fVbargraph5;
	float fConst137;
	float fConst139;
	float fConst140;
	float fConst141;
	float fConst142;
	float fConst144;
	float fConst145;
	float fConst146;
	float fConst147;
	float fConst149;
	float fConst150;
	float fConst151;
	float fRec93[3];
	float fRec92[3];
	float fConst152;
	float fConst154;
	float fConst155;
	float fRec91[3];
	float fConst156;
	float fRec90[3];
	float fConst157;
	float fRec89[3];
	float fConst158;
	float fConst160;
	float fConst161;
	float fRec88[3];
	float fConst162;
	float fRec87[3];
	float fConst163;
	float fRec86[3];
	float fConst164;
	float fConst166;
	float fConst167;
	float fRec85[3];
	float fConst168;
	float fRec84[3];
	float fConst169;
	float fRec83[3];
	float fVec129[2];
	float fRec82[2];
	float fRec105[3];
	float fRec104[3];
	float fRec103[3];
	float fRec102[3];
	float fRec101[3];
	float fRec100[3];
	float fRec99[3];
	float fRec98[3];
	float fRec97[3];
	float fRec96[3];
	float fRec95[3];
	float fVec130[2];
	float fRec94[2];
	float fVec131[3];
	float fVec132[7];
	float fVec133[15];
	float fVec134[32];
	float fVec135[64];
	float fVec136[128];
	float fVec137[256];
	float fVec138[512];
	float fVec139[1024];
	float fVec140[2048];
	float fVec141[4096];
	float fRec106[2];
	float fVec142[3];
	float fVec143[7];
	float fVec144[15];
	float fVec145[32];
	float fVec146[64];
	float fVec147[128];
	float fVec148[256];
	float fVec149[512];
	float fVec150[1024];
	float fVec151[2048];
	float fVec152[4096];
	float fRec107[2];
	FAUSTFLOAT fVbargraph6;
	float fRec78[2];
	float fRec79[2];
	float fConst170;
	float fRec114[3];
	float fRec113[3];
	float fVec153[2];
	float fRec112[2];
	float fRec117[3];
	float fRec116[3];
	float fVec154[2];
	float fRec115[2];
	float fVec155[3];
	float fVec156[7];
	float fVec157[15];
	float fVec158[32];
	float fVec159[64];
	float fVec160[128];
	float fVec161[256];
	float fVec162[512];
	float fVec163[1024];
	float fVec164[2048];
	float fVec165[4096];
	float fRec118[2];
	float fVec166[3];
	float fVec167[7];
	float fVec168[15];
	float fVec169[32];
	float fVec170[64];
	float fVec171[128];
	float fVec172[256];
	float fVec173[512];
	float fVec174[1024];
	float fVec175[2048];
	float fVec176[4096];
	float fRec119[2];
	FAUSTFLOAT fVbargraph7;
	float fRec108[2];
	float fRec109[2];
	float fRec120[2];
	float fRec121[2];
	float fConst171;
	float fRec130[3];
	float fRec129[3];
	float fVec177[2];
	float fRec128[2];
	float fRec133[3];
	float fRec132[3];
	float fVec178[2];
	float fRec131[2];
	float fVec179[3];
	float fVec180[7];
	float fVec181[15];
	float fVec182[32];
	float fVec183[64];
	float fVec184[128];
	float fVec185[256];
	float fVec186[512];
	float fVec187[1024];
	float fVec188[2048];
	float fVec189[4096];
	float fRec134[2];
	float fVec190[3];
	float fVec191[7];
	float fVec192[15];
	float fVec193[32];
	float fVec194[64];
	float fVec195[128];
	float fVec196[256];
	float fVec197[512];
	float fVec198[1024];
	float fVec199[2048];
	float fVec200[4096];
	float fRec135[2];
	FAUSTFLOAT fVbargraph8;
	float fRec124[2];
	float fRec125[2];
	float fRec136[2];
	float fRec137[2];
	float fConst172;
	float fRec146[3];
	float fRec145[3];
	float fVec201[2];
	float fRec144[2];
	float fRec149[3];
	float fRec148[3];
	float fVec202[2];
	float fRec147[2];
	float fVec203[3];
	float fVec204[7];
	float fVec205[15];
	float fVec206[32];
	float fVec207[64];
	float fVec208[128];
	float fVec209[256];
	float fVec210[512];
	float fVec211[1024];
	float fVec212[2048];
	float fVec213[4096];
	float fRec150[2];
	float fVec214[3];
	float fVec215[7];
	float fVec216[15];
	float fVec217[32];
	float fVec218[64];
	float fVec219[128];
	float fVec220[256];
	float fVec221[512];
	float fVec222[1024];
	float fVec223[2048];
	float fVec224[4096];
	float fRec151[2];
	FAUSTFLOAT fVbargraph9;
	float fRec140[2];
	float fRec141[2];
	float fRec152[2];
	float fRec153[2];
	float fRec156[2];
	float fRec157[2];
	float fRec8[3];
	float fRec160[2];
	float fRec161[2];
	float fRec164[2];
	float fRec165[2];
	float fRec168[2];
	float fRec169[2];
	float fRec172[2];
	float fRec173[2];
	float fRec176[2];
	float fRec177[2];
	float fRec180[2];
	float fRec181[2];
	float fRec184[2];
	float fRec185[2];
	float fRec188[2];
	float fRec189[2];
	float fRec9[3];
	float fVec225[2048];
	float fVec226[2048];
	float fConst173;
	int iRec6[2];
	float fRec7[2];
	float fRec5[2];
	float fConst174;
	float fConst175;
	float fRec4[2];
	FAUSTFLOAT fVbargraph10;
	FAUSTFLOAT fHbargraph0;
	int iConst176;
	float fVec227[2];
	float fRec0[2];
	FAUSTFLOAT fVbargraph11;
	float fVec228[2];
	float fRec196[2];
	float fRec195[2];
	float fVec229[2];
	float fRec194[2];
	float fRec193[2];
	float fVec230[2];
	float fVec231[3];
	float fVec232[7];
	float fVec233[15];
	float fVec234[32];
	float fVec235[64];
	float fVec236[128];
	float fVec237[256];
	float fVec238[512];
	float fVec239[1024];
	float fVec240[2048];
	float fVec241[4096];
	float fVec242[8192];
	float fVec243[16384];
	float fVec244[32768];
	float fVec245[65536];
	float fVec246[131072];
	float fVec247[2];
	float fVec248[2];
	float fRec200[2];
	float fRec199[2];
	float fVec249[2];
	float fRec198[2];
	float fRec197[2];
	float fVec250[2];
	float fVec251[3];
	float fVec252[7];
	float fVec253[15];
	float fVec254[32];
	float fVec255[64];
	float fVec256[128];
	float fVec257[256];
	float fVec258[512];
	float fVec259[1024];
	float fVec260[2048];
	float fVec261[4096];
	float fVec262[8192];
	float fVec263[16384];
	float fVec264[32768];
	float fVec265[65536];
	float fVec266[131072];
	FAUSTFLOAT fVbargraph12;
	float fRec192[2];
	FAUSTFLOAT fVbargraph13;
	
 public:
	
	void metadata(Meta* m) { 
		m->declare("analyzers.lib/name", "Faust Analyzer Library");
		m->declare("analyzers.lib/version", "0.2");
		m->declare("author", "Klaus Scheuermann");
		m->declare("basics.lib/bypass1:author", "Julius Smith");
		m->declare("basics.lib/name", "Faust Basic Element Library");
		m->declare("basics.lib/parallelMax:author", "Bart Brouns");
		m->declare("basics.lib/parallelMax:copyright", "Copyright (c) 2020 Bart Brouns <bart@magnetophon.nl>");
		m->declare("basics.lib/parallelMax:licence", "GPL-3.0");
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
		m->declare("compile_options", "-a /tmp/tmpwnorhmod.cpp -lang cpp -es 1 -mcd 16 -single -ftz 0");
		m->declare("compressors.lib/name", "Faust Compressor Effect Library");
		m->declare("compressors.lib/peak_compression_gain_N_chan_db:author", "Bart Brouns");
		m->declare("compressors.lib/peak_compression_gain_N_chan_db:license", "GPLv3");
		m->declare("compressors.lib/peak_compression_gain_mono_db:author", "Bart Brouns");
		m->declare("compressors.lib/peak_compression_gain_mono_db:license", "GPLv3");
		m->declare("compressors.lib/peak_expansion_gain_N_chan_db:author", "Bart Brouns");
		m->declare("compressors.lib/peak_expansion_gain_N_chan_db:license", "GPLv3");
		m->declare("compressors.lib/version", "0.4");
		m->declare("dynamicsmoothing.lib/author", "Dario Sanfilippo");
		m->declare("dynamicsmoothing.lib/copyright", "2024, Dario Sanfilippo");
		m->declare("dynamicsmoothing.lib/license", "MIT");
		m->declare("dynamicsmoothing.lib/name", "dynamicSmoothing");
		m->declare("dynamicsmoothing.lib/version", "0.1");
		m->declare("filename", "PodcastPluginMaster.dsp");
		m->declare("filters.lib/dcblockerat:author", "Julius O. Smith III");
		m->declare("filters.lib/dcblockerat:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/dcblockerat:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/filterbank:author", "Julius O. Smith III");
		m->declare("filters.lib/filterbank:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/filterbank:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/fir:author", "Julius O. Smith III");
		m->declare("filters.lib/fir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/fir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/highpass:author", "Julius O. Smith III");
		m->declare("filters.lib/highpass:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/highshelf:author", "Julius O. Smith III");
		m->declare("filters.lib/highshelf:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/highshelf:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/iir:author", "Julius O. Smith III");
		m->declare("filters.lib/iir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/iir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/itu_r_bs_1770_4_kfilter:author", "Jakob Dübel");
		m->declare("filters.lib/itu_r_bs_1770_4_kfilter:copyright", "Copyright (C) 2022 Jakob Dübel");
		m->declare("filters.lib/itu_r_bs_1770_4_kfilter:license", "ISC license");
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
		m->declare("filters.lib/tf2:author", "Julius O. Smith III");
		m->declare("filters.lib/tf2:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf2:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/tf2s:author", "Julius O. Smith III");
		m->declare("filters.lib/tf2s:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf2s:license", "MIT-style STK-4.3 license");
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
		m->declare("name", "PodcastPlugin Master");
		m->declare("platform.lib/name", "Generic Platform Library");
		m->declare("platform.lib/version", "0.3");
		m->declare("routes.lib/name", "Faust Signal Routing Library");
		m->declare("routes.lib/version", "0.2");
		m->declare("signals.lib/name", "Faust Signal Routing Library");
		m->declare("signals.lib/onePoleSwitching:author", "Jonatan Liljedahl, revised by Dario Sanfilippo");
		m->declare("signals.lib/onePoleSwitching:licence", "STK-4.3");
		m->declare("signals.lib/version", "0.3");
		m->declare("version", "0.1");
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
		fConst1 = 8.0f / fConst0;
		fConst2 = 44.1f / fConst0;
		fConst3 = 1.0f - fConst2;
		fConst4 = std::exp(0.0f - 628.31854f / fConst0);
		fConst5 = 1.0f - fConst4;
		fConst6 = 3.1415927f / fConst0;
		fConst7 = 0.125f * fConst0;
		iConst8 = int(std::floor(0.0001f * fConst0)) % 2;
		iConst9 = int(std::floor(5e-05f * fConst0)) % 2;
		iConst10 = int(std::floor(2.5e-05f * fConst0)) % 2;
		iConst11 = iConst8 + 2 * iConst9;
		iConst12 = int(std::floor(1.25e-05f * fConst0)) % 2;
		iConst13 = iConst11 + 4 * iConst10;
		iConst14 = int(std::floor(6.25e-06f * fConst0)) % 2;
		iConst15 = iConst13 + 8 * iConst12;
		fConst16 = std::exp(0.0f - 1e+01f / fConst0);
		fConst17 = 6.281153e-07f * fConst0;
		float fConst18 = 0.01f * fConst0;
		float fConst19 = std::rint(fConst18);
		fConst20 = 1.0f / std::max<float>(fConst19, 1.1920929e-07f);
		iConst21 = int(std::floor(0.0009765625f * fConst19)) % 2;
		float fConst22 = std::tan(119.806114f / fConst0);
		float fConst23 = mydsp_faustpower2_f(fConst22);
		float fConst24 = 0.50032705f * (fConst23 + 1.0f);
		float fConst25 = fConst22 + fConst24;
		fConst26 = 0.0f - 1.0006541f / fConst25;
		float fConst27 = std::tan(5283.415f / fConst0);
		float fConst28 = mydsp_faustpower2_f(fConst27);
		float fConst29 = 1.4142135f * fConst27;
		fConst30 = 1.0f / (fConst28 + fConst29 + 1.0f);
		fConst31 = fConst28 + (1.0f - fConst29);
		float fConst32 = 1.7803667f * fConst27;
		fConst33 = fConst28 + (1.5848527f - fConst32);
		fConst34 = fConst28 + fConst32 + 1.5848527f;
		fConst35 = fConst28 + -1.0f;
		fConst36 = fConst28 + -1.5848527f;
		fConst37 = 1.0f / fConst25;
		fConst38 = fConst24 - fConst22;
		fConst39 = 1.0006541f * (fConst23 + -1.0f);
		iConst40 = int(std::floor(fConst19)) % 2;
		iConst41 = int(std::floor(0.5f * fConst19)) % 2;
		iConst42 = iConst40 + 2 * iConst41;
		iConst43 = int(std::floor(0.25f * fConst19)) % 2;
		iConst44 = iConst42 + 4 * iConst43;
		iConst45 = int(std::floor(0.125f * fConst19)) % 2;
		iConst46 = iConst44 + 8 * iConst45;
		iConst47 = int(std::floor(0.0625f * fConst19)) % 2;
		iConst48 = iConst46 + 16 * iConst47;
		iConst49 = int(std::floor(0.03125f * fConst19)) % 2;
		iConst50 = iConst48 + 32 * iConst49;
		iConst51 = int(std::floor(0.015625f * fConst19)) % 2;
		iConst52 = iConst50 + 64 * iConst51;
		iConst53 = int(std::floor(0.0078125f * fConst19)) % 2;
		iConst54 = iConst52 + 128 * iConst53;
		iConst55 = int(std::floor(0.00390625f * fConst19)) % 2;
		iConst56 = iConst54 + 256 * iConst55;
		iConst57 = int(std::floor(0.001953125f * fConst19)) % 2;
		iConst58 = iConst56 + 512 * iConst57;
		float fConst59 = 31.415926f / fConst0;
		fConst60 = 1.0f / (fConst59 + 1.0f);
		fConst61 = 1.0f - fConst59;
		float fConst62 = std::tan(1979.2034f / fConst0);
		fConst63 = 1.0f / fConst62;
		float fConst64 = fConst63 + 1.0f;
		fConst65 = 1.0f / fConst64;
		fConst66 = 1.0f - fConst63;
		fConst67 = 0.0f - 1.0f / (fConst62 * fConst64);
		float fConst68 = std::rint(0.4f * fConst0);
		fConst69 = 1.0f / std::max<float>(fConst68, 1.1920929e-07f);
		iConst70 = int(std::floor(1.5258789e-05f * fConst68)) % 2;
		iConst71 = int(std::floor(fConst68)) % 2;
		iConst72 = int(std::floor(0.5f * fConst68)) % 2;
		iConst73 = iConst71 + 2 * iConst72;
		iConst74 = int(std::floor(0.25f * fConst68)) % 2;
		iConst75 = iConst73 + 4 * iConst74;
		iConst76 = int(std::floor(0.125f * fConst68)) % 2;
		iConst77 = iConst75 + 8 * iConst76;
		iConst78 = int(std::floor(0.0625f * fConst68)) % 2;
		iConst79 = iConst77 + 16 * iConst78;
		iConst80 = int(std::floor(0.03125f * fConst68)) % 2;
		iConst81 = iConst79 + 32 * iConst80;
		iConst82 = int(std::floor(0.015625f * fConst68)) % 2;
		iConst83 = iConst81 + 64 * iConst82;
		iConst84 = int(std::floor(0.0078125f * fConst68)) % 2;
		iConst85 = iConst83 + 128 * iConst84;
		iConst86 = int(std::floor(0.00390625f * fConst68)) % 2;
		iConst87 = iConst85 + 256 * iConst86;
		iConst88 = int(std::floor(0.001953125f * fConst68)) % 2;
		iConst89 = iConst87 + 512 * iConst88;
		iConst90 = int(std::floor(0.0009765625f * fConst68)) % 2;
		iConst91 = iConst89 + 1024 * iConst90;
		iConst92 = int(std::floor(0.00048828125f * fConst68)) % 2;
		iConst93 = iConst91 + 2048 * iConst92;
		iConst94 = int(std::floor(0.00024414062f * fConst68)) % 2;
		iConst95 = iConst93 + 4096 * iConst94;
		iConst96 = int(std::floor(0.00012207031f * fConst68)) % 2;
		iConst97 = iConst95 + 8192 * iConst96;
		iConst98 = int(std::floor(6.1035156e-05f * fConst68)) % 2;
		iConst99 = iConst97 + 16384 * iConst98;
		iConst100 = int(std::floor(3.0517578e-05f * fConst68)) % 2;
		iConst101 = iConst99 + 32768 * iConst100;
		fConst102 = std::tan(21991.148f / fConst0);
		float fConst103 = 1.0f / fConst102;
		fConst104 = 1.0f / ((fConst103 + 0.5176381f) / fConst102 + 1.0f);
		float fConst105 = mydsp_faustpower2_f(fConst102);
		fConst106 = 1.0f / fConst105;
		fConst107 = 1.0f / ((fConst103 + 1.4142135f) / fConst102 + 1.0f);
		fConst108 = 1.0f / ((fConst103 + 1.9318516f) / fConst102 + 1.0f);
		fConst109 = (fConst103 + -1.9318516f) / fConst102 + 1.0f;
		fConst110 = 2.0f * (1.0f - fConst106);
		fConst111 = 0.0f - 2.0f / fConst105;
		fConst112 = (fConst103 + -1.4142135f) / fConst102 + 1.0f;
		fConst113 = (fConst103 + -0.5176381f) / fConst102 + 1.0f;
		fConst114 = 1.0f / fConst0;
		iConst115 = int(std::floor(fConst18)) % 2;
		iConst116 = int(std::floor(0.005f * fConst0)) % 2;
		iConst117 = int(std::floor(0.0025f * fConst0)) % 2;
		iConst118 = iConst115 + 2 * iConst116;
		iConst119 = int(std::floor(0.00125f * fConst0)) % 2;
		iConst120 = iConst118 + 4 * iConst117;
		iConst121 = int(std::floor(0.000625f * fConst0)) % 2;
		iConst122 = iConst120 + 8 * iConst119;
		iConst123 = int(std::floor(0.0003125f * fConst0)) % 2;
		iConst124 = iConst122 + 16 * iConst121;
		iConst125 = int(std::floor(0.00015625f * fConst0)) % 2;
		iConst126 = iConst124 + 32 * iConst123;
		iConst127 = int(std::floor(7.8125e-05f * fConst0)) % 2;
		iConst128 = iConst126 + 64 * iConst125;
		iConst129 = int(std::floor(3.90625e-05f * fConst0)) % 2;
		iConst130 = iConst128 + 128 * iConst127;
		iConst131 = int(std::floor(1.953125e-05f * fConst0)) % 2;
		iConst132 = iConst130 + 256 * iConst129;
		iConst133 = int(std::floor(9.765625e-06f * fConst0)) % 2;
		iConst134 = iConst132 + 512 * iConst131;
		iConst135 = int(std::floor(4.8828124e-06f * fConst0)) % 2;
		iConst136 = iConst134 + 1024 * iConst133;
		fConst137 = std::tan(314.15927f / fConst0);
		float fConst138 = 1.0f / fConst137;
		fConst139 = 1.0f / ((fConst138 + 0.5176381f) / fConst137 + 1.0f);
		fConst140 = 1.0f / ((fConst138 + 1.4142135f) / fConst137 + 1.0f);
		fConst141 = 1.0f / ((fConst138 + 1.9318516f) / fConst137 + 1.0f);
		fConst142 = std::tan(1294.74f / fConst0);
		float fConst143 = 1.0f / fConst142;
		fConst144 = 1.0f / ((fConst143 + 0.5176381f) / fConst142 + 1.0f);
		fConst145 = 1.0f / ((fConst143 + 1.4142135f) / fConst142 + 1.0f);
		fConst146 = 1.0f / ((fConst143 + 1.9318516f) / fConst142 + 1.0f);
		fConst147 = std::tan(5335.9927f / fConst0);
		float fConst148 = 1.0f / fConst147;
		fConst149 = 1.0f / ((fConst148 + 0.5176381f) / fConst147 + 1.0f);
		fConst150 = 1.0f / ((fConst148 + 1.4142135f) / fConst147 + 1.0f);
		fConst151 = 1.0f / ((fConst148 + 1.9318516f) / fConst147 + 1.0f);
		fConst152 = (fConst148 + -1.9318516f) / fConst147 + 1.0f;
		float fConst153 = mydsp_faustpower2_f(fConst147);
		fConst154 = 1.0f / fConst153;
		fConst155 = 2.0f * (1.0f - fConst154);
		fConst156 = (fConst148 + -1.4142135f) / fConst147 + 1.0f;
		fConst157 = (fConst148 + -0.5176381f) / fConst147 + 1.0f;
		fConst158 = (fConst143 + -1.9318516f) / fConst142 + 1.0f;
		float fConst159 = mydsp_faustpower2_f(fConst142);
		fConst160 = 1.0f / fConst159;
		fConst161 = 2.0f * (1.0f - fConst160);
		fConst162 = (fConst143 + -1.4142135f) / fConst142 + 1.0f;
		fConst163 = (fConst143 + -0.5176381f) / fConst142 + 1.0f;
		fConst164 = (fConst138 + -1.9318516f) / fConst137 + 1.0f;
		float fConst165 = mydsp_faustpower2_f(fConst137);
		fConst166 = 1.0f / fConst165;
		fConst167 = 2.0f * (1.0f - fConst166);
		fConst168 = (fConst138 + -1.4142135f) / fConst137 + 1.0f;
		fConst169 = (fConst138 + -0.5176381f) / fConst137 + 1.0f;
		fConst170 = 0.0f - 2.0f / fConst165;
		fConst171 = 0.0f - 2.0f / fConst159;
		fConst172 = 0.0f - 2.0f / fConst153;
		fConst173 = 0.1f * fConst0;
		fConst174 = std::exp(0.0f - 6.2831855f / fConst0);
		fConst175 = 1.0f - fConst174;
		iConst176 = int(0.01f * fConst0);
	}
	
	FAUSTPP_VIRTUAL void instanceResetUserInterface() {
		fVslider0 = FAUSTFLOAT(0.0f);
		fCheckbox0 = FAUSTFLOAT(0.0f);
		fCheckbox1 = FAUSTFLOAT(0.0f);
		fVslider1 = FAUSTFLOAT(-18.0f);
		fCheckbox2 = FAUSTFLOAT(0.0f);
		fCheckbox3 = FAUSTFLOAT(0.0f);
		fVslider2 = FAUSTFLOAT(0.0f);
		fVslider3 = FAUSTFLOAT(0.0f);
	}
	
	FAUSTPP_VIRTUAL void instanceClear() {
		for (int l0 = 0; l0 < 2; l0 = l0 + 1) {
			fRec2[l0] = 0.0f;
		}
		for (int l1 = 0; l1 < 2; l1 = l1 + 1) {
			fRec1[l1] = 0.0f;
		}
		for (int l2 = 0; l2 < 2; l2 = l2 + 1) {
			fVec0[l2] = 0.0f;
		}
		for (int l3 = 0; l3 < 2; l3 = l3 + 1) {
			fRec3[l3] = 0.0f;
		}
		for (int l4 = 0; l4 < 2; l4 = l4 + 1) {
			fVec1[l4] = 0.0f;
		}
		for (int l5 = 0; l5 < 3; l5 = l5 + 1) {
			fVec2[l5] = 0.0f;
		}
		for (int l6 = 0; l6 < 7; l6 = l6 + 1) {
			fVec3[l6] = 0.0f;
		}
		for (int l7 = 0; l7 < 15; l7 = l7 + 1) {
			fVec4[l7] = 0.0f;
		}
		IOTA0 = 0;
		for (int l8 = 0; l8 < 32; l8 = l8 + 1) {
			fVec5[l8] = 0.0f;
		}
		for (int l9 = 0; l9 < 2; l9 = l9 + 1) {
			fRec18[l9] = 0.0f;
		}
		for (int l10 = 0; l10 < 2; l10 = l10 + 1) {
			fVec6[l10] = 0.0f;
		}
		for (int l11 = 0; l11 < 2; l11 = l11 + 1) {
			fRec22[l11] = 0.0f;
		}
		for (int l12 = 0; l12 < 2; l12 = l12 + 1) {
			fRec21[l12] = 0.0f;
		}
		for (int l13 = 0; l13 < 2; l13 = l13 + 1) {
			fVec7[l13] = 0.0f;
		}
		for (int l14 = 0; l14 < 2; l14 = l14 + 1) {
			fRec20[l14] = 0.0f;
		}
		for (int l15 = 0; l15 < 2; l15 = l15 + 1) {
			fRec19[l15] = 0.0f;
		}
		for (int l16 = 0; l16 < 2; l16 = l16 + 1) {
			fVec8[l16] = 0.0f;
		}
		for (int l17 = 0; l17 < 3; l17 = l17 + 1) {
			fVec9[l17] = 0.0f;
		}
		for (int l18 = 0; l18 < 7; l18 = l18 + 1) {
			fVec10[l18] = 0.0f;
		}
		for (int l19 = 0; l19 < 15; l19 = l19 + 1) {
			fVec11[l19] = 0.0f;
		}
		for (int l20 = 0; l20 < 32; l20 = l20 + 1) {
			fVec12[l20] = 0.0f;
		}
		for (int l21 = 0; l21 < 64; l21 = l21 + 1) {
			fVec13[l21] = 0.0f;
		}
		for (int l22 = 0; l22 < 128; l22 = l22 + 1) {
			fVec14[l22] = 0.0f;
		}
		for (int l23 = 0; l23 < 256; l23 = l23 + 1) {
			fVec15[l23] = 0.0f;
		}
		for (int l24 = 0; l24 < 512; l24 = l24 + 1) {
			fVec16[l24] = 0.0f;
		}
		for (int l25 = 0; l25 < 1024; l25 = l25 + 1) {
			fVec17[l25] = 0.0f;
		}
		for (int l26 = 0; l26 < 2048; l26 = l26 + 1) {
			fVec18[l26] = 0.0f;
		}
		for (int l27 = 0; l27 < 2; l27 = l27 + 1) {
			fVec19[l27] = 0.0f;
		}
		for (int l28 = 0; l28 < 2; l28 = l28 + 1) {
			fRec26[l28] = 0.0f;
		}
		for (int l29 = 0; l29 < 2; l29 = l29 + 1) {
			fRec25[l29] = 0.0f;
		}
		for (int l30 = 0; l30 < 2; l30 = l30 + 1) {
			fVec20[l30] = 0.0f;
		}
		for (int l31 = 0; l31 < 2; l31 = l31 + 1) {
			fRec24[l31] = 0.0f;
		}
		for (int l32 = 0; l32 < 2; l32 = l32 + 1) {
			fRec23[l32] = 0.0f;
		}
		for (int l33 = 0; l33 < 2; l33 = l33 + 1) {
			fVec21[l33] = 0.0f;
		}
		for (int l34 = 0; l34 < 3; l34 = l34 + 1) {
			fVec22[l34] = 0.0f;
		}
		for (int l35 = 0; l35 < 7; l35 = l35 + 1) {
			fVec23[l35] = 0.0f;
		}
		for (int l36 = 0; l36 < 15; l36 = l36 + 1) {
			fVec24[l36] = 0.0f;
		}
		for (int l37 = 0; l37 < 32; l37 = l37 + 1) {
			fVec25[l37] = 0.0f;
		}
		for (int l38 = 0; l38 < 64; l38 = l38 + 1) {
			fVec26[l38] = 0.0f;
		}
		for (int l39 = 0; l39 < 128; l39 = l39 + 1) {
			fVec27[l39] = 0.0f;
		}
		for (int l40 = 0; l40 < 256; l40 = l40 + 1) {
			fVec28[l40] = 0.0f;
		}
		for (int l41 = 0; l41 < 512; l41 = l41 + 1) {
			fVec29[l41] = 0.0f;
		}
		for (int l42 = 0; l42 < 1024; l42 = l42 + 1) {
			fVec30[l42] = 0.0f;
		}
		for (int l43 = 0; l43 < 2048; l43 = l43 + 1) {
			fVec31[l43] = 0.0f;
		}
		for (int l44 = 0; l44 < 2; l44 = l44 + 1) {
			fRec13[l44] = 0.0f;
		}
		for (int l45 = 0; l45 < 2; l45 = l45 + 1) {
			fRec14[l45] = 0.0f;
		}
		for (int l46 = 0; l46 < 2; l46 = l46 + 1) {
			fRec11[l46] = 0.0f;
		}
		for (int l47 = 0; l47 < 2; l47 = l47 + 1) {
			fRec10[l47] = 0.0f;
		}
		for (int l48 = 0; l48 < 2; l48 = l48 + 1) {
			fRec27[l48] = 0.0f;
		}
		for (int l49 = 0; l49 < 2; l49 = l49 + 1) {
			fVec32[l49] = 0.0f;
		}
		for (int l50 = 0; l50 < 3; l50 = l50 + 1) {
			fVec33[l50] = 0.0f;
		}
		for (int l51 = 0; l51 < 7; l51 = l51 + 1) {
			fVec34[l51] = 0.0f;
		}
		for (int l52 = 0; l52 < 15; l52 = l52 + 1) {
			fVec35[l52] = 0.0f;
		}
		for (int l53 = 0; l53 < 32; l53 = l53 + 1) {
			fVec36[l53] = 0.0f;
		}
		for (int l54 = 0; l54 < 2; l54 = l54 + 1) {
			fRec38[l54] = 0.0f;
		}
		for (int l55 = 0; l55 < 2; l55 = l55 + 1) {
			fVec37[l55] = 0.0f;
		}
		for (int l56 = 0; l56 < 2; l56 = l56 + 1) {
			fRec42[l56] = 0.0f;
		}
		for (int l57 = 0; l57 < 2; l57 = l57 + 1) {
			fRec41[l57] = 0.0f;
		}
		for (int l58 = 0; l58 < 2; l58 = l58 + 1) {
			fVec38[l58] = 0.0f;
		}
		for (int l59 = 0; l59 < 2; l59 = l59 + 1) {
			fRec40[l59] = 0.0f;
		}
		for (int l60 = 0; l60 < 2; l60 = l60 + 1) {
			fRec39[l60] = 0.0f;
		}
		for (int l61 = 0; l61 < 2; l61 = l61 + 1) {
			fVec39[l61] = 0.0f;
		}
		for (int l62 = 0; l62 < 3; l62 = l62 + 1) {
			fVec40[l62] = 0.0f;
		}
		for (int l63 = 0; l63 < 7; l63 = l63 + 1) {
			fVec41[l63] = 0.0f;
		}
		for (int l64 = 0; l64 < 15; l64 = l64 + 1) {
			fVec42[l64] = 0.0f;
		}
		for (int l65 = 0; l65 < 32; l65 = l65 + 1) {
			fVec43[l65] = 0.0f;
		}
		for (int l66 = 0; l66 < 64; l66 = l66 + 1) {
			fVec44[l66] = 0.0f;
		}
		for (int l67 = 0; l67 < 128; l67 = l67 + 1) {
			fVec45[l67] = 0.0f;
		}
		for (int l68 = 0; l68 < 256; l68 = l68 + 1) {
			fVec46[l68] = 0.0f;
		}
		for (int l69 = 0; l69 < 512; l69 = l69 + 1) {
			fVec47[l69] = 0.0f;
		}
		for (int l70 = 0; l70 < 1024; l70 = l70 + 1) {
			fVec48[l70] = 0.0f;
		}
		for (int l71 = 0; l71 < 2048; l71 = l71 + 1) {
			fVec49[l71] = 0.0f;
		}
		for (int l72 = 0; l72 < 2; l72 = l72 + 1) {
			fVec50[l72] = 0.0f;
		}
		for (int l73 = 0; l73 < 2; l73 = l73 + 1) {
			fRec46[l73] = 0.0f;
		}
		for (int l74 = 0; l74 < 2; l74 = l74 + 1) {
			fRec45[l74] = 0.0f;
		}
		for (int l75 = 0; l75 < 2; l75 = l75 + 1) {
			fVec51[l75] = 0.0f;
		}
		for (int l76 = 0; l76 < 2; l76 = l76 + 1) {
			fRec44[l76] = 0.0f;
		}
		for (int l77 = 0; l77 < 2; l77 = l77 + 1) {
			fRec43[l77] = 0.0f;
		}
		for (int l78 = 0; l78 < 2; l78 = l78 + 1) {
			fVec52[l78] = 0.0f;
		}
		for (int l79 = 0; l79 < 3; l79 = l79 + 1) {
			fVec53[l79] = 0.0f;
		}
		for (int l80 = 0; l80 < 7; l80 = l80 + 1) {
			fVec54[l80] = 0.0f;
		}
		for (int l81 = 0; l81 < 15; l81 = l81 + 1) {
			fVec55[l81] = 0.0f;
		}
		for (int l82 = 0; l82 < 32; l82 = l82 + 1) {
			fVec56[l82] = 0.0f;
		}
		for (int l83 = 0; l83 < 64; l83 = l83 + 1) {
			fVec57[l83] = 0.0f;
		}
		for (int l84 = 0; l84 < 128; l84 = l84 + 1) {
			fVec58[l84] = 0.0f;
		}
		for (int l85 = 0; l85 < 256; l85 = l85 + 1) {
			fVec59[l85] = 0.0f;
		}
		for (int l86 = 0; l86 < 512; l86 = l86 + 1) {
			fVec60[l86] = 0.0f;
		}
		for (int l87 = 0; l87 < 1024; l87 = l87 + 1) {
			fVec61[l87] = 0.0f;
		}
		for (int l88 = 0; l88 < 2048; l88 = l88 + 1) {
			fVec62[l88] = 0.0f;
		}
		for (int l89 = 0; l89 < 2; l89 = l89 + 1) {
			fRec33[l89] = 0.0f;
		}
		for (int l90 = 0; l90 < 2; l90 = l90 + 1) {
			fRec34[l90] = 0.0f;
		}
		for (int l91 = 0; l91 < 2; l91 = l91 + 1) {
			fRec31[l91] = 0.0f;
		}
		for (int l92 = 0; l92 < 2; l92 = l92 + 1) {
			fRec30[l92] = 0.0f;
		}
		for (int l93 = 0; l93 < 2; l93 = l93 + 1) {
			fRec47[l93] = 0.0f;
		}
		for (int l94 = 0; l94 < 2; l94 = l94 + 1) {
			fRec48[l94] = 0.0f;
		}
		for (int l95 = 0; l95 < 2; l95 = l95 + 1) {
			fRec50[l95] = 0.0f;
		}
		for (int l96 = 0; l96 < 2; l96 = l96 + 1) {
			fRec51[l96] = 0.0f;
		}
		for (int l97 = 0; l97 < 2; l97 = l97 + 1) {
			fRec52[l97] = 0.0f;
		}
		for (int l98 = 0; l98 < 2; l98 = l98 + 1) {
			fVec63[l98] = 0.0f;
		}
		for (int l99 = 0; l99 < 2; l99 = l99 + 1) {
			fRec49[l99] = 0.0f;
		}
		for (int l100 = 0; l100 < 2; l100 = l100 + 1) {
			fRec53[l100] = 0.0f;
		}
		for (int l101 = 0; l101 < 3; l101 = l101 + 1) {
			fRec28[l101] = 0.0f;
		}
		for (int l102 = 0; l102 < 2; l102 = l102 + 1) {
			fVec64[l102] = 0.0f;
		}
		for (int l103 = 0; l103 < 2; l103 = l103 + 1) {
			fRec58[l103] = 0.0f;
		}
		for (int l104 = 0; l104 < 2; l104 = l104 + 1) {
			fRec57[l104] = 0.0f;
		}
		for (int l105 = 0; l105 < 2; l105 = l105 + 1) {
			fVec65[l105] = 0.0f;
		}
		for (int l106 = 0; l106 < 2; l106 = l106 + 1) {
			fRec56[l106] = 0.0f;
		}
		for (int l107 = 0; l107 < 2; l107 = l107 + 1) {
			fRec55[l107] = 0.0f;
		}
		for (int l108 = 0; l108 < 2; l108 = l108 + 1) {
			fVec66[l108] = 0.0f;
		}
		for (int l109 = 0; l109 < 3; l109 = l109 + 1) {
			fVec67[l109] = 0.0f;
		}
		for (int l110 = 0; l110 < 7; l110 = l110 + 1) {
			fVec68[l110] = 0.0f;
		}
		for (int l111 = 0; l111 < 15; l111 = l111 + 1) {
			fVec69[l111] = 0.0f;
		}
		for (int l112 = 0; l112 < 32; l112 = l112 + 1) {
			fVec70[l112] = 0.0f;
		}
		for (int l113 = 0; l113 < 64; l113 = l113 + 1) {
			fVec71[l113] = 0.0f;
		}
		for (int l114 = 0; l114 < 128; l114 = l114 + 1) {
			fVec72[l114] = 0.0f;
		}
		for (int l115 = 0; l115 < 256; l115 = l115 + 1) {
			fVec73[l115] = 0.0f;
		}
		for (int l116 = 0; l116 < 512; l116 = l116 + 1) {
			fVec74[l116] = 0.0f;
		}
		for (int l117 = 0; l117 < 1024; l117 = l117 + 1) {
			fVec75[l117] = 0.0f;
		}
		for (int l118 = 0; l118 < 2048; l118 = l118 + 1) {
			fVec76[l118] = 0.0f;
		}
		for (int l119 = 0; l119 < 4096; l119 = l119 + 1) {
			fVec77[l119] = 0.0f;
		}
		for (int l120 = 0; l120 < 8192; l120 = l120 + 1) {
			fVec78[l120] = 0.0f;
		}
		for (int l121 = 0; l121 < 16384; l121 = l121 + 1) {
			fVec79[l121] = 0.0f;
		}
		for (int l122 = 0; l122 < 32768; l122 = l122 + 1) {
			fVec80[l122] = 0.0f;
		}
		for (int l123 = 0; l123 < 65536; l123 = l123 + 1) {
			fVec81[l123] = 0.0f;
		}
		for (int l124 = 0; l124 < 131072; l124 = l124 + 1) {
			fVec82[l124] = 0.0f;
		}
		for (int l125 = 0; l125 < 2; l125 = l125 + 1) {
			fRec63[l125] = 0.0f;
		}
		for (int l126 = 0; l126 < 2; l126 = l126 + 1) {
			fVec83[l126] = 0.0f;
		}
		for (int l127 = 0; l127 < 2; l127 = l127 + 1) {
			fVec84[l127] = 0.0f;
		}
		for (int l128 = 0; l128 < 2; l128 = l128 + 1) {
			fRec62[l128] = 0.0f;
		}
		for (int l129 = 0; l129 < 2; l129 = l129 + 1) {
			fRec61[l129] = 0.0f;
		}
		for (int l130 = 0; l130 < 2; l130 = l130 + 1) {
			fVec85[l130] = 0.0f;
		}
		for (int l131 = 0; l131 < 2; l131 = l131 + 1) {
			fRec60[l131] = 0.0f;
		}
		for (int l132 = 0; l132 < 2; l132 = l132 + 1) {
			fRec59[l132] = 0.0f;
		}
		for (int l133 = 0; l133 < 2; l133 = l133 + 1) {
			fVec86[l133] = 0.0f;
		}
		for (int l134 = 0; l134 < 3; l134 = l134 + 1) {
			fVec87[l134] = 0.0f;
		}
		for (int l135 = 0; l135 < 7; l135 = l135 + 1) {
			fVec88[l135] = 0.0f;
		}
		for (int l136 = 0; l136 < 15; l136 = l136 + 1) {
			fVec89[l136] = 0.0f;
		}
		for (int l137 = 0; l137 < 32; l137 = l137 + 1) {
			fVec90[l137] = 0.0f;
		}
		for (int l138 = 0; l138 < 64; l138 = l138 + 1) {
			fVec91[l138] = 0.0f;
		}
		for (int l139 = 0; l139 < 128; l139 = l139 + 1) {
			fVec92[l139] = 0.0f;
		}
		for (int l140 = 0; l140 < 256; l140 = l140 + 1) {
			fVec93[l140] = 0.0f;
		}
		for (int l141 = 0; l141 < 512; l141 = l141 + 1) {
			fVec94[l141] = 0.0f;
		}
		for (int l142 = 0; l142 < 1024; l142 = l142 + 1) {
			fVec95[l142] = 0.0f;
		}
		for (int l143 = 0; l143 < 2048; l143 = l143 + 1) {
			fVec96[l143] = 0.0f;
		}
		for (int l144 = 0; l144 < 4096; l144 = l144 + 1) {
			fVec97[l144] = 0.0f;
		}
		for (int l145 = 0; l145 < 8192; l145 = l145 + 1) {
			fVec98[l145] = 0.0f;
		}
		for (int l146 = 0; l146 < 16384; l146 = l146 + 1) {
			fVec99[l146] = 0.0f;
		}
		for (int l147 = 0; l147 < 32768; l147 = l147 + 1) {
			fVec100[l147] = 0.0f;
		}
		for (int l148 = 0; l148 < 65536; l148 = l148 + 1) {
			fVec101[l148] = 0.0f;
		}
		for (int l149 = 0; l149 < 131072; l149 = l149 + 1) {
			fVec102[l149] = 0.0f;
		}
		for (int l150 = 0; l150 < 2; l150 = l150 + 1) {
			fVec103[l150] = 0.0f;
		}
		for (int l151 = 0; l151 < 2; l151 = l151 + 1) {
			fRec54[l151] = 0.0f;
		}
		for (int l152 = 0; l152 < 2; l152 = l152 + 1) {
			fRec65[l152] = 0.0f;
		}
		for (int l153 = 0; l153 < 2; l153 = l153 + 1) {
			fRec66[l153] = 0.0f;
		}
		for (int l154 = 0; l154 < 2; l154 = l154 + 1) {
			fVec104[l154] = 0.0f;
		}
		for (int l155 = 0; l155 < 2; l155 = l155 + 1) {
			fRec64[l155] = 0.0f;
		}
		for (int l156 = 0; l156 < 2; l156 = l156 + 1) {
			fRec67[l156] = 0.0f;
		}
		for (int l157 = 0; l157 < 3; l157 = l157 + 1) {
			fRec29[l157] = 0.0f;
		}
		for (int l158 = 0; l158 < 3; l158 = l158 + 1) {
			fRec71[l158] = 0.0f;
		}
		for (int l159 = 0; l159 < 3; l159 = l159 + 1) {
			fRec70[l159] = 0.0f;
		}
		for (int l160 = 0; l160 < 3; l160 = l160 + 1) {
			fRec69[l160] = 0.0f;
		}
		for (int l161 = 0; l161 < 2; l161 = l161 + 1) {
			fVec105[l161] = 0.0f;
		}
		for (int l162 = 0; l162 < 2; l162 = l162 + 1) {
			fRec68[l162] = 0.0f;
		}
		for (int l163 = 0; l163 < 3; l163 = l163 + 1) {
			fRec75[l163] = 0.0f;
		}
		for (int l164 = 0; l164 < 3; l164 = l164 + 1) {
			fRec74[l164] = 0.0f;
		}
		for (int l165 = 0; l165 < 3; l165 = l165 + 1) {
			fRec73[l165] = 0.0f;
		}
		for (int l166 = 0; l166 < 2; l166 = l166 + 1) {
			fVec106[l166] = 0.0f;
		}
		for (int l167 = 0; l167 < 2; l167 = l167 + 1) {
			fRec72[l167] = 0.0f;
		}
		for (int l168 = 0; l168 < 3; l168 = l168 + 1) {
			fVec107[l168] = 0.0f;
		}
		for (int l169 = 0; l169 < 7; l169 = l169 + 1) {
			fVec108[l169] = 0.0f;
		}
		for (int l170 = 0; l170 < 15; l170 = l170 + 1) {
			fVec109[l170] = 0.0f;
		}
		for (int l171 = 0; l171 < 32; l171 = l171 + 1) {
			fVec110[l171] = 0.0f;
		}
		for (int l172 = 0; l172 < 64; l172 = l172 + 1) {
			fVec111[l172] = 0.0f;
		}
		for (int l173 = 0; l173 < 128; l173 = l173 + 1) {
			fVec112[l173] = 0.0f;
		}
		for (int l174 = 0; l174 < 256; l174 = l174 + 1) {
			fVec113[l174] = 0.0f;
		}
		for (int l175 = 0; l175 < 512; l175 = l175 + 1) {
			fVec114[l175] = 0.0f;
		}
		for (int l176 = 0; l176 < 1024; l176 = l176 + 1) {
			fVec115[l176] = 0.0f;
		}
		for (int l177 = 0; l177 < 2048; l177 = l177 + 1) {
			fVec116[l177] = 0.0f;
		}
		for (int l178 = 0; l178 < 4096; l178 = l178 + 1) {
			fVec117[l178] = 0.0f;
		}
		for (int l179 = 0; l179 < 2; l179 = l179 + 1) {
			fRec76[l179] = 0.0f;
		}
		for (int l180 = 0; l180 < 3; l180 = l180 + 1) {
			fVec118[l180] = 0.0f;
		}
		for (int l181 = 0; l181 < 7; l181 = l181 + 1) {
			fVec119[l181] = 0.0f;
		}
		for (int l182 = 0; l182 < 15; l182 = l182 + 1) {
			fVec120[l182] = 0.0f;
		}
		for (int l183 = 0; l183 < 32; l183 = l183 + 1) {
			fVec121[l183] = 0.0f;
		}
		for (int l184 = 0; l184 < 64; l184 = l184 + 1) {
			fVec122[l184] = 0.0f;
		}
		for (int l185 = 0; l185 < 128; l185 = l185 + 1) {
			fVec123[l185] = 0.0f;
		}
		for (int l186 = 0; l186 < 256; l186 = l186 + 1) {
			fVec124[l186] = 0.0f;
		}
		for (int l187 = 0; l187 < 512; l187 = l187 + 1) {
			fVec125[l187] = 0.0f;
		}
		for (int l188 = 0; l188 < 1024; l188 = l188 + 1) {
			fVec126[l188] = 0.0f;
		}
		for (int l189 = 0; l189 < 2048; l189 = l189 + 1) {
			fVec127[l189] = 0.0f;
		}
		for (int l190 = 0; l190 < 4096; l190 = l190 + 1) {
			fVec128[l190] = 0.0f;
		}
		for (int l191 = 0; l191 < 2; l191 = l191 + 1) {
			fRec77[l191] = 0.0f;
		}
		for (int l192 = 0; l192 < 3; l192 = l192 + 1) {
			fRec93[l192] = 0.0f;
		}
		for (int l193 = 0; l193 < 3; l193 = l193 + 1) {
			fRec92[l193] = 0.0f;
		}
		for (int l194 = 0; l194 < 3; l194 = l194 + 1) {
			fRec91[l194] = 0.0f;
		}
		for (int l195 = 0; l195 < 3; l195 = l195 + 1) {
			fRec90[l195] = 0.0f;
		}
		for (int l196 = 0; l196 < 3; l196 = l196 + 1) {
			fRec89[l196] = 0.0f;
		}
		for (int l197 = 0; l197 < 3; l197 = l197 + 1) {
			fRec88[l197] = 0.0f;
		}
		for (int l198 = 0; l198 < 3; l198 = l198 + 1) {
			fRec87[l198] = 0.0f;
		}
		for (int l199 = 0; l199 < 3; l199 = l199 + 1) {
			fRec86[l199] = 0.0f;
		}
		for (int l200 = 0; l200 < 3; l200 = l200 + 1) {
			fRec85[l200] = 0.0f;
		}
		for (int l201 = 0; l201 < 3; l201 = l201 + 1) {
			fRec84[l201] = 0.0f;
		}
		for (int l202 = 0; l202 < 3; l202 = l202 + 1) {
			fRec83[l202] = 0.0f;
		}
		for (int l203 = 0; l203 < 2; l203 = l203 + 1) {
			fVec129[l203] = 0.0f;
		}
		for (int l204 = 0; l204 < 2; l204 = l204 + 1) {
			fRec82[l204] = 0.0f;
		}
		for (int l205 = 0; l205 < 3; l205 = l205 + 1) {
			fRec105[l205] = 0.0f;
		}
		for (int l206 = 0; l206 < 3; l206 = l206 + 1) {
			fRec104[l206] = 0.0f;
		}
		for (int l207 = 0; l207 < 3; l207 = l207 + 1) {
			fRec103[l207] = 0.0f;
		}
		for (int l208 = 0; l208 < 3; l208 = l208 + 1) {
			fRec102[l208] = 0.0f;
		}
		for (int l209 = 0; l209 < 3; l209 = l209 + 1) {
			fRec101[l209] = 0.0f;
		}
		for (int l210 = 0; l210 < 3; l210 = l210 + 1) {
			fRec100[l210] = 0.0f;
		}
		for (int l211 = 0; l211 < 3; l211 = l211 + 1) {
			fRec99[l211] = 0.0f;
		}
		for (int l212 = 0; l212 < 3; l212 = l212 + 1) {
			fRec98[l212] = 0.0f;
		}
		for (int l213 = 0; l213 < 3; l213 = l213 + 1) {
			fRec97[l213] = 0.0f;
		}
		for (int l214 = 0; l214 < 3; l214 = l214 + 1) {
			fRec96[l214] = 0.0f;
		}
		for (int l215 = 0; l215 < 3; l215 = l215 + 1) {
			fRec95[l215] = 0.0f;
		}
		for (int l216 = 0; l216 < 2; l216 = l216 + 1) {
			fVec130[l216] = 0.0f;
		}
		for (int l217 = 0; l217 < 2; l217 = l217 + 1) {
			fRec94[l217] = 0.0f;
		}
		for (int l218 = 0; l218 < 3; l218 = l218 + 1) {
			fVec131[l218] = 0.0f;
		}
		for (int l219 = 0; l219 < 7; l219 = l219 + 1) {
			fVec132[l219] = 0.0f;
		}
		for (int l220 = 0; l220 < 15; l220 = l220 + 1) {
			fVec133[l220] = 0.0f;
		}
		for (int l221 = 0; l221 < 32; l221 = l221 + 1) {
			fVec134[l221] = 0.0f;
		}
		for (int l222 = 0; l222 < 64; l222 = l222 + 1) {
			fVec135[l222] = 0.0f;
		}
		for (int l223 = 0; l223 < 128; l223 = l223 + 1) {
			fVec136[l223] = 0.0f;
		}
		for (int l224 = 0; l224 < 256; l224 = l224 + 1) {
			fVec137[l224] = 0.0f;
		}
		for (int l225 = 0; l225 < 512; l225 = l225 + 1) {
			fVec138[l225] = 0.0f;
		}
		for (int l226 = 0; l226 < 1024; l226 = l226 + 1) {
			fVec139[l226] = 0.0f;
		}
		for (int l227 = 0; l227 < 2048; l227 = l227 + 1) {
			fVec140[l227] = 0.0f;
		}
		for (int l228 = 0; l228 < 4096; l228 = l228 + 1) {
			fVec141[l228] = 0.0f;
		}
		for (int l229 = 0; l229 < 2; l229 = l229 + 1) {
			fRec106[l229] = 0.0f;
		}
		for (int l230 = 0; l230 < 3; l230 = l230 + 1) {
			fVec142[l230] = 0.0f;
		}
		for (int l231 = 0; l231 < 7; l231 = l231 + 1) {
			fVec143[l231] = 0.0f;
		}
		for (int l232 = 0; l232 < 15; l232 = l232 + 1) {
			fVec144[l232] = 0.0f;
		}
		for (int l233 = 0; l233 < 32; l233 = l233 + 1) {
			fVec145[l233] = 0.0f;
		}
		for (int l234 = 0; l234 < 64; l234 = l234 + 1) {
			fVec146[l234] = 0.0f;
		}
		for (int l235 = 0; l235 < 128; l235 = l235 + 1) {
			fVec147[l235] = 0.0f;
		}
		for (int l236 = 0; l236 < 256; l236 = l236 + 1) {
			fVec148[l236] = 0.0f;
		}
		for (int l237 = 0; l237 < 512; l237 = l237 + 1) {
			fVec149[l237] = 0.0f;
		}
		for (int l238 = 0; l238 < 1024; l238 = l238 + 1) {
			fVec150[l238] = 0.0f;
		}
		for (int l239 = 0; l239 < 2048; l239 = l239 + 1) {
			fVec151[l239] = 0.0f;
		}
		for (int l240 = 0; l240 < 4096; l240 = l240 + 1) {
			fVec152[l240] = 0.0f;
		}
		for (int l241 = 0; l241 < 2; l241 = l241 + 1) {
			fRec107[l241] = 0.0f;
		}
		for (int l242 = 0; l242 < 2; l242 = l242 + 1) {
			fRec78[l242] = 0.0f;
		}
		for (int l243 = 0; l243 < 2; l243 = l243 + 1) {
			fRec79[l243] = 0.0f;
		}
		for (int l244 = 0; l244 < 3; l244 = l244 + 1) {
			fRec114[l244] = 0.0f;
		}
		for (int l245 = 0; l245 < 3; l245 = l245 + 1) {
			fRec113[l245] = 0.0f;
		}
		for (int l246 = 0; l246 < 2; l246 = l246 + 1) {
			fVec153[l246] = 0.0f;
		}
		for (int l247 = 0; l247 < 2; l247 = l247 + 1) {
			fRec112[l247] = 0.0f;
		}
		for (int l248 = 0; l248 < 3; l248 = l248 + 1) {
			fRec117[l248] = 0.0f;
		}
		for (int l249 = 0; l249 < 3; l249 = l249 + 1) {
			fRec116[l249] = 0.0f;
		}
		for (int l250 = 0; l250 < 2; l250 = l250 + 1) {
			fVec154[l250] = 0.0f;
		}
		for (int l251 = 0; l251 < 2; l251 = l251 + 1) {
			fRec115[l251] = 0.0f;
		}
		for (int l252 = 0; l252 < 3; l252 = l252 + 1) {
			fVec155[l252] = 0.0f;
		}
		for (int l253 = 0; l253 < 7; l253 = l253 + 1) {
			fVec156[l253] = 0.0f;
		}
		for (int l254 = 0; l254 < 15; l254 = l254 + 1) {
			fVec157[l254] = 0.0f;
		}
		for (int l255 = 0; l255 < 32; l255 = l255 + 1) {
			fVec158[l255] = 0.0f;
		}
		for (int l256 = 0; l256 < 64; l256 = l256 + 1) {
			fVec159[l256] = 0.0f;
		}
		for (int l257 = 0; l257 < 128; l257 = l257 + 1) {
			fVec160[l257] = 0.0f;
		}
		for (int l258 = 0; l258 < 256; l258 = l258 + 1) {
			fVec161[l258] = 0.0f;
		}
		for (int l259 = 0; l259 < 512; l259 = l259 + 1) {
			fVec162[l259] = 0.0f;
		}
		for (int l260 = 0; l260 < 1024; l260 = l260 + 1) {
			fVec163[l260] = 0.0f;
		}
		for (int l261 = 0; l261 < 2048; l261 = l261 + 1) {
			fVec164[l261] = 0.0f;
		}
		for (int l262 = 0; l262 < 4096; l262 = l262 + 1) {
			fVec165[l262] = 0.0f;
		}
		for (int l263 = 0; l263 < 2; l263 = l263 + 1) {
			fRec118[l263] = 0.0f;
		}
		for (int l264 = 0; l264 < 3; l264 = l264 + 1) {
			fVec166[l264] = 0.0f;
		}
		for (int l265 = 0; l265 < 7; l265 = l265 + 1) {
			fVec167[l265] = 0.0f;
		}
		for (int l266 = 0; l266 < 15; l266 = l266 + 1) {
			fVec168[l266] = 0.0f;
		}
		for (int l267 = 0; l267 < 32; l267 = l267 + 1) {
			fVec169[l267] = 0.0f;
		}
		for (int l268 = 0; l268 < 64; l268 = l268 + 1) {
			fVec170[l268] = 0.0f;
		}
		for (int l269 = 0; l269 < 128; l269 = l269 + 1) {
			fVec171[l269] = 0.0f;
		}
		for (int l270 = 0; l270 < 256; l270 = l270 + 1) {
			fVec172[l270] = 0.0f;
		}
		for (int l271 = 0; l271 < 512; l271 = l271 + 1) {
			fVec173[l271] = 0.0f;
		}
		for (int l272 = 0; l272 < 1024; l272 = l272 + 1) {
			fVec174[l272] = 0.0f;
		}
		for (int l273 = 0; l273 < 2048; l273 = l273 + 1) {
			fVec175[l273] = 0.0f;
		}
		for (int l274 = 0; l274 < 4096; l274 = l274 + 1) {
			fVec176[l274] = 0.0f;
		}
		for (int l275 = 0; l275 < 2; l275 = l275 + 1) {
			fRec119[l275] = 0.0f;
		}
		for (int l276 = 0; l276 < 2; l276 = l276 + 1) {
			fRec108[l276] = 0.0f;
		}
		for (int l277 = 0; l277 < 2; l277 = l277 + 1) {
			fRec109[l277] = 0.0f;
		}
		for (int l278 = 0; l278 < 2; l278 = l278 + 1) {
			fRec120[l278] = 0.0f;
		}
		for (int l279 = 0; l279 < 2; l279 = l279 + 1) {
			fRec121[l279] = 0.0f;
		}
		for (int l280 = 0; l280 < 3; l280 = l280 + 1) {
			fRec130[l280] = 0.0f;
		}
		for (int l281 = 0; l281 < 3; l281 = l281 + 1) {
			fRec129[l281] = 0.0f;
		}
		for (int l282 = 0; l282 < 2; l282 = l282 + 1) {
			fVec177[l282] = 0.0f;
		}
		for (int l283 = 0; l283 < 2; l283 = l283 + 1) {
			fRec128[l283] = 0.0f;
		}
		for (int l284 = 0; l284 < 3; l284 = l284 + 1) {
			fRec133[l284] = 0.0f;
		}
		for (int l285 = 0; l285 < 3; l285 = l285 + 1) {
			fRec132[l285] = 0.0f;
		}
		for (int l286 = 0; l286 < 2; l286 = l286 + 1) {
			fVec178[l286] = 0.0f;
		}
		for (int l287 = 0; l287 < 2; l287 = l287 + 1) {
			fRec131[l287] = 0.0f;
		}
		for (int l288 = 0; l288 < 3; l288 = l288 + 1) {
			fVec179[l288] = 0.0f;
		}
		for (int l289 = 0; l289 < 7; l289 = l289 + 1) {
			fVec180[l289] = 0.0f;
		}
		for (int l290 = 0; l290 < 15; l290 = l290 + 1) {
			fVec181[l290] = 0.0f;
		}
		for (int l291 = 0; l291 < 32; l291 = l291 + 1) {
			fVec182[l291] = 0.0f;
		}
		for (int l292 = 0; l292 < 64; l292 = l292 + 1) {
			fVec183[l292] = 0.0f;
		}
		for (int l293 = 0; l293 < 128; l293 = l293 + 1) {
			fVec184[l293] = 0.0f;
		}
		for (int l294 = 0; l294 < 256; l294 = l294 + 1) {
			fVec185[l294] = 0.0f;
		}
		for (int l295 = 0; l295 < 512; l295 = l295 + 1) {
			fVec186[l295] = 0.0f;
		}
		for (int l296 = 0; l296 < 1024; l296 = l296 + 1) {
			fVec187[l296] = 0.0f;
		}
		for (int l297 = 0; l297 < 2048; l297 = l297 + 1) {
			fVec188[l297] = 0.0f;
		}
		for (int l298 = 0; l298 < 4096; l298 = l298 + 1) {
			fVec189[l298] = 0.0f;
		}
		for (int l299 = 0; l299 < 2; l299 = l299 + 1) {
			fRec134[l299] = 0.0f;
		}
		for (int l300 = 0; l300 < 3; l300 = l300 + 1) {
			fVec190[l300] = 0.0f;
		}
		for (int l301 = 0; l301 < 7; l301 = l301 + 1) {
			fVec191[l301] = 0.0f;
		}
		for (int l302 = 0; l302 < 15; l302 = l302 + 1) {
			fVec192[l302] = 0.0f;
		}
		for (int l303 = 0; l303 < 32; l303 = l303 + 1) {
			fVec193[l303] = 0.0f;
		}
		for (int l304 = 0; l304 < 64; l304 = l304 + 1) {
			fVec194[l304] = 0.0f;
		}
		for (int l305 = 0; l305 < 128; l305 = l305 + 1) {
			fVec195[l305] = 0.0f;
		}
		for (int l306 = 0; l306 < 256; l306 = l306 + 1) {
			fVec196[l306] = 0.0f;
		}
		for (int l307 = 0; l307 < 512; l307 = l307 + 1) {
			fVec197[l307] = 0.0f;
		}
		for (int l308 = 0; l308 < 1024; l308 = l308 + 1) {
			fVec198[l308] = 0.0f;
		}
		for (int l309 = 0; l309 < 2048; l309 = l309 + 1) {
			fVec199[l309] = 0.0f;
		}
		for (int l310 = 0; l310 < 4096; l310 = l310 + 1) {
			fVec200[l310] = 0.0f;
		}
		for (int l311 = 0; l311 < 2; l311 = l311 + 1) {
			fRec135[l311] = 0.0f;
		}
		for (int l312 = 0; l312 < 2; l312 = l312 + 1) {
			fRec124[l312] = 0.0f;
		}
		for (int l313 = 0; l313 < 2; l313 = l313 + 1) {
			fRec125[l313] = 0.0f;
		}
		for (int l314 = 0; l314 < 2; l314 = l314 + 1) {
			fRec136[l314] = 0.0f;
		}
		for (int l315 = 0; l315 < 2; l315 = l315 + 1) {
			fRec137[l315] = 0.0f;
		}
		for (int l316 = 0; l316 < 3; l316 = l316 + 1) {
			fRec146[l316] = 0.0f;
		}
		for (int l317 = 0; l317 < 3; l317 = l317 + 1) {
			fRec145[l317] = 0.0f;
		}
		for (int l318 = 0; l318 < 2; l318 = l318 + 1) {
			fVec201[l318] = 0.0f;
		}
		for (int l319 = 0; l319 < 2; l319 = l319 + 1) {
			fRec144[l319] = 0.0f;
		}
		for (int l320 = 0; l320 < 3; l320 = l320 + 1) {
			fRec149[l320] = 0.0f;
		}
		for (int l321 = 0; l321 < 3; l321 = l321 + 1) {
			fRec148[l321] = 0.0f;
		}
		for (int l322 = 0; l322 < 2; l322 = l322 + 1) {
			fVec202[l322] = 0.0f;
		}
		for (int l323 = 0; l323 < 2; l323 = l323 + 1) {
			fRec147[l323] = 0.0f;
		}
		for (int l324 = 0; l324 < 3; l324 = l324 + 1) {
			fVec203[l324] = 0.0f;
		}
		for (int l325 = 0; l325 < 7; l325 = l325 + 1) {
			fVec204[l325] = 0.0f;
		}
		for (int l326 = 0; l326 < 15; l326 = l326 + 1) {
			fVec205[l326] = 0.0f;
		}
		for (int l327 = 0; l327 < 32; l327 = l327 + 1) {
			fVec206[l327] = 0.0f;
		}
		for (int l328 = 0; l328 < 64; l328 = l328 + 1) {
			fVec207[l328] = 0.0f;
		}
		for (int l329 = 0; l329 < 128; l329 = l329 + 1) {
			fVec208[l329] = 0.0f;
		}
		for (int l330 = 0; l330 < 256; l330 = l330 + 1) {
			fVec209[l330] = 0.0f;
		}
		for (int l331 = 0; l331 < 512; l331 = l331 + 1) {
			fVec210[l331] = 0.0f;
		}
		for (int l332 = 0; l332 < 1024; l332 = l332 + 1) {
			fVec211[l332] = 0.0f;
		}
		for (int l333 = 0; l333 < 2048; l333 = l333 + 1) {
			fVec212[l333] = 0.0f;
		}
		for (int l334 = 0; l334 < 4096; l334 = l334 + 1) {
			fVec213[l334] = 0.0f;
		}
		for (int l335 = 0; l335 < 2; l335 = l335 + 1) {
			fRec150[l335] = 0.0f;
		}
		for (int l336 = 0; l336 < 3; l336 = l336 + 1) {
			fVec214[l336] = 0.0f;
		}
		for (int l337 = 0; l337 < 7; l337 = l337 + 1) {
			fVec215[l337] = 0.0f;
		}
		for (int l338 = 0; l338 < 15; l338 = l338 + 1) {
			fVec216[l338] = 0.0f;
		}
		for (int l339 = 0; l339 < 32; l339 = l339 + 1) {
			fVec217[l339] = 0.0f;
		}
		for (int l340 = 0; l340 < 64; l340 = l340 + 1) {
			fVec218[l340] = 0.0f;
		}
		for (int l341 = 0; l341 < 128; l341 = l341 + 1) {
			fVec219[l341] = 0.0f;
		}
		for (int l342 = 0; l342 < 256; l342 = l342 + 1) {
			fVec220[l342] = 0.0f;
		}
		for (int l343 = 0; l343 < 512; l343 = l343 + 1) {
			fVec221[l343] = 0.0f;
		}
		for (int l344 = 0; l344 < 1024; l344 = l344 + 1) {
			fVec222[l344] = 0.0f;
		}
		for (int l345 = 0; l345 < 2048; l345 = l345 + 1) {
			fVec223[l345] = 0.0f;
		}
		for (int l346 = 0; l346 < 4096; l346 = l346 + 1) {
			fVec224[l346] = 0.0f;
		}
		for (int l347 = 0; l347 < 2; l347 = l347 + 1) {
			fRec151[l347] = 0.0f;
		}
		for (int l348 = 0; l348 < 2; l348 = l348 + 1) {
			fRec140[l348] = 0.0f;
		}
		for (int l349 = 0; l349 < 2; l349 = l349 + 1) {
			fRec141[l349] = 0.0f;
		}
		for (int l350 = 0; l350 < 2; l350 = l350 + 1) {
			fRec152[l350] = 0.0f;
		}
		for (int l351 = 0; l351 < 2; l351 = l351 + 1) {
			fRec153[l351] = 0.0f;
		}
		for (int l352 = 0; l352 < 2; l352 = l352 + 1) {
			fRec156[l352] = 0.0f;
		}
		for (int l353 = 0; l353 < 2; l353 = l353 + 1) {
			fRec157[l353] = 0.0f;
		}
		for (int l354 = 0; l354 < 3; l354 = l354 + 1) {
			fRec8[l354] = 0.0f;
		}
		for (int l355 = 0; l355 < 2; l355 = l355 + 1) {
			fRec160[l355] = 0.0f;
		}
		for (int l356 = 0; l356 < 2; l356 = l356 + 1) {
			fRec161[l356] = 0.0f;
		}
		for (int l357 = 0; l357 < 2; l357 = l357 + 1) {
			fRec164[l357] = 0.0f;
		}
		for (int l358 = 0; l358 < 2; l358 = l358 + 1) {
			fRec165[l358] = 0.0f;
		}
		for (int l359 = 0; l359 < 2; l359 = l359 + 1) {
			fRec168[l359] = 0.0f;
		}
		for (int l360 = 0; l360 < 2; l360 = l360 + 1) {
			fRec169[l360] = 0.0f;
		}
		for (int l361 = 0; l361 < 2; l361 = l361 + 1) {
			fRec172[l361] = 0.0f;
		}
		for (int l362 = 0; l362 < 2; l362 = l362 + 1) {
			fRec173[l362] = 0.0f;
		}
		for (int l363 = 0; l363 < 2; l363 = l363 + 1) {
			fRec176[l363] = 0.0f;
		}
		for (int l364 = 0; l364 < 2; l364 = l364 + 1) {
			fRec177[l364] = 0.0f;
		}
		for (int l365 = 0; l365 < 2; l365 = l365 + 1) {
			fRec180[l365] = 0.0f;
		}
		for (int l366 = 0; l366 < 2; l366 = l366 + 1) {
			fRec181[l366] = 0.0f;
		}
		for (int l367 = 0; l367 < 2; l367 = l367 + 1) {
			fRec184[l367] = 0.0f;
		}
		for (int l368 = 0; l368 < 2; l368 = l368 + 1) {
			fRec185[l368] = 0.0f;
		}
		for (int l369 = 0; l369 < 2; l369 = l369 + 1) {
			fRec188[l369] = 0.0f;
		}
		for (int l370 = 0; l370 < 2; l370 = l370 + 1) {
			fRec189[l370] = 0.0f;
		}
		for (int l371 = 0; l371 < 3; l371 = l371 + 1) {
			fRec9[l371] = 0.0f;
		}
		for (int l372 = 0; l372 < 2048; l372 = l372 + 1) {
			fVec225[l372] = 0.0f;
		}
		for (int l373 = 0; l373 < 2048; l373 = l373 + 1) {
			fVec226[l373] = 0.0f;
		}
		for (int l374 = 0; l374 < 2; l374 = l374 + 1) {
			iRec6[l374] = 0;
		}
		for (int l375 = 0; l375 < 2; l375 = l375 + 1) {
			fRec7[l375] = 0.0f;
		}
		for (int l376 = 0; l376 < 2; l376 = l376 + 1) {
			fRec5[l376] = 0.0f;
		}
		for (int l377 = 0; l377 < 2; l377 = l377 + 1) {
			fRec4[l377] = 0.0f;
		}
		for (int l378 = 0; l378 < 2; l378 = l378 + 1) {
			fVec227[l378] = 0.0f;
		}
		for (int l379 = 0; l379 < 2; l379 = l379 + 1) {
			fRec0[l379] = 0.0f;
		}
		for (int l380 = 0; l380 < 2; l380 = l380 + 1) {
			fVec228[l380] = 0.0f;
		}
		for (int l381 = 0; l381 < 2; l381 = l381 + 1) {
			fRec196[l381] = 0.0f;
		}
		for (int l382 = 0; l382 < 2; l382 = l382 + 1) {
			fRec195[l382] = 0.0f;
		}
		for (int l383 = 0; l383 < 2; l383 = l383 + 1) {
			fVec229[l383] = 0.0f;
		}
		for (int l384 = 0; l384 < 2; l384 = l384 + 1) {
			fRec194[l384] = 0.0f;
		}
		for (int l385 = 0; l385 < 2; l385 = l385 + 1) {
			fRec193[l385] = 0.0f;
		}
		for (int l386 = 0; l386 < 2; l386 = l386 + 1) {
			fVec230[l386] = 0.0f;
		}
		for (int l387 = 0; l387 < 3; l387 = l387 + 1) {
			fVec231[l387] = 0.0f;
		}
		for (int l388 = 0; l388 < 7; l388 = l388 + 1) {
			fVec232[l388] = 0.0f;
		}
		for (int l389 = 0; l389 < 15; l389 = l389 + 1) {
			fVec233[l389] = 0.0f;
		}
		for (int l390 = 0; l390 < 32; l390 = l390 + 1) {
			fVec234[l390] = 0.0f;
		}
		for (int l391 = 0; l391 < 64; l391 = l391 + 1) {
			fVec235[l391] = 0.0f;
		}
		for (int l392 = 0; l392 < 128; l392 = l392 + 1) {
			fVec236[l392] = 0.0f;
		}
		for (int l393 = 0; l393 < 256; l393 = l393 + 1) {
			fVec237[l393] = 0.0f;
		}
		for (int l394 = 0; l394 < 512; l394 = l394 + 1) {
			fVec238[l394] = 0.0f;
		}
		for (int l395 = 0; l395 < 1024; l395 = l395 + 1) {
			fVec239[l395] = 0.0f;
		}
		for (int l396 = 0; l396 < 2048; l396 = l396 + 1) {
			fVec240[l396] = 0.0f;
		}
		for (int l397 = 0; l397 < 4096; l397 = l397 + 1) {
			fVec241[l397] = 0.0f;
		}
		for (int l398 = 0; l398 < 8192; l398 = l398 + 1) {
			fVec242[l398] = 0.0f;
		}
		for (int l399 = 0; l399 < 16384; l399 = l399 + 1) {
			fVec243[l399] = 0.0f;
		}
		for (int l400 = 0; l400 < 32768; l400 = l400 + 1) {
			fVec244[l400] = 0.0f;
		}
		for (int l401 = 0; l401 < 65536; l401 = l401 + 1) {
			fVec245[l401] = 0.0f;
		}
		for (int l402 = 0; l402 < 131072; l402 = l402 + 1) {
			fVec246[l402] = 0.0f;
		}
		for (int l403 = 0; l403 < 2; l403 = l403 + 1) {
			fVec247[l403] = 0.0f;
		}
		for (int l404 = 0; l404 < 2; l404 = l404 + 1) {
			fVec248[l404] = 0.0f;
		}
		for (int l405 = 0; l405 < 2; l405 = l405 + 1) {
			fRec200[l405] = 0.0f;
		}
		for (int l406 = 0; l406 < 2; l406 = l406 + 1) {
			fRec199[l406] = 0.0f;
		}
		for (int l407 = 0; l407 < 2; l407 = l407 + 1) {
			fVec249[l407] = 0.0f;
		}
		for (int l408 = 0; l408 < 2; l408 = l408 + 1) {
			fRec198[l408] = 0.0f;
		}
		for (int l409 = 0; l409 < 2; l409 = l409 + 1) {
			fRec197[l409] = 0.0f;
		}
		for (int l410 = 0; l410 < 2; l410 = l410 + 1) {
			fVec250[l410] = 0.0f;
		}
		for (int l411 = 0; l411 < 3; l411 = l411 + 1) {
			fVec251[l411] = 0.0f;
		}
		for (int l412 = 0; l412 < 7; l412 = l412 + 1) {
			fVec252[l412] = 0.0f;
		}
		for (int l413 = 0; l413 < 15; l413 = l413 + 1) {
			fVec253[l413] = 0.0f;
		}
		for (int l414 = 0; l414 < 32; l414 = l414 + 1) {
			fVec254[l414] = 0.0f;
		}
		for (int l415 = 0; l415 < 64; l415 = l415 + 1) {
			fVec255[l415] = 0.0f;
		}
		for (int l416 = 0; l416 < 128; l416 = l416 + 1) {
			fVec256[l416] = 0.0f;
		}
		for (int l417 = 0; l417 < 256; l417 = l417 + 1) {
			fVec257[l417] = 0.0f;
		}
		for (int l418 = 0; l418 < 512; l418 = l418 + 1) {
			fVec258[l418] = 0.0f;
		}
		for (int l419 = 0; l419 < 1024; l419 = l419 + 1) {
			fVec259[l419] = 0.0f;
		}
		for (int l420 = 0; l420 < 2048; l420 = l420 + 1) {
			fVec260[l420] = 0.0f;
		}
		for (int l421 = 0; l421 < 4096; l421 = l421 + 1) {
			fVec261[l421] = 0.0f;
		}
		for (int l422 = 0; l422 < 8192; l422 = l422 + 1) {
			fVec262[l422] = 0.0f;
		}
		for (int l423 = 0; l423 < 16384; l423 = l423 + 1) {
			fVec263[l423] = 0.0f;
		}
		for (int l424 = 0; l424 < 32768; l424 = l424 + 1) {
			fVec264[l424] = 0.0f;
		}
		for (int l425 = 0; l425 < 65536; l425 = l425 + 1) {
			fVec265[l425] = 0.0f;
		}
		for (int l426 = 0; l426 < 131072; l426 = l426 + 1) {
			fVec266[l426] = 0.0f;
		}
		for (int l427 = 0; l427 < 2; l427 = l427 + 1) {
			fRec192[l427] = 0.0f;
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
		ui_interface->openVerticalBox("Podcast Plugins");
		ui_interface->declare(0, "1", "");
		ui_interface->openHorizontalBox("Global");
		ui_interface->declare(&fCheckbox3, "1", "");
		ui_interface->declare(&fCheckbox3, "symbol", "bypass_timbre");
		ui_interface->addCheckButton("bypass timbre", &fCheckbox3);
		ui_interface->declare(&fCheckbox1, "4", "");
		ui_interface->declare(&fCheckbox1, "symbol", "bypass_leveler");
		ui_interface->addCheckButton("bypass leveler", &fCheckbox1);
		ui_interface->declare(&fCheckbox2, "4", "");
		ui_interface->declare(&fCheckbox2, "symbol", "bypass_style");
		ui_interface->addCheckButton("bypass style", &fCheckbox2);
		ui_interface->declare(&fCheckbox0, "symbol", "bypass_global");
		ui_interface->addCheckButton("bypass global", &fCheckbox0);
		ui_interface->declare(&fHbargraph0, "symbol", "latency_global");
		ui_interface->addHorizontalBargraph("latency", &fHbargraph0, FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->declare(0, "2", "");
		ui_interface->openHorizontalBox("Leveler, MBcomp, Limiter");
		ui_interface->declare(0, "1", "");
		ui_interface->openHorizontalBox("PreStage");
		ui_interface->declare(&fVslider0, "1", "");
		ui_interface->declare(&fVslider0, "symbol", "input_gain");
		ui_interface->declare(&fVslider0, "unit", "dB");
		ui_interface->addVerticalSlider("PreGain", &fVslider0, FAUSTFLOAT(0.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(2e+01f), FAUSTFLOAT(0.1f));
		ui_interface->declare(&fVbargraph0, "symbol", "input_peak_channel_0");
		ui_interface->addVerticalBargraph("In 0", &fVbargraph0, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph3, "symbol", "input_peak_channel_1");
		ui_interface->addVerticalBargraph("In 1", &fVbargraph3, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph4, "symbol", "lufs_in_meter");
		ui_interface->declare(&fVbargraph4, "unit", "dB");
		ui_interface->addVerticalBargraph("lufs IN", &fVbargraph4, FAUSTFLOAT(-1.2e+02f), FAUSTFLOAT(0.0f));
		ui_interface->closeBox();
		ui_interface->declare(0, "2", "");
		ui_interface->openHorizontalBox("Leveler1");
		ui_interface->declare(&fVbargraph2, "1", "");
		ui_interface->declare(&fVbargraph2, "symbol", "leveler_gain1");
		ui_interface->declare(&fVbargraph2, "unit", "dB");
		ui_interface->addVerticalBargraph("gain 1", &fVbargraph2, FAUSTFLOAT(-5e+01f), FAUSTFLOAT(5e+01f));
		ui_interface->declare(&fVslider1, "3", "");
		ui_interface->declare(&fVslider1, "symbol", "leveler_target");
		ui_interface->declare(&fVslider1, "unit", "dB");
		ui_interface->addVerticalSlider("target", &fVslider1, FAUSTFLOAT(-18.0f), FAUSTFLOAT(-5e+01f), FAUSTFLOAT(-2.0f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->declare(0, "3", "");
		ui_interface->openHorizontalBox("Multiband Conpressor");
		ui_interface->openHorizontalBox("Parameters");
		ui_interface->declare(&fVslider3, "2", "");
		ui_interface->declare(&fVslider3, "symbol", "style");
		ui_interface->addVerticalSlider("mb morph", &fVslider3, FAUSTFLOAT(0.0f), FAUSTFLOAT(-5.0f), FAUSTFLOAT(5.0f), FAUSTFLOAT(0.1f));
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("bands");
		ui_interface->declare(&fVbargraph6, "8", "");
		ui_interface->declare(&fVbargraph6, "symbol", "multiband_compressor_gain_band_1");
		ui_interface->declare(&fVbargraph6, "unit", "dB");
		ui_interface->addVerticalBargraph("gr 1", &fVbargraph6, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph7, "8", "");
		ui_interface->declare(&fVbargraph7, "symbol", "multiband_compressor_gain_band_2");
		ui_interface->declare(&fVbargraph7, "unit", "dB");
		ui_interface->addVerticalBargraph("gr 2", &fVbargraph7, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph8, "8", "");
		ui_interface->declare(&fVbargraph8, "symbol", "multiband_compressor_gain_band_3");
		ui_interface->declare(&fVbargraph8, "unit", "dB");
		ui_interface->addVerticalBargraph("gr 3", &fVbargraph8, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph9, "8", "");
		ui_interface->declare(&fVbargraph9, "symbol", "multiband_compressor_gain_band_4");
		ui_interface->declare(&fVbargraph9, "unit", "dB");
		ui_interface->addVerticalBargraph("gr 4", &fVbargraph9, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph5, "8", "");
		ui_interface->declare(&fVbargraph5, "symbol", "multiband_compressor_gain_band_5");
		ui_interface->declare(&fVbargraph5, "unit", "dB");
		ui_interface->addVerticalBargraph("gr 5", &fVbargraph5, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->closeBox();
		ui_interface->closeBox();
		ui_interface->declare(0, "3", "");
		ui_interface->openHorizontalBox("Tilt EQ");
		ui_interface->declare(&fVslider2, "1", "");
		ui_interface->declare(&fVslider2, "symbol", "timbre");
		ui_interface->addVerticalSlider("timbre", &fVslider2, FAUSTFLOAT(0.0f), FAUSTFLOAT(-5.0f), FAUSTFLOAT(5.0f), FAUSTFLOAT(0.1f));
		ui_interface->closeBox();
		ui_interface->declare(0, "4", "");
		ui_interface->openHorizontalBox("Leveler2");
		ui_interface->declare(&fVbargraph1, "1", "");
		ui_interface->declare(&fVbargraph1, "symbol", "leveler_gain2");
		ui_interface->declare(&fVbargraph1, "unit", "dB");
		ui_interface->addVerticalBargraph("gain 2", &fVbargraph1, FAUSTFLOAT(-5e+01f), FAUSTFLOAT(5e+01f));
		ui_interface->closeBox();
		ui_interface->declare(0, "6", "");
		ui_interface->openHorizontalBox("PostStage");
		ui_interface->declare(&fVbargraph10, "0", "");
		ui_interface->declare(&fVbargraph10, "symbol", "limiter_gain");
		ui_interface->addVerticalBargraph("LimiterGR", &fVbargraph10, FAUSTFLOAT(-6e+01f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph12, "symbol", "lufs_out_meter");
		ui_interface->declare(&fVbargraph12, "unit", "dB");
		ui_interface->addVerticalBargraph("lufs OUT", &fVbargraph12, FAUSTFLOAT(-1.2e+02f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph11, "symbol", "output_peak_channel_0");
		ui_interface->addVerticalBargraph("Out 0", &fVbargraph11, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph13, "symbol", "output_peak_channel_1");
		ui_interface->addVerticalBargraph("Out 1", &fVbargraph13, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->closeBox();
		ui_interface->closeBox();
		ui_interface->closeBox();
	}
	
	FAUSTPP_VIRTUAL void compute(int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
		FAUSTFLOAT* input0 = inputs[0];
		FAUSTFLOAT* input1 = inputs[1];
		FAUSTFLOAT* output0 = outputs[0];
		FAUSTFLOAT* output1 = outputs[1];
		float fSlow0 = fConst2 * std::pow(1e+01f, 0.05f * float(fVslider0));
		float fSlow1 = fConst2 * float(fCheckbox0);
		float fSlow2 = float(fCheckbox1);
		float fSlow3 = 1.0f - fSlow2;
		float fSlow4 = float(fVslider1);
		float fSlow5 = fSlow4 + 14.0f;
		float fSlow6 = fSlow4 + 14.0f;
		float fSlow7 = fConst2 * float(fCheckbox2);
		float fSlow8 = fConst2 * float(fCheckbox3);
		float fSlow9 = fConst2 * float(fVslider2);
		float fSlow10 = float(fVslider3);
		float fSlow11 = fSlow10 + 5.0f;
		float fSlow12 = 0.2f * fSlow11;
		float fSlow13 = 0.05f * fSlow11;
		float fSlow14 = fSlow13 + 0.4f;
		float fSlow15 = 1.6f * fSlow11;
		float fSlow16 = 0.3f * fSlow11 + 9.0f;
		float fSlow17 = 0.5f * fSlow16;
		float fSlow18 = fSlow15 + fSlow17;
		float fSlow19 = fSlow4 - fSlow18;
		float fSlow20 = fSlow4 + fSlow17 - fSlow15;
		float fSlow21 = 0.5f / std::max<float>(1.1920929e-07f, fSlow16);
		float fSlow22 = 0.0003f * fSlow11;
		float fSlow23 = 0.005f - fSlow22;
		int iSlow24 = std::fabs(fSlow23) < 1.1920929e-07f;
		float fSlow25 = ((iSlow24) ? 0.0f : std::exp(0.0f - fConst114 / ((iSlow24) ? 1.0f : fSlow23)));
		float fSlow26 = 0.04f - 0.003f * fSlow11;
		int iSlow27 = std::fabs(fSlow26) < 1.1920929e-07f;
		float fSlow28 = ((iSlow27) ? 0.0f : std::exp(0.0f - fConst114 / ((iSlow27) ? 1.0f : fSlow26)));
		float fSlow29 = 3.0f * fSlow11 + 1e+01f;
		int iSlow30 = fSlow29 > 0.0f;
		float fSlow31 = float(2 * iSlow30 + -1);
		float fSlow32 = -3.0f - 2.7f * fSlow11;
		float fSlow33 = std::fabs(fSlow29);
		float fSlow34 = 0.6f * fSlow11;
		float fSlow35 = 12.0f - fSlow34;
		float fSlow36 = 0.5f * fSlow35;
		float fSlow37 = fSlow4 + (-4e+01f - fSlow36);
		float fSlow38 = fSlow4 + fSlow36;
		float fSlow39 = fSlow38 + -4e+01f;
		float fSlow40 = 1.0f / std::min<float>(1.1920929e-07f, 0.0f - 2.0f * fSlow35);
		float fSlow41 = 0.3f - 0.025f * fSlow11;
		float fSlow42 = ((iSlow30) ? fSlow41 : 0.001f);
		int iSlow43 = std::fabs(fSlow42) < 1.1920929e-07f;
		float fSlow44 = ((iSlow43) ? 0.0f : std::exp(0.0f - fConst114 / ((iSlow43) ? 1.0f : fSlow42)));
		float fSlow45 = ((iSlow30) ? 0.001f : fSlow41);
		int iSlow46 = std::fabs(fSlow45) < 1.1920929e-07f;
		float fSlow47 = ((iSlow46) ? 0.0f : std::exp(0.0f - fConst114 / ((iSlow46) ? 1.0f : fSlow45)));
		float fSlow48 = 0.03f * fSlow11 + 0.2f;
		float fSlow49 = 0.9f * fSlow11;
		float fSlow50 = fSlow34 + 6.0f;
		float fSlow51 = 0.5f * fSlow50;
		float fSlow52 = fSlow49 + fSlow51;
		float fSlow53 = fSlow4 - fSlow52;
		float fSlow54 = fSlow4 + fSlow51;
		float fSlow55 = fSlow54 - fSlow49;
		float fSlow56 = 0.5f / std::max<float>(1.1920929e-07f, fSlow50);
		float fSlow57 = 0.015f - 0.0005f * fSlow11;
		int iSlow58 = std::fabs(fSlow57) < 1.1920929e-07f;
		float fSlow59 = ((iSlow58) ? 0.0f : std::exp(0.0f - fConst114 / ((iSlow58) ? 1.0f : fSlow57)));
		float fSlow60 = 0.08f - 0.005f * fSlow11;
		int iSlow61 = std::fabs(fSlow60) < 1.1920929e-07f;
		float fSlow62 = ((iSlow61) ? 0.0f : std::exp(0.0f - fConst114 / ((iSlow61) ? 1.0f : fSlow60)));
		float fSlow63 = fSlow10 + 15.0f;
		int iSlow64 = fSlow63 > 0.0f;
		float fSlow65 = float(2 * iSlow64 + -1);
		float fSlow66 = std::fabs(fSlow63);
		float fSlow67 = 0.0005f * fSlow11 + 0.005f;
		float fSlow68 = 1.0f - fSlow13;
		float fSlow69 = ((iSlow64) ? fSlow68 : fSlow67);
		int iSlow70 = std::fabs(fSlow69) < 1.1920929e-07f;
		float fSlow71 = ((iSlow70) ? 0.0f : std::exp(0.0f - fConst114 / ((iSlow70) ? 1.0f : fSlow69)));
		float fSlow72 = ((iSlow64) ? fSlow67 : fSlow68);
		int iSlow73 = std::fabs(fSlow72) < 1.1920929e-07f;
		float fSlow74 = ((iSlow73) ? 0.0f : std::exp(0.0f - fConst114 / ((iSlow73) ? 1.0f : fSlow72)));
		float fSlow75 = 0.04f * fSlow11;
		float fSlow76 = fSlow75 + 0.2f;
		float fSlow77 = 1.4f * fSlow11;
		float fSlow78 = fSlow51 + fSlow77;
		float fSlow79 = fSlow4 + (6.0f - fSlow78);
		float fSlow80 = fSlow54 + (6.0f - fSlow77);
		float fSlow81 = 0.0004f * fSlow11;
		float fSlow82 = 0.012f - fSlow81;
		int iSlow83 = std::fabs(fSlow82) < 1.1920929e-07f;
		float fSlow84 = ((iSlow83) ? 0.0f : std::exp(0.0f - fConst114 / ((iSlow83) ? 1.0f : fSlow82)));
		float fSlow85 = 0.07f - 0.004f * fSlow11;
		int iSlow86 = std::fabs(fSlow85) < 1.1920929e-07f;
		float fSlow87 = ((iSlow86) ? 0.0f : std::exp(0.0f - fConst114 / ((iSlow86) ? 1.0f : fSlow85)));
		float fSlow88 = 0.8f - 0.04f * fSlow11;
		float fSlow89 = ((iSlow64) ? fSlow88 : fSlow67);
		int iSlow90 = std::fabs(fSlow89) < 1.1920929e-07f;
		float fSlow91 = ((iSlow90) ? 0.0f : std::exp(0.0f - fConst114 / ((iSlow90) ? 1.0f : fSlow89)));
		float fSlow92 = ((iSlow64) ? fSlow67 : fSlow88);
		int iSlow93 = std::fabs(fSlow92) < 1.1920929e-07f;
		float fSlow94 = ((iSlow93) ? 0.0f : std::exp(0.0f - fConst114 / ((iSlow93) ? 1.0f : fSlow92)));
		float fSlow95 = 0.05f * fSlow11 + 0.2f;
		float fSlow96 = 0.5f * fSlow11 + 7.0f;
		float fSlow97 = 0.5f * fSlow96;
		float fSlow98 = fSlow77 + fSlow97;
		float fSlow99 = fSlow4 + (4.0f - fSlow98);
		float fSlow100 = fSlow4 + fSlow97 + (4.0f - fSlow77);
		float fSlow101 = 0.5f / std::max<float>(1.1920929e-07f, fSlow96);
		float fSlow102 = 0.01f - fSlow81;
		int iSlow103 = std::fabs(fSlow102) < 1.1920929e-07f;
		float fSlow104 = ((iSlow103) ? 0.0f : std::exp(0.0f - fConst114 / ((iSlow103) ? 1.0f : fSlow102)));
		float fSlow105 = 0.06f - 0.004f * fSlow11;
		int iSlow106 = std::fabs(fSlow105) < 1.1920929e-07f;
		float fSlow107 = ((iSlow106) ? 0.0f : std::exp(0.0f - fConst114 / ((iSlow106) ? 1.0f : fSlow105)));
		float fSlow108 = 2.0f * fSlow11 + 1e+01f;
		int iSlow109 = fSlow108 > 0.0f;
		float fSlow110 = float(2 * iSlow109 + -1);
		float fSlow111 = std::fabs(fSlow108);
		float fSlow112 = fSlow22 + 0.002f;
		float fSlow113 = 0.6f - fSlow75;
		float fSlow114 = ((iSlow109) ? fSlow113 : fSlow112);
		int iSlow115 = std::fabs(fSlow114) < 1.1920929e-07f;
		float fSlow116 = ((iSlow115) ? 0.0f : std::exp(0.0f - fConst114 / ((iSlow115) ? 1.0f : fSlow114)));
		float fSlow117 = ((iSlow109) ? fSlow112 : fSlow113);
		int iSlow118 = std::fabs(fSlow117) < 1.1920929e-07f;
		float fSlow119 = ((iSlow118) ? 0.0f : std::exp(0.0f - fConst114 / ((iSlow118) ? 1.0f : fSlow117)));
		float fSlow120 = fSlow13 + 0.3f;
		float fSlow121 = 0.4f * fSlow11 + 8.0f;
		float fSlow122 = 0.5f * fSlow121;
		float fSlow123 = fSlow15 + fSlow122;
		float fSlow124 = fSlow4 + (2.0f - fSlow123);
		float fSlow125 = fSlow4 + fSlow122 + (2.0f - fSlow15);
		float fSlow126 = 0.5f / std::max<float>(1.1920929e-07f, fSlow121);
		float fSlow127 = 0.008f - fSlow81;
		int iSlow128 = std::fabs(fSlow127) < 1.1920929e-07f;
		float fSlow129 = ((iSlow128) ? 0.0f : std::exp(0.0f - fConst114 / ((iSlow128) ? 1.0f : fSlow127)));
		float fSlow130 = 0.05f - 0.004f * fSlow11;
		int iSlow131 = std::fabs(fSlow130) < 1.1920929e-07f;
		float fSlow132 = ((iSlow131) ? 0.0f : std::exp(0.0f - fConst114 / ((iSlow131) ? 1.0f : fSlow130)));
		float fSlow133 = 2.5f * fSlow11 + 1e+01f;
		int iSlow134 = fSlow133 > 0.0f;
		float fSlow135 = float(2 * iSlow134 + -1);
		float fSlow136 = std::fabs(fSlow133);
		float fSlow137 = 0.4f - 0.03f * fSlow11;
		float fSlow138 = ((iSlow134) ? fSlow137 : 0.002f);
		int iSlow139 = std::fabs(fSlow138) < 1.1920929e-07f;
		float fSlow140 = ((iSlow139) ? 0.0f : std::exp(0.0f - fConst114 / ((iSlow139) ? 1.0f : fSlow138)));
		float fSlow141 = ((iSlow134) ? 0.002f : fSlow137);
		int iSlow142 = std::fabs(fSlow141) < 1.1920929e-07f;
		float fSlow143 = ((iSlow142) ? 0.0f : std::exp(0.0f - fConst114 / ((iSlow142) ? 1.0f : fSlow141)));
		fHbargraph0 = FAUSTFLOAT(0.01f);
		for (int i0 = 0; i0 < count; i0 = i0 + 1) {
			fRec2[0] = fSlow0 + fConst3 * fRec2[1];
			float fTemp0 = float(input0[i0]) * fRec2[0];
			fRec1[0] = std::max<float>(fRec1[1] - fConst1, std::min<float>(1e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(0.00031622776f, std::fabs(fTemp0))))));
			fVbargraph0 = FAUSTFLOAT(fRec1[0]);
			float fTemp1 = fTemp0;
			fVec0[0] = fTemp1;
			fRec3[0] = fSlow1 + fConst3 * fRec3[1];
			float fTemp2 = std::fabs(std::fabs(fRec8[1]) + std::fabs(fRec9[1]));
			fVec1[0] = fTemp2;
			float fTemp3 = std::max<float>(fTemp2, fVec1[1]);
			fVec2[0] = fTemp3;
			float fTemp4 = std::max<float>(fTemp3, fVec2[2]);
			fVec3[0] = fTemp4;
			float fTemp5 = std::max<float>(fTemp4, fVec3[4]);
			fVec4[0] = fTemp5;
			fVec5[IOTA0 & 31] = std::max<float>(fTemp5, fVec4[8]);
			float fTemp6 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst8) ? fTemp2 : -3.4028235e+38f), ((iConst9) ? fVec2[iConst8] : -3.4028235e+38f)), ((iConst10) ? fVec3[iConst11] : -3.4028235e+38f)), ((iConst12) ? fVec4[iConst13] : -3.4028235e+38f)), ((iConst14) ? fVec5[(IOTA0 - iConst15) & 31] : -3.4028235e+38f))));
			int iTemp7 = (fTemp6 > fSlow5) + (fTemp6 > fSlow6);
			float fTemp8 = std::max<float>(-3.4028235e+38f, ((iTemp7 == 0) ? fTemp6 + -14.0f - fSlow4 : ((iTemp7 == 1) ? 0.0f - 4194304.0f * mydsp_faustpower2_f(fTemp6 + -14.0f - fSlow4) : 0.0f)));
			float fTemp9 = ((fTemp8 > fRec18[1]) ? 0.0f : fConst16);
			fRec18[0] = fTemp8 * (1.0f - fTemp9) + fRec18[1] * fTemp9;
			float fTemp10 = std::min<float>(1.0f, std::max<float>(0.0f, std::pow(1e+01f, 0.05f * fRec18[0])));
			float fTemp11 = std::tan(fConst6 * std::min<float>(fConst7, fTemp10 * (fConst17 * std::fabs(fRec11[1]) + 0.0176f)));
			fVec6[0] = 0.0f - fConst30 * (fConst31 * fRec21[1] - fConst33 * fRec8[2]);
			fRec22[0] = fVec6[1] + fConst30 * (fConst34 * fRec8[1] - 2.0f * (fConst35 * fRec22[1] - fConst36 * fRec8[2]));
			fRec21[0] = fRec22[0];
			fVec7[0] = 0.50032705f * fRec21[1] - fConst38 * fRec19[1];
			fRec20[0] = fConst26 * fRec21[1] + fConst37 * (fVec7[1] - fConst39 * fRec20[1] + 0.50032705f * fRec21[0]);
			fRec19[0] = fRec20[0];
			float fTemp12 = mydsp_faustpower2_f(fRec19[0]);
			fVec8[0] = fTemp12;
			float fTemp13 = fTemp12 + fVec8[1];
			fVec9[0] = fTemp13;
			float fTemp14 = fTemp13 + fVec9[2];
			fVec10[0] = fTemp14;
			float fTemp15 = fTemp14 + fVec10[4];
			fVec11[0] = fTemp15;
			float fTemp16 = fTemp15 + fVec11[8];
			fVec12[IOTA0 & 31] = fTemp16;
			float fTemp17 = fTemp16 + fVec12[(IOTA0 - 16) & 31];
			fVec13[IOTA0 & 63] = fTemp17;
			float fTemp18 = fTemp17 + fVec13[(IOTA0 - 32) & 63];
			fVec14[IOTA0 & 127] = fTemp18;
			float fTemp19 = fTemp18 + fVec14[(IOTA0 - 64) & 127];
			fVec15[IOTA0 & 255] = fTemp19;
			float fTemp20 = fTemp19 + fVec15[(IOTA0 - 128) & 255];
			fVec16[IOTA0 & 511] = fTemp20;
			float fTemp21 = fTemp20 + fVec16[(IOTA0 - 256) & 511];
			fVec17[IOTA0 & 1023] = fTemp21;
			fVec18[IOTA0 & 2047] = fTemp21 + fVec17[(IOTA0 - 512) & 1023];
			fVec19[0] = 0.0f - fConst30 * (fConst31 * fRec25[1] - fConst33 * fRec9[2]);
			fRec26[0] = fVec19[1] + fConst30 * (fConst34 * fRec9[1] - 2.0f * (fConst35 * fRec26[1] - fConst36 * fRec9[2]));
			fRec25[0] = fRec26[0];
			fVec20[0] = 0.50032705f * fRec25[1] - fConst38 * fRec23[1];
			fRec24[0] = fConst26 * fRec25[1] + fConst37 * (fVec20[1] - fConst39 * fRec24[1] + 0.50032705f * fRec25[0]);
			fRec23[0] = fRec24[0];
			float fTemp22 = mydsp_faustpower2_f(fRec23[0]);
			fVec21[0] = fTemp22;
			float fTemp23 = fTemp22 + fVec21[1];
			fVec22[0] = fTemp23;
			float fTemp24 = fTemp23 + fVec22[2];
			fVec23[0] = fTemp24;
			float fTemp25 = fTemp24 + fVec23[4];
			fVec24[0] = fTemp25;
			float fTemp26 = fTemp25 + fVec24[8];
			fVec25[IOTA0 & 31] = fTemp26;
			float fTemp27 = fTemp26 + fVec25[(IOTA0 - 16) & 31];
			fVec26[IOTA0 & 63] = fTemp27;
			float fTemp28 = fTemp27 + fVec26[(IOTA0 - 32) & 63];
			fVec27[IOTA0 & 127] = fTemp28;
			float fTemp29 = fTemp28 + fVec27[(IOTA0 - 64) & 127];
			fVec28[IOTA0 & 255] = fTemp29;
			float fTemp30 = fTemp29 + fVec28[(IOTA0 - 128) & 255];
			fVec29[IOTA0 & 511] = fTemp30;
			float fTemp31 = fTemp30 + fVec29[(IOTA0 - 256) & 511];
			fVec30[IOTA0 & 1023] = fTemp31;
			fVec31[IOTA0 & 2047] = fTemp31 + fVec30[(IOTA0 - 512) & 1023];
			float fTemp32 = fTemp11 + 2.0f;
			float fTemp33 = fSlow4 + fRec10[1] + (0.691f - (4.3429446f * std::log(std::max<float>(1e-12f, fConst20 * (((iConst21) ? 0.86000985f * fVec18[(IOTA0 - iConst58) & 2047] : 0.0f) + ((iConst57) ? 0.86000985f * fVec17[(IOTA0 - iConst56) & 1023] : 0.0f) + ((iConst55) ? 0.86000985f * fVec16[(IOTA0 - iConst54) & 511] : 0.0f) + ((iConst53) ? 0.86000985f * fVec15[(IOTA0 - iConst52) & 255] : 0.0f) + ((iConst51) ? 0.86000985f * fVec14[(IOTA0 - iConst50) & 127] : 0.0f) + ((iConst49) ? 0.86000985f * fVec13[(IOTA0 - iConst48) & 63] : 0.0f) + ((iConst47) ? 0.86000985f * fVec12[(IOTA0 - iConst46) & 31] : 0.0f) + ((iConst45) ? 0.86000985f * fVec11[iConst44] : 0.0f) + ((iConst43) ? 0.86000985f * fVec10[iConst42] : 0.0f) + ((iConst40) ? 0.86000985f * fTemp12 : 0.0f) + ((iConst41) ? 0.86000985f * fVec9[iConst40] : 0.0f) + ((iConst21) ? 0.86000985f * fVec31[(IOTA0 - iConst58) & 2047] : 0.0f) + ((iConst57) ? 0.86000985f * fVec30[(IOTA0 - iConst56) & 1023] : 0.0f) + ((iConst55) ? 0.86000985f * fVec29[(IOTA0 - iConst54) & 511] : 0.0f) + ((iConst53) ? 0.86000985f * fVec28[(IOTA0 - iConst52) & 255] : 0.0f) + ((iConst51) ? 0.86000985f * fVec27[(IOTA0 - iConst50) & 127] : 0.0f) + ((iConst49) ? 0.86000985f * fVec26[(IOTA0 - iConst48) & 63] : 0.0f) + ((iConst47) ? 0.86000985f * fVec25[(IOTA0 - iConst46) & 31] : 0.0f) + ((iConst45) ? 0.86000985f * fVec24[iConst44] : 0.0f) + ((iConst43) ? 0.86000985f * fVec23[iConst42] : 0.0f) + ((iConst40) ? 0.86000985f * fTemp22 : 0.0f) + ((iConst41) ? 0.86000985f * fVec22[iConst40] : 0.0f)))) + fRec13[1] * fTemp32 + fRec14[1]));
			float fTemp34 = fTemp11 * fTemp32 + 1.0f;
			float fTemp35 = fTemp11 * fTemp33 / fTemp34;
			fRec13[0] = fRec13[1] + 2.0f * fTemp35;
			float fTemp36 = fRec13[1] + fTemp35;
			float fTemp37 = fTemp11 * fTemp36;
			fRec14[0] = fRec14[1] + 2.0f * fTemp37;
			float fRec15 = fTemp36;
			float fRec16 = fTemp33 / fTemp34;
			float fRec17 = fRec14[1] + fTemp37;
			fRec11[0] = fRec15;
			float fRec12 = fRec17;
			fVbargraph1 = FAUSTFLOAT(std::max<float>(-2e+01f, std::min<float>(2e+01f, fRec12)));
			fRec10[0] = fVbargraph1;
			float fTemp38 = std::pow(1e+01f, 0.05f * fRec10[0]);
			fRec27[0] = fSlow7 + fConst3 * fRec27[1];
			float fTemp39 = std::fabs(std::fabs(fRec28[1]) + std::fabs(fRec29[1]));
			fVec32[0] = fTemp39;
			float fTemp40 = std::max<float>(fTemp39, fVec32[1]);
			fVec33[0] = fTemp40;
			float fTemp41 = std::max<float>(fTemp40, fVec33[2]);
			fVec34[0] = fTemp41;
			float fTemp42 = std::max<float>(fTemp41, fVec34[4]);
			fVec35[0] = fTemp42;
			fVec36[IOTA0 & 31] = std::max<float>(fTemp42, fVec35[8]);
			float fTemp43 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst8) ? fTemp39 : -3.4028235e+38f), ((iConst9) ? fVec33[iConst8] : -3.4028235e+38f)), ((iConst10) ? fVec34[iConst11] : -3.4028235e+38f)), ((iConst12) ? fVec35[iConst13] : -3.4028235e+38f)), ((iConst14) ? fVec36[(IOTA0 - iConst15) & 31] : -3.4028235e+38f))));
			int iTemp44 = (fTemp43 > fSlow5) + (fTemp43 > fSlow6);
			float fTemp45 = std::max<float>(-3.4028235e+38f, ((iTemp44 == 0) ? fTemp43 + -14.0f - fSlow4 : ((iTemp44 == 1) ? 0.0f - 4194304.0f * mydsp_faustpower2_f(fTemp43 + -14.0f - fSlow4) : 0.0f)));
			float fTemp46 = ((fTemp45 > fRec38[1]) ? 0.0f : fConst16);
			fRec38[0] = fTemp45 * (1.0f - fTemp46) + fRec38[1] * fTemp46;
			float fTemp47 = std::min<float>(1.0f, std::max<float>(0.0f, std::pow(1e+01f, 0.05f * fRec38[0])));
			float fTemp48 = std::tan(fConst6 * std::min<float>(fConst7, fTemp47 * (fConst17 * std::fabs(fRec31[1]) + 0.0176f)));
			fVec37[0] = 0.0f - fConst30 * (fConst31 * fRec41[1] - fConst33 * fRec28[2]);
			fRec42[0] = fVec37[1] + fConst30 * (fConst34 * fRec28[1] - 2.0f * (fConst35 * fRec42[1] - fConst36 * fRec28[2]));
			fRec41[0] = fRec42[0];
			fVec38[0] = 0.50032705f * fRec41[1] - fConst38 * fRec39[1];
			fRec40[0] = fConst26 * fRec41[1] + fConst37 * (fVec38[1] - fConst39 * fRec40[1] + 0.50032705f * fRec41[0]);
			fRec39[0] = fRec40[0];
			float fTemp49 = mydsp_faustpower2_f(fRec39[0]);
			fVec39[0] = fTemp49;
			float fTemp50 = fTemp49 + fVec39[1];
			fVec40[0] = fTemp50;
			float fTemp51 = fTemp50 + fVec40[2];
			fVec41[0] = fTemp51;
			float fTemp52 = fTemp51 + fVec41[4];
			fVec42[0] = fTemp52;
			float fTemp53 = fTemp52 + fVec42[8];
			fVec43[IOTA0 & 31] = fTemp53;
			float fTemp54 = fTemp53 + fVec43[(IOTA0 - 16) & 31];
			fVec44[IOTA0 & 63] = fTemp54;
			float fTemp55 = fTemp54 + fVec44[(IOTA0 - 32) & 63];
			fVec45[IOTA0 & 127] = fTemp55;
			float fTemp56 = fTemp55 + fVec45[(IOTA0 - 64) & 127];
			fVec46[IOTA0 & 255] = fTemp56;
			float fTemp57 = fTemp56 + fVec46[(IOTA0 - 128) & 255];
			fVec47[IOTA0 & 511] = fTemp57;
			float fTemp58 = fTemp57 + fVec47[(IOTA0 - 256) & 511];
			fVec48[IOTA0 & 1023] = fTemp58;
			fVec49[IOTA0 & 2047] = fTemp58 + fVec48[(IOTA0 - 512) & 1023];
			fVec50[0] = 0.0f - fConst30 * (fConst31 * fRec45[1] - fConst33 * fRec29[2]);
			fRec46[0] = fVec50[1] + fConst30 * (fConst34 * fRec29[1] - 2.0f * (fConst35 * fRec46[1] - fConst36 * fRec29[2]));
			fRec45[0] = fRec46[0];
			fVec51[0] = 0.50032705f * fRec45[1] - fConst38 * fRec43[1];
			fRec44[0] = fConst26 * fRec45[1] + fConst37 * (fVec51[1] - fConst39 * fRec44[1] + 0.50032705f * fRec45[0]);
			fRec43[0] = fRec44[0];
			float fTemp59 = mydsp_faustpower2_f(fRec43[0]);
			fVec52[0] = fTemp59;
			float fTemp60 = fTemp59 + fVec52[1];
			fVec53[0] = fTemp60;
			float fTemp61 = fTemp60 + fVec53[2];
			fVec54[0] = fTemp61;
			float fTemp62 = fTemp61 + fVec54[4];
			fVec55[0] = fTemp62;
			float fTemp63 = fTemp62 + fVec55[8];
			fVec56[IOTA0 & 31] = fTemp63;
			float fTemp64 = fTemp63 + fVec56[(IOTA0 - 16) & 31];
			fVec57[IOTA0 & 63] = fTemp64;
			float fTemp65 = fTemp64 + fVec57[(IOTA0 - 32) & 63];
			fVec58[IOTA0 & 127] = fTemp65;
			float fTemp66 = fTemp65 + fVec58[(IOTA0 - 64) & 127];
			fVec59[IOTA0 & 255] = fTemp66;
			float fTemp67 = fTemp66 + fVec59[(IOTA0 - 128) & 255];
			fVec60[IOTA0 & 511] = fTemp67;
			float fTemp68 = fTemp67 + fVec60[(IOTA0 - 256) & 511];
			fVec61[IOTA0 & 1023] = fTemp68;
			fVec62[IOTA0 & 2047] = fTemp68 + fVec61[(IOTA0 - 512) & 1023];
			float fTemp69 = fTemp48 + 2.0f;
			float fTemp70 = fSlow4 + fRec30[1] + (0.691f - (4.3429446f * std::log(std::max<float>(1e-12f, fConst20 * (((iConst21) ? 0.86000985f * fVec49[(IOTA0 - iConst58) & 2047] : 0.0f) + ((iConst57) ? 0.86000985f * fVec48[(IOTA0 - iConst56) & 1023] : 0.0f) + ((iConst55) ? 0.86000985f * fVec47[(IOTA0 - iConst54) & 511] : 0.0f) + ((iConst53) ? 0.86000985f * fVec46[(IOTA0 - iConst52) & 255] : 0.0f) + ((iConst51) ? 0.86000985f * fVec45[(IOTA0 - iConst50) & 127] : 0.0f) + ((iConst49) ? 0.86000985f * fVec44[(IOTA0 - iConst48) & 63] : 0.0f) + ((iConst47) ? 0.86000985f * fVec43[(IOTA0 - iConst46) & 31] : 0.0f) + ((iConst45) ? 0.86000985f * fVec42[iConst44] : 0.0f) + ((iConst43) ? 0.86000985f * fVec41[iConst42] : 0.0f) + ((iConst40) ? 0.86000985f * fTemp49 : 0.0f) + ((iConst41) ? 0.86000985f * fVec40[iConst40] : 0.0f) + ((iConst21) ? 0.86000985f * fVec62[(IOTA0 - iConst58) & 2047] : 0.0f) + ((iConst57) ? 0.86000985f * fVec61[(IOTA0 - iConst56) & 1023] : 0.0f) + ((iConst55) ? 0.86000985f * fVec60[(IOTA0 - iConst54) & 511] : 0.0f) + ((iConst53) ? 0.86000985f * fVec59[(IOTA0 - iConst52) & 255] : 0.0f) + ((iConst51) ? 0.86000985f * fVec58[(IOTA0 - iConst50) & 127] : 0.0f) + ((iConst49) ? 0.86000985f * fVec57[(IOTA0 - iConst48) & 63] : 0.0f) + ((iConst47) ? 0.86000985f * fVec56[(IOTA0 - iConst46) & 31] : 0.0f) + ((iConst45) ? 0.86000985f * fVec55[iConst44] : 0.0f) + ((iConst43) ? 0.86000985f * fVec54[iConst42] : 0.0f) + ((iConst40) ? 0.86000985f * fTemp59 : 0.0f) + ((iConst41) ? 0.86000985f * fVec53[iConst40] : 0.0f)))) + fRec33[1] * fTemp69 + fRec34[1]));
			float fTemp71 = fTemp48 * fTemp69 + 1.0f;
			float fTemp72 = fTemp48 * fTemp70 / fTemp71;
			fRec33[0] = fRec33[1] + 2.0f * fTemp72;
			float fTemp73 = fRec33[1] + fTemp72;
			float fTemp74 = fTemp48 * fTemp73;
			fRec34[0] = fRec34[1] + 2.0f * fTemp74;
			float fRec35 = fTemp73;
			float fRec36 = fTemp70 / fTemp71;
			float fRec37 = fRec34[1] + fTemp74;
			fRec31[0] = fRec35;
			float fRec32 = fRec37;
			fVbargraph2 = FAUSTFLOAT(std::max<float>(-2e+01f, std::min<float>(2e+01f, fRec32)));
			fRec30[0] = fVbargraph2;
			float fTemp75 = std::pow(1e+01f, 0.05f * fRec30[0]);
			fRec47[0] = fConst60 * (fTemp1 - fVec0[1] + fConst61 * fRec47[1]);
			fRec48[0] = fSlow8 + fConst3 * fRec48[1];
			float fTemp76 = 1.0f - fRec48[0];
			fRec50[0] = fConst67 * fRec47[1] - fConst65 * (fConst66 * fRec50[1] - fConst63 * fRec47[0]);
			fRec51[0] = 0.0f - fConst65 * (fConst66 * fRec51[1] - (fRec47[0] + fRec47[1]));
			fRec52[0] = fSlow9 + fConst3 * fRec52[1];
			float fTemp77 = 0.05f * fRec52[0];
			float fTemp78 = std::pow(1e+01f, 0.0f - fTemp77);
			float fTemp79 = fRec50[0] + fRec51[0] * fTemp78;
			fVec63[0] = fTemp79;
			fRec49[0] = 0.0f - fConst65 * (fConst66 * fRec49[1] - (fTemp79 + fVec63[1]));
			fRec53[0] = fConst67 * fVec63[1] - fConst65 * (fConst66 * fRec53[1] - fConst63 * fTemp79);
			float fTemp80 = std::pow(1e+01f, fTemp77);
			float fTemp81 = fRec47[0] * fRec48[0] + fTemp76 * (fRec49[0] + fRec53[0] * fTemp80);
			fRec28[0] = fTemp75 * fTemp81;
			fVec64[0] = 0.0f - fConst30 * (fConst31 * fRec57[1] - fConst33 * fVec0[1]);
			fRec58[0] = fVec64[1] + fConst30 * (fConst34 * fTemp1 - 2.0f * (fConst35 * fRec58[1] - fConst36 * fVec0[1]));
			fRec57[0] = fRec58[0];
			fVec65[0] = 0.50032705f * fRec57[1] - fConst38 * fRec55[1];
			fRec56[0] = fConst26 * fRec57[1] + fConst37 * (fVec65[1] - fConst39 * fRec56[1] + 0.50032705f * fRec57[0]);
			fRec55[0] = fRec56[0];
			float fTemp82 = mydsp_faustpower2_f(fRec55[0]);
			fVec66[0] = fTemp82;
			float fTemp83 = fTemp82 + fVec66[1];
			fVec67[0] = fTemp83;
			float fTemp84 = fTemp83 + fVec67[2];
			fVec68[0] = fTemp84;
			float fTemp85 = fTemp84 + fVec68[4];
			fVec69[0] = fTemp85;
			float fTemp86 = fTemp85 + fVec69[8];
			fVec70[IOTA0 & 31] = fTemp86;
			float fTemp87 = fTemp86 + fVec70[(IOTA0 - 16) & 31];
			fVec71[IOTA0 & 63] = fTemp87;
			float fTemp88 = fTemp87 + fVec71[(IOTA0 - 32) & 63];
			fVec72[IOTA0 & 127] = fTemp88;
			float fTemp89 = fTemp88 + fVec72[(IOTA0 - 64) & 127];
			fVec73[IOTA0 & 255] = fTemp89;
			float fTemp90 = fTemp89 + fVec73[(IOTA0 - 128) & 255];
			fVec74[IOTA0 & 511] = fTemp90;
			float fTemp91 = fTemp90 + fVec74[(IOTA0 - 256) & 511];
			fVec75[IOTA0 & 1023] = fTemp91;
			float fTemp92 = fTemp91 + fVec75[(IOTA0 - 512) & 1023];
			fVec76[IOTA0 & 2047] = fTemp92;
			float fTemp93 = fTemp92 + fVec76[(IOTA0 - 1024) & 2047];
			fVec77[IOTA0 & 4095] = fTemp93;
			float fTemp94 = fTemp93 + fVec77[(IOTA0 - 2048) & 4095];
			fVec78[IOTA0 & 8191] = fTemp94;
			float fTemp95 = fTemp94 + fVec78[(IOTA0 - 4096) & 8191];
			fVec79[IOTA0 & 16383] = fTemp95;
			float fTemp96 = fTemp95 + fVec79[(IOTA0 - 8192) & 16383];
			fVec80[IOTA0 & 32767] = fTemp96;
			float fTemp97 = fTemp96 + fVec80[(IOTA0 - 16384) & 32767];
			fVec81[IOTA0 & 65535] = fTemp97;
			fVec82[IOTA0 & 131071] = fTemp97 + fVec81[(IOTA0 - 32768) & 65535];
			float fTemp98 = float(input1[i0]) * fRec2[0];
			fRec63[0] = std::max<float>(fRec63[1] - fConst1, std::min<float>(1e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(0.00031622776f, std::fabs(fTemp98))))));
			fVbargraph3 = FAUSTFLOAT(fRec63[0]);
			float fTemp99 = fTemp98;
			fVec83[0] = fTemp99;
			fVec84[0] = 0.0f - fConst30 * (fConst31 * fRec61[1] - fConst33 * fVec83[1]);
			fRec62[0] = fVec84[1] + fConst30 * (fConst34 * fTemp99 - 2.0f * (fConst35 * fRec62[1] - fConst36 * fVec83[1]));
			fRec61[0] = fRec62[0];
			fVec85[0] = 0.50032705f * fRec61[1] - fConst38 * fRec59[1];
			fRec60[0] = fConst26 * fRec61[1] + fConst37 * (fVec85[1] - fConst39 * fRec60[1] + 0.50032705f * fRec61[0]);
			fRec59[0] = fRec60[0];
			float fTemp100 = mydsp_faustpower2_f(fRec59[0]);
			fVec86[0] = fTemp100;
			float fTemp101 = fTemp100 + fVec86[1];
			fVec87[0] = fTemp101;
			float fTemp102 = fTemp101 + fVec87[2];
			fVec88[0] = fTemp102;
			float fTemp103 = fTemp102 + fVec88[4];
			fVec89[0] = fTemp103;
			float fTemp104 = fTemp103 + fVec89[8];
			fVec90[IOTA0 & 31] = fTemp104;
			float fTemp105 = fTemp104 + fVec90[(IOTA0 - 16) & 31];
			fVec91[IOTA0 & 63] = fTemp105;
			float fTemp106 = fTemp105 + fVec91[(IOTA0 - 32) & 63];
			fVec92[IOTA0 & 127] = fTemp106;
			float fTemp107 = fTemp106 + fVec92[(IOTA0 - 64) & 127];
			fVec93[IOTA0 & 255] = fTemp107;
			float fTemp108 = fTemp107 + fVec93[(IOTA0 - 128) & 255];
			fVec94[IOTA0 & 511] = fTemp108;
			float fTemp109 = fTemp108 + fVec94[(IOTA0 - 256) & 511];
			fVec95[IOTA0 & 1023] = fTemp109;
			float fTemp110 = fTemp109 + fVec95[(IOTA0 - 512) & 1023];
			fVec96[IOTA0 & 2047] = fTemp110;
			float fTemp111 = fTemp110 + fVec96[(IOTA0 - 1024) & 2047];
			fVec97[IOTA0 & 4095] = fTemp111;
			float fTemp112 = fTemp111 + fVec97[(IOTA0 - 2048) & 4095];
			fVec98[IOTA0 & 8191] = fTemp112;
			float fTemp113 = fTemp112 + fVec98[(IOTA0 - 4096) & 8191];
			fVec99[IOTA0 & 16383] = fTemp113;
			float fTemp114 = fTemp113 + fVec99[(IOTA0 - 8192) & 16383];
			fVec100[IOTA0 & 32767] = fTemp114;
			float fTemp115 = fTemp114 + fVec100[(IOTA0 - 16384) & 32767];
			fVec101[IOTA0 & 65535] = fTemp115;
			fVec102[IOTA0 & 131071] = fTemp115 + fVec101[(IOTA0 - 32768) & 65535];
			fVbargraph4 = FAUSTFLOAT(4.3429446f * std::log(std::max<float>(1e-12f, fConst69 * (((iConst70) ? 0.86000985f * fVec82[(IOTA0 - iConst101) & 131071] : 0.0f) + ((iConst100) ? 0.86000985f * fVec81[(IOTA0 - iConst99) & 65535] : 0.0f) + ((iConst98) ? 0.86000985f * fVec80[(IOTA0 - iConst97) & 32767] : 0.0f) + ((iConst96) ? 0.86000985f * fVec79[(IOTA0 - iConst95) & 16383] : 0.0f) + ((iConst94) ? 0.86000985f * fVec78[(IOTA0 - iConst93) & 8191] : 0.0f) + ((iConst92) ? 0.86000985f * fVec77[(IOTA0 - iConst91) & 4095] : 0.0f) + ((iConst90) ? 0.86000985f * fVec76[(IOTA0 - iConst89) & 2047] : 0.0f) + ((iConst88) ? 0.86000985f * fVec75[(IOTA0 - iConst87) & 1023] : 0.0f) + ((iConst86) ? 0.86000985f * fVec74[(IOTA0 - iConst85) & 511] : 0.0f) + ((iConst84) ? 0.86000985f * fVec73[(IOTA0 - iConst83) & 255] : 0.0f) + ((iConst82) ? 0.86000985f * fVec72[(IOTA0 - iConst81) & 127] : 0.0f) + ((iConst80) ? 0.86000985f * fVec71[(IOTA0 - iConst79) & 63] : 0.0f) + ((iConst78) ? 0.86000985f * fVec70[(IOTA0 - iConst77) & 31] : 0.0f) + ((iConst76) ? 0.86000985f * fVec69[iConst75] : 0.0f) + ((iConst74) ? 0.86000985f * fVec68[iConst73] : 0.0f) + ((iConst71) ? 0.86000985f * fTemp82 : 0.0f) + ((iConst72) ? 0.86000985f * fVec67[iConst71] : 0.0f) + ((iConst70) ? 0.86000985f * fVec102[(IOTA0 - iConst101) & 131071] : 0.0f) + ((iConst100) ? 0.86000985f * fVec101[(IOTA0 - iConst99) & 65535] : 0.0f) + ((iConst98) ? 0.86000985f * fVec100[(IOTA0 - iConst97) & 32767] : 0.0f) + ((iConst96) ? 0.86000985f * fVec99[(IOTA0 - iConst95) & 16383] : 0.0f) + ((iConst94) ? 0.86000985f * fVec98[(IOTA0 - iConst93) & 8191] : 0.0f) + ((iConst92) ? 0.86000985f * fVec97[(IOTA0 - iConst91) & 4095] : 0.0f) + ((iConst90) ? 0.86000985f * fVec96[(IOTA0 - iConst89) & 2047] : 0.0f) + ((iConst88) ? 0.86000985f * fVec95[(IOTA0 - iConst87) & 1023] : 0.0f) + ((iConst86) ? 0.86000985f * fVec94[(IOTA0 - iConst85) & 511] : 0.0f) + ((iConst84) ? 0.86000985f * fVec93[(IOTA0 - iConst83) & 255] : 0.0f) + ((iConst82) ? 0.86000985f * fVec92[(IOTA0 - iConst81) & 127] : 0.0f) + ((iConst80) ? 0.86000985f * fVec91[(IOTA0 - iConst79) & 63] : 0.0f) + ((iConst78) ? 0.86000985f * fVec90[(IOTA0 - iConst77) & 31] : 0.0f) + ((iConst76) ? 0.86000985f * fVec89[iConst75] : 0.0f) + ((iConst74) ? 0.86000985f * fVec88[iConst73] : 0.0f) + ((iConst71) ? 0.86000985f * fTemp100 : 0.0f) + ((iConst72) ? 0.86000985f * fVec87[iConst71] : 0.0f)))) + -0.691f);
			float fTemp116 = fTemp99;
			fVec103[0] = fTemp116;
			fRec54[0] = fConst60 * (fTemp116 - fVec103[1] + fConst61 * fRec54[1]);
			fRec65[0] = fConst67 * fRec54[1] - fConst65 * (fConst66 * fRec65[1] - fConst63 * fRec54[0]);
			fRec66[0] = 0.0f - fConst65 * (fConst66 * fRec66[1] - (fRec54[0] + fRec54[1]));
			float fTemp117 = fRec65[0] + fRec66[0] * fTemp78;
			fVec104[0] = fTemp117;
			fRec64[0] = 0.0f - fConst65 * (fConst66 * fRec64[1] - (fTemp117 + fVec104[1]));
			fRec67[0] = fConst67 * fVec104[1] - fConst65 * (fConst66 * fRec67[1] - fConst63 * fTemp117);
			float fTemp118 = fRec48[0] * fRec54[0] + fTemp76 * (fRec64[0] + fRec67[0] * fTemp80);
			fRec29[0] = fTemp75 * fTemp118;
			float fTemp119 = fSlow3 * fRec28[0] + fSlow2 * fTemp81;
			float fTemp120 = 1.0f - fRec27[0];
			fRec71[0] = fTemp119 - fConst108 * (fConst109 * fRec71[2] + fConst110 * fRec71[1]);
			fRec70[0] = fConst108 * (fConst106 * fRec71[0] + fConst111 * fRec71[1] + fConst106 * fRec71[2]) - fConst107 * (fConst112 * fRec70[2] + fConst110 * fRec70[1]);
			fRec69[0] = fConst107 * (fConst106 * fRec70[0] + fConst111 * fRec70[1] + fConst106 * fRec70[2]) - fConst104 * (fConst113 * fRec69[2] + fConst110 * fRec69[1]);
			float fTemp121 = std::fabs(fConst104 * (fConst106 * fRec69[0] + fConst111 * fRec69[1] + fConst106 * fRec69[2]));
			fVec105[0] = fTemp121;
			float fTemp122 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp121));
			int iTemp123 = (fTemp122 > fSlow19) + (fTemp122 > fSlow20);
			float fTemp124 = fTemp122 - fSlow4;
			float fTemp125 = 0.0f - fSlow14 * std::max<float>(0.0f, ((iTemp123 == 0) ? 0.0f : ((iTemp123 == 1) ? fSlow21 * mydsp_faustpower2_f(fSlow18 + fTemp124) : fSlow15 + fTemp124)));
			float fTemp126 = ((fTemp125 > fRec68[1]) ? fSlow28 : fSlow25);
			fRec68[0] = fTemp125 * (1.0f - fTemp126) + fRec68[1] * fTemp126;
			float fTemp127 = fSlow3 * fRec29[0] + fSlow2 * fTemp118;
			fRec75[0] = fTemp127 - fConst108 * (fConst109 * fRec75[2] + fConst110 * fRec75[1]);
			fRec74[0] = fConst108 * (fConst106 * fRec75[0] + fConst111 * fRec75[1] + fConst106 * fRec75[2]) - fConst107 * (fConst112 * fRec74[2] + fConst110 * fRec74[1]);
			fRec73[0] = fConst107 * (fConst106 * fRec74[0] + fConst111 * fRec74[1] + fConst106 * fRec74[2]) - fConst104 * (fConst113 * fRec73[2] + fConst110 * fRec73[1]);
			float fTemp128 = std::fabs(fConst104 * (fConst106 * fRec73[0] + fConst111 * fRec73[1] + fConst106 * fRec73[2]));
			fVec106[0] = fTemp128;
			float fTemp129 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp128));
			int iTemp130 = (fTemp129 > fSlow19) + (fTemp129 > fSlow20);
			float fTemp131 = fTemp129 - fSlow4;
			float fTemp132 = 0.0f - fSlow14 * std::max<float>(0.0f, ((iTemp130 == 0) ? 0.0f : ((iTemp130 == 1) ? fSlow21 * mydsp_faustpower2_f(fSlow18 + fTemp131) : fSlow15 + fTemp131)));
			float fTemp133 = ((fTemp132 > fRec72[1]) ? fSlow28 : fSlow25);
			fRec72[0] = fTemp132 * (1.0f - fTemp133) + fRec72[1] * fTemp133;
			float fTemp134 = std::max<float>(fTemp121, fVec105[1]);
			fVec107[0] = fTemp134;
			float fTemp135 = std::max<float>(fTemp134, fVec107[2]);
			fVec108[0] = fTemp135;
			float fTemp136 = std::max<float>(fTemp135, fVec108[4]);
			fVec109[0] = fTemp136;
			float fTemp137 = std::max<float>(fTemp136, fVec109[8]);
			fVec110[IOTA0 & 31] = fTemp137;
			float fTemp138 = std::max<float>(fTemp137, fVec110[(IOTA0 - 16) & 31]);
			fVec111[IOTA0 & 63] = fTemp138;
			float fTemp139 = std::max<float>(fTemp138, fVec111[(IOTA0 - 32) & 63]);
			fVec112[IOTA0 & 127] = fTemp139;
			float fTemp140 = std::max<float>(fTemp139, fVec112[(IOTA0 - 64) & 127]);
			fVec113[IOTA0 & 255] = fTemp140;
			float fTemp141 = std::max<float>(fTemp140, fVec113[(IOTA0 - 128) & 255]);
			fVec114[IOTA0 & 511] = fTemp141;
			float fTemp142 = std::max<float>(fTemp141, fVec114[(IOTA0 - 256) & 511]);
			fVec115[IOTA0 & 1023] = fTemp142;
			float fTemp143 = std::max<float>(fTemp142, fVec115[(IOTA0 - 512) & 1023]);
			fVec116[IOTA0 & 2047] = fTemp143;
			fVec117[IOTA0 & 4095] = std::max<float>(fTemp143, fVec116[(IOTA0 - 1024) & 2047]);
			float fTemp144 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst115) ? fTemp121 : -3.4028235e+38f), ((iConst116) ? fVec107[iConst115] : -3.4028235e+38f)), ((iConst117) ? fVec108[iConst118] : -3.4028235e+38f)), ((iConst119) ? fVec109[iConst120] : -3.4028235e+38f)), ((iConst121) ? fVec110[(IOTA0 - iConst122) & 31] : -3.4028235e+38f)), ((iConst123) ? fVec111[(IOTA0 - iConst124) & 63] : -3.4028235e+38f)), ((iConst125) ? fVec112[(IOTA0 - iConst126) & 127] : -3.4028235e+38f)), ((iConst127) ? fVec113[(IOTA0 - iConst128) & 255] : -3.4028235e+38f)), ((iConst129) ? fVec114[(IOTA0 - iConst130) & 511] : -3.4028235e+38f)), ((iConst131) ? fVec115[(IOTA0 - iConst132) & 1023] : -3.4028235e+38f)), ((iConst133) ? fVec116[(IOTA0 - iConst134) & 2047] : -3.4028235e+38f)), ((iConst135) ? fVec117[(IOTA0 - iConst136) & 4095] : -3.4028235e+38f))));
			int iTemp145 = (fTemp144 > fSlow37) + (fTemp144 > fSlow39);
			float fTemp146 = fTemp144 + 4e+01f;
			float fTemp147 = std::max<float>(fSlow32, fSlow33 * ((iTemp145 == 0) ? fTemp146 - fSlow4 : ((iTemp145 == 1) ? fSlow40 * mydsp_faustpower2_f(fTemp146 - fSlow38) : 0.0f)));
			float fTemp148 = (((fSlow31 * fTemp147) > fRec76[1]) ? fSlow47 : fSlow44);
			fRec76[0] = fSlow31 * fTemp147 * (1.0f - fTemp148) + fRec76[1] * fTemp148;
			float fTemp149 = std::max<float>(fTemp128, fVec106[1]);
			fVec118[0] = fTemp149;
			float fTemp150 = std::max<float>(fTemp149, fVec118[2]);
			fVec119[0] = fTemp150;
			float fTemp151 = std::max<float>(fTemp150, fVec119[4]);
			fVec120[0] = fTemp151;
			float fTemp152 = std::max<float>(fTemp151, fVec120[8]);
			fVec121[IOTA0 & 31] = fTemp152;
			float fTemp153 = std::max<float>(fTemp152, fVec121[(IOTA0 - 16) & 31]);
			fVec122[IOTA0 & 63] = fTemp153;
			float fTemp154 = std::max<float>(fTemp153, fVec122[(IOTA0 - 32) & 63]);
			fVec123[IOTA0 & 127] = fTemp154;
			float fTemp155 = std::max<float>(fTemp154, fVec123[(IOTA0 - 64) & 127]);
			fVec124[IOTA0 & 255] = fTemp155;
			float fTemp156 = std::max<float>(fTemp155, fVec124[(IOTA0 - 128) & 255]);
			fVec125[IOTA0 & 511] = fTemp156;
			float fTemp157 = std::max<float>(fTemp156, fVec125[(IOTA0 - 256) & 511]);
			fVec126[IOTA0 & 1023] = fTemp157;
			float fTemp158 = std::max<float>(fTemp157, fVec126[(IOTA0 - 512) & 1023]);
			fVec127[IOTA0 & 2047] = fTemp158;
			fVec128[IOTA0 & 4095] = std::max<float>(fTemp158, fVec127[(IOTA0 - 1024) & 2047]);
			float fTemp159 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst115) ? fTemp128 : -3.4028235e+38f), ((iConst116) ? fVec118[iConst115] : -3.4028235e+38f)), ((iConst117) ? fVec119[iConst118] : -3.4028235e+38f)), ((iConst119) ? fVec120[iConst120] : -3.4028235e+38f)), ((iConst121) ? fVec121[(IOTA0 - iConst122) & 31] : -3.4028235e+38f)), ((iConst123) ? fVec122[(IOTA0 - iConst124) & 63] : -3.4028235e+38f)), ((iConst125) ? fVec123[(IOTA0 - iConst126) & 127] : -3.4028235e+38f)), ((iConst127) ? fVec124[(IOTA0 - iConst128) & 255] : -3.4028235e+38f)), ((iConst129) ? fVec125[(IOTA0 - iConst130) & 511] : -3.4028235e+38f)), ((iConst131) ? fVec126[(IOTA0 - iConst132) & 1023] : -3.4028235e+38f)), ((iConst133) ? fVec127[(IOTA0 - iConst134) & 2047] : -3.4028235e+38f)), ((iConst135) ? fVec128[(IOTA0 - iConst136) & 4095] : -3.4028235e+38f))));
			int iTemp160 = (fTemp159 > fSlow37) + (fTemp159 > fSlow39);
			float fTemp161 = fTemp159 + 4e+01f;
			float fTemp162 = std::max<float>(fSlow32, fSlow33 * ((iTemp160 == 0) ? fTemp161 - fSlow4 : ((iTemp160 == 1) ? fSlow40 * mydsp_faustpower2_f(fTemp161 - fSlow38) : 0.0f)));
			float fTemp163 = (((fSlow31 * fTemp162) > fRec77[1]) ? fSlow47 : fSlow44);
			fRec77[0] = fSlow31 * fTemp162 * (1.0f - fTemp163) + fRec77[1] * fTemp163;
			float fTemp164 = std::min<float>(fSlow12 + std::min<float>(fRec68[0], fRec72[0]), std::max<float>(fRec76[0], fRec77[0]));
			fVbargraph5 = FAUSTFLOAT(std::min<float>(12.0f, std::max<float>(-12.0f, fTemp164)));
			float fTemp165 = std::pow(1e+01f, 0.025f * fTemp164);
			fRec93[0] = fConst108 * (fRec71[2] + fRec71[0] + 2.0f * fRec71[1]) - fConst107 * (fConst112 * fRec93[2] + fConst110 * fRec93[1]);
			fRec92[0] = fConst107 * (fRec93[2] + fRec93[0] + 2.0f * fRec93[1]) - fConst104 * (fConst113 * fRec92[2] + fConst110 * fRec92[1]);
			fRec91[0] = fConst104 * (fRec92[2] + fRec92[0] + 2.0f * fRec92[1]) - fConst151 * (fConst152 * fRec91[2] + fConst155 * fRec91[1]);
			fRec90[0] = fConst151 * (fRec91[2] + fRec91[0] + 2.0f * fRec91[1]) - fConst150 * (fConst156 * fRec90[2] + fConst155 * fRec90[1]);
			fRec89[0] = fConst150 * (fRec90[2] + fRec90[0] + 2.0f * fRec90[1]) - fConst149 * (fConst157 * fRec89[2] + fConst155 * fRec89[1]);
			fRec88[0] = fConst149 * (fRec89[2] + fRec89[0] + 2.0f * fRec89[1]) - fConst146 * (fConst158 * fRec88[2] + fConst161 * fRec88[1]);
			fRec87[0] = fConst146 * (fRec88[2] + fRec88[0] + 2.0f * fRec88[1]) - fConst145 * (fConst162 * fRec87[2] + fConst161 * fRec87[1]);
			fRec86[0] = fConst145 * (fRec87[2] + fRec87[0] + 2.0f * fRec87[1]) - fConst144 * (fConst163 * fRec86[2] + fConst161 * fRec86[1]);
			fRec85[0] = fConst144 * (fRec86[2] + fRec86[0] + 2.0f * fRec86[1]) - fConst141 * (fConst164 * fRec85[2] + fConst167 * fRec85[1]);
			fRec84[0] = fConst141 * (fRec85[2] + fRec85[0] + 2.0f * fRec85[1]) - fConst140 * (fConst168 * fRec84[2] + fConst167 * fRec84[1]);
			fRec83[0] = fConst140 * (fRec84[2] + fRec84[0] + 2.0f * fRec84[1]) - fConst139 * (fConst169 * fRec83[2] + fConst167 * fRec83[1]);
			float fTemp166 = std::fabs(fConst139 * (fRec83[2] + fRec83[0] + 2.0f * fRec83[1]));
			fVec129[0] = fTemp166;
			float fTemp167 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp166));
			int iTemp168 = (fTemp167 > fSlow53) + (fTemp167 > fSlow55);
			float fTemp169 = fTemp167 - fSlow4;
			float fTemp170 = 0.0f - fSlow48 * std::max<float>(0.0f, ((iTemp168 == 0) ? 0.0f : ((iTemp168 == 1) ? fSlow56 * mydsp_faustpower2_f(fSlow52 + fTemp169) : fSlow49 + fTemp169)));
			float fTemp171 = ((fTemp170 > fRec82[1]) ? fSlow62 : fSlow59);
			fRec82[0] = fTemp170 * (1.0f - fTemp171) + fRec82[1] * fTemp171;
			fRec105[0] = fConst108 * (fRec75[2] + fRec75[0] + 2.0f * fRec75[1]) - fConst107 * (fConst112 * fRec105[2] + fConst110 * fRec105[1]);
			fRec104[0] = fConst107 * (fRec105[2] + fRec105[0] + 2.0f * fRec105[1]) - fConst104 * (fConst113 * fRec104[2] + fConst110 * fRec104[1]);
			fRec103[0] = fConst104 * (fRec104[2] + fRec104[0] + 2.0f * fRec104[1]) - fConst151 * (fConst152 * fRec103[2] + fConst155 * fRec103[1]);
			fRec102[0] = fConst151 * (fRec103[2] + fRec103[0] + 2.0f * fRec103[1]) - fConst150 * (fConst156 * fRec102[2] + fConst155 * fRec102[1]);
			fRec101[0] = fConst150 * (fRec102[2] + fRec102[0] + 2.0f * fRec102[1]) - fConst149 * (fConst157 * fRec101[2] + fConst155 * fRec101[1]);
			fRec100[0] = fConst149 * (fRec101[2] + fRec101[0] + 2.0f * fRec101[1]) - fConst146 * (fConst158 * fRec100[2] + fConst161 * fRec100[1]);
			fRec99[0] = fConst146 * (fRec100[2] + fRec100[0] + 2.0f * fRec100[1]) - fConst145 * (fConst162 * fRec99[2] + fConst161 * fRec99[1]);
			fRec98[0] = fConst145 * (fRec99[2] + fRec99[0] + 2.0f * fRec99[1]) - fConst144 * (fConst163 * fRec98[2] + fConst161 * fRec98[1]);
			fRec97[0] = fConst144 * (fRec98[2] + fRec98[0] + 2.0f * fRec98[1]) - fConst141 * (fConst164 * fRec97[2] + fConst167 * fRec97[1]);
			fRec96[0] = fConst141 * (fRec97[2] + fRec97[0] + 2.0f * fRec97[1]) - fConst140 * (fConst168 * fRec96[2] + fConst167 * fRec96[1]);
			fRec95[0] = fConst140 * (fRec96[2] + fRec96[0] + 2.0f * fRec96[1]) - fConst139 * (fConst169 * fRec95[2] + fConst167 * fRec95[1]);
			float fTemp172 = std::fabs(fConst139 * (fRec95[2] + fRec95[0] + 2.0f * fRec95[1]));
			fVec130[0] = fTemp172;
			float fTemp173 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp172));
			int iTemp174 = (fTemp173 > fSlow53) + (fTemp173 > fSlow55);
			float fTemp175 = fTemp173 - fSlow4;
			float fTemp176 = 0.0f - fSlow48 * std::max<float>(0.0f, ((iTemp174 == 0) ? 0.0f : ((iTemp174 == 1) ? fSlow56 * mydsp_faustpower2_f(fSlow52 + fTemp175) : fSlow49 + fTemp175)));
			float fTemp177 = ((fTemp176 > fRec94[1]) ? fSlow62 : fSlow59);
			fRec94[0] = fTemp176 * (1.0f - fTemp177) + fRec94[1] * fTemp177;
			float fTemp178 = std::max<float>(fTemp166, fVec129[1]);
			fVec131[0] = fTemp178;
			float fTemp179 = std::max<float>(fTemp178, fVec131[2]);
			fVec132[0] = fTemp179;
			float fTemp180 = std::max<float>(fTemp179, fVec132[4]);
			fVec133[0] = fTemp180;
			float fTemp181 = std::max<float>(fTemp180, fVec133[8]);
			fVec134[IOTA0 & 31] = fTemp181;
			float fTemp182 = std::max<float>(fTemp181, fVec134[(IOTA0 - 16) & 31]);
			fVec135[IOTA0 & 63] = fTemp182;
			float fTemp183 = std::max<float>(fTemp182, fVec135[(IOTA0 - 32) & 63]);
			fVec136[IOTA0 & 127] = fTemp183;
			float fTemp184 = std::max<float>(fTemp183, fVec136[(IOTA0 - 64) & 127]);
			fVec137[IOTA0 & 255] = fTemp184;
			float fTemp185 = std::max<float>(fTemp184, fVec137[(IOTA0 - 128) & 255]);
			fVec138[IOTA0 & 511] = fTemp185;
			float fTemp186 = std::max<float>(fTemp185, fVec138[(IOTA0 - 256) & 511]);
			fVec139[IOTA0 & 1023] = fTemp186;
			float fTemp187 = std::max<float>(fTemp186, fVec139[(IOTA0 - 512) & 1023]);
			fVec140[IOTA0 & 2047] = fTemp187;
			fVec141[IOTA0 & 4095] = std::max<float>(fTemp187, fVec140[(IOTA0 - 1024) & 2047]);
			float fTemp188 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst115) ? fTemp166 : -3.4028235e+38f), ((iConst116) ? fVec131[iConst115] : -3.4028235e+38f)), ((iConst117) ? fVec132[iConst118] : -3.4028235e+38f)), ((iConst119) ? fVec133[iConst120] : -3.4028235e+38f)), ((iConst121) ? fVec134[(IOTA0 - iConst122) & 31] : -3.4028235e+38f)), ((iConst123) ? fVec135[(IOTA0 - iConst124) & 63] : -3.4028235e+38f)), ((iConst125) ? fVec136[(IOTA0 - iConst126) & 127] : -3.4028235e+38f)), ((iConst127) ? fVec137[(IOTA0 - iConst128) & 255] : -3.4028235e+38f)), ((iConst129) ? fVec138[(IOTA0 - iConst130) & 511] : -3.4028235e+38f)), ((iConst131) ? fVec139[(IOTA0 - iConst132) & 1023] : -3.4028235e+38f)), ((iConst133) ? fVec140[(IOTA0 - iConst134) & 2047] : -3.4028235e+38f)), ((iConst135) ? fVec141[(IOTA0 - iConst136) & 4095] : -3.4028235e+38f))));
			int iTemp189 = (fTemp188 > fSlow37) + (fTemp188 > fSlow39);
			float fTemp190 = fTemp188 + 4e+01f;
			float fTemp191 = std::max<float>(fSlow32, fSlow66 * ((iTemp189 == 0) ? fTemp190 - fSlow4 : ((iTemp189 == 1) ? fSlow40 * mydsp_faustpower2_f(fTemp190 - fSlow38) : 0.0f)));
			float fTemp192 = (((fSlow65 * fTemp191) > fRec106[1]) ? fSlow74 : fSlow71);
			fRec106[0] = fSlow65 * fTemp191 * (1.0f - fTemp192) + fRec106[1] * fTemp192;
			float fTemp193 = std::max<float>(fTemp172, fVec130[1]);
			fVec142[0] = fTemp193;
			float fTemp194 = std::max<float>(fTemp193, fVec142[2]);
			fVec143[0] = fTemp194;
			float fTemp195 = std::max<float>(fTemp194, fVec143[4]);
			fVec144[0] = fTemp195;
			float fTemp196 = std::max<float>(fTemp195, fVec144[8]);
			fVec145[IOTA0 & 31] = fTemp196;
			float fTemp197 = std::max<float>(fTemp196, fVec145[(IOTA0 - 16) & 31]);
			fVec146[IOTA0 & 63] = fTemp197;
			float fTemp198 = std::max<float>(fTemp197, fVec146[(IOTA0 - 32) & 63]);
			fVec147[IOTA0 & 127] = fTemp198;
			float fTemp199 = std::max<float>(fTemp198, fVec147[(IOTA0 - 64) & 127]);
			fVec148[IOTA0 & 255] = fTemp199;
			float fTemp200 = std::max<float>(fTemp199, fVec148[(IOTA0 - 128) & 255]);
			fVec149[IOTA0 & 511] = fTemp200;
			float fTemp201 = std::max<float>(fTemp200, fVec149[(IOTA0 - 256) & 511]);
			fVec150[IOTA0 & 1023] = fTemp201;
			float fTemp202 = std::max<float>(fTemp201, fVec150[(IOTA0 - 512) & 1023]);
			fVec151[IOTA0 & 2047] = fTemp202;
			fVec152[IOTA0 & 4095] = std::max<float>(fTemp202, fVec151[(IOTA0 - 1024) & 2047]);
			float fTemp203 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst115) ? fTemp172 : -3.4028235e+38f), ((iConst116) ? fVec142[iConst115] : -3.4028235e+38f)), ((iConst117) ? fVec143[iConst118] : -3.4028235e+38f)), ((iConst119) ? fVec144[iConst120] : -3.4028235e+38f)), ((iConst121) ? fVec145[(IOTA0 - iConst122) & 31] : -3.4028235e+38f)), ((iConst123) ? fVec146[(IOTA0 - iConst124) & 63] : -3.4028235e+38f)), ((iConst125) ? fVec147[(IOTA0 - iConst126) & 127] : -3.4028235e+38f)), ((iConst127) ? fVec148[(IOTA0 - iConst128) & 255] : -3.4028235e+38f)), ((iConst129) ? fVec149[(IOTA0 - iConst130) & 511] : -3.4028235e+38f)), ((iConst131) ? fVec150[(IOTA0 - iConst132) & 1023] : -3.4028235e+38f)), ((iConst133) ? fVec151[(IOTA0 - iConst134) & 2047] : -3.4028235e+38f)), ((iConst135) ? fVec152[(IOTA0 - iConst136) & 4095] : -3.4028235e+38f))));
			int iTemp204 = (fTemp203 > fSlow37) + (fTemp203 > fSlow39);
			float fTemp205 = fTemp203 + 4e+01f;
			float fTemp206 = std::max<float>(fSlow32, fSlow66 * ((iTemp204 == 0) ? fTemp205 - fSlow4 : ((iTemp204 == 1) ? fSlow40 * mydsp_faustpower2_f(fTemp205 - fSlow38) : 0.0f)));
			float fTemp207 = (((fSlow65 * fTemp206) > fRec107[1]) ? fSlow74 : fSlow71);
			fRec107[0] = fSlow65 * fTemp206 * (1.0f - fTemp207) + fRec107[1] * fTemp207;
			float fTemp208 = std::min<float>(fSlow12 + std::min<float>(fRec82[0], fRec94[0]), std::max<float>(fRec106[0], fRec107[0]));
			fVbargraph6 = FAUSTFLOAT(std::min<float>(12.0f, std::max<float>(-12.0f, fTemp208)));
			float fTemp209 = std::pow(1e+01f, 0.025f * fTemp208);
			float fTemp210 = std::sqrt(fTemp209);
			float fTemp211 = fRec78[1] + fConst137 * ((fTemp119 - fRec79[1]) / fTemp210);
			float fTemp212 = fConst137 * ((fConst137 / fTemp210 + 1.4285715f) / fTemp210) + 1.0f;
			float fTemp213 = fTemp211 / fTemp212;
			fRec78[0] = 2.0f * fTemp213 - fRec78[1];
			float fTemp214 = fTemp210 * fTemp212;
			float fTemp215 = fRec79[1] + fConst137 * (fTemp211 / fTemp214);
			fRec79[0] = 2.0f * fTemp215 - fRec79[1];
			float fRec80 = fTemp213;
			float fRec81 = fTemp215;
			float fTemp216 = mydsp_faustpower2_f(fTemp209) + -1.0f;
			float fTemp217 = fRec81 * fTemp216;
			float fTemp218 = fTemp119 + fTemp217;
			float fTemp219 = fTemp209 + -1.0f;
			float fTemp220 = fRec80 * fTemp219;
			float fTemp221 = fTemp119 + 1.4285715f * fTemp220 + fTemp217;
			fRec114[0] = fConst141 * (fConst166 * fRec85[0] + fConst170 * fRec85[1] + fConst166 * fRec85[2]) - fConst140 * (fConst168 * fRec114[2] + fConst167 * fRec114[1]);
			fRec113[0] = fConst140 * (fConst166 * fRec114[0] + fConst170 * fRec114[1] + fConst166 * fRec114[2]) - fConst139 * (fConst169 * fRec113[2] + fConst167 * fRec113[1]);
			float fTemp222 = std::fabs(fConst139 * (fConst166 * fRec113[0] + fConst170 * fRec113[1] + fConst166 * fRec113[2]));
			fVec153[0] = fTemp222;
			float fTemp223 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp222));
			int iTemp224 = (fTemp223 > fSlow79) + (fTemp223 > fSlow80);
			float fTemp225 = fTemp223 + -6.0f - fSlow4;
			float fTemp226 = 0.0f - fSlow76 * std::max<float>(0.0f, ((iTemp224 == 0) ? 0.0f : ((iTemp224 == 1) ? fSlow56 * mydsp_faustpower2_f(fSlow78 + fTemp225) : fSlow77 + fTemp225)));
			float fTemp227 = ((fTemp226 > fRec112[1]) ? fSlow87 : fSlow84);
			fRec112[0] = fTemp226 * (1.0f - fTemp227) + fRec112[1] * fTemp227;
			fRec117[0] = fConst141 * (fConst166 * fRec97[0] + fConst170 * fRec97[1] + fConst166 * fRec97[2]) - fConst140 * (fConst168 * fRec117[2] + fConst167 * fRec117[1]);
			fRec116[0] = fConst140 * (fConst166 * fRec117[0] + fConst170 * fRec117[1] + fConst166 * fRec117[2]) - fConst139 * (fConst169 * fRec116[2] + fConst167 * fRec116[1]);
			float fTemp228 = std::fabs(fConst139 * (fConst166 * fRec116[0] + fConst170 * fRec116[1] + fConst166 * fRec116[2]));
			fVec154[0] = fTemp228;
			float fTemp229 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp228));
			int iTemp230 = (fTemp229 > fSlow79) + (fTemp229 > fSlow80);
			float fTemp231 = fTemp229 + -6.0f - fSlow4;
			float fTemp232 = 0.0f - fSlow76 * std::max<float>(0.0f, ((iTemp230 == 0) ? 0.0f : ((iTemp230 == 1) ? fSlow56 * mydsp_faustpower2_f(fSlow78 + fTemp231) : fSlow77 + fTemp231)));
			float fTemp233 = ((fTemp232 > fRec115[1]) ? fSlow87 : fSlow84);
			fRec115[0] = fTemp232 * (1.0f - fTemp233) + fRec115[1] * fTemp233;
			float fTemp234 = std::max<float>(fTemp222, fVec153[1]);
			fVec155[0] = fTemp234;
			float fTemp235 = std::max<float>(fTemp234, fVec155[2]);
			fVec156[0] = fTemp235;
			float fTemp236 = std::max<float>(fTemp235, fVec156[4]);
			fVec157[0] = fTemp236;
			float fTemp237 = std::max<float>(fTemp236, fVec157[8]);
			fVec158[IOTA0 & 31] = fTemp237;
			float fTemp238 = std::max<float>(fTemp237, fVec158[(IOTA0 - 16) & 31]);
			fVec159[IOTA0 & 63] = fTemp238;
			float fTemp239 = std::max<float>(fTemp238, fVec159[(IOTA0 - 32) & 63]);
			fVec160[IOTA0 & 127] = fTemp239;
			float fTemp240 = std::max<float>(fTemp239, fVec160[(IOTA0 - 64) & 127]);
			fVec161[IOTA0 & 255] = fTemp240;
			float fTemp241 = std::max<float>(fTemp240, fVec161[(IOTA0 - 128) & 255]);
			fVec162[IOTA0 & 511] = fTemp241;
			float fTemp242 = std::max<float>(fTemp241, fVec162[(IOTA0 - 256) & 511]);
			fVec163[IOTA0 & 1023] = fTemp242;
			float fTemp243 = std::max<float>(fTemp242, fVec163[(IOTA0 - 512) & 1023]);
			fVec164[IOTA0 & 2047] = fTemp243;
			fVec165[IOTA0 & 4095] = std::max<float>(fTemp243, fVec164[(IOTA0 - 1024) & 2047]);
			float fTemp244 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst115) ? fTemp222 : -3.4028235e+38f), ((iConst116) ? fVec155[iConst115] : -3.4028235e+38f)), ((iConst117) ? fVec156[iConst118] : -3.4028235e+38f)), ((iConst119) ? fVec157[iConst120] : -3.4028235e+38f)), ((iConst121) ? fVec158[(IOTA0 - iConst122) & 31] : -3.4028235e+38f)), ((iConst123) ? fVec159[(IOTA0 - iConst124) & 63] : -3.4028235e+38f)), ((iConst125) ? fVec160[(IOTA0 - iConst126) & 127] : -3.4028235e+38f)), ((iConst127) ? fVec161[(IOTA0 - iConst128) & 255] : -3.4028235e+38f)), ((iConst129) ? fVec162[(IOTA0 - iConst130) & 511] : -3.4028235e+38f)), ((iConst131) ? fVec163[(IOTA0 - iConst132) & 1023] : -3.4028235e+38f)), ((iConst133) ? fVec164[(IOTA0 - iConst134) & 2047] : -3.4028235e+38f)), ((iConst135) ? fVec165[(IOTA0 - iConst136) & 4095] : -3.4028235e+38f))));
			int iTemp245 = (fTemp244 > fSlow37) + (fTemp244 > fSlow39);
			float fTemp246 = fTemp244 + 4e+01f;
			float fTemp247 = std::max<float>(fSlow32, fSlow66 * ((iTemp245 == 0) ? fTemp246 - fSlow4 : ((iTemp245 == 1) ? fSlow40 * mydsp_faustpower2_f(fTemp246 - fSlow38) : 0.0f)));
			float fTemp248 = (((fSlow65 * fTemp247) > fRec118[1]) ? fSlow94 : fSlow91);
			fRec118[0] = fSlow65 * fTemp247 * (1.0f - fTemp248) + fRec118[1] * fTemp248;
			float fTemp249 = std::max<float>(fTemp228, fVec154[1]);
			fVec166[0] = fTemp249;
			float fTemp250 = std::max<float>(fTemp249, fVec166[2]);
			fVec167[0] = fTemp250;
			float fTemp251 = std::max<float>(fTemp250, fVec167[4]);
			fVec168[0] = fTemp251;
			float fTemp252 = std::max<float>(fTemp251, fVec168[8]);
			fVec169[IOTA0 & 31] = fTemp252;
			float fTemp253 = std::max<float>(fTemp252, fVec169[(IOTA0 - 16) & 31]);
			fVec170[IOTA0 & 63] = fTemp253;
			float fTemp254 = std::max<float>(fTemp253, fVec170[(IOTA0 - 32) & 63]);
			fVec171[IOTA0 & 127] = fTemp254;
			float fTemp255 = std::max<float>(fTemp254, fVec171[(IOTA0 - 64) & 127]);
			fVec172[IOTA0 & 255] = fTemp255;
			float fTemp256 = std::max<float>(fTemp255, fVec172[(IOTA0 - 128) & 255]);
			fVec173[IOTA0 & 511] = fTemp256;
			float fTemp257 = std::max<float>(fTemp256, fVec173[(IOTA0 - 256) & 511]);
			fVec174[IOTA0 & 1023] = fTemp257;
			float fTemp258 = std::max<float>(fTemp257, fVec174[(IOTA0 - 512) & 1023]);
			fVec175[IOTA0 & 2047] = fTemp258;
			fVec176[IOTA0 & 4095] = std::max<float>(fTemp258, fVec175[(IOTA0 - 1024) & 2047]);
			float fTemp259 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst115) ? fTemp228 : -3.4028235e+38f), ((iConst116) ? fVec166[iConst115] : -3.4028235e+38f)), ((iConst117) ? fVec167[iConst118] : -3.4028235e+38f)), ((iConst119) ? fVec168[iConst120] : -3.4028235e+38f)), ((iConst121) ? fVec169[(IOTA0 - iConst122) & 31] : -3.4028235e+38f)), ((iConst123) ? fVec170[(IOTA0 - iConst124) & 63] : -3.4028235e+38f)), ((iConst125) ? fVec171[(IOTA0 - iConst126) & 127] : -3.4028235e+38f)), ((iConst127) ? fVec172[(IOTA0 - iConst128) & 255] : -3.4028235e+38f)), ((iConst129) ? fVec173[(IOTA0 - iConst130) & 511] : -3.4028235e+38f)), ((iConst131) ? fVec174[(IOTA0 - iConst132) & 1023] : -3.4028235e+38f)), ((iConst133) ? fVec175[(IOTA0 - iConst134) & 2047] : -3.4028235e+38f)), ((iConst135) ? fVec176[(IOTA0 - iConst136) & 4095] : -3.4028235e+38f))));
			int iTemp260 = (fTemp259 > fSlow37) + (fTemp259 > fSlow39);
			float fTemp261 = fTemp259 + 4e+01f;
			float fTemp262 = std::max<float>(fSlow32, fSlow66 * ((iTemp260 == 0) ? fTemp261 - fSlow4 : ((iTemp260 == 1) ? fSlow40 * mydsp_faustpower2_f(fTemp261 - fSlow38) : 0.0f)));
			float fTemp263 = (((fSlow65 * fTemp262) > fRec119[1]) ? fSlow94 : fSlow91);
			fRec119[0] = fSlow65 * fTemp262 * (1.0f - fTemp263) + fRec119[1] * fTemp263;
			float fTemp264 = std::min<float>(fSlow12 + std::min<float>(fRec112[0], fRec115[0]), std::max<float>(fRec118[0], fRec119[0]));
			fVbargraph7 = FAUSTFLOAT(std::min<float>(12.0f, std::max<float>(-12.0f, fTemp264)));
			float fTemp265 = 0.025f * fTemp264;
			float fTemp266 = std::pow(1e+01f, 0.0f - fTemp265);
			float fTemp267 = std::sqrt(fTemp266);
			float fTemp268 = fRec108[1] + fConst137 * ((fTemp221 - fRec109[1]) / fTemp267);
			float fTemp269 = fConst137 * ((fConst137 / fTemp267 + 1.4285715f) / fTemp267) + 1.0f;
			float fTemp270 = fTemp268 / fTemp269;
			fRec108[0] = 2.0f * fTemp270 - fRec108[1];
			float fTemp271 = fTemp267 * fTemp269;
			float fTemp272 = fRec109[1] + fConst137 * (fTemp268 / fTemp271);
			fRec109[0] = 2.0f * fTemp272 - fRec109[1];
			float fRec110 = fTemp270;
			float fRec111 = fTemp272;
			float fTemp273 = mydsp_faustpower2_f(fTemp266) + -1.0f;
			float fTemp274 = fRec111 * fTemp273;
			float fTemp275 = fTemp218 + fTemp274;
			float fTemp276 = fTemp266 + -1.0f;
			float fTemp277 = fTemp220 + fRec110 * fTemp276;
			float fTemp278 = 1.4285715f * fTemp277 + fTemp218 + fTemp274;
			float fTemp279 = std::pow(1e+01f, fTemp265);
			float fTemp280 = std::sqrt(fTemp279);
			float fTemp281 = fRec120[1] + fConst142 * ((fTemp278 - fRec121[1]) / fTemp280);
			float fTemp282 = fConst142 * ((fConst142 / fTemp280 + 1.4285715f) / fTemp280) + 1.0f;
			float fTemp283 = fTemp281 / fTemp282;
			fRec120[0] = 2.0f * fTemp283 - fRec120[1];
			float fTemp284 = fTemp280 * fTemp282;
			float fTemp285 = fRec121[1] + fConst142 * (fTemp281 / fTemp284);
			fRec121[0] = 2.0f * fTemp285 - fRec121[1];
			float fRec122 = fTemp283;
			float fRec123 = fTemp285;
			float fTemp286 = mydsp_faustpower2_f(fTemp279) + -1.0f;
			float fTemp287 = fRec123 * fTemp286;
			float fTemp288 = fTemp275 + fTemp287;
			float fTemp289 = fTemp279 + -1.0f;
			float fTemp290 = fTemp277 + fRec122 * fTemp289;
			float fTemp291 = 1.4285715f * fTemp290 + fTemp275 + fTemp287;
			fRec130[0] = fConst146 * (fConst160 * fRec88[0] + fConst171 * fRec88[1] + fConst160 * fRec88[2]) - fConst145 * (fConst162 * fRec130[2] + fConst161 * fRec130[1]);
			fRec129[0] = fConst145 * (fConst160 * fRec130[0] + fConst171 * fRec130[1] + fConst160 * fRec130[2]) - fConst144 * (fConst163 * fRec129[2] + fConst161 * fRec129[1]);
			float fTemp292 = std::fabs(fConst144 * (fConst160 * fRec129[0] + fConst171 * fRec129[1] + fConst160 * fRec129[2]));
			fVec177[0] = fTemp292;
			float fTemp293 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp292));
			int iTemp294 = (fTemp293 > fSlow99) + (fTemp293 > fSlow100);
			float fTemp295 = fTemp293 + -4.0f - fSlow4;
			float fTemp296 = 0.0f - fSlow95 * std::max<float>(0.0f, ((iTemp294 == 0) ? 0.0f : ((iTemp294 == 1) ? fSlow101 * mydsp_faustpower2_f(fSlow98 + fTemp295) : fSlow77 + fTemp295)));
			float fTemp297 = ((fTemp296 > fRec128[1]) ? fSlow107 : fSlow104);
			fRec128[0] = fTemp296 * (1.0f - fTemp297) + fRec128[1] * fTemp297;
			fRec133[0] = fConst146 * (fConst160 * fRec100[0] + fConst171 * fRec100[1] + fConst160 * fRec100[2]) - fConst145 * (fConst162 * fRec133[2] + fConst161 * fRec133[1]);
			fRec132[0] = fConst145 * (fConst160 * fRec133[0] + fConst171 * fRec133[1] + fConst160 * fRec133[2]) - fConst144 * (fConst163 * fRec132[2] + fConst161 * fRec132[1]);
			float fTemp298 = std::fabs(fConst144 * (fConst160 * fRec132[0] + fConst171 * fRec132[1] + fConst160 * fRec132[2]));
			fVec178[0] = fTemp298;
			float fTemp299 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp298));
			int iTemp300 = (fTemp299 > fSlow99) + (fTemp299 > fSlow100);
			float fTemp301 = fTemp299 + -4.0f - fSlow4;
			float fTemp302 = 0.0f - fSlow95 * std::max<float>(0.0f, ((iTemp300 == 0) ? 0.0f : ((iTemp300 == 1) ? fSlow101 * mydsp_faustpower2_f(fSlow98 + fTemp301) : fSlow77 + fTemp301)));
			float fTemp303 = ((fTemp302 > fRec131[1]) ? fSlow107 : fSlow104);
			fRec131[0] = fTemp302 * (1.0f - fTemp303) + fRec131[1] * fTemp303;
			float fTemp304 = std::max<float>(fTemp292, fVec177[1]);
			fVec179[0] = fTemp304;
			float fTemp305 = std::max<float>(fTemp304, fVec179[2]);
			fVec180[0] = fTemp305;
			float fTemp306 = std::max<float>(fTemp305, fVec180[4]);
			fVec181[0] = fTemp306;
			float fTemp307 = std::max<float>(fTemp306, fVec181[8]);
			fVec182[IOTA0 & 31] = fTemp307;
			float fTemp308 = std::max<float>(fTemp307, fVec182[(IOTA0 - 16) & 31]);
			fVec183[IOTA0 & 63] = fTemp308;
			float fTemp309 = std::max<float>(fTemp308, fVec183[(IOTA0 - 32) & 63]);
			fVec184[IOTA0 & 127] = fTemp309;
			float fTemp310 = std::max<float>(fTemp309, fVec184[(IOTA0 - 64) & 127]);
			fVec185[IOTA0 & 255] = fTemp310;
			float fTemp311 = std::max<float>(fTemp310, fVec185[(IOTA0 - 128) & 255]);
			fVec186[IOTA0 & 511] = fTemp311;
			float fTemp312 = std::max<float>(fTemp311, fVec186[(IOTA0 - 256) & 511]);
			fVec187[IOTA0 & 1023] = fTemp312;
			float fTemp313 = std::max<float>(fTemp312, fVec187[(IOTA0 - 512) & 1023]);
			fVec188[IOTA0 & 2047] = fTemp313;
			fVec189[IOTA0 & 4095] = std::max<float>(fTemp313, fVec188[(IOTA0 - 1024) & 2047]);
			float fTemp314 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst115) ? fTemp292 : -3.4028235e+38f), ((iConst116) ? fVec179[iConst115] : -3.4028235e+38f)), ((iConst117) ? fVec180[iConst118] : -3.4028235e+38f)), ((iConst119) ? fVec181[iConst120] : -3.4028235e+38f)), ((iConst121) ? fVec182[(IOTA0 - iConst122) & 31] : -3.4028235e+38f)), ((iConst123) ? fVec183[(IOTA0 - iConst124) & 63] : -3.4028235e+38f)), ((iConst125) ? fVec184[(IOTA0 - iConst126) & 127] : -3.4028235e+38f)), ((iConst127) ? fVec185[(IOTA0 - iConst128) & 255] : -3.4028235e+38f)), ((iConst129) ? fVec186[(IOTA0 - iConst130) & 511] : -3.4028235e+38f)), ((iConst131) ? fVec187[(IOTA0 - iConst132) & 1023] : -3.4028235e+38f)), ((iConst133) ? fVec188[(IOTA0 - iConst134) & 2047] : -3.4028235e+38f)), ((iConst135) ? fVec189[(IOTA0 - iConst136) & 4095] : -3.4028235e+38f))));
			int iTemp315 = (fTemp314 > fSlow37) + (fTemp314 > fSlow39);
			float fTemp316 = fTemp314 + 4e+01f;
			float fTemp317 = std::max<float>(fSlow32, fSlow111 * ((iTemp315 == 0) ? fTemp316 - fSlow4 : ((iTemp315 == 1) ? fSlow40 * mydsp_faustpower2_f(fTemp316 - fSlow38) : 0.0f)));
			float fTemp318 = (((fSlow110 * fTemp317) > fRec134[1]) ? fSlow119 : fSlow116);
			fRec134[0] = fSlow110 * fTemp317 * (1.0f - fTemp318) + fRec134[1] * fTemp318;
			float fTemp319 = std::max<float>(fTemp298, fVec178[1]);
			fVec190[0] = fTemp319;
			float fTemp320 = std::max<float>(fTemp319, fVec190[2]);
			fVec191[0] = fTemp320;
			float fTemp321 = std::max<float>(fTemp320, fVec191[4]);
			fVec192[0] = fTemp321;
			float fTemp322 = std::max<float>(fTemp321, fVec192[8]);
			fVec193[IOTA0 & 31] = fTemp322;
			float fTemp323 = std::max<float>(fTemp322, fVec193[(IOTA0 - 16) & 31]);
			fVec194[IOTA0 & 63] = fTemp323;
			float fTemp324 = std::max<float>(fTemp323, fVec194[(IOTA0 - 32) & 63]);
			fVec195[IOTA0 & 127] = fTemp324;
			float fTemp325 = std::max<float>(fTemp324, fVec195[(IOTA0 - 64) & 127]);
			fVec196[IOTA0 & 255] = fTemp325;
			float fTemp326 = std::max<float>(fTemp325, fVec196[(IOTA0 - 128) & 255]);
			fVec197[IOTA0 & 511] = fTemp326;
			float fTemp327 = std::max<float>(fTemp326, fVec197[(IOTA0 - 256) & 511]);
			fVec198[IOTA0 & 1023] = fTemp327;
			float fTemp328 = std::max<float>(fTemp327, fVec198[(IOTA0 - 512) & 1023]);
			fVec199[IOTA0 & 2047] = fTemp328;
			fVec200[IOTA0 & 4095] = std::max<float>(fTemp328, fVec199[(IOTA0 - 1024) & 2047]);
			float fTemp329 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst115) ? fTemp298 : -3.4028235e+38f), ((iConst116) ? fVec190[iConst115] : -3.4028235e+38f)), ((iConst117) ? fVec191[iConst118] : -3.4028235e+38f)), ((iConst119) ? fVec192[iConst120] : -3.4028235e+38f)), ((iConst121) ? fVec193[(IOTA0 - iConst122) & 31] : -3.4028235e+38f)), ((iConst123) ? fVec194[(IOTA0 - iConst124) & 63] : -3.4028235e+38f)), ((iConst125) ? fVec195[(IOTA0 - iConst126) & 127] : -3.4028235e+38f)), ((iConst127) ? fVec196[(IOTA0 - iConst128) & 255] : -3.4028235e+38f)), ((iConst129) ? fVec197[(IOTA0 - iConst130) & 511] : -3.4028235e+38f)), ((iConst131) ? fVec198[(IOTA0 - iConst132) & 1023] : -3.4028235e+38f)), ((iConst133) ? fVec199[(IOTA0 - iConst134) & 2047] : -3.4028235e+38f)), ((iConst135) ? fVec200[(IOTA0 - iConst136) & 4095] : -3.4028235e+38f))));
			int iTemp330 = (fTemp329 > fSlow37) + (fTemp329 > fSlow39);
			float fTemp331 = fTemp329 + 4e+01f;
			float fTemp332 = std::max<float>(fSlow32, fSlow111 * ((iTemp330 == 0) ? fTemp331 - fSlow4 : ((iTemp330 == 1) ? fSlow40 * mydsp_faustpower2_f(fTemp331 - fSlow38) : 0.0f)));
			float fTemp333 = (((fSlow110 * fTemp332) > fRec135[1]) ? fSlow119 : fSlow116);
			fRec135[0] = fSlow110 * fTemp332 * (1.0f - fTemp333) + fRec135[1] * fTemp333;
			float fTemp334 = std::min<float>(fSlow12 + std::min<float>(fRec128[0], fRec131[0]), std::max<float>(fRec134[0], fRec135[0]));
			fVbargraph8 = FAUSTFLOAT(std::min<float>(12.0f, std::max<float>(-12.0f, fTemp334)));
			float fTemp335 = 0.025f * fTemp334;
			float fTemp336 = std::pow(1e+01f, 0.0f - fTemp335);
			float fTemp337 = std::sqrt(fTemp336);
			float fTemp338 = fRec124[1] + fConst142 * ((fTemp291 - fRec125[1]) / fTemp337);
			float fTemp339 = fConst142 * ((fConst142 / fTemp337 + 1.4285715f) / fTemp337) + 1.0f;
			float fTemp340 = fTemp338 / fTemp339;
			fRec124[0] = 2.0f * fTemp340 - fRec124[1];
			float fTemp341 = fTemp337 * fTemp339;
			float fTemp342 = fRec125[1] + fConst142 * (fTemp338 / fTemp341);
			fRec125[0] = 2.0f * fTemp342 - fRec125[1];
			float fRec126 = fTemp340;
			float fRec127 = fTemp342;
			float fTemp343 = mydsp_faustpower2_f(fTemp336) + -1.0f;
			float fTemp344 = fRec127 * fTemp343;
			float fTemp345 = fTemp288 + fTemp344;
			float fTemp346 = fTemp336 + -1.0f;
			float fTemp347 = fTemp290 + fRec126 * fTemp346;
			float fTemp348 = 1.4285715f * fTemp347 + fTemp288 + fTemp344;
			float fTemp349 = std::pow(1e+01f, fTemp335);
			float fTemp350 = std::sqrt(fTemp349);
			float fTemp351 = fRec136[1] + fConst147 * ((fTemp348 - fRec137[1]) / fTemp350);
			float fTemp352 = fConst147 * ((fConst147 / fTemp350 + 1.4285715f) / fTemp350) + 1.0f;
			float fTemp353 = fTemp351 / fTemp352;
			fRec136[0] = 2.0f * fTemp353 - fRec136[1];
			float fTemp354 = fTemp350 * fTemp352;
			float fTemp355 = fRec137[1] + fConst147 * (fTemp351 / fTemp354);
			fRec137[0] = 2.0f * fTemp355 - fRec137[1];
			float fRec138 = fTemp353;
			float fRec139 = fTemp355;
			float fTemp356 = mydsp_faustpower2_f(fTemp349) + -1.0f;
			float fTemp357 = fRec139 * fTemp356;
			float fTemp358 = fTemp349 + -1.0f;
			float fTemp359 = fTemp347 + fRec138 * fTemp358;
			float fTemp360 = 1.4285715f * fTemp359 + fTemp345 + fTemp357;
			fRec146[0] = fConst151 * (fConst154 * fRec91[0] + fConst172 * fRec91[1] + fConst154 * fRec91[2]) - fConst150 * (fConst156 * fRec146[2] + fConst155 * fRec146[1]);
			fRec145[0] = fConst150 * (fConst154 * fRec146[0] + fConst172 * fRec146[1] + fConst154 * fRec146[2]) - fConst149 * (fConst157 * fRec145[2] + fConst155 * fRec145[1]);
			float fTemp361 = std::fabs(fConst149 * (fConst154 * fRec145[0] + fConst172 * fRec145[1] + fConst154 * fRec145[2]));
			fVec201[0] = fTemp361;
			float fTemp362 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp361));
			int iTemp363 = (fTemp362 > fSlow124) + (fTemp362 > fSlow125);
			float fTemp364 = fTemp362 + -2.0f - fSlow4;
			float fTemp365 = 0.0f - fSlow120 * std::max<float>(0.0f, ((iTemp363 == 0) ? 0.0f : ((iTemp363 == 1) ? fSlow126 * mydsp_faustpower2_f(fSlow123 + fTemp364) : fSlow15 + fTemp364)));
			float fTemp366 = ((fTemp365 > fRec144[1]) ? fSlow132 : fSlow129);
			fRec144[0] = fTemp365 * (1.0f - fTemp366) + fRec144[1] * fTemp366;
			fRec149[0] = fConst151 * (fConst154 * fRec103[0] + fConst172 * fRec103[1] + fConst154 * fRec103[2]) - fConst150 * (fConst156 * fRec149[2] + fConst155 * fRec149[1]);
			fRec148[0] = fConst150 * (fConst154 * fRec149[0] + fConst172 * fRec149[1] + fConst154 * fRec149[2]) - fConst149 * (fConst157 * fRec148[2] + fConst155 * fRec148[1]);
			float fTemp367 = std::fabs(fConst149 * (fConst154 * fRec148[0] + fConst172 * fRec148[1] + fConst154 * fRec148[2]));
			fVec202[0] = fTemp367;
			float fTemp368 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp367));
			int iTemp369 = (fTemp368 > fSlow124) + (fTemp368 > fSlow125);
			float fTemp370 = fTemp368 + -2.0f - fSlow4;
			float fTemp371 = 0.0f - fSlow120 * std::max<float>(0.0f, ((iTemp369 == 0) ? 0.0f : ((iTemp369 == 1) ? fSlow126 * mydsp_faustpower2_f(fSlow123 + fTemp370) : fSlow15 + fTemp370)));
			float fTemp372 = ((fTemp371 > fRec147[1]) ? fSlow132 : fSlow129);
			fRec147[0] = fTemp371 * (1.0f - fTemp372) + fRec147[1] * fTemp372;
			float fTemp373 = std::max<float>(fTemp361, fVec201[1]);
			fVec203[0] = fTemp373;
			float fTemp374 = std::max<float>(fTemp373, fVec203[2]);
			fVec204[0] = fTemp374;
			float fTemp375 = std::max<float>(fTemp374, fVec204[4]);
			fVec205[0] = fTemp375;
			float fTemp376 = std::max<float>(fTemp375, fVec205[8]);
			fVec206[IOTA0 & 31] = fTemp376;
			float fTemp377 = std::max<float>(fTemp376, fVec206[(IOTA0 - 16) & 31]);
			fVec207[IOTA0 & 63] = fTemp377;
			float fTemp378 = std::max<float>(fTemp377, fVec207[(IOTA0 - 32) & 63]);
			fVec208[IOTA0 & 127] = fTemp378;
			float fTemp379 = std::max<float>(fTemp378, fVec208[(IOTA0 - 64) & 127]);
			fVec209[IOTA0 & 255] = fTemp379;
			float fTemp380 = std::max<float>(fTemp379, fVec209[(IOTA0 - 128) & 255]);
			fVec210[IOTA0 & 511] = fTemp380;
			float fTemp381 = std::max<float>(fTemp380, fVec210[(IOTA0 - 256) & 511]);
			fVec211[IOTA0 & 1023] = fTemp381;
			float fTemp382 = std::max<float>(fTemp381, fVec211[(IOTA0 - 512) & 1023]);
			fVec212[IOTA0 & 2047] = fTemp382;
			fVec213[IOTA0 & 4095] = std::max<float>(fTemp382, fVec212[(IOTA0 - 1024) & 2047]);
			float fTemp383 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst115) ? fTemp361 : -3.4028235e+38f), ((iConst116) ? fVec203[iConst115] : -3.4028235e+38f)), ((iConst117) ? fVec204[iConst118] : -3.4028235e+38f)), ((iConst119) ? fVec205[iConst120] : -3.4028235e+38f)), ((iConst121) ? fVec206[(IOTA0 - iConst122) & 31] : -3.4028235e+38f)), ((iConst123) ? fVec207[(IOTA0 - iConst124) & 63] : -3.4028235e+38f)), ((iConst125) ? fVec208[(IOTA0 - iConst126) & 127] : -3.4028235e+38f)), ((iConst127) ? fVec209[(IOTA0 - iConst128) & 255] : -3.4028235e+38f)), ((iConst129) ? fVec210[(IOTA0 - iConst130) & 511] : -3.4028235e+38f)), ((iConst131) ? fVec211[(IOTA0 - iConst132) & 1023] : -3.4028235e+38f)), ((iConst133) ? fVec212[(IOTA0 - iConst134) & 2047] : -3.4028235e+38f)), ((iConst135) ? fVec213[(IOTA0 - iConst136) & 4095] : -3.4028235e+38f))));
			int iTemp384 = (fTemp383 > fSlow37) + (fTemp383 > fSlow39);
			float fTemp385 = fTemp383 + 4e+01f;
			float fTemp386 = std::max<float>(fSlow32, fSlow136 * ((iTemp384 == 0) ? fTemp385 - fSlow4 : ((iTemp384 == 1) ? fSlow40 * mydsp_faustpower2_f(fTemp385 - fSlow38) : 0.0f)));
			float fTemp387 = (((fSlow135 * fTemp386) > fRec150[1]) ? fSlow143 : fSlow140);
			fRec150[0] = fSlow135 * fTemp386 * (1.0f - fTemp387) + fRec150[1] * fTemp387;
			float fTemp388 = std::max<float>(fTemp367, fVec202[1]);
			fVec214[0] = fTemp388;
			float fTemp389 = std::max<float>(fTemp388, fVec214[2]);
			fVec215[0] = fTemp389;
			float fTemp390 = std::max<float>(fTemp389, fVec215[4]);
			fVec216[0] = fTemp390;
			float fTemp391 = std::max<float>(fTemp390, fVec216[8]);
			fVec217[IOTA0 & 31] = fTemp391;
			float fTemp392 = std::max<float>(fTemp391, fVec217[(IOTA0 - 16) & 31]);
			fVec218[IOTA0 & 63] = fTemp392;
			float fTemp393 = std::max<float>(fTemp392, fVec218[(IOTA0 - 32) & 63]);
			fVec219[IOTA0 & 127] = fTemp393;
			float fTemp394 = std::max<float>(fTemp393, fVec219[(IOTA0 - 64) & 127]);
			fVec220[IOTA0 & 255] = fTemp394;
			float fTemp395 = std::max<float>(fTemp394, fVec220[(IOTA0 - 128) & 255]);
			fVec221[IOTA0 & 511] = fTemp395;
			float fTemp396 = std::max<float>(fTemp395, fVec221[(IOTA0 - 256) & 511]);
			fVec222[IOTA0 & 1023] = fTemp396;
			float fTemp397 = std::max<float>(fTemp396, fVec222[(IOTA0 - 512) & 1023]);
			fVec223[IOTA0 & 2047] = fTemp397;
			fVec224[IOTA0 & 4095] = std::max<float>(fTemp397, fVec223[(IOTA0 - 1024) & 2047]);
			float fTemp398 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst115) ? fTemp367 : -3.4028235e+38f), ((iConst116) ? fVec214[iConst115] : -3.4028235e+38f)), ((iConst117) ? fVec215[iConst118] : -3.4028235e+38f)), ((iConst119) ? fVec216[iConst120] : -3.4028235e+38f)), ((iConst121) ? fVec217[(IOTA0 - iConst122) & 31] : -3.4028235e+38f)), ((iConst123) ? fVec218[(IOTA0 - iConst124) & 63] : -3.4028235e+38f)), ((iConst125) ? fVec219[(IOTA0 - iConst126) & 127] : -3.4028235e+38f)), ((iConst127) ? fVec220[(IOTA0 - iConst128) & 255] : -3.4028235e+38f)), ((iConst129) ? fVec221[(IOTA0 - iConst130) & 511] : -3.4028235e+38f)), ((iConst131) ? fVec222[(IOTA0 - iConst132) & 1023] : -3.4028235e+38f)), ((iConst133) ? fVec223[(IOTA0 - iConst134) & 2047] : -3.4028235e+38f)), ((iConst135) ? fVec224[(IOTA0 - iConst136) & 4095] : -3.4028235e+38f))));
			int iTemp399 = (fTemp398 > fSlow37) + (fTemp398 > fSlow39);
			float fTemp400 = fTemp398 + 4e+01f;
			float fTemp401 = std::max<float>(fSlow32, fSlow136 * ((iTemp399 == 0) ? fTemp400 - fSlow4 : ((iTemp399 == 1) ? fSlow40 * mydsp_faustpower2_f(fTemp400 - fSlow38) : 0.0f)));
			float fTemp402 = (((fSlow135 * fTemp401) > fRec151[1]) ? fSlow143 : fSlow140);
			fRec151[0] = fSlow135 * fTemp401 * (1.0f - fTemp402) + fRec151[1] * fTemp402;
			float fTemp403 = std::min<float>(fSlow12 + std::min<float>(fRec144[0], fRec147[0]), std::max<float>(fRec150[0], fRec151[0]));
			fVbargraph9 = FAUSTFLOAT(std::min<float>(12.0f, std::max<float>(-12.0f, fTemp403)));
			float fTemp404 = 0.025f * fTemp403;
			float fTemp405 = std::pow(1e+01f, 0.0f - fTemp404);
			float fTemp406 = std::sqrt(fTemp405);
			float fTemp407 = fRec140[1] + fConst147 * ((fTemp360 - fRec141[1]) / fTemp406);
			float fTemp408 = fConst147 * ((fConst147 / fTemp406 + 1.4285715f) / fTemp406) + 1.0f;
			float fTemp409 = fTemp407 / fTemp408;
			fRec140[0] = 2.0f * fTemp409 - fRec140[1];
			float fTemp410 = fTemp406 * fTemp408;
			float fTemp411 = fRec141[1] + fConst147 * (fTemp407 / fTemp410);
			fRec141[0] = 2.0f * fTemp411 - fRec141[1];
			float fRec142 = fTemp409;
			float fRec143 = fTemp411;
			float fTemp412 = mydsp_faustpower2_f(fTemp405) + -1.0f;
			float fTemp413 = fTemp345 + fTemp357 + fRec143 * fTemp412;
			float fTemp414 = fTemp405 + -1.0f;
			float fTemp415 = fTemp359 + fRec142 * fTemp414;
			float fTemp416 = 1.4285715f * fTemp415 + fTemp413;
			float fTemp417 = std::pow(1e+01f, fTemp404);
			float fTemp418 = std::sqrt(fTemp417);
			float fTemp419 = fRec152[1] + fConst102 * ((fTemp416 - fRec153[1]) / fTemp418);
			float fTemp420 = fConst102 * ((fConst102 / fTemp418 + 1.4285715f) / fTemp418) + 1.0f;
			float fTemp421 = fTemp419 / fTemp420;
			fRec152[0] = 2.0f * fTemp421 - fRec152[1];
			float fTemp422 = fTemp418 * fTemp420;
			float fTemp423 = fRec153[1] + fConst102 * (fTemp419 / fTemp422);
			fRec153[0] = 2.0f * fTemp423 - fRec153[1];
			float fRec154 = fTemp421;
			float fRec155 = fTemp423;
			float fTemp424 = fTemp417 + -1.0f;
			float fTemp425 = mydsp_faustpower2_f(fTemp417) + -1.0f;
			float fTemp426 = fTemp413 + 1.4285715f * (fTemp415 + fRec154 * fTemp424) + fRec155 * fTemp425;
			float fTemp427 = std::sqrt(fTemp165);
			float fTemp428 = fRec156[1] + fConst102 * fTemp427 * (fTemp426 - fRec157[1]);
			float fTemp429 = fConst102 * fTemp427 * (fConst102 * fTemp427 + 1.4285715f) + 1.0f;
			float fTemp430 = fTemp428 / fTemp429;
			fRec156[0] = 2.0f * fTemp430 - fRec156[1];
			float fTemp431 = fRec157[1] + fConst102 * (fTemp427 * fTemp428 / fTemp429);
			fRec157[0] = 2.0f * fTemp431 - fRec157[1];
			float fRec158 = fTemp430;
			float fRec159 = fTemp431;
			float fTemp432 = 1.0f - fTemp165;
			float fTemp433 = 1.0f - mydsp_faustpower2_f(fTemp165);
			float fTemp434 = fRec27[0] * fTemp119 + fTemp120 * (fTemp165 * (fTemp165 * fTemp426 + 1.4285715f * fRec158 * fTemp432) + fRec159 * fTemp433);
			fRec8[0] = fTemp38 * fTemp434;
			float fTemp435 = fRec160[1] + fConst137 * ((fTemp127 - fRec161[1]) / fTemp210);
			float fTemp436 = fTemp435 / fTemp212;
			fRec160[0] = 2.0f * fTemp436 - fRec160[1];
			float fTemp437 = fRec161[1] + fConst137 * (fTemp435 / fTemp214);
			fRec161[0] = 2.0f * fTemp437 - fRec161[1];
			float fRec162 = fTemp436;
			float fRec163 = fTemp437;
			float fTemp438 = fRec162 * fTemp219;
			float fTemp439 = fRec163 * fTemp216;
			float fTemp440 = fTemp127 + 1.4285715f * fTemp438 + fTemp439;
			float fTemp441 = fRec164[1] + fConst137 * ((fTemp440 - fRec165[1]) / fTemp267);
			float fTemp442 = fTemp441 / fTemp269;
			fRec164[0] = 2.0f * fTemp442 - fRec164[1];
			float fTemp443 = fRec165[1] + fConst137 * (fTemp441 / fTemp271);
			fRec165[0] = 2.0f * fTemp443 - fRec165[1];
			float fRec166 = fTemp442;
			float fRec167 = fTemp443;
			float fTemp444 = fTemp438 + fRec166 * fTemp276;
			float fTemp445 = fTemp127 + fTemp439;
			float fTemp446 = fRec167 * fTemp273;
			float fTemp447 = 1.4285715f * fTemp444 + fTemp445 + fTemp446;
			float fTemp448 = fRec168[1] + fConst142 * ((fTemp447 - fRec169[1]) / fTemp280);
			float fTemp449 = fTemp448 / fTemp282;
			fRec168[0] = 2.0f * fTemp449 - fRec168[1];
			float fTemp450 = fRec169[1] + fConst142 * (fTemp448 / fTemp284);
			fRec169[0] = 2.0f * fTemp450 - fRec169[1];
			float fRec170 = fTemp449;
			float fRec171 = fTemp450;
			float fTemp451 = fTemp444 + fRec170 * fTemp289;
			float fTemp452 = fTemp445 + fTemp446;
			float fTemp453 = fRec171 * fTemp286;
			float fTemp454 = 1.4285715f * fTemp451 + fTemp452 + fTemp453;
			float fTemp455 = fRec172[1] + fConst142 * ((fTemp454 - fRec173[1]) / fTemp337);
			float fTemp456 = fTemp455 / fTemp339;
			fRec172[0] = 2.0f * fTemp456 - fRec172[1];
			float fTemp457 = fRec173[1] + fConst142 * (fTemp455 / fTemp341);
			fRec173[0] = 2.0f * fTemp457 - fRec173[1];
			float fRec174 = fTemp456;
			float fRec175 = fTemp457;
			float fTemp458 = fTemp451 + fRec174 * fTemp346;
			float fTemp459 = fTemp452 + fTemp453;
			float fTemp460 = fRec175 * fTemp343;
			float fTemp461 = 1.4285715f * fTemp458 + fTemp459 + fTemp460;
			float fTemp462 = fRec176[1] + fConst147 * ((fTemp461 - fRec177[1]) / fTemp350);
			float fTemp463 = fTemp462 / fTemp352;
			fRec176[0] = 2.0f * fTemp463 - fRec176[1];
			float fTemp464 = fRec177[1] + fConst147 * (fTemp462 / fTemp354);
			fRec177[0] = 2.0f * fTemp464 - fRec177[1];
			float fRec178 = fTemp463;
			float fRec179 = fTemp464;
			float fTemp465 = fTemp458 + fRec178 * fTemp358;
			float fTemp466 = fTemp459 + fTemp460;
			float fTemp467 = fRec179 * fTemp356;
			float fTemp468 = 1.4285715f * fTemp465 + fTemp466 + fTemp467;
			float fTemp469 = fRec180[1] + fConst147 * ((fTemp468 - fRec181[1]) / fTemp406);
			float fTemp470 = fTemp469 / fTemp408;
			fRec180[0] = 2.0f * fTemp470 - fRec180[1];
			float fTemp471 = fRec181[1] + fConst147 * (fTemp469 / fTemp410);
			fRec181[0] = 2.0f * fTemp471 - fRec181[1];
			float fRec182 = fTemp470;
			float fRec183 = fTemp471;
			float fTemp472 = fTemp465 + fRec182 * fTemp414;
			float fTemp473 = fTemp466 + fTemp467;
			float fTemp474 = fRec183 * fTemp412;
			float fTemp475 = 1.4285715f * fTemp472 + fTemp473 + fTemp474;
			float fTemp476 = fRec184[1] + fConst102 * ((fTemp475 - fRec185[1]) / fTemp418);
			float fTemp477 = fTemp476 / fTemp420;
			fRec184[0] = 2.0f * fTemp477 - fRec184[1];
			float fTemp478 = fRec185[1] + fConst102 * (fTemp476 / fTemp422);
			fRec185[0] = 2.0f * fTemp478 - fRec185[1];
			float fRec186 = fTemp477;
			float fRec187 = fTemp478;
			float fTemp479 = 1.4285715f * (fTemp472 + fRec186 * fTemp424) + fTemp473 + fTemp474 + fRec187 * fTemp425;
			float fTemp480 = fRec188[1] + fConst102 * fTemp427 * (fTemp479 - fRec189[1]);
			float fTemp481 = fTemp480 / fTemp429;
			fRec188[0] = 2.0f * fTemp481 - fRec188[1];
			float fTemp482 = fRec189[1] + fConst102 * (fTemp427 * fTemp480 / fTemp429);
			fRec189[0] = 2.0f * fTemp482 - fRec189[1];
			float fRec190 = fTemp481;
			float fRec191 = fTemp482;
			float fTemp483 = fRec27[0] * fTemp127 + fTemp120 * (fTemp165 * (fTemp165 * fTemp479 + 1.4285715f * fRec190 * fTemp432) + fRec191 * fTemp433);
			fRec9[0] = fTemp38 * fTemp483;
			float fTemp484 = fSlow3 * fRec8[0] + fSlow2 * fTemp434;
			fVec225[IOTA0 & 2047] = fTemp484;
			float fTemp485 = fSlow3 * fRec9[0] + fSlow2 * fTemp483;
			fVec226[IOTA0 & 2047] = fTemp485;
			float fTemp486 = std::fabs(std::max<float>(std::fabs(fTemp484), std::fabs(fTemp485)));
			int iTemp487 = (fTemp486 >= fRec7[1]) | (float(iRec6[1]) >= fConst173);
			iRec6[0] = ((iTemp487) ? 0 : iRec6[1] + 1);
			fRec7[0] = ((iTemp487) ? fTemp486 : fRec7[1]);
			fRec5[0] = fConst5 * fRec7[0] + fConst4 * fRec5[1];
			float fTemp488 = std::fabs(fRec5[0]);
			fRec4[0] = std::max<float>(fTemp488, fConst174 * fRec4[1] + fConst175 * fTemp488);
			float fTemp489 = std::min<float>(1.0f, 0.8912509f / std::max<float>(fRec4[0], 1.1920929e-07f));
			fVbargraph10 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp489))));
			float fTemp490 = fTemp489 * (1.0f - fRec3[0]);
			float fTemp491 = fTemp1 * fRec3[0] + fTemp490 * fVec225[(IOTA0 - iConst176) & 2047];
			fVec227[0] = fTemp491;
			fRec0[0] = std::max<float>(fRec0[1] - fConst1, std::min<float>(1e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(0.00031622776f, std::fabs(fTemp491))))));
			fVbargraph11 = FAUSTFLOAT(fRec0[0]);
			output0[i0] = FAUSTFLOAT(fTemp491);
			fVec228[0] = 0.0f - fConst30 * (fConst31 * fRec195[1] - fConst33 * fVec227[1]);
			fRec196[0] = fVec228[1] + fConst30 * (fConst34 * fTemp491 - 2.0f * (fConst35 * fRec196[1] - fConst36 * fVec227[1]));
			fRec195[0] = fRec196[0];
			fVec229[0] = 0.50032705f * fRec195[1] - fConst38 * fRec193[1];
			fRec194[0] = fConst26 * fRec195[1] + fConst37 * (fVec229[1] - fConst39 * fRec194[1] + 0.50032705f * fRec195[0]);
			fRec193[0] = fRec194[0];
			float fTemp492 = mydsp_faustpower2_f(fRec193[0]);
			fVec230[0] = fTemp492;
			float fTemp493 = fTemp492 + fVec230[1];
			fVec231[0] = fTemp493;
			float fTemp494 = fTemp493 + fVec231[2];
			fVec232[0] = fTemp494;
			float fTemp495 = fTemp494 + fVec232[4];
			fVec233[0] = fTemp495;
			float fTemp496 = fTemp495 + fVec233[8];
			fVec234[IOTA0 & 31] = fTemp496;
			float fTemp497 = fTemp496 + fVec234[(IOTA0 - 16) & 31];
			fVec235[IOTA0 & 63] = fTemp497;
			float fTemp498 = fTemp497 + fVec235[(IOTA0 - 32) & 63];
			fVec236[IOTA0 & 127] = fTemp498;
			float fTemp499 = fTemp498 + fVec236[(IOTA0 - 64) & 127];
			fVec237[IOTA0 & 255] = fTemp499;
			float fTemp500 = fTemp499 + fVec237[(IOTA0 - 128) & 255];
			fVec238[IOTA0 & 511] = fTemp500;
			float fTemp501 = fTemp500 + fVec238[(IOTA0 - 256) & 511];
			fVec239[IOTA0 & 1023] = fTemp501;
			float fTemp502 = fTemp501 + fVec239[(IOTA0 - 512) & 1023];
			fVec240[IOTA0 & 2047] = fTemp502;
			float fTemp503 = fTemp502 + fVec240[(IOTA0 - 1024) & 2047];
			fVec241[IOTA0 & 4095] = fTemp503;
			float fTemp504 = fTemp503 + fVec241[(IOTA0 - 2048) & 4095];
			fVec242[IOTA0 & 8191] = fTemp504;
			float fTemp505 = fTemp504 + fVec242[(IOTA0 - 4096) & 8191];
			fVec243[IOTA0 & 16383] = fTemp505;
			float fTemp506 = fTemp505 + fVec243[(IOTA0 - 8192) & 16383];
			fVec244[IOTA0 & 32767] = fTemp506;
			float fTemp507 = fTemp506 + fVec244[(IOTA0 - 16384) & 32767];
			fVec245[IOTA0 & 65535] = fTemp507;
			fVec246[IOTA0 & 131071] = fTemp507 + fVec245[(IOTA0 - 32768) & 65535];
			float fTemp508 = fRec3[0] * fTemp116 + fTemp490 * fVec226[(IOTA0 - iConst176) & 2047];
			fVec247[0] = fTemp508;
			fVec248[0] = 0.0f - fConst30 * (fConst31 * fRec199[1] - fConst33 * fVec247[1]);
			fRec200[0] = fVec248[1] + fConst30 * (fConst34 * fTemp508 - 2.0f * (fConst35 * fRec200[1] - fConst36 * fVec247[1]));
			fRec199[0] = fRec200[0];
			fVec249[0] = 0.50032705f * fRec199[1] - fConst38 * fRec197[1];
			fRec198[0] = fConst26 * fRec199[1] + fConst37 * (fVec249[1] - fConst39 * fRec198[1] + 0.50032705f * fRec199[0]);
			fRec197[0] = fRec198[0];
			float fTemp509 = mydsp_faustpower2_f(fRec197[0]);
			fVec250[0] = fTemp509;
			float fTemp510 = fTemp509 + fVec250[1];
			fVec251[0] = fTemp510;
			float fTemp511 = fTemp510 + fVec251[2];
			fVec252[0] = fTemp511;
			float fTemp512 = fTemp511 + fVec252[4];
			fVec253[0] = fTemp512;
			float fTemp513 = fTemp512 + fVec253[8];
			fVec254[IOTA0 & 31] = fTemp513;
			float fTemp514 = fTemp513 + fVec254[(IOTA0 - 16) & 31];
			fVec255[IOTA0 & 63] = fTemp514;
			float fTemp515 = fTemp514 + fVec255[(IOTA0 - 32) & 63];
			fVec256[IOTA0 & 127] = fTemp515;
			float fTemp516 = fTemp515 + fVec256[(IOTA0 - 64) & 127];
			fVec257[IOTA0 & 255] = fTemp516;
			float fTemp517 = fTemp516 + fVec257[(IOTA0 - 128) & 255];
			fVec258[IOTA0 & 511] = fTemp517;
			float fTemp518 = fTemp517 + fVec258[(IOTA0 - 256) & 511];
			fVec259[IOTA0 & 1023] = fTemp518;
			float fTemp519 = fTemp518 + fVec259[(IOTA0 - 512) & 1023];
			fVec260[IOTA0 & 2047] = fTemp519;
			float fTemp520 = fTemp519 + fVec260[(IOTA0 - 1024) & 2047];
			fVec261[IOTA0 & 4095] = fTemp520;
			float fTemp521 = fTemp520 + fVec261[(IOTA0 - 2048) & 4095];
			fVec262[IOTA0 & 8191] = fTemp521;
			float fTemp522 = fTemp521 + fVec262[(IOTA0 - 4096) & 8191];
			fVec263[IOTA0 & 16383] = fTemp522;
			float fTemp523 = fTemp522 + fVec263[(IOTA0 - 8192) & 16383];
			fVec264[IOTA0 & 32767] = fTemp523;
			float fTemp524 = fTemp523 + fVec264[(IOTA0 - 16384) & 32767];
			fVec265[IOTA0 & 65535] = fTemp524;
			fVec266[IOTA0 & 131071] = fTemp524 + fVec265[(IOTA0 - 32768) & 65535];
			fVbargraph12 = FAUSTFLOAT(4.3429446f * std::log(std::max<float>(1e-12f, fConst69 * (((iConst70) ? 0.86000985f * fVec246[(IOTA0 - iConst101) & 131071] : 0.0f) + ((iConst100) ? 0.86000985f * fVec245[(IOTA0 - iConst99) & 65535] : 0.0f) + ((iConst98) ? 0.86000985f * fVec244[(IOTA0 - iConst97) & 32767] : 0.0f) + ((iConst96) ? 0.86000985f * fVec243[(IOTA0 - iConst95) & 16383] : 0.0f) + ((iConst94) ? 0.86000985f * fVec242[(IOTA0 - iConst93) & 8191] : 0.0f) + ((iConst92) ? 0.86000985f * fVec241[(IOTA0 - iConst91) & 4095] : 0.0f) + ((iConst90) ? 0.86000985f * fVec240[(IOTA0 - iConst89) & 2047] : 0.0f) + ((iConst88) ? 0.86000985f * fVec239[(IOTA0 - iConst87) & 1023] : 0.0f) + ((iConst86) ? 0.86000985f * fVec238[(IOTA0 - iConst85) & 511] : 0.0f) + ((iConst84) ? 0.86000985f * fVec237[(IOTA0 - iConst83) & 255] : 0.0f) + ((iConst82) ? 0.86000985f * fVec236[(IOTA0 - iConst81) & 127] : 0.0f) + ((iConst80) ? 0.86000985f * fVec235[(IOTA0 - iConst79) & 63] : 0.0f) + ((iConst78) ? 0.86000985f * fVec234[(IOTA0 - iConst77) & 31] : 0.0f) + ((iConst76) ? 0.86000985f * fVec233[iConst75] : 0.0f) + ((iConst74) ? 0.86000985f * fVec232[iConst73] : 0.0f) + ((iConst71) ? 0.86000985f * fTemp492 : 0.0f) + ((iConst72) ? 0.86000985f * fVec231[iConst71] : 0.0f) + ((iConst70) ? 0.86000985f * fVec266[(IOTA0 - iConst101) & 131071] : 0.0f) + ((iConst100) ? 0.86000985f * fVec265[(IOTA0 - iConst99) & 65535] : 0.0f) + ((iConst98) ? 0.86000985f * fVec264[(IOTA0 - iConst97) & 32767] : 0.0f) + ((iConst96) ? 0.86000985f * fVec263[(IOTA0 - iConst95) & 16383] : 0.0f) + ((iConst94) ? 0.86000985f * fVec262[(IOTA0 - iConst93) & 8191] : 0.0f) + ((iConst92) ? 0.86000985f * fVec261[(IOTA0 - iConst91) & 4095] : 0.0f) + ((iConst90) ? 0.86000985f * fVec260[(IOTA0 - iConst89) & 2047] : 0.0f) + ((iConst88) ? 0.86000985f * fVec259[(IOTA0 - iConst87) & 1023] : 0.0f) + ((iConst86) ? 0.86000985f * fVec258[(IOTA0 - iConst85) & 511] : 0.0f) + ((iConst84) ? 0.86000985f * fVec257[(IOTA0 - iConst83) & 255] : 0.0f) + ((iConst82) ? 0.86000985f * fVec256[(IOTA0 - iConst81) & 127] : 0.0f) + ((iConst80) ? 0.86000985f * fVec255[(IOTA0 - iConst79) & 63] : 0.0f) + ((iConst78) ? 0.86000985f * fVec254[(IOTA0 - iConst77) & 31] : 0.0f) + ((iConst76) ? 0.86000985f * fVec253[iConst75] : 0.0f) + ((iConst74) ? 0.86000985f * fVec252[iConst73] : 0.0f) + ((iConst71) ? 0.86000985f * fTemp509 : 0.0f) + ((iConst72) ? 0.86000985f * fVec251[iConst71] : 0.0f)))) + -0.691f);
			float fTemp525 = fTemp508;
			fRec192[0] = std::max<float>(fRec192[1] - fConst1, std::min<float>(1e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(0.00031622776f, std::fabs(fTemp525))))));
			fVbargraph13 = FAUSTFLOAT(fRec192[0]);
			output1[i0] = FAUSTFLOAT(fTemp525);
			fRec2[1] = fRec2[0];
			fRec1[1] = fRec1[0];
			fVec0[1] = fVec0[0];
			fRec3[1] = fRec3[0];
			fVec1[1] = fVec1[0];
			fVec2[2] = fVec2[1];
			fVec2[1] = fVec2[0];
			for (int j0 = 6; j0 > 0; j0 = j0 - 1) {
				fVec3[j0] = fVec3[j0 - 1];
			}
			for (int j1 = 14; j1 > 0; j1 = j1 - 1) {
				fVec4[j1] = fVec4[j1 - 1];
			}
			IOTA0 = IOTA0 + 1;
			fRec18[1] = fRec18[0];
			fVec6[1] = fVec6[0];
			fRec22[1] = fRec22[0];
			fRec21[1] = fRec21[0];
			fVec7[1] = fVec7[0];
			fRec20[1] = fRec20[0];
			fRec19[1] = fRec19[0];
			fVec8[1] = fVec8[0];
			fVec9[2] = fVec9[1];
			fVec9[1] = fVec9[0];
			for (int j2 = 6; j2 > 0; j2 = j2 - 1) {
				fVec10[j2] = fVec10[j2 - 1];
			}
			for (int j3 = 14; j3 > 0; j3 = j3 - 1) {
				fVec11[j3] = fVec11[j3 - 1];
			}
			fVec19[1] = fVec19[0];
			fRec26[1] = fRec26[0];
			fRec25[1] = fRec25[0];
			fVec20[1] = fVec20[0];
			fRec24[1] = fRec24[0];
			fRec23[1] = fRec23[0];
			fVec21[1] = fVec21[0];
			fVec22[2] = fVec22[1];
			fVec22[1] = fVec22[0];
			for (int j4 = 6; j4 > 0; j4 = j4 - 1) {
				fVec23[j4] = fVec23[j4 - 1];
			}
			for (int j5 = 14; j5 > 0; j5 = j5 - 1) {
				fVec24[j5] = fVec24[j5 - 1];
			}
			fRec13[1] = fRec13[0];
			fRec14[1] = fRec14[0];
			fRec11[1] = fRec11[0];
			fRec10[1] = fRec10[0];
			fRec27[1] = fRec27[0];
			fVec32[1] = fVec32[0];
			fVec33[2] = fVec33[1];
			fVec33[1] = fVec33[0];
			for (int j6 = 6; j6 > 0; j6 = j6 - 1) {
				fVec34[j6] = fVec34[j6 - 1];
			}
			for (int j7 = 14; j7 > 0; j7 = j7 - 1) {
				fVec35[j7] = fVec35[j7 - 1];
			}
			fRec38[1] = fRec38[0];
			fVec37[1] = fVec37[0];
			fRec42[1] = fRec42[0];
			fRec41[1] = fRec41[0];
			fVec38[1] = fVec38[0];
			fRec40[1] = fRec40[0];
			fRec39[1] = fRec39[0];
			fVec39[1] = fVec39[0];
			fVec40[2] = fVec40[1];
			fVec40[1] = fVec40[0];
			for (int j8 = 6; j8 > 0; j8 = j8 - 1) {
				fVec41[j8] = fVec41[j8 - 1];
			}
			for (int j9 = 14; j9 > 0; j9 = j9 - 1) {
				fVec42[j9] = fVec42[j9 - 1];
			}
			fVec50[1] = fVec50[0];
			fRec46[1] = fRec46[0];
			fRec45[1] = fRec45[0];
			fVec51[1] = fVec51[0];
			fRec44[1] = fRec44[0];
			fRec43[1] = fRec43[0];
			fVec52[1] = fVec52[0];
			fVec53[2] = fVec53[1];
			fVec53[1] = fVec53[0];
			for (int j10 = 6; j10 > 0; j10 = j10 - 1) {
				fVec54[j10] = fVec54[j10 - 1];
			}
			for (int j11 = 14; j11 > 0; j11 = j11 - 1) {
				fVec55[j11] = fVec55[j11 - 1];
			}
			fRec33[1] = fRec33[0];
			fRec34[1] = fRec34[0];
			fRec31[1] = fRec31[0];
			fRec30[1] = fRec30[0];
			fRec47[1] = fRec47[0];
			fRec48[1] = fRec48[0];
			fRec50[1] = fRec50[0];
			fRec51[1] = fRec51[0];
			fRec52[1] = fRec52[0];
			fVec63[1] = fVec63[0];
			fRec49[1] = fRec49[0];
			fRec53[1] = fRec53[0];
			fRec28[2] = fRec28[1];
			fRec28[1] = fRec28[0];
			fVec64[1] = fVec64[0];
			fRec58[1] = fRec58[0];
			fRec57[1] = fRec57[0];
			fVec65[1] = fVec65[0];
			fRec56[1] = fRec56[0];
			fRec55[1] = fRec55[0];
			fVec66[1] = fVec66[0];
			fVec67[2] = fVec67[1];
			fVec67[1] = fVec67[0];
			for (int j12 = 6; j12 > 0; j12 = j12 - 1) {
				fVec68[j12] = fVec68[j12 - 1];
			}
			for (int j13 = 14; j13 > 0; j13 = j13 - 1) {
				fVec69[j13] = fVec69[j13 - 1];
			}
			fRec63[1] = fRec63[0];
			fVec83[1] = fVec83[0];
			fVec84[1] = fVec84[0];
			fRec62[1] = fRec62[0];
			fRec61[1] = fRec61[0];
			fVec85[1] = fVec85[0];
			fRec60[1] = fRec60[0];
			fRec59[1] = fRec59[0];
			fVec86[1] = fVec86[0];
			fVec87[2] = fVec87[1];
			fVec87[1] = fVec87[0];
			for (int j14 = 6; j14 > 0; j14 = j14 - 1) {
				fVec88[j14] = fVec88[j14 - 1];
			}
			for (int j15 = 14; j15 > 0; j15 = j15 - 1) {
				fVec89[j15] = fVec89[j15 - 1];
			}
			fVec103[1] = fVec103[0];
			fRec54[1] = fRec54[0];
			fRec65[1] = fRec65[0];
			fRec66[1] = fRec66[0];
			fVec104[1] = fVec104[0];
			fRec64[1] = fRec64[0];
			fRec67[1] = fRec67[0];
			fRec29[2] = fRec29[1];
			fRec29[1] = fRec29[0];
			fRec71[2] = fRec71[1];
			fRec71[1] = fRec71[0];
			fRec70[2] = fRec70[1];
			fRec70[1] = fRec70[0];
			fRec69[2] = fRec69[1];
			fRec69[1] = fRec69[0];
			fVec105[1] = fVec105[0];
			fRec68[1] = fRec68[0];
			fRec75[2] = fRec75[1];
			fRec75[1] = fRec75[0];
			fRec74[2] = fRec74[1];
			fRec74[1] = fRec74[0];
			fRec73[2] = fRec73[1];
			fRec73[1] = fRec73[0];
			fVec106[1] = fVec106[0];
			fRec72[1] = fRec72[0];
			fVec107[2] = fVec107[1];
			fVec107[1] = fVec107[0];
			for (int j16 = 6; j16 > 0; j16 = j16 - 1) {
				fVec108[j16] = fVec108[j16 - 1];
			}
			for (int j17 = 14; j17 > 0; j17 = j17 - 1) {
				fVec109[j17] = fVec109[j17 - 1];
			}
			fRec76[1] = fRec76[0];
			fVec118[2] = fVec118[1];
			fVec118[1] = fVec118[0];
			for (int j18 = 6; j18 > 0; j18 = j18 - 1) {
				fVec119[j18] = fVec119[j18 - 1];
			}
			for (int j19 = 14; j19 > 0; j19 = j19 - 1) {
				fVec120[j19] = fVec120[j19 - 1];
			}
			fRec77[1] = fRec77[0];
			fRec93[2] = fRec93[1];
			fRec93[1] = fRec93[0];
			fRec92[2] = fRec92[1];
			fRec92[1] = fRec92[0];
			fRec91[2] = fRec91[1];
			fRec91[1] = fRec91[0];
			fRec90[2] = fRec90[1];
			fRec90[1] = fRec90[0];
			fRec89[2] = fRec89[1];
			fRec89[1] = fRec89[0];
			fRec88[2] = fRec88[1];
			fRec88[1] = fRec88[0];
			fRec87[2] = fRec87[1];
			fRec87[1] = fRec87[0];
			fRec86[2] = fRec86[1];
			fRec86[1] = fRec86[0];
			fRec85[2] = fRec85[1];
			fRec85[1] = fRec85[0];
			fRec84[2] = fRec84[1];
			fRec84[1] = fRec84[0];
			fRec83[2] = fRec83[1];
			fRec83[1] = fRec83[0];
			fVec129[1] = fVec129[0];
			fRec82[1] = fRec82[0];
			fRec105[2] = fRec105[1];
			fRec105[1] = fRec105[0];
			fRec104[2] = fRec104[1];
			fRec104[1] = fRec104[0];
			fRec103[2] = fRec103[1];
			fRec103[1] = fRec103[0];
			fRec102[2] = fRec102[1];
			fRec102[1] = fRec102[0];
			fRec101[2] = fRec101[1];
			fRec101[1] = fRec101[0];
			fRec100[2] = fRec100[1];
			fRec100[1] = fRec100[0];
			fRec99[2] = fRec99[1];
			fRec99[1] = fRec99[0];
			fRec98[2] = fRec98[1];
			fRec98[1] = fRec98[0];
			fRec97[2] = fRec97[1];
			fRec97[1] = fRec97[0];
			fRec96[2] = fRec96[1];
			fRec96[1] = fRec96[0];
			fRec95[2] = fRec95[1];
			fRec95[1] = fRec95[0];
			fVec130[1] = fVec130[0];
			fRec94[1] = fRec94[0];
			fVec131[2] = fVec131[1];
			fVec131[1] = fVec131[0];
			for (int j20 = 6; j20 > 0; j20 = j20 - 1) {
				fVec132[j20] = fVec132[j20 - 1];
			}
			for (int j21 = 14; j21 > 0; j21 = j21 - 1) {
				fVec133[j21] = fVec133[j21 - 1];
			}
			fRec106[1] = fRec106[0];
			fVec142[2] = fVec142[1];
			fVec142[1] = fVec142[0];
			for (int j22 = 6; j22 > 0; j22 = j22 - 1) {
				fVec143[j22] = fVec143[j22 - 1];
			}
			for (int j23 = 14; j23 > 0; j23 = j23 - 1) {
				fVec144[j23] = fVec144[j23 - 1];
			}
			fRec107[1] = fRec107[0];
			fRec78[1] = fRec78[0];
			fRec79[1] = fRec79[0];
			fRec114[2] = fRec114[1];
			fRec114[1] = fRec114[0];
			fRec113[2] = fRec113[1];
			fRec113[1] = fRec113[0];
			fVec153[1] = fVec153[0];
			fRec112[1] = fRec112[0];
			fRec117[2] = fRec117[1];
			fRec117[1] = fRec117[0];
			fRec116[2] = fRec116[1];
			fRec116[1] = fRec116[0];
			fVec154[1] = fVec154[0];
			fRec115[1] = fRec115[0];
			fVec155[2] = fVec155[1];
			fVec155[1] = fVec155[0];
			for (int j24 = 6; j24 > 0; j24 = j24 - 1) {
				fVec156[j24] = fVec156[j24 - 1];
			}
			for (int j25 = 14; j25 > 0; j25 = j25 - 1) {
				fVec157[j25] = fVec157[j25 - 1];
			}
			fRec118[1] = fRec118[0];
			fVec166[2] = fVec166[1];
			fVec166[1] = fVec166[0];
			for (int j26 = 6; j26 > 0; j26 = j26 - 1) {
				fVec167[j26] = fVec167[j26 - 1];
			}
			for (int j27 = 14; j27 > 0; j27 = j27 - 1) {
				fVec168[j27] = fVec168[j27 - 1];
			}
			fRec119[1] = fRec119[0];
			fRec108[1] = fRec108[0];
			fRec109[1] = fRec109[0];
			fRec120[1] = fRec120[0];
			fRec121[1] = fRec121[0];
			fRec130[2] = fRec130[1];
			fRec130[1] = fRec130[0];
			fRec129[2] = fRec129[1];
			fRec129[1] = fRec129[0];
			fVec177[1] = fVec177[0];
			fRec128[1] = fRec128[0];
			fRec133[2] = fRec133[1];
			fRec133[1] = fRec133[0];
			fRec132[2] = fRec132[1];
			fRec132[1] = fRec132[0];
			fVec178[1] = fVec178[0];
			fRec131[1] = fRec131[0];
			fVec179[2] = fVec179[1];
			fVec179[1] = fVec179[0];
			for (int j28 = 6; j28 > 0; j28 = j28 - 1) {
				fVec180[j28] = fVec180[j28 - 1];
			}
			for (int j29 = 14; j29 > 0; j29 = j29 - 1) {
				fVec181[j29] = fVec181[j29 - 1];
			}
			fRec134[1] = fRec134[0];
			fVec190[2] = fVec190[1];
			fVec190[1] = fVec190[0];
			for (int j30 = 6; j30 > 0; j30 = j30 - 1) {
				fVec191[j30] = fVec191[j30 - 1];
			}
			for (int j31 = 14; j31 > 0; j31 = j31 - 1) {
				fVec192[j31] = fVec192[j31 - 1];
			}
			fRec135[1] = fRec135[0];
			fRec124[1] = fRec124[0];
			fRec125[1] = fRec125[0];
			fRec136[1] = fRec136[0];
			fRec137[1] = fRec137[0];
			fRec146[2] = fRec146[1];
			fRec146[1] = fRec146[0];
			fRec145[2] = fRec145[1];
			fRec145[1] = fRec145[0];
			fVec201[1] = fVec201[0];
			fRec144[1] = fRec144[0];
			fRec149[2] = fRec149[1];
			fRec149[1] = fRec149[0];
			fRec148[2] = fRec148[1];
			fRec148[1] = fRec148[0];
			fVec202[1] = fVec202[0];
			fRec147[1] = fRec147[0];
			fVec203[2] = fVec203[1];
			fVec203[1] = fVec203[0];
			for (int j32 = 6; j32 > 0; j32 = j32 - 1) {
				fVec204[j32] = fVec204[j32 - 1];
			}
			for (int j33 = 14; j33 > 0; j33 = j33 - 1) {
				fVec205[j33] = fVec205[j33 - 1];
			}
			fRec150[1] = fRec150[0];
			fVec214[2] = fVec214[1];
			fVec214[1] = fVec214[0];
			for (int j34 = 6; j34 > 0; j34 = j34 - 1) {
				fVec215[j34] = fVec215[j34 - 1];
			}
			for (int j35 = 14; j35 > 0; j35 = j35 - 1) {
				fVec216[j35] = fVec216[j35 - 1];
			}
			fRec151[1] = fRec151[0];
			fRec140[1] = fRec140[0];
			fRec141[1] = fRec141[0];
			fRec152[1] = fRec152[0];
			fRec153[1] = fRec153[0];
			fRec156[1] = fRec156[0];
			fRec157[1] = fRec157[0];
			fRec8[2] = fRec8[1];
			fRec8[1] = fRec8[0];
			fRec160[1] = fRec160[0];
			fRec161[1] = fRec161[0];
			fRec164[1] = fRec164[0];
			fRec165[1] = fRec165[0];
			fRec168[1] = fRec168[0];
			fRec169[1] = fRec169[0];
			fRec172[1] = fRec172[0];
			fRec173[1] = fRec173[0];
			fRec176[1] = fRec176[0];
			fRec177[1] = fRec177[0];
			fRec180[1] = fRec180[0];
			fRec181[1] = fRec181[0];
			fRec184[1] = fRec184[0];
			fRec185[1] = fRec185[0];
			fRec188[1] = fRec188[0];
			fRec189[1] = fRec189[0];
			fRec9[2] = fRec9[1];
			fRec9[1] = fRec9[0];
			iRec6[1] = iRec6[0];
			fRec7[1] = fRec7[0];
			fRec5[1] = fRec5[0];
			fRec4[1] = fRec4[0];
			fVec227[1] = fVec227[0];
			fRec0[1] = fRec0[0];
			fVec228[1] = fVec228[0];
			fRec196[1] = fRec196[0];
			fRec195[1] = fRec195[0];
			fVec229[1] = fVec229[0];
			fRec194[1] = fRec194[0];
			fRec193[1] = fRec193[0];
			fVec230[1] = fVec230[0];
			fVec231[2] = fVec231[1];
			fVec231[1] = fVec231[0];
			for (int j36 = 6; j36 > 0; j36 = j36 - 1) {
				fVec232[j36] = fVec232[j36 - 1];
			}
			for (int j37 = 14; j37 > 0; j37 = j37 - 1) {
				fVec233[j37] = fVec233[j37 - 1];
			}
			fVec247[1] = fVec247[0];
			fVec248[1] = fVec248[0];
			fRec200[1] = fRec200[0];
			fRec199[1] = fRec199[0];
			fVec249[1] = fVec249[0];
			fRec198[1] = fRec198[0];
			fRec197[1] = fRec197[0];
			fVec250[1] = fVec250[0];
			fVec251[2] = fVec251[1];
			fVec251[1] = fVec251[0];
			for (int j38 = 6; j38 > 0; j38 = j38 - 1) {
				fVec252[j38] = fVec252[j38 - 1];
			}
			for (int j39 = 14; j39 > 0; j39 = j39 - 1) {
				fVec253[j39] = fVec253[j39 - 1];
			}
			fRec192[1] = fRec192[0];
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
        dsp->fHbargraph0 = 0;
        dsp->fVbargraph0 = 0;
        dsp->fVbargraph3 = 0;
        dsp->fVbargraph4 = 0;
        dsp->fVbargraph2 = 0;
        dsp->fVbargraph6 = 0;
        dsp->fVbargraph7 = 0;
        dsp->fVbargraph8 = 0;
        dsp->fVbargraph9 = 0;
        dsp->fVbargraph5 = 0;
        dsp->fVbargraph1 = 0;
        dsp->fVbargraph10 = 0;
        dsp->fVbargraph12 = 0;
        dsp->fVbargraph11 = 0;
        dsp->fVbargraph13 = 0;
        
    }

    /*
    void printCurrentValues()
    {
        d_stdout("==== preset data start ===");
        printf("%.12g,", dsp->fCheckbox3);
        printf("%.12g,", dsp->fCheckbox1);
        printf("%.12g,", dsp->fCheckbox2);
        printf("%.12g,", dsp->fCheckbox0);
        printf("%.12g,", dsp->fVslider0);
        printf("%.12g,", dsp->fVslider1);
        printf("%.12g,", dsp->fVslider3);
        printf("%.12g,", dsp->fVslider2);
        
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
        case kParameter_bypass_timbre:
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
        case kParameter_bypass_leveler:
            param.hints = kParameterIsAutomatable
            
            
                |kParameterIsBoolean
            
            
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
        case kParameter_bypass_style:
            param.hints = kParameterIsAutomatable
            
            
                |kParameterIsBoolean
            
            
                |kParameterIsInteger
            
            
            ;
            param.name = kParameterNames[2];
            param.unit = kParameterUnits[2];
            param.symbol = kParameterSymbols[2];
            param.shortName = "";
            param.ranges.def = kParameterRanges[2].def;
            param.ranges.min = kParameterRanges[2].min;
            param.ranges.max = kParameterRanges[2].max;
            break;
        case kParameter_bypass_global:
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
        case kParameter_input_gain:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[4];
            param.unit = kParameterUnits[4];
            param.symbol = kParameterSymbols[4];
            param.shortName = "";
            param.ranges.def = kParameterRanges[4].def;
            param.ranges.min = kParameterRanges[4].min;
            param.ranges.max = kParameterRanges[4].max;
            break;
        case kParameter_leveler_target:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[5];
            param.unit = kParameterUnits[5];
            param.symbol = kParameterSymbols[5];
            param.shortName = "";
            param.ranges.def = kParameterRanges[5].def;
            param.ranges.min = kParameterRanges[5].min;
            param.ranges.max = kParameterRanges[5].max;
            break;
        case kParameter_style:
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
        case kParameter_timbre:
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
        
        case kParameter_latency_global:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[8];
            param.unit = kParameterUnits[8];
            param.symbol = kParameterSymbols[8];
            param.shortName = "";
            param.ranges.def = kParameterRanges[8].def;
            param.ranges.min = kParameterRanges[8].min;
            param.ranges.max = kParameterRanges[8].max;
            break;
        case kParameter_input_peak_channel_0:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[9];
            param.unit = kParameterUnits[9];
            param.symbol = kParameterSymbols[9];
            param.shortName = "";
            param.ranges.def = kParameterRanges[9].def;
            param.ranges.min = kParameterRanges[9].min;
            param.ranges.max = kParameterRanges[9].max;
            break;
        case kParameter_input_peak_channel_1:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[10];
            param.unit = kParameterUnits[10];
            param.symbol = kParameterSymbols[10];
            param.shortName = "";
            param.ranges.def = kParameterRanges[10].def;
            param.ranges.min = kParameterRanges[10].min;
            param.ranges.max = kParameterRanges[10].max;
            break;
        case kParameter_lufs_in_meter:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[11];
            param.unit = kParameterUnits[11];
            param.symbol = kParameterSymbols[11];
            param.shortName = "";
            param.ranges.def = kParameterRanges[11].def;
            param.ranges.min = kParameterRanges[11].min;
            param.ranges.max = kParameterRanges[11].max;
            break;
        case kParameter_leveler_gain1:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[12];
            param.unit = kParameterUnits[12];
            param.symbol = kParameterSymbols[12];
            param.shortName = "";
            param.ranges.def = kParameterRanges[12].def;
            param.ranges.min = kParameterRanges[12].min;
            param.ranges.max = kParameterRanges[12].max;
            break;
        case kParameter_multiband_compressor_gain_band_1:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[13];
            param.unit = kParameterUnits[13];
            param.symbol = kParameterSymbols[13];
            param.shortName = "";
            param.ranges.def = kParameterRanges[13].def;
            param.ranges.min = kParameterRanges[13].min;
            param.ranges.max = kParameterRanges[13].max;
            break;
        case kParameter_multiband_compressor_gain_band_2:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[14];
            param.unit = kParameterUnits[14];
            param.symbol = kParameterSymbols[14];
            param.shortName = "";
            param.ranges.def = kParameterRanges[14].def;
            param.ranges.min = kParameterRanges[14].min;
            param.ranges.max = kParameterRanges[14].max;
            break;
        case kParameter_multiband_compressor_gain_band_3:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[15];
            param.unit = kParameterUnits[15];
            param.symbol = kParameterSymbols[15];
            param.shortName = "";
            param.ranges.def = kParameterRanges[15].def;
            param.ranges.min = kParameterRanges[15].min;
            param.ranges.max = kParameterRanges[15].max;
            break;
        case kParameter_multiband_compressor_gain_band_4:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[16];
            param.unit = kParameterUnits[16];
            param.symbol = kParameterSymbols[16];
            param.shortName = "";
            param.ranges.def = kParameterRanges[16].def;
            param.ranges.min = kParameterRanges[16].min;
            param.ranges.max = kParameterRanges[16].max;
            break;
        case kParameter_multiband_compressor_gain_band_5:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[17];
            param.unit = kParameterUnits[17];
            param.symbol = kParameterSymbols[17];
            param.shortName = "";
            param.ranges.def = kParameterRanges[17].def;
            param.ranges.min = kParameterRanges[17].min;
            param.ranges.max = kParameterRanges[17].max;
            break;
        case kParameter_leveler_gain2:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[18];
            param.unit = kParameterUnits[18];
            param.symbol = kParameterSymbols[18];
            param.shortName = "";
            param.ranges.def = kParameterRanges[18].def;
            param.ranges.min = kParameterRanges[18].min;
            param.ranges.max = kParameterRanges[18].max;
            break;
        case kParameter_limiter_gain:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[19];
            param.unit = kParameterUnits[19];
            param.symbol = kParameterSymbols[19];
            param.shortName = "";
            param.ranges.def = kParameterRanges[19].def;
            param.ranges.min = kParameterRanges[19].min;
            param.ranges.max = kParameterRanges[19].max;
            break;
        case kParameter_lufs_out_meter:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[20];
            param.unit = kParameterUnits[20];
            param.symbol = kParameterSymbols[20];
            param.shortName = "";
            param.ranges.def = kParameterRanges[20].def;
            param.ranges.min = kParameterRanges[20].min;
            param.ranges.max = kParameterRanges[20].max;
            break;
        case kParameter_output_peak_channel_0:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[21];
            param.unit = kParameterUnits[21];
            param.symbol = kParameterSymbols[21];
            param.shortName = "";
            param.ranges.def = kParameterRanges[21].def;
            param.ranges.min = kParameterRanges[21].min;
            param.ranges.max = kParameterRanges[21].max;
            break;
        case kParameter_output_peak_channel_1:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[22];
            param.unit = kParameterUnits[22];
            param.symbol = kParameterSymbols[22];
            param.shortName = "";
            param.ranges.def = kParameterRanges[22].def;
            param.ranges.min = kParameterRanges[22].min;
            param.ranges.max = kParameterRanges[22].max;
            break;
        
        }
    }

   /* -----------------------------------------------------------------------------------------------------------------
    * Internal data */

    float getParameterValue(const uint32_t index) const override
    {
        switch (index)
        {
        case kParameter_bypass_timbre:
            return dsp->fCheckbox3;
        case kParameter_bypass_leveler:
            return dsp->fCheckbox1;
        case kParameter_bypass_style:
            return dsp->fCheckbox2;
        case kParameter_bypass_global:
            return dsp->fCheckbox0;
        case kParameter_input_gain:
            return dsp->fVslider0;
        case kParameter_leveler_target:
            return dsp->fVslider1;
        case kParameter_style:
            return dsp->fVslider3;
        case kParameter_timbre:
            return dsp->fVslider2;
        case kParameter_latency_global:
            return dsp->fHbargraph0;
        case kParameter_input_peak_channel_0:
            return dsp->fVbargraph0;
        case kParameter_input_peak_channel_1:
            return dsp->fVbargraph3;
        case kParameter_lufs_in_meter:
            return dsp->fVbargraph4;
        case kParameter_leveler_gain1:
            return dsp->fVbargraph2;
        case kParameter_multiband_compressor_gain_band_1:
            return dsp->fVbargraph6;
        case kParameter_multiband_compressor_gain_band_2:
            return dsp->fVbargraph7;
        case kParameter_multiband_compressor_gain_band_3:
            return dsp->fVbargraph8;
        case kParameter_multiband_compressor_gain_band_4:
            return dsp->fVbargraph9;
        case kParameter_multiband_compressor_gain_band_5:
            return dsp->fVbargraph5;
        case kParameter_leveler_gain2:
            return dsp->fVbargraph1;
        case kParameter_limiter_gain:
            return dsp->fVbargraph10;
        case kParameter_lufs_out_meter:
            return dsp->fVbargraph12;
        case kParameter_output_peak_channel_0:
            return dsp->fVbargraph11;
        case kParameter_output_peak_channel_1:
            return dsp->fVbargraph13;
        
        default:
            return 0.0f;
        }
    }

    void setParameterValue(const uint32_t index, const float value) override
    {
        switch (index)
        {
        case kParameter_bypass_timbre:
            dsp->fCheckbox3 = value;
            break;
        case kParameter_bypass_leveler:
            dsp->fCheckbox1 = value;
            break;
        case kParameter_bypass_style:
            dsp->fCheckbox2 = value;
            break;
        case kParameter_bypass_global:
            dsp->fCheckbox0 = value;
            break;
        case kParameter_input_gain:
            dsp->fVslider0 = value;
            break;
        case kParameter_leveler_target:
            dsp->fVslider1 = value;
            break;
        case kParameter_style:
            dsp->fVslider3 = value;
            break;
        case kParameter_timbre:
            dsp->fVslider2 = value;
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
        float params[8] = {
            dsp->fCheckbox3,
            dsp->fCheckbox1,
            dsp->fCheckbox2,
            dsp->fCheckbox0,
            dsp->fVslider0,
            dsp->fVslider1,
            dsp->fVslider3,
            dsp->fVslider2,
            
        };

        // tell dsp to change sample rate
        dsp->init(newSampleRate);

        // set parameters back, which have been reset in the dsp
        dsp->fCheckbox3 = params[0];
        dsp->fCheckbox1 = params[1];
        dsp->fCheckbox2 = params[2];
        dsp->fCheckbox0 = params[3];
        dsp->fVslider0 = params[4];
        dsp->fVslider1 = params[5];
        dsp->fVslider3 = params[6];
        dsp->fVslider2 = params[7];
        
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