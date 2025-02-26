
//------------------------------------------------------------------------------
// This file was generated using the Faust compiler (https://faust.grame.fr),
// and the Faust post-processor (https://github.com/jpcima/faustpp).
//
// Source: PodcastPluginMaster.dsp
// Name: PodcastPlugins MASTER
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
	int iConst110;
	float fVec53[262144];
	int iConst111;
	int iConst112;
	float fVec54[524288];
	int iConst113;
	int iConst114;
	float fVec55[1048576];
	int iConst115;
	float fVec56[2];
	float fRec44[2];
	float fRec43[2];
	float fVec57[2];
	float fRec42[2];
	float fRec41[2];
	float fVec58[2];
	float fVec59[3];
	float fVec60[7];
	float fVec61[15];
	float fVec62[32];
	float fVec63[64];
	float fVec64[128];
	float fVec65[256];
	float fVec66[512];
	float fVec67[1024];
	float fVec68[2048];
	float fVec69[4096];
	float fVec70[8192];
	float fVec71[16384];
	float fVec72[32768];
	float fVec73[65536];
	float fVec74[131072];
	float fVec75[262144];
	float fVec76[524288];
	float fVec77[1048576];
	float fConst116;
	FAUSTFLOAT fVbargraph3;
	float fVec78[2];
	float fRec35[2];
	float fRec34[2];
	float fRec45[2];
	float fVec79[2];
	float fRec33[2];
	float fRec46[2];
	float fRec15[3];
	float fRec4[3];
	float fConst117;
	float fRec3[3];
	float fRec2[3];
	float fVec80[2];
	float fConst118;
	float fRec1[2];
	float fRec50[3];
	float fRec49[3];
	float fRec48[3];
	float fVec81[2];
	float fRec47[2];
	int iConst119;
	int iConst120;
	float fVec82[3];
	int iConst121;
	float fVec83[7];
	int iConst122;
	int iConst123;
	float fVec84[15];
	int iConst124;
	int iConst125;
	float fVec85[32];
	int iConst126;
	int iConst127;
	float fVec86[64];
	int iConst128;
	int iConst129;
	float fVec87[128];
	int iConst130;
	int iConst131;
	float fVec88[256];
	int iConst132;
	int iConst133;
	float fVec89[512];
	int iConst134;
	int iConst135;
	float fVec90[1024];
	int iConst136;
	int iConst137;
	float fVec91[2048];
	int iConst138;
	int iConst139;
	float fVec92[4096];
	int iConst140;
	float fRec51[2];
	float fVec93[3];
	float fVec94[7];
	float fVec95[15];
	float fVec96[32];
	float fVec97[64];
	float fVec98[128];
	float fVec99[256];
	float fVec100[512];
	float fVec101[1024];
	float fVec102[2048];
	float fVec103[4096];
	float fRec52[2];
	FAUSTFLOAT fVbargraph4;
	float fConst141;
	float fConst143;
	float fConst144;
	float fConst146;
	float fConst147;
	float fConst148;
	float fConst149;
	float fConst150;
	float fConst151;
	float fRec62[3];
	float fRec61[3];
	float fRec60[3];
	float fConst152;
	float fRec59[3];
	float fRec58[3];
	float fVec104[2];
	float fRec57[2];
	float fRec68[3];
	float fRec67[3];
	float fRec66[3];
	float fRec65[3];
	float fRec64[3];
	float fVec105[2];
	float fRec63[2];
	float fVec106[3];
	float fVec107[7];
	float fVec108[15];
	float fVec109[32];
	float fVec110[64];
	float fVec111[128];
	float fVec112[256];
	float fVec113[512];
	float fVec114[1024];
	float fVec115[2048];
	float fVec116[4096];
	float fRec69[2];
	float fVec117[3];
	float fVec118[7];
	float fVec119[15];
	float fVec120[32];
	float fVec121[64];
	float fVec122[128];
	float fVec123[256];
	float fVec124[512];
	float fVec125[1024];
	float fVec126[2048];
	float fVec127[4096];
	float fRec70[2];
	FAUSTFLOAT fVbargraph5;
	float fConst153;
	float fConst155;
	float fConst156;
	float fConst158;
	float fConst159;
	float fConst160;
	float fConst161;
	float fConst162;
	float fConst163;
	float fRec84[3];
	float fRec83[3];
	float fRec82[3];
	float fConst164;
	float fRec81[3];
	float fRec80[3];
	float fVec128[2];
	float fRec79[2];
	float fRec90[3];
	float fRec89[3];
	float fRec88[3];
	float fRec87[3];
	float fRec86[3];
	float fVec129[2];
	float fRec85[2];
	float fVec130[3];
	float fVec131[7];
	float fVec132[15];
	float fVec133[32];
	float fVec134[64];
	float fVec135[128];
	float fVec136[256];
	float fVec137[512];
	float fVec138[1024];
	float fVec139[2048];
	float fVec140[4096];
	float fRec91[2];
	float fVec141[3];
	float fVec142[7];
	float fVec143[15];
	float fVec144[32];
	float fVec145[64];
	float fVec146[128];
	float fVec147[256];
	float fVec148[512];
	float fVec149[1024];
	float fVec150[2048];
	float fVec151[4096];
	float fRec92[2];
	FAUSTFLOAT fVbargraph6;
	float fConst165;
	float fConst167;
	float fConst168;
	float fConst170;
	float fConst171;
	float fConst172;
	float fConst173;
	float fConst174;
	float fConst175;
	float fRec106[3];
	float fRec105[3];
	float fRec104[3];
	float fConst176;
	float fRec103[3];
	float fRec102[3];
	float fVec152[2];
	float fRec101[2];
	float fRec112[3];
	float fRec111[3];
	float fRec110[3];
	float fRec109[3];
	float fRec108[3];
	float fVec153[2];
	float fRec107[2];
	float fVec154[3];
	float fVec155[7];
	float fVec156[15];
	float fVec157[32];
	float fVec158[64];
	float fVec159[128];
	float fVec160[256];
	float fVec161[512];
	float fVec162[1024];
	float fVec163[2048];
	float fVec164[4096];
	float fRec113[2];
	float fVec165[3];
	float fVec166[7];
	float fVec167[15];
	float fVec168[32];
	float fVec169[64];
	float fVec170[128];
	float fVec171[256];
	float fVec172[512];
	float fVec173[1024];
	float fVec174[2048];
	float fVec175[4096];
	float fRec114[2];
	FAUSTFLOAT fVbargraph7;
	float fRec125[3];
	float fRec124[3];
	float fVec176[2];
	float fRec123[2];
	float fRec128[3];
	float fRec127[3];
	float fVec177[2];
	float fRec126[2];
	float fVec178[3];
	float fVec179[7];
	float fVec180[15];
	float fVec181[32];
	float fVec182[64];
	float fVec183[128];
	float fVec184[256];
	float fVec185[512];
	float fVec186[1024];
	float fVec187[2048];
	float fVec188[4096];
	float fRec129[2];
	float fVec189[3];
	float fVec190[7];
	float fVec191[15];
	float fVec192[32];
	float fVec193[64];
	float fVec194[128];
	float fVec195[256];
	float fVec196[512];
	float fVec197[1024];
	float fVec198[2048];
	float fVec199[4096];
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
	float fVec200[2];
	float fVec201[3];
	float fVec202[7];
	float fVec203[15];
	float fVec204[32];
	float fRec146[2];
	float fVec205[2];
	float fRec150[2];
	float fRec149[2];
	float fVec206[2];
	float fRec148[2];
	float fRec147[2];
	float fVec207[2];
	float fVec208[3];
	float fVec209[7];
	float fVec210[15];
	float fVec211[32];
	float fVec212[64];
	float fVec213[128];
	float fVec214[256];
	float fVec215[512];
	float fVec216[1024];
	float fVec217[2048];
	float fVec218[2];
	float fRec154[2];
	float fRec153[2];
	float fVec219[2];
	float fRec152[2];
	float fRec151[2];
	float fVec220[2];
	float fVec221[3];
	float fVec222[7];
	float fVec223[15];
	float fVec224[32];
	float fVec225[64];
	float fVec226[128];
	float fVec227[256];
	float fVec228[512];
	float fVec229[1024];
	float fVec230[2048];
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
	float fVec231[2048];
	FAUSTFLOAT fHbargraph0;
	int iConst177;
	float fConst178;
	float fConst179;
	float fVec232[2048];
	int iRec189[2];
	float fRec190[2];
	float fConst180;
	float fRec188[2];
	float fConst181;
	float fConst182;
	float fRec187[2];
	FAUSTFLOAT fVbargraph10;
	FAUSTFLOAT fCheckbox3;
	float fRec191[2];
	float fVec233[2];
	float fRec0[2];
	FAUSTFLOAT fVbargraph11;
	float fVec234[2];
	float fVec235[2];
	float fRec196[2];
	float fRec195[2];
	float fVec236[2];
	float fRec194[2];
	float fRec193[2];
	float fVec237[2];
	float fVec238[3];
	float fVec239[7];
	float fVec240[15];
	float fVec241[32];
	float fVec242[64];
	float fVec243[128];
	float fVec244[256];
	float fVec245[512];
	float fVec246[1024];
	float fVec247[2048];
	float fVec248[4096];
	float fVec249[8192];
	float fVec250[16384];
	float fVec251[32768];
	float fVec252[65536];
	float fVec253[131072];
	float fVec254[262144];
	float fVec255[524288];
	float fVec256[1048576];
	float fVec257[2];
	float fRec200[2];
	float fRec199[2];
	float fVec258[2];
	float fRec198[2];
	float fRec197[2];
	float fVec259[2];
	float fVec260[3];
	float fVec261[7];
	float fVec262[15];
	float fVec263[32];
	float fVec264[64];
	float fVec265[128];
	float fVec266[256];
	float fVec267[512];
	float fVec268[1024];
	float fVec269[2048];
	float fVec270[4096];
	float fVec271[8192];
	float fVec272[16384];
	float fVec273[32768];
	float fVec274[65536];
	float fVec275[131072];
	float fVec276[262144];
	float fVec277[524288];
	float fVec278[1048576];
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
		m->declare("compile_options", "-a /tmp/tmpmjylr20a.cpp -lang cpp -es 1 -mcd 16 -single -ftz 0");
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
		m->declare("name", "PodcastPlugins MASTER");
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
		float fConst77 = std::rint(3.0f * fConst0);
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
		iConst110 = int(std::floor(7.6293945e-06f * fConst77)) % 2;
		iConst111 = iConst109 + 65536 * iConst108;
		iConst112 = int(std::floor(3.8146973e-06f * fConst77)) % 2;
		iConst113 = iConst111 + 131072 * iConst110;
		iConst114 = int(std::floor(1.9073486e-06f * fConst77)) % 2;
		iConst115 = iConst113 + 262144 * iConst112;
		fConst116 = 1.0f / std::max<float>(fConst77, 1.1920929e-07f);
		fConst117 = 0.0f - 2.0f / fConst3;
		fConst118 = 1.0f / fConst0;
		iConst119 = int(std::floor(fConst36)) % 2;
		iConst120 = int(std::floor(0.005f * fConst0)) % 2;
		iConst121 = int(std::floor(0.0025f * fConst0)) % 2;
		iConst122 = iConst119 + 2 * iConst120;
		iConst123 = int(std::floor(0.00125f * fConst0)) % 2;
		iConst124 = iConst122 + 4 * iConst121;
		iConst125 = int(std::floor(0.000625f * fConst0)) % 2;
		iConst126 = iConst124 + 8 * iConst123;
		iConst127 = int(std::floor(0.0003125f * fConst0)) % 2;
		iConst128 = iConst126 + 16 * iConst125;
		iConst129 = int(std::floor(0.00015625f * fConst0)) % 2;
		iConst130 = iConst128 + 32 * iConst127;
		iConst131 = int(std::floor(7.8125e-05f * fConst0)) % 2;
		iConst132 = iConst130 + 64 * iConst129;
		iConst133 = int(std::floor(3.90625e-05f * fConst0)) % 2;
		iConst134 = iConst132 + 128 * iConst131;
		iConst135 = int(std::floor(1.953125e-05f * fConst0)) % 2;
		iConst136 = iConst134 + 256 * iConst133;
		iConst137 = int(std::floor(9.765625e-06f * fConst0)) % 2;
		iConst138 = iConst136 + 512 * iConst135;
		iConst139 = int(std::floor(4.8828124e-06f * fConst0)) % 2;
		iConst140 = iConst138 + 1024 * iConst137;
		fConst141 = std::tan(5335.9927f / fConst0);
		float fConst142 = mydsp_faustpower2_f(fConst141);
		fConst143 = 1.0f / fConst142;
		fConst144 = 2.0f * (1.0f - fConst143);
		float fConst145 = 1.0f / fConst141;
		fConst146 = (fConst145 + -0.5176381f) / fConst141 + 1.0f;
		fConst147 = 1.0f / ((fConst145 + 0.5176381f) / fConst141 + 1.0f);
		fConst148 = (fConst145 + -1.4142135f) / fConst141 + 1.0f;
		fConst149 = 1.0f / ((fConst145 + 1.4142135f) / fConst141 + 1.0f);
		fConst150 = (fConst145 + -1.9318516f) / fConst141 + 1.0f;
		fConst151 = 1.0f / ((fConst145 + 1.9318516f) / fConst141 + 1.0f);
		fConst152 = 0.0f - 2.0f / fConst142;
		fConst153 = std::tan(1294.74f / fConst0);
		float fConst154 = mydsp_faustpower2_f(fConst153);
		fConst155 = 1.0f / fConst154;
		fConst156 = 2.0f * (1.0f - fConst155);
		float fConst157 = 1.0f / fConst153;
		fConst158 = (fConst157 + -0.5176381f) / fConst153 + 1.0f;
		fConst159 = 1.0f / ((fConst157 + 0.5176381f) / fConst153 + 1.0f);
		fConst160 = (fConst157 + -1.4142135f) / fConst153 + 1.0f;
		fConst161 = 1.0f / ((fConst157 + 1.4142135f) / fConst153 + 1.0f);
		fConst162 = (fConst157 + -1.9318516f) / fConst153 + 1.0f;
		fConst163 = 1.0f / ((fConst157 + 1.9318516f) / fConst153 + 1.0f);
		fConst164 = 0.0f - 2.0f / fConst154;
		fConst165 = std::tan(314.15927f / fConst0);
		float fConst166 = mydsp_faustpower2_f(fConst165);
		fConst167 = 1.0f / fConst166;
		fConst168 = 2.0f * (1.0f - fConst167);
		float fConst169 = 1.0f / fConst165;
		fConst170 = (fConst169 + -0.5176381f) / fConst165 + 1.0f;
		fConst171 = 1.0f / ((fConst169 + 0.5176381f) / fConst165 + 1.0f);
		fConst172 = (fConst169 + -1.4142135f) / fConst165 + 1.0f;
		fConst173 = 1.0f / ((fConst169 + 1.4142135f) / fConst165 + 1.0f);
		fConst174 = (fConst169 + -1.9318516f) / fConst165 + 1.0f;
		fConst175 = 1.0f / ((fConst169 + 1.9318516f) / fConst165 + 1.0f);
		fConst176 = 0.0f - 2.0f / fConst166;
		iConst177 = int(0.01f * fConst0);
		fConst178 = std::exp(0.0f - 628.31854f / fConst0);
		fConst179 = 0.1f * fConst0;
		fConst180 = 1.0f - fConst178;
		fConst181 = std::exp(0.0f - 6.2831855f / fConst0);
		fConst182 = 1.0f - fConst181;
	}
	
	FAUSTPP_VIRTUAL void instanceResetUserInterface() {
		fVslider0 = FAUSTFLOAT(0.0f);
		fVslider1 = FAUSTFLOAT(-16.0f);
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
		for (int l81 = 0; l81 < 262144; l81 = l81 + 1) {
			fVec53[l81] = 0.0f;
		}
		for (int l82 = 0; l82 < 524288; l82 = l82 + 1) {
			fVec54[l82] = 0.0f;
		}
		for (int l83 = 0; l83 < 1048576; l83 = l83 + 1) {
			fVec55[l83] = 0.0f;
		}
		for (int l84 = 0; l84 < 2; l84 = l84 + 1) {
			fVec56[l84] = 0.0f;
		}
		for (int l85 = 0; l85 < 2; l85 = l85 + 1) {
			fRec44[l85] = 0.0f;
		}
		for (int l86 = 0; l86 < 2; l86 = l86 + 1) {
			fRec43[l86] = 0.0f;
		}
		for (int l87 = 0; l87 < 2; l87 = l87 + 1) {
			fVec57[l87] = 0.0f;
		}
		for (int l88 = 0; l88 < 2; l88 = l88 + 1) {
			fRec42[l88] = 0.0f;
		}
		for (int l89 = 0; l89 < 2; l89 = l89 + 1) {
			fRec41[l89] = 0.0f;
		}
		for (int l90 = 0; l90 < 2; l90 = l90 + 1) {
			fVec58[l90] = 0.0f;
		}
		for (int l91 = 0; l91 < 3; l91 = l91 + 1) {
			fVec59[l91] = 0.0f;
		}
		for (int l92 = 0; l92 < 7; l92 = l92 + 1) {
			fVec60[l92] = 0.0f;
		}
		for (int l93 = 0; l93 < 15; l93 = l93 + 1) {
			fVec61[l93] = 0.0f;
		}
		for (int l94 = 0; l94 < 32; l94 = l94 + 1) {
			fVec62[l94] = 0.0f;
		}
		for (int l95 = 0; l95 < 64; l95 = l95 + 1) {
			fVec63[l95] = 0.0f;
		}
		for (int l96 = 0; l96 < 128; l96 = l96 + 1) {
			fVec64[l96] = 0.0f;
		}
		for (int l97 = 0; l97 < 256; l97 = l97 + 1) {
			fVec65[l97] = 0.0f;
		}
		for (int l98 = 0; l98 < 512; l98 = l98 + 1) {
			fVec66[l98] = 0.0f;
		}
		for (int l99 = 0; l99 < 1024; l99 = l99 + 1) {
			fVec67[l99] = 0.0f;
		}
		for (int l100 = 0; l100 < 2048; l100 = l100 + 1) {
			fVec68[l100] = 0.0f;
		}
		for (int l101 = 0; l101 < 4096; l101 = l101 + 1) {
			fVec69[l101] = 0.0f;
		}
		for (int l102 = 0; l102 < 8192; l102 = l102 + 1) {
			fVec70[l102] = 0.0f;
		}
		for (int l103 = 0; l103 < 16384; l103 = l103 + 1) {
			fVec71[l103] = 0.0f;
		}
		for (int l104 = 0; l104 < 32768; l104 = l104 + 1) {
			fVec72[l104] = 0.0f;
		}
		for (int l105 = 0; l105 < 65536; l105 = l105 + 1) {
			fVec73[l105] = 0.0f;
		}
		for (int l106 = 0; l106 < 131072; l106 = l106 + 1) {
			fVec74[l106] = 0.0f;
		}
		for (int l107 = 0; l107 < 262144; l107 = l107 + 1) {
			fVec75[l107] = 0.0f;
		}
		for (int l108 = 0; l108 < 524288; l108 = l108 + 1) {
			fVec76[l108] = 0.0f;
		}
		for (int l109 = 0; l109 < 1048576; l109 = l109 + 1) {
			fVec77[l109] = 0.0f;
		}
		for (int l110 = 0; l110 < 2; l110 = l110 + 1) {
			fVec78[l110] = 0.0f;
		}
		for (int l111 = 0; l111 < 2; l111 = l111 + 1) {
			fRec35[l111] = 0.0f;
		}
		for (int l112 = 0; l112 < 2; l112 = l112 + 1) {
			fRec34[l112] = 0.0f;
		}
		for (int l113 = 0; l113 < 2; l113 = l113 + 1) {
			fRec45[l113] = 0.0f;
		}
		for (int l114 = 0; l114 < 2; l114 = l114 + 1) {
			fVec79[l114] = 0.0f;
		}
		for (int l115 = 0; l115 < 2; l115 = l115 + 1) {
			fRec33[l115] = 0.0f;
		}
		for (int l116 = 0; l116 < 2; l116 = l116 + 1) {
			fRec46[l116] = 0.0f;
		}
		for (int l117 = 0; l117 < 3; l117 = l117 + 1) {
			fRec15[l117] = 0.0f;
		}
		for (int l118 = 0; l118 < 3; l118 = l118 + 1) {
			fRec4[l118] = 0.0f;
		}
		for (int l119 = 0; l119 < 3; l119 = l119 + 1) {
			fRec3[l119] = 0.0f;
		}
		for (int l120 = 0; l120 < 3; l120 = l120 + 1) {
			fRec2[l120] = 0.0f;
		}
		for (int l121 = 0; l121 < 2; l121 = l121 + 1) {
			fVec80[l121] = 0.0f;
		}
		for (int l122 = 0; l122 < 2; l122 = l122 + 1) {
			fRec1[l122] = 0.0f;
		}
		for (int l123 = 0; l123 < 3; l123 = l123 + 1) {
			fRec50[l123] = 0.0f;
		}
		for (int l124 = 0; l124 < 3; l124 = l124 + 1) {
			fRec49[l124] = 0.0f;
		}
		for (int l125 = 0; l125 < 3; l125 = l125 + 1) {
			fRec48[l125] = 0.0f;
		}
		for (int l126 = 0; l126 < 2; l126 = l126 + 1) {
			fVec81[l126] = 0.0f;
		}
		for (int l127 = 0; l127 < 2; l127 = l127 + 1) {
			fRec47[l127] = 0.0f;
		}
		for (int l128 = 0; l128 < 3; l128 = l128 + 1) {
			fVec82[l128] = 0.0f;
		}
		for (int l129 = 0; l129 < 7; l129 = l129 + 1) {
			fVec83[l129] = 0.0f;
		}
		for (int l130 = 0; l130 < 15; l130 = l130 + 1) {
			fVec84[l130] = 0.0f;
		}
		for (int l131 = 0; l131 < 32; l131 = l131 + 1) {
			fVec85[l131] = 0.0f;
		}
		for (int l132 = 0; l132 < 64; l132 = l132 + 1) {
			fVec86[l132] = 0.0f;
		}
		for (int l133 = 0; l133 < 128; l133 = l133 + 1) {
			fVec87[l133] = 0.0f;
		}
		for (int l134 = 0; l134 < 256; l134 = l134 + 1) {
			fVec88[l134] = 0.0f;
		}
		for (int l135 = 0; l135 < 512; l135 = l135 + 1) {
			fVec89[l135] = 0.0f;
		}
		for (int l136 = 0; l136 < 1024; l136 = l136 + 1) {
			fVec90[l136] = 0.0f;
		}
		for (int l137 = 0; l137 < 2048; l137 = l137 + 1) {
			fVec91[l137] = 0.0f;
		}
		for (int l138 = 0; l138 < 4096; l138 = l138 + 1) {
			fVec92[l138] = 0.0f;
		}
		for (int l139 = 0; l139 < 2; l139 = l139 + 1) {
			fRec51[l139] = 0.0f;
		}
		for (int l140 = 0; l140 < 3; l140 = l140 + 1) {
			fVec93[l140] = 0.0f;
		}
		for (int l141 = 0; l141 < 7; l141 = l141 + 1) {
			fVec94[l141] = 0.0f;
		}
		for (int l142 = 0; l142 < 15; l142 = l142 + 1) {
			fVec95[l142] = 0.0f;
		}
		for (int l143 = 0; l143 < 32; l143 = l143 + 1) {
			fVec96[l143] = 0.0f;
		}
		for (int l144 = 0; l144 < 64; l144 = l144 + 1) {
			fVec97[l144] = 0.0f;
		}
		for (int l145 = 0; l145 < 128; l145 = l145 + 1) {
			fVec98[l145] = 0.0f;
		}
		for (int l146 = 0; l146 < 256; l146 = l146 + 1) {
			fVec99[l146] = 0.0f;
		}
		for (int l147 = 0; l147 < 512; l147 = l147 + 1) {
			fVec100[l147] = 0.0f;
		}
		for (int l148 = 0; l148 < 1024; l148 = l148 + 1) {
			fVec101[l148] = 0.0f;
		}
		for (int l149 = 0; l149 < 2048; l149 = l149 + 1) {
			fVec102[l149] = 0.0f;
		}
		for (int l150 = 0; l150 < 4096; l150 = l150 + 1) {
			fVec103[l150] = 0.0f;
		}
		for (int l151 = 0; l151 < 2; l151 = l151 + 1) {
			fRec52[l151] = 0.0f;
		}
		for (int l152 = 0; l152 < 3; l152 = l152 + 1) {
			fRec62[l152] = 0.0f;
		}
		for (int l153 = 0; l153 < 3; l153 = l153 + 1) {
			fRec61[l153] = 0.0f;
		}
		for (int l154 = 0; l154 < 3; l154 = l154 + 1) {
			fRec60[l154] = 0.0f;
		}
		for (int l155 = 0; l155 < 3; l155 = l155 + 1) {
			fRec59[l155] = 0.0f;
		}
		for (int l156 = 0; l156 < 3; l156 = l156 + 1) {
			fRec58[l156] = 0.0f;
		}
		for (int l157 = 0; l157 < 2; l157 = l157 + 1) {
			fVec104[l157] = 0.0f;
		}
		for (int l158 = 0; l158 < 2; l158 = l158 + 1) {
			fRec57[l158] = 0.0f;
		}
		for (int l159 = 0; l159 < 3; l159 = l159 + 1) {
			fRec68[l159] = 0.0f;
		}
		for (int l160 = 0; l160 < 3; l160 = l160 + 1) {
			fRec67[l160] = 0.0f;
		}
		for (int l161 = 0; l161 < 3; l161 = l161 + 1) {
			fRec66[l161] = 0.0f;
		}
		for (int l162 = 0; l162 < 3; l162 = l162 + 1) {
			fRec65[l162] = 0.0f;
		}
		for (int l163 = 0; l163 < 3; l163 = l163 + 1) {
			fRec64[l163] = 0.0f;
		}
		for (int l164 = 0; l164 < 2; l164 = l164 + 1) {
			fVec105[l164] = 0.0f;
		}
		for (int l165 = 0; l165 < 2; l165 = l165 + 1) {
			fRec63[l165] = 0.0f;
		}
		for (int l166 = 0; l166 < 3; l166 = l166 + 1) {
			fVec106[l166] = 0.0f;
		}
		for (int l167 = 0; l167 < 7; l167 = l167 + 1) {
			fVec107[l167] = 0.0f;
		}
		for (int l168 = 0; l168 < 15; l168 = l168 + 1) {
			fVec108[l168] = 0.0f;
		}
		for (int l169 = 0; l169 < 32; l169 = l169 + 1) {
			fVec109[l169] = 0.0f;
		}
		for (int l170 = 0; l170 < 64; l170 = l170 + 1) {
			fVec110[l170] = 0.0f;
		}
		for (int l171 = 0; l171 < 128; l171 = l171 + 1) {
			fVec111[l171] = 0.0f;
		}
		for (int l172 = 0; l172 < 256; l172 = l172 + 1) {
			fVec112[l172] = 0.0f;
		}
		for (int l173 = 0; l173 < 512; l173 = l173 + 1) {
			fVec113[l173] = 0.0f;
		}
		for (int l174 = 0; l174 < 1024; l174 = l174 + 1) {
			fVec114[l174] = 0.0f;
		}
		for (int l175 = 0; l175 < 2048; l175 = l175 + 1) {
			fVec115[l175] = 0.0f;
		}
		for (int l176 = 0; l176 < 4096; l176 = l176 + 1) {
			fVec116[l176] = 0.0f;
		}
		for (int l177 = 0; l177 < 2; l177 = l177 + 1) {
			fRec69[l177] = 0.0f;
		}
		for (int l178 = 0; l178 < 3; l178 = l178 + 1) {
			fVec117[l178] = 0.0f;
		}
		for (int l179 = 0; l179 < 7; l179 = l179 + 1) {
			fVec118[l179] = 0.0f;
		}
		for (int l180 = 0; l180 < 15; l180 = l180 + 1) {
			fVec119[l180] = 0.0f;
		}
		for (int l181 = 0; l181 < 32; l181 = l181 + 1) {
			fVec120[l181] = 0.0f;
		}
		for (int l182 = 0; l182 < 64; l182 = l182 + 1) {
			fVec121[l182] = 0.0f;
		}
		for (int l183 = 0; l183 < 128; l183 = l183 + 1) {
			fVec122[l183] = 0.0f;
		}
		for (int l184 = 0; l184 < 256; l184 = l184 + 1) {
			fVec123[l184] = 0.0f;
		}
		for (int l185 = 0; l185 < 512; l185 = l185 + 1) {
			fVec124[l185] = 0.0f;
		}
		for (int l186 = 0; l186 < 1024; l186 = l186 + 1) {
			fVec125[l186] = 0.0f;
		}
		for (int l187 = 0; l187 < 2048; l187 = l187 + 1) {
			fVec126[l187] = 0.0f;
		}
		for (int l188 = 0; l188 < 4096; l188 = l188 + 1) {
			fVec127[l188] = 0.0f;
		}
		for (int l189 = 0; l189 < 2; l189 = l189 + 1) {
			fRec70[l189] = 0.0f;
		}
		for (int l190 = 0; l190 < 3; l190 = l190 + 1) {
			fRec84[l190] = 0.0f;
		}
		for (int l191 = 0; l191 < 3; l191 = l191 + 1) {
			fRec83[l191] = 0.0f;
		}
		for (int l192 = 0; l192 < 3; l192 = l192 + 1) {
			fRec82[l192] = 0.0f;
		}
		for (int l193 = 0; l193 < 3; l193 = l193 + 1) {
			fRec81[l193] = 0.0f;
		}
		for (int l194 = 0; l194 < 3; l194 = l194 + 1) {
			fRec80[l194] = 0.0f;
		}
		for (int l195 = 0; l195 < 2; l195 = l195 + 1) {
			fVec128[l195] = 0.0f;
		}
		for (int l196 = 0; l196 < 2; l196 = l196 + 1) {
			fRec79[l196] = 0.0f;
		}
		for (int l197 = 0; l197 < 3; l197 = l197 + 1) {
			fRec90[l197] = 0.0f;
		}
		for (int l198 = 0; l198 < 3; l198 = l198 + 1) {
			fRec89[l198] = 0.0f;
		}
		for (int l199 = 0; l199 < 3; l199 = l199 + 1) {
			fRec88[l199] = 0.0f;
		}
		for (int l200 = 0; l200 < 3; l200 = l200 + 1) {
			fRec87[l200] = 0.0f;
		}
		for (int l201 = 0; l201 < 3; l201 = l201 + 1) {
			fRec86[l201] = 0.0f;
		}
		for (int l202 = 0; l202 < 2; l202 = l202 + 1) {
			fVec129[l202] = 0.0f;
		}
		for (int l203 = 0; l203 < 2; l203 = l203 + 1) {
			fRec85[l203] = 0.0f;
		}
		for (int l204 = 0; l204 < 3; l204 = l204 + 1) {
			fVec130[l204] = 0.0f;
		}
		for (int l205 = 0; l205 < 7; l205 = l205 + 1) {
			fVec131[l205] = 0.0f;
		}
		for (int l206 = 0; l206 < 15; l206 = l206 + 1) {
			fVec132[l206] = 0.0f;
		}
		for (int l207 = 0; l207 < 32; l207 = l207 + 1) {
			fVec133[l207] = 0.0f;
		}
		for (int l208 = 0; l208 < 64; l208 = l208 + 1) {
			fVec134[l208] = 0.0f;
		}
		for (int l209 = 0; l209 < 128; l209 = l209 + 1) {
			fVec135[l209] = 0.0f;
		}
		for (int l210 = 0; l210 < 256; l210 = l210 + 1) {
			fVec136[l210] = 0.0f;
		}
		for (int l211 = 0; l211 < 512; l211 = l211 + 1) {
			fVec137[l211] = 0.0f;
		}
		for (int l212 = 0; l212 < 1024; l212 = l212 + 1) {
			fVec138[l212] = 0.0f;
		}
		for (int l213 = 0; l213 < 2048; l213 = l213 + 1) {
			fVec139[l213] = 0.0f;
		}
		for (int l214 = 0; l214 < 4096; l214 = l214 + 1) {
			fVec140[l214] = 0.0f;
		}
		for (int l215 = 0; l215 < 2; l215 = l215 + 1) {
			fRec91[l215] = 0.0f;
		}
		for (int l216 = 0; l216 < 3; l216 = l216 + 1) {
			fVec141[l216] = 0.0f;
		}
		for (int l217 = 0; l217 < 7; l217 = l217 + 1) {
			fVec142[l217] = 0.0f;
		}
		for (int l218 = 0; l218 < 15; l218 = l218 + 1) {
			fVec143[l218] = 0.0f;
		}
		for (int l219 = 0; l219 < 32; l219 = l219 + 1) {
			fVec144[l219] = 0.0f;
		}
		for (int l220 = 0; l220 < 64; l220 = l220 + 1) {
			fVec145[l220] = 0.0f;
		}
		for (int l221 = 0; l221 < 128; l221 = l221 + 1) {
			fVec146[l221] = 0.0f;
		}
		for (int l222 = 0; l222 < 256; l222 = l222 + 1) {
			fVec147[l222] = 0.0f;
		}
		for (int l223 = 0; l223 < 512; l223 = l223 + 1) {
			fVec148[l223] = 0.0f;
		}
		for (int l224 = 0; l224 < 1024; l224 = l224 + 1) {
			fVec149[l224] = 0.0f;
		}
		for (int l225 = 0; l225 < 2048; l225 = l225 + 1) {
			fVec150[l225] = 0.0f;
		}
		for (int l226 = 0; l226 < 4096; l226 = l226 + 1) {
			fVec151[l226] = 0.0f;
		}
		for (int l227 = 0; l227 < 2; l227 = l227 + 1) {
			fRec92[l227] = 0.0f;
		}
		for (int l228 = 0; l228 < 3; l228 = l228 + 1) {
			fRec106[l228] = 0.0f;
		}
		for (int l229 = 0; l229 < 3; l229 = l229 + 1) {
			fRec105[l229] = 0.0f;
		}
		for (int l230 = 0; l230 < 3; l230 = l230 + 1) {
			fRec104[l230] = 0.0f;
		}
		for (int l231 = 0; l231 < 3; l231 = l231 + 1) {
			fRec103[l231] = 0.0f;
		}
		for (int l232 = 0; l232 < 3; l232 = l232 + 1) {
			fRec102[l232] = 0.0f;
		}
		for (int l233 = 0; l233 < 2; l233 = l233 + 1) {
			fVec152[l233] = 0.0f;
		}
		for (int l234 = 0; l234 < 2; l234 = l234 + 1) {
			fRec101[l234] = 0.0f;
		}
		for (int l235 = 0; l235 < 3; l235 = l235 + 1) {
			fRec112[l235] = 0.0f;
		}
		for (int l236 = 0; l236 < 3; l236 = l236 + 1) {
			fRec111[l236] = 0.0f;
		}
		for (int l237 = 0; l237 < 3; l237 = l237 + 1) {
			fRec110[l237] = 0.0f;
		}
		for (int l238 = 0; l238 < 3; l238 = l238 + 1) {
			fRec109[l238] = 0.0f;
		}
		for (int l239 = 0; l239 < 3; l239 = l239 + 1) {
			fRec108[l239] = 0.0f;
		}
		for (int l240 = 0; l240 < 2; l240 = l240 + 1) {
			fVec153[l240] = 0.0f;
		}
		for (int l241 = 0; l241 < 2; l241 = l241 + 1) {
			fRec107[l241] = 0.0f;
		}
		for (int l242 = 0; l242 < 3; l242 = l242 + 1) {
			fVec154[l242] = 0.0f;
		}
		for (int l243 = 0; l243 < 7; l243 = l243 + 1) {
			fVec155[l243] = 0.0f;
		}
		for (int l244 = 0; l244 < 15; l244 = l244 + 1) {
			fVec156[l244] = 0.0f;
		}
		for (int l245 = 0; l245 < 32; l245 = l245 + 1) {
			fVec157[l245] = 0.0f;
		}
		for (int l246 = 0; l246 < 64; l246 = l246 + 1) {
			fVec158[l246] = 0.0f;
		}
		for (int l247 = 0; l247 < 128; l247 = l247 + 1) {
			fVec159[l247] = 0.0f;
		}
		for (int l248 = 0; l248 < 256; l248 = l248 + 1) {
			fVec160[l248] = 0.0f;
		}
		for (int l249 = 0; l249 < 512; l249 = l249 + 1) {
			fVec161[l249] = 0.0f;
		}
		for (int l250 = 0; l250 < 1024; l250 = l250 + 1) {
			fVec162[l250] = 0.0f;
		}
		for (int l251 = 0; l251 < 2048; l251 = l251 + 1) {
			fVec163[l251] = 0.0f;
		}
		for (int l252 = 0; l252 < 4096; l252 = l252 + 1) {
			fVec164[l252] = 0.0f;
		}
		for (int l253 = 0; l253 < 2; l253 = l253 + 1) {
			fRec113[l253] = 0.0f;
		}
		for (int l254 = 0; l254 < 3; l254 = l254 + 1) {
			fVec165[l254] = 0.0f;
		}
		for (int l255 = 0; l255 < 7; l255 = l255 + 1) {
			fVec166[l255] = 0.0f;
		}
		for (int l256 = 0; l256 < 15; l256 = l256 + 1) {
			fVec167[l256] = 0.0f;
		}
		for (int l257 = 0; l257 < 32; l257 = l257 + 1) {
			fVec168[l257] = 0.0f;
		}
		for (int l258 = 0; l258 < 64; l258 = l258 + 1) {
			fVec169[l258] = 0.0f;
		}
		for (int l259 = 0; l259 < 128; l259 = l259 + 1) {
			fVec170[l259] = 0.0f;
		}
		for (int l260 = 0; l260 < 256; l260 = l260 + 1) {
			fVec171[l260] = 0.0f;
		}
		for (int l261 = 0; l261 < 512; l261 = l261 + 1) {
			fVec172[l261] = 0.0f;
		}
		for (int l262 = 0; l262 < 1024; l262 = l262 + 1) {
			fVec173[l262] = 0.0f;
		}
		for (int l263 = 0; l263 < 2048; l263 = l263 + 1) {
			fVec174[l263] = 0.0f;
		}
		for (int l264 = 0; l264 < 4096; l264 = l264 + 1) {
			fVec175[l264] = 0.0f;
		}
		for (int l265 = 0; l265 < 2; l265 = l265 + 1) {
			fRec114[l265] = 0.0f;
		}
		for (int l266 = 0; l266 < 3; l266 = l266 + 1) {
			fRec125[l266] = 0.0f;
		}
		for (int l267 = 0; l267 < 3; l267 = l267 + 1) {
			fRec124[l267] = 0.0f;
		}
		for (int l268 = 0; l268 < 2; l268 = l268 + 1) {
			fVec176[l268] = 0.0f;
		}
		for (int l269 = 0; l269 < 2; l269 = l269 + 1) {
			fRec123[l269] = 0.0f;
		}
		for (int l270 = 0; l270 < 3; l270 = l270 + 1) {
			fRec128[l270] = 0.0f;
		}
		for (int l271 = 0; l271 < 3; l271 = l271 + 1) {
			fRec127[l271] = 0.0f;
		}
		for (int l272 = 0; l272 < 2; l272 = l272 + 1) {
			fVec177[l272] = 0.0f;
		}
		for (int l273 = 0; l273 < 2; l273 = l273 + 1) {
			fRec126[l273] = 0.0f;
		}
		for (int l274 = 0; l274 < 3; l274 = l274 + 1) {
			fVec178[l274] = 0.0f;
		}
		for (int l275 = 0; l275 < 7; l275 = l275 + 1) {
			fVec179[l275] = 0.0f;
		}
		for (int l276 = 0; l276 < 15; l276 = l276 + 1) {
			fVec180[l276] = 0.0f;
		}
		for (int l277 = 0; l277 < 32; l277 = l277 + 1) {
			fVec181[l277] = 0.0f;
		}
		for (int l278 = 0; l278 < 64; l278 = l278 + 1) {
			fVec182[l278] = 0.0f;
		}
		for (int l279 = 0; l279 < 128; l279 = l279 + 1) {
			fVec183[l279] = 0.0f;
		}
		for (int l280 = 0; l280 < 256; l280 = l280 + 1) {
			fVec184[l280] = 0.0f;
		}
		for (int l281 = 0; l281 < 512; l281 = l281 + 1) {
			fVec185[l281] = 0.0f;
		}
		for (int l282 = 0; l282 < 1024; l282 = l282 + 1) {
			fVec186[l282] = 0.0f;
		}
		for (int l283 = 0; l283 < 2048; l283 = l283 + 1) {
			fVec187[l283] = 0.0f;
		}
		for (int l284 = 0; l284 < 4096; l284 = l284 + 1) {
			fVec188[l284] = 0.0f;
		}
		for (int l285 = 0; l285 < 2; l285 = l285 + 1) {
			fRec129[l285] = 0.0f;
		}
		for (int l286 = 0; l286 < 3; l286 = l286 + 1) {
			fVec189[l286] = 0.0f;
		}
		for (int l287 = 0; l287 < 7; l287 = l287 + 1) {
			fVec190[l287] = 0.0f;
		}
		for (int l288 = 0; l288 < 15; l288 = l288 + 1) {
			fVec191[l288] = 0.0f;
		}
		for (int l289 = 0; l289 < 32; l289 = l289 + 1) {
			fVec192[l289] = 0.0f;
		}
		for (int l290 = 0; l290 < 64; l290 = l290 + 1) {
			fVec193[l290] = 0.0f;
		}
		for (int l291 = 0; l291 < 128; l291 = l291 + 1) {
			fVec194[l291] = 0.0f;
		}
		for (int l292 = 0; l292 < 256; l292 = l292 + 1) {
			fVec195[l292] = 0.0f;
		}
		for (int l293 = 0; l293 < 512; l293 = l293 + 1) {
			fVec196[l293] = 0.0f;
		}
		for (int l294 = 0; l294 < 1024; l294 = l294 + 1) {
			fVec197[l294] = 0.0f;
		}
		for (int l295 = 0; l295 < 2048; l295 = l295 + 1) {
			fVec198[l295] = 0.0f;
		}
		for (int l296 = 0; l296 < 4096; l296 = l296 + 1) {
			fVec199[l296] = 0.0f;
		}
		for (int l297 = 0; l297 < 2; l297 = l297 + 1) {
			fRec130[l297] = 0.0f;
		}
		for (int l298 = 0; l298 < 2; l298 = l298 + 1) {
			fRec131[l298] = 0.0f;
		}
		for (int l299 = 0; l299 < 2; l299 = l299 + 1) {
			fRec132[l299] = 0.0f;
		}
		for (int l300 = 0; l300 < 2; l300 = l300 + 1) {
			fRec119[l300] = 0.0f;
		}
		for (int l301 = 0; l301 < 2; l301 = l301 + 1) {
			fRec120[l301] = 0.0f;
		}
		for (int l302 = 0; l302 < 2; l302 = l302 + 1) {
			fRec115[l302] = 0.0f;
		}
		for (int l303 = 0; l303 < 2; l303 = l303 + 1) {
			fRec116[l303] = 0.0f;
		}
		for (int l304 = 0; l304 < 2; l304 = l304 + 1) {
			fRec97[l304] = 0.0f;
		}
		for (int l305 = 0; l305 < 2; l305 = l305 + 1) {
			fRec98[l305] = 0.0f;
		}
		for (int l306 = 0; l306 < 2; l306 = l306 + 1) {
			fRec93[l306] = 0.0f;
		}
		for (int l307 = 0; l307 < 2; l307 = l307 + 1) {
			fRec94[l307] = 0.0f;
		}
		for (int l308 = 0; l308 < 2; l308 = l308 + 1) {
			fRec75[l308] = 0.0f;
		}
		for (int l309 = 0; l309 < 2; l309 = l309 + 1) {
			fRec76[l309] = 0.0f;
		}
		for (int l310 = 0; l310 < 2; l310 = l310 + 1) {
			fRec71[l310] = 0.0f;
		}
		for (int l311 = 0; l311 < 2; l311 = l311 + 1) {
			fRec72[l311] = 0.0f;
		}
		for (int l312 = 0; l312 < 2; l312 = l312 + 1) {
			fRec53[l312] = 0.0f;
		}
		for (int l313 = 0; l313 < 2; l313 = l313 + 1) {
			fRec54[l313] = 0.0f;
		}
		for (int l314 = 0; l314 < 2; l314 = l314 + 1) {
			fRec135[l314] = 0.0f;
		}
		for (int l315 = 0; l315 < 2; l315 = l315 + 1) {
			fVec200[l315] = 0.0f;
		}
		for (int l316 = 0; l316 < 3; l316 = l316 + 1) {
			fVec201[l316] = 0.0f;
		}
		for (int l317 = 0; l317 < 7; l317 = l317 + 1) {
			fVec202[l317] = 0.0f;
		}
		for (int l318 = 0; l318 < 15; l318 = l318 + 1) {
			fVec203[l318] = 0.0f;
		}
		for (int l319 = 0; l319 < 32; l319 = l319 + 1) {
			fVec204[l319] = 0.0f;
		}
		for (int l320 = 0; l320 < 2; l320 = l320 + 1) {
			fRec146[l320] = 0.0f;
		}
		for (int l321 = 0; l321 < 2; l321 = l321 + 1) {
			fVec205[l321] = 0.0f;
		}
		for (int l322 = 0; l322 < 2; l322 = l322 + 1) {
			fRec150[l322] = 0.0f;
		}
		for (int l323 = 0; l323 < 2; l323 = l323 + 1) {
			fRec149[l323] = 0.0f;
		}
		for (int l324 = 0; l324 < 2; l324 = l324 + 1) {
			fVec206[l324] = 0.0f;
		}
		for (int l325 = 0; l325 < 2; l325 = l325 + 1) {
			fRec148[l325] = 0.0f;
		}
		for (int l326 = 0; l326 < 2; l326 = l326 + 1) {
			fRec147[l326] = 0.0f;
		}
		for (int l327 = 0; l327 < 2; l327 = l327 + 1) {
			fVec207[l327] = 0.0f;
		}
		for (int l328 = 0; l328 < 3; l328 = l328 + 1) {
			fVec208[l328] = 0.0f;
		}
		for (int l329 = 0; l329 < 7; l329 = l329 + 1) {
			fVec209[l329] = 0.0f;
		}
		for (int l330 = 0; l330 < 15; l330 = l330 + 1) {
			fVec210[l330] = 0.0f;
		}
		for (int l331 = 0; l331 < 32; l331 = l331 + 1) {
			fVec211[l331] = 0.0f;
		}
		for (int l332 = 0; l332 < 64; l332 = l332 + 1) {
			fVec212[l332] = 0.0f;
		}
		for (int l333 = 0; l333 < 128; l333 = l333 + 1) {
			fVec213[l333] = 0.0f;
		}
		for (int l334 = 0; l334 < 256; l334 = l334 + 1) {
			fVec214[l334] = 0.0f;
		}
		for (int l335 = 0; l335 < 512; l335 = l335 + 1) {
			fVec215[l335] = 0.0f;
		}
		for (int l336 = 0; l336 < 1024; l336 = l336 + 1) {
			fVec216[l336] = 0.0f;
		}
		for (int l337 = 0; l337 < 2048; l337 = l337 + 1) {
			fVec217[l337] = 0.0f;
		}
		for (int l338 = 0; l338 < 2; l338 = l338 + 1) {
			fVec218[l338] = 0.0f;
		}
		for (int l339 = 0; l339 < 2; l339 = l339 + 1) {
			fRec154[l339] = 0.0f;
		}
		for (int l340 = 0; l340 < 2; l340 = l340 + 1) {
			fRec153[l340] = 0.0f;
		}
		for (int l341 = 0; l341 < 2; l341 = l341 + 1) {
			fVec219[l341] = 0.0f;
		}
		for (int l342 = 0; l342 < 2; l342 = l342 + 1) {
			fRec152[l342] = 0.0f;
		}
		for (int l343 = 0; l343 < 2; l343 = l343 + 1) {
			fRec151[l343] = 0.0f;
		}
		for (int l344 = 0; l344 < 2; l344 = l344 + 1) {
			fVec220[l344] = 0.0f;
		}
		for (int l345 = 0; l345 < 3; l345 = l345 + 1) {
			fVec221[l345] = 0.0f;
		}
		for (int l346 = 0; l346 < 7; l346 = l346 + 1) {
			fVec222[l346] = 0.0f;
		}
		for (int l347 = 0; l347 < 15; l347 = l347 + 1) {
			fVec223[l347] = 0.0f;
		}
		for (int l348 = 0; l348 < 32; l348 = l348 + 1) {
			fVec224[l348] = 0.0f;
		}
		for (int l349 = 0; l349 < 64; l349 = l349 + 1) {
			fVec225[l349] = 0.0f;
		}
		for (int l350 = 0; l350 < 128; l350 = l350 + 1) {
			fVec226[l350] = 0.0f;
		}
		for (int l351 = 0; l351 < 256; l351 = l351 + 1) {
			fVec227[l351] = 0.0f;
		}
		for (int l352 = 0; l352 < 512; l352 = l352 + 1) {
			fVec228[l352] = 0.0f;
		}
		for (int l353 = 0; l353 < 1024; l353 = l353 + 1) {
			fVec229[l353] = 0.0f;
		}
		for (int l354 = 0; l354 < 2048; l354 = l354 + 1) {
			fVec230[l354] = 0.0f;
		}
		for (int l355 = 0; l355 < 2; l355 = l355 + 1) {
			fRec141[l355] = 0.0f;
		}
		for (int l356 = 0; l356 < 2; l356 = l356 + 1) {
			fRec142[l356] = 0.0f;
		}
		for (int l357 = 0; l357 < 2; l357 = l357 + 1) {
			fRec139[l357] = 0.0f;
		}
		for (int l358 = 0; l358 < 2; l358 = l358 + 1) {
			fRec138[l358] = 0.0f;
		}
		for (int l359 = 0; l359 < 3; l359 = l359 + 1) {
			fRec136[l359] = 0.0f;
		}
		for (int l360 = 0; l360 < 2; l360 = l360 + 1) {
			fRec183[l360] = 0.0f;
		}
		for (int l361 = 0; l361 < 2; l361 = l361 + 1) {
			fRec184[l361] = 0.0f;
		}
		for (int l362 = 0; l362 < 2; l362 = l362 + 1) {
			fRec179[l362] = 0.0f;
		}
		for (int l363 = 0; l363 < 2; l363 = l363 + 1) {
			fRec180[l363] = 0.0f;
		}
		for (int l364 = 0; l364 < 2; l364 = l364 + 1) {
			fRec175[l364] = 0.0f;
		}
		for (int l365 = 0; l365 < 2; l365 = l365 + 1) {
			fRec176[l365] = 0.0f;
		}
		for (int l366 = 0; l366 < 2; l366 = l366 + 1) {
			fRec171[l366] = 0.0f;
		}
		for (int l367 = 0; l367 < 2; l367 = l367 + 1) {
			fRec172[l367] = 0.0f;
		}
		for (int l368 = 0; l368 < 2; l368 = l368 + 1) {
			fRec167[l368] = 0.0f;
		}
		for (int l369 = 0; l369 < 2; l369 = l369 + 1) {
			fRec168[l369] = 0.0f;
		}
		for (int l370 = 0; l370 < 2; l370 = l370 + 1) {
			fRec163[l370] = 0.0f;
		}
		for (int l371 = 0; l371 < 2; l371 = l371 + 1) {
			fRec164[l371] = 0.0f;
		}
		for (int l372 = 0; l372 < 2; l372 = l372 + 1) {
			fRec159[l372] = 0.0f;
		}
		for (int l373 = 0; l373 < 2; l373 = l373 + 1) {
			fRec160[l373] = 0.0f;
		}
		for (int l374 = 0; l374 < 2; l374 = l374 + 1) {
			fRec155[l374] = 0.0f;
		}
		for (int l375 = 0; l375 < 2; l375 = l375 + 1) {
			fRec156[l375] = 0.0f;
		}
		for (int l376 = 0; l376 < 3; l376 = l376 + 1) {
			fRec137[l376] = 0.0f;
		}
		for (int l377 = 0; l377 < 2048; l377 = l377 + 1) {
			fVec231[l377] = 0.0f;
		}
		for (int l378 = 0; l378 < 2048; l378 = l378 + 1) {
			fVec232[l378] = 0.0f;
		}
		for (int l379 = 0; l379 < 2; l379 = l379 + 1) {
			iRec189[l379] = 0;
		}
		for (int l380 = 0; l380 < 2; l380 = l380 + 1) {
			fRec190[l380] = 0.0f;
		}
		for (int l381 = 0; l381 < 2; l381 = l381 + 1) {
			fRec188[l381] = 0.0f;
		}
		for (int l382 = 0; l382 < 2; l382 = l382 + 1) {
			fRec187[l382] = 0.0f;
		}
		for (int l383 = 0; l383 < 2; l383 = l383 + 1) {
			fRec191[l383] = 0.0f;
		}
		for (int l384 = 0; l384 < 2; l384 = l384 + 1) {
			fVec233[l384] = 0.0f;
		}
		for (int l385 = 0; l385 < 2; l385 = l385 + 1) {
			fRec0[l385] = 0.0f;
		}
		for (int l386 = 0; l386 < 2; l386 = l386 + 1) {
			fVec234[l386] = 0.0f;
		}
		for (int l387 = 0; l387 < 2; l387 = l387 + 1) {
			fVec235[l387] = 0.0f;
		}
		for (int l388 = 0; l388 < 2; l388 = l388 + 1) {
			fRec196[l388] = 0.0f;
		}
		for (int l389 = 0; l389 < 2; l389 = l389 + 1) {
			fRec195[l389] = 0.0f;
		}
		for (int l390 = 0; l390 < 2; l390 = l390 + 1) {
			fVec236[l390] = 0.0f;
		}
		for (int l391 = 0; l391 < 2; l391 = l391 + 1) {
			fRec194[l391] = 0.0f;
		}
		for (int l392 = 0; l392 < 2; l392 = l392 + 1) {
			fRec193[l392] = 0.0f;
		}
		for (int l393 = 0; l393 < 2; l393 = l393 + 1) {
			fVec237[l393] = 0.0f;
		}
		for (int l394 = 0; l394 < 3; l394 = l394 + 1) {
			fVec238[l394] = 0.0f;
		}
		for (int l395 = 0; l395 < 7; l395 = l395 + 1) {
			fVec239[l395] = 0.0f;
		}
		for (int l396 = 0; l396 < 15; l396 = l396 + 1) {
			fVec240[l396] = 0.0f;
		}
		for (int l397 = 0; l397 < 32; l397 = l397 + 1) {
			fVec241[l397] = 0.0f;
		}
		for (int l398 = 0; l398 < 64; l398 = l398 + 1) {
			fVec242[l398] = 0.0f;
		}
		for (int l399 = 0; l399 < 128; l399 = l399 + 1) {
			fVec243[l399] = 0.0f;
		}
		for (int l400 = 0; l400 < 256; l400 = l400 + 1) {
			fVec244[l400] = 0.0f;
		}
		for (int l401 = 0; l401 < 512; l401 = l401 + 1) {
			fVec245[l401] = 0.0f;
		}
		for (int l402 = 0; l402 < 1024; l402 = l402 + 1) {
			fVec246[l402] = 0.0f;
		}
		for (int l403 = 0; l403 < 2048; l403 = l403 + 1) {
			fVec247[l403] = 0.0f;
		}
		for (int l404 = 0; l404 < 4096; l404 = l404 + 1) {
			fVec248[l404] = 0.0f;
		}
		for (int l405 = 0; l405 < 8192; l405 = l405 + 1) {
			fVec249[l405] = 0.0f;
		}
		for (int l406 = 0; l406 < 16384; l406 = l406 + 1) {
			fVec250[l406] = 0.0f;
		}
		for (int l407 = 0; l407 < 32768; l407 = l407 + 1) {
			fVec251[l407] = 0.0f;
		}
		for (int l408 = 0; l408 < 65536; l408 = l408 + 1) {
			fVec252[l408] = 0.0f;
		}
		for (int l409 = 0; l409 < 131072; l409 = l409 + 1) {
			fVec253[l409] = 0.0f;
		}
		for (int l410 = 0; l410 < 262144; l410 = l410 + 1) {
			fVec254[l410] = 0.0f;
		}
		for (int l411 = 0; l411 < 524288; l411 = l411 + 1) {
			fVec255[l411] = 0.0f;
		}
		for (int l412 = 0; l412 < 1048576; l412 = l412 + 1) {
			fVec256[l412] = 0.0f;
		}
		for (int l413 = 0; l413 < 2; l413 = l413 + 1) {
			fVec257[l413] = 0.0f;
		}
		for (int l414 = 0; l414 < 2; l414 = l414 + 1) {
			fRec200[l414] = 0.0f;
		}
		for (int l415 = 0; l415 < 2; l415 = l415 + 1) {
			fRec199[l415] = 0.0f;
		}
		for (int l416 = 0; l416 < 2; l416 = l416 + 1) {
			fVec258[l416] = 0.0f;
		}
		for (int l417 = 0; l417 < 2; l417 = l417 + 1) {
			fRec198[l417] = 0.0f;
		}
		for (int l418 = 0; l418 < 2; l418 = l418 + 1) {
			fRec197[l418] = 0.0f;
		}
		for (int l419 = 0; l419 < 2; l419 = l419 + 1) {
			fVec259[l419] = 0.0f;
		}
		for (int l420 = 0; l420 < 3; l420 = l420 + 1) {
			fVec260[l420] = 0.0f;
		}
		for (int l421 = 0; l421 < 7; l421 = l421 + 1) {
			fVec261[l421] = 0.0f;
		}
		for (int l422 = 0; l422 < 15; l422 = l422 + 1) {
			fVec262[l422] = 0.0f;
		}
		for (int l423 = 0; l423 < 32; l423 = l423 + 1) {
			fVec263[l423] = 0.0f;
		}
		for (int l424 = 0; l424 < 64; l424 = l424 + 1) {
			fVec264[l424] = 0.0f;
		}
		for (int l425 = 0; l425 < 128; l425 = l425 + 1) {
			fVec265[l425] = 0.0f;
		}
		for (int l426 = 0; l426 < 256; l426 = l426 + 1) {
			fVec266[l426] = 0.0f;
		}
		for (int l427 = 0; l427 < 512; l427 = l427 + 1) {
			fVec267[l427] = 0.0f;
		}
		for (int l428 = 0; l428 < 1024; l428 = l428 + 1) {
			fVec268[l428] = 0.0f;
		}
		for (int l429 = 0; l429 < 2048; l429 = l429 + 1) {
			fVec269[l429] = 0.0f;
		}
		for (int l430 = 0; l430 < 4096; l430 = l430 + 1) {
			fVec270[l430] = 0.0f;
		}
		for (int l431 = 0; l431 < 8192; l431 = l431 + 1) {
			fVec271[l431] = 0.0f;
		}
		for (int l432 = 0; l432 < 16384; l432 = l432 + 1) {
			fVec272[l432] = 0.0f;
		}
		for (int l433 = 0; l433 < 32768; l433 = l433 + 1) {
			fVec273[l433] = 0.0f;
		}
		for (int l434 = 0; l434 < 65536; l434 = l434 + 1) {
			fVec274[l434] = 0.0f;
		}
		for (int l435 = 0; l435 < 131072; l435 = l435 + 1) {
			fVec275[l435] = 0.0f;
		}
		for (int l436 = 0; l436 < 262144; l436 = l436 + 1) {
			fVec276[l436] = 0.0f;
		}
		for (int l437 = 0; l437 < 524288; l437 = l437 + 1) {
			fVec277[l437] = 0.0f;
		}
		for (int l438 = 0; l438 < 1048576; l438 = l438 + 1) {
			fVec278[l438] = 0.0f;
		}
		for (int l439 = 0; l439 < 2; l439 = l439 + 1) {
			fRec192[l439] = 0.0f;
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
		ui_interface->addVerticalBargraph("lufs IN", &fVbargraph3, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
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
		ui_interface->addVerticalSlider("target", &fVslider1, FAUSTFLOAT(-16.0f), FAUSTFLOAT(-26.0f), FAUSTFLOAT(-6.0f), FAUSTFLOAT(1.0f));
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
		ui_interface->addVerticalBargraph("LimiterGR", &fVbargraph10, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph12, "symbol", "lufs_out_meter");
		ui_interface->declare(&fVbargraph12, "unit", "dB");
		ui_interface->addVerticalBargraph("lufs OUT", &fVbargraph12, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
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
		float fSlow22 = ((iSlow21) ? 0.0f : std::exp(0.0f - fConst118 / ((iSlow21) ? 1.0f : fSlow20)));
		float fSlow23 = 0.04f - 0.003f * fSlow1;
		int iSlow24 = std::fabs(fSlow23) < 1.1920929e-07f;
		float fSlow25 = ((iSlow24) ? 0.0f : std::exp(0.0f - fConst118 / ((iSlow24) ? 1.0f : fSlow23)));
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
		float fSlow42 = ((iSlow41) ? 0.0f : std::exp(0.0f - fConst118 / ((iSlow41) ? 1.0f : fSlow40)));
		float fSlow43 = ((iSlow37) ? 0.001f : fSlow39);
		int iSlow44 = std::fabs(fSlow43) < 1.1920929e-07f;
		float fSlow45 = ((iSlow44) ? 0.0f : std::exp(0.0f - fConst118 / ((iSlow44) ? 1.0f : fSlow43)));
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
		float fSlow56 = ((iSlow55) ? 0.0f : std::exp(0.0f - fConst118 / ((iSlow55) ? 1.0f : fSlow54)));
		float fSlow57 = 0.05f - 0.004f * fSlow1;
		int iSlow58 = std::fabs(fSlow57) < 1.1920929e-07f;
		float fSlow59 = ((iSlow58) ? 0.0f : std::exp(0.0f - fConst118 / ((iSlow58) ? 1.0f : fSlow57)));
		float fSlow60 = 2.5f * fSlow1 + 1e+01f;
		float fSlow61 = std::fabs(fSlow60);
		int iSlow62 = fSlow60 > 0.0f;
		float fSlow63 = float(2 * iSlow62 + -1);
		float fSlow64 = 0.4f - 0.03f * fSlow1;
		float fSlow65 = ((iSlow62) ? fSlow64 : 0.002f);
		int iSlow66 = std::fabs(fSlow65) < 1.1920929e-07f;
		float fSlow67 = ((iSlow66) ? 0.0f : std::exp(0.0f - fConst118 / ((iSlow66) ? 1.0f : fSlow65)));
		float fSlow68 = ((iSlow62) ? 0.002f : fSlow64);
		int iSlow69 = std::fabs(fSlow68) < 1.1920929e-07f;
		float fSlow70 = ((iSlow69) ? 0.0f : std::exp(0.0f - fConst118 / ((iSlow69) ? 1.0f : fSlow68)));
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
		float fSlow81 = ((iSlow80) ? 0.0f : std::exp(0.0f - fConst118 / ((iSlow80) ? 1.0f : fSlow79)));
		float fSlow82 = 0.06f - 0.004f * fSlow1;
		int iSlow83 = std::fabs(fSlow82) < 1.1920929e-07f;
		float fSlow84 = ((iSlow83) ? 0.0f : std::exp(0.0f - fConst118 / ((iSlow83) ? 1.0f : fSlow82)));
		float fSlow85 = 2.0f * fSlow1 + 1e+01f;
		float fSlow86 = std::fabs(fSlow85);
		int iSlow87 = fSlow85 > 0.0f;
		float fSlow88 = float(2 * iSlow87 + -1);
		float fSlow89 = fSlow19 + 0.002f;
		float fSlow90 = 0.04f * fSlow1;
		float fSlow91 = 0.6f - fSlow90;
		float fSlow92 = ((iSlow87) ? fSlow91 : fSlow89);
		int iSlow93 = std::fabs(fSlow92) < 1.1920929e-07f;
		float fSlow94 = ((iSlow93) ? 0.0f : std::exp(0.0f - fConst118 / ((iSlow93) ? 1.0f : fSlow92)));
		float fSlow95 = ((iSlow87) ? fSlow89 : fSlow91);
		int iSlow96 = std::fabs(fSlow95) < 1.1920929e-07f;
		float fSlow97 = ((iSlow96) ? 0.0f : std::exp(0.0f - fConst118 / ((iSlow96) ? 1.0f : fSlow95)));
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
		float fSlow108 = ((iSlow107) ? 0.0f : std::exp(0.0f - fConst118 / ((iSlow107) ? 1.0f : fSlow106)));
		float fSlow109 = 0.07f - 0.004f * fSlow1;
		int iSlow110 = std::fabs(fSlow109) < 1.1920929e-07f;
		float fSlow111 = ((iSlow110) ? 0.0f : std::exp(0.0f - fConst118 / ((iSlow110) ? 1.0f : fSlow109)));
		float fSlow112 = fSlow0 + 15.0f;
		float fSlow113 = std::fabs(fSlow112);
		int iSlow114 = fSlow112 > 0.0f;
		float fSlow115 = float(2 * iSlow114 + -1);
		float fSlow116 = 0.0005f * fSlow1 + 0.005f;
		float fSlow117 = 0.8f - 0.04f * fSlow1;
		float fSlow118 = ((iSlow114) ? fSlow117 : fSlow116);
		int iSlow119 = std::fabs(fSlow118) < 1.1920929e-07f;
		float fSlow120 = ((iSlow119) ? 0.0f : std::exp(0.0f - fConst118 / ((iSlow119) ? 1.0f : fSlow118)));
		float fSlow121 = ((iSlow114) ? fSlow116 : fSlow117);
		int iSlow122 = std::fabs(fSlow121) < 1.1920929e-07f;
		float fSlow123 = ((iSlow122) ? 0.0f : std::exp(0.0f - fConst118 / ((iSlow122) ? 1.0f : fSlow121)));
		float fSlow124 = 0.9f * fSlow1;
		float fSlow125 = fSlow100 - fSlow124;
		float fSlow126 = fSlow124 + fSlow99;
		float fSlow127 = fSlow5 - fSlow126;
		float fSlow128 = 0.03f * fSlow1 + 0.2f;
		float fSlow129 = 0.015f - 0.0005f * fSlow1;
		int iSlow130 = std::fabs(fSlow129) < 1.1920929e-07f;
		float fSlow131 = ((iSlow130) ? 0.0f : std::exp(0.0f - fConst118 / ((iSlow130) ? 1.0f : fSlow129)));
		float fSlow132 = 0.08f - 0.005f * fSlow1;
		int iSlow133 = std::fabs(fSlow132) < 1.1920929e-07f;
		float fSlow134 = ((iSlow133) ? 0.0f : std::exp(0.0f - fConst118 / ((iSlow133) ? 1.0f : fSlow132)));
		float fSlow135 = 1.0f - fSlow17;
		float fSlow136 = ((iSlow114) ? fSlow135 : fSlow116);
		int iSlow137 = std::fabs(fSlow136) < 1.1920929e-07f;
		float fSlow138 = ((iSlow137) ? 0.0f : std::exp(0.0f - fConst118 / ((iSlow137) ? 1.0f : fSlow136)));
		float fSlow139 = ((iSlow114) ? fSlow116 : fSlow135);
		int iSlow140 = std::fabs(fSlow139) < 1.1920929e-07f;
		float fSlow141 = ((iSlow140) ? 0.0f : std::exp(0.0f - fConst118 / ((iSlow140) ? 1.0f : fSlow139)));
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
			fRec9[0] = std::max<float>(fRec9[1] - fConst1, std::min<float>(12.0f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(0.00031622776f, std::fabs(fTemp3))))));
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
			fRec40[0] = std::max<float>(fRec40[1] - fConst1, std::min<float>(12.0f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(0.00031622776f, std::fabs(fTemp45))))));
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
			float fTemp63 = fTemp62 + fVec51[(IOTA0 - 32768) & 65535];
			fVec52[IOTA0 & 131071] = fTemp63;
			float fTemp64 = fTemp63 + fVec52[(IOTA0 - 65536) & 131071];
			fVec53[IOTA0 & 262143] = fTemp64;
			float fTemp65 = fTemp64 + fVec53[(IOTA0 - 131072) & 262143];
			fVec54[IOTA0 & 524287] = fTemp65;
			fVec55[IOTA0 & 1048575] = fTemp65 + fVec54[(IOTA0 - 262144) & 524287];
			fVec56[0] = 0.0f - fConst46 * (fConst48 * fRec43[1] - fConst47 * fVec0[1]);
			fRec44[0] = fVec56[1] + fConst46 * (fConst44 * fTemp4 - 2.0f * (fConst42 * fRec44[1] - fConst41 * fVec0[1]));
			fRec43[0] = fRec44[0];
			fVec57[0] = 0.50032705f * fRec43[1] - fConst53 * fRec41[1];
			fRec42[0] = fConst56 * fRec43[1] + fConst55 * (fVec57[1] - fConst51 * fRec42[1] + 0.50032705f * fRec43[0]);
			fRec41[0] = fRec42[0];
			float fTemp66 = mydsp_faustpower2_f(fRec41[0]);
			fVec58[0] = fTemp66;
			float fTemp67 = fTemp66 + fVec58[1];
			fVec59[0] = fTemp67;
			float fTemp68 = fTemp67 + fVec59[2];
			fVec60[0] = fTemp68;
			float fTemp69 = fTemp68 + fVec60[4];
			fVec61[0] = fTemp69;
			float fTemp70 = fTemp69 + fVec61[8];
			fVec62[IOTA0 & 31] = fTemp70;
			float fTemp71 = fTemp70 + fVec62[(IOTA0 - 16) & 31];
			fVec63[IOTA0 & 63] = fTemp71;
			float fTemp72 = fTemp71 + fVec63[(IOTA0 - 32) & 63];
			fVec64[IOTA0 & 127] = fTemp72;
			float fTemp73 = fTemp72 + fVec64[(IOTA0 - 64) & 127];
			fVec65[IOTA0 & 255] = fTemp73;
			float fTemp74 = fTemp73 + fVec65[(IOTA0 - 128) & 255];
			fVec66[IOTA0 & 511] = fTemp74;
			float fTemp75 = fTemp74 + fVec66[(IOTA0 - 256) & 511];
			fVec67[IOTA0 & 1023] = fTemp75;
			float fTemp76 = fTemp75 + fVec67[(IOTA0 - 512) & 1023];
			fVec68[IOTA0 & 2047] = fTemp76;
			float fTemp77 = fTemp76 + fVec68[(IOTA0 - 1024) & 2047];
			fVec69[IOTA0 & 4095] = fTemp77;
			float fTemp78 = fTemp77 + fVec69[(IOTA0 - 2048) & 4095];
			fVec70[IOTA0 & 8191] = fTemp78;
			float fTemp79 = fTemp78 + fVec70[(IOTA0 - 4096) & 8191];
			fVec71[IOTA0 & 16383] = fTemp79;
			float fTemp80 = fTemp79 + fVec71[(IOTA0 - 8192) & 16383];
			fVec72[IOTA0 & 32767] = fTemp80;
			float fTemp81 = fTemp80 + fVec72[(IOTA0 - 16384) & 32767];
			fVec73[IOTA0 & 65535] = fTemp81;
			float fTemp82 = fTemp81 + fVec73[(IOTA0 - 32768) & 65535];
			fVec74[IOTA0 & 131071] = fTemp82;
			float fTemp83 = fTemp82 + fVec74[(IOTA0 - 65536) & 131071];
			fVec75[IOTA0 & 262143] = fTemp83;
			float fTemp84 = fTemp83 + fVec75[(IOTA0 - 131072) & 262143];
			fVec76[IOTA0 & 524287] = fTemp84;
			fVec77[IOTA0 & 1048575] = fTemp84 + fVec76[(IOTA0 - 262144) & 524287];
			fVbargraph3 = FAUSTFLOAT(4.3429446f * std::log(std::max<float>(1e-12f, fConst116 * (((iConst114) ? 0.86000985f * fVec77[(IOTA0 - iConst115) & 1048575] : 0.0f) + ((iConst112) ? 0.86000985f * fVec76[(IOTA0 - iConst113) & 524287] : 0.0f) + ((iConst110) ? 0.86000985f * fVec75[(IOTA0 - iConst111) & 262143] : 0.0f) + ((iConst108) ? 0.86000985f * fVec74[(IOTA0 - iConst109) & 131071] : 0.0f) + ((iConst106) ? 0.86000985f * fVec73[(IOTA0 - iConst107) & 65535] : 0.0f) + ((iConst104) ? 0.86000985f * fVec72[(IOTA0 - iConst105) & 32767] : 0.0f) + ((iConst102) ? 0.86000985f * fVec71[(IOTA0 - iConst103) & 16383] : 0.0f) + ((iConst100) ? 0.86000985f * fVec70[(IOTA0 - iConst101) & 8191] : 0.0f) + ((iConst98) ? 0.86000985f * fVec69[(IOTA0 - iConst99) & 4095] : 0.0f) + ((iConst96) ? 0.86000985f * fVec68[(IOTA0 - iConst97) & 2047] : 0.0f) + ((iConst94) ? 0.86000985f * fVec67[(IOTA0 - iConst95) & 1023] : 0.0f) + ((iConst92) ? 0.86000985f * fVec66[(IOTA0 - iConst93) & 511] : 0.0f) + ((iConst90) ? 0.86000985f * fVec65[(IOTA0 - iConst91) & 255] : 0.0f) + ((iConst88) ? 0.86000985f * fVec64[(IOTA0 - iConst89) & 127] : 0.0f) + ((iConst86) ? 0.86000985f * fVec63[(IOTA0 - iConst87) & 63] : 0.0f) + ((iConst84) ? 0.86000985f * fVec62[(IOTA0 - iConst85) & 31] : 0.0f) + ((iConst82) ? 0.86000985f * fVec61[iConst83] : 0.0f) + ((iConst80) ? 0.86000985f * fVec60[iConst81] : 0.0f) + ((iConst79) ? 0.86000985f * fTemp66 : 0.0f) + ((iConst78) ? 0.86000985f * fVec59[iConst79] : 0.0f) + ((iConst114) ? 0.86000985f * fVec55[(IOTA0 - iConst115) & 1048575] : 0.0f) + ((iConst112) ? 0.86000985f * fVec54[(IOTA0 - iConst113) & 524287] : 0.0f) + ((iConst110) ? 0.86000985f * fVec53[(IOTA0 - iConst111) & 262143] : 0.0f) + ((iConst108) ? 0.86000985f * fVec52[(IOTA0 - iConst109) & 131071] : 0.0f) + ((iConst106) ? 0.86000985f * fVec51[(IOTA0 - iConst107) & 65535] : 0.0f) + ((iConst104) ? 0.86000985f * fVec50[(IOTA0 - iConst105) & 32767] : 0.0f) + ((iConst102) ? 0.86000985f * fVec49[(IOTA0 - iConst103) & 16383] : 0.0f) + ((iConst100) ? 0.86000985f * fVec48[(IOTA0 - iConst101) & 8191] : 0.0f) + ((iConst98) ? 0.86000985f * fVec47[(IOTA0 - iConst99) & 4095] : 0.0f) + ((iConst96) ? 0.86000985f * fVec46[(IOTA0 - iConst97) & 2047] : 0.0f) + ((iConst94) ? 0.86000985f * fVec45[(IOTA0 - iConst95) & 1023] : 0.0f) + ((iConst92) ? 0.86000985f * fVec44[(IOTA0 - iConst93) & 511] : 0.0f) + ((iConst90) ? 0.86000985f * fVec43[(IOTA0 - iConst91) & 255] : 0.0f) + ((iConst88) ? 0.86000985f * fVec42[(IOTA0 - iConst89) & 127] : 0.0f) + ((iConst86) ? 0.86000985f * fVec41[(IOTA0 - iConst87) & 63] : 0.0f) + ((iConst84) ? 0.86000985f * fVec40[(IOTA0 - iConst85) & 31] : 0.0f) + ((iConst82) ? 0.86000985f * fVec39[iConst83] : 0.0f) + ((iConst80) ? 0.86000985f * fVec38[iConst81] : 0.0f) + ((iConst79) ? 0.86000985f * fTemp47 : 0.0f) + ((iConst78) ? 0.86000985f * fVec37[iConst79] : 0.0f)))) + -0.691f);
			float fTemp85 = fTemp46;
			fVec78[0] = fTemp85;
			fRec35[0] = fConst17 * (fTemp85 - fVec78[1] + fConst16 * fRec35[1]);
			fRec34[0] = 0.0f - fConst22 * (fConst20 * fRec34[1] - (fRec35[0] + fRec35[1]));
			fRec45[0] = fConst23 * fRec35[1] - fConst22 * (fConst20 * fRec45[1] - fConst19 * fRec35[0]);
			float fTemp86 = fRec45[0] + fRec34[0] * fTemp2;
			fVec79[0] = fTemp86;
			fRec33[0] = fConst23 * fVec79[1] - fConst22 * (fConst20 * fRec33[1] - fConst19 * fTemp86);
			fRec46[0] = 0.0f - fConst22 * (fConst20 * fRec46[1] - (fTemp86 + fVec79[1]));
			float fTemp87 = fRec13[0] * fRec35[0] + fTemp6 * (fRec46[0] + fRec33[0] * fTemp1);
			fRec15[0] = fTemp44 * fTemp87;
			float fTemp88 = fSlow13 * fRec14[0] + fSlow10 * fTemp7;
			fRec4[0] = fTemp88 - fConst12 * (fConst11 * fRec4[2] + fConst5 * fRec4[1]);
			fRec3[0] = fConst12 * (fConst4 * fRec4[0] + fConst117 * fRec4[1] + fConst4 * fRec4[2]) - fConst10 * (fConst9 * fRec3[2] + fConst5 * fRec3[1]);
			fRec2[0] = fConst10 * (fConst4 * fRec3[0] + fConst117 * fRec3[1] + fConst4 * fRec3[2]) - fConst8 * (fConst7 * fRec2[2] + fConst5 * fRec2[1]);
			float fTemp89 = std::fabs(fConst8 * (fConst4 * fRec2[0] + fConst117 * fRec2[1] + fConst4 * fRec2[2]));
			fVec80[0] = fTemp89;
			float fTemp90 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp89));
			int iTemp91 = (fTemp90 > fSlow15) + (fTemp90 > fSlow6);
			float fTemp92 = fTemp90 - fSlow5;
			float fTemp93 = 0.0f - fSlow18 * std::max<float>(0.0f, ((iTemp91 == 0) ? 0.0f : ((iTemp91 == 1) ? fSlow16 * mydsp_faustpower2_f(fSlow14 + fTemp92) : fSlow2 + fTemp92)));
			float fTemp94 = ((fTemp93 > fRec1[1]) ? fSlow25 : fSlow22);
			fRec1[0] = fTemp93 * (1.0f - fTemp94) + fRec1[1] * fTemp94;
			float fTemp95 = fSlow13 * fRec15[0] + fSlow10 * fTemp87;
			fRec50[0] = fTemp95 - fConst12 * (fConst11 * fRec50[2] + fConst5 * fRec50[1]);
			fRec49[0] = fConst12 * (fConst4 * fRec50[0] + fConst117 * fRec50[1] + fConst4 * fRec50[2]) - fConst10 * (fConst9 * fRec49[2] + fConst5 * fRec49[1]);
			fRec48[0] = fConst10 * (fConst4 * fRec49[0] + fConst117 * fRec49[1] + fConst4 * fRec49[2]) - fConst8 * (fConst7 * fRec48[2] + fConst5 * fRec48[1]);
			float fTemp96 = std::fabs(fConst8 * (fConst4 * fRec48[0] + fConst117 * fRec48[1] + fConst4 * fRec48[2]));
			fVec81[0] = fTemp96;
			float fTemp97 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp96));
			int iTemp98 = (fTemp97 > fSlow15) + (fTemp97 > fSlow6);
			float fTemp99 = fTemp97 - fSlow5;
			float fTemp100 = 0.0f - fSlow18 * std::max<float>(0.0f, ((iTemp98 == 0) ? 0.0f : ((iTemp98 == 1) ? fSlow16 * mydsp_faustpower2_f(fSlow14 + fTemp99) : fSlow2 + fTemp99)));
			float fTemp101 = ((fTemp100 > fRec47[1]) ? fSlow25 : fSlow22);
			fRec47[0] = fTemp100 * (1.0f - fTemp101) + fRec47[1] * fTemp101;
			float fTemp102 = std::max<float>(fTemp89, fVec80[1]);
			fVec82[0] = fTemp102;
			float fTemp103 = std::max<float>(fTemp102, fVec82[2]);
			fVec83[0] = fTemp103;
			float fTemp104 = std::max<float>(fTemp103, fVec83[4]);
			fVec84[0] = fTemp104;
			float fTemp105 = std::max<float>(fTemp104, fVec84[8]);
			fVec85[IOTA0 & 31] = fTemp105;
			float fTemp106 = std::max<float>(fTemp105, fVec85[(IOTA0 - 16) & 31]);
			fVec86[IOTA0 & 63] = fTemp106;
			float fTemp107 = std::max<float>(fTemp106, fVec86[(IOTA0 - 32) & 63]);
			fVec87[IOTA0 & 127] = fTemp107;
			float fTemp108 = std::max<float>(fTemp107, fVec87[(IOTA0 - 64) & 127]);
			fVec88[IOTA0 & 255] = fTemp108;
			float fTemp109 = std::max<float>(fTemp108, fVec88[(IOTA0 - 128) & 255]);
			fVec89[IOTA0 & 511] = fTemp109;
			float fTemp110 = std::max<float>(fTemp109, fVec89[(IOTA0 - 256) & 511]);
			fVec90[IOTA0 & 1023] = fTemp110;
			float fTemp111 = std::max<float>(fTemp110, fVec90[(IOTA0 - 512) & 1023]);
			fVec91[IOTA0 & 2047] = fTemp111;
			fVec92[IOTA0 & 4095] = std::max<float>(fTemp111, fVec91[(IOTA0 - 1024) & 2047]);
			float fTemp112 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst119) ? fTemp89 : -3.4028235e+38f), ((iConst120) ? fVec82[iConst119] : -3.4028235e+38f)), ((iConst121) ? fVec83[iConst122] : -3.4028235e+38f)), ((iConst123) ? fVec84[iConst124] : -3.4028235e+38f)), ((iConst125) ? fVec85[(IOTA0 - iConst126) & 31] : -3.4028235e+38f)), ((iConst127) ? fVec86[(IOTA0 - iConst128) & 63] : -3.4028235e+38f)), ((iConst129) ? fVec87[(IOTA0 - iConst130) & 127] : -3.4028235e+38f)), ((iConst131) ? fVec88[(IOTA0 - iConst132) & 255] : -3.4028235e+38f)), ((iConst133) ? fVec89[(IOTA0 - iConst134) & 511] : -3.4028235e+38f)), ((iConst135) ? fVec90[(IOTA0 - iConst136) & 1023] : -3.4028235e+38f)), ((iConst137) ? fVec91[(IOTA0 - iConst138) & 2047] : -3.4028235e+38f)), ((iConst139) ? fVec92[(IOTA0 - iConst140) & 4095] : -3.4028235e+38f))));
			int iTemp113 = (fTemp112 > fSlow33) + (fTemp112 > fSlow32);
			float fTemp114 = fTemp112 + 4e+01f;
			float fTemp115 = std::max<float>(fSlow27, fSlow36 * ((iTemp113 == 0) ? fTemp114 - fSlow5 : ((iTemp113 == 1) ? fSlow34 * mydsp_faustpower2_f(fTemp114 - fSlow31) : 0.0f)));
			float fTemp116 = (((fSlow38 * fTemp115) > fRec51[1]) ? fSlow45 : fSlow42);
			fRec51[0] = fSlow38 * fTemp115 * (1.0f - fTemp116) + fRec51[1] * fTemp116;
			float fTemp117 = std::max<float>(fTemp96, fVec81[1]);
			fVec93[0] = fTemp117;
			float fTemp118 = std::max<float>(fTemp117, fVec93[2]);
			fVec94[0] = fTemp118;
			float fTemp119 = std::max<float>(fTemp118, fVec94[4]);
			fVec95[0] = fTemp119;
			float fTemp120 = std::max<float>(fTemp119, fVec95[8]);
			fVec96[IOTA0 & 31] = fTemp120;
			float fTemp121 = std::max<float>(fTemp120, fVec96[(IOTA0 - 16) & 31]);
			fVec97[IOTA0 & 63] = fTemp121;
			float fTemp122 = std::max<float>(fTemp121, fVec97[(IOTA0 - 32) & 63]);
			fVec98[IOTA0 & 127] = fTemp122;
			float fTemp123 = std::max<float>(fTemp122, fVec98[(IOTA0 - 64) & 127]);
			fVec99[IOTA0 & 255] = fTemp123;
			float fTemp124 = std::max<float>(fTemp123, fVec99[(IOTA0 - 128) & 255]);
			fVec100[IOTA0 & 511] = fTemp124;
			float fTemp125 = std::max<float>(fTemp124, fVec100[(IOTA0 - 256) & 511]);
			fVec101[IOTA0 & 1023] = fTemp125;
			float fTemp126 = std::max<float>(fTemp125, fVec101[(IOTA0 - 512) & 1023]);
			fVec102[IOTA0 & 2047] = fTemp126;
			fVec103[IOTA0 & 4095] = std::max<float>(fTemp126, fVec102[(IOTA0 - 1024) & 2047]);
			float fTemp127 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst119) ? fTemp96 : -3.4028235e+38f), ((iConst120) ? fVec93[iConst119] : -3.4028235e+38f)), ((iConst121) ? fVec94[iConst122] : -3.4028235e+38f)), ((iConst123) ? fVec95[iConst124] : -3.4028235e+38f)), ((iConst125) ? fVec96[(IOTA0 - iConst126) & 31] : -3.4028235e+38f)), ((iConst127) ? fVec97[(IOTA0 - iConst128) & 63] : -3.4028235e+38f)), ((iConst129) ? fVec98[(IOTA0 - iConst130) & 127] : -3.4028235e+38f)), ((iConst131) ? fVec99[(IOTA0 - iConst132) & 255] : -3.4028235e+38f)), ((iConst133) ? fVec100[(IOTA0 - iConst134) & 511] : -3.4028235e+38f)), ((iConst135) ? fVec101[(IOTA0 - iConst136) & 1023] : -3.4028235e+38f)), ((iConst137) ? fVec102[(IOTA0 - iConst138) & 2047] : -3.4028235e+38f)), ((iConst139) ? fVec103[(IOTA0 - iConst140) & 4095] : -3.4028235e+38f))));
			int iTemp128 = (fTemp127 > fSlow33) + (fTemp127 > fSlow32);
			float fTemp129 = fTemp127 + 4e+01f;
			float fTemp130 = std::max<float>(fSlow27, fSlow36 * ((iTemp128 == 0) ? fTemp129 - fSlow5 : ((iTemp128 == 1) ? fSlow34 * mydsp_faustpower2_f(fTemp129 - fSlow31) : 0.0f)));
			float fTemp131 = (((fSlow38 * fTemp130) > fRec52[1]) ? fSlow45 : fSlow42);
			fRec52[0] = fSlow38 * fTemp130 * (1.0f - fTemp131) + fRec52[1] * fTemp131;
			float fTemp132 = std::min<float>(fSlow26 + std::min<float>(fRec1[0], fRec47[0]), std::max<float>(fRec51[0], fRec52[0]));
			fVbargraph4 = FAUSTFLOAT(std::min<float>(12.0f, std::max<float>(-12.0f, fTemp132)));
			float fTemp133 = std::pow(1e+01f, 0.025f * fTemp132);
			float fTemp134 = 1.0f - mydsp_faustpower2_f(fTemp133);
			float fTemp135 = std::sqrt(fTemp133);
			float fTemp136 = fConst2 * fTemp135 * (fConst2 * fTemp135 + 1.4285715f) + 1.0f;
			fRec62[0] = fConst12 * (fRec4[2] + fRec4[0] + 2.0f * fRec4[1]) - fConst10 * (fConst9 * fRec62[2] + fConst5 * fRec62[1]);
			fRec61[0] = fConst10 * (fRec62[2] + fRec62[0] + 2.0f * fRec62[1]) - fConst8 * (fConst7 * fRec61[2] + fConst5 * fRec61[1]);
			fRec60[0] = fConst8 * (fRec61[2] + fRec61[0] + 2.0f * fRec61[1]) - fConst151 * (fConst150 * fRec60[2] + fConst144 * fRec60[1]);
			fRec59[0] = fConst151 * (fConst143 * fRec60[0] + fConst152 * fRec60[1] + fConst143 * fRec60[2]) - fConst149 * (fConst148 * fRec59[2] + fConst144 * fRec59[1]);
			fRec58[0] = fConst149 * (fConst143 * fRec59[0] + fConst152 * fRec59[1] + fConst143 * fRec59[2]) - fConst147 * (fConst146 * fRec58[2] + fConst144 * fRec58[1]);
			float fTemp137 = std::fabs(fConst147 * (fConst143 * fRec58[0] + fConst152 * fRec58[1] + fConst143 * fRec58[2]));
			fVec104[0] = fTemp137;
			float fTemp138 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp137));
			int iTemp139 = (fTemp138 > fSlow50) + (fTemp138 > fSlow48);
			float fTemp140 = fTemp138 + -2.0f - fSlow5;
			float fTemp141 = 0.0f - fSlow52 * std::max<float>(0.0f, ((iTemp139 == 0) ? 0.0f : ((iTemp139 == 1) ? fSlow51 * mydsp_faustpower2_f(fSlow49 + fTemp140) : fSlow2 + fTemp140)));
			float fTemp142 = ((fTemp141 > fRec57[1]) ? fSlow59 : fSlow56);
			fRec57[0] = fTemp141 * (1.0f - fTemp142) + fRec57[1] * fTemp142;
			fRec68[0] = fConst12 * (fRec50[2] + fRec50[0] + 2.0f * fRec50[1]) - fConst10 * (fConst9 * fRec68[2] + fConst5 * fRec68[1]);
			fRec67[0] = fConst10 * (fRec68[2] + fRec68[0] + 2.0f * fRec68[1]) - fConst8 * (fConst7 * fRec67[2] + fConst5 * fRec67[1]);
			fRec66[0] = fConst8 * (fRec67[2] + fRec67[0] + 2.0f * fRec67[1]) - fConst151 * (fConst150 * fRec66[2] + fConst144 * fRec66[1]);
			fRec65[0] = fConst151 * (fConst143 * fRec66[0] + fConst152 * fRec66[1] + fConst143 * fRec66[2]) - fConst149 * (fConst148 * fRec65[2] + fConst144 * fRec65[1]);
			fRec64[0] = fConst149 * (fConst143 * fRec65[0] + fConst152 * fRec65[1] + fConst143 * fRec65[2]) - fConst147 * (fConst146 * fRec64[2] + fConst144 * fRec64[1]);
			float fTemp143 = std::fabs(fConst147 * (fConst143 * fRec64[0] + fConst152 * fRec64[1] + fConst143 * fRec64[2]));
			fVec105[0] = fTemp143;
			float fTemp144 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp143));
			int iTemp145 = (fTemp144 > fSlow50) + (fTemp144 > fSlow48);
			float fTemp146 = fTemp144 + -2.0f - fSlow5;
			float fTemp147 = 0.0f - fSlow52 * std::max<float>(0.0f, ((iTemp145 == 0) ? 0.0f : ((iTemp145 == 1) ? fSlow51 * mydsp_faustpower2_f(fSlow49 + fTemp146) : fSlow2 + fTemp146)));
			float fTemp148 = ((fTemp147 > fRec63[1]) ? fSlow59 : fSlow56);
			fRec63[0] = fTemp147 * (1.0f - fTemp148) + fRec63[1] * fTemp148;
			float fTemp149 = std::max<float>(fTemp137, fVec104[1]);
			fVec106[0] = fTemp149;
			float fTemp150 = std::max<float>(fTemp149, fVec106[2]);
			fVec107[0] = fTemp150;
			float fTemp151 = std::max<float>(fTemp150, fVec107[4]);
			fVec108[0] = fTemp151;
			float fTemp152 = std::max<float>(fTemp151, fVec108[8]);
			fVec109[IOTA0 & 31] = fTemp152;
			float fTemp153 = std::max<float>(fTemp152, fVec109[(IOTA0 - 16) & 31]);
			fVec110[IOTA0 & 63] = fTemp153;
			float fTemp154 = std::max<float>(fTemp153, fVec110[(IOTA0 - 32) & 63]);
			fVec111[IOTA0 & 127] = fTemp154;
			float fTemp155 = std::max<float>(fTemp154, fVec111[(IOTA0 - 64) & 127]);
			fVec112[IOTA0 & 255] = fTemp155;
			float fTemp156 = std::max<float>(fTemp155, fVec112[(IOTA0 - 128) & 255]);
			fVec113[IOTA0 & 511] = fTemp156;
			float fTemp157 = std::max<float>(fTemp156, fVec113[(IOTA0 - 256) & 511]);
			fVec114[IOTA0 & 1023] = fTemp157;
			float fTemp158 = std::max<float>(fTemp157, fVec114[(IOTA0 - 512) & 1023]);
			fVec115[IOTA0 & 2047] = fTemp158;
			fVec116[IOTA0 & 4095] = std::max<float>(fTemp158, fVec115[(IOTA0 - 1024) & 2047]);
			float fTemp159 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst119) ? fTemp137 : -3.4028235e+38f), ((iConst120) ? fVec106[iConst119] : -3.4028235e+38f)), ((iConst121) ? fVec107[iConst122] : -3.4028235e+38f)), ((iConst123) ? fVec108[iConst124] : -3.4028235e+38f)), ((iConst125) ? fVec109[(IOTA0 - iConst126) & 31] : -3.4028235e+38f)), ((iConst127) ? fVec110[(IOTA0 - iConst128) & 63] : -3.4028235e+38f)), ((iConst129) ? fVec111[(IOTA0 - iConst130) & 127] : -3.4028235e+38f)), ((iConst131) ? fVec112[(IOTA0 - iConst132) & 255] : -3.4028235e+38f)), ((iConst133) ? fVec113[(IOTA0 - iConst134) & 511] : -3.4028235e+38f)), ((iConst135) ? fVec114[(IOTA0 - iConst136) & 1023] : -3.4028235e+38f)), ((iConst137) ? fVec115[(IOTA0 - iConst138) & 2047] : -3.4028235e+38f)), ((iConst139) ? fVec116[(IOTA0 - iConst140) & 4095] : -3.4028235e+38f))));
			int iTemp160 = (fTemp159 > fSlow33) + (fTemp159 > fSlow32);
			float fTemp161 = fTemp159 + 4e+01f;
			float fTemp162 = std::max<float>(fSlow27, fSlow61 * ((iTemp160 == 0) ? fTemp161 - fSlow5 : ((iTemp160 == 1) ? fSlow34 * mydsp_faustpower2_f(fTemp161 - fSlow31) : 0.0f)));
			float fTemp163 = (((fSlow63 * fTemp162) > fRec69[1]) ? fSlow70 : fSlow67);
			fRec69[0] = fSlow63 * fTemp162 * (1.0f - fTemp163) + fRec69[1] * fTemp163;
			float fTemp164 = std::max<float>(fTemp143, fVec105[1]);
			fVec117[0] = fTemp164;
			float fTemp165 = std::max<float>(fTemp164, fVec117[2]);
			fVec118[0] = fTemp165;
			float fTemp166 = std::max<float>(fTemp165, fVec118[4]);
			fVec119[0] = fTemp166;
			float fTemp167 = std::max<float>(fTemp166, fVec119[8]);
			fVec120[IOTA0 & 31] = fTemp167;
			float fTemp168 = std::max<float>(fTemp167, fVec120[(IOTA0 - 16) & 31]);
			fVec121[IOTA0 & 63] = fTemp168;
			float fTemp169 = std::max<float>(fTemp168, fVec121[(IOTA0 - 32) & 63]);
			fVec122[IOTA0 & 127] = fTemp169;
			float fTemp170 = std::max<float>(fTemp169, fVec122[(IOTA0 - 64) & 127]);
			fVec123[IOTA0 & 255] = fTemp170;
			float fTemp171 = std::max<float>(fTemp170, fVec123[(IOTA0 - 128) & 255]);
			fVec124[IOTA0 & 511] = fTemp171;
			float fTemp172 = std::max<float>(fTemp171, fVec124[(IOTA0 - 256) & 511]);
			fVec125[IOTA0 & 1023] = fTemp172;
			float fTemp173 = std::max<float>(fTemp172, fVec125[(IOTA0 - 512) & 1023]);
			fVec126[IOTA0 & 2047] = fTemp173;
			fVec127[IOTA0 & 4095] = std::max<float>(fTemp173, fVec126[(IOTA0 - 1024) & 2047]);
			float fTemp174 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst119) ? fTemp143 : -3.4028235e+38f), ((iConst120) ? fVec117[iConst119] : -3.4028235e+38f)), ((iConst121) ? fVec118[iConst122] : -3.4028235e+38f)), ((iConst123) ? fVec119[iConst124] : -3.4028235e+38f)), ((iConst125) ? fVec120[(IOTA0 - iConst126) & 31] : -3.4028235e+38f)), ((iConst127) ? fVec121[(IOTA0 - iConst128) & 63] : -3.4028235e+38f)), ((iConst129) ? fVec122[(IOTA0 - iConst130) & 127] : -3.4028235e+38f)), ((iConst131) ? fVec123[(IOTA0 - iConst132) & 255] : -3.4028235e+38f)), ((iConst133) ? fVec124[(IOTA0 - iConst134) & 511] : -3.4028235e+38f)), ((iConst135) ? fVec125[(IOTA0 - iConst136) & 1023] : -3.4028235e+38f)), ((iConst137) ? fVec126[(IOTA0 - iConst138) & 2047] : -3.4028235e+38f)), ((iConst139) ? fVec127[(IOTA0 - iConst140) & 4095] : -3.4028235e+38f))));
			int iTemp175 = (fTemp174 > fSlow33) + (fTemp174 > fSlow32);
			float fTemp176 = fTemp174 + 4e+01f;
			float fTemp177 = std::max<float>(fSlow27, fSlow61 * ((iTemp175 == 0) ? fTemp176 - fSlow5 : ((iTemp175 == 1) ? fSlow34 * mydsp_faustpower2_f(fTemp176 - fSlow31) : 0.0f)));
			float fTemp178 = (((fSlow63 * fTemp177) > fRec70[1]) ? fSlow70 : fSlow67);
			fRec70[0] = fSlow63 * fTemp177 * (1.0f - fTemp178) + fRec70[1] * fTemp178;
			float fTemp179 = std::min<float>(fSlow26 + std::min<float>(fRec57[0], fRec63[0]), std::max<float>(fRec69[0], fRec70[0]));
			fVbargraph5 = FAUSTFLOAT(std::min<float>(12.0f, std::max<float>(-12.0f, fTemp179)));
			float fTemp180 = 0.025f * fTemp179;
			float fTemp181 = std::pow(1e+01f, fTemp180);
			float fTemp182 = mydsp_faustpower2_f(fTemp181) + -1.0f;
			float fTemp183 = std::sqrt(fTemp181);
			float fTemp184 = fConst2 * ((fConst2 / fTemp183 + 1.4285715f) / fTemp183) + 1.0f;
			float fTemp185 = std::pow(1e+01f, 0.0f - fTemp180);
			float fTemp186 = mydsp_faustpower2_f(fTemp185) + -1.0f;
			float fTemp187 = std::sqrt(fTemp185);
			float fTemp188 = fConst141 * ((fConst141 / fTemp187 + 1.4285715f) / fTemp187) + 1.0f;
			fRec84[0] = fConst151 * (fRec60[2] + fRec60[0] + 2.0f * fRec60[1]) - fConst149 * (fConst148 * fRec84[2] + fConst144 * fRec84[1]);
			fRec83[0] = fConst149 * (fRec84[2] + fRec84[0] + 2.0f * fRec84[1]) - fConst147 * (fConst146 * fRec83[2] + fConst144 * fRec83[1]);
			fRec82[0] = fConst147 * (fRec83[2] + fRec83[0] + 2.0f * fRec83[1]) - fConst163 * (fConst162 * fRec82[2] + fConst156 * fRec82[1]);
			fRec81[0] = fConst163 * (fConst155 * fRec82[0] + fConst164 * fRec82[1] + fConst155 * fRec82[2]) - fConst161 * (fConst160 * fRec81[2] + fConst156 * fRec81[1]);
			fRec80[0] = fConst161 * (fConst155 * fRec81[0] + fConst164 * fRec81[1] + fConst155 * fRec81[2]) - fConst159 * (fConst158 * fRec80[2] + fConst156 * fRec80[1]);
			float fTemp189 = std::fabs(fConst159 * (fConst155 * fRec80[0] + fConst164 * fRec80[1] + fConst155 * fRec80[2]));
			fVec128[0] = fTemp189;
			float fTemp190 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp189));
			int iTemp191 = (fTemp190 > fSlow76) + (fTemp190 > fSlow74);
			float fTemp192 = fTemp190 + -4.0f - fSlow5;
			float fTemp193 = 0.0f - fSlow78 * std::max<float>(0.0f, ((iTemp191 == 0) ? 0.0f : ((iTemp191 == 1) ? fSlow77 * mydsp_faustpower2_f(fSlow75 + fTemp192) : fSlow71 + fTemp192)));
			float fTemp194 = ((fTemp193 > fRec79[1]) ? fSlow84 : fSlow81);
			fRec79[0] = fTemp193 * (1.0f - fTemp194) + fRec79[1] * fTemp194;
			fRec90[0] = fConst151 * (fRec66[2] + fRec66[0] + 2.0f * fRec66[1]) - fConst149 * (fConst148 * fRec90[2] + fConst144 * fRec90[1]);
			fRec89[0] = fConst149 * (fRec90[2] + fRec90[0] + 2.0f * fRec90[1]) - fConst147 * (fConst146 * fRec89[2] + fConst144 * fRec89[1]);
			fRec88[0] = fConst147 * (fRec89[2] + fRec89[0] + 2.0f * fRec89[1]) - fConst163 * (fConst162 * fRec88[2] + fConst156 * fRec88[1]);
			fRec87[0] = fConst163 * (fConst155 * fRec88[0] + fConst164 * fRec88[1] + fConst155 * fRec88[2]) - fConst161 * (fConst160 * fRec87[2] + fConst156 * fRec87[1]);
			fRec86[0] = fConst161 * (fConst155 * fRec87[0] + fConst164 * fRec87[1] + fConst155 * fRec87[2]) - fConst159 * (fConst158 * fRec86[2] + fConst156 * fRec86[1]);
			float fTemp195 = std::fabs(fConst159 * (fConst155 * fRec86[0] + fConst164 * fRec86[1] + fConst155 * fRec86[2]));
			fVec129[0] = fTemp195;
			float fTemp196 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp195));
			int iTemp197 = (fTemp196 > fSlow76) + (fTemp196 > fSlow74);
			float fTemp198 = fTemp196 + -4.0f - fSlow5;
			float fTemp199 = 0.0f - fSlow78 * std::max<float>(0.0f, ((iTemp197 == 0) ? 0.0f : ((iTemp197 == 1) ? fSlow77 * mydsp_faustpower2_f(fSlow75 + fTemp198) : fSlow71 + fTemp198)));
			float fTemp200 = ((fTemp199 > fRec85[1]) ? fSlow84 : fSlow81);
			fRec85[0] = fTemp199 * (1.0f - fTemp200) + fRec85[1] * fTemp200;
			float fTemp201 = std::max<float>(fTemp189, fVec128[1]);
			fVec130[0] = fTemp201;
			float fTemp202 = std::max<float>(fTemp201, fVec130[2]);
			fVec131[0] = fTemp202;
			float fTemp203 = std::max<float>(fTemp202, fVec131[4]);
			fVec132[0] = fTemp203;
			float fTemp204 = std::max<float>(fTemp203, fVec132[8]);
			fVec133[IOTA0 & 31] = fTemp204;
			float fTemp205 = std::max<float>(fTemp204, fVec133[(IOTA0 - 16) & 31]);
			fVec134[IOTA0 & 63] = fTemp205;
			float fTemp206 = std::max<float>(fTemp205, fVec134[(IOTA0 - 32) & 63]);
			fVec135[IOTA0 & 127] = fTemp206;
			float fTemp207 = std::max<float>(fTemp206, fVec135[(IOTA0 - 64) & 127]);
			fVec136[IOTA0 & 255] = fTemp207;
			float fTemp208 = std::max<float>(fTemp207, fVec136[(IOTA0 - 128) & 255]);
			fVec137[IOTA0 & 511] = fTemp208;
			float fTemp209 = std::max<float>(fTemp208, fVec137[(IOTA0 - 256) & 511]);
			fVec138[IOTA0 & 1023] = fTemp209;
			float fTemp210 = std::max<float>(fTemp209, fVec138[(IOTA0 - 512) & 1023]);
			fVec139[IOTA0 & 2047] = fTemp210;
			fVec140[IOTA0 & 4095] = std::max<float>(fTemp210, fVec139[(IOTA0 - 1024) & 2047]);
			float fTemp211 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst119) ? fTemp189 : -3.4028235e+38f), ((iConst120) ? fVec130[iConst119] : -3.4028235e+38f)), ((iConst121) ? fVec131[iConst122] : -3.4028235e+38f)), ((iConst123) ? fVec132[iConst124] : -3.4028235e+38f)), ((iConst125) ? fVec133[(IOTA0 - iConst126) & 31] : -3.4028235e+38f)), ((iConst127) ? fVec134[(IOTA0 - iConst128) & 63] : -3.4028235e+38f)), ((iConst129) ? fVec135[(IOTA0 - iConst130) & 127] : -3.4028235e+38f)), ((iConst131) ? fVec136[(IOTA0 - iConst132) & 255] : -3.4028235e+38f)), ((iConst133) ? fVec137[(IOTA0 - iConst134) & 511] : -3.4028235e+38f)), ((iConst135) ? fVec138[(IOTA0 - iConst136) & 1023] : -3.4028235e+38f)), ((iConst137) ? fVec139[(IOTA0 - iConst138) & 2047] : -3.4028235e+38f)), ((iConst139) ? fVec140[(IOTA0 - iConst140) & 4095] : -3.4028235e+38f))));
			int iTemp212 = (fTemp211 > fSlow33) + (fTemp211 > fSlow32);
			float fTemp213 = fTemp211 + 4e+01f;
			float fTemp214 = std::max<float>(fSlow27, fSlow86 * ((iTemp212 == 0) ? fTemp213 - fSlow5 : ((iTemp212 == 1) ? fSlow34 * mydsp_faustpower2_f(fTemp213 - fSlow31) : 0.0f)));
			float fTemp215 = (((fSlow88 * fTemp214) > fRec91[1]) ? fSlow97 : fSlow94);
			fRec91[0] = fSlow88 * fTemp214 * (1.0f - fTemp215) + fRec91[1] * fTemp215;
			float fTemp216 = std::max<float>(fTemp195, fVec129[1]);
			fVec141[0] = fTemp216;
			float fTemp217 = std::max<float>(fTemp216, fVec141[2]);
			fVec142[0] = fTemp217;
			float fTemp218 = std::max<float>(fTemp217, fVec142[4]);
			fVec143[0] = fTemp218;
			float fTemp219 = std::max<float>(fTemp218, fVec143[8]);
			fVec144[IOTA0 & 31] = fTemp219;
			float fTemp220 = std::max<float>(fTemp219, fVec144[(IOTA0 - 16) & 31]);
			fVec145[IOTA0 & 63] = fTemp220;
			float fTemp221 = std::max<float>(fTemp220, fVec145[(IOTA0 - 32) & 63]);
			fVec146[IOTA0 & 127] = fTemp221;
			float fTemp222 = std::max<float>(fTemp221, fVec146[(IOTA0 - 64) & 127]);
			fVec147[IOTA0 & 255] = fTemp222;
			float fTemp223 = std::max<float>(fTemp222, fVec147[(IOTA0 - 128) & 255]);
			fVec148[IOTA0 & 511] = fTemp223;
			float fTemp224 = std::max<float>(fTemp223, fVec148[(IOTA0 - 256) & 511]);
			fVec149[IOTA0 & 1023] = fTemp224;
			float fTemp225 = std::max<float>(fTemp224, fVec149[(IOTA0 - 512) & 1023]);
			fVec150[IOTA0 & 2047] = fTemp225;
			fVec151[IOTA0 & 4095] = std::max<float>(fTemp225, fVec150[(IOTA0 - 1024) & 2047]);
			float fTemp226 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst119) ? fTemp195 : -3.4028235e+38f), ((iConst120) ? fVec141[iConst119] : -3.4028235e+38f)), ((iConst121) ? fVec142[iConst122] : -3.4028235e+38f)), ((iConst123) ? fVec143[iConst124] : -3.4028235e+38f)), ((iConst125) ? fVec144[(IOTA0 - iConst126) & 31] : -3.4028235e+38f)), ((iConst127) ? fVec145[(IOTA0 - iConst128) & 63] : -3.4028235e+38f)), ((iConst129) ? fVec146[(IOTA0 - iConst130) & 127] : -3.4028235e+38f)), ((iConst131) ? fVec147[(IOTA0 - iConst132) & 255] : -3.4028235e+38f)), ((iConst133) ? fVec148[(IOTA0 - iConst134) & 511] : -3.4028235e+38f)), ((iConst135) ? fVec149[(IOTA0 - iConst136) & 1023] : -3.4028235e+38f)), ((iConst137) ? fVec150[(IOTA0 - iConst138) & 2047] : -3.4028235e+38f)), ((iConst139) ? fVec151[(IOTA0 - iConst140) & 4095] : -3.4028235e+38f))));
			int iTemp227 = (fTemp226 > fSlow33) + (fTemp226 > fSlow32);
			float fTemp228 = fTemp226 + 4e+01f;
			float fTemp229 = std::max<float>(fSlow27, fSlow86 * ((iTemp227 == 0) ? fTemp228 - fSlow5 : ((iTemp227 == 1) ? fSlow34 * mydsp_faustpower2_f(fTemp228 - fSlow31) : 0.0f)));
			float fTemp230 = (((fSlow88 * fTemp229) > fRec92[1]) ? fSlow97 : fSlow94);
			fRec92[0] = fSlow88 * fTemp229 * (1.0f - fTemp230) + fRec92[1] * fTemp230;
			float fTemp231 = std::min<float>(fSlow26 + std::min<float>(fRec79[0], fRec85[0]), std::max<float>(fRec91[0], fRec92[0]));
			fVbargraph6 = FAUSTFLOAT(std::min<float>(12.0f, std::max<float>(-12.0f, fTemp231)));
			float fTemp232 = 0.025f * fTemp231;
			float fTemp233 = std::pow(1e+01f, fTemp232);
			float fTemp234 = mydsp_faustpower2_f(fTemp233) + -1.0f;
			float fTemp235 = std::sqrt(fTemp233);
			float fTemp236 = fConst141 * ((fConst141 / fTemp235 + 1.4285715f) / fTemp235) + 1.0f;
			float fTemp237 = std::pow(1e+01f, 0.0f - fTemp232);
			float fTemp238 = mydsp_faustpower2_f(fTemp237) + -1.0f;
			float fTemp239 = std::sqrt(fTemp237);
			float fTemp240 = fConst153 * ((fConst153 / fTemp239 + 1.4285715f) / fTemp239) + 1.0f;
			fRec106[0] = fConst163 * (fRec82[2] + fRec82[0] + 2.0f * fRec82[1]) - fConst161 * (fConst160 * fRec106[2] + fConst156 * fRec106[1]);
			fRec105[0] = fConst161 * (fRec106[2] + fRec106[0] + 2.0f * fRec106[1]) - fConst159 * (fConst158 * fRec105[2] + fConst156 * fRec105[1]);
			fRec104[0] = fConst159 * (fRec105[2] + fRec105[0] + 2.0f * fRec105[1]) - fConst175 * (fConst174 * fRec104[2] + fConst168 * fRec104[1]);
			fRec103[0] = fConst175 * (fConst167 * fRec104[0] + fConst176 * fRec104[1] + fConst167 * fRec104[2]) - fConst173 * (fConst172 * fRec103[2] + fConst168 * fRec103[1]);
			fRec102[0] = fConst173 * (fConst167 * fRec103[0] + fConst176 * fRec103[1] + fConst167 * fRec103[2]) - fConst171 * (fConst170 * fRec102[2] + fConst168 * fRec102[1]);
			float fTemp241 = std::fabs(fConst171 * (fConst167 * fRec102[0] + fConst176 * fRec102[1] + fConst167 * fRec102[2]));
			fVec152[0] = fTemp241;
			float fTemp242 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp241));
			int iTemp243 = (fTemp242 > fSlow103) + (fTemp242 > fSlow101);
			float fTemp244 = fTemp242 + -6.0f - fSlow5;
			float fTemp245 = 0.0f - fSlow105 * std::max<float>(0.0f, ((iTemp243 == 0) ? 0.0f : ((iTemp243 == 1) ? fSlow104 * mydsp_faustpower2_f(fSlow102 + fTemp244) : fSlow71 + fTemp244)));
			float fTemp246 = ((fTemp245 > fRec101[1]) ? fSlow111 : fSlow108);
			fRec101[0] = fTemp245 * (1.0f - fTemp246) + fRec101[1] * fTemp246;
			fRec112[0] = fConst163 * (fRec88[2] + fRec88[0] + 2.0f * fRec88[1]) - fConst161 * (fConst160 * fRec112[2] + fConst156 * fRec112[1]);
			fRec111[0] = fConst161 * (fRec112[2] + fRec112[0] + 2.0f * fRec112[1]) - fConst159 * (fConst158 * fRec111[2] + fConst156 * fRec111[1]);
			fRec110[0] = fConst159 * (fRec111[2] + fRec111[0] + 2.0f * fRec111[1]) - fConst175 * (fConst174 * fRec110[2] + fConst168 * fRec110[1]);
			fRec109[0] = fConst175 * (fConst167 * fRec110[0] + fConst176 * fRec110[1] + fConst167 * fRec110[2]) - fConst173 * (fConst172 * fRec109[2] + fConst168 * fRec109[1]);
			fRec108[0] = fConst173 * (fConst167 * fRec109[0] + fConst176 * fRec109[1] + fConst167 * fRec109[2]) - fConst171 * (fConst170 * fRec108[2] + fConst168 * fRec108[1]);
			float fTemp247 = std::fabs(fConst171 * (fConst167 * fRec108[0] + fConst176 * fRec108[1] + fConst167 * fRec108[2]));
			fVec153[0] = fTemp247;
			float fTemp248 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp247));
			int iTemp249 = (fTemp248 > fSlow103) + (fTemp248 > fSlow101);
			float fTemp250 = fTemp248 + -6.0f - fSlow5;
			float fTemp251 = 0.0f - fSlow105 * std::max<float>(0.0f, ((iTemp249 == 0) ? 0.0f : ((iTemp249 == 1) ? fSlow104 * mydsp_faustpower2_f(fSlow102 + fTemp250) : fSlow71 + fTemp250)));
			float fTemp252 = ((fTemp251 > fRec107[1]) ? fSlow111 : fSlow108);
			fRec107[0] = fTemp251 * (1.0f - fTemp252) + fRec107[1] * fTemp252;
			float fTemp253 = std::max<float>(fTemp241, fVec152[1]);
			fVec154[0] = fTemp253;
			float fTemp254 = std::max<float>(fTemp253, fVec154[2]);
			fVec155[0] = fTemp254;
			float fTemp255 = std::max<float>(fTemp254, fVec155[4]);
			fVec156[0] = fTemp255;
			float fTemp256 = std::max<float>(fTemp255, fVec156[8]);
			fVec157[IOTA0 & 31] = fTemp256;
			float fTemp257 = std::max<float>(fTemp256, fVec157[(IOTA0 - 16) & 31]);
			fVec158[IOTA0 & 63] = fTemp257;
			float fTemp258 = std::max<float>(fTemp257, fVec158[(IOTA0 - 32) & 63]);
			fVec159[IOTA0 & 127] = fTemp258;
			float fTemp259 = std::max<float>(fTemp258, fVec159[(IOTA0 - 64) & 127]);
			fVec160[IOTA0 & 255] = fTemp259;
			float fTemp260 = std::max<float>(fTemp259, fVec160[(IOTA0 - 128) & 255]);
			fVec161[IOTA0 & 511] = fTemp260;
			float fTemp261 = std::max<float>(fTemp260, fVec161[(IOTA0 - 256) & 511]);
			fVec162[IOTA0 & 1023] = fTemp261;
			float fTemp262 = std::max<float>(fTemp261, fVec162[(IOTA0 - 512) & 1023]);
			fVec163[IOTA0 & 2047] = fTemp262;
			fVec164[IOTA0 & 4095] = std::max<float>(fTemp262, fVec163[(IOTA0 - 1024) & 2047]);
			float fTemp263 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst119) ? fTemp241 : -3.4028235e+38f), ((iConst120) ? fVec154[iConst119] : -3.4028235e+38f)), ((iConst121) ? fVec155[iConst122] : -3.4028235e+38f)), ((iConst123) ? fVec156[iConst124] : -3.4028235e+38f)), ((iConst125) ? fVec157[(IOTA0 - iConst126) & 31] : -3.4028235e+38f)), ((iConst127) ? fVec158[(IOTA0 - iConst128) & 63] : -3.4028235e+38f)), ((iConst129) ? fVec159[(IOTA0 - iConst130) & 127] : -3.4028235e+38f)), ((iConst131) ? fVec160[(IOTA0 - iConst132) & 255] : -3.4028235e+38f)), ((iConst133) ? fVec161[(IOTA0 - iConst134) & 511] : -3.4028235e+38f)), ((iConst135) ? fVec162[(IOTA0 - iConst136) & 1023] : -3.4028235e+38f)), ((iConst137) ? fVec163[(IOTA0 - iConst138) & 2047] : -3.4028235e+38f)), ((iConst139) ? fVec164[(IOTA0 - iConst140) & 4095] : -3.4028235e+38f))));
			int iTemp264 = (fTemp263 > fSlow33) + (fTemp263 > fSlow32);
			float fTemp265 = fTemp263 + 4e+01f;
			float fTemp266 = std::max<float>(fSlow27, fSlow113 * ((iTemp264 == 0) ? fTemp265 - fSlow5 : ((iTemp264 == 1) ? fSlow34 * mydsp_faustpower2_f(fTemp265 - fSlow31) : 0.0f)));
			float fTemp267 = (((fSlow115 * fTemp266) > fRec113[1]) ? fSlow123 : fSlow120);
			fRec113[0] = fSlow115 * fTemp266 * (1.0f - fTemp267) + fRec113[1] * fTemp267;
			float fTemp268 = std::max<float>(fTemp247, fVec153[1]);
			fVec165[0] = fTemp268;
			float fTemp269 = std::max<float>(fTemp268, fVec165[2]);
			fVec166[0] = fTemp269;
			float fTemp270 = std::max<float>(fTemp269, fVec166[4]);
			fVec167[0] = fTemp270;
			float fTemp271 = std::max<float>(fTemp270, fVec167[8]);
			fVec168[IOTA0 & 31] = fTemp271;
			float fTemp272 = std::max<float>(fTemp271, fVec168[(IOTA0 - 16) & 31]);
			fVec169[IOTA0 & 63] = fTemp272;
			float fTemp273 = std::max<float>(fTemp272, fVec169[(IOTA0 - 32) & 63]);
			fVec170[IOTA0 & 127] = fTemp273;
			float fTemp274 = std::max<float>(fTemp273, fVec170[(IOTA0 - 64) & 127]);
			fVec171[IOTA0 & 255] = fTemp274;
			float fTemp275 = std::max<float>(fTemp274, fVec171[(IOTA0 - 128) & 255]);
			fVec172[IOTA0 & 511] = fTemp275;
			float fTemp276 = std::max<float>(fTemp275, fVec172[(IOTA0 - 256) & 511]);
			fVec173[IOTA0 & 1023] = fTemp276;
			float fTemp277 = std::max<float>(fTemp276, fVec173[(IOTA0 - 512) & 1023]);
			fVec174[IOTA0 & 2047] = fTemp277;
			fVec175[IOTA0 & 4095] = std::max<float>(fTemp277, fVec174[(IOTA0 - 1024) & 2047]);
			float fTemp278 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst119) ? fTemp247 : -3.4028235e+38f), ((iConst120) ? fVec165[iConst119] : -3.4028235e+38f)), ((iConst121) ? fVec166[iConst122] : -3.4028235e+38f)), ((iConst123) ? fVec167[iConst124] : -3.4028235e+38f)), ((iConst125) ? fVec168[(IOTA0 - iConst126) & 31] : -3.4028235e+38f)), ((iConst127) ? fVec169[(IOTA0 - iConst128) & 63] : -3.4028235e+38f)), ((iConst129) ? fVec170[(IOTA0 - iConst130) & 127] : -3.4028235e+38f)), ((iConst131) ? fVec171[(IOTA0 - iConst132) & 255] : -3.4028235e+38f)), ((iConst133) ? fVec172[(IOTA0 - iConst134) & 511] : -3.4028235e+38f)), ((iConst135) ? fVec173[(IOTA0 - iConst136) & 1023] : -3.4028235e+38f)), ((iConst137) ? fVec174[(IOTA0 - iConst138) & 2047] : -3.4028235e+38f)), ((iConst139) ? fVec175[(IOTA0 - iConst140) & 4095] : -3.4028235e+38f))));
			int iTemp279 = (fTemp278 > fSlow33) + (fTemp278 > fSlow32);
			float fTemp280 = fTemp278 + 4e+01f;
			float fTemp281 = std::max<float>(fSlow27, fSlow113 * ((iTemp279 == 0) ? fTemp280 - fSlow5 : ((iTemp279 == 1) ? fSlow34 * mydsp_faustpower2_f(fTemp280 - fSlow31) : 0.0f)));
			float fTemp282 = (((fSlow115 * fTemp281) > fRec114[1]) ? fSlow123 : fSlow120);
			fRec114[0] = fSlow115 * fTemp281 * (1.0f - fTemp282) + fRec114[1] * fTemp282;
			float fTemp283 = std::min<float>(fSlow26 + std::min<float>(fRec101[0], fRec107[0]), std::max<float>(fRec113[0], fRec114[0]));
			fVbargraph7 = FAUSTFLOAT(std::min<float>(12.0f, std::max<float>(-12.0f, fTemp283)));
			float fTemp284 = 0.025f * fTemp283;
			float fTemp285 = std::pow(1e+01f, fTemp284);
			float fTemp286 = mydsp_faustpower2_f(fTemp285) + -1.0f;
			float fTemp287 = std::sqrt(fTemp285);
			float fTemp288 = fConst153 * ((fConst153 / fTemp287 + 1.4285715f) / fTemp287) + 1.0f;
			float fTemp289 = std::pow(1e+01f, 0.0f - fTemp284);
			float fTemp290 = mydsp_faustpower2_f(fTemp289) + -1.0f;
			float fTemp291 = std::sqrt(fTemp289);
			float fTemp292 = fConst165 * ((fConst165 / fTemp291 + 1.4285715f) / fTemp291) + 1.0f;
			fRec125[0] = fConst175 * (fRec104[2] + fRec104[0] + 2.0f * fRec104[1]) - fConst173 * (fConst172 * fRec125[2] + fConst168 * fRec125[1]);
			fRec124[0] = fConst173 * (fRec125[2] + fRec125[0] + 2.0f * fRec125[1]) - fConst171 * (fConst170 * fRec124[2] + fConst168 * fRec124[1]);
			float fTemp293 = std::fabs(fConst171 * (fRec124[2] + fRec124[0] + 2.0f * fRec124[1]));
			fVec176[0] = fTemp293;
			float fTemp294 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp293));
			int iTemp295 = (fTemp294 > fSlow127) + (fTemp294 > fSlow125);
			float fTemp296 = fTemp294 - fSlow5;
			float fTemp297 = 0.0f - fSlow128 * std::max<float>(0.0f, ((iTemp295 == 0) ? 0.0f : ((iTemp295 == 1) ? fSlow104 * mydsp_faustpower2_f(fSlow126 + fTemp296) : fSlow124 + fTemp296)));
			float fTemp298 = ((fTemp297 > fRec123[1]) ? fSlow134 : fSlow131);
			fRec123[0] = fTemp297 * (1.0f - fTemp298) + fRec123[1] * fTemp298;
			fRec128[0] = fConst175 * (fRec110[2] + fRec110[0] + 2.0f * fRec110[1]) - fConst173 * (fConst172 * fRec128[2] + fConst168 * fRec128[1]);
			fRec127[0] = fConst173 * (fRec128[2] + fRec128[0] + 2.0f * fRec128[1]) - fConst171 * (fConst170 * fRec127[2] + fConst168 * fRec127[1]);
			float fTemp299 = std::fabs(fConst171 * (fRec127[2] + fRec127[0] + 2.0f * fRec127[1]));
			fVec177[0] = fTemp299;
			float fTemp300 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp299));
			int iTemp301 = (fTemp300 > fSlow127) + (fTemp300 > fSlow125);
			float fTemp302 = fTemp300 - fSlow5;
			float fTemp303 = 0.0f - fSlow128 * std::max<float>(0.0f, ((iTemp301 == 0) ? 0.0f : ((iTemp301 == 1) ? fSlow104 * mydsp_faustpower2_f(fSlow126 + fTemp302) : fSlow124 + fTemp302)));
			float fTemp304 = ((fTemp303 > fRec126[1]) ? fSlow134 : fSlow131);
			fRec126[0] = fTemp303 * (1.0f - fTemp304) + fRec126[1] * fTemp304;
			float fTemp305 = std::max<float>(fTemp293, fVec176[1]);
			fVec178[0] = fTemp305;
			float fTemp306 = std::max<float>(fTemp305, fVec178[2]);
			fVec179[0] = fTemp306;
			float fTemp307 = std::max<float>(fTemp306, fVec179[4]);
			fVec180[0] = fTemp307;
			float fTemp308 = std::max<float>(fTemp307, fVec180[8]);
			fVec181[IOTA0 & 31] = fTemp308;
			float fTemp309 = std::max<float>(fTemp308, fVec181[(IOTA0 - 16) & 31]);
			fVec182[IOTA0 & 63] = fTemp309;
			float fTemp310 = std::max<float>(fTemp309, fVec182[(IOTA0 - 32) & 63]);
			fVec183[IOTA0 & 127] = fTemp310;
			float fTemp311 = std::max<float>(fTemp310, fVec183[(IOTA0 - 64) & 127]);
			fVec184[IOTA0 & 255] = fTemp311;
			float fTemp312 = std::max<float>(fTemp311, fVec184[(IOTA0 - 128) & 255]);
			fVec185[IOTA0 & 511] = fTemp312;
			float fTemp313 = std::max<float>(fTemp312, fVec185[(IOTA0 - 256) & 511]);
			fVec186[IOTA0 & 1023] = fTemp313;
			float fTemp314 = std::max<float>(fTemp313, fVec186[(IOTA0 - 512) & 1023]);
			fVec187[IOTA0 & 2047] = fTemp314;
			fVec188[IOTA0 & 4095] = std::max<float>(fTemp314, fVec187[(IOTA0 - 1024) & 2047]);
			float fTemp315 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst119) ? fTemp293 : -3.4028235e+38f), ((iConst120) ? fVec178[iConst119] : -3.4028235e+38f)), ((iConst121) ? fVec179[iConst122] : -3.4028235e+38f)), ((iConst123) ? fVec180[iConst124] : -3.4028235e+38f)), ((iConst125) ? fVec181[(IOTA0 - iConst126) & 31] : -3.4028235e+38f)), ((iConst127) ? fVec182[(IOTA0 - iConst128) & 63] : -3.4028235e+38f)), ((iConst129) ? fVec183[(IOTA0 - iConst130) & 127] : -3.4028235e+38f)), ((iConst131) ? fVec184[(IOTA0 - iConst132) & 255] : -3.4028235e+38f)), ((iConst133) ? fVec185[(IOTA0 - iConst134) & 511] : -3.4028235e+38f)), ((iConst135) ? fVec186[(IOTA0 - iConst136) & 1023] : -3.4028235e+38f)), ((iConst137) ? fVec187[(IOTA0 - iConst138) & 2047] : -3.4028235e+38f)), ((iConst139) ? fVec188[(IOTA0 - iConst140) & 4095] : -3.4028235e+38f))));
			int iTemp316 = (fTemp315 > fSlow33) + (fTemp315 > fSlow32);
			float fTemp317 = fTemp315 + 4e+01f;
			float fTemp318 = std::max<float>(fSlow27, fSlow113 * ((iTemp316 == 0) ? fTemp317 - fSlow5 : ((iTemp316 == 1) ? fSlow34 * mydsp_faustpower2_f(fTemp317 - fSlow31) : 0.0f)));
			float fTemp319 = (((fSlow115 * fTemp318) > fRec129[1]) ? fSlow141 : fSlow138);
			fRec129[0] = fSlow115 * fTemp318 * (1.0f - fTemp319) + fRec129[1] * fTemp319;
			float fTemp320 = std::max<float>(fTemp299, fVec177[1]);
			fVec189[0] = fTemp320;
			float fTemp321 = std::max<float>(fTemp320, fVec189[2]);
			fVec190[0] = fTemp321;
			float fTemp322 = std::max<float>(fTemp321, fVec190[4]);
			fVec191[0] = fTemp322;
			float fTemp323 = std::max<float>(fTemp322, fVec191[8]);
			fVec192[IOTA0 & 31] = fTemp323;
			float fTemp324 = std::max<float>(fTemp323, fVec192[(IOTA0 - 16) & 31]);
			fVec193[IOTA0 & 63] = fTemp324;
			float fTemp325 = std::max<float>(fTemp324, fVec193[(IOTA0 - 32) & 63]);
			fVec194[IOTA0 & 127] = fTemp325;
			float fTemp326 = std::max<float>(fTemp325, fVec194[(IOTA0 - 64) & 127]);
			fVec195[IOTA0 & 255] = fTemp326;
			float fTemp327 = std::max<float>(fTemp326, fVec195[(IOTA0 - 128) & 255]);
			fVec196[IOTA0 & 511] = fTemp327;
			float fTemp328 = std::max<float>(fTemp327, fVec196[(IOTA0 - 256) & 511]);
			fVec197[IOTA0 & 1023] = fTemp328;
			float fTemp329 = std::max<float>(fTemp328, fVec197[(IOTA0 - 512) & 1023]);
			fVec198[IOTA0 & 2047] = fTemp329;
			fVec199[IOTA0 & 4095] = std::max<float>(fTemp329, fVec198[(IOTA0 - 1024) & 2047]);
			float fTemp330 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst119) ? fTemp299 : -3.4028235e+38f), ((iConst120) ? fVec189[iConst119] : -3.4028235e+38f)), ((iConst121) ? fVec190[iConst122] : -3.4028235e+38f)), ((iConst123) ? fVec191[iConst124] : -3.4028235e+38f)), ((iConst125) ? fVec192[(IOTA0 - iConst126) & 31] : -3.4028235e+38f)), ((iConst127) ? fVec193[(IOTA0 - iConst128) & 63] : -3.4028235e+38f)), ((iConst129) ? fVec194[(IOTA0 - iConst130) & 127] : -3.4028235e+38f)), ((iConst131) ? fVec195[(IOTA0 - iConst132) & 255] : -3.4028235e+38f)), ((iConst133) ? fVec196[(IOTA0 - iConst134) & 511] : -3.4028235e+38f)), ((iConst135) ? fVec197[(IOTA0 - iConst136) & 1023] : -3.4028235e+38f)), ((iConst137) ? fVec198[(IOTA0 - iConst138) & 2047] : -3.4028235e+38f)), ((iConst139) ? fVec199[(IOTA0 - iConst140) & 4095] : -3.4028235e+38f))));
			int iTemp331 = (fTemp330 > fSlow33) + (fTemp330 > fSlow32);
			float fTemp332 = fTemp330 + 4e+01f;
			float fTemp333 = std::max<float>(fSlow27, fSlow113 * ((iTemp331 == 0) ? fTemp332 - fSlow5 : ((iTemp331 == 1) ? fSlow34 * mydsp_faustpower2_f(fTemp332 - fSlow31) : 0.0f)));
			float fTemp334 = (((fSlow115 * fTemp333) > fRec130[1]) ? fSlow141 : fSlow138);
			fRec130[0] = fSlow115 * fTemp333 * (1.0f - fTemp334) + fRec130[1] * fTemp334;
			float fTemp335 = std::min<float>(fSlow26 + std::min<float>(fRec123[0], fRec126[0]), std::max<float>(fRec129[0], fRec130[0]));
			fVbargraph8 = FAUSTFLOAT(std::min<float>(12.0f, std::max<float>(-12.0f, fTemp335)));
			float fTemp336 = std::pow(1e+01f, 0.025f * fTemp335);
			float fTemp337 = mydsp_faustpower2_f(fTemp336) + -1.0f;
			float fTemp338 = std::sqrt(fTemp336);
			float fTemp339 = fConst165 * ((fConst165 / fTemp338 + 1.4285715f) / fTemp338) + 1.0f;
			float fTemp340 = fRec131[1] + fConst165 * ((fTemp88 - fRec132[1]) / fTemp338);
			float fTemp341 = fTemp340 / fTemp339;
			fRec131[0] = 2.0f * fTemp341 - fRec131[1];
			float fTemp342 = fTemp338 * fTemp339;
			float fTemp343 = fRec132[1] + fConst165 * (fTemp340 / fTemp342);
			fRec132[0] = 2.0f * fTemp343 - fRec132[1];
			float fRec133 = fTemp341;
			float fRec134 = fTemp343;
			float fTemp344 = fRec134 * fTemp337;
			float fTemp345 = fTemp336 + -1.0f;
			float fTemp346 = fRec133 * fTemp345;
			float fTemp347 = fTemp88 + 1.4285715f * fTemp346 + fTemp344;
			float fTemp348 = fRec119[1] + fConst165 * ((fTemp347 - fRec120[1]) / fTemp291);
			float fTemp349 = fTemp348 / fTemp292;
			fRec119[0] = 2.0f * fTemp349 - fRec119[1];
			float fTemp350 = fTemp291 * fTemp292;
			float fTemp351 = fRec120[1] + fConst165 * (fTemp348 / fTemp350);
			fRec120[0] = 2.0f * fTemp351 - fRec120[1];
			float fRec121 = fTemp349;
			float fRec122 = fTemp351;
			float fTemp352 = fRec122 * fTemp290;
			float fTemp353 = fTemp88 + fTemp344;
			float fTemp354 = fTemp289 + -1.0f;
			float fTemp355 = fTemp346 + fRec121 * fTemp354;
			float fTemp356 = 1.4285715f * fTemp355 + fTemp353 + fTemp352;
			float fTemp357 = fRec115[1] + fConst153 * ((fTemp356 - fRec116[1]) / fTemp287);
			float fTemp358 = fTemp357 / fTemp288;
			fRec115[0] = 2.0f * fTemp358 - fRec115[1];
			float fTemp359 = fTemp287 * fTemp288;
			float fTemp360 = fRec116[1] + fConst153 * (fTemp357 / fTemp359);
			fRec116[0] = 2.0f * fTemp360 - fRec116[1];
			float fRec117 = fTemp358;
			float fRec118 = fTemp360;
			float fTemp361 = fRec118 * fTemp286;
			float fTemp362 = fTemp353 + fTemp352;
			float fTemp363 = fTemp285 + -1.0f;
			float fTemp364 = fTemp355 + fRec117 * fTemp363;
			float fTemp365 = 1.4285715f * fTemp364 + fTemp362 + fTemp361;
			float fTemp366 = fRec97[1] + fConst153 * ((fTemp365 - fRec98[1]) / fTemp239);
			float fTemp367 = fTemp366 / fTemp240;
			fRec97[0] = 2.0f * fTemp367 - fRec97[1];
			float fTemp368 = fTemp239 * fTemp240;
			float fTemp369 = fRec98[1] + fConst153 * (fTemp366 / fTemp368);
			fRec98[0] = 2.0f * fTemp369 - fRec98[1];
			float fRec99 = fTemp367;
			float fRec100 = fTemp369;
			float fTemp370 = fRec100 * fTemp238;
			float fTemp371 = fTemp362 + fTemp361;
			float fTemp372 = fTemp237 + -1.0f;
			float fTemp373 = fTemp364 + fRec99 * fTemp372;
			float fTemp374 = 1.4285715f * fTemp373 + fTemp371 + fTemp370;
			float fTemp375 = fRec93[1] + fConst141 * ((fTemp374 - fRec94[1]) / fTemp235);
			float fTemp376 = fTemp375 / fTemp236;
			fRec93[0] = 2.0f * fTemp376 - fRec93[1];
			float fTemp377 = fTemp235 * fTemp236;
			float fTemp378 = fRec94[1] + fConst141 * (fTemp375 / fTemp377);
			fRec94[0] = 2.0f * fTemp378 - fRec94[1];
			float fRec95 = fTemp376;
			float fRec96 = fTemp378;
			float fTemp379 = fRec96 * fTemp234;
			float fTemp380 = fTemp371 + fTemp370;
			float fTemp381 = fTemp233 + -1.0f;
			float fTemp382 = fTemp373 + fRec95 * fTemp381;
			float fTemp383 = 1.4285715f * fTemp382 + fTemp380 + fTemp379;
			float fTemp384 = fRec75[1] + fConst141 * ((fTemp383 - fRec76[1]) / fTemp187);
			float fTemp385 = fTemp384 / fTemp188;
			fRec75[0] = 2.0f * fTemp385 - fRec75[1];
			float fTemp386 = fTemp187 * fTemp188;
			float fTemp387 = fRec76[1] + fConst141 * (fTemp384 / fTemp386);
			fRec76[0] = 2.0f * fTemp387 - fRec76[1];
			float fRec77 = fTemp385;
			float fRec78 = fTemp387;
			float fTemp388 = fTemp380 + fTemp379 + fRec78 * fTemp186;
			float fTemp389 = fTemp185 + -1.0f;
			float fTemp390 = fTemp382 + fRec77 * fTemp389;
			float fTemp391 = 1.4285715f * fTemp390 + fTemp388;
			float fTemp392 = fRec71[1] + fConst2 * ((fTemp391 - fRec72[1]) / fTemp183);
			float fTemp393 = fTemp392 / fTemp184;
			fRec71[0] = 2.0f * fTemp393 - fRec71[1];
			float fTemp394 = fTemp183 * fTemp184;
			float fTemp395 = fRec72[1] + fConst2 * (fTemp392 / fTemp394);
			fRec72[0] = 2.0f * fTemp395 - fRec72[1];
			float fRec73 = fTemp393;
			float fRec74 = fTemp395;
			float fTemp396 = fTemp181 + -1.0f;
			float fTemp397 = fTemp388 + 1.4285715f * (fTemp390 + fRec73 * fTemp396) + fRec74 * fTemp182;
			float fTemp398 = fRec53[1] + fConst2 * fTemp135 * (fTemp397 - fRec54[1]);
			float fTemp399 = fTemp398 / fTemp136;
			fRec53[0] = 2.0f * fTemp399 - fRec53[1];
			float fTemp400 = fRec54[1] + fConst2 * (fTemp135 * fTemp398 / fTemp136);
			fRec54[0] = 2.0f * fTemp400 - fRec54[1];
			float fRec55 = fTemp399;
			float fRec56 = fTemp400;
			float fTemp401 = 1.0f - fTemp133;
			fRec135[0] = fSlow142 + fConst14 * fRec135[1];
			float fTemp402 = 1.0f - fRec135[0];
			float fTemp403 = fRec135[0] * fTemp88 + fTemp402 * (fTemp133 * (fTemp133 * fTemp397 + 1.4285715f * fRec55 * fTemp401) + fRec56 * fTemp134);
			float fTemp404 = std::fabs(std::fabs(fRec136[1]) + std::fabs(fRec137[1]));
			fVec200[0] = fTemp404;
			float fTemp405 = std::max<float>(fTemp404, fVec200[1]);
			fVec201[0] = fTemp405;
			float fTemp406 = std::max<float>(fTemp405, fVec201[2]);
			fVec202[0] = fTemp406;
			float fTemp407 = std::max<float>(fTemp406, fVec202[4]);
			fVec203[0] = fTemp407;
			fVec204[IOTA0 & 31] = std::max<float>(fTemp407, fVec203[8]);
			float fTemp408 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst26) ? fTemp404 : -3.4028235e+38f), ((iConst27) ? fVec201[iConst26] : -3.4028235e+38f)), ((iConst28) ? fVec202[iConst29] : -3.4028235e+38f)), ((iConst30) ? fVec203[iConst31] : -3.4028235e+38f)), ((iConst32) ? fVec204[(IOTA0 - iConst33) & 31] : -3.4028235e+38f))));
			int iTemp409 = (fTemp408 > fSlow12) + (fTemp408 > fSlow11);
			float fTemp410 = std::max<float>(-3.4028235e+38f, ((iTemp409 == 0) ? fTemp408 + -14.0f - fSlow5 : ((iTemp409 == 1) ? 0.0f - 4194304.0f * mydsp_faustpower2_f(fTemp408 + -14.0f - fSlow5) : 0.0f)));
			float fTemp411 = ((fTemp410 > fRec146[1]) ? 0.0f : fConst34);
			fRec146[0] = fTemp410 * (1.0f - fTemp411) + fRec146[1] * fTemp411;
			float fTemp412 = std::min<float>(1.0f, std::max<float>(0.0f, std::pow(1e+01f, 0.05f * fRec146[0])));
			float fTemp413 = std::tan(fConst35 * std::min<float>(fConst24, fTemp412 * (fConst25 * std::fabs(fRec139[1]) + 0.0176f)));
			float fTemp414 = fTemp413 + 2.0f;
			float fTemp415 = fTemp413 * fTemp414 + 1.0f;
			fVec205[0] = 0.0f - fConst46 * (fConst48 * fRec149[1] - fConst47 * fRec137[2]);
			fRec150[0] = fVec205[1] + fConst46 * (fConst44 * fRec137[1] - 2.0f * (fConst42 * fRec150[1] - fConst41 * fRec137[2]));
			fRec149[0] = fRec150[0];
			fVec206[0] = 0.50032705f * fRec149[1] - fConst53 * fRec147[1];
			fRec148[0] = fConst56 * fRec149[1] + fConst55 * (fVec206[1] - fConst51 * fRec148[1] + 0.50032705f * fRec149[0]);
			fRec147[0] = fRec148[0];
			float fTemp416 = mydsp_faustpower2_f(fRec147[0]);
			fVec207[0] = fTemp416;
			float fTemp417 = fTemp416 + fVec207[1];
			fVec208[0] = fTemp417;
			float fTemp418 = fTemp417 + fVec208[2];
			fVec209[0] = fTemp418;
			float fTemp419 = fTemp418 + fVec209[4];
			fVec210[0] = fTemp419;
			float fTemp420 = fTemp419 + fVec210[8];
			fVec211[IOTA0 & 31] = fTemp420;
			float fTemp421 = fTemp420 + fVec211[(IOTA0 - 16) & 31];
			fVec212[IOTA0 & 63] = fTemp421;
			float fTemp422 = fTemp421 + fVec212[(IOTA0 - 32) & 63];
			fVec213[IOTA0 & 127] = fTemp422;
			float fTemp423 = fTemp422 + fVec213[(IOTA0 - 64) & 127];
			fVec214[IOTA0 & 255] = fTemp423;
			float fTemp424 = fTemp423 + fVec214[(IOTA0 - 128) & 255];
			fVec215[IOTA0 & 511] = fTemp424;
			float fTemp425 = fTemp424 + fVec215[(IOTA0 - 256) & 511];
			fVec216[IOTA0 & 1023] = fTemp425;
			fVec217[IOTA0 & 2047] = fTemp425 + fVec216[(IOTA0 - 512) & 1023];
			fVec218[0] = 0.0f - fConst46 * (fConst48 * fRec153[1] - fConst47 * fRec136[2]);
			fRec154[0] = fVec218[1] + fConst46 * (fConst44 * fRec136[1] - 2.0f * (fConst42 * fRec154[1] - fConst41 * fRec136[2]));
			fRec153[0] = fRec154[0];
			fVec219[0] = 0.50032705f * fRec153[1] - fConst53 * fRec151[1];
			fRec152[0] = fConst56 * fRec153[1] + fConst55 * (fVec219[1] - fConst51 * fRec152[1] + 0.50032705f * fRec153[0]);
			fRec151[0] = fRec152[0];
			float fTemp426 = mydsp_faustpower2_f(fRec151[0]);
			fVec220[0] = fTemp426;
			float fTemp427 = fTemp426 + fVec220[1];
			fVec221[0] = fTemp427;
			float fTemp428 = fTemp427 + fVec221[2];
			fVec222[0] = fTemp428;
			float fTemp429 = fTemp428 + fVec222[4];
			fVec223[0] = fTemp429;
			float fTemp430 = fTemp429 + fVec223[8];
			fVec224[IOTA0 & 31] = fTemp430;
			float fTemp431 = fTemp430 + fVec224[(IOTA0 - 16) & 31];
			fVec225[IOTA0 & 63] = fTemp431;
			float fTemp432 = fTemp431 + fVec225[(IOTA0 - 32) & 63];
			fVec226[IOTA0 & 127] = fTemp432;
			float fTemp433 = fTemp432 + fVec226[(IOTA0 - 64) & 127];
			fVec227[IOTA0 & 255] = fTemp433;
			float fTemp434 = fTemp433 + fVec227[(IOTA0 - 128) & 255];
			fVec228[IOTA0 & 511] = fTemp434;
			float fTemp435 = fTemp434 + fVec228[(IOTA0 - 256) & 511];
			fVec229[IOTA0 & 1023] = fTemp435;
			fVec230[IOTA0 & 2047] = fTemp435 + fVec229[(IOTA0 - 512) & 1023];
			float fTemp436 = fSlow5 + fRec138[1] + (0.691f - (4.3429446f * std::log(std::max<float>(1e-12f, fConst76 * (((iConst74) ? 0.86000985f * fVec230[(IOTA0 - iConst75) & 2047] : 0.0f) + ((iConst72) ? 0.86000985f * fVec229[(IOTA0 - iConst73) & 1023] : 0.0f) + ((iConst70) ? 0.86000985f * fVec228[(IOTA0 - iConst71) & 511] : 0.0f) + ((iConst68) ? 0.86000985f * fVec227[(IOTA0 - iConst69) & 255] : 0.0f) + ((iConst66) ? 0.86000985f * fVec226[(IOTA0 - iConst67) & 127] : 0.0f) + ((iConst64) ? 0.86000985f * fVec225[(IOTA0 - iConst65) & 63] : 0.0f) + ((iConst62) ? 0.86000985f * fVec224[(IOTA0 - iConst63) & 31] : 0.0f) + ((iConst60) ? 0.86000985f * fVec223[iConst61] : 0.0f) + ((iConst58) ? 0.86000985f * fVec222[iConst59] : 0.0f) + ((iConst57) ? 0.86000985f * fTemp426 : 0.0f) + ((iConst38) ? 0.86000985f * fVec221[iConst57] : 0.0f) + ((iConst74) ? 0.86000985f * fVec217[(IOTA0 - iConst75) & 2047] : 0.0f) + ((iConst72) ? 0.86000985f * fVec216[(IOTA0 - iConst73) & 1023] : 0.0f) + ((iConst70) ? 0.86000985f * fVec215[(IOTA0 - iConst71) & 511] : 0.0f) + ((iConst68) ? 0.86000985f * fVec214[(IOTA0 - iConst69) & 255] : 0.0f) + ((iConst66) ? 0.86000985f * fVec213[(IOTA0 - iConst67) & 127] : 0.0f) + ((iConst64) ? 0.86000985f * fVec212[(IOTA0 - iConst65) & 63] : 0.0f) + ((iConst62) ? 0.86000985f * fVec211[(IOTA0 - iConst63) & 31] : 0.0f) + ((iConst60) ? 0.86000985f * fVec210[iConst61] : 0.0f) + ((iConst58) ? 0.86000985f * fVec209[iConst59] : 0.0f) + ((iConst57) ? 0.86000985f * fTemp416 : 0.0f) + ((iConst38) ? 0.86000985f * fVec208[iConst57] : 0.0f)))) + fRec141[1] * fTemp414 + fRec142[1]));
			float fTemp437 = fTemp413 * fTemp436 / fTemp415;
			fRec141[0] = fRec141[1] + 2.0f * fTemp437;
			float fTemp438 = fRec141[1] + fTemp437;
			float fTemp439 = fTemp413 * fTemp438;
			fRec142[0] = fRec142[1] + 2.0f * fTemp439;
			float fRec143 = fTemp438;
			float fRec144 = fTemp436 / fTemp415;
			float fRec145 = fRec142[1] + fTemp439;
			fRec139[0] = fRec143;
			float fRec140 = fRec145;
			fVbargraph9 = FAUSTFLOAT(std::max<float>(-2e+01f, std::min<float>(2e+01f, fRec140)));
			fRec138[0] = fVbargraph9;
			float fTemp440 = std::pow(1e+01f, 0.05f * fRec138[0]);
			fRec136[0] = fTemp440 * fTemp403;
			float fTemp441 = fRec183[1] + fConst165 * ((fTemp95 - fRec184[1]) / fTemp338);
			float fTemp442 = fTemp441 / fTemp339;
			fRec183[0] = 2.0f * fTemp442 - fRec183[1];
			float fTemp443 = fRec184[1] + fConst165 * (fTemp441 / fTemp342);
			fRec184[0] = 2.0f * fTemp443 - fRec184[1];
			float fRec185 = fTemp442;
			float fRec186 = fTemp443;
			float fTemp444 = fRec186 * fTemp337;
			float fTemp445 = fRec185 * fTemp345;
			float fTemp446 = fTemp95 + 1.4285715f * fTemp445 + fTemp444;
			float fTemp447 = fRec179[1] + fConst165 * ((fTemp446 - fRec180[1]) / fTemp291);
			float fTemp448 = fTemp447 / fTemp292;
			fRec179[0] = 2.0f * fTemp448 - fRec179[1];
			float fTemp449 = fRec180[1] + fConst165 * (fTemp447 / fTemp350);
			fRec180[0] = 2.0f * fTemp449 - fRec180[1];
			float fRec181 = fTemp448;
			float fRec182 = fTemp449;
			float fTemp450 = fRec182 * fTemp290;
			float fTemp451 = fTemp95 + fTemp444;
			float fTemp452 = fTemp445 + fRec181 * fTemp354;
			float fTemp453 = 1.4285715f * fTemp452 + fTemp451 + fTemp450;
			float fTemp454 = fRec175[1] + fConst153 * ((fTemp453 - fRec176[1]) / fTemp287);
			float fTemp455 = fTemp454 / fTemp288;
			fRec175[0] = 2.0f * fTemp455 - fRec175[1];
			float fTemp456 = fRec176[1] + fConst153 * (fTemp454 / fTemp359);
			fRec176[0] = 2.0f * fTemp456 - fRec176[1];
			float fRec177 = fTemp455;
			float fRec178 = fTemp456;
			float fTemp457 = fRec178 * fTemp286;
			float fTemp458 = fTemp451 + fTemp450;
			float fTemp459 = fTemp452 + fRec177 * fTemp363;
			float fTemp460 = 1.4285715f * fTemp459 + fTemp458 + fTemp457;
			float fTemp461 = fRec171[1] + fConst153 * ((fTemp460 - fRec172[1]) / fTemp239);
			float fTemp462 = fTemp461 / fTemp240;
			fRec171[0] = 2.0f * fTemp462 - fRec171[1];
			float fTemp463 = fRec172[1] + fConst153 * (fTemp461 / fTemp368);
			fRec172[0] = 2.0f * fTemp463 - fRec172[1];
			float fRec173 = fTemp462;
			float fRec174 = fTemp463;
			float fTemp464 = fRec174 * fTemp238;
			float fTemp465 = fTemp458 + fTemp457;
			float fTemp466 = fTemp459 + fRec173 * fTemp372;
			float fTemp467 = 1.4285715f * fTemp466 + fTemp465 + fTemp464;
			float fTemp468 = fRec167[1] + fConst141 * ((fTemp467 - fRec168[1]) / fTemp235);
			float fTemp469 = fTemp468 / fTemp236;
			fRec167[0] = 2.0f * fTemp469 - fRec167[1];
			float fTemp470 = fRec168[1] + fConst141 * (fTemp468 / fTemp377);
			fRec168[0] = 2.0f * fTemp470 - fRec168[1];
			float fRec169 = fTemp469;
			float fRec170 = fTemp470;
			float fTemp471 = fRec170 * fTemp234;
			float fTemp472 = fTemp465 + fTemp464;
			float fTemp473 = fTemp466 + fRec169 * fTemp381;
			float fTemp474 = 1.4285715f * fTemp473 + fTemp472 + fTemp471;
			float fTemp475 = fRec163[1] + fConst141 * ((fTemp474 - fRec164[1]) / fTemp187);
			float fTemp476 = fTemp475 / fTemp188;
			fRec163[0] = 2.0f * fTemp476 - fRec163[1];
			float fTemp477 = fRec164[1] + fConst141 * (fTemp475 / fTemp386);
			fRec164[0] = 2.0f * fTemp477 - fRec164[1];
			float fRec165 = fTemp476;
			float fRec166 = fTemp477;
			float fTemp478 = fRec166 * fTemp186;
			float fTemp479 = fTemp472 + fTemp471;
			float fTemp480 = fTemp473 + fRec165 * fTemp389;
			float fTemp481 = 1.4285715f * fTemp480 + fTemp479 + fTemp478;
			float fTemp482 = fRec159[1] + fConst2 * ((fTemp481 - fRec160[1]) / fTemp183);
			float fTemp483 = fTemp482 / fTemp184;
			fRec159[0] = 2.0f * fTemp483 - fRec159[1];
			float fTemp484 = fRec160[1] + fConst2 * (fTemp482 / fTemp394);
			fRec160[0] = 2.0f * fTemp484 - fRec160[1];
			float fRec161 = fTemp483;
			float fRec162 = fTemp484;
			float fTemp485 = 1.4285715f * (fTemp480 + fRec161 * fTemp396) + fTemp479 + fTemp478 + fRec162 * fTemp182;
			float fTemp486 = fRec155[1] + fConst2 * fTemp135 * (fTemp485 - fRec156[1]);
			float fTemp487 = fTemp486 / fTemp136;
			fRec155[0] = 2.0f * fTemp487 - fRec155[1];
			float fTemp488 = fRec156[1] + fConst2 * (fTemp135 * fTemp486 / fTemp136);
			fRec156[0] = 2.0f * fTemp488 - fRec156[1];
			float fRec157 = fTemp487;
			float fRec158 = fTemp488;
			float fTemp489 = fRec135[0] * fTemp95 + fTemp402 * (fTemp133 * (fTemp133 * fTemp485 + 1.4285715f * fRec157 * fTemp401) + fRec158 * fTemp134);
			fRec137[0] = fTemp440 * fTemp489;
			float fTemp490 = fSlow13 * fRec136[0] + fSlow10 * fTemp403;
			fVec231[IOTA0 & 2047] = fTemp490;
			float fTemp491 = fSlow13 * fRec137[0] + fSlow10 * fTemp489;
			fVec232[IOTA0 & 2047] = fTemp491;
			float fTemp492 = std::fabs(std::max<float>(std::fabs(fTemp490), std::fabs(fTemp491)));
			int iTemp493 = (fTemp492 >= fRec190[1]) | (float(iRec189[1]) >= fConst179);
			iRec189[0] = ((iTemp493) ? 0 : iRec189[1] + 1);
			fRec190[0] = ((iTemp493) ? fTemp492 : fRec190[1]);
			fRec188[0] = fConst180 * fRec190[0] + fConst178 * fRec188[1];
			float fTemp494 = std::fabs(fRec188[0]);
			fRec187[0] = std::max<float>(fTemp494, fConst181 * fRec187[1] + fConst182 * fTemp494);
			float fTemp495 = std::min<float>(1.0f, 0.8912509f / std::max<float>(fRec187[0], 1.1920929e-07f));
			fVbargraph10 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp495))));
			fRec191[0] = fSlow143 + fConst14 * fRec191[1];
			float fTemp496 = (1.0f - fRec191[0]) * fTemp495;
			float fTemp497 = fTemp4 * fRec191[0] + fTemp496 * fVec231[(IOTA0 - iConst177) & 2047];
			fVec233[0] = fTemp497;
			fRec0[0] = std::max<float>(fRec0[1] - fConst1, std::min<float>(0.0f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(0.00031622776f, std::fabs(fTemp497))))));
			fVbargraph11 = FAUSTFLOAT(fRec0[0]);
			output0[i0] = FAUSTFLOAT(fTemp497);
			float fTemp498 = fRec191[0] * fTemp85 + fTemp496 * fVec232[(IOTA0 - iConst177) & 2047];
			fVec234[0] = fTemp498;
			fVec235[0] = 0.0f - fConst46 * (fConst48 * fRec195[1] - fConst47 * fVec234[1]);
			fRec196[0] = fVec235[1] + fConst46 * (fConst44 * fTemp498 - 2.0f * (fConst42 * fRec196[1] - fConst41 * fVec234[1]));
			fRec195[0] = fRec196[0];
			fVec236[0] = 0.50032705f * fRec195[1] - fConst53 * fRec193[1];
			fRec194[0] = fConst56 * fRec195[1] + fConst55 * (fVec236[1] - fConst51 * fRec194[1] + 0.50032705f * fRec195[0]);
			fRec193[0] = fRec194[0];
			float fTemp499 = mydsp_faustpower2_f(fRec193[0]);
			fVec237[0] = fTemp499;
			float fTemp500 = fTemp499 + fVec237[1];
			fVec238[0] = fTemp500;
			float fTemp501 = fTemp500 + fVec238[2];
			fVec239[0] = fTemp501;
			float fTemp502 = fTemp501 + fVec239[4];
			fVec240[0] = fTemp502;
			float fTemp503 = fTemp502 + fVec240[8];
			fVec241[IOTA0 & 31] = fTemp503;
			float fTemp504 = fTemp503 + fVec241[(IOTA0 - 16) & 31];
			fVec242[IOTA0 & 63] = fTemp504;
			float fTemp505 = fTemp504 + fVec242[(IOTA0 - 32) & 63];
			fVec243[IOTA0 & 127] = fTemp505;
			float fTemp506 = fTemp505 + fVec243[(IOTA0 - 64) & 127];
			fVec244[IOTA0 & 255] = fTemp506;
			float fTemp507 = fTemp506 + fVec244[(IOTA0 - 128) & 255];
			fVec245[IOTA0 & 511] = fTemp507;
			float fTemp508 = fTemp507 + fVec245[(IOTA0 - 256) & 511];
			fVec246[IOTA0 & 1023] = fTemp508;
			float fTemp509 = fTemp508 + fVec246[(IOTA0 - 512) & 1023];
			fVec247[IOTA0 & 2047] = fTemp509;
			float fTemp510 = fTemp509 + fVec247[(IOTA0 - 1024) & 2047];
			fVec248[IOTA0 & 4095] = fTemp510;
			float fTemp511 = fTemp510 + fVec248[(IOTA0 - 2048) & 4095];
			fVec249[IOTA0 & 8191] = fTemp511;
			float fTemp512 = fTemp511 + fVec249[(IOTA0 - 4096) & 8191];
			fVec250[IOTA0 & 16383] = fTemp512;
			float fTemp513 = fTemp512 + fVec250[(IOTA0 - 8192) & 16383];
			fVec251[IOTA0 & 32767] = fTemp513;
			float fTemp514 = fTemp513 + fVec251[(IOTA0 - 16384) & 32767];
			fVec252[IOTA0 & 65535] = fTemp514;
			float fTemp515 = fTemp514 + fVec252[(IOTA0 - 32768) & 65535];
			fVec253[IOTA0 & 131071] = fTemp515;
			float fTemp516 = fTemp515 + fVec253[(IOTA0 - 65536) & 131071];
			fVec254[IOTA0 & 262143] = fTemp516;
			float fTemp517 = fTemp516 + fVec254[(IOTA0 - 131072) & 262143];
			fVec255[IOTA0 & 524287] = fTemp517;
			fVec256[IOTA0 & 1048575] = fTemp517 + fVec255[(IOTA0 - 262144) & 524287];
			fVec257[0] = 0.0f - fConst46 * (fConst48 * fRec199[1] - fConst47 * fVec233[1]);
			fRec200[0] = fVec257[1] + fConst46 * (fConst44 * fTemp497 - 2.0f * (fConst42 * fRec200[1] - fConst41 * fVec233[1]));
			fRec199[0] = fRec200[0];
			fVec258[0] = 0.50032705f * fRec199[1] - fConst53 * fRec197[1];
			fRec198[0] = fConst56 * fRec199[1] + fConst55 * (fVec258[1] - fConst51 * fRec198[1] + 0.50032705f * fRec199[0]);
			fRec197[0] = fRec198[0];
			float fTemp518 = mydsp_faustpower2_f(fRec197[0]);
			fVec259[0] = fTemp518;
			float fTemp519 = fTemp518 + fVec259[1];
			fVec260[0] = fTemp519;
			float fTemp520 = fTemp519 + fVec260[2];
			fVec261[0] = fTemp520;
			float fTemp521 = fTemp520 + fVec261[4];
			fVec262[0] = fTemp521;
			float fTemp522 = fTemp521 + fVec262[8];
			fVec263[IOTA0 & 31] = fTemp522;
			float fTemp523 = fTemp522 + fVec263[(IOTA0 - 16) & 31];
			fVec264[IOTA0 & 63] = fTemp523;
			float fTemp524 = fTemp523 + fVec264[(IOTA0 - 32) & 63];
			fVec265[IOTA0 & 127] = fTemp524;
			float fTemp525 = fTemp524 + fVec265[(IOTA0 - 64) & 127];
			fVec266[IOTA0 & 255] = fTemp525;
			float fTemp526 = fTemp525 + fVec266[(IOTA0 - 128) & 255];
			fVec267[IOTA0 & 511] = fTemp526;
			float fTemp527 = fTemp526 + fVec267[(IOTA0 - 256) & 511];
			fVec268[IOTA0 & 1023] = fTemp527;
			float fTemp528 = fTemp527 + fVec268[(IOTA0 - 512) & 1023];
			fVec269[IOTA0 & 2047] = fTemp528;
			float fTemp529 = fTemp528 + fVec269[(IOTA0 - 1024) & 2047];
			fVec270[IOTA0 & 4095] = fTemp529;
			float fTemp530 = fTemp529 + fVec270[(IOTA0 - 2048) & 4095];
			fVec271[IOTA0 & 8191] = fTemp530;
			float fTemp531 = fTemp530 + fVec271[(IOTA0 - 4096) & 8191];
			fVec272[IOTA0 & 16383] = fTemp531;
			float fTemp532 = fTemp531 + fVec272[(IOTA0 - 8192) & 16383];
			fVec273[IOTA0 & 32767] = fTemp532;
			float fTemp533 = fTemp532 + fVec273[(IOTA0 - 16384) & 32767];
			fVec274[IOTA0 & 65535] = fTemp533;
			float fTemp534 = fTemp533 + fVec274[(IOTA0 - 32768) & 65535];
			fVec275[IOTA0 & 131071] = fTemp534;
			float fTemp535 = fTemp534 + fVec275[(IOTA0 - 65536) & 131071];
			fVec276[IOTA0 & 262143] = fTemp535;
			float fTemp536 = fTemp535 + fVec276[(IOTA0 - 131072) & 262143];
			fVec277[IOTA0 & 524287] = fTemp536;
			fVec278[IOTA0 & 1048575] = fTemp536 + fVec277[(IOTA0 - 262144) & 524287];
			fVbargraph12 = FAUSTFLOAT(4.3429446f * std::log(std::max<float>(1e-12f, fConst116 * (((iConst114) ? 0.86000985f * fVec278[(IOTA0 - iConst115) & 1048575] : 0.0f) + ((iConst112) ? 0.86000985f * fVec277[(IOTA0 - iConst113) & 524287] : 0.0f) + ((iConst110) ? 0.86000985f * fVec276[(IOTA0 - iConst111) & 262143] : 0.0f) + ((iConst108) ? 0.86000985f * fVec275[(IOTA0 - iConst109) & 131071] : 0.0f) + ((iConst106) ? 0.86000985f * fVec274[(IOTA0 - iConst107) & 65535] : 0.0f) + ((iConst104) ? 0.86000985f * fVec273[(IOTA0 - iConst105) & 32767] : 0.0f) + ((iConst102) ? 0.86000985f * fVec272[(IOTA0 - iConst103) & 16383] : 0.0f) + ((iConst100) ? 0.86000985f * fVec271[(IOTA0 - iConst101) & 8191] : 0.0f) + ((iConst98) ? 0.86000985f * fVec270[(IOTA0 - iConst99) & 4095] : 0.0f) + ((iConst96) ? 0.86000985f * fVec269[(IOTA0 - iConst97) & 2047] : 0.0f) + ((iConst94) ? 0.86000985f * fVec268[(IOTA0 - iConst95) & 1023] : 0.0f) + ((iConst92) ? 0.86000985f * fVec267[(IOTA0 - iConst93) & 511] : 0.0f) + ((iConst90) ? 0.86000985f * fVec266[(IOTA0 - iConst91) & 255] : 0.0f) + ((iConst88) ? 0.86000985f * fVec265[(IOTA0 - iConst89) & 127] : 0.0f) + ((iConst86) ? 0.86000985f * fVec264[(IOTA0 - iConst87) & 63] : 0.0f) + ((iConst84) ? 0.86000985f * fVec263[(IOTA0 - iConst85) & 31] : 0.0f) + ((iConst82) ? 0.86000985f * fVec262[iConst83] : 0.0f) + ((iConst80) ? 0.86000985f * fVec261[iConst81] : 0.0f) + ((iConst79) ? 0.86000985f * fTemp518 : 0.0f) + ((iConst78) ? 0.86000985f * fVec260[iConst79] : 0.0f) + ((iConst114) ? 0.86000985f * fVec256[(IOTA0 - iConst115) & 1048575] : 0.0f) + ((iConst112) ? 0.86000985f * fVec255[(IOTA0 - iConst113) & 524287] : 0.0f) + ((iConst110) ? 0.86000985f * fVec254[(IOTA0 - iConst111) & 262143] : 0.0f) + ((iConst108) ? 0.86000985f * fVec253[(IOTA0 - iConst109) & 131071] : 0.0f) + ((iConst106) ? 0.86000985f * fVec252[(IOTA0 - iConst107) & 65535] : 0.0f) + ((iConst104) ? 0.86000985f * fVec251[(IOTA0 - iConst105) & 32767] : 0.0f) + ((iConst102) ? 0.86000985f * fVec250[(IOTA0 - iConst103) & 16383] : 0.0f) + ((iConst100) ? 0.86000985f * fVec249[(IOTA0 - iConst101) & 8191] : 0.0f) + ((iConst98) ? 0.86000985f * fVec248[(IOTA0 - iConst99) & 4095] : 0.0f) + ((iConst96) ? 0.86000985f * fVec247[(IOTA0 - iConst97) & 2047] : 0.0f) + ((iConst94) ? 0.86000985f * fVec246[(IOTA0 - iConst95) & 1023] : 0.0f) + ((iConst92) ? 0.86000985f * fVec245[(IOTA0 - iConst93) & 511] : 0.0f) + ((iConst90) ? 0.86000985f * fVec244[(IOTA0 - iConst91) & 255] : 0.0f) + ((iConst88) ? 0.86000985f * fVec243[(IOTA0 - iConst89) & 127] : 0.0f) + ((iConst86) ? 0.86000985f * fVec242[(IOTA0 - iConst87) & 63] : 0.0f) + ((iConst84) ? 0.86000985f * fVec241[(IOTA0 - iConst85) & 31] : 0.0f) + ((iConst82) ? 0.86000985f * fVec240[iConst83] : 0.0f) + ((iConst80) ? 0.86000985f * fVec239[iConst81] : 0.0f) + ((iConst79) ? 0.86000985f * fTemp499 : 0.0f) + ((iConst78) ? 0.86000985f * fVec238[iConst79] : 0.0f)))) + -0.691f);
			float fTemp537 = fTemp498;
			fRec192[0] = std::max<float>(fRec192[1] - fConst1, std::min<float>(0.0f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(0.00031622776f, std::fabs(fTemp537))))));
			fVbargraph13 = FAUSTFLOAT(fRec192[0]);
			output1[i0] = FAUSTFLOAT(fTemp537);
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
			fVec56[1] = fVec56[0];
			fRec44[1] = fRec44[0];
			fRec43[1] = fRec43[0];
			fVec57[1] = fVec57[0];
			fRec42[1] = fRec42[0];
			fRec41[1] = fRec41[0];
			fVec58[1] = fVec58[0];
			fVec59[2] = fVec59[1];
			fVec59[1] = fVec59[0];
			for (int j8 = 6; j8 > 0; j8 = j8 - 1) {
				fVec60[j8] = fVec60[j8 - 1];
			}
			for (int j9 = 14; j9 > 0; j9 = j9 - 1) {
				fVec61[j9] = fVec61[j9 - 1];
			}
			fVec78[1] = fVec78[0];
			fRec35[1] = fRec35[0];
			fRec34[1] = fRec34[0];
			fRec45[1] = fRec45[0];
			fVec79[1] = fVec79[0];
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
			fVec80[1] = fVec80[0];
			fRec1[1] = fRec1[0];
			fRec50[2] = fRec50[1];
			fRec50[1] = fRec50[0];
			fRec49[2] = fRec49[1];
			fRec49[1] = fRec49[0];
			fRec48[2] = fRec48[1];
			fRec48[1] = fRec48[0];
			fVec81[1] = fVec81[0];
			fRec47[1] = fRec47[0];
			fVec82[2] = fVec82[1];
			fVec82[1] = fVec82[0];
			for (int j10 = 6; j10 > 0; j10 = j10 - 1) {
				fVec83[j10] = fVec83[j10 - 1];
			}
			for (int j11 = 14; j11 > 0; j11 = j11 - 1) {
				fVec84[j11] = fVec84[j11 - 1];
			}
			fRec51[1] = fRec51[0];
			fVec93[2] = fVec93[1];
			fVec93[1] = fVec93[0];
			for (int j12 = 6; j12 > 0; j12 = j12 - 1) {
				fVec94[j12] = fVec94[j12 - 1];
			}
			for (int j13 = 14; j13 > 0; j13 = j13 - 1) {
				fVec95[j13] = fVec95[j13 - 1];
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
			fVec104[1] = fVec104[0];
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
			fVec105[1] = fVec105[0];
			fRec63[1] = fRec63[0];
			fVec106[2] = fVec106[1];
			fVec106[1] = fVec106[0];
			for (int j14 = 6; j14 > 0; j14 = j14 - 1) {
				fVec107[j14] = fVec107[j14 - 1];
			}
			for (int j15 = 14; j15 > 0; j15 = j15 - 1) {
				fVec108[j15] = fVec108[j15 - 1];
			}
			fRec69[1] = fRec69[0];
			fVec117[2] = fVec117[1];
			fVec117[1] = fVec117[0];
			for (int j16 = 6; j16 > 0; j16 = j16 - 1) {
				fVec118[j16] = fVec118[j16 - 1];
			}
			for (int j17 = 14; j17 > 0; j17 = j17 - 1) {
				fVec119[j17] = fVec119[j17 - 1];
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
			fVec128[1] = fVec128[0];
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
			fVec129[1] = fVec129[0];
			fRec85[1] = fRec85[0];
			fVec130[2] = fVec130[1];
			fVec130[1] = fVec130[0];
			for (int j18 = 6; j18 > 0; j18 = j18 - 1) {
				fVec131[j18] = fVec131[j18 - 1];
			}
			for (int j19 = 14; j19 > 0; j19 = j19 - 1) {
				fVec132[j19] = fVec132[j19 - 1];
			}
			fRec91[1] = fRec91[0];
			fVec141[2] = fVec141[1];
			fVec141[1] = fVec141[0];
			for (int j20 = 6; j20 > 0; j20 = j20 - 1) {
				fVec142[j20] = fVec142[j20 - 1];
			}
			for (int j21 = 14; j21 > 0; j21 = j21 - 1) {
				fVec143[j21] = fVec143[j21 - 1];
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
			fVec152[1] = fVec152[0];
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
			fVec153[1] = fVec153[0];
			fRec107[1] = fRec107[0];
			fVec154[2] = fVec154[1];
			fVec154[1] = fVec154[0];
			for (int j22 = 6; j22 > 0; j22 = j22 - 1) {
				fVec155[j22] = fVec155[j22 - 1];
			}
			for (int j23 = 14; j23 > 0; j23 = j23 - 1) {
				fVec156[j23] = fVec156[j23 - 1];
			}
			fRec113[1] = fRec113[0];
			fVec165[2] = fVec165[1];
			fVec165[1] = fVec165[0];
			for (int j24 = 6; j24 > 0; j24 = j24 - 1) {
				fVec166[j24] = fVec166[j24 - 1];
			}
			for (int j25 = 14; j25 > 0; j25 = j25 - 1) {
				fVec167[j25] = fVec167[j25 - 1];
			}
			fRec114[1] = fRec114[0];
			fRec125[2] = fRec125[1];
			fRec125[1] = fRec125[0];
			fRec124[2] = fRec124[1];
			fRec124[1] = fRec124[0];
			fVec176[1] = fVec176[0];
			fRec123[1] = fRec123[0];
			fRec128[2] = fRec128[1];
			fRec128[1] = fRec128[0];
			fRec127[2] = fRec127[1];
			fRec127[1] = fRec127[0];
			fVec177[1] = fVec177[0];
			fRec126[1] = fRec126[0];
			fVec178[2] = fVec178[1];
			fVec178[1] = fVec178[0];
			for (int j26 = 6; j26 > 0; j26 = j26 - 1) {
				fVec179[j26] = fVec179[j26 - 1];
			}
			for (int j27 = 14; j27 > 0; j27 = j27 - 1) {
				fVec180[j27] = fVec180[j27 - 1];
			}
			fRec129[1] = fRec129[0];
			fVec189[2] = fVec189[1];
			fVec189[1] = fVec189[0];
			for (int j28 = 6; j28 > 0; j28 = j28 - 1) {
				fVec190[j28] = fVec190[j28 - 1];
			}
			for (int j29 = 14; j29 > 0; j29 = j29 - 1) {
				fVec191[j29] = fVec191[j29 - 1];
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
			fVec200[1] = fVec200[0];
			fVec201[2] = fVec201[1];
			fVec201[1] = fVec201[0];
			for (int j30 = 6; j30 > 0; j30 = j30 - 1) {
				fVec202[j30] = fVec202[j30 - 1];
			}
			for (int j31 = 14; j31 > 0; j31 = j31 - 1) {
				fVec203[j31] = fVec203[j31 - 1];
			}
			fRec146[1] = fRec146[0];
			fVec205[1] = fVec205[0];
			fRec150[1] = fRec150[0];
			fRec149[1] = fRec149[0];
			fVec206[1] = fVec206[0];
			fRec148[1] = fRec148[0];
			fRec147[1] = fRec147[0];
			fVec207[1] = fVec207[0];
			fVec208[2] = fVec208[1];
			fVec208[1] = fVec208[0];
			for (int j32 = 6; j32 > 0; j32 = j32 - 1) {
				fVec209[j32] = fVec209[j32 - 1];
			}
			for (int j33 = 14; j33 > 0; j33 = j33 - 1) {
				fVec210[j33] = fVec210[j33 - 1];
			}
			fVec218[1] = fVec218[0];
			fRec154[1] = fRec154[0];
			fRec153[1] = fRec153[0];
			fVec219[1] = fVec219[0];
			fRec152[1] = fRec152[0];
			fRec151[1] = fRec151[0];
			fVec220[1] = fVec220[0];
			fVec221[2] = fVec221[1];
			fVec221[1] = fVec221[0];
			for (int j34 = 6; j34 > 0; j34 = j34 - 1) {
				fVec222[j34] = fVec222[j34 - 1];
			}
			for (int j35 = 14; j35 > 0; j35 = j35 - 1) {
				fVec223[j35] = fVec223[j35 - 1];
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
			fVec233[1] = fVec233[0];
			fRec0[1] = fRec0[0];
			fVec234[1] = fVec234[0];
			fVec235[1] = fVec235[0];
			fRec196[1] = fRec196[0];
			fRec195[1] = fRec195[0];
			fVec236[1] = fVec236[0];
			fRec194[1] = fRec194[0];
			fRec193[1] = fRec193[0];
			fVec237[1] = fVec237[0];
			fVec238[2] = fVec238[1];
			fVec238[1] = fVec238[0];
			for (int j36 = 6; j36 > 0; j36 = j36 - 1) {
				fVec239[j36] = fVec239[j36 - 1];
			}
			for (int j37 = 14; j37 > 0; j37 = j37 - 1) {
				fVec240[j37] = fVec240[j37 - 1];
			}
			fVec257[1] = fVec257[0];
			fRec200[1] = fRec200[0];
			fRec199[1] = fRec199[0];
			fVec258[1] = fVec258[0];
			fRec198[1] = fRec198[0];
			fRec197[1] = fRec197[0];
			fVec259[1] = fVec259[0];
			fVec260[2] = fVec260[1];
			fVec260[1] = fVec260[0];
			for (int j38 = 6; j38 > 0; j38 = j38 - 1) {
				fVec261[j38] = fVec261[j38 - 1];
			}
			for (int j39 = 14; j39 > 0; j39 = j39 - 1) {
				fVec262[j39] = fVec262[j39 - 1];
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
        return "pp_master";
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