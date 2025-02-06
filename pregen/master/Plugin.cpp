
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
	FAUSTFLOAT fVslider0;
	FAUSTFLOAT fVslider1;
	float fConst2;
	float fConst4;
	float fConst5;
	float fConst7;
	float fConst8;
	float fConst9;
	float fConst10;
	float fConst11;
	float fConst12;
	float fConst13;
	float fConst14;
	FAUSTFLOAT fVslider2;
	float fRec5[2];
	float fConst16;
	FAUSTFLOAT fVslider3;
	float fRec10[2];
	float fRec9[2];
	FAUSTFLOAT fVbargraph0;
	float fVec0[2];
	float fConst17;
	float fRec8[2];
	float fConst19;
	float fConst20;
	float fConst22;
	float fRec7[2];
	float fConst23;
	float fRec11[2];
	float fVec1[2];
	float fRec6[2];
	float fRec12[2];
	FAUSTFLOAT fCheckbox0;
	float fRec13[2];
	FAUSTFLOAT fCheckbox1;
	float fConst24;
	float fConst25;
	int iConst26;
	float fVec2[2];
	int iConst27;
	float fVec3[3];
	int iConst28;
	float fVec4[7];
	int iConst29;
	int iConst30;
	float fVec5[15];
	int iConst31;
	int iConst32;
	int IOTA0;
	float fVec6[32];
	int iConst33;
	float fConst34;
	float fRec24[2];
	float fConst35;
	int iConst38;
	float fConst41;
	float fConst42;
	float fConst44;
	float fConst46;
	float fConst47;
	float fConst48;
	float fVec7[2];
	float fRec28[2];
	float fRec27[2];
	float fConst51;
	float fConst53;
	float fVec8[2];
	float fConst55;
	float fConst56;
	float fRec26[2];
	float fRec25[2];
	float fVec9[2];
	float fVec10[3];
	int iConst57;
	int iConst58;
	float fVec11[7];
	int iConst59;
	int iConst60;
	float fVec12[15];
	int iConst61;
	int iConst62;
	float fVec13[32];
	int iConst63;
	int iConst64;
	float fVec14[64];
	int iConst65;
	int iConst66;
	float fVec15[128];
	int iConst67;
	int iConst68;
	float fVec16[256];
	int iConst69;
	int iConst70;
	float fVec17[512];
	int iConst71;
	int iConst72;
	float fVec18[1024];
	int iConst73;
	int iConst74;
	float fVec19[2048];
	int iConst75;
	float fVec20[2];
	float fRec32[2];
	float fRec31[2];
	float fVec21[2];
	float fRec30[2];
	float fRec29[2];
	float fVec22[2];
	float fVec23[3];
	float fVec24[7];
	float fVec25[15];
	float fVec26[32];
	float fVec27[64];
	float fVec28[128];
	float fVec29[256];
	float fVec30[512];
	float fVec31[1024];
	float fVec32[2048];
	float fConst76;
	float fRec19[2];
	float fRec20[2];
	float fRec17[2];
	FAUSTFLOAT fVbargraph1;
	float fRec16[2];
	float fRec14[3];
	int iConst78;
	float fRec40[2];
	FAUSTFLOAT fVbargraph2;
	float fVec33[2];
	float fVec34[2];
	float fRec39[2];
	float fRec38[2];
	float fVec35[2];
	float fRec37[2];
	float fRec36[2];
	float fVec36[2];
	float fVec37[3];
	int iConst79;
	int iConst80;
	float fVec38[7];
	int iConst81;
	int iConst82;
	float fVec39[15];
	int iConst83;
	int iConst84;
	float fVec40[32];
	int iConst85;
	int iConst86;
	float fVec41[64];
	int iConst87;
	int iConst88;
	float fVec42[128];
	int iConst89;
	int iConst90;
	float fVec43[256];
	int iConst91;
	int iConst92;
	float fVec44[512];
	int iConst93;
	int iConst94;
	float fVec45[1024];
	int iConst95;
	int iConst96;
	float fVec46[2048];
	int iConst97;
	int iConst98;
	float fVec47[4096];
	int iConst99;
	int iConst100;
	float fVec48[8192];
	int iConst101;
	int iConst102;
	float fVec49[16384];
	int iConst103;
	int iConst104;
	float fVec50[32768];
	int iConst105;
	int iConst106;
	float fVec51[65536];
	int iConst107;
	int iConst108;
	float fVec52[131072];
	int iConst109;
	float fVec53[2];
	float fRec44[2];
	float fRec43[2];
	float fVec54[2];
	float fRec42[2];
	float fRec41[2];
	float fVec55[2];
	float fVec56[3];
	float fVec57[7];
	float fVec58[15];
	float fVec59[32];
	float fVec60[64];
	float fVec61[128];
	float fVec62[256];
	float fVec63[512];
	float fVec64[1024];
	float fVec65[2048];
	float fVec66[4096];
	float fVec67[8192];
	float fVec68[16384];
	float fVec69[32768];
	float fVec70[65536];
	float fVec71[131072];
	float fConst110;
	FAUSTFLOAT fVbargraph3;
	float fVec72[2];
	float fRec35[2];
	float fRec34[2];
	float fRec45[2];
	float fVec73[2];
	float fRec33[2];
	float fRec46[2];
	float fRec15[3];
	float fRec4[3];
	float fConst111;
	float fRec3[3];
	float fRec2[3];
	float fVec74[2];
	float fConst112;
	float fRec1[2];
	float fRec50[3];
	float fRec49[3];
	float fRec48[3];
	float fVec75[2];
	float fRec47[2];
	int iConst113;
	int iConst114;
	float fVec76[3];
	int iConst115;
	float fVec77[7];
	int iConst116;
	int iConst117;
	float fVec78[15];
	int iConst118;
	int iConst119;
	float fVec79[32];
	int iConst120;
	int iConst121;
	float fVec80[64];
	int iConst122;
	int iConst123;
	float fVec81[128];
	int iConst124;
	int iConst125;
	float fVec82[256];
	int iConst126;
	int iConst127;
	float fVec83[512];
	int iConst128;
	int iConst129;
	float fVec84[1024];
	int iConst130;
	int iConst131;
	float fVec85[2048];
	int iConst132;
	int iConst133;
	float fVec86[4096];
	int iConst134;
	float fRec51[2];
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
	float fRec52[2];
	FAUSTFLOAT fVbargraph4;
	float fConst135;
	float fConst137;
	float fConst138;
	float fConst140;
	float fConst141;
	float fConst142;
	float fConst143;
	float fConst144;
	float fConst145;
	float fRec62[3];
	float fRec61[3];
	float fRec60[3];
	float fConst146;
	float fRec59[3];
	float fRec58[3];
	float fVec98[2];
	float fRec57[2];
	float fRec68[3];
	float fRec67[3];
	float fRec66[3];
	float fRec65[3];
	float fRec64[3];
	float fVec99[2];
	float fRec63[2];
	float fVec100[3];
	float fVec101[7];
	float fVec102[15];
	float fVec103[32];
	float fVec104[64];
	float fVec105[128];
	float fVec106[256];
	float fVec107[512];
	float fVec108[1024];
	float fVec109[2048];
	float fVec110[4096];
	float fRec69[2];
	float fVec111[3];
	float fVec112[7];
	float fVec113[15];
	float fVec114[32];
	float fVec115[64];
	float fVec116[128];
	float fVec117[256];
	float fVec118[512];
	float fVec119[1024];
	float fVec120[2048];
	float fVec121[4096];
	float fRec70[2];
	FAUSTFLOAT fVbargraph5;
	float fConst147;
	float fConst149;
	float fConst150;
	float fConst152;
	float fConst153;
	float fConst154;
	float fConst155;
	float fConst156;
	float fConst157;
	float fRec84[3];
	float fRec83[3];
	float fRec82[3];
	float fConst158;
	float fRec81[3];
	float fRec80[3];
	float fVec122[2];
	float fRec79[2];
	float fRec90[3];
	float fRec89[3];
	float fRec88[3];
	float fRec87[3];
	float fRec86[3];
	float fVec123[2];
	float fRec85[2];
	float fVec124[3];
	float fVec125[7];
	float fVec126[15];
	float fVec127[32];
	float fVec128[64];
	float fVec129[128];
	float fVec130[256];
	float fVec131[512];
	float fVec132[1024];
	float fVec133[2048];
	float fVec134[4096];
	float fRec91[2];
	float fVec135[3];
	float fVec136[7];
	float fVec137[15];
	float fVec138[32];
	float fVec139[64];
	float fVec140[128];
	float fVec141[256];
	float fVec142[512];
	float fVec143[1024];
	float fVec144[2048];
	float fVec145[4096];
	float fRec92[2];
	FAUSTFLOAT fVbargraph6;
	float fConst159;
	float fConst161;
	float fConst162;
	float fConst164;
	float fConst165;
	float fConst166;
	float fConst167;
	float fConst168;
	float fConst169;
	float fRec106[3];
	float fRec105[3];
	float fRec104[3];
	float fConst170;
	float fRec103[3];
	float fRec102[3];
	float fVec146[2];
	float fRec101[2];
	float fRec112[3];
	float fRec111[3];
	float fRec110[3];
	float fRec109[3];
	float fRec108[3];
	float fVec147[2];
	float fRec107[2];
	float fVec148[3];
	float fVec149[7];
	float fVec150[15];
	float fVec151[32];
	float fVec152[64];
	float fVec153[128];
	float fVec154[256];
	float fVec155[512];
	float fVec156[1024];
	float fVec157[2048];
	float fVec158[4096];
	float fRec113[2];
	float fVec159[3];
	float fVec160[7];
	float fVec161[15];
	float fVec162[32];
	float fVec163[64];
	float fVec164[128];
	float fVec165[256];
	float fVec166[512];
	float fVec167[1024];
	float fVec168[2048];
	float fVec169[4096];
	float fRec114[2];
	FAUSTFLOAT fVbargraph7;
	float fRec125[3];
	float fRec124[3];
	float fVec170[2];
	float fRec123[2];
	float fRec128[3];
	float fRec127[3];
	float fVec171[2];
	float fRec126[2];
	float fVec172[3];
	float fVec173[7];
	float fVec174[15];
	float fVec175[32];
	float fVec176[64];
	float fVec177[128];
	float fVec178[256];
	float fVec179[512];
	float fVec180[1024];
	float fVec181[2048];
	float fVec182[4096];
	float fRec129[2];
	float fVec183[3];
	float fVec184[7];
	float fVec185[15];
	float fVec186[32];
	float fVec187[64];
	float fVec188[128];
	float fVec189[256];
	float fVec190[512];
	float fVec191[1024];
	float fVec192[2048];
	float fVec193[4096];
	float fRec130[2];
	FAUSTFLOAT fVbargraph8;
	float fRec131[2];
	float fRec132[2];
	float fRec119[2];
	float fRec120[2];
	float fRec115[2];
	float fRec116[2];
	float fRec97[2];
	float fRec98[2];
	float fRec93[2];
	float fRec94[2];
	float fRec75[2];
	float fRec76[2];
	float fRec71[2];
	float fRec72[2];
	float fRec53[2];
	float fRec54[2];
	FAUSTFLOAT fCheckbox2;
	float fRec135[2];
	float fVec194[2];
	float fVec195[3];
	float fVec196[7];
	float fVec197[15];
	float fVec198[32];
	float fRec146[2];
	float fVec199[2];
	float fRec150[2];
	float fRec149[2];
	float fVec200[2];
	float fRec148[2];
	float fRec147[2];
	float fVec201[2];
	float fVec202[3];
	float fVec203[7];
	float fVec204[15];
	float fVec205[32];
	float fVec206[64];
	float fVec207[128];
	float fVec208[256];
	float fVec209[512];
	float fVec210[1024];
	float fVec211[2048];
	float fVec212[2];
	float fRec154[2];
	float fRec153[2];
	float fVec213[2];
	float fRec152[2];
	float fRec151[2];
	float fVec214[2];
	float fVec215[3];
	float fVec216[7];
	float fVec217[15];
	float fVec218[32];
	float fVec219[64];
	float fVec220[128];
	float fVec221[256];
	float fVec222[512];
	float fVec223[1024];
	float fVec224[2048];
	float fRec141[2];
	float fRec142[2];
	float fRec139[2];
	FAUSTFLOAT fVbargraph9;
	float fRec138[2];
	float fRec136[3];
	float fRec183[2];
	float fRec184[2];
	float fRec179[2];
	float fRec180[2];
	float fRec175[2];
	float fRec176[2];
	float fRec171[2];
	float fRec172[2];
	float fRec167[2];
	float fRec168[2];
	float fRec163[2];
	float fRec164[2];
	float fRec159[2];
	float fRec160[2];
	float fRec155[2];
	float fRec156[2];
	float fRec137[3];
	float fVec225[2048];
	FAUSTFLOAT fHbargraph0;
	int iConst171;
	float fConst172;
	float fConst173;
	float fVec226[2048];
	int iRec189[2];
	float fRec190[2];
	float fConst174;
	float fRec188[2];
	float fConst175;
	float fConst176;
	float fRec187[2];
	FAUSTFLOAT fVbargraph10;
	FAUSTFLOAT fCheckbox3;
	float fRec191[2];
	float fVec227[2];
	float fRec0[2];
	FAUSTFLOAT fVbargraph11;
	float fVec228[2];
	float fVec229[2];
	float fRec196[2];
	float fRec195[2];
	float fVec230[2];
	float fRec194[2];
	float fRec193[2];
	float fVec231[2];
	float fVec232[3];
	float fVec233[7];
	float fVec234[15];
	float fVec235[32];
	float fVec236[64];
	float fVec237[128];
	float fVec238[256];
	float fVec239[512];
	float fVec240[1024];
	float fVec241[2048];
	float fVec242[4096];
	float fVec243[8192];
	float fVec244[16384];
	float fVec245[32768];
	float fVec246[65536];
	float fVec247[131072];
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
		m->declare("compile_options", "-a /tmp/tmp9hqtxzve.cpp -lang cpp -es 1 -mcd 16 -single -ftz 0");
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
		fConst2 = std::tan(21991.148f / fConst0);
		float fConst3 = mydsp_faustpower2_f(fConst2);
		fConst4 = 1.0f / fConst3;
		fConst5 = 2.0f * (1.0f - fConst4);
		float fConst6 = 1.0f / fConst2;
		fConst7 = (fConst6 + -0.5176381f) / fConst2 + 1.0f;
		fConst8 = 1.0f / ((fConst6 + 0.5176381f) / fConst2 + 1.0f);
		fConst9 = (fConst6 + -1.4142135f) / fConst2 + 1.0f;
		fConst10 = 1.0f / ((fConst6 + 1.4142135f) / fConst2 + 1.0f);
		fConst11 = (fConst6 + -1.9318516f) / fConst2 + 1.0f;
		fConst12 = 1.0f / ((fConst6 + 1.9318516f) / fConst2 + 1.0f);
		fConst13 = 44.1f / fConst0;
		fConst14 = 1.0f - fConst13;
		float fConst15 = 31.415926f / fConst0;
		fConst16 = 1.0f - fConst15;
		fConst17 = 1.0f / (fConst15 + 1.0f);
		float fConst18 = std::tan(1979.2034f / fConst0);
		fConst19 = 1.0f / fConst18;
		fConst20 = 1.0f - fConst19;
		float fConst21 = fConst19 + 1.0f;
		fConst22 = 1.0f / fConst21;
		fConst23 = 0.0f - 1.0f / (fConst18 * fConst21);
		fConst24 = 0.125f * fConst0;
		fConst25 = 6.281153e-07f * fConst0;
		iConst26 = int(std::floor(0.0001f * fConst0)) % 2;
		iConst27 = int(std::floor(5e-05f * fConst0)) % 2;
		iConst28 = int(std::floor(2.5e-05f * fConst0)) % 2;
		iConst29 = iConst26 + 2 * iConst27;
		iConst30 = int(std::floor(1.25e-05f * fConst0)) % 2;
		iConst31 = iConst29 + 4 * iConst28;
		iConst32 = int(std::floor(6.25e-06f * fConst0)) % 2;
		iConst33 = iConst31 + 8 * iConst30;
		fConst34 = std::exp(0.0f - 1e+01f / fConst0);
		fConst35 = 3.1415927f / fConst0;
		float fConst36 = 0.01f * fConst0;
		float fConst37 = std::rint(fConst36);
		iConst38 = int(std::floor(0.5f * fConst37)) % 2;
		float fConst39 = std::tan(5283.415f / fConst0);
		float fConst40 = mydsp_faustpower2_f(fConst39);
		fConst41 = fConst40 + -1.5848527f;
		fConst42 = fConst40 + -1.0f;
		float fConst43 = 1.7803667f * fConst39;
		fConst44 = fConst40 + fConst43 + 1.5848527f;
		float fConst45 = 1.4142135f * fConst39;
		fConst46 = 1.0f / (fConst40 + fConst45 + 1.0f);
		fConst47 = fConst40 + (1.5848527f - fConst43);
		fConst48 = fConst40 + (1.0f - fConst45);
		float fConst49 = std::tan(119.806114f / fConst0);
		float fConst50 = mydsp_faustpower2_f(fConst49);
		fConst51 = 1.0006541f * (fConst50 + -1.0f);
		float fConst52 = 0.50032705f * (fConst50 + 1.0f);
		fConst53 = fConst52 - fConst49;
		float fConst54 = fConst49 + fConst52;
		fConst55 = 1.0f / fConst54;
		fConst56 = 0.0f - 1.0006541f / fConst54;
		iConst57 = int(std::floor(fConst37)) % 2;
		iConst58 = int(std::floor(0.25f * fConst37)) % 2;
		iConst59 = iConst57 + 2 * iConst38;
		iConst60 = int(std::floor(0.125f * fConst37)) % 2;
		iConst61 = iConst59 + 4 * iConst58;
		iConst62 = int(std::floor(0.0625f * fConst37)) % 2;
		iConst63 = iConst61 + 8 * iConst60;
		iConst64 = int(std::floor(0.03125f * fConst37)) % 2;
		iConst65 = iConst63 + 16 * iConst62;
		iConst66 = int(std::floor(0.015625f * fConst37)) % 2;
		iConst67 = iConst65 + 32 * iConst64;
		iConst68 = int(std::floor(0.0078125f * fConst37)) % 2;
		iConst69 = iConst67 + 64 * iConst66;
		iConst70 = int(std::floor(0.00390625f * fConst37)) % 2;
		iConst71 = iConst69 + 128 * iConst68;
		iConst72 = int(std::floor(0.001953125f * fConst37)) % 2;
		iConst73 = iConst71 + 256 * iConst70;
		iConst74 = int(std::floor(0.0009765625f * fConst37)) % 2;
		iConst75 = iConst73 + 512 * iConst72;
		fConst76 = 1.0f / std::max<float>(fConst37, 1.1920929e-07f);
		float fConst77 = std::rint(0.4f * fConst0);
		iConst78 = int(std::floor(0.5f * fConst77)) % 2;
		iConst79 = int(std::floor(fConst77)) % 2;
		iConst80 = int(std::floor(0.25f * fConst77)) % 2;
		iConst81 = iConst79 + 2 * iConst78;
		iConst82 = int(std::floor(0.125f * fConst77)) % 2;
		iConst83 = iConst81 + 4 * iConst80;
		iConst84 = int(std::floor(0.0625f * fConst77)) % 2;
		iConst85 = iConst83 + 8 * iConst82;
		iConst86 = int(std::floor(0.03125f * fConst77)) % 2;
		iConst87 = iConst85 + 16 * iConst84;
		iConst88 = int(std::floor(0.015625f * fConst77)) % 2;
		iConst89 = iConst87 + 32 * iConst86;
		iConst90 = int(std::floor(0.0078125f * fConst77)) % 2;
		iConst91 = iConst89 + 64 * iConst88;
		iConst92 = int(std::floor(0.00390625f * fConst77)) % 2;
		iConst93 = iConst91 + 128 * iConst90;
		iConst94 = int(std::floor(0.001953125f * fConst77)) % 2;
		iConst95 = iConst93 + 256 * iConst92;
		iConst96 = int(std::floor(0.0009765625f * fConst77)) % 2;
		iConst97 = iConst95 + 512 * iConst94;
		iConst98 = int(std::floor(0.00048828125f * fConst77)) % 2;
		iConst99 = iConst97 + 1024 * iConst96;
		iConst100 = int(std::floor(0.00024414062f * fConst77)) % 2;
		iConst101 = iConst99 + 2048 * iConst98;
		iConst102 = int(std::floor(0.00012207031f * fConst77)) % 2;
		iConst103 = iConst101 + 4096 * iConst100;
		iConst104 = int(std::floor(6.1035156e-05f * fConst77)) % 2;
		iConst105 = iConst103 + 8192 * iConst102;
		iConst106 = int(std::floor(3.0517578e-05f * fConst77)) % 2;
		iConst107 = iConst105 + 16384 * iConst104;
		iConst108 = int(std::floor(1.5258789e-05f * fConst77)) % 2;
		iConst109 = iConst107 + 32768 * iConst106;
		fConst110 = 1.0f / std::max<float>(fConst77, 1.1920929e-07f);
		fConst111 = 0.0f - 2.0f / fConst3;
		fConst112 = 1.0f / fConst0;
		iConst113 = int(std::floor(fConst36)) % 2;
		iConst114 = int(std::floor(0.005f * fConst0)) % 2;
		iConst115 = int(std::floor(0.0025f * fConst0)) % 2;
		iConst116 = iConst113 + 2 * iConst114;
		iConst117 = int(std::floor(0.00125f * fConst0)) % 2;
		iConst118 = iConst116 + 4 * iConst115;
		iConst119 = int(std::floor(0.000625f * fConst0)) % 2;
		iConst120 = iConst118 + 8 * iConst117;
		iConst121 = int(std::floor(0.0003125f * fConst0)) % 2;
		iConst122 = iConst120 + 16 * iConst119;
		iConst123 = int(std::floor(0.00015625f * fConst0)) % 2;
		iConst124 = iConst122 + 32 * iConst121;
		iConst125 = int(std::floor(7.8125e-05f * fConst0)) % 2;
		iConst126 = iConst124 + 64 * iConst123;
		iConst127 = int(std::floor(3.90625e-05f * fConst0)) % 2;
		iConst128 = iConst126 + 128 * iConst125;
		iConst129 = int(std::floor(1.953125e-05f * fConst0)) % 2;
		iConst130 = iConst128 + 256 * iConst127;
		iConst131 = int(std::floor(9.765625e-06f * fConst0)) % 2;
		iConst132 = iConst130 + 512 * iConst129;
		iConst133 = int(std::floor(4.8828124e-06f * fConst0)) % 2;
		iConst134 = iConst132 + 1024 * iConst131;
		fConst135 = std::tan(5335.9927f / fConst0);
		float fConst136 = mydsp_faustpower2_f(fConst135);
		fConst137 = 1.0f / fConst136;
		fConst138 = 2.0f * (1.0f - fConst137);
		float fConst139 = 1.0f / fConst135;
		fConst140 = (fConst139 + -0.5176381f) / fConst135 + 1.0f;
		fConst141 = 1.0f / ((fConst139 + 0.5176381f) / fConst135 + 1.0f);
		fConst142 = (fConst139 + -1.4142135f) / fConst135 + 1.0f;
		fConst143 = 1.0f / ((fConst139 + 1.4142135f) / fConst135 + 1.0f);
		fConst144 = (fConst139 + -1.9318516f) / fConst135 + 1.0f;
		fConst145 = 1.0f / ((fConst139 + 1.9318516f) / fConst135 + 1.0f);
		fConst146 = 0.0f - 2.0f / fConst136;
		fConst147 = std::tan(1294.74f / fConst0);
		float fConst148 = mydsp_faustpower2_f(fConst147);
		fConst149 = 1.0f / fConst148;
		fConst150 = 2.0f * (1.0f - fConst149);
		float fConst151 = 1.0f / fConst147;
		fConst152 = (fConst151 + -0.5176381f) / fConst147 + 1.0f;
		fConst153 = 1.0f / ((fConst151 + 0.5176381f) / fConst147 + 1.0f);
		fConst154 = (fConst151 + -1.4142135f) / fConst147 + 1.0f;
		fConst155 = 1.0f / ((fConst151 + 1.4142135f) / fConst147 + 1.0f);
		fConst156 = (fConst151 + -1.9318516f) / fConst147 + 1.0f;
		fConst157 = 1.0f / ((fConst151 + 1.9318516f) / fConst147 + 1.0f);
		fConst158 = 0.0f - 2.0f / fConst148;
		fConst159 = std::tan(314.15927f / fConst0);
		float fConst160 = mydsp_faustpower2_f(fConst159);
		fConst161 = 1.0f / fConst160;
		fConst162 = 2.0f * (1.0f - fConst161);
		float fConst163 = 1.0f / fConst159;
		fConst164 = (fConst163 + -0.5176381f) / fConst159 + 1.0f;
		fConst165 = 1.0f / ((fConst163 + 0.5176381f) / fConst159 + 1.0f);
		fConst166 = (fConst163 + -1.4142135f) / fConst159 + 1.0f;
		fConst167 = 1.0f / ((fConst163 + 1.4142135f) / fConst159 + 1.0f);
		fConst168 = (fConst163 + -1.9318516f) / fConst159 + 1.0f;
		fConst169 = 1.0f / ((fConst163 + 1.9318516f) / fConst159 + 1.0f);
		fConst170 = 0.0f - 2.0f / fConst160;
		iConst171 = int(0.01f * fConst0);
		fConst172 = std::exp(0.0f - 628.31854f / fConst0);
		fConst173 = 0.1f * fConst0;
		fConst174 = 1.0f - fConst172;
		fConst175 = std::exp(0.0f - 6.2831855f / fConst0);
		fConst176 = 1.0f - fConst175;
	}
	
	FAUSTPP_VIRTUAL void instanceResetUserInterface() {
		fVslider0 = FAUSTFLOAT(0.0f);
		fVslider1 = FAUSTFLOAT(-18.0f);
		fVslider2 = FAUSTFLOAT(0.0f);
		fVslider3 = FAUSTFLOAT(0.0f);
		fCheckbox0 = FAUSTFLOAT(0.0f);
		fCheckbox1 = FAUSTFLOAT(0.0f);
		fCheckbox2 = FAUSTFLOAT(0.0f);
		fCheckbox3 = FAUSTFLOAT(0.0f);
	}
	
	FAUSTPP_VIRTUAL void instanceClear() {
		for (int l0 = 0; l0 < 2; l0 = l0 + 1) {
			fRec5[l0] = 0.0f;
		}
		for (int l1 = 0; l1 < 2; l1 = l1 + 1) {
			fRec10[l1] = 0.0f;
		}
		for (int l2 = 0; l2 < 2; l2 = l2 + 1) {
			fRec9[l2] = 0.0f;
		}
		for (int l3 = 0; l3 < 2; l3 = l3 + 1) {
			fVec0[l3] = 0.0f;
		}
		for (int l4 = 0; l4 < 2; l4 = l4 + 1) {
			fRec8[l4] = 0.0f;
		}
		for (int l5 = 0; l5 < 2; l5 = l5 + 1) {
			fRec7[l5] = 0.0f;
		}
		for (int l6 = 0; l6 < 2; l6 = l6 + 1) {
			fRec11[l6] = 0.0f;
		}
		for (int l7 = 0; l7 < 2; l7 = l7 + 1) {
			fVec1[l7] = 0.0f;
		}
		for (int l8 = 0; l8 < 2; l8 = l8 + 1) {
			fRec6[l8] = 0.0f;
		}
		for (int l9 = 0; l9 < 2; l9 = l9 + 1) {
			fRec12[l9] = 0.0f;
		}
		for (int l10 = 0; l10 < 2; l10 = l10 + 1) {
			fRec13[l10] = 0.0f;
		}
		for (int l11 = 0; l11 < 2; l11 = l11 + 1) {
			fVec2[l11] = 0.0f;
		}
		for (int l12 = 0; l12 < 3; l12 = l12 + 1) {
			fVec3[l12] = 0.0f;
		}
		for (int l13 = 0; l13 < 7; l13 = l13 + 1) {
			fVec4[l13] = 0.0f;
		}
		for (int l14 = 0; l14 < 15; l14 = l14 + 1) {
			fVec5[l14] = 0.0f;
		}
		IOTA0 = 0;
		for (int l15 = 0; l15 < 32; l15 = l15 + 1) {
			fVec6[l15] = 0.0f;
		}
		for (int l16 = 0; l16 < 2; l16 = l16 + 1) {
			fRec24[l16] = 0.0f;
		}
		for (int l17 = 0; l17 < 2; l17 = l17 + 1) {
			fVec7[l17] = 0.0f;
		}
		for (int l18 = 0; l18 < 2; l18 = l18 + 1) {
			fRec28[l18] = 0.0f;
		}
		for (int l19 = 0; l19 < 2; l19 = l19 + 1) {
			fRec27[l19] = 0.0f;
		}
		for (int l20 = 0; l20 < 2; l20 = l20 + 1) {
			fVec8[l20] = 0.0f;
		}
		for (int l21 = 0; l21 < 2; l21 = l21 + 1) {
			fRec26[l21] = 0.0f;
		}
		for (int l22 = 0; l22 < 2; l22 = l22 + 1) {
			fRec25[l22] = 0.0f;
		}
		for (int l23 = 0; l23 < 2; l23 = l23 + 1) {
			fVec9[l23] = 0.0f;
		}
		for (int l24 = 0; l24 < 3; l24 = l24 + 1) {
			fVec10[l24] = 0.0f;
		}
		for (int l25 = 0; l25 < 7; l25 = l25 + 1) {
			fVec11[l25] = 0.0f;
		}
		for (int l26 = 0; l26 < 15; l26 = l26 + 1) {
			fVec12[l26] = 0.0f;
		}
		for (int l27 = 0; l27 < 32; l27 = l27 + 1) {
			fVec13[l27] = 0.0f;
		}
		for (int l28 = 0; l28 < 64; l28 = l28 + 1) {
			fVec14[l28] = 0.0f;
		}
		for (int l29 = 0; l29 < 128; l29 = l29 + 1) {
			fVec15[l29] = 0.0f;
		}
		for (int l30 = 0; l30 < 256; l30 = l30 + 1) {
			fVec16[l30] = 0.0f;
		}
		for (int l31 = 0; l31 < 512; l31 = l31 + 1) {
			fVec17[l31] = 0.0f;
		}
		for (int l32 = 0; l32 < 1024; l32 = l32 + 1) {
			fVec18[l32] = 0.0f;
		}
		for (int l33 = 0; l33 < 2048; l33 = l33 + 1) {
			fVec19[l33] = 0.0f;
		}
		for (int l34 = 0; l34 < 2; l34 = l34 + 1) {
			fVec20[l34] = 0.0f;
		}
		for (int l35 = 0; l35 < 2; l35 = l35 + 1) {
			fRec32[l35] = 0.0f;
		}
		for (int l36 = 0; l36 < 2; l36 = l36 + 1) {
			fRec31[l36] = 0.0f;
		}
		for (int l37 = 0; l37 < 2; l37 = l37 + 1) {
			fVec21[l37] = 0.0f;
		}
		for (int l38 = 0; l38 < 2; l38 = l38 + 1) {
			fRec30[l38] = 0.0f;
		}
		for (int l39 = 0; l39 < 2; l39 = l39 + 1) {
			fRec29[l39] = 0.0f;
		}
		for (int l40 = 0; l40 < 2; l40 = l40 + 1) {
			fVec22[l40] = 0.0f;
		}
		for (int l41 = 0; l41 < 3; l41 = l41 + 1) {
			fVec23[l41] = 0.0f;
		}
		for (int l42 = 0; l42 < 7; l42 = l42 + 1) {
			fVec24[l42] = 0.0f;
		}
		for (int l43 = 0; l43 < 15; l43 = l43 + 1) {
			fVec25[l43] = 0.0f;
		}
		for (int l44 = 0; l44 < 32; l44 = l44 + 1) {
			fVec26[l44] = 0.0f;
		}
		for (int l45 = 0; l45 < 64; l45 = l45 + 1) {
			fVec27[l45] = 0.0f;
		}
		for (int l46 = 0; l46 < 128; l46 = l46 + 1) {
			fVec28[l46] = 0.0f;
		}
		for (int l47 = 0; l47 < 256; l47 = l47 + 1) {
			fVec29[l47] = 0.0f;
		}
		for (int l48 = 0; l48 < 512; l48 = l48 + 1) {
			fVec30[l48] = 0.0f;
		}
		for (int l49 = 0; l49 < 1024; l49 = l49 + 1) {
			fVec31[l49] = 0.0f;
		}
		for (int l50 = 0; l50 < 2048; l50 = l50 + 1) {
			fVec32[l50] = 0.0f;
		}
		for (int l51 = 0; l51 < 2; l51 = l51 + 1) {
			fRec19[l51] = 0.0f;
		}
		for (int l52 = 0; l52 < 2; l52 = l52 + 1) {
			fRec20[l52] = 0.0f;
		}
		for (int l53 = 0; l53 < 2; l53 = l53 + 1) {
			fRec17[l53] = 0.0f;
		}
		for (int l54 = 0; l54 < 2; l54 = l54 + 1) {
			fRec16[l54] = 0.0f;
		}
		for (int l55 = 0; l55 < 3; l55 = l55 + 1) {
			fRec14[l55] = 0.0f;
		}
		for (int l56 = 0; l56 < 2; l56 = l56 + 1) {
			fRec40[l56] = 0.0f;
		}
		for (int l57 = 0; l57 < 2; l57 = l57 + 1) {
			fVec33[l57] = 0.0f;
		}
		for (int l58 = 0; l58 < 2; l58 = l58 + 1) {
			fVec34[l58] = 0.0f;
		}
		for (int l59 = 0; l59 < 2; l59 = l59 + 1) {
			fRec39[l59] = 0.0f;
		}
		for (int l60 = 0; l60 < 2; l60 = l60 + 1) {
			fRec38[l60] = 0.0f;
		}
		for (int l61 = 0; l61 < 2; l61 = l61 + 1) {
			fVec35[l61] = 0.0f;
		}
		for (int l62 = 0; l62 < 2; l62 = l62 + 1) {
			fRec37[l62] = 0.0f;
		}
		for (int l63 = 0; l63 < 2; l63 = l63 + 1) {
			fRec36[l63] = 0.0f;
		}
		for (int l64 = 0; l64 < 2; l64 = l64 + 1) {
			fVec36[l64] = 0.0f;
		}
		for (int l65 = 0; l65 < 3; l65 = l65 + 1) {
			fVec37[l65] = 0.0f;
		}
		for (int l66 = 0; l66 < 7; l66 = l66 + 1) {
			fVec38[l66] = 0.0f;
		}
		for (int l67 = 0; l67 < 15; l67 = l67 + 1) {
			fVec39[l67] = 0.0f;
		}
		for (int l68 = 0; l68 < 32; l68 = l68 + 1) {
			fVec40[l68] = 0.0f;
		}
		for (int l69 = 0; l69 < 64; l69 = l69 + 1) {
			fVec41[l69] = 0.0f;
		}
		for (int l70 = 0; l70 < 128; l70 = l70 + 1) {
			fVec42[l70] = 0.0f;
		}
		for (int l71 = 0; l71 < 256; l71 = l71 + 1) {
			fVec43[l71] = 0.0f;
		}
		for (int l72 = 0; l72 < 512; l72 = l72 + 1) {
			fVec44[l72] = 0.0f;
		}
		for (int l73 = 0; l73 < 1024; l73 = l73 + 1) {
			fVec45[l73] = 0.0f;
		}
		for (int l74 = 0; l74 < 2048; l74 = l74 + 1) {
			fVec46[l74] = 0.0f;
		}
		for (int l75 = 0; l75 < 4096; l75 = l75 + 1) {
			fVec47[l75] = 0.0f;
		}
		for (int l76 = 0; l76 < 8192; l76 = l76 + 1) {
			fVec48[l76] = 0.0f;
		}
		for (int l77 = 0; l77 < 16384; l77 = l77 + 1) {
			fVec49[l77] = 0.0f;
		}
		for (int l78 = 0; l78 < 32768; l78 = l78 + 1) {
			fVec50[l78] = 0.0f;
		}
		for (int l79 = 0; l79 < 65536; l79 = l79 + 1) {
			fVec51[l79] = 0.0f;
		}
		for (int l80 = 0; l80 < 131072; l80 = l80 + 1) {
			fVec52[l80] = 0.0f;
		}
		for (int l81 = 0; l81 < 2; l81 = l81 + 1) {
			fVec53[l81] = 0.0f;
		}
		for (int l82 = 0; l82 < 2; l82 = l82 + 1) {
			fRec44[l82] = 0.0f;
		}
		for (int l83 = 0; l83 < 2; l83 = l83 + 1) {
			fRec43[l83] = 0.0f;
		}
		for (int l84 = 0; l84 < 2; l84 = l84 + 1) {
			fVec54[l84] = 0.0f;
		}
		for (int l85 = 0; l85 < 2; l85 = l85 + 1) {
			fRec42[l85] = 0.0f;
		}
		for (int l86 = 0; l86 < 2; l86 = l86 + 1) {
			fRec41[l86] = 0.0f;
		}
		for (int l87 = 0; l87 < 2; l87 = l87 + 1) {
			fVec55[l87] = 0.0f;
		}
		for (int l88 = 0; l88 < 3; l88 = l88 + 1) {
			fVec56[l88] = 0.0f;
		}
		for (int l89 = 0; l89 < 7; l89 = l89 + 1) {
			fVec57[l89] = 0.0f;
		}
		for (int l90 = 0; l90 < 15; l90 = l90 + 1) {
			fVec58[l90] = 0.0f;
		}
		for (int l91 = 0; l91 < 32; l91 = l91 + 1) {
			fVec59[l91] = 0.0f;
		}
		for (int l92 = 0; l92 < 64; l92 = l92 + 1) {
			fVec60[l92] = 0.0f;
		}
		for (int l93 = 0; l93 < 128; l93 = l93 + 1) {
			fVec61[l93] = 0.0f;
		}
		for (int l94 = 0; l94 < 256; l94 = l94 + 1) {
			fVec62[l94] = 0.0f;
		}
		for (int l95 = 0; l95 < 512; l95 = l95 + 1) {
			fVec63[l95] = 0.0f;
		}
		for (int l96 = 0; l96 < 1024; l96 = l96 + 1) {
			fVec64[l96] = 0.0f;
		}
		for (int l97 = 0; l97 < 2048; l97 = l97 + 1) {
			fVec65[l97] = 0.0f;
		}
		for (int l98 = 0; l98 < 4096; l98 = l98 + 1) {
			fVec66[l98] = 0.0f;
		}
		for (int l99 = 0; l99 < 8192; l99 = l99 + 1) {
			fVec67[l99] = 0.0f;
		}
		for (int l100 = 0; l100 < 16384; l100 = l100 + 1) {
			fVec68[l100] = 0.0f;
		}
		for (int l101 = 0; l101 < 32768; l101 = l101 + 1) {
			fVec69[l101] = 0.0f;
		}
		for (int l102 = 0; l102 < 65536; l102 = l102 + 1) {
			fVec70[l102] = 0.0f;
		}
		for (int l103 = 0; l103 < 131072; l103 = l103 + 1) {
			fVec71[l103] = 0.0f;
		}
		for (int l104 = 0; l104 < 2; l104 = l104 + 1) {
			fVec72[l104] = 0.0f;
		}
		for (int l105 = 0; l105 < 2; l105 = l105 + 1) {
			fRec35[l105] = 0.0f;
		}
		for (int l106 = 0; l106 < 2; l106 = l106 + 1) {
			fRec34[l106] = 0.0f;
		}
		for (int l107 = 0; l107 < 2; l107 = l107 + 1) {
			fRec45[l107] = 0.0f;
		}
		for (int l108 = 0; l108 < 2; l108 = l108 + 1) {
			fVec73[l108] = 0.0f;
		}
		for (int l109 = 0; l109 < 2; l109 = l109 + 1) {
			fRec33[l109] = 0.0f;
		}
		for (int l110 = 0; l110 < 2; l110 = l110 + 1) {
			fRec46[l110] = 0.0f;
		}
		for (int l111 = 0; l111 < 3; l111 = l111 + 1) {
			fRec15[l111] = 0.0f;
		}
		for (int l112 = 0; l112 < 3; l112 = l112 + 1) {
			fRec4[l112] = 0.0f;
		}
		for (int l113 = 0; l113 < 3; l113 = l113 + 1) {
			fRec3[l113] = 0.0f;
		}
		for (int l114 = 0; l114 < 3; l114 = l114 + 1) {
			fRec2[l114] = 0.0f;
		}
		for (int l115 = 0; l115 < 2; l115 = l115 + 1) {
			fVec74[l115] = 0.0f;
		}
		for (int l116 = 0; l116 < 2; l116 = l116 + 1) {
			fRec1[l116] = 0.0f;
		}
		for (int l117 = 0; l117 < 3; l117 = l117 + 1) {
			fRec50[l117] = 0.0f;
		}
		for (int l118 = 0; l118 < 3; l118 = l118 + 1) {
			fRec49[l118] = 0.0f;
		}
		for (int l119 = 0; l119 < 3; l119 = l119 + 1) {
			fRec48[l119] = 0.0f;
		}
		for (int l120 = 0; l120 < 2; l120 = l120 + 1) {
			fVec75[l120] = 0.0f;
		}
		for (int l121 = 0; l121 < 2; l121 = l121 + 1) {
			fRec47[l121] = 0.0f;
		}
		for (int l122 = 0; l122 < 3; l122 = l122 + 1) {
			fVec76[l122] = 0.0f;
		}
		for (int l123 = 0; l123 < 7; l123 = l123 + 1) {
			fVec77[l123] = 0.0f;
		}
		for (int l124 = 0; l124 < 15; l124 = l124 + 1) {
			fVec78[l124] = 0.0f;
		}
		for (int l125 = 0; l125 < 32; l125 = l125 + 1) {
			fVec79[l125] = 0.0f;
		}
		for (int l126 = 0; l126 < 64; l126 = l126 + 1) {
			fVec80[l126] = 0.0f;
		}
		for (int l127 = 0; l127 < 128; l127 = l127 + 1) {
			fVec81[l127] = 0.0f;
		}
		for (int l128 = 0; l128 < 256; l128 = l128 + 1) {
			fVec82[l128] = 0.0f;
		}
		for (int l129 = 0; l129 < 512; l129 = l129 + 1) {
			fVec83[l129] = 0.0f;
		}
		for (int l130 = 0; l130 < 1024; l130 = l130 + 1) {
			fVec84[l130] = 0.0f;
		}
		for (int l131 = 0; l131 < 2048; l131 = l131 + 1) {
			fVec85[l131] = 0.0f;
		}
		for (int l132 = 0; l132 < 4096; l132 = l132 + 1) {
			fVec86[l132] = 0.0f;
		}
		for (int l133 = 0; l133 < 2; l133 = l133 + 1) {
			fRec51[l133] = 0.0f;
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
		for (int l145 = 0; l145 < 2; l145 = l145 + 1) {
			fRec52[l145] = 0.0f;
		}
		for (int l146 = 0; l146 < 3; l146 = l146 + 1) {
			fRec62[l146] = 0.0f;
		}
		for (int l147 = 0; l147 < 3; l147 = l147 + 1) {
			fRec61[l147] = 0.0f;
		}
		for (int l148 = 0; l148 < 3; l148 = l148 + 1) {
			fRec60[l148] = 0.0f;
		}
		for (int l149 = 0; l149 < 3; l149 = l149 + 1) {
			fRec59[l149] = 0.0f;
		}
		for (int l150 = 0; l150 < 3; l150 = l150 + 1) {
			fRec58[l150] = 0.0f;
		}
		for (int l151 = 0; l151 < 2; l151 = l151 + 1) {
			fVec98[l151] = 0.0f;
		}
		for (int l152 = 0; l152 < 2; l152 = l152 + 1) {
			fRec57[l152] = 0.0f;
		}
		for (int l153 = 0; l153 < 3; l153 = l153 + 1) {
			fRec68[l153] = 0.0f;
		}
		for (int l154 = 0; l154 < 3; l154 = l154 + 1) {
			fRec67[l154] = 0.0f;
		}
		for (int l155 = 0; l155 < 3; l155 = l155 + 1) {
			fRec66[l155] = 0.0f;
		}
		for (int l156 = 0; l156 < 3; l156 = l156 + 1) {
			fRec65[l156] = 0.0f;
		}
		for (int l157 = 0; l157 < 3; l157 = l157 + 1) {
			fRec64[l157] = 0.0f;
		}
		for (int l158 = 0; l158 < 2; l158 = l158 + 1) {
			fVec99[l158] = 0.0f;
		}
		for (int l159 = 0; l159 < 2; l159 = l159 + 1) {
			fRec63[l159] = 0.0f;
		}
		for (int l160 = 0; l160 < 3; l160 = l160 + 1) {
			fVec100[l160] = 0.0f;
		}
		for (int l161 = 0; l161 < 7; l161 = l161 + 1) {
			fVec101[l161] = 0.0f;
		}
		for (int l162 = 0; l162 < 15; l162 = l162 + 1) {
			fVec102[l162] = 0.0f;
		}
		for (int l163 = 0; l163 < 32; l163 = l163 + 1) {
			fVec103[l163] = 0.0f;
		}
		for (int l164 = 0; l164 < 64; l164 = l164 + 1) {
			fVec104[l164] = 0.0f;
		}
		for (int l165 = 0; l165 < 128; l165 = l165 + 1) {
			fVec105[l165] = 0.0f;
		}
		for (int l166 = 0; l166 < 256; l166 = l166 + 1) {
			fVec106[l166] = 0.0f;
		}
		for (int l167 = 0; l167 < 512; l167 = l167 + 1) {
			fVec107[l167] = 0.0f;
		}
		for (int l168 = 0; l168 < 1024; l168 = l168 + 1) {
			fVec108[l168] = 0.0f;
		}
		for (int l169 = 0; l169 < 2048; l169 = l169 + 1) {
			fVec109[l169] = 0.0f;
		}
		for (int l170 = 0; l170 < 4096; l170 = l170 + 1) {
			fVec110[l170] = 0.0f;
		}
		for (int l171 = 0; l171 < 2; l171 = l171 + 1) {
			fRec69[l171] = 0.0f;
		}
		for (int l172 = 0; l172 < 3; l172 = l172 + 1) {
			fVec111[l172] = 0.0f;
		}
		for (int l173 = 0; l173 < 7; l173 = l173 + 1) {
			fVec112[l173] = 0.0f;
		}
		for (int l174 = 0; l174 < 15; l174 = l174 + 1) {
			fVec113[l174] = 0.0f;
		}
		for (int l175 = 0; l175 < 32; l175 = l175 + 1) {
			fVec114[l175] = 0.0f;
		}
		for (int l176 = 0; l176 < 64; l176 = l176 + 1) {
			fVec115[l176] = 0.0f;
		}
		for (int l177 = 0; l177 < 128; l177 = l177 + 1) {
			fVec116[l177] = 0.0f;
		}
		for (int l178 = 0; l178 < 256; l178 = l178 + 1) {
			fVec117[l178] = 0.0f;
		}
		for (int l179 = 0; l179 < 512; l179 = l179 + 1) {
			fVec118[l179] = 0.0f;
		}
		for (int l180 = 0; l180 < 1024; l180 = l180 + 1) {
			fVec119[l180] = 0.0f;
		}
		for (int l181 = 0; l181 < 2048; l181 = l181 + 1) {
			fVec120[l181] = 0.0f;
		}
		for (int l182 = 0; l182 < 4096; l182 = l182 + 1) {
			fVec121[l182] = 0.0f;
		}
		for (int l183 = 0; l183 < 2; l183 = l183 + 1) {
			fRec70[l183] = 0.0f;
		}
		for (int l184 = 0; l184 < 3; l184 = l184 + 1) {
			fRec84[l184] = 0.0f;
		}
		for (int l185 = 0; l185 < 3; l185 = l185 + 1) {
			fRec83[l185] = 0.0f;
		}
		for (int l186 = 0; l186 < 3; l186 = l186 + 1) {
			fRec82[l186] = 0.0f;
		}
		for (int l187 = 0; l187 < 3; l187 = l187 + 1) {
			fRec81[l187] = 0.0f;
		}
		for (int l188 = 0; l188 < 3; l188 = l188 + 1) {
			fRec80[l188] = 0.0f;
		}
		for (int l189 = 0; l189 < 2; l189 = l189 + 1) {
			fVec122[l189] = 0.0f;
		}
		for (int l190 = 0; l190 < 2; l190 = l190 + 1) {
			fRec79[l190] = 0.0f;
		}
		for (int l191 = 0; l191 < 3; l191 = l191 + 1) {
			fRec90[l191] = 0.0f;
		}
		for (int l192 = 0; l192 < 3; l192 = l192 + 1) {
			fRec89[l192] = 0.0f;
		}
		for (int l193 = 0; l193 < 3; l193 = l193 + 1) {
			fRec88[l193] = 0.0f;
		}
		for (int l194 = 0; l194 < 3; l194 = l194 + 1) {
			fRec87[l194] = 0.0f;
		}
		for (int l195 = 0; l195 < 3; l195 = l195 + 1) {
			fRec86[l195] = 0.0f;
		}
		for (int l196 = 0; l196 < 2; l196 = l196 + 1) {
			fVec123[l196] = 0.0f;
		}
		for (int l197 = 0; l197 < 2; l197 = l197 + 1) {
			fRec85[l197] = 0.0f;
		}
		for (int l198 = 0; l198 < 3; l198 = l198 + 1) {
			fVec124[l198] = 0.0f;
		}
		for (int l199 = 0; l199 < 7; l199 = l199 + 1) {
			fVec125[l199] = 0.0f;
		}
		for (int l200 = 0; l200 < 15; l200 = l200 + 1) {
			fVec126[l200] = 0.0f;
		}
		for (int l201 = 0; l201 < 32; l201 = l201 + 1) {
			fVec127[l201] = 0.0f;
		}
		for (int l202 = 0; l202 < 64; l202 = l202 + 1) {
			fVec128[l202] = 0.0f;
		}
		for (int l203 = 0; l203 < 128; l203 = l203 + 1) {
			fVec129[l203] = 0.0f;
		}
		for (int l204 = 0; l204 < 256; l204 = l204 + 1) {
			fVec130[l204] = 0.0f;
		}
		for (int l205 = 0; l205 < 512; l205 = l205 + 1) {
			fVec131[l205] = 0.0f;
		}
		for (int l206 = 0; l206 < 1024; l206 = l206 + 1) {
			fVec132[l206] = 0.0f;
		}
		for (int l207 = 0; l207 < 2048; l207 = l207 + 1) {
			fVec133[l207] = 0.0f;
		}
		for (int l208 = 0; l208 < 4096; l208 = l208 + 1) {
			fVec134[l208] = 0.0f;
		}
		for (int l209 = 0; l209 < 2; l209 = l209 + 1) {
			fRec91[l209] = 0.0f;
		}
		for (int l210 = 0; l210 < 3; l210 = l210 + 1) {
			fVec135[l210] = 0.0f;
		}
		for (int l211 = 0; l211 < 7; l211 = l211 + 1) {
			fVec136[l211] = 0.0f;
		}
		for (int l212 = 0; l212 < 15; l212 = l212 + 1) {
			fVec137[l212] = 0.0f;
		}
		for (int l213 = 0; l213 < 32; l213 = l213 + 1) {
			fVec138[l213] = 0.0f;
		}
		for (int l214 = 0; l214 < 64; l214 = l214 + 1) {
			fVec139[l214] = 0.0f;
		}
		for (int l215 = 0; l215 < 128; l215 = l215 + 1) {
			fVec140[l215] = 0.0f;
		}
		for (int l216 = 0; l216 < 256; l216 = l216 + 1) {
			fVec141[l216] = 0.0f;
		}
		for (int l217 = 0; l217 < 512; l217 = l217 + 1) {
			fVec142[l217] = 0.0f;
		}
		for (int l218 = 0; l218 < 1024; l218 = l218 + 1) {
			fVec143[l218] = 0.0f;
		}
		for (int l219 = 0; l219 < 2048; l219 = l219 + 1) {
			fVec144[l219] = 0.0f;
		}
		for (int l220 = 0; l220 < 4096; l220 = l220 + 1) {
			fVec145[l220] = 0.0f;
		}
		for (int l221 = 0; l221 < 2; l221 = l221 + 1) {
			fRec92[l221] = 0.0f;
		}
		for (int l222 = 0; l222 < 3; l222 = l222 + 1) {
			fRec106[l222] = 0.0f;
		}
		for (int l223 = 0; l223 < 3; l223 = l223 + 1) {
			fRec105[l223] = 0.0f;
		}
		for (int l224 = 0; l224 < 3; l224 = l224 + 1) {
			fRec104[l224] = 0.0f;
		}
		for (int l225 = 0; l225 < 3; l225 = l225 + 1) {
			fRec103[l225] = 0.0f;
		}
		for (int l226 = 0; l226 < 3; l226 = l226 + 1) {
			fRec102[l226] = 0.0f;
		}
		for (int l227 = 0; l227 < 2; l227 = l227 + 1) {
			fVec146[l227] = 0.0f;
		}
		for (int l228 = 0; l228 < 2; l228 = l228 + 1) {
			fRec101[l228] = 0.0f;
		}
		for (int l229 = 0; l229 < 3; l229 = l229 + 1) {
			fRec112[l229] = 0.0f;
		}
		for (int l230 = 0; l230 < 3; l230 = l230 + 1) {
			fRec111[l230] = 0.0f;
		}
		for (int l231 = 0; l231 < 3; l231 = l231 + 1) {
			fRec110[l231] = 0.0f;
		}
		for (int l232 = 0; l232 < 3; l232 = l232 + 1) {
			fRec109[l232] = 0.0f;
		}
		for (int l233 = 0; l233 < 3; l233 = l233 + 1) {
			fRec108[l233] = 0.0f;
		}
		for (int l234 = 0; l234 < 2; l234 = l234 + 1) {
			fVec147[l234] = 0.0f;
		}
		for (int l235 = 0; l235 < 2; l235 = l235 + 1) {
			fRec107[l235] = 0.0f;
		}
		for (int l236 = 0; l236 < 3; l236 = l236 + 1) {
			fVec148[l236] = 0.0f;
		}
		for (int l237 = 0; l237 < 7; l237 = l237 + 1) {
			fVec149[l237] = 0.0f;
		}
		for (int l238 = 0; l238 < 15; l238 = l238 + 1) {
			fVec150[l238] = 0.0f;
		}
		for (int l239 = 0; l239 < 32; l239 = l239 + 1) {
			fVec151[l239] = 0.0f;
		}
		for (int l240 = 0; l240 < 64; l240 = l240 + 1) {
			fVec152[l240] = 0.0f;
		}
		for (int l241 = 0; l241 < 128; l241 = l241 + 1) {
			fVec153[l241] = 0.0f;
		}
		for (int l242 = 0; l242 < 256; l242 = l242 + 1) {
			fVec154[l242] = 0.0f;
		}
		for (int l243 = 0; l243 < 512; l243 = l243 + 1) {
			fVec155[l243] = 0.0f;
		}
		for (int l244 = 0; l244 < 1024; l244 = l244 + 1) {
			fVec156[l244] = 0.0f;
		}
		for (int l245 = 0; l245 < 2048; l245 = l245 + 1) {
			fVec157[l245] = 0.0f;
		}
		for (int l246 = 0; l246 < 4096; l246 = l246 + 1) {
			fVec158[l246] = 0.0f;
		}
		for (int l247 = 0; l247 < 2; l247 = l247 + 1) {
			fRec113[l247] = 0.0f;
		}
		for (int l248 = 0; l248 < 3; l248 = l248 + 1) {
			fVec159[l248] = 0.0f;
		}
		for (int l249 = 0; l249 < 7; l249 = l249 + 1) {
			fVec160[l249] = 0.0f;
		}
		for (int l250 = 0; l250 < 15; l250 = l250 + 1) {
			fVec161[l250] = 0.0f;
		}
		for (int l251 = 0; l251 < 32; l251 = l251 + 1) {
			fVec162[l251] = 0.0f;
		}
		for (int l252 = 0; l252 < 64; l252 = l252 + 1) {
			fVec163[l252] = 0.0f;
		}
		for (int l253 = 0; l253 < 128; l253 = l253 + 1) {
			fVec164[l253] = 0.0f;
		}
		for (int l254 = 0; l254 < 256; l254 = l254 + 1) {
			fVec165[l254] = 0.0f;
		}
		for (int l255 = 0; l255 < 512; l255 = l255 + 1) {
			fVec166[l255] = 0.0f;
		}
		for (int l256 = 0; l256 < 1024; l256 = l256 + 1) {
			fVec167[l256] = 0.0f;
		}
		for (int l257 = 0; l257 < 2048; l257 = l257 + 1) {
			fVec168[l257] = 0.0f;
		}
		for (int l258 = 0; l258 < 4096; l258 = l258 + 1) {
			fVec169[l258] = 0.0f;
		}
		for (int l259 = 0; l259 < 2; l259 = l259 + 1) {
			fRec114[l259] = 0.0f;
		}
		for (int l260 = 0; l260 < 3; l260 = l260 + 1) {
			fRec125[l260] = 0.0f;
		}
		for (int l261 = 0; l261 < 3; l261 = l261 + 1) {
			fRec124[l261] = 0.0f;
		}
		for (int l262 = 0; l262 < 2; l262 = l262 + 1) {
			fVec170[l262] = 0.0f;
		}
		for (int l263 = 0; l263 < 2; l263 = l263 + 1) {
			fRec123[l263] = 0.0f;
		}
		for (int l264 = 0; l264 < 3; l264 = l264 + 1) {
			fRec128[l264] = 0.0f;
		}
		for (int l265 = 0; l265 < 3; l265 = l265 + 1) {
			fRec127[l265] = 0.0f;
		}
		for (int l266 = 0; l266 < 2; l266 = l266 + 1) {
			fVec171[l266] = 0.0f;
		}
		for (int l267 = 0; l267 < 2; l267 = l267 + 1) {
			fRec126[l267] = 0.0f;
		}
		for (int l268 = 0; l268 < 3; l268 = l268 + 1) {
			fVec172[l268] = 0.0f;
		}
		for (int l269 = 0; l269 < 7; l269 = l269 + 1) {
			fVec173[l269] = 0.0f;
		}
		for (int l270 = 0; l270 < 15; l270 = l270 + 1) {
			fVec174[l270] = 0.0f;
		}
		for (int l271 = 0; l271 < 32; l271 = l271 + 1) {
			fVec175[l271] = 0.0f;
		}
		for (int l272 = 0; l272 < 64; l272 = l272 + 1) {
			fVec176[l272] = 0.0f;
		}
		for (int l273 = 0; l273 < 128; l273 = l273 + 1) {
			fVec177[l273] = 0.0f;
		}
		for (int l274 = 0; l274 < 256; l274 = l274 + 1) {
			fVec178[l274] = 0.0f;
		}
		for (int l275 = 0; l275 < 512; l275 = l275 + 1) {
			fVec179[l275] = 0.0f;
		}
		for (int l276 = 0; l276 < 1024; l276 = l276 + 1) {
			fVec180[l276] = 0.0f;
		}
		for (int l277 = 0; l277 < 2048; l277 = l277 + 1) {
			fVec181[l277] = 0.0f;
		}
		for (int l278 = 0; l278 < 4096; l278 = l278 + 1) {
			fVec182[l278] = 0.0f;
		}
		for (int l279 = 0; l279 < 2; l279 = l279 + 1) {
			fRec129[l279] = 0.0f;
		}
		for (int l280 = 0; l280 < 3; l280 = l280 + 1) {
			fVec183[l280] = 0.0f;
		}
		for (int l281 = 0; l281 < 7; l281 = l281 + 1) {
			fVec184[l281] = 0.0f;
		}
		for (int l282 = 0; l282 < 15; l282 = l282 + 1) {
			fVec185[l282] = 0.0f;
		}
		for (int l283 = 0; l283 < 32; l283 = l283 + 1) {
			fVec186[l283] = 0.0f;
		}
		for (int l284 = 0; l284 < 64; l284 = l284 + 1) {
			fVec187[l284] = 0.0f;
		}
		for (int l285 = 0; l285 < 128; l285 = l285 + 1) {
			fVec188[l285] = 0.0f;
		}
		for (int l286 = 0; l286 < 256; l286 = l286 + 1) {
			fVec189[l286] = 0.0f;
		}
		for (int l287 = 0; l287 < 512; l287 = l287 + 1) {
			fVec190[l287] = 0.0f;
		}
		for (int l288 = 0; l288 < 1024; l288 = l288 + 1) {
			fVec191[l288] = 0.0f;
		}
		for (int l289 = 0; l289 < 2048; l289 = l289 + 1) {
			fVec192[l289] = 0.0f;
		}
		for (int l290 = 0; l290 < 4096; l290 = l290 + 1) {
			fVec193[l290] = 0.0f;
		}
		for (int l291 = 0; l291 < 2; l291 = l291 + 1) {
			fRec130[l291] = 0.0f;
		}
		for (int l292 = 0; l292 < 2; l292 = l292 + 1) {
			fRec131[l292] = 0.0f;
		}
		for (int l293 = 0; l293 < 2; l293 = l293 + 1) {
			fRec132[l293] = 0.0f;
		}
		for (int l294 = 0; l294 < 2; l294 = l294 + 1) {
			fRec119[l294] = 0.0f;
		}
		for (int l295 = 0; l295 < 2; l295 = l295 + 1) {
			fRec120[l295] = 0.0f;
		}
		for (int l296 = 0; l296 < 2; l296 = l296 + 1) {
			fRec115[l296] = 0.0f;
		}
		for (int l297 = 0; l297 < 2; l297 = l297 + 1) {
			fRec116[l297] = 0.0f;
		}
		for (int l298 = 0; l298 < 2; l298 = l298 + 1) {
			fRec97[l298] = 0.0f;
		}
		for (int l299 = 0; l299 < 2; l299 = l299 + 1) {
			fRec98[l299] = 0.0f;
		}
		for (int l300 = 0; l300 < 2; l300 = l300 + 1) {
			fRec93[l300] = 0.0f;
		}
		for (int l301 = 0; l301 < 2; l301 = l301 + 1) {
			fRec94[l301] = 0.0f;
		}
		for (int l302 = 0; l302 < 2; l302 = l302 + 1) {
			fRec75[l302] = 0.0f;
		}
		for (int l303 = 0; l303 < 2; l303 = l303 + 1) {
			fRec76[l303] = 0.0f;
		}
		for (int l304 = 0; l304 < 2; l304 = l304 + 1) {
			fRec71[l304] = 0.0f;
		}
		for (int l305 = 0; l305 < 2; l305 = l305 + 1) {
			fRec72[l305] = 0.0f;
		}
		for (int l306 = 0; l306 < 2; l306 = l306 + 1) {
			fRec53[l306] = 0.0f;
		}
		for (int l307 = 0; l307 < 2; l307 = l307 + 1) {
			fRec54[l307] = 0.0f;
		}
		for (int l308 = 0; l308 < 2; l308 = l308 + 1) {
			fRec135[l308] = 0.0f;
		}
		for (int l309 = 0; l309 < 2; l309 = l309 + 1) {
			fVec194[l309] = 0.0f;
		}
		for (int l310 = 0; l310 < 3; l310 = l310 + 1) {
			fVec195[l310] = 0.0f;
		}
		for (int l311 = 0; l311 < 7; l311 = l311 + 1) {
			fVec196[l311] = 0.0f;
		}
		for (int l312 = 0; l312 < 15; l312 = l312 + 1) {
			fVec197[l312] = 0.0f;
		}
		for (int l313 = 0; l313 < 32; l313 = l313 + 1) {
			fVec198[l313] = 0.0f;
		}
		for (int l314 = 0; l314 < 2; l314 = l314 + 1) {
			fRec146[l314] = 0.0f;
		}
		for (int l315 = 0; l315 < 2; l315 = l315 + 1) {
			fVec199[l315] = 0.0f;
		}
		for (int l316 = 0; l316 < 2; l316 = l316 + 1) {
			fRec150[l316] = 0.0f;
		}
		for (int l317 = 0; l317 < 2; l317 = l317 + 1) {
			fRec149[l317] = 0.0f;
		}
		for (int l318 = 0; l318 < 2; l318 = l318 + 1) {
			fVec200[l318] = 0.0f;
		}
		for (int l319 = 0; l319 < 2; l319 = l319 + 1) {
			fRec148[l319] = 0.0f;
		}
		for (int l320 = 0; l320 < 2; l320 = l320 + 1) {
			fRec147[l320] = 0.0f;
		}
		for (int l321 = 0; l321 < 2; l321 = l321 + 1) {
			fVec201[l321] = 0.0f;
		}
		for (int l322 = 0; l322 < 3; l322 = l322 + 1) {
			fVec202[l322] = 0.0f;
		}
		for (int l323 = 0; l323 < 7; l323 = l323 + 1) {
			fVec203[l323] = 0.0f;
		}
		for (int l324 = 0; l324 < 15; l324 = l324 + 1) {
			fVec204[l324] = 0.0f;
		}
		for (int l325 = 0; l325 < 32; l325 = l325 + 1) {
			fVec205[l325] = 0.0f;
		}
		for (int l326 = 0; l326 < 64; l326 = l326 + 1) {
			fVec206[l326] = 0.0f;
		}
		for (int l327 = 0; l327 < 128; l327 = l327 + 1) {
			fVec207[l327] = 0.0f;
		}
		for (int l328 = 0; l328 < 256; l328 = l328 + 1) {
			fVec208[l328] = 0.0f;
		}
		for (int l329 = 0; l329 < 512; l329 = l329 + 1) {
			fVec209[l329] = 0.0f;
		}
		for (int l330 = 0; l330 < 1024; l330 = l330 + 1) {
			fVec210[l330] = 0.0f;
		}
		for (int l331 = 0; l331 < 2048; l331 = l331 + 1) {
			fVec211[l331] = 0.0f;
		}
		for (int l332 = 0; l332 < 2; l332 = l332 + 1) {
			fVec212[l332] = 0.0f;
		}
		for (int l333 = 0; l333 < 2; l333 = l333 + 1) {
			fRec154[l333] = 0.0f;
		}
		for (int l334 = 0; l334 < 2; l334 = l334 + 1) {
			fRec153[l334] = 0.0f;
		}
		for (int l335 = 0; l335 < 2; l335 = l335 + 1) {
			fVec213[l335] = 0.0f;
		}
		for (int l336 = 0; l336 < 2; l336 = l336 + 1) {
			fRec152[l336] = 0.0f;
		}
		for (int l337 = 0; l337 < 2; l337 = l337 + 1) {
			fRec151[l337] = 0.0f;
		}
		for (int l338 = 0; l338 < 2; l338 = l338 + 1) {
			fVec214[l338] = 0.0f;
		}
		for (int l339 = 0; l339 < 3; l339 = l339 + 1) {
			fVec215[l339] = 0.0f;
		}
		for (int l340 = 0; l340 < 7; l340 = l340 + 1) {
			fVec216[l340] = 0.0f;
		}
		for (int l341 = 0; l341 < 15; l341 = l341 + 1) {
			fVec217[l341] = 0.0f;
		}
		for (int l342 = 0; l342 < 32; l342 = l342 + 1) {
			fVec218[l342] = 0.0f;
		}
		for (int l343 = 0; l343 < 64; l343 = l343 + 1) {
			fVec219[l343] = 0.0f;
		}
		for (int l344 = 0; l344 < 128; l344 = l344 + 1) {
			fVec220[l344] = 0.0f;
		}
		for (int l345 = 0; l345 < 256; l345 = l345 + 1) {
			fVec221[l345] = 0.0f;
		}
		for (int l346 = 0; l346 < 512; l346 = l346 + 1) {
			fVec222[l346] = 0.0f;
		}
		for (int l347 = 0; l347 < 1024; l347 = l347 + 1) {
			fVec223[l347] = 0.0f;
		}
		for (int l348 = 0; l348 < 2048; l348 = l348 + 1) {
			fVec224[l348] = 0.0f;
		}
		for (int l349 = 0; l349 < 2; l349 = l349 + 1) {
			fRec141[l349] = 0.0f;
		}
		for (int l350 = 0; l350 < 2; l350 = l350 + 1) {
			fRec142[l350] = 0.0f;
		}
		for (int l351 = 0; l351 < 2; l351 = l351 + 1) {
			fRec139[l351] = 0.0f;
		}
		for (int l352 = 0; l352 < 2; l352 = l352 + 1) {
			fRec138[l352] = 0.0f;
		}
		for (int l353 = 0; l353 < 3; l353 = l353 + 1) {
			fRec136[l353] = 0.0f;
		}
		for (int l354 = 0; l354 < 2; l354 = l354 + 1) {
			fRec183[l354] = 0.0f;
		}
		for (int l355 = 0; l355 < 2; l355 = l355 + 1) {
			fRec184[l355] = 0.0f;
		}
		for (int l356 = 0; l356 < 2; l356 = l356 + 1) {
			fRec179[l356] = 0.0f;
		}
		for (int l357 = 0; l357 < 2; l357 = l357 + 1) {
			fRec180[l357] = 0.0f;
		}
		for (int l358 = 0; l358 < 2; l358 = l358 + 1) {
			fRec175[l358] = 0.0f;
		}
		for (int l359 = 0; l359 < 2; l359 = l359 + 1) {
			fRec176[l359] = 0.0f;
		}
		for (int l360 = 0; l360 < 2; l360 = l360 + 1) {
			fRec171[l360] = 0.0f;
		}
		for (int l361 = 0; l361 < 2; l361 = l361 + 1) {
			fRec172[l361] = 0.0f;
		}
		for (int l362 = 0; l362 < 2; l362 = l362 + 1) {
			fRec167[l362] = 0.0f;
		}
		for (int l363 = 0; l363 < 2; l363 = l363 + 1) {
			fRec168[l363] = 0.0f;
		}
		for (int l364 = 0; l364 < 2; l364 = l364 + 1) {
			fRec163[l364] = 0.0f;
		}
		for (int l365 = 0; l365 < 2; l365 = l365 + 1) {
			fRec164[l365] = 0.0f;
		}
		for (int l366 = 0; l366 < 2; l366 = l366 + 1) {
			fRec159[l366] = 0.0f;
		}
		for (int l367 = 0; l367 < 2; l367 = l367 + 1) {
			fRec160[l367] = 0.0f;
		}
		for (int l368 = 0; l368 < 2; l368 = l368 + 1) {
			fRec155[l368] = 0.0f;
		}
		for (int l369 = 0; l369 < 2; l369 = l369 + 1) {
			fRec156[l369] = 0.0f;
		}
		for (int l370 = 0; l370 < 3; l370 = l370 + 1) {
			fRec137[l370] = 0.0f;
		}
		for (int l371 = 0; l371 < 2048; l371 = l371 + 1) {
			fVec225[l371] = 0.0f;
		}
		for (int l372 = 0; l372 < 2048; l372 = l372 + 1) {
			fVec226[l372] = 0.0f;
		}
		for (int l373 = 0; l373 < 2; l373 = l373 + 1) {
			iRec189[l373] = 0;
		}
		for (int l374 = 0; l374 < 2; l374 = l374 + 1) {
			fRec190[l374] = 0.0f;
		}
		for (int l375 = 0; l375 < 2; l375 = l375 + 1) {
			fRec188[l375] = 0.0f;
		}
		for (int l376 = 0; l376 < 2; l376 = l376 + 1) {
			fRec187[l376] = 0.0f;
		}
		for (int l377 = 0; l377 < 2; l377 = l377 + 1) {
			fRec191[l377] = 0.0f;
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
			fVec229[l381] = 0.0f;
		}
		for (int l382 = 0; l382 < 2; l382 = l382 + 1) {
			fRec196[l382] = 0.0f;
		}
		for (int l383 = 0; l383 < 2; l383 = l383 + 1) {
			fRec195[l383] = 0.0f;
		}
		for (int l384 = 0; l384 < 2; l384 = l384 + 1) {
			fVec230[l384] = 0.0f;
		}
		for (int l385 = 0; l385 < 2; l385 = l385 + 1) {
			fRec194[l385] = 0.0f;
		}
		for (int l386 = 0; l386 < 2; l386 = l386 + 1) {
			fRec193[l386] = 0.0f;
		}
		for (int l387 = 0; l387 < 2; l387 = l387 + 1) {
			fVec231[l387] = 0.0f;
		}
		for (int l388 = 0; l388 < 3; l388 = l388 + 1) {
			fVec232[l388] = 0.0f;
		}
		for (int l389 = 0; l389 < 7; l389 = l389 + 1) {
			fVec233[l389] = 0.0f;
		}
		for (int l390 = 0; l390 < 15; l390 = l390 + 1) {
			fVec234[l390] = 0.0f;
		}
		for (int l391 = 0; l391 < 32; l391 = l391 + 1) {
			fVec235[l391] = 0.0f;
		}
		for (int l392 = 0; l392 < 64; l392 = l392 + 1) {
			fVec236[l392] = 0.0f;
		}
		for (int l393 = 0; l393 < 128; l393 = l393 + 1) {
			fVec237[l393] = 0.0f;
		}
		for (int l394 = 0; l394 < 256; l394 = l394 + 1) {
			fVec238[l394] = 0.0f;
		}
		for (int l395 = 0; l395 < 512; l395 = l395 + 1) {
			fVec239[l395] = 0.0f;
		}
		for (int l396 = 0; l396 < 1024; l396 = l396 + 1) {
			fVec240[l396] = 0.0f;
		}
		for (int l397 = 0; l397 < 2048; l397 = l397 + 1) {
			fVec241[l397] = 0.0f;
		}
		for (int l398 = 0; l398 < 4096; l398 = l398 + 1) {
			fVec242[l398] = 0.0f;
		}
		for (int l399 = 0; l399 < 8192; l399 = l399 + 1) {
			fVec243[l399] = 0.0f;
		}
		for (int l400 = 0; l400 < 16384; l400 = l400 + 1) {
			fVec244[l400] = 0.0f;
		}
		for (int l401 = 0; l401 < 32768; l401 = l401 + 1) {
			fVec245[l401] = 0.0f;
		}
		for (int l402 = 0; l402 < 65536; l402 = l402 + 1) {
			fVec246[l402] = 0.0f;
		}
		for (int l403 = 0; l403 < 131072; l403 = l403 + 1) {
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
		ui_interface->declare(&fCheckbox0, "1", "");
		ui_interface->declare(&fCheckbox0, "symbol", "bypass_timbre");
		ui_interface->addCheckButton("bypass timbre", &fCheckbox0);
		ui_interface->declare(&fCheckbox1, "4", "");
		ui_interface->declare(&fCheckbox1, "symbol", "bypass_leveler");
		ui_interface->addCheckButton("bypass leveler", &fCheckbox1);
		ui_interface->declare(&fCheckbox2, "4", "");
		ui_interface->declare(&fCheckbox2, "symbol", "bypass_style");
		ui_interface->addCheckButton("bypass style", &fCheckbox2);
		ui_interface->declare(&fCheckbox3, "symbol", "bypass_global");
		ui_interface->addCheckButton("bypass global", &fCheckbox3);
		ui_interface->declare(&fHbargraph0, "symbol", "latency_global");
		ui_interface->addHorizontalBargraph("latency", &fHbargraph0, FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->declare(0, "2", "");
		ui_interface->openHorizontalBox("Leveler, MBcomp, Limiter");
		ui_interface->declare(0, "1", "");
		ui_interface->openHorizontalBox("PreStage");
		ui_interface->declare(&fVslider3, "1", "");
		ui_interface->declare(&fVslider3, "symbol", "input_gain");
		ui_interface->declare(&fVslider3, "unit", "dB");
		ui_interface->addVerticalSlider("PreGain", &fVslider3, FAUSTFLOAT(0.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(2e+01f), FAUSTFLOAT(0.1f));
		ui_interface->declare(&fVbargraph0, "symbol", "input_peak_channel_0");
		ui_interface->addVerticalBargraph("In 0", &fVbargraph0, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph2, "symbol", "input_peak_channel_1");
		ui_interface->addVerticalBargraph("In 1", &fVbargraph2, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph3, "symbol", "lufs_in_meter");
		ui_interface->declare(&fVbargraph3, "unit", "dB");
		ui_interface->addVerticalBargraph("lufs IN", &fVbargraph3, FAUSTFLOAT(-1.2e+02f), FAUSTFLOAT(0.0f));
		ui_interface->closeBox();
		ui_interface->declare(0, "2", "");
		ui_interface->openHorizontalBox("Leveler1");
		ui_interface->declare(&fVbargraph1, "1", "");
		ui_interface->declare(&fVbargraph1, "symbol", "leveler_gain1");
		ui_interface->declare(&fVbargraph1, "unit", "dB");
		ui_interface->addVerticalBargraph("gain 1", &fVbargraph1, FAUSTFLOAT(-5e+01f), FAUSTFLOAT(5e+01f));
		ui_interface->declare(&fVslider1, "3", "");
		ui_interface->declare(&fVslider1, "symbol", "leveler_target");
		ui_interface->declare(&fVslider1, "unit", "dB");
		ui_interface->addVerticalSlider("target", &fVslider1, FAUSTFLOAT(-18.0f), FAUSTFLOAT(-3e+01f), FAUSTFLOAT(-6.0f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->declare(0, "3", "");
		ui_interface->openHorizontalBox("Multiband Conpressor");
		ui_interface->openHorizontalBox("Parameters");
		ui_interface->declare(&fVslider0, "2", "");
		ui_interface->declare(&fVslider0, "symbol", "style");
		ui_interface->addVerticalSlider("mb morph", &fVslider0, FAUSTFLOAT(0.0f), FAUSTFLOAT(-5.0f), FAUSTFLOAT(5.0f), FAUSTFLOAT(0.1f));
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("bands");
		ui_interface->declare(&fVbargraph8, "8", "");
		ui_interface->declare(&fVbargraph8, "symbol", "multiband_compressor_gain_band_1");
		ui_interface->declare(&fVbargraph8, "unit", "dB");
		ui_interface->addVerticalBargraph("gr 1", &fVbargraph8, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph7, "8", "");
		ui_interface->declare(&fVbargraph7, "symbol", "multiband_compressor_gain_band_2");
		ui_interface->declare(&fVbargraph7, "unit", "dB");
		ui_interface->addVerticalBargraph("gr 2", &fVbargraph7, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph6, "8", "");
		ui_interface->declare(&fVbargraph6, "symbol", "multiband_compressor_gain_band_3");
		ui_interface->declare(&fVbargraph6, "unit", "dB");
		ui_interface->addVerticalBargraph("gr 3", &fVbargraph6, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph5, "8", "");
		ui_interface->declare(&fVbargraph5, "symbol", "multiband_compressor_gain_band_4");
		ui_interface->declare(&fVbargraph5, "unit", "dB");
		ui_interface->addVerticalBargraph("gr 4", &fVbargraph5, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph4, "8", "");
		ui_interface->declare(&fVbargraph4, "symbol", "multiband_compressor_gain_band_5");
		ui_interface->declare(&fVbargraph4, "unit", "dB");
		ui_interface->addVerticalBargraph("gr 5", &fVbargraph4, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
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
		ui_interface->declare(&fVbargraph9, "1", "");
		ui_interface->declare(&fVbargraph9, "symbol", "leveler_gain2");
		ui_interface->declare(&fVbargraph9, "unit", "dB");
		ui_interface->addVerticalBargraph("gain 2", &fVbargraph9, FAUSTFLOAT(-5e+01f), FAUSTFLOAT(5e+01f));
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
		float fSlow0 = float(fVslider0);
		float fSlow1 = fSlow0 + 5.0f;
		float fSlow2 = 1.6f * fSlow1;
		float fSlow3 = 0.3f * fSlow1 + 9.0f;
		float fSlow4 = 0.5f * fSlow3;
		float fSlow5 = float(fVslider1);
		float fSlow6 = fSlow5 + fSlow4 - fSlow2;
		float fSlow7 = fConst13 * float(fVslider2);
		float fSlow8 = fConst13 * std::pow(1e+01f, 0.05f * float(fVslider3));
		float fSlow9 = fConst13 * float(fCheckbox0);
		float fSlow10 = float(fCheckbox1);
		float fSlow11 = fSlow5 + 14.0f;
		float fSlow12 = fSlow5 + 14.0f;
		float fSlow13 = 1.0f - fSlow10;
		float fSlow14 = fSlow2 + fSlow4;
		float fSlow15 = fSlow5 - fSlow14;
		float fSlow16 = 0.5f / std::max<float>(1.1920929e-07f, fSlow3);
		float fSlow17 = 0.05f * fSlow1;
		float fSlow18 = fSlow17 + 0.4f;
		float fSlow19 = 0.0003f * fSlow1;
		float fSlow20 = 0.005f - fSlow19;
		int iSlow21 = std::fabs(fSlow20) < 1.1920929e-07f;
		float fSlow22 = ((iSlow21) ? 0.0f : std::exp(0.0f - fConst112 / ((iSlow21) ? 1.0f : fSlow20)));
		float fSlow23 = 0.04f - 0.003f * fSlow1;
		int iSlow24 = std::fabs(fSlow23) < 1.1920929e-07f;
		float fSlow25 = ((iSlow24) ? 0.0f : std::exp(0.0f - fConst112 / ((iSlow24) ? 1.0f : fSlow23)));
		float fSlow26 = 0.2f * fSlow1;
		float fSlow27 = -3.0f - 2.7f * fSlow1;
		float fSlow28 = 0.6f * fSlow1;
		float fSlow29 = 12.0f - fSlow28;
		float fSlow30 = 0.5f * fSlow29;
		float fSlow31 = fSlow5 + fSlow30;
		float fSlow32 = fSlow31 + -4e+01f;
		float fSlow33 = fSlow5 + (-4e+01f - fSlow30);
		float fSlow34 = 1.0f / std::min<float>(1.1920929e-07f, 0.0f - 2.0f * fSlow29);
		float fSlow35 = 3.0f * fSlow1 + 1e+01f;
		float fSlow36 = std::fabs(fSlow35);
		int iSlow37 = fSlow35 > 0.0f;
		float fSlow38 = float(2 * iSlow37 + -1);
		float fSlow39 = 0.3f - 0.025f * fSlow1;
		float fSlow40 = ((iSlow37) ? fSlow39 : 0.001f);
		int iSlow41 = std::fabs(fSlow40) < 1.1920929e-07f;
		float fSlow42 = ((iSlow41) ? 0.0f : std::exp(0.0f - fConst112 / ((iSlow41) ? 1.0f : fSlow40)));
		float fSlow43 = ((iSlow37) ? 0.001f : fSlow39);
		int iSlow44 = std::fabs(fSlow43) < 1.1920929e-07f;
		float fSlow45 = ((iSlow44) ? 0.0f : std::exp(0.0f - fConst112 / ((iSlow44) ? 1.0f : fSlow43)));
		float fSlow46 = 0.4f * fSlow1 + 8.0f;
		float fSlow47 = 0.5f * fSlow46;
		float fSlow48 = fSlow5 + fSlow47 + (2.0f - fSlow2);
		float fSlow49 = fSlow2 + fSlow47;
		float fSlow50 = fSlow5 + (2.0f - fSlow49);
		float fSlow51 = 0.5f / std::max<float>(1.1920929e-07f, fSlow46);
		float fSlow52 = fSlow17 + 0.3f;
		float fSlow53 = 0.0004f * fSlow1;
		float fSlow54 = 0.008f - fSlow53;
		int iSlow55 = std::fabs(fSlow54) < 1.1920929e-07f;
		float fSlow56 = ((iSlow55) ? 0.0f : std::exp(0.0f - fConst112 / ((iSlow55) ? 1.0f : fSlow54)));
		float fSlow57 = 0.05f - 0.004f * fSlow1;
		int iSlow58 = std::fabs(fSlow57) < 1.1920929e-07f;
		float fSlow59 = ((iSlow58) ? 0.0f : std::exp(0.0f - fConst112 / ((iSlow58) ? 1.0f : fSlow57)));
		float fSlow60 = 2.5f * fSlow1 + 1e+01f;
		float fSlow61 = std::fabs(fSlow60);
		int iSlow62 = fSlow60 > 0.0f;
		float fSlow63 = float(2 * iSlow62 + -1);
		float fSlow64 = 0.4f - 0.03f * fSlow1;
		float fSlow65 = ((iSlow62) ? fSlow64 : 0.002f);
		int iSlow66 = std::fabs(fSlow65) < 1.1920929e-07f;
		float fSlow67 = ((iSlow66) ? 0.0f : std::exp(0.0f - fConst112 / ((iSlow66) ? 1.0f : fSlow65)));
		float fSlow68 = ((iSlow62) ? 0.002f : fSlow64);
		int iSlow69 = std::fabs(fSlow68) < 1.1920929e-07f;
		float fSlow70 = ((iSlow69) ? 0.0f : std::exp(0.0f - fConst112 / ((iSlow69) ? 1.0f : fSlow68)));
		float fSlow71 = 1.4f * fSlow1;
		float fSlow72 = 0.5f * fSlow1 + 7.0f;
		float fSlow73 = 0.5f * fSlow72;
		float fSlow74 = fSlow5 + fSlow73 + (4.0f - fSlow71);
		float fSlow75 = fSlow71 + fSlow73;
		float fSlow76 = fSlow5 + (4.0f - fSlow75);
		float fSlow77 = 0.5f / std::max<float>(1.1920929e-07f, fSlow72);
		float fSlow78 = 0.05f * fSlow1 + 0.2f;
		float fSlow79 = 0.01f - fSlow53;
		int iSlow80 = std::fabs(fSlow79) < 1.1920929e-07f;
		float fSlow81 = ((iSlow80) ? 0.0f : std::exp(0.0f - fConst112 / ((iSlow80) ? 1.0f : fSlow79)));
		float fSlow82 = 0.06f - 0.004f * fSlow1;
		int iSlow83 = std::fabs(fSlow82) < 1.1920929e-07f;
		float fSlow84 = ((iSlow83) ? 0.0f : std::exp(0.0f - fConst112 / ((iSlow83) ? 1.0f : fSlow82)));
		float fSlow85 = 2.0f * fSlow1 + 1e+01f;
		float fSlow86 = std::fabs(fSlow85);
		int iSlow87 = fSlow85 > 0.0f;
		float fSlow88 = float(2 * iSlow87 + -1);
		float fSlow89 = fSlow19 + 0.002f;
		float fSlow90 = 0.04f * fSlow1;
		float fSlow91 = 0.6f - fSlow90;
		float fSlow92 = ((iSlow87) ? fSlow91 : fSlow89);
		int iSlow93 = std::fabs(fSlow92) < 1.1920929e-07f;
		float fSlow94 = ((iSlow93) ? 0.0f : std::exp(0.0f - fConst112 / ((iSlow93) ? 1.0f : fSlow92)));
		float fSlow95 = ((iSlow87) ? fSlow89 : fSlow91);
		int iSlow96 = std::fabs(fSlow95) < 1.1920929e-07f;
		float fSlow97 = ((iSlow96) ? 0.0f : std::exp(0.0f - fConst112 / ((iSlow96) ? 1.0f : fSlow95)));
		float fSlow98 = fSlow28 + 6.0f;
		float fSlow99 = 0.5f * fSlow98;
		float fSlow100 = fSlow5 + fSlow99;
		float fSlow101 = fSlow100 + (6.0f - fSlow71);
		float fSlow102 = fSlow99 + fSlow71;
		float fSlow103 = fSlow5 + (6.0f - fSlow102);
		float fSlow104 = 0.5f / std::max<float>(1.1920929e-07f, fSlow98);
		float fSlow105 = fSlow90 + 0.2f;
		float fSlow106 = 0.012f - fSlow53;
		int iSlow107 = std::fabs(fSlow106) < 1.1920929e-07f;
		float fSlow108 = ((iSlow107) ? 0.0f : std::exp(0.0f - fConst112 / ((iSlow107) ? 1.0f : fSlow106)));
		float fSlow109 = 0.07f - 0.004f * fSlow1;
		int iSlow110 = std::fabs(fSlow109) < 1.1920929e-07f;
		float fSlow111 = ((iSlow110) ? 0.0f : std::exp(0.0f - fConst112 / ((iSlow110) ? 1.0f : fSlow109)));
		float fSlow112 = fSlow0 + 15.0f;
		float fSlow113 = std::fabs(fSlow112);
		int iSlow114 = fSlow112 > 0.0f;
		float fSlow115 = float(2 * iSlow114 + -1);
		float fSlow116 = 0.0005f * fSlow1 + 0.005f;
		float fSlow117 = 0.8f - 0.04f * fSlow1;
		float fSlow118 = ((iSlow114) ? fSlow117 : fSlow116);
		int iSlow119 = std::fabs(fSlow118) < 1.1920929e-07f;
		float fSlow120 = ((iSlow119) ? 0.0f : std::exp(0.0f - fConst112 / ((iSlow119) ? 1.0f : fSlow118)));
		float fSlow121 = ((iSlow114) ? fSlow116 : fSlow117);
		int iSlow122 = std::fabs(fSlow121) < 1.1920929e-07f;
		float fSlow123 = ((iSlow122) ? 0.0f : std::exp(0.0f - fConst112 / ((iSlow122) ? 1.0f : fSlow121)));
		float fSlow124 = 0.9f * fSlow1;
		float fSlow125 = fSlow100 - fSlow124;
		float fSlow126 = fSlow124 + fSlow99;
		float fSlow127 = fSlow5 - fSlow126;
		float fSlow128 = 0.03f * fSlow1 + 0.2f;
		float fSlow129 = 0.015f - 0.0005f * fSlow1;
		int iSlow130 = std::fabs(fSlow129) < 1.1920929e-07f;
		float fSlow131 = ((iSlow130) ? 0.0f : std::exp(0.0f - fConst112 / ((iSlow130) ? 1.0f : fSlow129)));
		float fSlow132 = 0.08f - 0.005f * fSlow1;
		int iSlow133 = std::fabs(fSlow132) < 1.1920929e-07f;
		float fSlow134 = ((iSlow133) ? 0.0f : std::exp(0.0f - fConst112 / ((iSlow133) ? 1.0f : fSlow132)));
		float fSlow135 = 1.0f - fSlow17;
		float fSlow136 = ((iSlow114) ? fSlow135 : fSlow116);
		int iSlow137 = std::fabs(fSlow136) < 1.1920929e-07f;
		float fSlow138 = ((iSlow137) ? 0.0f : std::exp(0.0f - fConst112 / ((iSlow137) ? 1.0f : fSlow136)));
		float fSlow139 = ((iSlow114) ? fSlow116 : fSlow135);
		int iSlow140 = std::fabs(fSlow139) < 1.1920929e-07f;
		float fSlow141 = ((iSlow140) ? 0.0f : std::exp(0.0f - fConst112 / ((iSlow140) ? 1.0f : fSlow139)));
		float fSlow142 = fConst13 * float(fCheckbox2);
		fHbargraph0 = FAUSTFLOAT(0.01f);
		float fSlow143 = fConst13 * float(fCheckbox3);
		for (int i0 = 0; i0 < count; i0 = i0 + 1) {
			fRec5[0] = fSlow7 + fConst14 * fRec5[1];
			float fTemp0 = 0.05f * fRec5[0];
			float fTemp1 = std::pow(1e+01f, fTemp0);
			float fTemp2 = std::pow(1e+01f, 0.0f - fTemp0);
			fRec10[0] = fSlow8 + fConst14 * fRec10[1];
			float fTemp3 = float(input0[i0]) * fRec10[0];
			fRec9[0] = std::max<float>(fRec9[1] - fConst1, std::min<float>(1e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(0.00031622776f, std::fabs(fTemp3))))));
			fVbargraph0 = FAUSTFLOAT(fRec9[0]);
			float fTemp4 = fTemp3;
			fVec0[0] = fTemp4;
			fRec8[0] = fConst17 * (fTemp4 - fVec0[1] + fConst16 * fRec8[1]);
			fRec7[0] = 0.0f - fConst22 * (fConst20 * fRec7[1] - (fRec8[0] + fRec8[1]));
			fRec11[0] = fConst23 * fRec8[1] - fConst22 * (fConst20 * fRec11[1] - fConst19 * fRec8[0]);
			float fTemp5 = fRec11[0] + fRec7[0] * fTemp2;
			fVec1[0] = fTemp5;
			fRec6[0] = fConst23 * fVec1[1] - fConst22 * (fConst20 * fRec6[1] - fConst19 * fTemp5);
			fRec12[0] = 0.0f - fConst22 * (fConst20 * fRec12[1] - (fTemp5 + fVec1[1]));
			fRec13[0] = fSlow9 + fConst14 * fRec13[1];
			float fTemp6 = 1.0f - fRec13[0];
			float fTemp7 = fRec8[0] * fRec13[0] + fTemp6 * (fRec12[0] + fRec6[0] * fTemp1);
			float fTemp8 = std::fabs(std::fabs(fRec14[1]) + std::fabs(fRec15[1]));
			fVec2[0] = fTemp8;
			float fTemp9 = std::max<float>(fTemp8, fVec2[1]);
			fVec3[0] = fTemp9;
			float fTemp10 = std::max<float>(fTemp9, fVec3[2]);
			fVec4[0] = fTemp10;
			float fTemp11 = std::max<float>(fTemp10, fVec4[4]);
			fVec5[0] = fTemp11;
			fVec6[IOTA0 & 31] = std::max<float>(fTemp11, fVec5[8]);
			float fTemp12 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst26) ? fTemp8 : -3.4028235e+38f), ((iConst27) ? fVec3[iConst26] : -3.4028235e+38f)), ((iConst28) ? fVec4[iConst29] : -3.4028235e+38f)), ((iConst30) ? fVec5[iConst31] : -3.4028235e+38f)), ((iConst32) ? fVec6[(IOTA0 - iConst33) & 31] : -3.4028235e+38f))));
			int iTemp13 = (fTemp12 > fSlow12) + (fTemp12 > fSlow11);
			float fTemp14 = std::max<float>(-3.4028235e+38f, ((iTemp13 == 0) ? fTemp12 + -14.0f - fSlow5 : ((iTemp13 == 1) ? 0.0f - 4194304.0f * mydsp_faustpower2_f(fTemp12 + -14.0f - fSlow5) : 0.0f)));
			float fTemp15 = ((fTemp14 > fRec24[1]) ? 0.0f : fConst34);
			fRec24[0] = fTemp14 * (1.0f - fTemp15) + fRec24[1] * fTemp15;
			float fTemp16 = std::min<float>(1.0f, std::max<float>(0.0f, std::pow(1e+01f, 0.05f * fRec24[0])));
			float fTemp17 = std::tan(fConst35 * std::min<float>(fConst24, fTemp16 * (fConst25 * std::fabs(fRec17[1]) + 0.0176f)));
			float fTemp18 = fTemp17 + 2.0f;
			float fTemp19 = fTemp17 * fTemp18 + 1.0f;
			fVec7[0] = 0.0f - fConst46 * (fConst48 * fRec27[1] - fConst47 * fRec15[2]);
			fRec28[0] = fVec7[1] + fConst46 * (fConst44 * fRec15[1] - 2.0f * (fConst42 * fRec28[1] - fConst41 * fRec15[2]));
			fRec27[0] = fRec28[0];
			fVec8[0] = 0.50032705f * fRec27[1] - fConst53 * fRec25[1];
			fRec26[0] = fConst56 * fRec27[1] + fConst55 * (fVec8[1] - fConst51 * fRec26[1] + 0.50032705f * fRec27[0]);
			fRec25[0] = fRec26[0];
			float fTemp20 = mydsp_faustpower2_f(fRec25[0]);
			fVec9[0] = fTemp20;
			float fTemp21 = fTemp20 + fVec9[1];
			fVec10[0] = fTemp21;
			float fTemp22 = fTemp21 + fVec10[2];
			fVec11[0] = fTemp22;
			float fTemp23 = fTemp22 + fVec11[4];
			fVec12[0] = fTemp23;
			float fTemp24 = fTemp23 + fVec12[8];
			fVec13[IOTA0 & 31] = fTemp24;
			float fTemp25 = fTemp24 + fVec13[(IOTA0 - 16) & 31];
			fVec14[IOTA0 & 63] = fTemp25;
			float fTemp26 = fTemp25 + fVec14[(IOTA0 - 32) & 63];
			fVec15[IOTA0 & 127] = fTemp26;
			float fTemp27 = fTemp26 + fVec15[(IOTA0 - 64) & 127];
			fVec16[IOTA0 & 255] = fTemp27;
			float fTemp28 = fTemp27 + fVec16[(IOTA0 - 128) & 255];
			fVec17[IOTA0 & 511] = fTemp28;
			float fTemp29 = fTemp28 + fVec17[(IOTA0 - 256) & 511];
			fVec18[IOTA0 & 1023] = fTemp29;
			fVec19[IOTA0 & 2047] = fTemp29 + fVec18[(IOTA0 - 512) & 1023];
			fVec20[0] = 0.0f - fConst46 * (fConst48 * fRec31[1] - fConst47 * fRec14[2]);
			fRec32[0] = fVec20[1] + fConst46 * (fConst44 * fRec14[1] - 2.0f * (fConst42 * fRec32[1] - fConst41 * fRec14[2]));
			fRec31[0] = fRec32[0];
			fVec21[0] = 0.50032705f * fRec31[1] - fConst53 * fRec29[1];
			fRec30[0] = fConst56 * fRec31[1] + fConst55 * (fVec21[1] - fConst51 * fRec30[1] + 0.50032705f * fRec31[0]);
			fRec29[0] = fRec30[0];
			float fTemp30 = mydsp_faustpower2_f(fRec29[0]);
			fVec22[0] = fTemp30;
			float fTemp31 = fTemp30 + fVec22[1];
			fVec23[0] = fTemp31;
			float fTemp32 = fTemp31 + fVec23[2];
			fVec24[0] = fTemp32;
			float fTemp33 = fTemp32 + fVec24[4];
			fVec25[0] = fTemp33;
			float fTemp34 = fTemp33 + fVec25[8];
			fVec26[IOTA0 & 31] = fTemp34;
			float fTemp35 = fTemp34 + fVec26[(IOTA0 - 16) & 31];
			fVec27[IOTA0 & 63] = fTemp35;
			float fTemp36 = fTemp35 + fVec27[(IOTA0 - 32) & 63];
			fVec28[IOTA0 & 127] = fTemp36;
			float fTemp37 = fTemp36 + fVec28[(IOTA0 - 64) & 127];
			fVec29[IOTA0 & 255] = fTemp37;
			float fTemp38 = fTemp37 + fVec29[(IOTA0 - 128) & 255];
			fVec30[IOTA0 & 511] = fTemp38;
			float fTemp39 = fTemp38 + fVec30[(IOTA0 - 256) & 511];
			fVec31[IOTA0 & 1023] = fTemp39;
			fVec32[IOTA0 & 2047] = fTemp39 + fVec31[(IOTA0 - 512) & 1023];
			float fTemp40 = fSlow5 + fRec16[1] + (0.691f - (4.3429446f * std::log(std::max<float>(1e-12f, fConst76 * (((iConst74) ? 0.86000985f * fVec32[(IOTA0 - iConst75) & 2047] : 0.0f) + ((iConst72) ? 0.86000985f * fVec31[(IOTA0 - iConst73) & 1023] : 0.0f) + ((iConst70) ? 0.86000985f * fVec30[(IOTA0 - iConst71) & 511] : 0.0f) + ((iConst68) ? 0.86000985f * fVec29[(IOTA0 - iConst69) & 255] : 0.0f) + ((iConst66) ? 0.86000985f * fVec28[(IOTA0 - iConst67) & 127] : 0.0f) + ((iConst64) ? 0.86000985f * fVec27[(IOTA0 - iConst65) & 63] : 0.0f) + ((iConst62) ? 0.86000985f * fVec26[(IOTA0 - iConst63) & 31] : 0.0f) + ((iConst60) ? 0.86000985f * fVec25[iConst61] : 0.0f) + ((iConst58) ? 0.86000985f * fVec24[iConst59] : 0.0f) + ((iConst57) ? 0.86000985f * fTemp30 : 0.0f) + ((iConst38) ? 0.86000985f * fVec23[iConst57] : 0.0f) + ((iConst74) ? 0.86000985f * fVec19[(IOTA0 - iConst75) & 2047] : 0.0f) + ((iConst72) ? 0.86000985f * fVec18[(IOTA0 - iConst73) & 1023] : 0.0f) + ((iConst70) ? 0.86000985f * fVec17[(IOTA0 - iConst71) & 511] : 0.0f) + ((iConst68) ? 0.86000985f * fVec16[(IOTA0 - iConst69) & 255] : 0.0f) + ((iConst66) ? 0.86000985f * fVec15[(IOTA0 - iConst67) & 127] : 0.0f) + ((iConst64) ? 0.86000985f * fVec14[(IOTA0 - iConst65) & 63] : 0.0f) + ((iConst62) ? 0.86000985f * fVec13[(IOTA0 - iConst63) & 31] : 0.0f) + ((iConst60) ? 0.86000985f * fVec12[iConst61] : 0.0f) + ((iConst58) ? 0.86000985f * fVec11[iConst59] : 0.0f) + ((iConst57) ? 0.86000985f * fTemp20 : 0.0f) + ((iConst38) ? 0.86000985f * fVec10[iConst57] : 0.0f)))) + fRec19[1] * fTemp18 + fRec20[1]));
			float fTemp41 = fTemp17 * fTemp40 / fTemp19;
			fRec19[0] = fRec19[1] + 2.0f * fTemp41;
			float fTemp42 = fRec19[1] + fTemp41;
			float fTemp43 = fTemp17 * fTemp42;
			fRec20[0] = fRec20[1] + 2.0f * fTemp43;
			float fRec21 = fTemp42;
			float fRec22 = fTemp40 / fTemp19;
			float fRec23 = fRec20[1] + fTemp43;
			fRec17[0] = fRec21;
			float fRec18 = fRec23;
			fVbargraph1 = FAUSTFLOAT(std::max<float>(-2e+01f, std::min<float>(2e+01f, fRec18)));
			fRec16[0] = fVbargraph1;
			float fTemp44 = std::pow(1e+01f, 0.05f * fRec16[0]);
			fRec14[0] = fTemp44 * fTemp7;
			float fTemp45 = float(input1[i0]) * fRec10[0];
			fRec40[0] = std::max<float>(fRec40[1] - fConst1, std::min<float>(1e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(0.00031622776f, std::fabs(fTemp45))))));
			fVbargraph2 = FAUSTFLOAT(fRec40[0]);
			float fTemp46 = fTemp45;
			fVec33[0] = fTemp46;
			fVec34[0] = 0.0f - fConst46 * (fConst48 * fRec38[1] - fConst47 * fVec33[1]);
			fRec39[0] = fVec34[1] + fConst46 * (fConst44 * fTemp46 - 2.0f * (fConst42 * fRec39[1] - fConst41 * fVec33[1]));
			fRec38[0] = fRec39[0];
			fVec35[0] = 0.50032705f * fRec38[1] - fConst53 * fRec36[1];
			fRec37[0] = fConst56 * fRec38[1] + fConst55 * (fVec35[1] - fConst51 * fRec37[1] + 0.50032705f * fRec38[0]);
			fRec36[0] = fRec37[0];
			float fTemp47 = mydsp_faustpower2_f(fRec36[0]);
			fVec36[0] = fTemp47;
			float fTemp48 = fTemp47 + fVec36[1];
			fVec37[0] = fTemp48;
			float fTemp49 = fTemp48 + fVec37[2];
			fVec38[0] = fTemp49;
			float fTemp50 = fTemp49 + fVec38[4];
			fVec39[0] = fTemp50;
			float fTemp51 = fTemp50 + fVec39[8];
			fVec40[IOTA0 & 31] = fTemp51;
			float fTemp52 = fTemp51 + fVec40[(IOTA0 - 16) & 31];
			fVec41[IOTA0 & 63] = fTemp52;
			float fTemp53 = fTemp52 + fVec41[(IOTA0 - 32) & 63];
			fVec42[IOTA0 & 127] = fTemp53;
			float fTemp54 = fTemp53 + fVec42[(IOTA0 - 64) & 127];
			fVec43[IOTA0 & 255] = fTemp54;
			float fTemp55 = fTemp54 + fVec43[(IOTA0 - 128) & 255];
			fVec44[IOTA0 & 511] = fTemp55;
			float fTemp56 = fTemp55 + fVec44[(IOTA0 - 256) & 511];
			fVec45[IOTA0 & 1023] = fTemp56;
			float fTemp57 = fTemp56 + fVec45[(IOTA0 - 512) & 1023];
			fVec46[IOTA0 & 2047] = fTemp57;
			float fTemp58 = fTemp57 + fVec46[(IOTA0 - 1024) & 2047];
			fVec47[IOTA0 & 4095] = fTemp58;
			float fTemp59 = fTemp58 + fVec47[(IOTA0 - 2048) & 4095];
			fVec48[IOTA0 & 8191] = fTemp59;
			float fTemp60 = fTemp59 + fVec48[(IOTA0 - 4096) & 8191];
			fVec49[IOTA0 & 16383] = fTemp60;
			float fTemp61 = fTemp60 + fVec49[(IOTA0 - 8192) & 16383];
			fVec50[IOTA0 & 32767] = fTemp61;
			float fTemp62 = fTemp61 + fVec50[(IOTA0 - 16384) & 32767];
			fVec51[IOTA0 & 65535] = fTemp62;
			fVec52[IOTA0 & 131071] = fTemp62 + fVec51[(IOTA0 - 32768) & 65535];
			fVec53[0] = 0.0f - fConst46 * (fConst48 * fRec43[1] - fConst47 * fVec0[1]);
			fRec44[0] = fVec53[1] + fConst46 * (fConst44 * fTemp4 - 2.0f * (fConst42 * fRec44[1] - fConst41 * fVec0[1]));
			fRec43[0] = fRec44[0];
			fVec54[0] = 0.50032705f * fRec43[1] - fConst53 * fRec41[1];
			fRec42[0] = fConst56 * fRec43[1] + fConst55 * (fVec54[1] - fConst51 * fRec42[1] + 0.50032705f * fRec43[0]);
			fRec41[0] = fRec42[0];
			float fTemp63 = mydsp_faustpower2_f(fRec41[0]);
			fVec55[0] = fTemp63;
			float fTemp64 = fTemp63 + fVec55[1];
			fVec56[0] = fTemp64;
			float fTemp65 = fTemp64 + fVec56[2];
			fVec57[0] = fTemp65;
			float fTemp66 = fTemp65 + fVec57[4];
			fVec58[0] = fTemp66;
			float fTemp67 = fTemp66 + fVec58[8];
			fVec59[IOTA0 & 31] = fTemp67;
			float fTemp68 = fTemp67 + fVec59[(IOTA0 - 16) & 31];
			fVec60[IOTA0 & 63] = fTemp68;
			float fTemp69 = fTemp68 + fVec60[(IOTA0 - 32) & 63];
			fVec61[IOTA0 & 127] = fTemp69;
			float fTemp70 = fTemp69 + fVec61[(IOTA0 - 64) & 127];
			fVec62[IOTA0 & 255] = fTemp70;
			float fTemp71 = fTemp70 + fVec62[(IOTA0 - 128) & 255];
			fVec63[IOTA0 & 511] = fTemp71;
			float fTemp72 = fTemp71 + fVec63[(IOTA0 - 256) & 511];
			fVec64[IOTA0 & 1023] = fTemp72;
			float fTemp73 = fTemp72 + fVec64[(IOTA0 - 512) & 1023];
			fVec65[IOTA0 & 2047] = fTemp73;
			float fTemp74 = fTemp73 + fVec65[(IOTA0 - 1024) & 2047];
			fVec66[IOTA0 & 4095] = fTemp74;
			float fTemp75 = fTemp74 + fVec66[(IOTA0 - 2048) & 4095];
			fVec67[IOTA0 & 8191] = fTemp75;
			float fTemp76 = fTemp75 + fVec67[(IOTA0 - 4096) & 8191];
			fVec68[IOTA0 & 16383] = fTemp76;
			float fTemp77 = fTemp76 + fVec68[(IOTA0 - 8192) & 16383];
			fVec69[IOTA0 & 32767] = fTemp77;
			float fTemp78 = fTemp77 + fVec69[(IOTA0 - 16384) & 32767];
			fVec70[IOTA0 & 65535] = fTemp78;
			fVec71[IOTA0 & 131071] = fTemp78 + fVec70[(IOTA0 - 32768) & 65535];
			fVbargraph3 = FAUSTFLOAT(4.3429446f * std::log(std::max<float>(1e-12f, fConst110 * (((iConst108) ? 0.86000985f * fVec71[(IOTA0 - iConst109) & 131071] : 0.0f) + ((iConst106) ? 0.86000985f * fVec70[(IOTA0 - iConst107) & 65535] : 0.0f) + ((iConst104) ? 0.86000985f * fVec69[(IOTA0 - iConst105) & 32767] : 0.0f) + ((iConst102) ? 0.86000985f * fVec68[(IOTA0 - iConst103) & 16383] : 0.0f) + ((iConst100) ? 0.86000985f * fVec67[(IOTA0 - iConst101) & 8191] : 0.0f) + ((iConst98) ? 0.86000985f * fVec66[(IOTA0 - iConst99) & 4095] : 0.0f) + ((iConst96) ? 0.86000985f * fVec65[(IOTA0 - iConst97) & 2047] : 0.0f) + ((iConst94) ? 0.86000985f * fVec64[(IOTA0 - iConst95) & 1023] : 0.0f) + ((iConst92) ? 0.86000985f * fVec63[(IOTA0 - iConst93) & 511] : 0.0f) + ((iConst90) ? 0.86000985f * fVec62[(IOTA0 - iConst91) & 255] : 0.0f) + ((iConst88) ? 0.86000985f * fVec61[(IOTA0 - iConst89) & 127] : 0.0f) + ((iConst86) ? 0.86000985f * fVec60[(IOTA0 - iConst87) & 63] : 0.0f) + ((iConst84) ? 0.86000985f * fVec59[(IOTA0 - iConst85) & 31] : 0.0f) + ((iConst82) ? 0.86000985f * fVec58[iConst83] : 0.0f) + ((iConst80) ? 0.86000985f * fVec57[iConst81] : 0.0f) + ((iConst79) ? 0.86000985f * fTemp63 : 0.0f) + ((iConst78) ? 0.86000985f * fVec56[iConst79] : 0.0f) + ((iConst108) ? 0.86000985f * fVec52[(IOTA0 - iConst109) & 131071] : 0.0f) + ((iConst106) ? 0.86000985f * fVec51[(IOTA0 - iConst107) & 65535] : 0.0f) + ((iConst104) ? 0.86000985f * fVec50[(IOTA0 - iConst105) & 32767] : 0.0f) + ((iConst102) ? 0.86000985f * fVec49[(IOTA0 - iConst103) & 16383] : 0.0f) + ((iConst100) ? 0.86000985f * fVec48[(IOTA0 - iConst101) & 8191] : 0.0f) + ((iConst98) ? 0.86000985f * fVec47[(IOTA0 - iConst99) & 4095] : 0.0f) + ((iConst96) ? 0.86000985f * fVec46[(IOTA0 - iConst97) & 2047] : 0.0f) + ((iConst94) ? 0.86000985f * fVec45[(IOTA0 - iConst95) & 1023] : 0.0f) + ((iConst92) ? 0.86000985f * fVec44[(IOTA0 - iConst93) & 511] : 0.0f) + ((iConst90) ? 0.86000985f * fVec43[(IOTA0 - iConst91) & 255] : 0.0f) + ((iConst88) ? 0.86000985f * fVec42[(IOTA0 - iConst89) & 127] : 0.0f) + ((iConst86) ? 0.86000985f * fVec41[(IOTA0 - iConst87) & 63] : 0.0f) + ((iConst84) ? 0.86000985f * fVec40[(IOTA0 - iConst85) & 31] : 0.0f) + ((iConst82) ? 0.86000985f * fVec39[iConst83] : 0.0f) + ((iConst80) ? 0.86000985f * fVec38[iConst81] : 0.0f) + ((iConst79) ? 0.86000985f * fTemp47 : 0.0f) + ((iConst78) ? 0.86000985f * fVec37[iConst79] : 0.0f)))) + -0.691f);
			float fTemp79 = fTemp46;
			fVec72[0] = fTemp79;
			fRec35[0] = fConst17 * (fTemp79 - fVec72[1] + fConst16 * fRec35[1]);
			fRec34[0] = 0.0f - fConst22 * (fConst20 * fRec34[1] - (fRec35[0] + fRec35[1]));
			fRec45[0] = fConst23 * fRec35[1] - fConst22 * (fConst20 * fRec45[1] - fConst19 * fRec35[0]);
			float fTemp80 = fRec45[0] + fRec34[0] * fTemp2;
			fVec73[0] = fTemp80;
			fRec33[0] = fConst23 * fVec73[1] - fConst22 * (fConst20 * fRec33[1] - fConst19 * fTemp80);
			fRec46[0] = 0.0f - fConst22 * (fConst20 * fRec46[1] - (fTemp80 + fVec73[1]));
			float fTemp81 = fRec13[0] * fRec35[0] + fTemp6 * (fRec46[0] + fRec33[0] * fTemp1);
			fRec15[0] = fTemp44 * fTemp81;
			float fTemp82 = fSlow13 * fRec14[0] + fSlow10 * fTemp7;
			fRec4[0] = fTemp82 - fConst12 * (fConst11 * fRec4[2] + fConst5 * fRec4[1]);
			fRec3[0] = fConst12 * (fConst4 * fRec4[0] + fConst111 * fRec4[1] + fConst4 * fRec4[2]) - fConst10 * (fConst9 * fRec3[2] + fConst5 * fRec3[1]);
			fRec2[0] = fConst10 * (fConst4 * fRec3[0] + fConst111 * fRec3[1] + fConst4 * fRec3[2]) - fConst8 * (fConst7 * fRec2[2] + fConst5 * fRec2[1]);
			float fTemp83 = std::fabs(fConst8 * (fConst4 * fRec2[0] + fConst111 * fRec2[1] + fConst4 * fRec2[2]));
			fVec74[0] = fTemp83;
			float fTemp84 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp83));
			int iTemp85 = (fTemp84 > fSlow15) + (fTemp84 > fSlow6);
			float fTemp86 = fTemp84 - fSlow5;
			float fTemp87 = 0.0f - fSlow18 * std::max<float>(0.0f, ((iTemp85 == 0) ? 0.0f : ((iTemp85 == 1) ? fSlow16 * mydsp_faustpower2_f(fSlow14 + fTemp86) : fSlow2 + fTemp86)));
			float fTemp88 = ((fTemp87 > fRec1[1]) ? fSlow25 : fSlow22);
			fRec1[0] = fTemp87 * (1.0f - fTemp88) + fRec1[1] * fTemp88;
			float fTemp89 = fSlow13 * fRec15[0] + fSlow10 * fTemp81;
			fRec50[0] = fTemp89 - fConst12 * (fConst11 * fRec50[2] + fConst5 * fRec50[1]);
			fRec49[0] = fConst12 * (fConst4 * fRec50[0] + fConst111 * fRec50[1] + fConst4 * fRec50[2]) - fConst10 * (fConst9 * fRec49[2] + fConst5 * fRec49[1]);
			fRec48[0] = fConst10 * (fConst4 * fRec49[0] + fConst111 * fRec49[1] + fConst4 * fRec49[2]) - fConst8 * (fConst7 * fRec48[2] + fConst5 * fRec48[1]);
			float fTemp90 = std::fabs(fConst8 * (fConst4 * fRec48[0] + fConst111 * fRec48[1] + fConst4 * fRec48[2]));
			fVec75[0] = fTemp90;
			float fTemp91 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp90));
			int iTemp92 = (fTemp91 > fSlow15) + (fTemp91 > fSlow6);
			float fTemp93 = fTemp91 - fSlow5;
			float fTemp94 = 0.0f - fSlow18 * std::max<float>(0.0f, ((iTemp92 == 0) ? 0.0f : ((iTemp92 == 1) ? fSlow16 * mydsp_faustpower2_f(fSlow14 + fTemp93) : fSlow2 + fTemp93)));
			float fTemp95 = ((fTemp94 > fRec47[1]) ? fSlow25 : fSlow22);
			fRec47[0] = fTemp94 * (1.0f - fTemp95) + fRec47[1] * fTemp95;
			float fTemp96 = std::max<float>(fTemp83, fVec74[1]);
			fVec76[0] = fTemp96;
			float fTemp97 = std::max<float>(fTemp96, fVec76[2]);
			fVec77[0] = fTemp97;
			float fTemp98 = std::max<float>(fTemp97, fVec77[4]);
			fVec78[0] = fTemp98;
			float fTemp99 = std::max<float>(fTemp98, fVec78[8]);
			fVec79[IOTA0 & 31] = fTemp99;
			float fTemp100 = std::max<float>(fTemp99, fVec79[(IOTA0 - 16) & 31]);
			fVec80[IOTA0 & 63] = fTemp100;
			float fTemp101 = std::max<float>(fTemp100, fVec80[(IOTA0 - 32) & 63]);
			fVec81[IOTA0 & 127] = fTemp101;
			float fTemp102 = std::max<float>(fTemp101, fVec81[(IOTA0 - 64) & 127]);
			fVec82[IOTA0 & 255] = fTemp102;
			float fTemp103 = std::max<float>(fTemp102, fVec82[(IOTA0 - 128) & 255]);
			fVec83[IOTA0 & 511] = fTemp103;
			float fTemp104 = std::max<float>(fTemp103, fVec83[(IOTA0 - 256) & 511]);
			fVec84[IOTA0 & 1023] = fTemp104;
			float fTemp105 = std::max<float>(fTemp104, fVec84[(IOTA0 - 512) & 1023]);
			fVec85[IOTA0 & 2047] = fTemp105;
			fVec86[IOTA0 & 4095] = std::max<float>(fTemp105, fVec85[(IOTA0 - 1024) & 2047]);
			float fTemp106 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst113) ? fTemp83 : -3.4028235e+38f), ((iConst114) ? fVec76[iConst113] : -3.4028235e+38f)), ((iConst115) ? fVec77[iConst116] : -3.4028235e+38f)), ((iConst117) ? fVec78[iConst118] : -3.4028235e+38f)), ((iConst119) ? fVec79[(IOTA0 - iConst120) & 31] : -3.4028235e+38f)), ((iConst121) ? fVec80[(IOTA0 - iConst122) & 63] : -3.4028235e+38f)), ((iConst123) ? fVec81[(IOTA0 - iConst124) & 127] : -3.4028235e+38f)), ((iConst125) ? fVec82[(IOTA0 - iConst126) & 255] : -3.4028235e+38f)), ((iConst127) ? fVec83[(IOTA0 - iConst128) & 511] : -3.4028235e+38f)), ((iConst129) ? fVec84[(IOTA0 - iConst130) & 1023] : -3.4028235e+38f)), ((iConst131) ? fVec85[(IOTA0 - iConst132) & 2047] : -3.4028235e+38f)), ((iConst133) ? fVec86[(IOTA0 - iConst134) & 4095] : -3.4028235e+38f))));
			int iTemp107 = (fTemp106 > fSlow33) + (fTemp106 > fSlow32);
			float fTemp108 = fTemp106 + 4e+01f;
			float fTemp109 = std::max<float>(fSlow27, fSlow36 * ((iTemp107 == 0) ? fTemp108 - fSlow5 : ((iTemp107 == 1) ? fSlow34 * mydsp_faustpower2_f(fTemp108 - fSlow31) : 0.0f)));
			float fTemp110 = (((fSlow38 * fTemp109) > fRec51[1]) ? fSlow45 : fSlow42);
			fRec51[0] = fSlow38 * fTemp109 * (1.0f - fTemp110) + fRec51[1] * fTemp110;
			float fTemp111 = std::max<float>(fTemp90, fVec75[1]);
			fVec87[0] = fTemp111;
			float fTemp112 = std::max<float>(fTemp111, fVec87[2]);
			fVec88[0] = fTemp112;
			float fTemp113 = std::max<float>(fTemp112, fVec88[4]);
			fVec89[0] = fTemp113;
			float fTemp114 = std::max<float>(fTemp113, fVec89[8]);
			fVec90[IOTA0 & 31] = fTemp114;
			float fTemp115 = std::max<float>(fTemp114, fVec90[(IOTA0 - 16) & 31]);
			fVec91[IOTA0 & 63] = fTemp115;
			float fTemp116 = std::max<float>(fTemp115, fVec91[(IOTA0 - 32) & 63]);
			fVec92[IOTA0 & 127] = fTemp116;
			float fTemp117 = std::max<float>(fTemp116, fVec92[(IOTA0 - 64) & 127]);
			fVec93[IOTA0 & 255] = fTemp117;
			float fTemp118 = std::max<float>(fTemp117, fVec93[(IOTA0 - 128) & 255]);
			fVec94[IOTA0 & 511] = fTemp118;
			float fTemp119 = std::max<float>(fTemp118, fVec94[(IOTA0 - 256) & 511]);
			fVec95[IOTA0 & 1023] = fTemp119;
			float fTemp120 = std::max<float>(fTemp119, fVec95[(IOTA0 - 512) & 1023]);
			fVec96[IOTA0 & 2047] = fTemp120;
			fVec97[IOTA0 & 4095] = std::max<float>(fTemp120, fVec96[(IOTA0 - 1024) & 2047]);
			float fTemp121 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst113) ? fTemp90 : -3.4028235e+38f), ((iConst114) ? fVec87[iConst113] : -3.4028235e+38f)), ((iConst115) ? fVec88[iConst116] : -3.4028235e+38f)), ((iConst117) ? fVec89[iConst118] : -3.4028235e+38f)), ((iConst119) ? fVec90[(IOTA0 - iConst120) & 31] : -3.4028235e+38f)), ((iConst121) ? fVec91[(IOTA0 - iConst122) & 63] : -3.4028235e+38f)), ((iConst123) ? fVec92[(IOTA0 - iConst124) & 127] : -3.4028235e+38f)), ((iConst125) ? fVec93[(IOTA0 - iConst126) & 255] : -3.4028235e+38f)), ((iConst127) ? fVec94[(IOTA0 - iConst128) & 511] : -3.4028235e+38f)), ((iConst129) ? fVec95[(IOTA0 - iConst130) & 1023] : -3.4028235e+38f)), ((iConst131) ? fVec96[(IOTA0 - iConst132) & 2047] : -3.4028235e+38f)), ((iConst133) ? fVec97[(IOTA0 - iConst134) & 4095] : -3.4028235e+38f))));
			int iTemp122 = (fTemp121 > fSlow33) + (fTemp121 > fSlow32);
			float fTemp123 = fTemp121 + 4e+01f;
			float fTemp124 = std::max<float>(fSlow27, fSlow36 * ((iTemp122 == 0) ? fTemp123 - fSlow5 : ((iTemp122 == 1) ? fSlow34 * mydsp_faustpower2_f(fTemp123 - fSlow31) : 0.0f)));
			float fTemp125 = (((fSlow38 * fTemp124) > fRec52[1]) ? fSlow45 : fSlow42);
			fRec52[0] = fSlow38 * fTemp124 * (1.0f - fTemp125) + fRec52[1] * fTemp125;
			float fTemp126 = std::min<float>(fSlow26 + std::min<float>(fRec1[0], fRec47[0]), std::max<float>(fRec51[0], fRec52[0]));
			fVbargraph4 = FAUSTFLOAT(std::min<float>(12.0f, std::max<float>(-12.0f, fTemp126)));
			float fTemp127 = std::pow(1e+01f, 0.025f * fTemp126);
			float fTemp128 = 1.0f - mydsp_faustpower2_f(fTemp127);
			float fTemp129 = std::sqrt(fTemp127);
			float fTemp130 = fConst2 * fTemp129 * (fConst2 * fTemp129 + 1.4285715f) + 1.0f;
			fRec62[0] = fConst12 * (fRec4[2] + fRec4[0] + 2.0f * fRec4[1]) - fConst10 * (fConst9 * fRec62[2] + fConst5 * fRec62[1]);
			fRec61[0] = fConst10 * (fRec62[2] + fRec62[0] + 2.0f * fRec62[1]) - fConst8 * (fConst7 * fRec61[2] + fConst5 * fRec61[1]);
			fRec60[0] = fConst8 * (fRec61[2] + fRec61[0] + 2.0f * fRec61[1]) - fConst145 * (fConst144 * fRec60[2] + fConst138 * fRec60[1]);
			fRec59[0] = fConst145 * (fConst137 * fRec60[0] + fConst146 * fRec60[1] + fConst137 * fRec60[2]) - fConst143 * (fConst142 * fRec59[2] + fConst138 * fRec59[1]);
			fRec58[0] = fConst143 * (fConst137 * fRec59[0] + fConst146 * fRec59[1] + fConst137 * fRec59[2]) - fConst141 * (fConst140 * fRec58[2] + fConst138 * fRec58[1]);
			float fTemp131 = std::fabs(fConst141 * (fConst137 * fRec58[0] + fConst146 * fRec58[1] + fConst137 * fRec58[2]));
			fVec98[0] = fTemp131;
			float fTemp132 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp131));
			int iTemp133 = (fTemp132 > fSlow50) + (fTemp132 > fSlow48);
			float fTemp134 = fTemp132 + -2.0f - fSlow5;
			float fTemp135 = 0.0f - fSlow52 * std::max<float>(0.0f, ((iTemp133 == 0) ? 0.0f : ((iTemp133 == 1) ? fSlow51 * mydsp_faustpower2_f(fSlow49 + fTemp134) : fSlow2 + fTemp134)));
			float fTemp136 = ((fTemp135 > fRec57[1]) ? fSlow59 : fSlow56);
			fRec57[0] = fTemp135 * (1.0f - fTemp136) + fRec57[1] * fTemp136;
			fRec68[0] = fConst12 * (fRec50[2] + fRec50[0] + 2.0f * fRec50[1]) - fConst10 * (fConst9 * fRec68[2] + fConst5 * fRec68[1]);
			fRec67[0] = fConst10 * (fRec68[2] + fRec68[0] + 2.0f * fRec68[1]) - fConst8 * (fConst7 * fRec67[2] + fConst5 * fRec67[1]);
			fRec66[0] = fConst8 * (fRec67[2] + fRec67[0] + 2.0f * fRec67[1]) - fConst145 * (fConst144 * fRec66[2] + fConst138 * fRec66[1]);
			fRec65[0] = fConst145 * (fConst137 * fRec66[0] + fConst146 * fRec66[1] + fConst137 * fRec66[2]) - fConst143 * (fConst142 * fRec65[2] + fConst138 * fRec65[1]);
			fRec64[0] = fConst143 * (fConst137 * fRec65[0] + fConst146 * fRec65[1] + fConst137 * fRec65[2]) - fConst141 * (fConst140 * fRec64[2] + fConst138 * fRec64[1]);
			float fTemp137 = std::fabs(fConst141 * (fConst137 * fRec64[0] + fConst146 * fRec64[1] + fConst137 * fRec64[2]));
			fVec99[0] = fTemp137;
			float fTemp138 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp137));
			int iTemp139 = (fTemp138 > fSlow50) + (fTemp138 > fSlow48);
			float fTemp140 = fTemp138 + -2.0f - fSlow5;
			float fTemp141 = 0.0f - fSlow52 * std::max<float>(0.0f, ((iTemp139 == 0) ? 0.0f : ((iTemp139 == 1) ? fSlow51 * mydsp_faustpower2_f(fSlow49 + fTemp140) : fSlow2 + fTemp140)));
			float fTemp142 = ((fTemp141 > fRec63[1]) ? fSlow59 : fSlow56);
			fRec63[0] = fTemp141 * (1.0f - fTemp142) + fRec63[1] * fTemp142;
			float fTemp143 = std::max<float>(fTemp131, fVec98[1]);
			fVec100[0] = fTemp143;
			float fTemp144 = std::max<float>(fTemp143, fVec100[2]);
			fVec101[0] = fTemp144;
			float fTemp145 = std::max<float>(fTemp144, fVec101[4]);
			fVec102[0] = fTemp145;
			float fTemp146 = std::max<float>(fTemp145, fVec102[8]);
			fVec103[IOTA0 & 31] = fTemp146;
			float fTemp147 = std::max<float>(fTemp146, fVec103[(IOTA0 - 16) & 31]);
			fVec104[IOTA0 & 63] = fTemp147;
			float fTemp148 = std::max<float>(fTemp147, fVec104[(IOTA0 - 32) & 63]);
			fVec105[IOTA0 & 127] = fTemp148;
			float fTemp149 = std::max<float>(fTemp148, fVec105[(IOTA0 - 64) & 127]);
			fVec106[IOTA0 & 255] = fTemp149;
			float fTemp150 = std::max<float>(fTemp149, fVec106[(IOTA0 - 128) & 255]);
			fVec107[IOTA0 & 511] = fTemp150;
			float fTemp151 = std::max<float>(fTemp150, fVec107[(IOTA0 - 256) & 511]);
			fVec108[IOTA0 & 1023] = fTemp151;
			float fTemp152 = std::max<float>(fTemp151, fVec108[(IOTA0 - 512) & 1023]);
			fVec109[IOTA0 & 2047] = fTemp152;
			fVec110[IOTA0 & 4095] = std::max<float>(fTemp152, fVec109[(IOTA0 - 1024) & 2047]);
			float fTemp153 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst113) ? fTemp131 : -3.4028235e+38f), ((iConst114) ? fVec100[iConst113] : -3.4028235e+38f)), ((iConst115) ? fVec101[iConst116] : -3.4028235e+38f)), ((iConst117) ? fVec102[iConst118] : -3.4028235e+38f)), ((iConst119) ? fVec103[(IOTA0 - iConst120) & 31] : -3.4028235e+38f)), ((iConst121) ? fVec104[(IOTA0 - iConst122) & 63] : -3.4028235e+38f)), ((iConst123) ? fVec105[(IOTA0 - iConst124) & 127] : -3.4028235e+38f)), ((iConst125) ? fVec106[(IOTA0 - iConst126) & 255] : -3.4028235e+38f)), ((iConst127) ? fVec107[(IOTA0 - iConst128) & 511] : -3.4028235e+38f)), ((iConst129) ? fVec108[(IOTA0 - iConst130) & 1023] : -3.4028235e+38f)), ((iConst131) ? fVec109[(IOTA0 - iConst132) & 2047] : -3.4028235e+38f)), ((iConst133) ? fVec110[(IOTA0 - iConst134) & 4095] : -3.4028235e+38f))));
			int iTemp154 = (fTemp153 > fSlow33) + (fTemp153 > fSlow32);
			float fTemp155 = fTemp153 + 4e+01f;
			float fTemp156 = std::max<float>(fSlow27, fSlow61 * ((iTemp154 == 0) ? fTemp155 - fSlow5 : ((iTemp154 == 1) ? fSlow34 * mydsp_faustpower2_f(fTemp155 - fSlow31) : 0.0f)));
			float fTemp157 = (((fSlow63 * fTemp156) > fRec69[1]) ? fSlow70 : fSlow67);
			fRec69[0] = fSlow63 * fTemp156 * (1.0f - fTemp157) + fRec69[1] * fTemp157;
			float fTemp158 = std::max<float>(fTemp137, fVec99[1]);
			fVec111[0] = fTemp158;
			float fTemp159 = std::max<float>(fTemp158, fVec111[2]);
			fVec112[0] = fTemp159;
			float fTemp160 = std::max<float>(fTemp159, fVec112[4]);
			fVec113[0] = fTemp160;
			float fTemp161 = std::max<float>(fTemp160, fVec113[8]);
			fVec114[IOTA0 & 31] = fTemp161;
			float fTemp162 = std::max<float>(fTemp161, fVec114[(IOTA0 - 16) & 31]);
			fVec115[IOTA0 & 63] = fTemp162;
			float fTemp163 = std::max<float>(fTemp162, fVec115[(IOTA0 - 32) & 63]);
			fVec116[IOTA0 & 127] = fTemp163;
			float fTemp164 = std::max<float>(fTemp163, fVec116[(IOTA0 - 64) & 127]);
			fVec117[IOTA0 & 255] = fTemp164;
			float fTemp165 = std::max<float>(fTemp164, fVec117[(IOTA0 - 128) & 255]);
			fVec118[IOTA0 & 511] = fTemp165;
			float fTemp166 = std::max<float>(fTemp165, fVec118[(IOTA0 - 256) & 511]);
			fVec119[IOTA0 & 1023] = fTemp166;
			float fTemp167 = std::max<float>(fTemp166, fVec119[(IOTA0 - 512) & 1023]);
			fVec120[IOTA0 & 2047] = fTemp167;
			fVec121[IOTA0 & 4095] = std::max<float>(fTemp167, fVec120[(IOTA0 - 1024) & 2047]);
			float fTemp168 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst113) ? fTemp137 : -3.4028235e+38f), ((iConst114) ? fVec111[iConst113] : -3.4028235e+38f)), ((iConst115) ? fVec112[iConst116] : -3.4028235e+38f)), ((iConst117) ? fVec113[iConst118] : -3.4028235e+38f)), ((iConst119) ? fVec114[(IOTA0 - iConst120) & 31] : -3.4028235e+38f)), ((iConst121) ? fVec115[(IOTA0 - iConst122) & 63] : -3.4028235e+38f)), ((iConst123) ? fVec116[(IOTA0 - iConst124) & 127] : -3.4028235e+38f)), ((iConst125) ? fVec117[(IOTA0 - iConst126) & 255] : -3.4028235e+38f)), ((iConst127) ? fVec118[(IOTA0 - iConst128) & 511] : -3.4028235e+38f)), ((iConst129) ? fVec119[(IOTA0 - iConst130) & 1023] : -3.4028235e+38f)), ((iConst131) ? fVec120[(IOTA0 - iConst132) & 2047] : -3.4028235e+38f)), ((iConst133) ? fVec121[(IOTA0 - iConst134) & 4095] : -3.4028235e+38f))));
			int iTemp169 = (fTemp168 > fSlow33) + (fTemp168 > fSlow32);
			float fTemp170 = fTemp168 + 4e+01f;
			float fTemp171 = std::max<float>(fSlow27, fSlow61 * ((iTemp169 == 0) ? fTemp170 - fSlow5 : ((iTemp169 == 1) ? fSlow34 * mydsp_faustpower2_f(fTemp170 - fSlow31) : 0.0f)));
			float fTemp172 = (((fSlow63 * fTemp171) > fRec70[1]) ? fSlow70 : fSlow67);
			fRec70[0] = fSlow63 * fTemp171 * (1.0f - fTemp172) + fRec70[1] * fTemp172;
			float fTemp173 = std::min<float>(fSlow26 + std::min<float>(fRec57[0], fRec63[0]), std::max<float>(fRec69[0], fRec70[0]));
			fVbargraph5 = FAUSTFLOAT(std::min<float>(12.0f, std::max<float>(-12.0f, fTemp173)));
			float fTemp174 = 0.025f * fTemp173;
			float fTemp175 = std::pow(1e+01f, fTemp174);
			float fTemp176 = mydsp_faustpower2_f(fTemp175) + -1.0f;
			float fTemp177 = std::sqrt(fTemp175);
			float fTemp178 = fConst2 * ((fConst2 / fTemp177 + 1.4285715f) / fTemp177) + 1.0f;
			float fTemp179 = std::pow(1e+01f, 0.0f - fTemp174);
			float fTemp180 = mydsp_faustpower2_f(fTemp179) + -1.0f;
			float fTemp181 = std::sqrt(fTemp179);
			float fTemp182 = fConst135 * ((fConst135 / fTemp181 + 1.4285715f) / fTemp181) + 1.0f;
			fRec84[0] = fConst145 * (fRec60[2] + fRec60[0] + 2.0f * fRec60[1]) - fConst143 * (fConst142 * fRec84[2] + fConst138 * fRec84[1]);
			fRec83[0] = fConst143 * (fRec84[2] + fRec84[0] + 2.0f * fRec84[1]) - fConst141 * (fConst140 * fRec83[2] + fConst138 * fRec83[1]);
			fRec82[0] = fConst141 * (fRec83[2] + fRec83[0] + 2.0f * fRec83[1]) - fConst157 * (fConst156 * fRec82[2] + fConst150 * fRec82[1]);
			fRec81[0] = fConst157 * (fConst149 * fRec82[0] + fConst158 * fRec82[1] + fConst149 * fRec82[2]) - fConst155 * (fConst154 * fRec81[2] + fConst150 * fRec81[1]);
			fRec80[0] = fConst155 * (fConst149 * fRec81[0] + fConst158 * fRec81[1] + fConst149 * fRec81[2]) - fConst153 * (fConst152 * fRec80[2] + fConst150 * fRec80[1]);
			float fTemp183 = std::fabs(fConst153 * (fConst149 * fRec80[0] + fConst158 * fRec80[1] + fConst149 * fRec80[2]));
			fVec122[0] = fTemp183;
			float fTemp184 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp183));
			int iTemp185 = (fTemp184 > fSlow76) + (fTemp184 > fSlow74);
			float fTemp186 = fTemp184 + -4.0f - fSlow5;
			float fTemp187 = 0.0f - fSlow78 * std::max<float>(0.0f, ((iTemp185 == 0) ? 0.0f : ((iTemp185 == 1) ? fSlow77 * mydsp_faustpower2_f(fSlow75 + fTemp186) : fSlow71 + fTemp186)));
			float fTemp188 = ((fTemp187 > fRec79[1]) ? fSlow84 : fSlow81);
			fRec79[0] = fTemp187 * (1.0f - fTemp188) + fRec79[1] * fTemp188;
			fRec90[0] = fConst145 * (fRec66[2] + fRec66[0] + 2.0f * fRec66[1]) - fConst143 * (fConst142 * fRec90[2] + fConst138 * fRec90[1]);
			fRec89[0] = fConst143 * (fRec90[2] + fRec90[0] + 2.0f * fRec90[1]) - fConst141 * (fConst140 * fRec89[2] + fConst138 * fRec89[1]);
			fRec88[0] = fConst141 * (fRec89[2] + fRec89[0] + 2.0f * fRec89[1]) - fConst157 * (fConst156 * fRec88[2] + fConst150 * fRec88[1]);
			fRec87[0] = fConst157 * (fConst149 * fRec88[0] + fConst158 * fRec88[1] + fConst149 * fRec88[2]) - fConst155 * (fConst154 * fRec87[2] + fConst150 * fRec87[1]);
			fRec86[0] = fConst155 * (fConst149 * fRec87[0] + fConst158 * fRec87[1] + fConst149 * fRec87[2]) - fConst153 * (fConst152 * fRec86[2] + fConst150 * fRec86[1]);
			float fTemp189 = std::fabs(fConst153 * (fConst149 * fRec86[0] + fConst158 * fRec86[1] + fConst149 * fRec86[2]));
			fVec123[0] = fTemp189;
			float fTemp190 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp189));
			int iTemp191 = (fTemp190 > fSlow76) + (fTemp190 > fSlow74);
			float fTemp192 = fTemp190 + -4.0f - fSlow5;
			float fTemp193 = 0.0f - fSlow78 * std::max<float>(0.0f, ((iTemp191 == 0) ? 0.0f : ((iTemp191 == 1) ? fSlow77 * mydsp_faustpower2_f(fSlow75 + fTemp192) : fSlow71 + fTemp192)));
			float fTemp194 = ((fTemp193 > fRec85[1]) ? fSlow84 : fSlow81);
			fRec85[0] = fTemp193 * (1.0f - fTemp194) + fRec85[1] * fTemp194;
			float fTemp195 = std::max<float>(fTemp183, fVec122[1]);
			fVec124[0] = fTemp195;
			float fTemp196 = std::max<float>(fTemp195, fVec124[2]);
			fVec125[0] = fTemp196;
			float fTemp197 = std::max<float>(fTemp196, fVec125[4]);
			fVec126[0] = fTemp197;
			float fTemp198 = std::max<float>(fTemp197, fVec126[8]);
			fVec127[IOTA0 & 31] = fTemp198;
			float fTemp199 = std::max<float>(fTemp198, fVec127[(IOTA0 - 16) & 31]);
			fVec128[IOTA0 & 63] = fTemp199;
			float fTemp200 = std::max<float>(fTemp199, fVec128[(IOTA0 - 32) & 63]);
			fVec129[IOTA0 & 127] = fTemp200;
			float fTemp201 = std::max<float>(fTemp200, fVec129[(IOTA0 - 64) & 127]);
			fVec130[IOTA0 & 255] = fTemp201;
			float fTemp202 = std::max<float>(fTemp201, fVec130[(IOTA0 - 128) & 255]);
			fVec131[IOTA0 & 511] = fTemp202;
			float fTemp203 = std::max<float>(fTemp202, fVec131[(IOTA0 - 256) & 511]);
			fVec132[IOTA0 & 1023] = fTemp203;
			float fTemp204 = std::max<float>(fTemp203, fVec132[(IOTA0 - 512) & 1023]);
			fVec133[IOTA0 & 2047] = fTemp204;
			fVec134[IOTA0 & 4095] = std::max<float>(fTemp204, fVec133[(IOTA0 - 1024) & 2047]);
			float fTemp205 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst113) ? fTemp183 : -3.4028235e+38f), ((iConst114) ? fVec124[iConst113] : -3.4028235e+38f)), ((iConst115) ? fVec125[iConst116] : -3.4028235e+38f)), ((iConst117) ? fVec126[iConst118] : -3.4028235e+38f)), ((iConst119) ? fVec127[(IOTA0 - iConst120) & 31] : -3.4028235e+38f)), ((iConst121) ? fVec128[(IOTA0 - iConst122) & 63] : -3.4028235e+38f)), ((iConst123) ? fVec129[(IOTA0 - iConst124) & 127] : -3.4028235e+38f)), ((iConst125) ? fVec130[(IOTA0 - iConst126) & 255] : -3.4028235e+38f)), ((iConst127) ? fVec131[(IOTA0 - iConst128) & 511] : -3.4028235e+38f)), ((iConst129) ? fVec132[(IOTA0 - iConst130) & 1023] : -3.4028235e+38f)), ((iConst131) ? fVec133[(IOTA0 - iConst132) & 2047] : -3.4028235e+38f)), ((iConst133) ? fVec134[(IOTA0 - iConst134) & 4095] : -3.4028235e+38f))));
			int iTemp206 = (fTemp205 > fSlow33) + (fTemp205 > fSlow32);
			float fTemp207 = fTemp205 + 4e+01f;
			float fTemp208 = std::max<float>(fSlow27, fSlow86 * ((iTemp206 == 0) ? fTemp207 - fSlow5 : ((iTemp206 == 1) ? fSlow34 * mydsp_faustpower2_f(fTemp207 - fSlow31) : 0.0f)));
			float fTemp209 = (((fSlow88 * fTemp208) > fRec91[1]) ? fSlow97 : fSlow94);
			fRec91[0] = fSlow88 * fTemp208 * (1.0f - fTemp209) + fRec91[1] * fTemp209;
			float fTemp210 = std::max<float>(fTemp189, fVec123[1]);
			fVec135[0] = fTemp210;
			float fTemp211 = std::max<float>(fTemp210, fVec135[2]);
			fVec136[0] = fTemp211;
			float fTemp212 = std::max<float>(fTemp211, fVec136[4]);
			fVec137[0] = fTemp212;
			float fTemp213 = std::max<float>(fTemp212, fVec137[8]);
			fVec138[IOTA0 & 31] = fTemp213;
			float fTemp214 = std::max<float>(fTemp213, fVec138[(IOTA0 - 16) & 31]);
			fVec139[IOTA0 & 63] = fTemp214;
			float fTemp215 = std::max<float>(fTemp214, fVec139[(IOTA0 - 32) & 63]);
			fVec140[IOTA0 & 127] = fTemp215;
			float fTemp216 = std::max<float>(fTemp215, fVec140[(IOTA0 - 64) & 127]);
			fVec141[IOTA0 & 255] = fTemp216;
			float fTemp217 = std::max<float>(fTemp216, fVec141[(IOTA0 - 128) & 255]);
			fVec142[IOTA0 & 511] = fTemp217;
			float fTemp218 = std::max<float>(fTemp217, fVec142[(IOTA0 - 256) & 511]);
			fVec143[IOTA0 & 1023] = fTemp218;
			float fTemp219 = std::max<float>(fTemp218, fVec143[(IOTA0 - 512) & 1023]);
			fVec144[IOTA0 & 2047] = fTemp219;
			fVec145[IOTA0 & 4095] = std::max<float>(fTemp219, fVec144[(IOTA0 - 1024) & 2047]);
			float fTemp220 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst113) ? fTemp189 : -3.4028235e+38f), ((iConst114) ? fVec135[iConst113] : -3.4028235e+38f)), ((iConst115) ? fVec136[iConst116] : -3.4028235e+38f)), ((iConst117) ? fVec137[iConst118] : -3.4028235e+38f)), ((iConst119) ? fVec138[(IOTA0 - iConst120) & 31] : -3.4028235e+38f)), ((iConst121) ? fVec139[(IOTA0 - iConst122) & 63] : -3.4028235e+38f)), ((iConst123) ? fVec140[(IOTA0 - iConst124) & 127] : -3.4028235e+38f)), ((iConst125) ? fVec141[(IOTA0 - iConst126) & 255] : -3.4028235e+38f)), ((iConst127) ? fVec142[(IOTA0 - iConst128) & 511] : -3.4028235e+38f)), ((iConst129) ? fVec143[(IOTA0 - iConst130) & 1023] : -3.4028235e+38f)), ((iConst131) ? fVec144[(IOTA0 - iConst132) & 2047] : -3.4028235e+38f)), ((iConst133) ? fVec145[(IOTA0 - iConst134) & 4095] : -3.4028235e+38f))));
			int iTemp221 = (fTemp220 > fSlow33) + (fTemp220 > fSlow32);
			float fTemp222 = fTemp220 + 4e+01f;
			float fTemp223 = std::max<float>(fSlow27, fSlow86 * ((iTemp221 == 0) ? fTemp222 - fSlow5 : ((iTemp221 == 1) ? fSlow34 * mydsp_faustpower2_f(fTemp222 - fSlow31) : 0.0f)));
			float fTemp224 = (((fSlow88 * fTemp223) > fRec92[1]) ? fSlow97 : fSlow94);
			fRec92[0] = fSlow88 * fTemp223 * (1.0f - fTemp224) + fRec92[1] * fTemp224;
			float fTemp225 = std::min<float>(fSlow26 + std::min<float>(fRec79[0], fRec85[0]), std::max<float>(fRec91[0], fRec92[0]));
			fVbargraph6 = FAUSTFLOAT(std::min<float>(12.0f, std::max<float>(-12.0f, fTemp225)));
			float fTemp226 = 0.025f * fTemp225;
			float fTemp227 = std::pow(1e+01f, fTemp226);
			float fTemp228 = mydsp_faustpower2_f(fTemp227) + -1.0f;
			float fTemp229 = std::sqrt(fTemp227);
			float fTemp230 = fConst135 * ((fConst135 / fTemp229 + 1.4285715f) / fTemp229) + 1.0f;
			float fTemp231 = std::pow(1e+01f, 0.0f - fTemp226);
			float fTemp232 = mydsp_faustpower2_f(fTemp231) + -1.0f;
			float fTemp233 = std::sqrt(fTemp231);
			float fTemp234 = fConst147 * ((fConst147 / fTemp233 + 1.4285715f) / fTemp233) + 1.0f;
			fRec106[0] = fConst157 * (fRec82[2] + fRec82[0] + 2.0f * fRec82[1]) - fConst155 * (fConst154 * fRec106[2] + fConst150 * fRec106[1]);
			fRec105[0] = fConst155 * (fRec106[2] + fRec106[0] + 2.0f * fRec106[1]) - fConst153 * (fConst152 * fRec105[2] + fConst150 * fRec105[1]);
			fRec104[0] = fConst153 * (fRec105[2] + fRec105[0] + 2.0f * fRec105[1]) - fConst169 * (fConst168 * fRec104[2] + fConst162 * fRec104[1]);
			fRec103[0] = fConst169 * (fConst161 * fRec104[0] + fConst170 * fRec104[1] + fConst161 * fRec104[2]) - fConst167 * (fConst166 * fRec103[2] + fConst162 * fRec103[1]);
			fRec102[0] = fConst167 * (fConst161 * fRec103[0] + fConst170 * fRec103[1] + fConst161 * fRec103[2]) - fConst165 * (fConst164 * fRec102[2] + fConst162 * fRec102[1]);
			float fTemp235 = std::fabs(fConst165 * (fConst161 * fRec102[0] + fConst170 * fRec102[1] + fConst161 * fRec102[2]));
			fVec146[0] = fTemp235;
			float fTemp236 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp235));
			int iTemp237 = (fTemp236 > fSlow103) + (fTemp236 > fSlow101);
			float fTemp238 = fTemp236 + -6.0f - fSlow5;
			float fTemp239 = 0.0f - fSlow105 * std::max<float>(0.0f, ((iTemp237 == 0) ? 0.0f : ((iTemp237 == 1) ? fSlow104 * mydsp_faustpower2_f(fSlow102 + fTemp238) : fSlow71 + fTemp238)));
			float fTemp240 = ((fTemp239 > fRec101[1]) ? fSlow111 : fSlow108);
			fRec101[0] = fTemp239 * (1.0f - fTemp240) + fRec101[1] * fTemp240;
			fRec112[0] = fConst157 * (fRec88[2] + fRec88[0] + 2.0f * fRec88[1]) - fConst155 * (fConst154 * fRec112[2] + fConst150 * fRec112[1]);
			fRec111[0] = fConst155 * (fRec112[2] + fRec112[0] + 2.0f * fRec112[1]) - fConst153 * (fConst152 * fRec111[2] + fConst150 * fRec111[1]);
			fRec110[0] = fConst153 * (fRec111[2] + fRec111[0] + 2.0f * fRec111[1]) - fConst169 * (fConst168 * fRec110[2] + fConst162 * fRec110[1]);
			fRec109[0] = fConst169 * (fConst161 * fRec110[0] + fConst170 * fRec110[1] + fConst161 * fRec110[2]) - fConst167 * (fConst166 * fRec109[2] + fConst162 * fRec109[1]);
			fRec108[0] = fConst167 * (fConst161 * fRec109[0] + fConst170 * fRec109[1] + fConst161 * fRec109[2]) - fConst165 * (fConst164 * fRec108[2] + fConst162 * fRec108[1]);
			float fTemp241 = std::fabs(fConst165 * (fConst161 * fRec108[0] + fConst170 * fRec108[1] + fConst161 * fRec108[2]));
			fVec147[0] = fTemp241;
			float fTemp242 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp241));
			int iTemp243 = (fTemp242 > fSlow103) + (fTemp242 > fSlow101);
			float fTemp244 = fTemp242 + -6.0f - fSlow5;
			float fTemp245 = 0.0f - fSlow105 * std::max<float>(0.0f, ((iTemp243 == 0) ? 0.0f : ((iTemp243 == 1) ? fSlow104 * mydsp_faustpower2_f(fSlow102 + fTemp244) : fSlow71 + fTemp244)));
			float fTemp246 = ((fTemp245 > fRec107[1]) ? fSlow111 : fSlow108);
			fRec107[0] = fTemp245 * (1.0f - fTemp246) + fRec107[1] * fTemp246;
			float fTemp247 = std::max<float>(fTemp235, fVec146[1]);
			fVec148[0] = fTemp247;
			float fTemp248 = std::max<float>(fTemp247, fVec148[2]);
			fVec149[0] = fTemp248;
			float fTemp249 = std::max<float>(fTemp248, fVec149[4]);
			fVec150[0] = fTemp249;
			float fTemp250 = std::max<float>(fTemp249, fVec150[8]);
			fVec151[IOTA0 & 31] = fTemp250;
			float fTemp251 = std::max<float>(fTemp250, fVec151[(IOTA0 - 16) & 31]);
			fVec152[IOTA0 & 63] = fTemp251;
			float fTemp252 = std::max<float>(fTemp251, fVec152[(IOTA0 - 32) & 63]);
			fVec153[IOTA0 & 127] = fTemp252;
			float fTemp253 = std::max<float>(fTemp252, fVec153[(IOTA0 - 64) & 127]);
			fVec154[IOTA0 & 255] = fTemp253;
			float fTemp254 = std::max<float>(fTemp253, fVec154[(IOTA0 - 128) & 255]);
			fVec155[IOTA0 & 511] = fTemp254;
			float fTemp255 = std::max<float>(fTemp254, fVec155[(IOTA0 - 256) & 511]);
			fVec156[IOTA0 & 1023] = fTemp255;
			float fTemp256 = std::max<float>(fTemp255, fVec156[(IOTA0 - 512) & 1023]);
			fVec157[IOTA0 & 2047] = fTemp256;
			fVec158[IOTA0 & 4095] = std::max<float>(fTemp256, fVec157[(IOTA0 - 1024) & 2047]);
			float fTemp257 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst113) ? fTemp235 : -3.4028235e+38f), ((iConst114) ? fVec148[iConst113] : -3.4028235e+38f)), ((iConst115) ? fVec149[iConst116] : -3.4028235e+38f)), ((iConst117) ? fVec150[iConst118] : -3.4028235e+38f)), ((iConst119) ? fVec151[(IOTA0 - iConst120) & 31] : -3.4028235e+38f)), ((iConst121) ? fVec152[(IOTA0 - iConst122) & 63] : -3.4028235e+38f)), ((iConst123) ? fVec153[(IOTA0 - iConst124) & 127] : -3.4028235e+38f)), ((iConst125) ? fVec154[(IOTA0 - iConst126) & 255] : -3.4028235e+38f)), ((iConst127) ? fVec155[(IOTA0 - iConst128) & 511] : -3.4028235e+38f)), ((iConst129) ? fVec156[(IOTA0 - iConst130) & 1023] : -3.4028235e+38f)), ((iConst131) ? fVec157[(IOTA0 - iConst132) & 2047] : -3.4028235e+38f)), ((iConst133) ? fVec158[(IOTA0 - iConst134) & 4095] : -3.4028235e+38f))));
			int iTemp258 = (fTemp257 > fSlow33) + (fTemp257 > fSlow32);
			float fTemp259 = fTemp257 + 4e+01f;
			float fTemp260 = std::max<float>(fSlow27, fSlow113 * ((iTemp258 == 0) ? fTemp259 - fSlow5 : ((iTemp258 == 1) ? fSlow34 * mydsp_faustpower2_f(fTemp259 - fSlow31) : 0.0f)));
			float fTemp261 = (((fSlow115 * fTemp260) > fRec113[1]) ? fSlow123 : fSlow120);
			fRec113[0] = fSlow115 * fTemp260 * (1.0f - fTemp261) + fRec113[1] * fTemp261;
			float fTemp262 = std::max<float>(fTemp241, fVec147[1]);
			fVec159[0] = fTemp262;
			float fTemp263 = std::max<float>(fTemp262, fVec159[2]);
			fVec160[0] = fTemp263;
			float fTemp264 = std::max<float>(fTemp263, fVec160[4]);
			fVec161[0] = fTemp264;
			float fTemp265 = std::max<float>(fTemp264, fVec161[8]);
			fVec162[IOTA0 & 31] = fTemp265;
			float fTemp266 = std::max<float>(fTemp265, fVec162[(IOTA0 - 16) & 31]);
			fVec163[IOTA0 & 63] = fTemp266;
			float fTemp267 = std::max<float>(fTemp266, fVec163[(IOTA0 - 32) & 63]);
			fVec164[IOTA0 & 127] = fTemp267;
			float fTemp268 = std::max<float>(fTemp267, fVec164[(IOTA0 - 64) & 127]);
			fVec165[IOTA0 & 255] = fTemp268;
			float fTemp269 = std::max<float>(fTemp268, fVec165[(IOTA0 - 128) & 255]);
			fVec166[IOTA0 & 511] = fTemp269;
			float fTemp270 = std::max<float>(fTemp269, fVec166[(IOTA0 - 256) & 511]);
			fVec167[IOTA0 & 1023] = fTemp270;
			float fTemp271 = std::max<float>(fTemp270, fVec167[(IOTA0 - 512) & 1023]);
			fVec168[IOTA0 & 2047] = fTemp271;
			fVec169[IOTA0 & 4095] = std::max<float>(fTemp271, fVec168[(IOTA0 - 1024) & 2047]);
			float fTemp272 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst113) ? fTemp241 : -3.4028235e+38f), ((iConst114) ? fVec159[iConst113] : -3.4028235e+38f)), ((iConst115) ? fVec160[iConst116] : -3.4028235e+38f)), ((iConst117) ? fVec161[iConst118] : -3.4028235e+38f)), ((iConst119) ? fVec162[(IOTA0 - iConst120) & 31] : -3.4028235e+38f)), ((iConst121) ? fVec163[(IOTA0 - iConst122) & 63] : -3.4028235e+38f)), ((iConst123) ? fVec164[(IOTA0 - iConst124) & 127] : -3.4028235e+38f)), ((iConst125) ? fVec165[(IOTA0 - iConst126) & 255] : -3.4028235e+38f)), ((iConst127) ? fVec166[(IOTA0 - iConst128) & 511] : -3.4028235e+38f)), ((iConst129) ? fVec167[(IOTA0 - iConst130) & 1023] : -3.4028235e+38f)), ((iConst131) ? fVec168[(IOTA0 - iConst132) & 2047] : -3.4028235e+38f)), ((iConst133) ? fVec169[(IOTA0 - iConst134) & 4095] : -3.4028235e+38f))));
			int iTemp273 = (fTemp272 > fSlow33) + (fTemp272 > fSlow32);
			float fTemp274 = fTemp272 + 4e+01f;
			float fTemp275 = std::max<float>(fSlow27, fSlow113 * ((iTemp273 == 0) ? fTemp274 - fSlow5 : ((iTemp273 == 1) ? fSlow34 * mydsp_faustpower2_f(fTemp274 - fSlow31) : 0.0f)));
			float fTemp276 = (((fSlow115 * fTemp275) > fRec114[1]) ? fSlow123 : fSlow120);
			fRec114[0] = fSlow115 * fTemp275 * (1.0f - fTemp276) + fRec114[1] * fTemp276;
			float fTemp277 = std::min<float>(fSlow26 + std::min<float>(fRec101[0], fRec107[0]), std::max<float>(fRec113[0], fRec114[0]));
			fVbargraph7 = FAUSTFLOAT(std::min<float>(12.0f, std::max<float>(-12.0f, fTemp277)));
			float fTemp278 = 0.025f * fTemp277;
			float fTemp279 = std::pow(1e+01f, fTemp278);
			float fTemp280 = mydsp_faustpower2_f(fTemp279) + -1.0f;
			float fTemp281 = std::sqrt(fTemp279);
			float fTemp282 = fConst147 * ((fConst147 / fTemp281 + 1.4285715f) / fTemp281) + 1.0f;
			float fTemp283 = std::pow(1e+01f, 0.0f - fTemp278);
			float fTemp284 = mydsp_faustpower2_f(fTemp283) + -1.0f;
			float fTemp285 = std::sqrt(fTemp283);
			float fTemp286 = fConst159 * ((fConst159 / fTemp285 + 1.4285715f) / fTemp285) + 1.0f;
			fRec125[0] = fConst169 * (fRec104[2] + fRec104[0] + 2.0f * fRec104[1]) - fConst167 * (fConst166 * fRec125[2] + fConst162 * fRec125[1]);
			fRec124[0] = fConst167 * (fRec125[2] + fRec125[0] + 2.0f * fRec125[1]) - fConst165 * (fConst164 * fRec124[2] + fConst162 * fRec124[1]);
			float fTemp287 = std::fabs(fConst165 * (fRec124[2] + fRec124[0] + 2.0f * fRec124[1]));
			fVec170[0] = fTemp287;
			float fTemp288 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp287));
			int iTemp289 = (fTemp288 > fSlow127) + (fTemp288 > fSlow125);
			float fTemp290 = fTemp288 - fSlow5;
			float fTemp291 = 0.0f - fSlow128 * std::max<float>(0.0f, ((iTemp289 == 0) ? 0.0f : ((iTemp289 == 1) ? fSlow104 * mydsp_faustpower2_f(fSlow126 + fTemp290) : fSlow124 + fTemp290)));
			float fTemp292 = ((fTemp291 > fRec123[1]) ? fSlow134 : fSlow131);
			fRec123[0] = fTemp291 * (1.0f - fTemp292) + fRec123[1] * fTemp292;
			fRec128[0] = fConst169 * (fRec110[2] + fRec110[0] + 2.0f * fRec110[1]) - fConst167 * (fConst166 * fRec128[2] + fConst162 * fRec128[1]);
			fRec127[0] = fConst167 * (fRec128[2] + fRec128[0] + 2.0f * fRec128[1]) - fConst165 * (fConst164 * fRec127[2] + fConst162 * fRec127[1]);
			float fTemp293 = std::fabs(fConst165 * (fRec127[2] + fRec127[0] + 2.0f * fRec127[1]));
			fVec171[0] = fTemp293;
			float fTemp294 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp293));
			int iTemp295 = (fTemp294 > fSlow127) + (fTemp294 > fSlow125);
			float fTemp296 = fTemp294 - fSlow5;
			float fTemp297 = 0.0f - fSlow128 * std::max<float>(0.0f, ((iTemp295 == 0) ? 0.0f : ((iTemp295 == 1) ? fSlow104 * mydsp_faustpower2_f(fSlow126 + fTemp296) : fSlow124 + fTemp296)));
			float fTemp298 = ((fTemp297 > fRec126[1]) ? fSlow134 : fSlow131);
			fRec126[0] = fTemp297 * (1.0f - fTemp298) + fRec126[1] * fTemp298;
			float fTemp299 = std::max<float>(fTemp287, fVec170[1]);
			fVec172[0] = fTemp299;
			float fTemp300 = std::max<float>(fTemp299, fVec172[2]);
			fVec173[0] = fTemp300;
			float fTemp301 = std::max<float>(fTemp300, fVec173[4]);
			fVec174[0] = fTemp301;
			float fTemp302 = std::max<float>(fTemp301, fVec174[8]);
			fVec175[IOTA0 & 31] = fTemp302;
			float fTemp303 = std::max<float>(fTemp302, fVec175[(IOTA0 - 16) & 31]);
			fVec176[IOTA0 & 63] = fTemp303;
			float fTemp304 = std::max<float>(fTemp303, fVec176[(IOTA0 - 32) & 63]);
			fVec177[IOTA0 & 127] = fTemp304;
			float fTemp305 = std::max<float>(fTemp304, fVec177[(IOTA0 - 64) & 127]);
			fVec178[IOTA0 & 255] = fTemp305;
			float fTemp306 = std::max<float>(fTemp305, fVec178[(IOTA0 - 128) & 255]);
			fVec179[IOTA0 & 511] = fTemp306;
			float fTemp307 = std::max<float>(fTemp306, fVec179[(IOTA0 - 256) & 511]);
			fVec180[IOTA0 & 1023] = fTemp307;
			float fTemp308 = std::max<float>(fTemp307, fVec180[(IOTA0 - 512) & 1023]);
			fVec181[IOTA0 & 2047] = fTemp308;
			fVec182[IOTA0 & 4095] = std::max<float>(fTemp308, fVec181[(IOTA0 - 1024) & 2047]);
			float fTemp309 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst113) ? fTemp287 : -3.4028235e+38f), ((iConst114) ? fVec172[iConst113] : -3.4028235e+38f)), ((iConst115) ? fVec173[iConst116] : -3.4028235e+38f)), ((iConst117) ? fVec174[iConst118] : -3.4028235e+38f)), ((iConst119) ? fVec175[(IOTA0 - iConst120) & 31] : -3.4028235e+38f)), ((iConst121) ? fVec176[(IOTA0 - iConst122) & 63] : -3.4028235e+38f)), ((iConst123) ? fVec177[(IOTA0 - iConst124) & 127] : -3.4028235e+38f)), ((iConst125) ? fVec178[(IOTA0 - iConst126) & 255] : -3.4028235e+38f)), ((iConst127) ? fVec179[(IOTA0 - iConst128) & 511] : -3.4028235e+38f)), ((iConst129) ? fVec180[(IOTA0 - iConst130) & 1023] : -3.4028235e+38f)), ((iConst131) ? fVec181[(IOTA0 - iConst132) & 2047] : -3.4028235e+38f)), ((iConst133) ? fVec182[(IOTA0 - iConst134) & 4095] : -3.4028235e+38f))));
			int iTemp310 = (fTemp309 > fSlow33) + (fTemp309 > fSlow32);
			float fTemp311 = fTemp309 + 4e+01f;
			float fTemp312 = std::max<float>(fSlow27, fSlow113 * ((iTemp310 == 0) ? fTemp311 - fSlow5 : ((iTemp310 == 1) ? fSlow34 * mydsp_faustpower2_f(fTemp311 - fSlow31) : 0.0f)));
			float fTemp313 = (((fSlow115 * fTemp312) > fRec129[1]) ? fSlow141 : fSlow138);
			fRec129[0] = fSlow115 * fTemp312 * (1.0f - fTemp313) + fRec129[1] * fTemp313;
			float fTemp314 = std::max<float>(fTemp293, fVec171[1]);
			fVec183[0] = fTemp314;
			float fTemp315 = std::max<float>(fTemp314, fVec183[2]);
			fVec184[0] = fTemp315;
			float fTemp316 = std::max<float>(fTemp315, fVec184[4]);
			fVec185[0] = fTemp316;
			float fTemp317 = std::max<float>(fTemp316, fVec185[8]);
			fVec186[IOTA0 & 31] = fTemp317;
			float fTemp318 = std::max<float>(fTemp317, fVec186[(IOTA0 - 16) & 31]);
			fVec187[IOTA0 & 63] = fTemp318;
			float fTemp319 = std::max<float>(fTemp318, fVec187[(IOTA0 - 32) & 63]);
			fVec188[IOTA0 & 127] = fTemp319;
			float fTemp320 = std::max<float>(fTemp319, fVec188[(IOTA0 - 64) & 127]);
			fVec189[IOTA0 & 255] = fTemp320;
			float fTemp321 = std::max<float>(fTemp320, fVec189[(IOTA0 - 128) & 255]);
			fVec190[IOTA0 & 511] = fTemp321;
			float fTemp322 = std::max<float>(fTemp321, fVec190[(IOTA0 - 256) & 511]);
			fVec191[IOTA0 & 1023] = fTemp322;
			float fTemp323 = std::max<float>(fTemp322, fVec191[(IOTA0 - 512) & 1023]);
			fVec192[IOTA0 & 2047] = fTemp323;
			fVec193[IOTA0 & 4095] = std::max<float>(fTemp323, fVec192[(IOTA0 - 1024) & 2047]);
			float fTemp324 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst113) ? fTemp293 : -3.4028235e+38f), ((iConst114) ? fVec183[iConst113] : -3.4028235e+38f)), ((iConst115) ? fVec184[iConst116] : -3.4028235e+38f)), ((iConst117) ? fVec185[iConst118] : -3.4028235e+38f)), ((iConst119) ? fVec186[(IOTA0 - iConst120) & 31] : -3.4028235e+38f)), ((iConst121) ? fVec187[(IOTA0 - iConst122) & 63] : -3.4028235e+38f)), ((iConst123) ? fVec188[(IOTA0 - iConst124) & 127] : -3.4028235e+38f)), ((iConst125) ? fVec189[(IOTA0 - iConst126) & 255] : -3.4028235e+38f)), ((iConst127) ? fVec190[(IOTA0 - iConst128) & 511] : -3.4028235e+38f)), ((iConst129) ? fVec191[(IOTA0 - iConst130) & 1023] : -3.4028235e+38f)), ((iConst131) ? fVec192[(IOTA0 - iConst132) & 2047] : -3.4028235e+38f)), ((iConst133) ? fVec193[(IOTA0 - iConst134) & 4095] : -3.4028235e+38f))));
			int iTemp325 = (fTemp324 > fSlow33) + (fTemp324 > fSlow32);
			float fTemp326 = fTemp324 + 4e+01f;
			float fTemp327 = std::max<float>(fSlow27, fSlow113 * ((iTemp325 == 0) ? fTemp326 - fSlow5 : ((iTemp325 == 1) ? fSlow34 * mydsp_faustpower2_f(fTemp326 - fSlow31) : 0.0f)));
			float fTemp328 = (((fSlow115 * fTemp327) > fRec130[1]) ? fSlow141 : fSlow138);
			fRec130[0] = fSlow115 * fTemp327 * (1.0f - fTemp328) + fRec130[1] * fTemp328;
			float fTemp329 = std::min<float>(fSlow26 + std::min<float>(fRec123[0], fRec126[0]), std::max<float>(fRec129[0], fRec130[0]));
			fVbargraph8 = FAUSTFLOAT(std::min<float>(12.0f, std::max<float>(-12.0f, fTemp329)));
			float fTemp330 = std::pow(1e+01f, 0.025f * fTemp329);
			float fTemp331 = mydsp_faustpower2_f(fTemp330) + -1.0f;
			float fTemp332 = std::sqrt(fTemp330);
			float fTemp333 = fConst159 * ((fConst159 / fTemp332 + 1.4285715f) / fTemp332) + 1.0f;
			float fTemp334 = fRec131[1] + fConst159 * ((fTemp82 - fRec132[1]) / fTemp332);
			float fTemp335 = fTemp334 / fTemp333;
			fRec131[0] = 2.0f * fTemp335 - fRec131[1];
			float fTemp336 = fTemp332 * fTemp333;
			float fTemp337 = fRec132[1] + fConst159 * (fTemp334 / fTemp336);
			fRec132[0] = 2.0f * fTemp337 - fRec132[1];
			float fRec133 = fTemp335;
			float fRec134 = fTemp337;
			float fTemp338 = fRec134 * fTemp331;
			float fTemp339 = fTemp330 + -1.0f;
			float fTemp340 = fRec133 * fTemp339;
			float fTemp341 = fTemp82 + 1.4285715f * fTemp340 + fTemp338;
			float fTemp342 = fRec119[1] + fConst159 * ((fTemp341 - fRec120[1]) / fTemp285);
			float fTemp343 = fTemp342 / fTemp286;
			fRec119[0] = 2.0f * fTemp343 - fRec119[1];
			float fTemp344 = fTemp285 * fTemp286;
			float fTemp345 = fRec120[1] + fConst159 * (fTemp342 / fTemp344);
			fRec120[0] = 2.0f * fTemp345 - fRec120[1];
			float fRec121 = fTemp343;
			float fRec122 = fTemp345;
			float fTemp346 = fTemp82 + fTemp338 + fRec122 * fTemp284;
			float fTemp347 = fTemp283 + -1.0f;
			float fTemp348 = fTemp340 + fRec121 * fTemp347;
			float fTemp349 = 1.4285715f * fTemp348 + fTemp346;
			float fTemp350 = fRec115[1] + fConst147 * ((fTemp349 - fRec116[1]) / fTemp281);
			float fTemp351 = fTemp350 / fTemp282;
			fRec115[0] = 2.0f * fTemp351 - fRec115[1];
			float fTemp352 = fTemp281 * fTemp282;
			float fTemp353 = fRec116[1] + fConst147 * (fTemp350 / fTemp352);
			fRec116[0] = 2.0f * fTemp353 - fRec116[1];
			float fRec117 = fTemp351;
			float fRec118 = fTemp353;
			float fTemp354 = fRec118 * fTemp280;
			float fTemp355 = fTemp279 + -1.0f;
			float fTemp356 = fTemp348 + fRec117 * fTemp355;
			float fTemp357 = fTemp346 + 1.4285715f * fTemp356 + fTemp354;
			float fTemp358 = fRec97[1] + fConst147 * ((fTemp357 - fRec98[1]) / fTemp233);
			float fTemp359 = fTemp358 / fTemp234;
			fRec97[0] = 2.0f * fTemp359 - fRec97[1];
			float fTemp360 = fTemp233 * fTemp234;
			float fTemp361 = fRec98[1] + fConst147 * (fTemp358 / fTemp360);
			fRec98[0] = 2.0f * fTemp361 - fRec98[1];
			float fRec99 = fTemp359;
			float fRec100 = fTemp361;
			float fTemp362 = fTemp346 + fTemp354 + fRec100 * fTemp232;
			float fTemp363 = fTemp231 + -1.0f;
			float fTemp364 = fTemp356 + fRec99 * fTemp363;
			float fTemp365 = 1.4285715f * fTemp364 + fTemp362;
			float fTemp366 = fRec93[1] + fConst135 * ((fTemp365 - fRec94[1]) / fTemp229);
			float fTemp367 = fTemp366 / fTemp230;
			fRec93[0] = 2.0f * fTemp367 - fRec93[1];
			float fTemp368 = fTemp229 * fTemp230;
			float fTemp369 = fRec94[1] + fConst135 * (fTemp366 / fTemp368);
			fRec94[0] = 2.0f * fTemp369 - fRec94[1];
			float fRec95 = fTemp367;
			float fRec96 = fTemp369;
			float fTemp370 = fRec96 * fTemp228;
			float fTemp371 = fTemp227 + -1.0f;
			float fTemp372 = fTemp364 + fRec95 * fTemp371;
			float fTemp373 = fTemp362 + 1.4285715f * fTemp372 + fTemp370;
			float fTemp374 = fRec75[1] + fConst135 * ((fTemp373 - fRec76[1]) / fTemp181);
			float fTemp375 = fTemp374 / fTemp182;
			fRec75[0] = 2.0f * fTemp375 - fRec75[1];
			float fTemp376 = fTemp181 * fTemp182;
			float fTemp377 = fRec76[1] + fConst135 * (fTemp374 / fTemp376);
			fRec76[0] = 2.0f * fTemp377 - fRec76[1];
			float fRec77 = fTemp375;
			float fRec78 = fTemp377;
			float fTemp378 = fRec78 * fTemp180;
			float fTemp379 = fTemp362 + fTemp370;
			float fTemp380 = fTemp179 + -1.0f;
			float fTemp381 = fTemp372 + fRec77 * fTemp380;
			float fTemp382 = 1.4285715f * fTemp381 + fTemp379 + fTemp378;
			float fTemp383 = fRec71[1] + fConst2 * ((fTemp382 - fRec72[1]) / fTemp177);
			float fTemp384 = fTemp383 / fTemp178;
			fRec71[0] = 2.0f * fTemp384 - fRec71[1];
			float fTemp385 = fTemp177 * fTemp178;
			float fTemp386 = fRec72[1] + fConst2 * (fTemp383 / fTemp385);
			fRec72[0] = 2.0f * fTemp386 - fRec72[1];
			float fRec73 = fTemp384;
			float fRec74 = fTemp386;
			float fTemp387 = fTemp175 + -1.0f;
			float fTemp388 = 1.4285715f * (fTemp381 + fRec73 * fTemp387) + fTemp379 + fTemp378 + fRec74 * fTemp176;
			float fTemp389 = fRec53[1] + fConst2 * fTemp129 * (fTemp388 - fRec54[1]);
			float fTemp390 = fTemp389 / fTemp130;
			fRec53[0] = 2.0f * fTemp390 - fRec53[1];
			float fTemp391 = fRec54[1] + fConst2 * (fTemp129 * fTemp389 / fTemp130);
			fRec54[0] = 2.0f * fTemp391 - fRec54[1];
			float fRec55 = fTemp390;
			float fRec56 = fTemp391;
			float fTemp392 = 1.0f - fTemp127;
			fRec135[0] = fSlow142 + fConst14 * fRec135[1];
			float fTemp393 = 1.0f - fRec135[0];
			float fTemp394 = fRec135[0] * fTemp82 + fTemp393 * (fTemp127 * (fTemp127 * fTemp388 + 1.4285715f * fRec55 * fTemp392) + fRec56 * fTemp128);
			float fTemp395 = std::fabs(std::fabs(fRec136[1]) + std::fabs(fRec137[1]));
			fVec194[0] = fTemp395;
			float fTemp396 = std::max<float>(fTemp395, fVec194[1]);
			fVec195[0] = fTemp396;
			float fTemp397 = std::max<float>(fTemp396, fVec195[2]);
			fVec196[0] = fTemp397;
			float fTemp398 = std::max<float>(fTemp397, fVec196[4]);
			fVec197[0] = fTemp398;
			fVec198[IOTA0 & 31] = std::max<float>(fTemp398, fVec197[8]);
			float fTemp399 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst26) ? fTemp395 : -3.4028235e+38f), ((iConst27) ? fVec195[iConst26] : -3.4028235e+38f)), ((iConst28) ? fVec196[iConst29] : -3.4028235e+38f)), ((iConst30) ? fVec197[iConst31] : -3.4028235e+38f)), ((iConst32) ? fVec198[(IOTA0 - iConst33) & 31] : -3.4028235e+38f))));
			int iTemp400 = (fTemp399 > fSlow12) + (fTemp399 > fSlow11);
			float fTemp401 = std::max<float>(-3.4028235e+38f, ((iTemp400 == 0) ? fTemp399 + -14.0f - fSlow5 : ((iTemp400 == 1) ? 0.0f - 4194304.0f * mydsp_faustpower2_f(fTemp399 + -14.0f - fSlow5) : 0.0f)));
			float fTemp402 = ((fTemp401 > fRec146[1]) ? 0.0f : fConst34);
			fRec146[0] = fTemp401 * (1.0f - fTemp402) + fRec146[1] * fTemp402;
			float fTemp403 = std::min<float>(1.0f, std::max<float>(0.0f, std::pow(1e+01f, 0.05f * fRec146[0])));
			float fTemp404 = std::tan(fConst35 * std::min<float>(fConst24, fTemp403 * (fConst25 * std::fabs(fRec139[1]) + 0.0176f)));
			float fTemp405 = fTemp404 + 2.0f;
			float fTemp406 = fTemp404 * fTemp405 + 1.0f;
			fVec199[0] = 0.0f - fConst46 * (fConst48 * fRec149[1] - fConst47 * fRec137[2]);
			fRec150[0] = fVec199[1] + fConst46 * (fConst44 * fRec137[1] - 2.0f * (fConst42 * fRec150[1] - fConst41 * fRec137[2]));
			fRec149[0] = fRec150[0];
			fVec200[0] = 0.50032705f * fRec149[1] - fConst53 * fRec147[1];
			fRec148[0] = fConst56 * fRec149[1] + fConst55 * (fVec200[1] - fConst51 * fRec148[1] + 0.50032705f * fRec149[0]);
			fRec147[0] = fRec148[0];
			float fTemp407 = mydsp_faustpower2_f(fRec147[0]);
			fVec201[0] = fTemp407;
			float fTemp408 = fTemp407 + fVec201[1];
			fVec202[0] = fTemp408;
			float fTemp409 = fTemp408 + fVec202[2];
			fVec203[0] = fTemp409;
			float fTemp410 = fTemp409 + fVec203[4];
			fVec204[0] = fTemp410;
			float fTemp411 = fTemp410 + fVec204[8];
			fVec205[IOTA0 & 31] = fTemp411;
			float fTemp412 = fTemp411 + fVec205[(IOTA0 - 16) & 31];
			fVec206[IOTA0 & 63] = fTemp412;
			float fTemp413 = fTemp412 + fVec206[(IOTA0 - 32) & 63];
			fVec207[IOTA0 & 127] = fTemp413;
			float fTemp414 = fTemp413 + fVec207[(IOTA0 - 64) & 127];
			fVec208[IOTA0 & 255] = fTemp414;
			float fTemp415 = fTemp414 + fVec208[(IOTA0 - 128) & 255];
			fVec209[IOTA0 & 511] = fTemp415;
			float fTemp416 = fTemp415 + fVec209[(IOTA0 - 256) & 511];
			fVec210[IOTA0 & 1023] = fTemp416;
			fVec211[IOTA0 & 2047] = fTemp416 + fVec210[(IOTA0 - 512) & 1023];
			fVec212[0] = 0.0f - fConst46 * (fConst48 * fRec153[1] - fConst47 * fRec136[2]);
			fRec154[0] = fVec212[1] + fConst46 * (fConst44 * fRec136[1] - 2.0f * (fConst42 * fRec154[1] - fConst41 * fRec136[2]));
			fRec153[0] = fRec154[0];
			fVec213[0] = 0.50032705f * fRec153[1] - fConst53 * fRec151[1];
			fRec152[0] = fConst56 * fRec153[1] + fConst55 * (fVec213[1] - fConst51 * fRec152[1] + 0.50032705f * fRec153[0]);
			fRec151[0] = fRec152[0];
			float fTemp417 = mydsp_faustpower2_f(fRec151[0]);
			fVec214[0] = fTemp417;
			float fTemp418 = fTemp417 + fVec214[1];
			fVec215[0] = fTemp418;
			float fTemp419 = fTemp418 + fVec215[2];
			fVec216[0] = fTemp419;
			float fTemp420 = fTemp419 + fVec216[4];
			fVec217[0] = fTemp420;
			float fTemp421 = fTemp420 + fVec217[8];
			fVec218[IOTA0 & 31] = fTemp421;
			float fTemp422 = fTemp421 + fVec218[(IOTA0 - 16) & 31];
			fVec219[IOTA0 & 63] = fTemp422;
			float fTemp423 = fTemp422 + fVec219[(IOTA0 - 32) & 63];
			fVec220[IOTA0 & 127] = fTemp423;
			float fTemp424 = fTemp423 + fVec220[(IOTA0 - 64) & 127];
			fVec221[IOTA0 & 255] = fTemp424;
			float fTemp425 = fTemp424 + fVec221[(IOTA0 - 128) & 255];
			fVec222[IOTA0 & 511] = fTemp425;
			float fTemp426 = fTemp425 + fVec222[(IOTA0 - 256) & 511];
			fVec223[IOTA0 & 1023] = fTemp426;
			fVec224[IOTA0 & 2047] = fTemp426 + fVec223[(IOTA0 - 512) & 1023];
			float fTemp427 = fSlow5 + fRec138[1] + (0.691f - (4.3429446f * std::log(std::max<float>(1e-12f, fConst76 * (((iConst74) ? 0.86000985f * fVec224[(IOTA0 - iConst75) & 2047] : 0.0f) + ((iConst72) ? 0.86000985f * fVec223[(IOTA0 - iConst73) & 1023] : 0.0f) + ((iConst70) ? 0.86000985f * fVec222[(IOTA0 - iConst71) & 511] : 0.0f) + ((iConst68) ? 0.86000985f * fVec221[(IOTA0 - iConst69) & 255] : 0.0f) + ((iConst66) ? 0.86000985f * fVec220[(IOTA0 - iConst67) & 127] : 0.0f) + ((iConst64) ? 0.86000985f * fVec219[(IOTA0 - iConst65) & 63] : 0.0f) + ((iConst62) ? 0.86000985f * fVec218[(IOTA0 - iConst63) & 31] : 0.0f) + ((iConst60) ? 0.86000985f * fVec217[iConst61] : 0.0f) + ((iConst58) ? 0.86000985f * fVec216[iConst59] : 0.0f) + ((iConst57) ? 0.86000985f * fTemp417 : 0.0f) + ((iConst38) ? 0.86000985f * fVec215[iConst57] : 0.0f) + ((iConst74) ? 0.86000985f * fVec211[(IOTA0 - iConst75) & 2047] : 0.0f) + ((iConst72) ? 0.86000985f * fVec210[(IOTA0 - iConst73) & 1023] : 0.0f) + ((iConst70) ? 0.86000985f * fVec209[(IOTA0 - iConst71) & 511] : 0.0f) + ((iConst68) ? 0.86000985f * fVec208[(IOTA0 - iConst69) & 255] : 0.0f) + ((iConst66) ? 0.86000985f * fVec207[(IOTA0 - iConst67) & 127] : 0.0f) + ((iConst64) ? 0.86000985f * fVec206[(IOTA0 - iConst65) & 63] : 0.0f) + ((iConst62) ? 0.86000985f * fVec205[(IOTA0 - iConst63) & 31] : 0.0f) + ((iConst60) ? 0.86000985f * fVec204[iConst61] : 0.0f) + ((iConst58) ? 0.86000985f * fVec203[iConst59] : 0.0f) + ((iConst57) ? 0.86000985f * fTemp407 : 0.0f) + ((iConst38) ? 0.86000985f * fVec202[iConst57] : 0.0f)))) + fRec141[1] * fTemp405 + fRec142[1]));
			float fTemp428 = fTemp404 * fTemp427 / fTemp406;
			fRec141[0] = fRec141[1] + 2.0f * fTemp428;
			float fTemp429 = fRec141[1] + fTemp428;
			float fTemp430 = fTemp404 * fTemp429;
			fRec142[0] = fRec142[1] + 2.0f * fTemp430;
			float fRec143 = fTemp429;
			float fRec144 = fTemp427 / fTemp406;
			float fRec145 = fRec142[1] + fTemp430;
			fRec139[0] = fRec143;
			float fRec140 = fRec145;
			fVbargraph9 = FAUSTFLOAT(std::max<float>(-2e+01f, std::min<float>(2e+01f, fRec140)));
			fRec138[0] = fVbargraph9;
			float fTemp431 = std::pow(1e+01f, 0.05f * fRec138[0]);
			fRec136[0] = fTemp431 * fTemp394;
			float fTemp432 = fRec183[1] + fConst159 * ((fTemp89 - fRec184[1]) / fTemp332);
			float fTemp433 = fTemp432 / fTemp333;
			fRec183[0] = 2.0f * fTemp433 - fRec183[1];
			float fTemp434 = fRec184[1] + fConst159 * (fTemp432 / fTemp336);
			fRec184[0] = 2.0f * fTemp434 - fRec184[1];
			float fRec185 = fTemp433;
			float fRec186 = fTemp434;
			float fTemp435 = fRec186 * fTemp331;
			float fTemp436 = fRec185 * fTemp339;
			float fTemp437 = fTemp89 + 1.4285715f * fTemp436 + fTemp435;
			float fTemp438 = fRec179[1] + fConst159 * ((fTemp437 - fRec180[1]) / fTemp285);
			float fTemp439 = fTemp438 / fTemp286;
			fRec179[0] = 2.0f * fTemp439 - fRec179[1];
			float fTemp440 = fRec180[1] + fConst159 * (fTemp438 / fTemp344);
			fRec180[0] = 2.0f * fTemp440 - fRec180[1];
			float fRec181 = fTemp439;
			float fRec182 = fTemp440;
			float fTemp441 = fRec182 * fTemp284;
			float fTemp442 = fTemp89 + fTemp435;
			float fTemp443 = fTemp436 + fRec181 * fTemp347;
			float fTemp444 = 1.4285715f * fTemp443 + fTemp442 + fTemp441;
			float fTemp445 = fRec175[1] + fConst147 * ((fTemp444 - fRec176[1]) / fTemp281);
			float fTemp446 = fTemp445 / fTemp282;
			fRec175[0] = 2.0f * fTemp446 - fRec175[1];
			float fTemp447 = fRec176[1] + fConst147 * (fTemp445 / fTemp352);
			fRec176[0] = 2.0f * fTemp447 - fRec176[1];
			float fRec177 = fTemp446;
			float fRec178 = fTemp447;
			float fTemp448 = fRec178 * fTemp280;
			float fTemp449 = fTemp442 + fTemp441;
			float fTemp450 = fTemp443 + fRec177 * fTemp355;
			float fTemp451 = 1.4285715f * fTemp450 + fTemp449 + fTemp448;
			float fTemp452 = fRec171[1] + fConst147 * ((fTemp451 - fRec172[1]) / fTemp233);
			float fTemp453 = fTemp452 / fTemp234;
			fRec171[0] = 2.0f * fTemp453 - fRec171[1];
			float fTemp454 = fRec172[1] + fConst147 * (fTemp452 / fTemp360);
			fRec172[0] = 2.0f * fTemp454 - fRec172[1];
			float fRec173 = fTemp453;
			float fRec174 = fTemp454;
			float fTemp455 = fTemp449 + fTemp448 + fRec174 * fTemp232;
			float fTemp456 = fTemp450 + fRec173 * fTemp363;
			float fTemp457 = 1.4285715f * fTemp456 + fTemp455;
			float fTemp458 = fRec167[1] + fConst135 * ((fTemp457 - fRec168[1]) / fTemp229);
			float fTemp459 = fTemp458 / fTemp230;
			fRec167[0] = 2.0f * fTemp459 - fRec167[1];
			float fTemp460 = fRec168[1] + fConst135 * (fTemp458 / fTemp368);
			fRec168[0] = 2.0f * fTemp460 - fRec168[1];
			float fRec169 = fTemp459;
			float fRec170 = fTemp460;
			float fTemp461 = fRec170 * fTemp228;
			float fTemp462 = fTemp456 + fRec169 * fTemp371;
			float fTemp463 = fTemp455 + 1.4285715f * fTemp462 + fTemp461;
			float fTemp464 = fRec163[1] + fConst135 * ((fTemp463 - fRec164[1]) / fTemp181);
			float fTemp465 = fTemp464 / fTemp182;
			fRec163[0] = 2.0f * fTemp465 - fRec163[1];
			float fTemp466 = fRec164[1] + fConst135 * (fTemp464 / fTemp376);
			fRec164[0] = 2.0f * fTemp466 - fRec164[1];
			float fRec165 = fTemp465;
			float fRec166 = fTemp466;
			float fTemp467 = fRec166 * fTemp180;
			float fTemp468 = fTemp455 + fTemp461;
			float fTemp469 = fTemp462 + fRec165 * fTemp380;
			float fTemp470 = 1.4285715f * fTemp469 + fTemp468 + fTemp467;
			float fTemp471 = fRec159[1] + fConst2 * ((fTemp470 - fRec160[1]) / fTemp177);
			float fTemp472 = fTemp471 / fTemp178;
			fRec159[0] = 2.0f * fTemp472 - fRec159[1];
			float fTemp473 = fRec160[1] + fConst2 * (fTemp471 / fTemp385);
			fRec160[0] = 2.0f * fTemp473 - fRec160[1];
			float fRec161 = fTemp472;
			float fRec162 = fTemp473;
			float fTemp474 = 1.4285715f * (fTemp469 + fRec161 * fTemp387) + fTemp468 + fTemp467 + fRec162 * fTemp176;
			float fTemp475 = fRec155[1] + fConst2 * fTemp129 * (fTemp474 - fRec156[1]);
			float fTemp476 = fTemp475 / fTemp130;
			fRec155[0] = 2.0f * fTemp476 - fRec155[1];
			float fTemp477 = fRec156[1] + fConst2 * (fTemp129 * fTemp475 / fTemp130);
			fRec156[0] = 2.0f * fTemp477 - fRec156[1];
			float fRec157 = fTemp476;
			float fRec158 = fTemp477;
			float fTemp478 = fRec135[0] * fTemp89 + fTemp393 * (fTemp127 * (fTemp127 * fTemp474 + 1.4285715f * fRec157 * fTemp392) + fRec158 * fTemp128);
			fRec137[0] = fTemp431 * fTemp478;
			float fTemp479 = fSlow13 * fRec136[0] + fSlow10 * fTemp394;
			fVec225[IOTA0 & 2047] = fTemp479;
			float fTemp480 = fSlow13 * fRec137[0] + fSlow10 * fTemp478;
			fVec226[IOTA0 & 2047] = fTemp480;
			float fTemp481 = std::fabs(std::max<float>(std::fabs(fTemp479), std::fabs(fTemp480)));
			int iTemp482 = (fTemp481 >= fRec190[1]) | (float(iRec189[1]) >= fConst173);
			iRec189[0] = ((iTemp482) ? 0 : iRec189[1] + 1);
			fRec190[0] = ((iTemp482) ? fTemp481 : fRec190[1]);
			fRec188[0] = fConst174 * fRec190[0] + fConst172 * fRec188[1];
			float fTemp483 = std::fabs(fRec188[0]);
			fRec187[0] = std::max<float>(fTemp483, fConst175 * fRec187[1] + fConst176 * fTemp483);
			float fTemp484 = std::min<float>(1.0f, 0.8912509f / std::max<float>(fRec187[0], 1.1920929e-07f));
			fVbargraph10 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp484))));
			fRec191[0] = fSlow143 + fConst14 * fRec191[1];
			float fTemp485 = (1.0f - fRec191[0]) * fTemp484;
			float fTemp486 = fTemp4 * fRec191[0] + fTemp485 * fVec225[(IOTA0 - iConst171) & 2047];
			fVec227[0] = fTemp486;
			fRec0[0] = std::max<float>(fRec0[1] - fConst1, std::min<float>(1e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(0.00031622776f, std::fabs(fTemp486))))));
			fVbargraph11 = FAUSTFLOAT(fRec0[0]);
			output0[i0] = FAUSTFLOAT(fTemp486);
			float fTemp487 = fRec191[0] * fTemp79 + fTemp485 * fVec226[(IOTA0 - iConst171) & 2047];
			fVec228[0] = fTemp487;
			fVec229[0] = 0.0f - fConst46 * (fConst48 * fRec195[1] - fConst47 * fVec228[1]);
			fRec196[0] = fVec229[1] + fConst46 * (fConst44 * fTemp487 - 2.0f * (fConst42 * fRec196[1] - fConst41 * fVec228[1]));
			fRec195[0] = fRec196[0];
			fVec230[0] = 0.50032705f * fRec195[1] - fConst53 * fRec193[1];
			fRec194[0] = fConst56 * fRec195[1] + fConst55 * (fVec230[1] - fConst51 * fRec194[1] + 0.50032705f * fRec195[0]);
			fRec193[0] = fRec194[0];
			float fTemp488 = mydsp_faustpower2_f(fRec193[0]);
			fVec231[0] = fTemp488;
			float fTemp489 = fTemp488 + fVec231[1];
			fVec232[0] = fTemp489;
			float fTemp490 = fTemp489 + fVec232[2];
			fVec233[0] = fTemp490;
			float fTemp491 = fTemp490 + fVec233[4];
			fVec234[0] = fTemp491;
			float fTemp492 = fTemp491 + fVec234[8];
			fVec235[IOTA0 & 31] = fTemp492;
			float fTemp493 = fTemp492 + fVec235[(IOTA0 - 16) & 31];
			fVec236[IOTA0 & 63] = fTemp493;
			float fTemp494 = fTemp493 + fVec236[(IOTA0 - 32) & 63];
			fVec237[IOTA0 & 127] = fTemp494;
			float fTemp495 = fTemp494 + fVec237[(IOTA0 - 64) & 127];
			fVec238[IOTA0 & 255] = fTemp495;
			float fTemp496 = fTemp495 + fVec238[(IOTA0 - 128) & 255];
			fVec239[IOTA0 & 511] = fTemp496;
			float fTemp497 = fTemp496 + fVec239[(IOTA0 - 256) & 511];
			fVec240[IOTA0 & 1023] = fTemp497;
			float fTemp498 = fTemp497 + fVec240[(IOTA0 - 512) & 1023];
			fVec241[IOTA0 & 2047] = fTemp498;
			float fTemp499 = fTemp498 + fVec241[(IOTA0 - 1024) & 2047];
			fVec242[IOTA0 & 4095] = fTemp499;
			float fTemp500 = fTemp499 + fVec242[(IOTA0 - 2048) & 4095];
			fVec243[IOTA0 & 8191] = fTemp500;
			float fTemp501 = fTemp500 + fVec243[(IOTA0 - 4096) & 8191];
			fVec244[IOTA0 & 16383] = fTemp501;
			float fTemp502 = fTemp501 + fVec244[(IOTA0 - 8192) & 16383];
			fVec245[IOTA0 & 32767] = fTemp502;
			float fTemp503 = fTemp502 + fVec245[(IOTA0 - 16384) & 32767];
			fVec246[IOTA0 & 65535] = fTemp503;
			fVec247[IOTA0 & 131071] = fTemp503 + fVec246[(IOTA0 - 32768) & 65535];
			fVec248[0] = 0.0f - fConst46 * (fConst48 * fRec199[1] - fConst47 * fVec227[1]);
			fRec200[0] = fVec248[1] + fConst46 * (fConst44 * fTemp486 - 2.0f * (fConst42 * fRec200[1] - fConst41 * fVec227[1]));
			fRec199[0] = fRec200[0];
			fVec249[0] = 0.50032705f * fRec199[1] - fConst53 * fRec197[1];
			fRec198[0] = fConst56 * fRec199[1] + fConst55 * (fVec249[1] - fConst51 * fRec198[1] + 0.50032705f * fRec199[0]);
			fRec197[0] = fRec198[0];
			float fTemp504 = mydsp_faustpower2_f(fRec197[0]);
			fVec250[0] = fTemp504;
			float fTemp505 = fTemp504 + fVec250[1];
			fVec251[0] = fTemp505;
			float fTemp506 = fTemp505 + fVec251[2];
			fVec252[0] = fTemp506;
			float fTemp507 = fTemp506 + fVec252[4];
			fVec253[0] = fTemp507;
			float fTemp508 = fTemp507 + fVec253[8];
			fVec254[IOTA0 & 31] = fTemp508;
			float fTemp509 = fTemp508 + fVec254[(IOTA0 - 16) & 31];
			fVec255[IOTA0 & 63] = fTemp509;
			float fTemp510 = fTemp509 + fVec255[(IOTA0 - 32) & 63];
			fVec256[IOTA0 & 127] = fTemp510;
			float fTemp511 = fTemp510 + fVec256[(IOTA0 - 64) & 127];
			fVec257[IOTA0 & 255] = fTemp511;
			float fTemp512 = fTemp511 + fVec257[(IOTA0 - 128) & 255];
			fVec258[IOTA0 & 511] = fTemp512;
			float fTemp513 = fTemp512 + fVec258[(IOTA0 - 256) & 511];
			fVec259[IOTA0 & 1023] = fTemp513;
			float fTemp514 = fTemp513 + fVec259[(IOTA0 - 512) & 1023];
			fVec260[IOTA0 & 2047] = fTemp514;
			float fTemp515 = fTemp514 + fVec260[(IOTA0 - 1024) & 2047];
			fVec261[IOTA0 & 4095] = fTemp515;
			float fTemp516 = fTemp515 + fVec261[(IOTA0 - 2048) & 4095];
			fVec262[IOTA0 & 8191] = fTemp516;
			float fTemp517 = fTemp516 + fVec262[(IOTA0 - 4096) & 8191];
			fVec263[IOTA0 & 16383] = fTemp517;
			float fTemp518 = fTemp517 + fVec263[(IOTA0 - 8192) & 16383];
			fVec264[IOTA0 & 32767] = fTemp518;
			float fTemp519 = fTemp518 + fVec264[(IOTA0 - 16384) & 32767];
			fVec265[IOTA0 & 65535] = fTemp519;
			fVec266[IOTA0 & 131071] = fTemp519 + fVec265[(IOTA0 - 32768) & 65535];
			fVbargraph12 = FAUSTFLOAT(4.3429446f * std::log(std::max<float>(1e-12f, fConst110 * (((iConst108) ? 0.86000985f * fVec266[(IOTA0 - iConst109) & 131071] : 0.0f) + ((iConst106) ? 0.86000985f * fVec265[(IOTA0 - iConst107) & 65535] : 0.0f) + ((iConst104) ? 0.86000985f * fVec264[(IOTA0 - iConst105) & 32767] : 0.0f) + ((iConst102) ? 0.86000985f * fVec263[(IOTA0 - iConst103) & 16383] : 0.0f) + ((iConst100) ? 0.86000985f * fVec262[(IOTA0 - iConst101) & 8191] : 0.0f) + ((iConst98) ? 0.86000985f * fVec261[(IOTA0 - iConst99) & 4095] : 0.0f) + ((iConst96) ? 0.86000985f * fVec260[(IOTA0 - iConst97) & 2047] : 0.0f) + ((iConst94) ? 0.86000985f * fVec259[(IOTA0 - iConst95) & 1023] : 0.0f) + ((iConst92) ? 0.86000985f * fVec258[(IOTA0 - iConst93) & 511] : 0.0f) + ((iConst90) ? 0.86000985f * fVec257[(IOTA0 - iConst91) & 255] : 0.0f) + ((iConst88) ? 0.86000985f * fVec256[(IOTA0 - iConst89) & 127] : 0.0f) + ((iConst86) ? 0.86000985f * fVec255[(IOTA0 - iConst87) & 63] : 0.0f) + ((iConst84) ? 0.86000985f * fVec254[(IOTA0 - iConst85) & 31] : 0.0f) + ((iConst82) ? 0.86000985f * fVec253[iConst83] : 0.0f) + ((iConst80) ? 0.86000985f * fVec252[iConst81] : 0.0f) + ((iConst79) ? 0.86000985f * fTemp504 : 0.0f) + ((iConst78) ? 0.86000985f * fVec251[iConst79] : 0.0f) + ((iConst108) ? 0.86000985f * fVec247[(IOTA0 - iConst109) & 131071] : 0.0f) + ((iConst106) ? 0.86000985f * fVec246[(IOTA0 - iConst107) & 65535] : 0.0f) + ((iConst104) ? 0.86000985f * fVec245[(IOTA0 - iConst105) & 32767] : 0.0f) + ((iConst102) ? 0.86000985f * fVec244[(IOTA0 - iConst103) & 16383] : 0.0f) + ((iConst100) ? 0.86000985f * fVec243[(IOTA0 - iConst101) & 8191] : 0.0f) + ((iConst98) ? 0.86000985f * fVec242[(IOTA0 - iConst99) & 4095] : 0.0f) + ((iConst96) ? 0.86000985f * fVec241[(IOTA0 - iConst97) & 2047] : 0.0f) + ((iConst94) ? 0.86000985f * fVec240[(IOTA0 - iConst95) & 1023] : 0.0f) + ((iConst92) ? 0.86000985f * fVec239[(IOTA0 - iConst93) & 511] : 0.0f) + ((iConst90) ? 0.86000985f * fVec238[(IOTA0 - iConst91) & 255] : 0.0f) + ((iConst88) ? 0.86000985f * fVec237[(IOTA0 - iConst89) & 127] : 0.0f) + ((iConst86) ? 0.86000985f * fVec236[(IOTA0 - iConst87) & 63] : 0.0f) + ((iConst84) ? 0.86000985f * fVec235[(IOTA0 - iConst85) & 31] : 0.0f) + ((iConst82) ? 0.86000985f * fVec234[iConst83] : 0.0f) + ((iConst80) ? 0.86000985f * fVec233[iConst81] : 0.0f) + ((iConst79) ? 0.86000985f * fTemp488 : 0.0f) + ((iConst78) ? 0.86000985f * fVec232[iConst79] : 0.0f)))) + -0.691f);
			float fTemp520 = fTemp487;
			fRec192[0] = std::max<float>(fRec192[1] - fConst1, std::min<float>(1e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(0.00031622776f, std::fabs(fTemp520))))));
			fVbargraph13 = FAUSTFLOAT(fRec192[0]);
			output1[i0] = FAUSTFLOAT(fTemp520);
			fRec5[1] = fRec5[0];
			fRec10[1] = fRec10[0];
			fRec9[1] = fRec9[0];
			fVec0[1] = fVec0[0];
			fRec8[1] = fRec8[0];
			fRec7[1] = fRec7[0];
			fRec11[1] = fRec11[0];
			fVec1[1] = fVec1[0];
			fRec6[1] = fRec6[0];
			fRec12[1] = fRec12[0];
			fRec13[1] = fRec13[0];
			fVec2[1] = fVec2[0];
			fVec3[2] = fVec3[1];
			fVec3[1] = fVec3[0];
			for (int j0 = 6; j0 > 0; j0 = j0 - 1) {
				fVec4[j0] = fVec4[j0 - 1];
			}
			for (int j1 = 14; j1 > 0; j1 = j1 - 1) {
				fVec5[j1] = fVec5[j1 - 1];
			}
			IOTA0 = IOTA0 + 1;
			fRec24[1] = fRec24[0];
			fVec7[1] = fVec7[0];
			fRec28[1] = fRec28[0];
			fRec27[1] = fRec27[0];
			fVec8[1] = fVec8[0];
			fRec26[1] = fRec26[0];
			fRec25[1] = fRec25[0];
			fVec9[1] = fVec9[0];
			fVec10[2] = fVec10[1];
			fVec10[1] = fVec10[0];
			for (int j2 = 6; j2 > 0; j2 = j2 - 1) {
				fVec11[j2] = fVec11[j2 - 1];
			}
			for (int j3 = 14; j3 > 0; j3 = j3 - 1) {
				fVec12[j3] = fVec12[j3 - 1];
			}
			fVec20[1] = fVec20[0];
			fRec32[1] = fRec32[0];
			fRec31[1] = fRec31[0];
			fVec21[1] = fVec21[0];
			fRec30[1] = fRec30[0];
			fRec29[1] = fRec29[0];
			fVec22[1] = fVec22[0];
			fVec23[2] = fVec23[1];
			fVec23[1] = fVec23[0];
			for (int j4 = 6; j4 > 0; j4 = j4 - 1) {
				fVec24[j4] = fVec24[j4 - 1];
			}
			for (int j5 = 14; j5 > 0; j5 = j5 - 1) {
				fVec25[j5] = fVec25[j5 - 1];
			}
			fRec19[1] = fRec19[0];
			fRec20[1] = fRec20[0];
			fRec17[1] = fRec17[0];
			fRec16[1] = fRec16[0];
			fRec14[2] = fRec14[1];
			fRec14[1] = fRec14[0];
			fRec40[1] = fRec40[0];
			fVec33[1] = fVec33[0];
			fVec34[1] = fVec34[0];
			fRec39[1] = fRec39[0];
			fRec38[1] = fRec38[0];
			fVec35[1] = fVec35[0];
			fRec37[1] = fRec37[0];
			fRec36[1] = fRec36[0];
			fVec36[1] = fVec36[0];
			fVec37[2] = fVec37[1];
			fVec37[1] = fVec37[0];
			for (int j6 = 6; j6 > 0; j6 = j6 - 1) {
				fVec38[j6] = fVec38[j6 - 1];
			}
			for (int j7 = 14; j7 > 0; j7 = j7 - 1) {
				fVec39[j7] = fVec39[j7 - 1];
			}
			fVec53[1] = fVec53[0];
			fRec44[1] = fRec44[0];
			fRec43[1] = fRec43[0];
			fVec54[1] = fVec54[0];
			fRec42[1] = fRec42[0];
			fRec41[1] = fRec41[0];
			fVec55[1] = fVec55[0];
			fVec56[2] = fVec56[1];
			fVec56[1] = fVec56[0];
			for (int j8 = 6; j8 > 0; j8 = j8 - 1) {
				fVec57[j8] = fVec57[j8 - 1];
			}
			for (int j9 = 14; j9 > 0; j9 = j9 - 1) {
				fVec58[j9] = fVec58[j9 - 1];
			}
			fVec72[1] = fVec72[0];
			fRec35[1] = fRec35[0];
			fRec34[1] = fRec34[0];
			fRec45[1] = fRec45[0];
			fVec73[1] = fVec73[0];
			fRec33[1] = fRec33[0];
			fRec46[1] = fRec46[0];
			fRec15[2] = fRec15[1];
			fRec15[1] = fRec15[0];
			fRec4[2] = fRec4[1];
			fRec4[1] = fRec4[0];
			fRec3[2] = fRec3[1];
			fRec3[1] = fRec3[0];
			fRec2[2] = fRec2[1];
			fRec2[1] = fRec2[0];
			fVec74[1] = fVec74[0];
			fRec1[1] = fRec1[0];
			fRec50[2] = fRec50[1];
			fRec50[1] = fRec50[0];
			fRec49[2] = fRec49[1];
			fRec49[1] = fRec49[0];
			fRec48[2] = fRec48[1];
			fRec48[1] = fRec48[0];
			fVec75[1] = fVec75[0];
			fRec47[1] = fRec47[0];
			fVec76[2] = fVec76[1];
			fVec76[1] = fVec76[0];
			for (int j10 = 6; j10 > 0; j10 = j10 - 1) {
				fVec77[j10] = fVec77[j10 - 1];
			}
			for (int j11 = 14; j11 > 0; j11 = j11 - 1) {
				fVec78[j11] = fVec78[j11 - 1];
			}
			fRec51[1] = fRec51[0];
			fVec87[2] = fVec87[1];
			fVec87[1] = fVec87[0];
			for (int j12 = 6; j12 > 0; j12 = j12 - 1) {
				fVec88[j12] = fVec88[j12 - 1];
			}
			for (int j13 = 14; j13 > 0; j13 = j13 - 1) {
				fVec89[j13] = fVec89[j13 - 1];
			}
			fRec52[1] = fRec52[0];
			fRec62[2] = fRec62[1];
			fRec62[1] = fRec62[0];
			fRec61[2] = fRec61[1];
			fRec61[1] = fRec61[0];
			fRec60[2] = fRec60[1];
			fRec60[1] = fRec60[0];
			fRec59[2] = fRec59[1];
			fRec59[1] = fRec59[0];
			fRec58[2] = fRec58[1];
			fRec58[1] = fRec58[0];
			fVec98[1] = fVec98[0];
			fRec57[1] = fRec57[0];
			fRec68[2] = fRec68[1];
			fRec68[1] = fRec68[0];
			fRec67[2] = fRec67[1];
			fRec67[1] = fRec67[0];
			fRec66[2] = fRec66[1];
			fRec66[1] = fRec66[0];
			fRec65[2] = fRec65[1];
			fRec65[1] = fRec65[0];
			fRec64[2] = fRec64[1];
			fRec64[1] = fRec64[0];
			fVec99[1] = fVec99[0];
			fRec63[1] = fRec63[0];
			fVec100[2] = fVec100[1];
			fVec100[1] = fVec100[0];
			for (int j14 = 6; j14 > 0; j14 = j14 - 1) {
				fVec101[j14] = fVec101[j14 - 1];
			}
			for (int j15 = 14; j15 > 0; j15 = j15 - 1) {
				fVec102[j15] = fVec102[j15 - 1];
			}
			fRec69[1] = fRec69[0];
			fVec111[2] = fVec111[1];
			fVec111[1] = fVec111[0];
			for (int j16 = 6; j16 > 0; j16 = j16 - 1) {
				fVec112[j16] = fVec112[j16 - 1];
			}
			for (int j17 = 14; j17 > 0; j17 = j17 - 1) {
				fVec113[j17] = fVec113[j17 - 1];
			}
			fRec70[1] = fRec70[0];
			fRec84[2] = fRec84[1];
			fRec84[1] = fRec84[0];
			fRec83[2] = fRec83[1];
			fRec83[1] = fRec83[0];
			fRec82[2] = fRec82[1];
			fRec82[1] = fRec82[0];
			fRec81[2] = fRec81[1];
			fRec81[1] = fRec81[0];
			fRec80[2] = fRec80[1];
			fRec80[1] = fRec80[0];
			fVec122[1] = fVec122[0];
			fRec79[1] = fRec79[0];
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
			fVec123[1] = fVec123[0];
			fRec85[1] = fRec85[0];
			fVec124[2] = fVec124[1];
			fVec124[1] = fVec124[0];
			for (int j18 = 6; j18 > 0; j18 = j18 - 1) {
				fVec125[j18] = fVec125[j18 - 1];
			}
			for (int j19 = 14; j19 > 0; j19 = j19 - 1) {
				fVec126[j19] = fVec126[j19 - 1];
			}
			fRec91[1] = fRec91[0];
			fVec135[2] = fVec135[1];
			fVec135[1] = fVec135[0];
			for (int j20 = 6; j20 > 0; j20 = j20 - 1) {
				fVec136[j20] = fVec136[j20 - 1];
			}
			for (int j21 = 14; j21 > 0; j21 = j21 - 1) {
				fVec137[j21] = fVec137[j21 - 1];
			}
			fRec92[1] = fRec92[0];
			fRec106[2] = fRec106[1];
			fRec106[1] = fRec106[0];
			fRec105[2] = fRec105[1];
			fRec105[1] = fRec105[0];
			fRec104[2] = fRec104[1];
			fRec104[1] = fRec104[0];
			fRec103[2] = fRec103[1];
			fRec103[1] = fRec103[0];
			fRec102[2] = fRec102[1];
			fRec102[1] = fRec102[0];
			fVec146[1] = fVec146[0];
			fRec101[1] = fRec101[0];
			fRec112[2] = fRec112[1];
			fRec112[1] = fRec112[0];
			fRec111[2] = fRec111[1];
			fRec111[1] = fRec111[0];
			fRec110[2] = fRec110[1];
			fRec110[1] = fRec110[0];
			fRec109[2] = fRec109[1];
			fRec109[1] = fRec109[0];
			fRec108[2] = fRec108[1];
			fRec108[1] = fRec108[0];
			fVec147[1] = fVec147[0];
			fRec107[1] = fRec107[0];
			fVec148[2] = fVec148[1];
			fVec148[1] = fVec148[0];
			for (int j22 = 6; j22 > 0; j22 = j22 - 1) {
				fVec149[j22] = fVec149[j22 - 1];
			}
			for (int j23 = 14; j23 > 0; j23 = j23 - 1) {
				fVec150[j23] = fVec150[j23 - 1];
			}
			fRec113[1] = fRec113[0];
			fVec159[2] = fVec159[1];
			fVec159[1] = fVec159[0];
			for (int j24 = 6; j24 > 0; j24 = j24 - 1) {
				fVec160[j24] = fVec160[j24 - 1];
			}
			for (int j25 = 14; j25 > 0; j25 = j25 - 1) {
				fVec161[j25] = fVec161[j25 - 1];
			}
			fRec114[1] = fRec114[0];
			fRec125[2] = fRec125[1];
			fRec125[1] = fRec125[0];
			fRec124[2] = fRec124[1];
			fRec124[1] = fRec124[0];
			fVec170[1] = fVec170[0];
			fRec123[1] = fRec123[0];
			fRec128[2] = fRec128[1];
			fRec128[1] = fRec128[0];
			fRec127[2] = fRec127[1];
			fRec127[1] = fRec127[0];
			fVec171[1] = fVec171[0];
			fRec126[1] = fRec126[0];
			fVec172[2] = fVec172[1];
			fVec172[1] = fVec172[0];
			for (int j26 = 6; j26 > 0; j26 = j26 - 1) {
				fVec173[j26] = fVec173[j26 - 1];
			}
			for (int j27 = 14; j27 > 0; j27 = j27 - 1) {
				fVec174[j27] = fVec174[j27 - 1];
			}
			fRec129[1] = fRec129[0];
			fVec183[2] = fVec183[1];
			fVec183[1] = fVec183[0];
			for (int j28 = 6; j28 > 0; j28 = j28 - 1) {
				fVec184[j28] = fVec184[j28 - 1];
			}
			for (int j29 = 14; j29 > 0; j29 = j29 - 1) {
				fVec185[j29] = fVec185[j29 - 1];
			}
			fRec130[1] = fRec130[0];
			fRec131[1] = fRec131[0];
			fRec132[1] = fRec132[0];
			fRec119[1] = fRec119[0];
			fRec120[1] = fRec120[0];
			fRec115[1] = fRec115[0];
			fRec116[1] = fRec116[0];
			fRec97[1] = fRec97[0];
			fRec98[1] = fRec98[0];
			fRec93[1] = fRec93[0];
			fRec94[1] = fRec94[0];
			fRec75[1] = fRec75[0];
			fRec76[1] = fRec76[0];
			fRec71[1] = fRec71[0];
			fRec72[1] = fRec72[0];
			fRec53[1] = fRec53[0];
			fRec54[1] = fRec54[0];
			fRec135[1] = fRec135[0];
			fVec194[1] = fVec194[0];
			fVec195[2] = fVec195[1];
			fVec195[1] = fVec195[0];
			for (int j30 = 6; j30 > 0; j30 = j30 - 1) {
				fVec196[j30] = fVec196[j30 - 1];
			}
			for (int j31 = 14; j31 > 0; j31 = j31 - 1) {
				fVec197[j31] = fVec197[j31 - 1];
			}
			fRec146[1] = fRec146[0];
			fVec199[1] = fVec199[0];
			fRec150[1] = fRec150[0];
			fRec149[1] = fRec149[0];
			fVec200[1] = fVec200[0];
			fRec148[1] = fRec148[0];
			fRec147[1] = fRec147[0];
			fVec201[1] = fVec201[0];
			fVec202[2] = fVec202[1];
			fVec202[1] = fVec202[0];
			for (int j32 = 6; j32 > 0; j32 = j32 - 1) {
				fVec203[j32] = fVec203[j32 - 1];
			}
			for (int j33 = 14; j33 > 0; j33 = j33 - 1) {
				fVec204[j33] = fVec204[j33 - 1];
			}
			fVec212[1] = fVec212[0];
			fRec154[1] = fRec154[0];
			fRec153[1] = fRec153[0];
			fVec213[1] = fVec213[0];
			fRec152[1] = fRec152[0];
			fRec151[1] = fRec151[0];
			fVec214[1] = fVec214[0];
			fVec215[2] = fVec215[1];
			fVec215[1] = fVec215[0];
			for (int j34 = 6; j34 > 0; j34 = j34 - 1) {
				fVec216[j34] = fVec216[j34 - 1];
			}
			for (int j35 = 14; j35 > 0; j35 = j35 - 1) {
				fVec217[j35] = fVec217[j35 - 1];
			}
			fRec141[1] = fRec141[0];
			fRec142[1] = fRec142[0];
			fRec139[1] = fRec139[0];
			fRec138[1] = fRec138[0];
			fRec136[2] = fRec136[1];
			fRec136[1] = fRec136[0];
			fRec183[1] = fRec183[0];
			fRec184[1] = fRec184[0];
			fRec179[1] = fRec179[0];
			fRec180[1] = fRec180[0];
			fRec175[1] = fRec175[0];
			fRec176[1] = fRec176[0];
			fRec171[1] = fRec171[0];
			fRec172[1] = fRec172[0];
			fRec167[1] = fRec167[0];
			fRec168[1] = fRec168[0];
			fRec163[1] = fRec163[0];
			fRec164[1] = fRec164[0];
			fRec159[1] = fRec159[0];
			fRec160[1] = fRec160[0];
			fRec155[1] = fRec155[0];
			fRec156[1] = fRec156[0];
			fRec137[2] = fRec137[1];
			fRec137[1] = fRec137[0];
			iRec189[1] = iRec189[0];
			fRec190[1] = fRec190[0];
			fRec188[1] = fRec188[0];
			fRec187[1] = fRec187[0];
			fRec191[1] = fRec191[0];
			fVec227[1] = fVec227[0];
			fRec0[1] = fRec0[0];
			fVec228[1] = fVec228[0];
			fVec229[1] = fVec229[0];
			fRec196[1] = fRec196[0];
			fRec195[1] = fRec195[0];
			fVec230[1] = fVec230[0];
			fRec194[1] = fRec194[0];
			fRec193[1] = fRec193[0];
			fVec231[1] = fVec231[0];
			fVec232[2] = fVec232[1];
			fVec232[1] = fVec232[0];
			for (int j36 = 6; j36 > 0; j36 = j36 - 1) {
				fVec233[j36] = fVec233[j36 - 1];
			}
			for (int j37 = 14; j37 > 0; j37 = j37 - 1) {
				fVec234[j37] = fVec234[j37 - 1];
			}
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
        dsp->fVbargraph2 = 0;
        dsp->fVbargraph3 = 0;
        dsp->fVbargraph1 = 0;
        dsp->fVbargraph8 = 0;
        dsp->fVbargraph7 = 0;
        dsp->fVbargraph6 = 0;
        dsp->fVbargraph5 = 0;
        dsp->fVbargraph4 = 0;
        dsp->fVbargraph9 = 0;
        dsp->fVbargraph10 = 0;
        dsp->fVbargraph12 = 0;
        dsp->fVbargraph11 = 0;
        dsp->fVbargraph13 = 0;
        
    }

    /*
    void printCurrentValues()
    {
        d_stdout("==== preset data start ===");
        printf("%.12g,", dsp->fCheckbox0);
        printf("%.12g,", dsp->fCheckbox1);
        printf("%.12g,", dsp->fCheckbox2);
        printf("%.12g,", dsp->fCheckbox3);
        printf("%.12g,", dsp->fVslider3);
        printf("%.12g,", dsp->fVslider1);
        printf("%.12g,", dsp->fVslider0);
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
            return dsp->fCheckbox0;
        case kParameter_bypass_leveler:
            return dsp->fCheckbox1;
        case kParameter_bypass_style:
            return dsp->fCheckbox2;
        case kParameter_bypass_global:
            return dsp->fCheckbox3;
        case kParameter_input_gain:
            return dsp->fVslider3;
        case kParameter_leveler_target:
            return dsp->fVslider1;
        case kParameter_style:
            return dsp->fVslider0;
        case kParameter_timbre:
            return dsp->fVslider2;
        case kParameter_latency_global:
            return dsp->fHbargraph0;
        case kParameter_input_peak_channel_0:
            return dsp->fVbargraph0;
        case kParameter_input_peak_channel_1:
            return dsp->fVbargraph2;
        case kParameter_lufs_in_meter:
            return dsp->fVbargraph3;
        case kParameter_leveler_gain1:
            return dsp->fVbargraph1;
        case kParameter_multiband_compressor_gain_band_1:
            return dsp->fVbargraph8;
        case kParameter_multiband_compressor_gain_band_2:
            return dsp->fVbargraph7;
        case kParameter_multiband_compressor_gain_band_3:
            return dsp->fVbargraph6;
        case kParameter_multiband_compressor_gain_band_4:
            return dsp->fVbargraph5;
        case kParameter_multiband_compressor_gain_band_5:
            return dsp->fVbargraph4;
        case kParameter_leveler_gain2:
            return dsp->fVbargraph9;
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
            dsp->fCheckbox0 = value;
            break;
        case kParameter_bypass_leveler:
            dsp->fCheckbox1 = value;
            break;
        case kParameter_bypass_style:
            dsp->fCheckbox2 = value;
            break;
        case kParameter_bypass_global:
            dsp->fCheckbox3 = value;
            break;
        case kParameter_input_gain:
            dsp->fVslider3 = value;
            break;
        case kParameter_leveler_target:
            dsp->fVslider1 = value;
            break;
        case kParameter_style:
            dsp->fVslider0 = value;
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
            dsp->fCheckbox0,
            dsp->fCheckbox1,
            dsp->fCheckbox2,
            dsp->fCheckbox3,
            dsp->fVslider3,
            dsp->fVslider1,
            dsp->fVslider0,
            dsp->fVslider2,
            
        };

        // tell dsp to change sample rate
        dsp->init(newSampleRate);

        // set parameters back, which have been reset in the dsp
        dsp->fCheckbox0 = params[0];
        dsp->fCheckbox1 = params[1];
        dsp->fCheckbox2 = params[2];
        dsp->fCheckbox3 = params[3];
        dsp->fVslider3 = params[4];
        dsp->fVslider1 = params[5];
        dsp->fVslider0 = params[6];
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