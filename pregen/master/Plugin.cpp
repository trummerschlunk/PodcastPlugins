
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
	float fConst18;
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
	float fConst141;
	float fConst142;
	float fConst143;
	float fRec83[3];
	float fRec82[3];
	float fConst144;
	float fConst145;
	float fRec81[3];
	float fConst146;
	float fConst147;
	float fRec80[3];
	float fConst148;
	float fRec79[3];
	float fVec129[2];
	float fRec78[2];
	float fRec89[3];
	float fRec88[3];
	float fRec87[3];
	float fRec86[3];
	float fRec85[3];
	float fVec130[2];
	float fRec84[2];
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
	float fRec90[2];
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
	float fRec91[2];
	FAUSTFLOAT fVbargraph6;
	float fConst149;
	float fConst151;
	float fConst153;
	float fConst154;
	float fConst155;
	float fRec113[3];
	float fRec112[3];
	float fConst156;
	float fConst157;
	float fRec111[3];
	float fConst158;
	float fConst159;
	float fRec110[3];
	float fConst160;
	float fRec109[3];
	float fVec153[2];
	float fRec108[2];
	float fRec119[3];
	float fRec118[3];
	float fRec117[3];
	float fRec116[3];
	float fRec115[3];
	float fVec154[2];
	float fRec114[2];
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
	float fRec120[2];
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
	float fRec121[2];
	FAUSTFLOAT fVbargraph7;
	float fConst161;
	float fConst163;
	float fConst165;
	float fConst166;
	float fConst167;
	float fRec143[3];
	float fRec142[3];
	float fConst168;
	float fConst169;
	float fRec141[3];
	float fConst170;
	float fConst171;
	float fRec140[3];
	float fConst172;
	float fRec139[3];
	float fVec177[2];
	float fRec138[2];
	float fRec149[3];
	float fRec148[3];
	float fRec147[3];
	float fRec146[3];
	float fRec145[3];
	float fVec178[2];
	float fRec144[2];
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
	float fRec150[2];
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
	float fRec151[2];
	FAUSTFLOAT fVbargraph8;
	float fRec170[3];
	float fRec169[3];
	float fVec201[2];
	float fRec168[2];
	float fRec173[3];
	float fRec172[3];
	float fVec202[2];
	float fRec171[2];
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
	float fRec174[2];
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
	float fRec175[2];
	FAUSTFLOAT fVbargraph9;
	float fRec180[2];
	float fRec181[2];
	float fRec184[2];
	float fRec185[2];
	float fRec176[2];
	float fRec177[2];
	float fRec164[2];
	float fRec165[2];
	float fRec188[2];
	float fRec189[2];
	float fRec160[2];
	float fRec161[2];
	float fRec156[2];
	float fRec157[2];
	float fRec192[2];
	float fRec193[2];
	float fRec152[2];
	float fRec153[2];
	float fRec134[2];
	float fRec135[2];
	float fRec196[2];
	float fRec197[2];
	float fRec130[2];
	float fRec131[2];
	float fRec126[2];
	float fRec127[2];
	float fRec200[2];
	float fRec201[2];
	float fRec122[2];
	float fRec123[2];
	float fRec104[2];
	float fRec105[2];
	float fRec204[2];
	float fRec205[2];
	float fRec100[2];
	float fRec101[2];
	float fRec96[2];
	float fRec97[2];
	float fRec208[2];
	float fRec209[2];
	float fRec92[2];
	float fRec93[2];
	float fRec212[2];
	float fRec213[2];
	float fRec216[2];
	float fRec217[2];
	float fRec220[2];
	float fRec221[2];
	float fRec8[3];
	float fRec276[2];
	float fRec277[2];
	float fRec280[2];
	float fRec281[2];
	float fRec272[2];
	float fRec273[2];
	float fRec268[2];
	float fRec269[2];
	float fRec284[2];
	float fRec285[2];
	float fRec264[2];
	float fRec265[2];
	float fRec260[2];
	float fRec261[2];
	float fRec288[2];
	float fRec289[2];
	float fRec256[2];
	float fRec257[2];
	float fRec252[2];
	float fRec253[2];
	float fRec292[2];
	float fRec293[2];
	float fRec248[2];
	float fRec249[2];
	float fRec244[2];
	float fRec245[2];
	float fRec296[2];
	float fRec297[2];
	float fRec240[2];
	float fRec241[2];
	float fRec236[2];
	float fRec237[2];
	float fRec300[2];
	float fRec301[2];
	float fRec232[2];
	float fRec233[2];
	float fRec228[2];
	float fRec229[2];
	float fRec304[2];
	float fRec305[2];
	float fRec224[2];
	float fRec225[2];
	float fRec308[2];
	float fRec309[2];
	float fRec312[2];
	float fRec313[2];
	float fRec316[2];
	float fRec317[2];
	float fRec9[3];
	float fVec225[2048];
	float fVec226[2048];
	int iRec6[2];
	float fRec7[2];
	float fRec5[2];
	float fConst173;
	float fRec4[2];
	FAUSTFLOAT fVbargraph10;
	FAUSTFLOAT fHbargraph0;
	int iConst174;
	float fVec227[2];
	float fRec0[2];
	FAUSTFLOAT fVbargraph11;
	float fVec228[2];
	float fRec324[2];
	float fRec323[2];
	float fVec229[2];
	float fRec322[2];
	float fRec321[2];
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
	float fRec328[2];
	float fRec327[2];
	float fVec249[2];
	float fRec326[2];
	float fRec325[2];
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
	float fRec320[2];
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
		m->declare("compile_options", "-a /tmp/tmp8tb5xkzg.cpp -lang cpp -es 1 -mcd 16 -single -ftz 0");
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
		fConst18 = 0.01f * fConst0;
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
		fConst137 = std::tan(5335.9927f / fConst0);
		float fConst138 = 1.0f / fConst137;
		fConst139 = 1.0f / ((fConst138 + 0.5176381f) / fConst137 + 1.0f);
		float fConst140 = mydsp_faustpower2_f(fConst137);
		fConst141 = 1.0f / fConst140;
		fConst142 = 1.0f / ((fConst138 + 1.4142135f) / fConst137 + 1.0f);
		fConst143 = 1.0f / ((fConst138 + 1.9318516f) / fConst137 + 1.0f);
		fConst144 = (fConst138 + -1.9318516f) / fConst137 + 1.0f;
		fConst145 = 2.0f * (1.0f - fConst141);
		fConst146 = 0.0f - 2.0f / fConst140;
		fConst147 = (fConst138 + -1.4142135f) / fConst137 + 1.0f;
		fConst148 = (fConst138 + -0.5176381f) / fConst137 + 1.0f;
		fConst149 = std::tan(1294.74f / fConst0);
		float fConst150 = 1.0f / fConst149;
		fConst151 = 1.0f / ((fConst150 + 0.5176381f) / fConst149 + 1.0f);
		float fConst152 = mydsp_faustpower2_f(fConst149);
		fConst153 = 1.0f / fConst152;
		fConst154 = 1.0f / ((fConst150 + 1.4142135f) / fConst149 + 1.0f);
		fConst155 = 1.0f / ((fConst150 + 1.9318516f) / fConst149 + 1.0f);
		fConst156 = (fConst150 + -1.9318516f) / fConst149 + 1.0f;
		fConst157 = 2.0f * (1.0f - fConst153);
		fConst158 = 0.0f - 2.0f / fConst152;
		fConst159 = (fConst150 + -1.4142135f) / fConst149 + 1.0f;
		fConst160 = (fConst150 + -0.5176381f) / fConst149 + 1.0f;
		fConst161 = std::tan(314.15927f / fConst0);
		float fConst162 = 1.0f / fConst161;
		fConst163 = 1.0f / ((fConst162 + 0.5176381f) / fConst161 + 1.0f);
		float fConst164 = mydsp_faustpower2_f(fConst161);
		fConst165 = 1.0f / fConst164;
		fConst166 = 1.0f / ((fConst162 + 1.4142135f) / fConst161 + 1.0f);
		fConst167 = 1.0f / ((fConst162 + 1.9318516f) / fConst161 + 1.0f);
		fConst168 = (fConst162 + -1.9318516f) / fConst161 + 1.0f;
		fConst169 = 2.0f * (1.0f - fConst165);
		fConst170 = 0.0f - 2.0f / fConst164;
		fConst171 = (fConst162 + -1.4142135f) / fConst161 + 1.0f;
		fConst172 = (fConst162 + -0.5176381f) / fConst161 + 1.0f;
		fConst173 = 1.0f - fConst16;
		iConst174 = int(0.01f * fConst0);
	}
	
	FAUSTPP_VIRTUAL void instanceResetUserInterface() {
		fVslider0 = FAUSTFLOAT(0.0f);
		fCheckbox0 = FAUSTFLOAT(0.0f);
		fCheckbox1 = FAUSTFLOAT(0.0f);
		fVslider1 = FAUSTFLOAT(-18.0f);
		fCheckbox2 = FAUSTFLOAT(0.0f);
		fCheckbox3 = FAUSTFLOAT(0.0f);
		fVslider2 = FAUSTFLOAT(0.0f);
		fVslider3 = FAUSTFLOAT(0.5f);
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
			fRec83[l192] = 0.0f;
		}
		for (int l193 = 0; l193 < 3; l193 = l193 + 1) {
			fRec82[l193] = 0.0f;
		}
		for (int l194 = 0; l194 < 3; l194 = l194 + 1) {
			fRec81[l194] = 0.0f;
		}
		for (int l195 = 0; l195 < 3; l195 = l195 + 1) {
			fRec80[l195] = 0.0f;
		}
		for (int l196 = 0; l196 < 3; l196 = l196 + 1) {
			fRec79[l196] = 0.0f;
		}
		for (int l197 = 0; l197 < 2; l197 = l197 + 1) {
			fVec129[l197] = 0.0f;
		}
		for (int l198 = 0; l198 < 2; l198 = l198 + 1) {
			fRec78[l198] = 0.0f;
		}
		for (int l199 = 0; l199 < 3; l199 = l199 + 1) {
			fRec89[l199] = 0.0f;
		}
		for (int l200 = 0; l200 < 3; l200 = l200 + 1) {
			fRec88[l200] = 0.0f;
		}
		for (int l201 = 0; l201 < 3; l201 = l201 + 1) {
			fRec87[l201] = 0.0f;
		}
		for (int l202 = 0; l202 < 3; l202 = l202 + 1) {
			fRec86[l202] = 0.0f;
		}
		for (int l203 = 0; l203 < 3; l203 = l203 + 1) {
			fRec85[l203] = 0.0f;
		}
		for (int l204 = 0; l204 < 2; l204 = l204 + 1) {
			fVec130[l204] = 0.0f;
		}
		for (int l205 = 0; l205 < 2; l205 = l205 + 1) {
			fRec84[l205] = 0.0f;
		}
		for (int l206 = 0; l206 < 3; l206 = l206 + 1) {
			fVec131[l206] = 0.0f;
		}
		for (int l207 = 0; l207 < 7; l207 = l207 + 1) {
			fVec132[l207] = 0.0f;
		}
		for (int l208 = 0; l208 < 15; l208 = l208 + 1) {
			fVec133[l208] = 0.0f;
		}
		for (int l209 = 0; l209 < 32; l209 = l209 + 1) {
			fVec134[l209] = 0.0f;
		}
		for (int l210 = 0; l210 < 64; l210 = l210 + 1) {
			fVec135[l210] = 0.0f;
		}
		for (int l211 = 0; l211 < 128; l211 = l211 + 1) {
			fVec136[l211] = 0.0f;
		}
		for (int l212 = 0; l212 < 256; l212 = l212 + 1) {
			fVec137[l212] = 0.0f;
		}
		for (int l213 = 0; l213 < 512; l213 = l213 + 1) {
			fVec138[l213] = 0.0f;
		}
		for (int l214 = 0; l214 < 1024; l214 = l214 + 1) {
			fVec139[l214] = 0.0f;
		}
		for (int l215 = 0; l215 < 2048; l215 = l215 + 1) {
			fVec140[l215] = 0.0f;
		}
		for (int l216 = 0; l216 < 4096; l216 = l216 + 1) {
			fVec141[l216] = 0.0f;
		}
		for (int l217 = 0; l217 < 2; l217 = l217 + 1) {
			fRec90[l217] = 0.0f;
		}
		for (int l218 = 0; l218 < 3; l218 = l218 + 1) {
			fVec142[l218] = 0.0f;
		}
		for (int l219 = 0; l219 < 7; l219 = l219 + 1) {
			fVec143[l219] = 0.0f;
		}
		for (int l220 = 0; l220 < 15; l220 = l220 + 1) {
			fVec144[l220] = 0.0f;
		}
		for (int l221 = 0; l221 < 32; l221 = l221 + 1) {
			fVec145[l221] = 0.0f;
		}
		for (int l222 = 0; l222 < 64; l222 = l222 + 1) {
			fVec146[l222] = 0.0f;
		}
		for (int l223 = 0; l223 < 128; l223 = l223 + 1) {
			fVec147[l223] = 0.0f;
		}
		for (int l224 = 0; l224 < 256; l224 = l224 + 1) {
			fVec148[l224] = 0.0f;
		}
		for (int l225 = 0; l225 < 512; l225 = l225 + 1) {
			fVec149[l225] = 0.0f;
		}
		for (int l226 = 0; l226 < 1024; l226 = l226 + 1) {
			fVec150[l226] = 0.0f;
		}
		for (int l227 = 0; l227 < 2048; l227 = l227 + 1) {
			fVec151[l227] = 0.0f;
		}
		for (int l228 = 0; l228 < 4096; l228 = l228 + 1) {
			fVec152[l228] = 0.0f;
		}
		for (int l229 = 0; l229 < 2; l229 = l229 + 1) {
			fRec91[l229] = 0.0f;
		}
		for (int l230 = 0; l230 < 3; l230 = l230 + 1) {
			fRec113[l230] = 0.0f;
		}
		for (int l231 = 0; l231 < 3; l231 = l231 + 1) {
			fRec112[l231] = 0.0f;
		}
		for (int l232 = 0; l232 < 3; l232 = l232 + 1) {
			fRec111[l232] = 0.0f;
		}
		for (int l233 = 0; l233 < 3; l233 = l233 + 1) {
			fRec110[l233] = 0.0f;
		}
		for (int l234 = 0; l234 < 3; l234 = l234 + 1) {
			fRec109[l234] = 0.0f;
		}
		for (int l235 = 0; l235 < 2; l235 = l235 + 1) {
			fVec153[l235] = 0.0f;
		}
		for (int l236 = 0; l236 < 2; l236 = l236 + 1) {
			fRec108[l236] = 0.0f;
		}
		for (int l237 = 0; l237 < 3; l237 = l237 + 1) {
			fRec119[l237] = 0.0f;
		}
		for (int l238 = 0; l238 < 3; l238 = l238 + 1) {
			fRec118[l238] = 0.0f;
		}
		for (int l239 = 0; l239 < 3; l239 = l239 + 1) {
			fRec117[l239] = 0.0f;
		}
		for (int l240 = 0; l240 < 3; l240 = l240 + 1) {
			fRec116[l240] = 0.0f;
		}
		for (int l241 = 0; l241 < 3; l241 = l241 + 1) {
			fRec115[l241] = 0.0f;
		}
		for (int l242 = 0; l242 < 2; l242 = l242 + 1) {
			fVec154[l242] = 0.0f;
		}
		for (int l243 = 0; l243 < 2; l243 = l243 + 1) {
			fRec114[l243] = 0.0f;
		}
		for (int l244 = 0; l244 < 3; l244 = l244 + 1) {
			fVec155[l244] = 0.0f;
		}
		for (int l245 = 0; l245 < 7; l245 = l245 + 1) {
			fVec156[l245] = 0.0f;
		}
		for (int l246 = 0; l246 < 15; l246 = l246 + 1) {
			fVec157[l246] = 0.0f;
		}
		for (int l247 = 0; l247 < 32; l247 = l247 + 1) {
			fVec158[l247] = 0.0f;
		}
		for (int l248 = 0; l248 < 64; l248 = l248 + 1) {
			fVec159[l248] = 0.0f;
		}
		for (int l249 = 0; l249 < 128; l249 = l249 + 1) {
			fVec160[l249] = 0.0f;
		}
		for (int l250 = 0; l250 < 256; l250 = l250 + 1) {
			fVec161[l250] = 0.0f;
		}
		for (int l251 = 0; l251 < 512; l251 = l251 + 1) {
			fVec162[l251] = 0.0f;
		}
		for (int l252 = 0; l252 < 1024; l252 = l252 + 1) {
			fVec163[l252] = 0.0f;
		}
		for (int l253 = 0; l253 < 2048; l253 = l253 + 1) {
			fVec164[l253] = 0.0f;
		}
		for (int l254 = 0; l254 < 4096; l254 = l254 + 1) {
			fVec165[l254] = 0.0f;
		}
		for (int l255 = 0; l255 < 2; l255 = l255 + 1) {
			fRec120[l255] = 0.0f;
		}
		for (int l256 = 0; l256 < 3; l256 = l256 + 1) {
			fVec166[l256] = 0.0f;
		}
		for (int l257 = 0; l257 < 7; l257 = l257 + 1) {
			fVec167[l257] = 0.0f;
		}
		for (int l258 = 0; l258 < 15; l258 = l258 + 1) {
			fVec168[l258] = 0.0f;
		}
		for (int l259 = 0; l259 < 32; l259 = l259 + 1) {
			fVec169[l259] = 0.0f;
		}
		for (int l260 = 0; l260 < 64; l260 = l260 + 1) {
			fVec170[l260] = 0.0f;
		}
		for (int l261 = 0; l261 < 128; l261 = l261 + 1) {
			fVec171[l261] = 0.0f;
		}
		for (int l262 = 0; l262 < 256; l262 = l262 + 1) {
			fVec172[l262] = 0.0f;
		}
		for (int l263 = 0; l263 < 512; l263 = l263 + 1) {
			fVec173[l263] = 0.0f;
		}
		for (int l264 = 0; l264 < 1024; l264 = l264 + 1) {
			fVec174[l264] = 0.0f;
		}
		for (int l265 = 0; l265 < 2048; l265 = l265 + 1) {
			fVec175[l265] = 0.0f;
		}
		for (int l266 = 0; l266 < 4096; l266 = l266 + 1) {
			fVec176[l266] = 0.0f;
		}
		for (int l267 = 0; l267 < 2; l267 = l267 + 1) {
			fRec121[l267] = 0.0f;
		}
		for (int l268 = 0; l268 < 3; l268 = l268 + 1) {
			fRec143[l268] = 0.0f;
		}
		for (int l269 = 0; l269 < 3; l269 = l269 + 1) {
			fRec142[l269] = 0.0f;
		}
		for (int l270 = 0; l270 < 3; l270 = l270 + 1) {
			fRec141[l270] = 0.0f;
		}
		for (int l271 = 0; l271 < 3; l271 = l271 + 1) {
			fRec140[l271] = 0.0f;
		}
		for (int l272 = 0; l272 < 3; l272 = l272 + 1) {
			fRec139[l272] = 0.0f;
		}
		for (int l273 = 0; l273 < 2; l273 = l273 + 1) {
			fVec177[l273] = 0.0f;
		}
		for (int l274 = 0; l274 < 2; l274 = l274 + 1) {
			fRec138[l274] = 0.0f;
		}
		for (int l275 = 0; l275 < 3; l275 = l275 + 1) {
			fRec149[l275] = 0.0f;
		}
		for (int l276 = 0; l276 < 3; l276 = l276 + 1) {
			fRec148[l276] = 0.0f;
		}
		for (int l277 = 0; l277 < 3; l277 = l277 + 1) {
			fRec147[l277] = 0.0f;
		}
		for (int l278 = 0; l278 < 3; l278 = l278 + 1) {
			fRec146[l278] = 0.0f;
		}
		for (int l279 = 0; l279 < 3; l279 = l279 + 1) {
			fRec145[l279] = 0.0f;
		}
		for (int l280 = 0; l280 < 2; l280 = l280 + 1) {
			fVec178[l280] = 0.0f;
		}
		for (int l281 = 0; l281 < 2; l281 = l281 + 1) {
			fRec144[l281] = 0.0f;
		}
		for (int l282 = 0; l282 < 3; l282 = l282 + 1) {
			fVec179[l282] = 0.0f;
		}
		for (int l283 = 0; l283 < 7; l283 = l283 + 1) {
			fVec180[l283] = 0.0f;
		}
		for (int l284 = 0; l284 < 15; l284 = l284 + 1) {
			fVec181[l284] = 0.0f;
		}
		for (int l285 = 0; l285 < 32; l285 = l285 + 1) {
			fVec182[l285] = 0.0f;
		}
		for (int l286 = 0; l286 < 64; l286 = l286 + 1) {
			fVec183[l286] = 0.0f;
		}
		for (int l287 = 0; l287 < 128; l287 = l287 + 1) {
			fVec184[l287] = 0.0f;
		}
		for (int l288 = 0; l288 < 256; l288 = l288 + 1) {
			fVec185[l288] = 0.0f;
		}
		for (int l289 = 0; l289 < 512; l289 = l289 + 1) {
			fVec186[l289] = 0.0f;
		}
		for (int l290 = 0; l290 < 1024; l290 = l290 + 1) {
			fVec187[l290] = 0.0f;
		}
		for (int l291 = 0; l291 < 2048; l291 = l291 + 1) {
			fVec188[l291] = 0.0f;
		}
		for (int l292 = 0; l292 < 4096; l292 = l292 + 1) {
			fVec189[l292] = 0.0f;
		}
		for (int l293 = 0; l293 < 2; l293 = l293 + 1) {
			fRec150[l293] = 0.0f;
		}
		for (int l294 = 0; l294 < 3; l294 = l294 + 1) {
			fVec190[l294] = 0.0f;
		}
		for (int l295 = 0; l295 < 7; l295 = l295 + 1) {
			fVec191[l295] = 0.0f;
		}
		for (int l296 = 0; l296 < 15; l296 = l296 + 1) {
			fVec192[l296] = 0.0f;
		}
		for (int l297 = 0; l297 < 32; l297 = l297 + 1) {
			fVec193[l297] = 0.0f;
		}
		for (int l298 = 0; l298 < 64; l298 = l298 + 1) {
			fVec194[l298] = 0.0f;
		}
		for (int l299 = 0; l299 < 128; l299 = l299 + 1) {
			fVec195[l299] = 0.0f;
		}
		for (int l300 = 0; l300 < 256; l300 = l300 + 1) {
			fVec196[l300] = 0.0f;
		}
		for (int l301 = 0; l301 < 512; l301 = l301 + 1) {
			fVec197[l301] = 0.0f;
		}
		for (int l302 = 0; l302 < 1024; l302 = l302 + 1) {
			fVec198[l302] = 0.0f;
		}
		for (int l303 = 0; l303 < 2048; l303 = l303 + 1) {
			fVec199[l303] = 0.0f;
		}
		for (int l304 = 0; l304 < 4096; l304 = l304 + 1) {
			fVec200[l304] = 0.0f;
		}
		for (int l305 = 0; l305 < 2; l305 = l305 + 1) {
			fRec151[l305] = 0.0f;
		}
		for (int l306 = 0; l306 < 3; l306 = l306 + 1) {
			fRec170[l306] = 0.0f;
		}
		for (int l307 = 0; l307 < 3; l307 = l307 + 1) {
			fRec169[l307] = 0.0f;
		}
		for (int l308 = 0; l308 < 2; l308 = l308 + 1) {
			fVec201[l308] = 0.0f;
		}
		for (int l309 = 0; l309 < 2; l309 = l309 + 1) {
			fRec168[l309] = 0.0f;
		}
		for (int l310 = 0; l310 < 3; l310 = l310 + 1) {
			fRec173[l310] = 0.0f;
		}
		for (int l311 = 0; l311 < 3; l311 = l311 + 1) {
			fRec172[l311] = 0.0f;
		}
		for (int l312 = 0; l312 < 2; l312 = l312 + 1) {
			fVec202[l312] = 0.0f;
		}
		for (int l313 = 0; l313 < 2; l313 = l313 + 1) {
			fRec171[l313] = 0.0f;
		}
		for (int l314 = 0; l314 < 3; l314 = l314 + 1) {
			fVec203[l314] = 0.0f;
		}
		for (int l315 = 0; l315 < 7; l315 = l315 + 1) {
			fVec204[l315] = 0.0f;
		}
		for (int l316 = 0; l316 < 15; l316 = l316 + 1) {
			fVec205[l316] = 0.0f;
		}
		for (int l317 = 0; l317 < 32; l317 = l317 + 1) {
			fVec206[l317] = 0.0f;
		}
		for (int l318 = 0; l318 < 64; l318 = l318 + 1) {
			fVec207[l318] = 0.0f;
		}
		for (int l319 = 0; l319 < 128; l319 = l319 + 1) {
			fVec208[l319] = 0.0f;
		}
		for (int l320 = 0; l320 < 256; l320 = l320 + 1) {
			fVec209[l320] = 0.0f;
		}
		for (int l321 = 0; l321 < 512; l321 = l321 + 1) {
			fVec210[l321] = 0.0f;
		}
		for (int l322 = 0; l322 < 1024; l322 = l322 + 1) {
			fVec211[l322] = 0.0f;
		}
		for (int l323 = 0; l323 < 2048; l323 = l323 + 1) {
			fVec212[l323] = 0.0f;
		}
		for (int l324 = 0; l324 < 4096; l324 = l324 + 1) {
			fVec213[l324] = 0.0f;
		}
		for (int l325 = 0; l325 < 2; l325 = l325 + 1) {
			fRec174[l325] = 0.0f;
		}
		for (int l326 = 0; l326 < 3; l326 = l326 + 1) {
			fVec214[l326] = 0.0f;
		}
		for (int l327 = 0; l327 < 7; l327 = l327 + 1) {
			fVec215[l327] = 0.0f;
		}
		for (int l328 = 0; l328 < 15; l328 = l328 + 1) {
			fVec216[l328] = 0.0f;
		}
		for (int l329 = 0; l329 < 32; l329 = l329 + 1) {
			fVec217[l329] = 0.0f;
		}
		for (int l330 = 0; l330 < 64; l330 = l330 + 1) {
			fVec218[l330] = 0.0f;
		}
		for (int l331 = 0; l331 < 128; l331 = l331 + 1) {
			fVec219[l331] = 0.0f;
		}
		for (int l332 = 0; l332 < 256; l332 = l332 + 1) {
			fVec220[l332] = 0.0f;
		}
		for (int l333 = 0; l333 < 512; l333 = l333 + 1) {
			fVec221[l333] = 0.0f;
		}
		for (int l334 = 0; l334 < 1024; l334 = l334 + 1) {
			fVec222[l334] = 0.0f;
		}
		for (int l335 = 0; l335 < 2048; l335 = l335 + 1) {
			fVec223[l335] = 0.0f;
		}
		for (int l336 = 0; l336 < 4096; l336 = l336 + 1) {
			fVec224[l336] = 0.0f;
		}
		for (int l337 = 0; l337 < 2; l337 = l337 + 1) {
			fRec175[l337] = 0.0f;
		}
		for (int l338 = 0; l338 < 2; l338 = l338 + 1) {
			fRec180[l338] = 0.0f;
		}
		for (int l339 = 0; l339 < 2; l339 = l339 + 1) {
			fRec181[l339] = 0.0f;
		}
		for (int l340 = 0; l340 < 2; l340 = l340 + 1) {
			fRec184[l340] = 0.0f;
		}
		for (int l341 = 0; l341 < 2; l341 = l341 + 1) {
			fRec185[l341] = 0.0f;
		}
		for (int l342 = 0; l342 < 2; l342 = l342 + 1) {
			fRec176[l342] = 0.0f;
		}
		for (int l343 = 0; l343 < 2; l343 = l343 + 1) {
			fRec177[l343] = 0.0f;
		}
		for (int l344 = 0; l344 < 2; l344 = l344 + 1) {
			fRec164[l344] = 0.0f;
		}
		for (int l345 = 0; l345 < 2; l345 = l345 + 1) {
			fRec165[l345] = 0.0f;
		}
		for (int l346 = 0; l346 < 2; l346 = l346 + 1) {
			fRec188[l346] = 0.0f;
		}
		for (int l347 = 0; l347 < 2; l347 = l347 + 1) {
			fRec189[l347] = 0.0f;
		}
		for (int l348 = 0; l348 < 2; l348 = l348 + 1) {
			fRec160[l348] = 0.0f;
		}
		for (int l349 = 0; l349 < 2; l349 = l349 + 1) {
			fRec161[l349] = 0.0f;
		}
		for (int l350 = 0; l350 < 2; l350 = l350 + 1) {
			fRec156[l350] = 0.0f;
		}
		for (int l351 = 0; l351 < 2; l351 = l351 + 1) {
			fRec157[l351] = 0.0f;
		}
		for (int l352 = 0; l352 < 2; l352 = l352 + 1) {
			fRec192[l352] = 0.0f;
		}
		for (int l353 = 0; l353 < 2; l353 = l353 + 1) {
			fRec193[l353] = 0.0f;
		}
		for (int l354 = 0; l354 < 2; l354 = l354 + 1) {
			fRec152[l354] = 0.0f;
		}
		for (int l355 = 0; l355 < 2; l355 = l355 + 1) {
			fRec153[l355] = 0.0f;
		}
		for (int l356 = 0; l356 < 2; l356 = l356 + 1) {
			fRec134[l356] = 0.0f;
		}
		for (int l357 = 0; l357 < 2; l357 = l357 + 1) {
			fRec135[l357] = 0.0f;
		}
		for (int l358 = 0; l358 < 2; l358 = l358 + 1) {
			fRec196[l358] = 0.0f;
		}
		for (int l359 = 0; l359 < 2; l359 = l359 + 1) {
			fRec197[l359] = 0.0f;
		}
		for (int l360 = 0; l360 < 2; l360 = l360 + 1) {
			fRec130[l360] = 0.0f;
		}
		for (int l361 = 0; l361 < 2; l361 = l361 + 1) {
			fRec131[l361] = 0.0f;
		}
		for (int l362 = 0; l362 < 2; l362 = l362 + 1) {
			fRec126[l362] = 0.0f;
		}
		for (int l363 = 0; l363 < 2; l363 = l363 + 1) {
			fRec127[l363] = 0.0f;
		}
		for (int l364 = 0; l364 < 2; l364 = l364 + 1) {
			fRec200[l364] = 0.0f;
		}
		for (int l365 = 0; l365 < 2; l365 = l365 + 1) {
			fRec201[l365] = 0.0f;
		}
		for (int l366 = 0; l366 < 2; l366 = l366 + 1) {
			fRec122[l366] = 0.0f;
		}
		for (int l367 = 0; l367 < 2; l367 = l367 + 1) {
			fRec123[l367] = 0.0f;
		}
		for (int l368 = 0; l368 < 2; l368 = l368 + 1) {
			fRec104[l368] = 0.0f;
		}
		for (int l369 = 0; l369 < 2; l369 = l369 + 1) {
			fRec105[l369] = 0.0f;
		}
		for (int l370 = 0; l370 < 2; l370 = l370 + 1) {
			fRec204[l370] = 0.0f;
		}
		for (int l371 = 0; l371 < 2; l371 = l371 + 1) {
			fRec205[l371] = 0.0f;
		}
		for (int l372 = 0; l372 < 2; l372 = l372 + 1) {
			fRec100[l372] = 0.0f;
		}
		for (int l373 = 0; l373 < 2; l373 = l373 + 1) {
			fRec101[l373] = 0.0f;
		}
		for (int l374 = 0; l374 < 2; l374 = l374 + 1) {
			fRec96[l374] = 0.0f;
		}
		for (int l375 = 0; l375 < 2; l375 = l375 + 1) {
			fRec97[l375] = 0.0f;
		}
		for (int l376 = 0; l376 < 2; l376 = l376 + 1) {
			fRec208[l376] = 0.0f;
		}
		for (int l377 = 0; l377 < 2; l377 = l377 + 1) {
			fRec209[l377] = 0.0f;
		}
		for (int l378 = 0; l378 < 2; l378 = l378 + 1) {
			fRec92[l378] = 0.0f;
		}
		for (int l379 = 0; l379 < 2; l379 = l379 + 1) {
			fRec93[l379] = 0.0f;
		}
		for (int l380 = 0; l380 < 2; l380 = l380 + 1) {
			fRec212[l380] = 0.0f;
		}
		for (int l381 = 0; l381 < 2; l381 = l381 + 1) {
			fRec213[l381] = 0.0f;
		}
		for (int l382 = 0; l382 < 2; l382 = l382 + 1) {
			fRec216[l382] = 0.0f;
		}
		for (int l383 = 0; l383 < 2; l383 = l383 + 1) {
			fRec217[l383] = 0.0f;
		}
		for (int l384 = 0; l384 < 2; l384 = l384 + 1) {
			fRec220[l384] = 0.0f;
		}
		for (int l385 = 0; l385 < 2; l385 = l385 + 1) {
			fRec221[l385] = 0.0f;
		}
		for (int l386 = 0; l386 < 3; l386 = l386 + 1) {
			fRec8[l386] = 0.0f;
		}
		for (int l387 = 0; l387 < 2; l387 = l387 + 1) {
			fRec276[l387] = 0.0f;
		}
		for (int l388 = 0; l388 < 2; l388 = l388 + 1) {
			fRec277[l388] = 0.0f;
		}
		for (int l389 = 0; l389 < 2; l389 = l389 + 1) {
			fRec280[l389] = 0.0f;
		}
		for (int l390 = 0; l390 < 2; l390 = l390 + 1) {
			fRec281[l390] = 0.0f;
		}
		for (int l391 = 0; l391 < 2; l391 = l391 + 1) {
			fRec272[l391] = 0.0f;
		}
		for (int l392 = 0; l392 < 2; l392 = l392 + 1) {
			fRec273[l392] = 0.0f;
		}
		for (int l393 = 0; l393 < 2; l393 = l393 + 1) {
			fRec268[l393] = 0.0f;
		}
		for (int l394 = 0; l394 < 2; l394 = l394 + 1) {
			fRec269[l394] = 0.0f;
		}
		for (int l395 = 0; l395 < 2; l395 = l395 + 1) {
			fRec284[l395] = 0.0f;
		}
		for (int l396 = 0; l396 < 2; l396 = l396 + 1) {
			fRec285[l396] = 0.0f;
		}
		for (int l397 = 0; l397 < 2; l397 = l397 + 1) {
			fRec264[l397] = 0.0f;
		}
		for (int l398 = 0; l398 < 2; l398 = l398 + 1) {
			fRec265[l398] = 0.0f;
		}
		for (int l399 = 0; l399 < 2; l399 = l399 + 1) {
			fRec260[l399] = 0.0f;
		}
		for (int l400 = 0; l400 < 2; l400 = l400 + 1) {
			fRec261[l400] = 0.0f;
		}
		for (int l401 = 0; l401 < 2; l401 = l401 + 1) {
			fRec288[l401] = 0.0f;
		}
		for (int l402 = 0; l402 < 2; l402 = l402 + 1) {
			fRec289[l402] = 0.0f;
		}
		for (int l403 = 0; l403 < 2; l403 = l403 + 1) {
			fRec256[l403] = 0.0f;
		}
		for (int l404 = 0; l404 < 2; l404 = l404 + 1) {
			fRec257[l404] = 0.0f;
		}
		for (int l405 = 0; l405 < 2; l405 = l405 + 1) {
			fRec252[l405] = 0.0f;
		}
		for (int l406 = 0; l406 < 2; l406 = l406 + 1) {
			fRec253[l406] = 0.0f;
		}
		for (int l407 = 0; l407 < 2; l407 = l407 + 1) {
			fRec292[l407] = 0.0f;
		}
		for (int l408 = 0; l408 < 2; l408 = l408 + 1) {
			fRec293[l408] = 0.0f;
		}
		for (int l409 = 0; l409 < 2; l409 = l409 + 1) {
			fRec248[l409] = 0.0f;
		}
		for (int l410 = 0; l410 < 2; l410 = l410 + 1) {
			fRec249[l410] = 0.0f;
		}
		for (int l411 = 0; l411 < 2; l411 = l411 + 1) {
			fRec244[l411] = 0.0f;
		}
		for (int l412 = 0; l412 < 2; l412 = l412 + 1) {
			fRec245[l412] = 0.0f;
		}
		for (int l413 = 0; l413 < 2; l413 = l413 + 1) {
			fRec296[l413] = 0.0f;
		}
		for (int l414 = 0; l414 < 2; l414 = l414 + 1) {
			fRec297[l414] = 0.0f;
		}
		for (int l415 = 0; l415 < 2; l415 = l415 + 1) {
			fRec240[l415] = 0.0f;
		}
		for (int l416 = 0; l416 < 2; l416 = l416 + 1) {
			fRec241[l416] = 0.0f;
		}
		for (int l417 = 0; l417 < 2; l417 = l417 + 1) {
			fRec236[l417] = 0.0f;
		}
		for (int l418 = 0; l418 < 2; l418 = l418 + 1) {
			fRec237[l418] = 0.0f;
		}
		for (int l419 = 0; l419 < 2; l419 = l419 + 1) {
			fRec300[l419] = 0.0f;
		}
		for (int l420 = 0; l420 < 2; l420 = l420 + 1) {
			fRec301[l420] = 0.0f;
		}
		for (int l421 = 0; l421 < 2; l421 = l421 + 1) {
			fRec232[l421] = 0.0f;
		}
		for (int l422 = 0; l422 < 2; l422 = l422 + 1) {
			fRec233[l422] = 0.0f;
		}
		for (int l423 = 0; l423 < 2; l423 = l423 + 1) {
			fRec228[l423] = 0.0f;
		}
		for (int l424 = 0; l424 < 2; l424 = l424 + 1) {
			fRec229[l424] = 0.0f;
		}
		for (int l425 = 0; l425 < 2; l425 = l425 + 1) {
			fRec304[l425] = 0.0f;
		}
		for (int l426 = 0; l426 < 2; l426 = l426 + 1) {
			fRec305[l426] = 0.0f;
		}
		for (int l427 = 0; l427 < 2; l427 = l427 + 1) {
			fRec224[l427] = 0.0f;
		}
		for (int l428 = 0; l428 < 2; l428 = l428 + 1) {
			fRec225[l428] = 0.0f;
		}
		for (int l429 = 0; l429 < 2; l429 = l429 + 1) {
			fRec308[l429] = 0.0f;
		}
		for (int l430 = 0; l430 < 2; l430 = l430 + 1) {
			fRec309[l430] = 0.0f;
		}
		for (int l431 = 0; l431 < 2; l431 = l431 + 1) {
			fRec312[l431] = 0.0f;
		}
		for (int l432 = 0; l432 < 2; l432 = l432 + 1) {
			fRec313[l432] = 0.0f;
		}
		for (int l433 = 0; l433 < 2; l433 = l433 + 1) {
			fRec316[l433] = 0.0f;
		}
		for (int l434 = 0; l434 < 2; l434 = l434 + 1) {
			fRec317[l434] = 0.0f;
		}
		for (int l435 = 0; l435 < 3; l435 = l435 + 1) {
			fRec9[l435] = 0.0f;
		}
		for (int l436 = 0; l436 < 2048; l436 = l436 + 1) {
			fVec225[l436] = 0.0f;
		}
		for (int l437 = 0; l437 < 2048; l437 = l437 + 1) {
			fVec226[l437] = 0.0f;
		}
		for (int l438 = 0; l438 < 2; l438 = l438 + 1) {
			iRec6[l438] = 0;
		}
		for (int l439 = 0; l439 < 2; l439 = l439 + 1) {
			fRec7[l439] = 0.0f;
		}
		for (int l440 = 0; l440 < 2; l440 = l440 + 1) {
			fRec5[l440] = 0.0f;
		}
		for (int l441 = 0; l441 < 2; l441 = l441 + 1) {
			fRec4[l441] = 0.0f;
		}
		for (int l442 = 0; l442 < 2; l442 = l442 + 1) {
			fVec227[l442] = 0.0f;
		}
		for (int l443 = 0; l443 < 2; l443 = l443 + 1) {
			fRec0[l443] = 0.0f;
		}
		for (int l444 = 0; l444 < 2; l444 = l444 + 1) {
			fVec228[l444] = 0.0f;
		}
		for (int l445 = 0; l445 < 2; l445 = l445 + 1) {
			fRec324[l445] = 0.0f;
		}
		for (int l446 = 0; l446 < 2; l446 = l446 + 1) {
			fRec323[l446] = 0.0f;
		}
		for (int l447 = 0; l447 < 2; l447 = l447 + 1) {
			fVec229[l447] = 0.0f;
		}
		for (int l448 = 0; l448 < 2; l448 = l448 + 1) {
			fRec322[l448] = 0.0f;
		}
		for (int l449 = 0; l449 < 2; l449 = l449 + 1) {
			fRec321[l449] = 0.0f;
		}
		for (int l450 = 0; l450 < 2; l450 = l450 + 1) {
			fVec230[l450] = 0.0f;
		}
		for (int l451 = 0; l451 < 3; l451 = l451 + 1) {
			fVec231[l451] = 0.0f;
		}
		for (int l452 = 0; l452 < 7; l452 = l452 + 1) {
			fVec232[l452] = 0.0f;
		}
		for (int l453 = 0; l453 < 15; l453 = l453 + 1) {
			fVec233[l453] = 0.0f;
		}
		for (int l454 = 0; l454 < 32; l454 = l454 + 1) {
			fVec234[l454] = 0.0f;
		}
		for (int l455 = 0; l455 < 64; l455 = l455 + 1) {
			fVec235[l455] = 0.0f;
		}
		for (int l456 = 0; l456 < 128; l456 = l456 + 1) {
			fVec236[l456] = 0.0f;
		}
		for (int l457 = 0; l457 < 256; l457 = l457 + 1) {
			fVec237[l457] = 0.0f;
		}
		for (int l458 = 0; l458 < 512; l458 = l458 + 1) {
			fVec238[l458] = 0.0f;
		}
		for (int l459 = 0; l459 < 1024; l459 = l459 + 1) {
			fVec239[l459] = 0.0f;
		}
		for (int l460 = 0; l460 < 2048; l460 = l460 + 1) {
			fVec240[l460] = 0.0f;
		}
		for (int l461 = 0; l461 < 4096; l461 = l461 + 1) {
			fVec241[l461] = 0.0f;
		}
		for (int l462 = 0; l462 < 8192; l462 = l462 + 1) {
			fVec242[l462] = 0.0f;
		}
		for (int l463 = 0; l463 < 16384; l463 = l463 + 1) {
			fVec243[l463] = 0.0f;
		}
		for (int l464 = 0; l464 < 32768; l464 = l464 + 1) {
			fVec244[l464] = 0.0f;
		}
		for (int l465 = 0; l465 < 65536; l465 = l465 + 1) {
			fVec245[l465] = 0.0f;
		}
		for (int l466 = 0; l466 < 131072; l466 = l466 + 1) {
			fVec246[l466] = 0.0f;
		}
		for (int l467 = 0; l467 < 2; l467 = l467 + 1) {
			fVec247[l467] = 0.0f;
		}
		for (int l468 = 0; l468 < 2; l468 = l468 + 1) {
			fVec248[l468] = 0.0f;
		}
		for (int l469 = 0; l469 < 2; l469 = l469 + 1) {
			fRec328[l469] = 0.0f;
		}
		for (int l470 = 0; l470 < 2; l470 = l470 + 1) {
			fRec327[l470] = 0.0f;
		}
		for (int l471 = 0; l471 < 2; l471 = l471 + 1) {
			fVec249[l471] = 0.0f;
		}
		for (int l472 = 0; l472 < 2; l472 = l472 + 1) {
			fRec326[l472] = 0.0f;
		}
		for (int l473 = 0; l473 < 2; l473 = l473 + 1) {
			fRec325[l473] = 0.0f;
		}
		for (int l474 = 0; l474 < 2; l474 = l474 + 1) {
			fVec250[l474] = 0.0f;
		}
		for (int l475 = 0; l475 < 3; l475 = l475 + 1) {
			fVec251[l475] = 0.0f;
		}
		for (int l476 = 0; l476 < 7; l476 = l476 + 1) {
			fVec252[l476] = 0.0f;
		}
		for (int l477 = 0; l477 < 15; l477 = l477 + 1) {
			fVec253[l477] = 0.0f;
		}
		for (int l478 = 0; l478 < 32; l478 = l478 + 1) {
			fVec254[l478] = 0.0f;
		}
		for (int l479 = 0; l479 < 64; l479 = l479 + 1) {
			fVec255[l479] = 0.0f;
		}
		for (int l480 = 0; l480 < 128; l480 = l480 + 1) {
			fVec256[l480] = 0.0f;
		}
		for (int l481 = 0; l481 < 256; l481 = l481 + 1) {
			fVec257[l481] = 0.0f;
		}
		for (int l482 = 0; l482 < 512; l482 = l482 + 1) {
			fVec258[l482] = 0.0f;
		}
		for (int l483 = 0; l483 < 1024; l483 = l483 + 1) {
			fVec259[l483] = 0.0f;
		}
		for (int l484 = 0; l484 < 2048; l484 = l484 + 1) {
			fVec260[l484] = 0.0f;
		}
		for (int l485 = 0; l485 < 4096; l485 = l485 + 1) {
			fVec261[l485] = 0.0f;
		}
		for (int l486 = 0; l486 < 8192; l486 = l486 + 1) {
			fVec262[l486] = 0.0f;
		}
		for (int l487 = 0; l487 < 16384; l487 = l487 + 1) {
			fVec263[l487] = 0.0f;
		}
		for (int l488 = 0; l488 < 32768; l488 = l488 + 1) {
			fVec264[l488] = 0.0f;
		}
		for (int l489 = 0; l489 < 65536; l489 = l489 + 1) {
			fVec265[l489] = 0.0f;
		}
		for (int l490 = 0; l490 < 131072; l490 = l490 + 1) {
			fVec266[l490] = 0.0f;
		}
		for (int l491 = 0; l491 < 2; l491 = l491 + 1) {
			fRec320[l491] = 0.0f;
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
		ui_interface->declare(&fVslider3, "symbol", "multiband_compressor_style");
		ui_interface->addVerticalSlider("mb morph", &fVslider3, FAUSTFLOAT(0.5f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("bands");
		ui_interface->declare(&fVbargraph9, "8", "");
		ui_interface->declare(&fVbargraph9, "symbol", "multiband_compressor_gain_band_1");
		ui_interface->declare(&fVbargraph9, "unit", "dB");
		ui_interface->addVerticalBargraph("gr 1", &fVbargraph9, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph8, "8", "");
		ui_interface->declare(&fVbargraph8, "symbol", "multiband_compressor_gain_band_2");
		ui_interface->declare(&fVbargraph8, "unit", "dB");
		ui_interface->addVerticalBargraph("gr 2", &fVbargraph8, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph7, "8", "");
		ui_interface->declare(&fVbargraph7, "symbol", "multiband_compressor_gain_band_3");
		ui_interface->declare(&fVbargraph7, "unit", "dB");
		ui_interface->addVerticalBargraph("gr 3", &fVbargraph7, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph6, "8", "");
		ui_interface->declare(&fVbargraph6, "symbol", "multiband_compressor_gain_band_4");
		ui_interface->declare(&fVbargraph6, "unit", "dB");
		ui_interface->addVerticalBargraph("gr 4", &fVbargraph6, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
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
		ui_interface->declare(&fVslider2, "unit", "dB");
		ui_interface->addVerticalSlider("timbre", &fVslider2, FAUSTFLOAT(0.0f), FAUSTFLOAT(-6.0f), FAUSTFLOAT(6.0f), FAUSTFLOAT(0.5f));
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
		float fSlow11 = 2.0f * fSlow10;
		float fSlow12 = 0.5f * fSlow10;
		float fSlow13 = fSlow12 + 0.4f;
		float fSlow14 = 16.0f * fSlow10;
		float fSlow15 = 3.0f * fSlow10 + 9.0f;
		float fSlow16 = 0.5f * fSlow15;
		float fSlow17 = fSlow14 + fSlow16;
		float fSlow18 = fSlow4 - fSlow17;
		float fSlow19 = fSlow4 + fSlow16 - fSlow14;
		float fSlow20 = 0.5f / std::max<float>(1.1920929e-07f, fSlow15);
		float fSlow21 = 0.003f * fSlow10;
		float fSlow22 = 0.005f - fSlow21;
		int iSlow23 = std::fabs(fSlow22) < 1.1920929e-07f;
		float fSlow24 = ((iSlow23) ? 0.0f : std::exp(0.0f - fConst114 / ((iSlow23) ? 1.0f : fSlow22)));
		float fSlow25 = 0.04f - 0.03f * fSlow10;
		int iSlow26 = std::fabs(fSlow25) < 1.1920929e-07f;
		float fSlow27 = ((iSlow26) ? 0.0f : std::exp(0.0f - fConst114 / ((iSlow26) ? 1.0f : fSlow25)));
		float fSlow28 = 3e+01f * fSlow10 + 1e+01f;
		int iSlow29 = fSlow28 > 0.0f;
		float fSlow30 = float(2 * iSlow29 + -1);
		float fSlow31 = -3.0f - 27.0f * fSlow10;
		float fSlow32 = std::fabs(fSlow28);
		float fSlow33 = 12.0f - 6.0f * fSlow10;
		float fSlow34 = 0.5f * fSlow33;
		float fSlow35 = fSlow4 + (-4e+01f - fSlow34);
		float fSlow36 = fSlow4 + fSlow34;
		float fSlow37 = fSlow36 + -4e+01f;
		float fSlow38 = 1.0f / std::min<float>(1.1920929e-07f, 0.0f - 2.0f * fSlow33);
		float fSlow39 = 0.3f - 0.25f * fSlow10;
		float fSlow40 = ((iSlow29) ? fSlow39 : 0.001f);
		int iSlow41 = std::fabs(fSlow40) < 1.1920929e-07f;
		float fSlow42 = ((iSlow41) ? 0.0f : std::exp(0.0f - fConst114 / ((iSlow41) ? 1.0f : fSlow40)));
		float fSlow43 = ((iSlow29) ? 0.001f : fSlow39);
		int iSlow44 = std::fabs(fSlow43) < 1.1920929e-07f;
		float fSlow45 = ((iSlow44) ? 0.0f : std::exp(0.0f - fConst114 / ((iSlow44) ? 1.0f : fSlow43)));
		float fSlow46 = fSlow12 + 0.3f;
		float fSlow47 = 4.0f * fSlow10 + 8.0f;
		float fSlow48 = 0.5f * fSlow47;
		float fSlow49 = fSlow14 + fSlow48;
		float fSlow50 = fSlow4 + (2.0f - fSlow49);
		float fSlow51 = fSlow4 + fSlow48 + (2.0f - fSlow14);
		float fSlow52 = 0.5f / std::max<float>(1.1920929e-07f, fSlow47);
		float fSlow53 = 0.004f * fSlow10;
		float fSlow54 = 0.008f - fSlow53;
		int iSlow55 = std::fabs(fSlow54) < 1.1920929e-07f;
		float fSlow56 = ((iSlow55) ? 0.0f : std::exp(0.0f - fConst114 / ((iSlow55) ? 1.0f : fSlow54)));
		float fSlow57 = 0.05f - 0.04f * fSlow10;
		int iSlow58 = std::fabs(fSlow57) < 1.1920929e-07f;
		float fSlow59 = ((iSlow58) ? 0.0f : std::exp(0.0f - fConst114 / ((iSlow58) ? 1.0f : fSlow57)));
		float fSlow60 = 25.0f * fSlow10 + 1e+01f;
		int iSlow61 = fSlow60 > 0.0f;
		float fSlow62 = float(2 * iSlow61 + -1);
		float fSlow63 = std::fabs(fSlow60);
		float fSlow64 = 0.4f - 0.3f * fSlow10;
		float fSlow65 = ((iSlow61) ? fSlow64 : 0.002f);
		int iSlow66 = std::fabs(fSlow65) < 1.1920929e-07f;
		float fSlow67 = ((iSlow66) ? 0.0f : std::exp(0.0f - fConst114 / ((iSlow66) ? 1.0f : fSlow65)));
		float fSlow68 = ((iSlow61) ? 0.002f : fSlow64);
		int iSlow69 = std::fabs(fSlow68) < 1.1920929e-07f;
		float fSlow70 = ((iSlow69) ? 0.0f : std::exp(0.0f - fConst114 / ((iSlow69) ? 1.0f : fSlow68)));
		float fSlow71 = 0.5f * fSlow10 + 0.2f;
		float fSlow72 = 14.0f * fSlow10;
		float fSlow73 = 5.0f * fSlow10 + 7.0f;
		float fSlow74 = 0.5f * fSlow73;
		float fSlow75 = fSlow72 + fSlow74;
		float fSlow76 = fSlow4 + (4.0f - fSlow75);
		float fSlow77 = fSlow4 + fSlow74 + (4.0f - fSlow72);
		float fSlow78 = 0.5f / std::max<float>(1.1920929e-07f, fSlow73);
		float fSlow79 = 0.01f - fSlow53;
		int iSlow80 = std::fabs(fSlow79) < 1.1920929e-07f;
		float fSlow81 = ((iSlow80) ? 0.0f : std::exp(0.0f - fConst114 / ((iSlow80) ? 1.0f : fSlow79)));
		float fSlow82 = 0.06f - 0.04f * fSlow10;
		int iSlow83 = std::fabs(fSlow82) < 1.1920929e-07f;
		float fSlow84 = ((iSlow83) ? 0.0f : std::exp(0.0f - fConst114 / ((iSlow83) ? 1.0f : fSlow82)));
		float fSlow85 = 2e+01f * fSlow10 + 1e+01f;
		int iSlow86 = fSlow85 > 0.0f;
		float fSlow87 = float(2 * iSlow86 + -1);
		float fSlow88 = std::fabs(fSlow85);
		float fSlow89 = fSlow21 + 0.002f;
		float fSlow90 = 0.4f * fSlow10;
		float fSlow91 = 0.6f - fSlow90;
		float fSlow92 = ((iSlow86) ? fSlow91 : fSlow89);
		int iSlow93 = std::fabs(fSlow92) < 1.1920929e-07f;
		float fSlow94 = ((iSlow93) ? 0.0f : std::exp(0.0f - fConst114 / ((iSlow93) ? 1.0f : fSlow92)));
		float fSlow95 = ((iSlow86) ? fSlow89 : fSlow91);
		int iSlow96 = std::fabs(fSlow95) < 1.1920929e-07f;
		float fSlow97 = ((iSlow96) ? 0.0f : std::exp(0.0f - fConst114 / ((iSlow96) ? 1.0f : fSlow95)));
		float fSlow98 = fSlow90 + 0.2f;
		float fSlow99 = fSlow10 + 1.0f;
		float fSlow100 = 3.0f * fSlow99;
		float fSlow101 = fSlow100 + fSlow72;
		float fSlow102 = fSlow4 + (6.0f - fSlow101);
		float fSlow103 = fSlow4 + fSlow100;
		float fSlow104 = fSlow103 + (6.0f - fSlow72);
		float fSlow105 = 0.5f / std::max<float>(1.1920929e-07f, 6.0f * fSlow99);
		float fSlow106 = 0.012f - fSlow53;
		int iSlow107 = std::fabs(fSlow106) < 1.1920929e-07f;
		float fSlow108 = ((iSlow107) ? 0.0f : std::exp(0.0f - fConst114 / ((iSlow107) ? 1.0f : fSlow106)));
		float fSlow109 = 0.07f - 0.04f * fSlow10;
		int iSlow110 = std::fabs(fSlow109) < 1.1920929e-07f;
		float fSlow111 = ((iSlow110) ? 0.0f : std::exp(0.0f - fConst114 / ((iSlow110) ? 1.0f : fSlow109)));
		float fSlow112 = 1e+01f * fSlow99;
		int iSlow113 = fSlow112 > 0.0f;
		float fSlow114 = float(2 * iSlow113 + -1);
		float fSlow115 = std::fabs(fSlow112);
		float fSlow116 = 0.005f * fSlow99;
		float fSlow117 = 0.8f - 0.4f * fSlow10;
		float fSlow118 = ((iSlow113) ? fSlow117 : fSlow116);
		int iSlow119 = std::fabs(fSlow118) < 1.1920929e-07f;
		float fSlow120 = ((iSlow119) ? 0.0f : std::exp(0.0f - fConst114 / ((iSlow119) ? 1.0f : fSlow118)));
		float fSlow121 = ((iSlow113) ? fSlow116 : fSlow117);
		int iSlow122 = std::fabs(fSlow121) < 1.1920929e-07f;
		float fSlow123 = ((iSlow122) ? 0.0f : std::exp(0.0f - fConst114 / ((iSlow122) ? 1.0f : fSlow121)));
		float fSlow124 = 0.3f * fSlow10 + 0.2f;
		float fSlow125 = 9.0f * fSlow10;
		float fSlow126 = fSlow125 + fSlow100;
		float fSlow127 = fSlow4 - fSlow126;
		float fSlow128 = fSlow103 - fSlow125;
		float fSlow129 = 0.015f - 0.005f * fSlow10;
		int iSlow130 = std::fabs(fSlow129) < 1.1920929e-07f;
		float fSlow131 = ((iSlow130) ? 0.0f : std::exp(0.0f - fConst114 / ((iSlow130) ? 1.0f : fSlow129)));
		float fSlow132 = 0.08f - 0.05f * fSlow10;
		int iSlow133 = std::fabs(fSlow132) < 1.1920929e-07f;
		float fSlow134 = ((iSlow133) ? 0.0f : std::exp(0.0f - fConst114 / ((iSlow133) ? 1.0f : fSlow132)));
		float fSlow135 = 1.0f - fSlow12;
		float fSlow136 = ((iSlow113) ? fSlow135 : fSlow116);
		int iSlow137 = std::fabs(fSlow136) < 1.1920929e-07f;
		float fSlow138 = ((iSlow137) ? 0.0f : std::exp(0.0f - fConst114 / ((iSlow137) ? 1.0f : fSlow136)));
		float fSlow139 = ((iSlow113) ? fSlow116 : fSlow135);
		int iSlow140 = std::fabs(fSlow139) < 1.1920929e-07f;
		float fSlow141 = ((iSlow140) ? 0.0f : std::exp(0.0f - fConst114 / ((iSlow140) ? 1.0f : fSlow139)));
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
			int iTemp123 = (fTemp122 > fSlow18) + (fTemp122 > fSlow19);
			float fTemp124 = fTemp122 - fSlow4;
			float fTemp125 = 0.0f - fSlow13 * std::max<float>(0.0f, ((iTemp123 == 0) ? 0.0f : ((iTemp123 == 1) ? fSlow20 * mydsp_faustpower2_f(fSlow17 + fTemp124) : fSlow14 + fTemp124)));
			float fTemp126 = ((fTemp125 > fRec68[1]) ? fSlow27 : fSlow24);
			fRec68[0] = fTemp125 * (1.0f - fTemp126) + fRec68[1] * fTemp126;
			float fTemp127 = fSlow3 * fRec29[0] + fSlow2 * fTemp118;
			fRec75[0] = fTemp127 - fConst108 * (fConst109 * fRec75[2] + fConst110 * fRec75[1]);
			fRec74[0] = fConst108 * (fConst106 * fRec75[0] + fConst111 * fRec75[1] + fConst106 * fRec75[2]) - fConst107 * (fConst112 * fRec74[2] + fConst110 * fRec74[1]);
			fRec73[0] = fConst107 * (fConst106 * fRec74[0] + fConst111 * fRec74[1] + fConst106 * fRec74[2]) - fConst104 * (fConst113 * fRec73[2] + fConst110 * fRec73[1]);
			float fTemp128 = std::fabs(fConst104 * (fConst106 * fRec73[0] + fConst111 * fRec73[1] + fConst106 * fRec73[2]));
			fVec106[0] = fTemp128;
			float fTemp129 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp128));
			int iTemp130 = (fTemp129 > fSlow18) + (fTemp129 > fSlow19);
			float fTemp131 = fTemp129 - fSlow4;
			float fTemp132 = 0.0f - fSlow13 * std::max<float>(0.0f, ((iTemp130 == 0) ? 0.0f : ((iTemp130 == 1) ? fSlow20 * mydsp_faustpower2_f(fSlow17 + fTemp131) : fSlow14 + fTemp131)));
			float fTemp133 = ((fTemp132 > fRec72[1]) ? fSlow27 : fSlow24);
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
			int iTemp145 = (fTemp144 > fSlow35) + (fTemp144 > fSlow37);
			float fTemp146 = fTemp144 + 4e+01f;
			float fTemp147 = std::max<float>(fSlow31, fSlow32 * ((iTemp145 == 0) ? fTemp146 - fSlow4 : ((iTemp145 == 1) ? fSlow38 * mydsp_faustpower2_f(fTemp146 - fSlow36) : 0.0f)));
			float fTemp148 = (((fSlow30 * fTemp147) > fRec76[1]) ? fSlow45 : fSlow42);
			fRec76[0] = fSlow30 * fTemp147 * (1.0f - fTemp148) + fRec76[1] * fTemp148;
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
			int iTemp160 = (fTemp159 > fSlow35) + (fTemp159 > fSlow37);
			float fTemp161 = fTemp159 + 4e+01f;
			float fTemp162 = std::max<float>(fSlow31, fSlow32 * ((iTemp160 == 0) ? fTemp161 - fSlow4 : ((iTemp160 == 1) ? fSlow38 * mydsp_faustpower2_f(fTemp161 - fSlow36) : 0.0f)));
			float fTemp163 = (((fSlow30 * fTemp162) > fRec77[1]) ? fSlow45 : fSlow42);
			fRec77[0] = fSlow30 * fTemp162 * (1.0f - fTemp163) + fRec77[1] * fTemp163;
			float fTemp164 = std::min<float>(fSlow11 + std::min<float>(fRec68[0], fRec72[0]), std::max<float>(fRec76[0], fRec77[0]));
			fVbargraph5 = FAUSTFLOAT(std::min<float>(12.0f, std::max<float>(-12.0f, fTemp164)));
			float fTemp165 = std::pow(1e+01f, 0.008333334f * fTemp164);
			fRec83[0] = fConst108 * (fRec71[2] + fRec71[0] + 2.0f * fRec71[1]) - fConst107 * (fConst112 * fRec83[2] + fConst110 * fRec83[1]);
			fRec82[0] = fConst107 * (fRec83[2] + fRec83[0] + 2.0f * fRec83[1]) - fConst104 * (fConst113 * fRec82[2] + fConst110 * fRec82[1]);
			fRec81[0] = fConst104 * (fRec82[2] + fRec82[0] + 2.0f * fRec82[1]) - fConst143 * (fConst144 * fRec81[2] + fConst145 * fRec81[1]);
			fRec80[0] = fConst143 * (fConst141 * fRec81[0] + fConst146 * fRec81[1] + fConst141 * fRec81[2]) - fConst142 * (fConst147 * fRec80[2] + fConst145 * fRec80[1]);
			fRec79[0] = fConst142 * (fConst141 * fRec80[0] + fConst146 * fRec80[1] + fConst141 * fRec80[2]) - fConst139 * (fConst148 * fRec79[2] + fConst145 * fRec79[1]);
			float fTemp166 = std::fabs(fConst139 * (fConst141 * fRec79[0] + fConst146 * fRec79[1] + fConst141 * fRec79[2]));
			fVec129[0] = fTemp166;
			float fTemp167 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp166));
			int iTemp168 = (fTemp167 > fSlow50) + (fTemp167 > fSlow51);
			float fTemp169 = fTemp167 + -2.0f - fSlow4;
			float fTemp170 = 0.0f - fSlow46 * std::max<float>(0.0f, ((iTemp168 == 0) ? 0.0f : ((iTemp168 == 1) ? fSlow52 * mydsp_faustpower2_f(fSlow49 + fTemp169) : fSlow14 + fTemp169)));
			float fTemp171 = ((fTemp170 > fRec78[1]) ? fSlow59 : fSlow56);
			fRec78[0] = fTemp170 * (1.0f - fTemp171) + fRec78[1] * fTemp171;
			fRec89[0] = fConst108 * (fRec75[2] + fRec75[0] + 2.0f * fRec75[1]) - fConst107 * (fConst112 * fRec89[2] + fConst110 * fRec89[1]);
			fRec88[0] = fConst107 * (fRec89[2] + fRec89[0] + 2.0f * fRec89[1]) - fConst104 * (fConst113 * fRec88[2] + fConst110 * fRec88[1]);
			fRec87[0] = fConst104 * (fRec88[2] + fRec88[0] + 2.0f * fRec88[1]) - fConst143 * (fConst144 * fRec87[2] + fConst145 * fRec87[1]);
			fRec86[0] = fConst143 * (fConst141 * fRec87[0] + fConst146 * fRec87[1] + fConst141 * fRec87[2]) - fConst142 * (fConst147 * fRec86[2] + fConst145 * fRec86[1]);
			fRec85[0] = fConst142 * (fConst141 * fRec86[0] + fConst146 * fRec86[1] + fConst141 * fRec86[2]) - fConst139 * (fConst148 * fRec85[2] + fConst145 * fRec85[1]);
			float fTemp172 = std::fabs(fConst139 * (fConst141 * fRec85[0] + fConst146 * fRec85[1] + fConst141 * fRec85[2]));
			fVec130[0] = fTemp172;
			float fTemp173 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp172));
			int iTemp174 = (fTemp173 > fSlow50) + (fTemp173 > fSlow51);
			float fTemp175 = fTemp173 + -2.0f - fSlow4;
			float fTemp176 = 0.0f - fSlow46 * std::max<float>(0.0f, ((iTemp174 == 0) ? 0.0f : ((iTemp174 == 1) ? fSlow52 * mydsp_faustpower2_f(fSlow49 + fTemp175) : fSlow14 + fTemp175)));
			float fTemp177 = ((fTemp176 > fRec84[1]) ? fSlow59 : fSlow56);
			fRec84[0] = fTemp176 * (1.0f - fTemp177) + fRec84[1] * fTemp177;
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
			int iTemp189 = (fTemp188 > fSlow35) + (fTemp188 > fSlow37);
			float fTemp190 = fTemp188 + 4e+01f;
			float fTemp191 = std::max<float>(fSlow31, fSlow63 * ((iTemp189 == 0) ? fTemp190 - fSlow4 : ((iTemp189 == 1) ? fSlow38 * mydsp_faustpower2_f(fTemp190 - fSlow36) : 0.0f)));
			float fTemp192 = (((fSlow62 * fTemp191) > fRec90[1]) ? fSlow70 : fSlow67);
			fRec90[0] = fSlow62 * fTemp191 * (1.0f - fTemp192) + fRec90[1] * fTemp192;
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
			int iTemp204 = (fTemp203 > fSlow35) + (fTemp203 > fSlow37);
			float fTemp205 = fTemp203 + 4e+01f;
			float fTemp206 = std::max<float>(fSlow31, fSlow63 * ((iTemp204 == 0) ? fTemp205 - fSlow4 : ((iTemp204 == 1) ? fSlow38 * mydsp_faustpower2_f(fTemp205 - fSlow36) : 0.0f)));
			float fTemp207 = (((fSlow62 * fTemp206) > fRec91[1]) ? fSlow70 : fSlow67);
			fRec91[0] = fSlow62 * fTemp206 * (1.0f - fTemp207) + fRec91[1] * fTemp207;
			float fTemp208 = std::min<float>(fSlow11 + std::min<float>(fRec78[0], fRec84[0]), std::max<float>(fRec90[0], fRec91[0]));
			fVbargraph6 = FAUSTFLOAT(std::min<float>(12.0f, std::max<float>(-12.0f, fTemp208)));
			float fTemp209 = fTemp208;
			float fTemp210 = std::pow(1e+01f, 0.008333334f * fTemp209);
			float fTemp211 = mydsp_faustpower2_f(fTemp210) + -1.0f;
			float fTemp212 = std::pow(1e+01f, 0.025f * (0.0f - 0.33333334f * fTemp209));
			float fTemp213 = mydsp_faustpower2_f(fTemp212) + -1.0f;
			fRec113[0] = fConst143 * (fRec81[2] + fRec81[0] + 2.0f * fRec81[1]) - fConst142 * (fConst147 * fRec113[2] + fConst145 * fRec113[1]);
			fRec112[0] = fConst142 * (fRec113[2] + fRec113[0] + 2.0f * fRec113[1]) - fConst139 * (fConst148 * fRec112[2] + fConst145 * fRec112[1]);
			fRec111[0] = fConst139 * (fRec112[2] + fRec112[0] + 2.0f * fRec112[1]) - fConst155 * (fConst156 * fRec111[2] + fConst157 * fRec111[1]);
			fRec110[0] = fConst155 * (fConst153 * fRec111[0] + fConst158 * fRec111[1] + fConst153 * fRec111[2]) - fConst154 * (fConst159 * fRec110[2] + fConst157 * fRec110[1]);
			fRec109[0] = fConst154 * (fConst153 * fRec110[0] + fConst158 * fRec110[1] + fConst153 * fRec110[2]) - fConst151 * (fConst160 * fRec109[2] + fConst157 * fRec109[1]);
			float fTemp214 = std::fabs(fConst151 * (fConst153 * fRec109[0] + fConst158 * fRec109[1] + fConst153 * fRec109[2]));
			fVec153[0] = fTemp214;
			float fTemp215 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp214));
			int iTemp216 = (fTemp215 > fSlow76) + (fTemp215 > fSlow77);
			float fTemp217 = fTemp215 + -4.0f - fSlow4;
			float fTemp218 = 0.0f - fSlow71 * std::max<float>(0.0f, ((iTemp216 == 0) ? 0.0f : ((iTemp216 == 1) ? fSlow78 * mydsp_faustpower2_f(fSlow75 + fTemp217) : fSlow72 + fTemp217)));
			float fTemp219 = ((fTemp218 > fRec108[1]) ? fSlow84 : fSlow81);
			fRec108[0] = fTemp218 * (1.0f - fTemp219) + fRec108[1] * fTemp219;
			fRec119[0] = fConst143 * (fRec87[2] + fRec87[0] + 2.0f * fRec87[1]) - fConst142 * (fConst147 * fRec119[2] + fConst145 * fRec119[1]);
			fRec118[0] = fConst142 * (fRec119[2] + fRec119[0] + 2.0f * fRec119[1]) - fConst139 * (fConst148 * fRec118[2] + fConst145 * fRec118[1]);
			fRec117[0] = fConst139 * (fRec118[2] + fRec118[0] + 2.0f * fRec118[1]) - fConst155 * (fConst156 * fRec117[2] + fConst157 * fRec117[1]);
			fRec116[0] = fConst155 * (fConst153 * fRec117[0] + fConst158 * fRec117[1] + fConst153 * fRec117[2]) - fConst154 * (fConst159 * fRec116[2] + fConst157 * fRec116[1]);
			fRec115[0] = fConst154 * (fConst153 * fRec116[0] + fConst158 * fRec116[1] + fConst153 * fRec116[2]) - fConst151 * (fConst160 * fRec115[2] + fConst157 * fRec115[1]);
			float fTemp220 = std::fabs(fConst151 * (fConst153 * fRec115[0] + fConst158 * fRec115[1] + fConst153 * fRec115[2]));
			fVec154[0] = fTemp220;
			float fTemp221 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp220));
			int iTemp222 = (fTemp221 > fSlow76) + (fTemp221 > fSlow77);
			float fTemp223 = fTemp221 + -4.0f - fSlow4;
			float fTemp224 = 0.0f - fSlow71 * std::max<float>(0.0f, ((iTemp222 == 0) ? 0.0f : ((iTemp222 == 1) ? fSlow78 * mydsp_faustpower2_f(fSlow75 + fTemp223) : fSlow72 + fTemp223)));
			float fTemp225 = ((fTemp224 > fRec114[1]) ? fSlow84 : fSlow81);
			fRec114[0] = fTemp224 * (1.0f - fTemp225) + fRec114[1] * fTemp225;
			float fTemp226 = std::max<float>(fTemp214, fVec153[1]);
			fVec155[0] = fTemp226;
			float fTemp227 = std::max<float>(fTemp226, fVec155[2]);
			fVec156[0] = fTemp227;
			float fTemp228 = std::max<float>(fTemp227, fVec156[4]);
			fVec157[0] = fTemp228;
			float fTemp229 = std::max<float>(fTemp228, fVec157[8]);
			fVec158[IOTA0 & 31] = fTemp229;
			float fTemp230 = std::max<float>(fTemp229, fVec158[(IOTA0 - 16) & 31]);
			fVec159[IOTA0 & 63] = fTemp230;
			float fTemp231 = std::max<float>(fTemp230, fVec159[(IOTA0 - 32) & 63]);
			fVec160[IOTA0 & 127] = fTemp231;
			float fTemp232 = std::max<float>(fTemp231, fVec160[(IOTA0 - 64) & 127]);
			fVec161[IOTA0 & 255] = fTemp232;
			float fTemp233 = std::max<float>(fTemp232, fVec161[(IOTA0 - 128) & 255]);
			fVec162[IOTA0 & 511] = fTemp233;
			float fTemp234 = std::max<float>(fTemp233, fVec162[(IOTA0 - 256) & 511]);
			fVec163[IOTA0 & 1023] = fTemp234;
			float fTemp235 = std::max<float>(fTemp234, fVec163[(IOTA0 - 512) & 1023]);
			fVec164[IOTA0 & 2047] = fTemp235;
			fVec165[IOTA0 & 4095] = std::max<float>(fTemp235, fVec164[(IOTA0 - 1024) & 2047]);
			float fTemp236 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst115) ? fTemp214 : -3.4028235e+38f), ((iConst116) ? fVec155[iConst115] : -3.4028235e+38f)), ((iConst117) ? fVec156[iConst118] : -3.4028235e+38f)), ((iConst119) ? fVec157[iConst120] : -3.4028235e+38f)), ((iConst121) ? fVec158[(IOTA0 - iConst122) & 31] : -3.4028235e+38f)), ((iConst123) ? fVec159[(IOTA0 - iConst124) & 63] : -3.4028235e+38f)), ((iConst125) ? fVec160[(IOTA0 - iConst126) & 127] : -3.4028235e+38f)), ((iConst127) ? fVec161[(IOTA0 - iConst128) & 255] : -3.4028235e+38f)), ((iConst129) ? fVec162[(IOTA0 - iConst130) & 511] : -3.4028235e+38f)), ((iConst131) ? fVec163[(IOTA0 - iConst132) & 1023] : -3.4028235e+38f)), ((iConst133) ? fVec164[(IOTA0 - iConst134) & 2047] : -3.4028235e+38f)), ((iConst135) ? fVec165[(IOTA0 - iConst136) & 4095] : -3.4028235e+38f))));
			int iTemp237 = (fTemp236 > fSlow35) + (fTemp236 > fSlow37);
			float fTemp238 = fTemp236 + 4e+01f;
			float fTemp239 = std::max<float>(fSlow31, fSlow88 * ((iTemp237 == 0) ? fTemp238 - fSlow4 : ((iTemp237 == 1) ? fSlow38 * mydsp_faustpower2_f(fTemp238 - fSlow36) : 0.0f)));
			float fTemp240 = (((fSlow87 * fTemp239) > fRec120[1]) ? fSlow97 : fSlow94);
			fRec120[0] = fSlow87 * fTemp239 * (1.0f - fTemp240) + fRec120[1] * fTemp240;
			float fTemp241 = std::max<float>(fTemp220, fVec154[1]);
			fVec166[0] = fTemp241;
			float fTemp242 = std::max<float>(fTemp241, fVec166[2]);
			fVec167[0] = fTemp242;
			float fTemp243 = std::max<float>(fTemp242, fVec167[4]);
			fVec168[0] = fTemp243;
			float fTemp244 = std::max<float>(fTemp243, fVec168[8]);
			fVec169[IOTA0 & 31] = fTemp244;
			float fTemp245 = std::max<float>(fTemp244, fVec169[(IOTA0 - 16) & 31]);
			fVec170[IOTA0 & 63] = fTemp245;
			float fTemp246 = std::max<float>(fTemp245, fVec170[(IOTA0 - 32) & 63]);
			fVec171[IOTA0 & 127] = fTemp246;
			float fTemp247 = std::max<float>(fTemp246, fVec171[(IOTA0 - 64) & 127]);
			fVec172[IOTA0 & 255] = fTemp247;
			float fTemp248 = std::max<float>(fTemp247, fVec172[(IOTA0 - 128) & 255]);
			fVec173[IOTA0 & 511] = fTemp248;
			float fTemp249 = std::max<float>(fTemp248, fVec173[(IOTA0 - 256) & 511]);
			fVec174[IOTA0 & 1023] = fTemp249;
			float fTemp250 = std::max<float>(fTemp249, fVec174[(IOTA0 - 512) & 1023]);
			fVec175[IOTA0 & 2047] = fTemp250;
			fVec176[IOTA0 & 4095] = std::max<float>(fTemp250, fVec175[(IOTA0 - 1024) & 2047]);
			float fTemp251 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst115) ? fTemp220 : -3.4028235e+38f), ((iConst116) ? fVec166[iConst115] : -3.4028235e+38f)), ((iConst117) ? fVec167[iConst118] : -3.4028235e+38f)), ((iConst119) ? fVec168[iConst120] : -3.4028235e+38f)), ((iConst121) ? fVec169[(IOTA0 - iConst122) & 31] : -3.4028235e+38f)), ((iConst123) ? fVec170[(IOTA0 - iConst124) & 63] : -3.4028235e+38f)), ((iConst125) ? fVec171[(IOTA0 - iConst126) & 127] : -3.4028235e+38f)), ((iConst127) ? fVec172[(IOTA0 - iConst128) & 255] : -3.4028235e+38f)), ((iConst129) ? fVec173[(IOTA0 - iConst130) & 511] : -3.4028235e+38f)), ((iConst131) ? fVec174[(IOTA0 - iConst132) & 1023] : -3.4028235e+38f)), ((iConst133) ? fVec175[(IOTA0 - iConst134) & 2047] : -3.4028235e+38f)), ((iConst135) ? fVec176[(IOTA0 - iConst136) & 4095] : -3.4028235e+38f))));
			int iTemp252 = (fTemp251 > fSlow35) + (fTemp251 > fSlow37);
			float fTemp253 = fTemp251 + 4e+01f;
			float fTemp254 = std::max<float>(fSlow31, fSlow88 * ((iTemp252 == 0) ? fTemp253 - fSlow4 : ((iTemp252 == 1) ? fSlow38 * mydsp_faustpower2_f(fTemp253 - fSlow36) : 0.0f)));
			float fTemp255 = (((fSlow87 * fTemp254) > fRec121[1]) ? fSlow97 : fSlow94);
			fRec121[0] = fSlow87 * fTemp254 * (1.0f - fTemp255) + fRec121[1] * fTemp255;
			float fTemp256 = std::min<float>(fSlow11 + std::min<float>(fRec108[0], fRec114[0]), std::max<float>(fRec120[0], fRec121[0]));
			fVbargraph7 = FAUSTFLOAT(std::min<float>(12.0f, std::max<float>(-12.0f, fTemp256)));
			float fTemp257 = fTemp256;
			float fTemp258 = std::pow(1e+01f, 0.008333334f * fTemp257);
			float fTemp259 = mydsp_faustpower2_f(fTemp258) + -1.0f;
			float fTemp260 = std::pow(1e+01f, 0.025f * (0.0f - 0.33333334f * fTemp257));
			float fTemp261 = mydsp_faustpower2_f(fTemp260) + -1.0f;
			fRec143[0] = fConst155 * (fRec111[2] + fRec111[0] + 2.0f * fRec111[1]) - fConst154 * (fConst159 * fRec143[2] + fConst157 * fRec143[1]);
			fRec142[0] = fConst154 * (fRec143[2] + fRec143[0] + 2.0f * fRec143[1]) - fConst151 * (fConst160 * fRec142[2] + fConst157 * fRec142[1]);
			fRec141[0] = fConst151 * (fRec142[2] + fRec142[0] + 2.0f * fRec142[1]) - fConst167 * (fConst168 * fRec141[2] + fConst169 * fRec141[1]);
			fRec140[0] = fConst167 * (fConst165 * fRec141[0] + fConst170 * fRec141[1] + fConst165 * fRec141[2]) - fConst166 * (fConst171 * fRec140[2] + fConst169 * fRec140[1]);
			fRec139[0] = fConst166 * (fConst165 * fRec140[0] + fConst170 * fRec140[1] + fConst165 * fRec140[2]) - fConst163 * (fConst172 * fRec139[2] + fConst169 * fRec139[1]);
			float fTemp262 = std::fabs(fConst163 * (fConst165 * fRec139[0] + fConst170 * fRec139[1] + fConst165 * fRec139[2]));
			fVec177[0] = fTemp262;
			float fTemp263 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp262));
			int iTemp264 = (fTemp263 > fSlow102) + (fTemp263 > fSlow104);
			float fTemp265 = fTemp263 + -6.0f - fSlow4;
			float fTemp266 = 0.0f - fSlow98 * std::max<float>(0.0f, ((iTemp264 == 0) ? 0.0f : ((iTemp264 == 1) ? fSlow105 * mydsp_faustpower2_f(fSlow101 + fTemp265) : fSlow72 + fTemp265)));
			float fTemp267 = ((fTemp266 > fRec138[1]) ? fSlow111 : fSlow108);
			fRec138[0] = fTemp266 * (1.0f - fTemp267) + fRec138[1] * fTemp267;
			fRec149[0] = fConst155 * (fRec117[2] + fRec117[0] + 2.0f * fRec117[1]) - fConst154 * (fConst159 * fRec149[2] + fConst157 * fRec149[1]);
			fRec148[0] = fConst154 * (fRec149[2] + fRec149[0] + 2.0f * fRec149[1]) - fConst151 * (fConst160 * fRec148[2] + fConst157 * fRec148[1]);
			fRec147[0] = fConst151 * (fRec148[2] + fRec148[0] + 2.0f * fRec148[1]) - fConst167 * (fConst168 * fRec147[2] + fConst169 * fRec147[1]);
			fRec146[0] = fConst167 * (fConst165 * fRec147[0] + fConst170 * fRec147[1] + fConst165 * fRec147[2]) - fConst166 * (fConst171 * fRec146[2] + fConst169 * fRec146[1]);
			fRec145[0] = fConst166 * (fConst165 * fRec146[0] + fConst170 * fRec146[1] + fConst165 * fRec146[2]) - fConst163 * (fConst172 * fRec145[2] + fConst169 * fRec145[1]);
			float fTemp268 = std::fabs(fConst163 * (fConst165 * fRec145[0] + fConst170 * fRec145[1] + fConst165 * fRec145[2]));
			fVec178[0] = fTemp268;
			float fTemp269 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp268));
			int iTemp270 = (fTemp269 > fSlow102) + (fTemp269 > fSlow104);
			float fTemp271 = fTemp269 + -6.0f - fSlow4;
			float fTemp272 = 0.0f - fSlow98 * std::max<float>(0.0f, ((iTemp270 == 0) ? 0.0f : ((iTemp270 == 1) ? fSlow105 * mydsp_faustpower2_f(fSlow101 + fTemp271) : fSlow72 + fTemp271)));
			float fTemp273 = ((fTemp272 > fRec144[1]) ? fSlow111 : fSlow108);
			fRec144[0] = fTemp272 * (1.0f - fTemp273) + fRec144[1] * fTemp273;
			float fTemp274 = std::max<float>(fTemp262, fVec177[1]);
			fVec179[0] = fTemp274;
			float fTemp275 = std::max<float>(fTemp274, fVec179[2]);
			fVec180[0] = fTemp275;
			float fTemp276 = std::max<float>(fTemp275, fVec180[4]);
			fVec181[0] = fTemp276;
			float fTemp277 = std::max<float>(fTemp276, fVec181[8]);
			fVec182[IOTA0 & 31] = fTemp277;
			float fTemp278 = std::max<float>(fTemp277, fVec182[(IOTA0 - 16) & 31]);
			fVec183[IOTA0 & 63] = fTemp278;
			float fTemp279 = std::max<float>(fTemp278, fVec183[(IOTA0 - 32) & 63]);
			fVec184[IOTA0 & 127] = fTemp279;
			float fTemp280 = std::max<float>(fTemp279, fVec184[(IOTA0 - 64) & 127]);
			fVec185[IOTA0 & 255] = fTemp280;
			float fTemp281 = std::max<float>(fTemp280, fVec185[(IOTA0 - 128) & 255]);
			fVec186[IOTA0 & 511] = fTemp281;
			float fTemp282 = std::max<float>(fTemp281, fVec186[(IOTA0 - 256) & 511]);
			fVec187[IOTA0 & 1023] = fTemp282;
			float fTemp283 = std::max<float>(fTemp282, fVec187[(IOTA0 - 512) & 1023]);
			fVec188[IOTA0 & 2047] = fTemp283;
			fVec189[IOTA0 & 4095] = std::max<float>(fTemp283, fVec188[(IOTA0 - 1024) & 2047]);
			float fTemp284 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst115) ? fTemp262 : -3.4028235e+38f), ((iConst116) ? fVec179[iConst115] : -3.4028235e+38f)), ((iConst117) ? fVec180[iConst118] : -3.4028235e+38f)), ((iConst119) ? fVec181[iConst120] : -3.4028235e+38f)), ((iConst121) ? fVec182[(IOTA0 - iConst122) & 31] : -3.4028235e+38f)), ((iConst123) ? fVec183[(IOTA0 - iConst124) & 63] : -3.4028235e+38f)), ((iConst125) ? fVec184[(IOTA0 - iConst126) & 127] : -3.4028235e+38f)), ((iConst127) ? fVec185[(IOTA0 - iConst128) & 255] : -3.4028235e+38f)), ((iConst129) ? fVec186[(IOTA0 - iConst130) & 511] : -3.4028235e+38f)), ((iConst131) ? fVec187[(IOTA0 - iConst132) & 1023] : -3.4028235e+38f)), ((iConst133) ? fVec188[(IOTA0 - iConst134) & 2047] : -3.4028235e+38f)), ((iConst135) ? fVec189[(IOTA0 - iConst136) & 4095] : -3.4028235e+38f))));
			int iTemp285 = (fTemp284 > fSlow35) + (fTemp284 > fSlow37);
			float fTemp286 = fTemp284 + 4e+01f;
			float fTemp287 = std::max<float>(fSlow31, fSlow115 * ((iTemp285 == 0) ? fTemp286 - fSlow4 : ((iTemp285 == 1) ? fSlow38 * mydsp_faustpower2_f(fTemp286 - fSlow36) : 0.0f)));
			float fTemp288 = (((fSlow114 * fTemp287) > fRec150[1]) ? fSlow123 : fSlow120);
			fRec150[0] = fSlow114 * fTemp287 * (1.0f - fTemp288) + fRec150[1] * fTemp288;
			float fTemp289 = std::max<float>(fTemp268, fVec178[1]);
			fVec190[0] = fTemp289;
			float fTemp290 = std::max<float>(fTemp289, fVec190[2]);
			fVec191[0] = fTemp290;
			float fTemp291 = std::max<float>(fTemp290, fVec191[4]);
			fVec192[0] = fTemp291;
			float fTemp292 = std::max<float>(fTemp291, fVec192[8]);
			fVec193[IOTA0 & 31] = fTemp292;
			float fTemp293 = std::max<float>(fTemp292, fVec193[(IOTA0 - 16) & 31]);
			fVec194[IOTA0 & 63] = fTemp293;
			float fTemp294 = std::max<float>(fTemp293, fVec194[(IOTA0 - 32) & 63]);
			fVec195[IOTA0 & 127] = fTemp294;
			float fTemp295 = std::max<float>(fTemp294, fVec195[(IOTA0 - 64) & 127]);
			fVec196[IOTA0 & 255] = fTemp295;
			float fTemp296 = std::max<float>(fTemp295, fVec196[(IOTA0 - 128) & 255]);
			fVec197[IOTA0 & 511] = fTemp296;
			float fTemp297 = std::max<float>(fTemp296, fVec197[(IOTA0 - 256) & 511]);
			fVec198[IOTA0 & 1023] = fTemp297;
			float fTemp298 = std::max<float>(fTemp297, fVec198[(IOTA0 - 512) & 1023]);
			fVec199[IOTA0 & 2047] = fTemp298;
			fVec200[IOTA0 & 4095] = std::max<float>(fTemp298, fVec199[(IOTA0 - 1024) & 2047]);
			float fTemp299 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst115) ? fTemp268 : -3.4028235e+38f), ((iConst116) ? fVec190[iConst115] : -3.4028235e+38f)), ((iConst117) ? fVec191[iConst118] : -3.4028235e+38f)), ((iConst119) ? fVec192[iConst120] : -3.4028235e+38f)), ((iConst121) ? fVec193[(IOTA0 - iConst122) & 31] : -3.4028235e+38f)), ((iConst123) ? fVec194[(IOTA0 - iConst124) & 63] : -3.4028235e+38f)), ((iConst125) ? fVec195[(IOTA0 - iConst126) & 127] : -3.4028235e+38f)), ((iConst127) ? fVec196[(IOTA0 - iConst128) & 255] : -3.4028235e+38f)), ((iConst129) ? fVec197[(IOTA0 - iConst130) & 511] : -3.4028235e+38f)), ((iConst131) ? fVec198[(IOTA0 - iConst132) & 1023] : -3.4028235e+38f)), ((iConst133) ? fVec199[(IOTA0 - iConst134) & 2047] : -3.4028235e+38f)), ((iConst135) ? fVec200[(IOTA0 - iConst136) & 4095] : -3.4028235e+38f))));
			int iTemp300 = (fTemp299 > fSlow35) + (fTemp299 > fSlow37);
			float fTemp301 = fTemp299 + 4e+01f;
			float fTemp302 = std::max<float>(fSlow31, fSlow115 * ((iTemp300 == 0) ? fTemp301 - fSlow4 : ((iTemp300 == 1) ? fSlow38 * mydsp_faustpower2_f(fTemp301 - fSlow36) : 0.0f)));
			float fTemp303 = (((fSlow114 * fTemp302) > fRec151[1]) ? fSlow123 : fSlow120);
			fRec151[0] = fSlow114 * fTemp302 * (1.0f - fTemp303) + fRec151[1] * fTemp303;
			float fTemp304 = std::min<float>(fSlow11 + std::min<float>(fRec138[0], fRec144[0]), std::max<float>(fRec150[0], fRec151[0]));
			fVbargraph8 = FAUSTFLOAT(std::min<float>(12.0f, std::max<float>(-12.0f, fTemp304)));
			float fTemp305 = fTemp304;
			float fTemp306 = std::pow(1e+01f, 0.008333334f * fTemp305);
			float fTemp307 = mydsp_faustpower2_f(fTemp306) + -1.0f;
			float fTemp308 = std::pow(1e+01f, 0.025f * (0.0f - 0.33333334f * fTemp305));
			float fTemp309 = mydsp_faustpower2_f(fTemp308) + -1.0f;
			fRec170[0] = fConst167 * (fRec141[2] + fRec141[0] + 2.0f * fRec141[1]) - fConst166 * (fConst171 * fRec170[2] + fConst169 * fRec170[1]);
			fRec169[0] = fConst166 * (fRec170[2] + fRec170[0] + 2.0f * fRec170[1]) - fConst163 * (fConst172 * fRec169[2] + fConst169 * fRec169[1]);
			float fTemp310 = std::fabs(fConst163 * (fRec169[2] + fRec169[0] + 2.0f * fRec169[1]));
			fVec201[0] = fTemp310;
			float fTemp311 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp310));
			int iTemp312 = (fTemp311 > fSlow127) + (fTemp311 > fSlow128);
			float fTemp313 = fTemp311 - fSlow4;
			float fTemp314 = 0.0f - fSlow124 * std::max<float>(0.0f, ((iTemp312 == 0) ? 0.0f : ((iTemp312 == 1) ? fSlow105 * mydsp_faustpower2_f(fSlow126 + fTemp313) : fSlow125 + fTemp313)));
			float fTemp315 = ((fTemp314 > fRec168[1]) ? fSlow134 : fSlow131);
			fRec168[0] = fTemp314 * (1.0f - fTemp315) + fRec168[1] * fTemp315;
			fRec173[0] = fConst167 * (fRec147[2] + fRec147[0] + 2.0f * fRec147[1]) - fConst166 * (fConst171 * fRec173[2] + fConst169 * fRec173[1]);
			fRec172[0] = fConst166 * (fRec173[2] + fRec173[0] + 2.0f * fRec173[1]) - fConst163 * (fConst172 * fRec172[2] + fConst169 * fRec172[1]);
			float fTemp316 = std::fabs(fConst163 * (fRec172[2] + fRec172[0] + 2.0f * fRec172[1]));
			fVec202[0] = fTemp316;
			float fTemp317 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp316));
			int iTemp318 = (fTemp317 > fSlow127) + (fTemp317 > fSlow128);
			float fTemp319 = fTemp317 - fSlow4;
			float fTemp320 = 0.0f - fSlow124 * std::max<float>(0.0f, ((iTemp318 == 0) ? 0.0f : ((iTemp318 == 1) ? fSlow105 * mydsp_faustpower2_f(fSlow126 + fTemp319) : fSlow125 + fTemp319)));
			float fTemp321 = ((fTemp320 > fRec171[1]) ? fSlow134 : fSlow131);
			fRec171[0] = fTemp320 * (1.0f - fTemp321) + fRec171[1] * fTemp321;
			float fTemp322 = std::max<float>(fTemp310, fVec201[1]);
			fVec203[0] = fTemp322;
			float fTemp323 = std::max<float>(fTemp322, fVec203[2]);
			fVec204[0] = fTemp323;
			float fTemp324 = std::max<float>(fTemp323, fVec204[4]);
			fVec205[0] = fTemp324;
			float fTemp325 = std::max<float>(fTemp324, fVec205[8]);
			fVec206[IOTA0 & 31] = fTemp325;
			float fTemp326 = std::max<float>(fTemp325, fVec206[(IOTA0 - 16) & 31]);
			fVec207[IOTA0 & 63] = fTemp326;
			float fTemp327 = std::max<float>(fTemp326, fVec207[(IOTA0 - 32) & 63]);
			fVec208[IOTA0 & 127] = fTemp327;
			float fTemp328 = std::max<float>(fTemp327, fVec208[(IOTA0 - 64) & 127]);
			fVec209[IOTA0 & 255] = fTemp328;
			float fTemp329 = std::max<float>(fTemp328, fVec209[(IOTA0 - 128) & 255]);
			fVec210[IOTA0 & 511] = fTemp329;
			float fTemp330 = std::max<float>(fTemp329, fVec210[(IOTA0 - 256) & 511]);
			fVec211[IOTA0 & 1023] = fTemp330;
			float fTemp331 = std::max<float>(fTemp330, fVec211[(IOTA0 - 512) & 1023]);
			fVec212[IOTA0 & 2047] = fTemp331;
			fVec213[IOTA0 & 4095] = std::max<float>(fTemp331, fVec212[(IOTA0 - 1024) & 2047]);
			float fTemp332 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst115) ? fTemp310 : -3.4028235e+38f), ((iConst116) ? fVec203[iConst115] : -3.4028235e+38f)), ((iConst117) ? fVec204[iConst118] : -3.4028235e+38f)), ((iConst119) ? fVec205[iConst120] : -3.4028235e+38f)), ((iConst121) ? fVec206[(IOTA0 - iConst122) & 31] : -3.4028235e+38f)), ((iConst123) ? fVec207[(IOTA0 - iConst124) & 63] : -3.4028235e+38f)), ((iConst125) ? fVec208[(IOTA0 - iConst126) & 127] : -3.4028235e+38f)), ((iConst127) ? fVec209[(IOTA0 - iConst128) & 255] : -3.4028235e+38f)), ((iConst129) ? fVec210[(IOTA0 - iConst130) & 511] : -3.4028235e+38f)), ((iConst131) ? fVec211[(IOTA0 - iConst132) & 1023] : -3.4028235e+38f)), ((iConst133) ? fVec212[(IOTA0 - iConst134) & 2047] : -3.4028235e+38f)), ((iConst135) ? fVec213[(IOTA0 - iConst136) & 4095] : -3.4028235e+38f))));
			int iTemp333 = (fTemp332 > fSlow35) + (fTemp332 > fSlow37);
			float fTemp334 = fTemp332 + 4e+01f;
			float fTemp335 = std::max<float>(fSlow31, fSlow115 * ((iTemp333 == 0) ? fTemp334 - fSlow4 : ((iTemp333 == 1) ? fSlow38 * mydsp_faustpower2_f(fTemp334 - fSlow36) : 0.0f)));
			float fTemp336 = (((fSlow114 * fTemp335) > fRec174[1]) ? fSlow141 : fSlow138);
			fRec174[0] = fSlow114 * fTemp335 * (1.0f - fTemp336) + fRec174[1] * fTemp336;
			float fTemp337 = std::max<float>(fTemp316, fVec202[1]);
			fVec214[0] = fTemp337;
			float fTemp338 = std::max<float>(fTemp337, fVec214[2]);
			fVec215[0] = fTemp338;
			float fTemp339 = std::max<float>(fTemp338, fVec215[4]);
			fVec216[0] = fTemp339;
			float fTemp340 = std::max<float>(fTemp339, fVec216[8]);
			fVec217[IOTA0 & 31] = fTemp340;
			float fTemp341 = std::max<float>(fTemp340, fVec217[(IOTA0 - 16) & 31]);
			fVec218[IOTA0 & 63] = fTemp341;
			float fTemp342 = std::max<float>(fTemp341, fVec218[(IOTA0 - 32) & 63]);
			fVec219[IOTA0 & 127] = fTemp342;
			float fTemp343 = std::max<float>(fTemp342, fVec219[(IOTA0 - 64) & 127]);
			fVec220[IOTA0 & 255] = fTemp343;
			float fTemp344 = std::max<float>(fTemp343, fVec220[(IOTA0 - 128) & 255]);
			fVec221[IOTA0 & 511] = fTemp344;
			float fTemp345 = std::max<float>(fTemp344, fVec221[(IOTA0 - 256) & 511]);
			fVec222[IOTA0 & 1023] = fTemp345;
			float fTemp346 = std::max<float>(fTemp345, fVec222[(IOTA0 - 512) & 1023]);
			fVec223[IOTA0 & 2047] = fTemp346;
			fVec224[IOTA0 & 4095] = std::max<float>(fTemp346, fVec223[(IOTA0 - 1024) & 2047]);
			float fTemp347 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst115) ? fTemp316 : -3.4028235e+38f), ((iConst116) ? fVec214[iConst115] : -3.4028235e+38f)), ((iConst117) ? fVec215[iConst118] : -3.4028235e+38f)), ((iConst119) ? fVec216[iConst120] : -3.4028235e+38f)), ((iConst121) ? fVec217[(IOTA0 - iConst122) & 31] : -3.4028235e+38f)), ((iConst123) ? fVec218[(IOTA0 - iConst124) & 63] : -3.4028235e+38f)), ((iConst125) ? fVec219[(IOTA0 - iConst126) & 127] : -3.4028235e+38f)), ((iConst127) ? fVec220[(IOTA0 - iConst128) & 255] : -3.4028235e+38f)), ((iConst129) ? fVec221[(IOTA0 - iConst130) & 511] : -3.4028235e+38f)), ((iConst131) ? fVec222[(IOTA0 - iConst132) & 1023] : -3.4028235e+38f)), ((iConst133) ? fVec223[(IOTA0 - iConst134) & 2047] : -3.4028235e+38f)), ((iConst135) ? fVec224[(IOTA0 - iConst136) & 4095] : -3.4028235e+38f))));
			int iTemp348 = (fTemp347 > fSlow35) + (fTemp347 > fSlow37);
			float fTemp349 = fTemp347 + 4e+01f;
			float fTemp350 = std::max<float>(fSlow31, fSlow115 * ((iTemp348 == 0) ? fTemp349 - fSlow4 : ((iTemp348 == 1) ? fSlow38 * mydsp_faustpower2_f(fTemp349 - fSlow36) : 0.0f)));
			float fTemp351 = (((fSlow114 * fTemp350) > fRec175[1]) ? fSlow141 : fSlow138);
			fRec175[0] = fSlow114 * fTemp350 * (1.0f - fTemp351) + fRec175[1] * fTemp351;
			float fTemp352 = std::min<float>(fSlow11 + std::min<float>(fRec168[0], fRec171[0]), std::max<float>(fRec174[0], fRec175[0]));
			fVbargraph9 = FAUSTFLOAT(std::min<float>(12.0f, std::max<float>(-12.0f, fTemp352)));
			float fTemp353 = std::pow(1e+01f, 0.008333334f * fTemp352);
			float fTemp354 = mydsp_faustpower2_f(fTemp353) + -1.0f;
			float fTemp355 = std::sqrt(fTemp353);
			float fTemp356 = fRec180[1] + fConst161 * ((fTemp119 - fRec181[1]) / fTemp355);
			float fTemp357 = fConst161 / fTemp355;
			float fTemp358 = fConst161 * ((fTemp357 + 2.0f) / fTemp355) + 1.0f;
			float fTemp359 = fTemp356 / fTemp358;
			fRec180[0] = 2.0f * fTemp359 - fRec180[1];
			float fTemp360 = fTemp355 * fTemp358;
			float fTemp361 = fRec181[1] + fConst161 * (fTemp356 / fTemp360);
			fRec181[0] = 2.0f * fTemp361 - fRec181[1];
			float fRec182 = fTemp359;
			float fRec183 = fTemp361;
			float fTemp362 = fTemp353 + -1.0f;
			float fTemp363 = fTemp119 + 2.0f * fRec182 * fTemp362 + fRec183 * fTemp354;
			float fTemp364 = fRec184[1] + fConst161 * ((fTemp363 - fRec185[1]) / fTemp355);
			float fTemp365 = fConst161 * ((fTemp357 + 1.4144272f) / fTemp355) + 1.0f;
			float fTemp366 = fTemp364 / fTemp365;
			fRec184[0] = 2.0f * fTemp366 - fRec184[1];
			float fTemp367 = fTemp355 * fTemp365;
			float fTemp368 = fRec185[1] + fConst161 * (fTemp364 / fTemp367);
			fRec185[0] = 2.0f * fTemp368 - fRec185[1];
			float fRec186 = fTemp366;
			float fRec187 = fTemp368;
			float fTemp369 = fRec183 + fRec187;
			float fTemp370 = 2.0f * fRec182 + 1.4144272f * fRec186;
			float fTemp371 = fTemp354 * fTemp369 + fTemp119 + fTemp362 * fTemp370;
			float fTemp372 = fRec176[1] + fConst161 * ((fTemp371 - fRec177[1]) / fTemp355);
			float fTemp373 = fConst161 * ((fTemp357 + 0.5f) / fTemp355) + 1.0f;
			float fTemp374 = fTemp372 / fTemp373;
			fRec176[0] = 2.0f * fTemp374 - fRec176[1];
			float fTemp375 = fTemp355 * fTemp373;
			float fTemp376 = fRec177[1] + fConst161 * (fTemp372 / fTemp375);
			fRec177[0] = 2.0f * fTemp376 - fRec177[1];
			float fRec178 = fTemp374;
			float fRec179 = fTemp376;
			float fTemp377 = fTemp354 * (fRec179 + fTemp369) + fTemp119 + fTemp362 * (fTemp370 + 0.5f * fRec178);
			float fTemp378 = std::sqrt(fTemp308);
			float fTemp379 = fRec164[1] + fConst161 * ((fTemp377 - fRec165[1]) / fTemp378);
			float fTemp380 = fConst161 / fTemp378;
			float fTemp381 = fConst161 * ((fTemp380 + 2.0f) / fTemp378) + 1.0f;
			float fTemp382 = fTemp379 / fTemp381;
			fRec164[0] = 2.0f * fTemp382 - fRec164[1];
			float fTemp383 = fTemp378 * fTemp381;
			float fTemp384 = fRec165[1] + fConst161 * (fTemp379 / fTemp383);
			fRec165[0] = 2.0f * fTemp384 - fRec165[1];
			float fRec166 = fTemp382;
			float fRec167 = fTemp384;
			float fTemp385 = fTemp308 + -1.0f;
			float fTemp386 = fTemp377 + 2.0f * fRec166 * fTemp385 + fRec167 * fTemp309;
			float fTemp387 = fRec188[1] + fConst161 * ((fTemp386 - fRec189[1]) / fTemp378);
			float fTemp388 = fConst161 * ((fTemp380 + 1.4144272f) / fTemp378) + 1.0f;
			float fTemp389 = fTemp387 / fTemp388;
			fRec188[0] = 2.0f * fTemp389 - fRec188[1];
			float fTemp390 = fTemp378 * fTemp388;
			float fTemp391 = fRec189[1] + fConst161 * (fTemp387 / fTemp390);
			fRec189[0] = 2.0f * fTemp391 - fRec189[1];
			float fRec190 = fTemp389;
			float fRec191 = fTemp391;
			float fTemp392 = fRec167 + fRec191;
			float fTemp393 = 2.0f * fRec166 + 1.4144272f * fRec190;
			float fTemp394 = fTemp309 * fTemp392 + fTemp377 + fTemp385 * fTemp393;
			float fTemp395 = fRec160[1] + fConst161 * ((fTemp394 - fRec161[1]) / fTemp378);
			float fTemp396 = fConst161 * ((fTemp380 + 0.5f) / fTemp378) + 1.0f;
			float fTemp397 = fTemp395 / fTemp396;
			fRec160[0] = 2.0f * fTemp397 - fRec160[1];
			float fTemp398 = fTemp378 * fTemp396;
			float fTemp399 = fRec161[1] + fConst161 * (fTemp395 / fTemp398);
			fRec161[0] = 2.0f * fTemp399 - fRec161[1];
			float fRec162 = fTemp397;
			float fRec163 = fTemp399;
			float fTemp400 = fTemp309 * (fRec163 + fTemp392) + fTemp377 + fTemp385 * (fTemp393 + 0.5f * fRec162);
			float fTemp401 = std::sqrt(fTemp306);
			float fTemp402 = fRec156[1] + fConst149 * ((fTemp400 - fRec157[1]) / fTemp401);
			float fTemp403 = fConst149 / fTemp401;
			float fTemp404 = fConst149 * ((fTemp403 + 2.0f) / fTemp401) + 1.0f;
			float fTemp405 = fTemp402 / fTemp404;
			fRec156[0] = 2.0f * fTemp405 - fRec156[1];
			float fTemp406 = fTemp401 * fTemp404;
			float fTemp407 = fRec157[1] + fConst149 * (fTemp402 / fTemp406);
			fRec157[0] = 2.0f * fTemp407 - fRec157[1];
			float fRec158 = fTemp405;
			float fRec159 = fTemp407;
			float fTemp408 = fTemp306 + -1.0f;
			float fTemp409 = fTemp400 + 2.0f * fRec158 * fTemp408 + fRec159 * fTemp307;
			float fTemp410 = fRec192[1] + fConst149 * ((fTemp409 - fRec193[1]) / fTemp401);
			float fTemp411 = fConst149 * ((fTemp403 + 1.4144272f) / fTemp401) + 1.0f;
			float fTemp412 = fTemp410 / fTemp411;
			fRec192[0] = 2.0f * fTemp412 - fRec192[1];
			float fTemp413 = fTemp401 * fTemp411;
			float fTemp414 = fRec193[1] + fConst149 * (fTemp410 / fTemp413);
			fRec193[0] = 2.0f * fTemp414 - fRec193[1];
			float fRec194 = fTemp412;
			float fRec195 = fTemp414;
			float fTemp415 = fRec159 + fRec195;
			float fTemp416 = 2.0f * fRec158 + 1.4144272f * fRec194;
			float fTemp417 = fTemp307 * fTemp415 + fTemp400 + fTemp408 * fTemp416;
			float fTemp418 = fRec152[1] + fConst149 * ((fTemp417 - fRec153[1]) / fTemp401);
			float fTemp419 = fConst149 * ((fTemp403 + 0.5f) / fTemp401) + 1.0f;
			float fTemp420 = fTemp418 / fTemp419;
			fRec152[0] = 2.0f * fTemp420 - fRec152[1];
			float fTemp421 = fTemp401 * fTemp419;
			float fTemp422 = fRec153[1] + fConst149 * (fTemp418 / fTemp421);
			fRec153[0] = 2.0f * fTemp422 - fRec153[1];
			float fRec154 = fTemp420;
			float fRec155 = fTemp422;
			float fTemp423 = fTemp307 * (fRec155 + fTemp415) + fTemp400 + fTemp408 * (fTemp416 + 0.5f * fRec154);
			float fTemp424 = std::sqrt(fTemp260);
			float fTemp425 = fRec134[1] + fConst149 * ((fTemp423 - fRec135[1]) / fTemp424);
			float fTemp426 = fConst149 / fTemp424;
			float fTemp427 = fConst149 * ((fTemp426 + 2.0f) / fTemp424) + 1.0f;
			float fTemp428 = fTemp425 / fTemp427;
			fRec134[0] = 2.0f * fTemp428 - fRec134[1];
			float fTemp429 = fTemp424 * fTemp427;
			float fTemp430 = fRec135[1] + fConst149 * (fTemp425 / fTemp429);
			fRec135[0] = 2.0f * fTemp430 - fRec135[1];
			float fRec136 = fTemp428;
			float fRec137 = fTemp430;
			float fTemp431 = fTemp260 + -1.0f;
			float fTemp432 = fTemp423 + 2.0f * fRec136 * fTemp431 + fRec137 * fTemp261;
			float fTemp433 = fRec196[1] + fConst149 * ((fTemp432 - fRec197[1]) / fTemp424);
			float fTemp434 = fConst149 * ((fTemp426 + 1.4144272f) / fTemp424) + 1.0f;
			float fTemp435 = fTemp433 / fTemp434;
			fRec196[0] = 2.0f * fTemp435 - fRec196[1];
			float fTemp436 = fTemp424 * fTemp434;
			float fTemp437 = fRec197[1] + fConst149 * (fTemp433 / fTemp436);
			fRec197[0] = 2.0f * fTemp437 - fRec197[1];
			float fRec198 = fTemp435;
			float fRec199 = fTemp437;
			float fTemp438 = fRec137 + fRec199;
			float fTemp439 = 2.0f * fRec136 + 1.4144272f * fRec198;
			float fTemp440 = fTemp261 * fTemp438 + fTemp423 + fTemp431 * fTemp439;
			float fTemp441 = fRec130[1] + fConst149 * ((fTemp440 - fRec131[1]) / fTemp424);
			float fTemp442 = fConst149 * ((fTemp426 + 0.5f) / fTemp424) + 1.0f;
			float fTemp443 = fTemp441 / fTemp442;
			fRec130[0] = 2.0f * fTemp443 - fRec130[1];
			float fTemp444 = fTemp424 * fTemp442;
			float fTemp445 = fRec131[1] + fConst149 * (fTemp441 / fTemp444);
			fRec131[0] = 2.0f * fTemp445 - fRec131[1];
			float fRec132 = fTemp443;
			float fRec133 = fTemp445;
			float fTemp446 = fTemp261 * (fRec133 + fTemp438) + fTemp423 + fTemp431 * (fTemp439 + 0.5f * fRec132);
			float fTemp447 = std::sqrt(fTemp258);
			float fTemp448 = fRec126[1] + fConst137 * ((fTemp446 - fRec127[1]) / fTemp447);
			float fTemp449 = fConst137 / fTemp447;
			float fTemp450 = fConst137 * ((fTemp449 + 2.0f) / fTemp447) + 1.0f;
			float fTemp451 = fTemp448 / fTemp450;
			fRec126[0] = 2.0f * fTemp451 - fRec126[1];
			float fTemp452 = fTemp447 * fTemp450;
			float fTemp453 = fRec127[1] + fConst137 * (fTemp448 / fTemp452);
			fRec127[0] = 2.0f * fTemp453 - fRec127[1];
			float fRec128 = fTemp451;
			float fRec129 = fTemp453;
			float fTemp454 = fTemp258 + -1.0f;
			float fTemp455 = fTemp446 + 2.0f * fRec128 * fTemp454 + fRec129 * fTemp259;
			float fTemp456 = fRec200[1] + fConst137 * ((fTemp455 - fRec201[1]) / fTemp447);
			float fTemp457 = fConst137 * ((fTemp449 + 1.4144272f) / fTemp447) + 1.0f;
			float fTemp458 = fTemp456 / fTemp457;
			fRec200[0] = 2.0f * fTemp458 - fRec200[1];
			float fTemp459 = fTemp447 * fTemp457;
			float fTemp460 = fRec201[1] + fConst137 * (fTemp456 / fTemp459);
			fRec201[0] = 2.0f * fTemp460 - fRec201[1];
			float fRec202 = fTemp458;
			float fRec203 = fTemp460;
			float fTemp461 = fRec129 + fRec203;
			float fTemp462 = 2.0f * fRec128 + 1.4144272f * fRec202;
			float fTemp463 = fTemp259 * fTemp461 + fTemp446 + fTemp454 * fTemp462;
			float fTemp464 = fRec122[1] + fConst137 * ((fTemp463 - fRec123[1]) / fTemp447);
			float fTemp465 = fConst137 * ((fTemp449 + 0.5f) / fTemp447) + 1.0f;
			float fTemp466 = fTemp464 / fTemp465;
			fRec122[0] = 2.0f * fTemp466 - fRec122[1];
			float fTemp467 = fTemp447 * fTemp465;
			float fTemp468 = fRec123[1] + fConst137 * (fTemp464 / fTemp467);
			fRec123[0] = 2.0f * fTemp468 - fRec123[1];
			float fRec124 = fTemp466;
			float fRec125 = fTemp468;
			float fTemp469 = fTemp259 * (fRec125 + fTemp461) + fTemp446 + fTemp454 * (fTemp462 + 0.5f * fRec124);
			float fTemp470 = std::sqrt(fTemp212);
			float fTemp471 = fRec104[1] + fConst137 * ((fTemp469 - fRec105[1]) / fTemp470);
			float fTemp472 = fConst137 / fTemp470;
			float fTemp473 = fConst137 * ((fTemp472 + 2.0f) / fTemp470) + 1.0f;
			float fTemp474 = fTemp471 / fTemp473;
			fRec104[0] = 2.0f * fTemp474 - fRec104[1];
			float fTemp475 = fTemp470 * fTemp473;
			float fTemp476 = fRec105[1] + fConst137 * (fTemp471 / fTemp475);
			fRec105[0] = 2.0f * fTemp476 - fRec105[1];
			float fRec106 = fTemp474;
			float fRec107 = fTemp476;
			float fTemp477 = fTemp212 + -1.0f;
			float fTemp478 = fTemp469 + 2.0f * fRec106 * fTemp477 + fRec107 * fTemp213;
			float fTemp479 = fRec204[1] + fConst137 * ((fTemp478 - fRec205[1]) / fTemp470);
			float fTemp480 = fConst137 * ((fTemp472 + 1.4144272f) / fTemp470) + 1.0f;
			float fTemp481 = fTemp479 / fTemp480;
			fRec204[0] = 2.0f * fTemp481 - fRec204[1];
			float fTemp482 = fTemp470 * fTemp480;
			float fTemp483 = fRec205[1] + fConst137 * (fTemp479 / fTemp482);
			fRec205[0] = 2.0f * fTemp483 - fRec205[1];
			float fRec206 = fTemp481;
			float fRec207 = fTemp483;
			float fTemp484 = fRec107 + fRec207;
			float fTemp485 = 2.0f * fRec106 + 1.4144272f * fRec206;
			float fTemp486 = fTemp213 * fTemp484 + fTemp469 + fTemp477 * fTemp485;
			float fTemp487 = fRec100[1] + fConst137 * ((fTemp486 - fRec101[1]) / fTemp470);
			float fTemp488 = fConst137 * ((fTemp472 + 0.5f) / fTemp470) + 1.0f;
			float fTemp489 = fTemp487 / fTemp488;
			fRec100[0] = 2.0f * fTemp489 - fRec100[1];
			float fTemp490 = fTemp470 * fTemp488;
			float fTemp491 = fRec101[1] + fConst137 * (fTemp487 / fTemp490);
			fRec101[0] = 2.0f * fTemp491 - fRec101[1];
			float fRec102 = fTemp489;
			float fRec103 = fTemp491;
			float fTemp492 = fTemp213 * (fRec103 + fTemp484) + fTemp469 + fTemp477 * (fTemp485 + 0.5f * fRec102);
			float fTemp493 = std::sqrt(fTemp210);
			float fTemp494 = fRec96[1] + fConst102 * ((fTemp492 - fRec97[1]) / fTemp493);
			float fTemp495 = fConst102 / fTemp493;
			float fTemp496 = fConst102 * ((fTemp495 + 2.0f) / fTemp493) + 1.0f;
			float fTemp497 = fTemp494 / fTemp496;
			fRec96[0] = 2.0f * fTemp497 - fRec96[1];
			float fTemp498 = fTemp493 * fTemp496;
			float fTemp499 = fRec97[1] + fConst102 * (fTemp494 / fTemp498);
			fRec97[0] = 2.0f * fTemp499 - fRec97[1];
			float fRec98 = fTemp497;
			float fRec99 = fTemp499;
			float fTemp500 = fTemp210 + -1.0f;
			float fTemp501 = fTemp492 + 2.0f * fRec98 * fTemp500 + fRec99 * fTemp211;
			float fTemp502 = fRec208[1] + fConst102 * ((fTemp501 - fRec209[1]) / fTemp493);
			float fTemp503 = fConst102 * ((fTemp495 + 1.4144272f) / fTemp493) + 1.0f;
			float fTemp504 = fTemp502 / fTemp503;
			fRec208[0] = 2.0f * fTemp504 - fRec208[1];
			float fTemp505 = fTemp493 * fTemp503;
			float fTemp506 = fRec209[1] + fConst102 * (fTemp502 / fTemp505);
			fRec209[0] = 2.0f * fTemp506 - fRec209[1];
			float fRec210 = fTemp504;
			float fRec211 = fTemp506;
			float fTemp507 = fRec99 + fRec211;
			float fTemp508 = 2.0f * fRec98 + 1.4144272f * fRec210;
			float fTemp509 = fTemp211 * fTemp507 + fTemp492 + fTemp500 * fTemp508;
			float fTemp510 = fRec92[1] + fConst102 * ((fTemp509 - fRec93[1]) / fTemp493);
			float fTemp511 = fConst102 * ((fTemp495 + 0.5f) / fTemp493) + 1.0f;
			float fTemp512 = fTemp510 / fTemp511;
			fRec92[0] = 2.0f * fTemp512 - fRec92[1];
			float fTemp513 = fTemp493 * fTemp511;
			float fTemp514 = fRec93[1] + fConst102 * (fTemp510 / fTemp513);
			fRec93[0] = 2.0f * fTemp514 - fRec93[1];
			float fRec94 = fTemp512;
			float fRec95 = fTemp514;
			float fTemp515 = fTemp211 * (fRec95 + fTemp507) + fTemp492 + fTemp500 * (fTemp508 + 0.5f * fRec94);
			float fTemp516 = std::sqrt(fTemp165);
			float fTemp517 = fRec212[1] + fConst102 * fTemp516 * (fTemp515 - fRec213[1]);
			float fTemp518 = fConst102 * fTemp516;
			float fTemp519 = fConst102 * fTemp516 * (fTemp518 + 2.0f) + 1.0f;
			float fTemp520 = fTemp517 / fTemp519;
			fRec212[0] = 2.0f * fTemp520 - fRec212[1];
			float fTemp521 = fRec213[1] + fConst102 * (fTemp516 * fTemp517 / fTemp519);
			fRec213[0] = 2.0f * fTemp521 - fRec213[1];
			float fRec214 = fTemp520;
			float fRec215 = fTemp521;
			float fTemp522 = 1.0f - fTemp165;
			float fTemp523 = 1.0f - mydsp_faustpower2_f(fTemp165);
			float fTemp524 = fTemp165 * (fTemp165 * fTemp515 + 2.0f * fRec214 * fTemp522) + fRec215 * fTemp523;
			float fTemp525 = fRec216[1] + fConst102 * fTemp516 * (fTemp524 - fRec217[1]);
			float fTemp526 = fConst102 * fTemp516 * (fTemp518 + 1.4144272f) + 1.0f;
			float fTemp527 = fTemp525 / fTemp526;
			fRec216[0] = 2.0f * fTemp527 - fRec216[1];
			float fTemp528 = fRec217[1] + fConst102 * (fTemp516 * fTemp525 / fTemp526);
			fRec217[0] = 2.0f * fTemp528 - fRec217[1];
			float fRec218 = fTemp527;
			float fRec219 = fTemp528;
			float fTemp529 = fTemp165 * (fTemp165 * fTemp524 + 1.4144272f * fRec218 * fTemp522) + fRec219 * fTemp523;
			float fTemp530 = fRec220[1] + fConst102 * fTemp516 * (fTemp529 - fRec221[1]);
			float fTemp531 = fConst102 * fTemp516 * (fTemp518 + 0.5f) + 1.0f;
			float fTemp532 = fTemp530 / fTemp531;
			fRec220[0] = 2.0f * fTemp532 - fRec220[1];
			float fTemp533 = fRec221[1] + fConst102 * (fTemp516 * fTemp530 / fTemp531);
			fRec221[0] = 2.0f * fTemp533 - fRec221[1];
			float fRec222 = fTemp532;
			float fRec223 = fTemp533;
			float fTemp534 = fRec27[0] * fTemp119 + fTemp120 * (fTemp165 * (fTemp165 * fTemp529 + 0.5f * fRec222 * fTemp522) + fRec223 * fTemp523);
			fRec8[0] = fTemp38 * fTemp534;
			float fTemp535 = fRec276[1] + fConst161 * ((fTemp127 - fRec277[1]) / fTemp355);
			float fTemp536 = fTemp535 / fTemp358;
			fRec276[0] = 2.0f * fTemp536 - fRec276[1];
			float fTemp537 = fRec277[1] + fConst161 * (fTemp535 / fTemp360);
			fRec277[0] = 2.0f * fTemp537 - fRec277[1];
			float fRec278 = fTemp536;
			float fRec279 = fTemp537;
			float fTemp538 = fTemp127 + 2.0f * fRec278 * fTemp362 + fRec279 * fTemp354;
			float fTemp539 = fRec280[1] + fConst161 * ((fTemp538 - fRec281[1]) / fTemp355);
			float fTemp540 = fTemp539 / fTemp365;
			fRec280[0] = 2.0f * fTemp540 - fRec280[1];
			float fTemp541 = fRec281[1] + fConst161 * (fTemp539 / fTemp367);
			fRec281[0] = 2.0f * fTemp541 - fRec281[1];
			float fRec282 = fTemp540;
			float fRec283 = fTemp541;
			float fTemp542 = fRec279 + fRec283;
			float fTemp543 = 2.0f * fRec278 + 1.4144272f * fRec282;
			float fTemp544 = fTemp354 * fTemp542 + fTemp127 + fTemp362 * fTemp543;
			float fTemp545 = fRec272[1] + fConst161 * ((fTemp544 - fRec273[1]) / fTemp355);
			float fTemp546 = fTemp545 / fTemp373;
			fRec272[0] = 2.0f * fTemp546 - fRec272[1];
			float fTemp547 = fRec273[1] + fConst161 * (fTemp545 / fTemp375);
			fRec273[0] = 2.0f * fTemp547 - fRec273[1];
			float fRec274 = fTemp546;
			float fRec275 = fTemp547;
			float fTemp548 = fTemp354 * (fRec275 + fTemp542) + fTemp127 + fTemp362 * (fTemp543 + 0.5f * fRec274);
			float fTemp549 = fRec268[1] + fConst161 * ((fTemp548 - fRec269[1]) / fTemp378);
			float fTemp550 = fTemp549 / fTemp381;
			fRec268[0] = 2.0f * fTemp550 - fRec268[1];
			float fTemp551 = fRec269[1] + fConst161 * (fTemp549 / fTemp383);
			fRec269[0] = 2.0f * fTemp551 - fRec269[1];
			float fRec270 = fTemp550;
			float fRec271 = fTemp551;
			float fTemp552 = fTemp548 + 2.0f * fRec270 * fTemp385 + fRec271 * fTemp309;
			float fTemp553 = fRec284[1] + fConst161 * ((fTemp552 - fRec285[1]) / fTemp378);
			float fTemp554 = fTemp553 / fTemp388;
			fRec284[0] = 2.0f * fTemp554 - fRec284[1];
			float fTemp555 = fRec285[1] + fConst161 * (fTemp553 / fTemp390);
			fRec285[0] = 2.0f * fTemp555 - fRec285[1];
			float fRec286 = fTemp554;
			float fRec287 = fTemp555;
			float fTemp556 = fRec271 + fRec287;
			float fTemp557 = 2.0f * fRec270 + 1.4144272f * fRec286;
			float fTemp558 = fTemp309 * fTemp556 + fTemp548 + fTemp385 * fTemp557;
			float fTemp559 = fRec264[1] + fConst161 * ((fTemp558 - fRec265[1]) / fTemp378);
			float fTemp560 = fTemp559 / fTemp396;
			fRec264[0] = 2.0f * fTemp560 - fRec264[1];
			float fTemp561 = fRec265[1] + fConst161 * (fTemp559 / fTemp398);
			fRec265[0] = 2.0f * fTemp561 - fRec265[1];
			float fRec266 = fTemp560;
			float fRec267 = fTemp561;
			float fTemp562 = fTemp309 * (fRec267 + fTemp556) + fTemp548 + fTemp385 * (fTemp557 + 0.5f * fRec266);
			float fTemp563 = fRec260[1] + fConst149 * ((fTemp562 - fRec261[1]) / fTemp401);
			float fTemp564 = fTemp563 / fTemp404;
			fRec260[0] = 2.0f * fTemp564 - fRec260[1];
			float fTemp565 = fRec261[1] + fConst149 * (fTemp563 / fTemp406);
			fRec261[0] = 2.0f * fTemp565 - fRec261[1];
			float fRec262 = fTemp564;
			float fRec263 = fTemp565;
			float fTemp566 = fTemp562 + 2.0f * fRec262 * fTemp408 + fRec263 * fTemp307;
			float fTemp567 = fRec288[1] + fConst149 * ((fTemp566 - fRec289[1]) / fTemp401);
			float fTemp568 = fTemp567 / fTemp411;
			fRec288[0] = 2.0f * fTemp568 - fRec288[1];
			float fTemp569 = fRec289[1] + fConst149 * (fTemp567 / fTemp413);
			fRec289[0] = 2.0f * fTemp569 - fRec289[1];
			float fRec290 = fTemp568;
			float fRec291 = fTemp569;
			float fTemp570 = fRec263 + fRec291;
			float fTemp571 = 2.0f * fRec262 + 1.4144272f * fRec290;
			float fTemp572 = fTemp307 * fTemp570 + fTemp562 + fTemp408 * fTemp571;
			float fTemp573 = fRec256[1] + fConst149 * ((fTemp572 - fRec257[1]) / fTemp401);
			float fTemp574 = fTemp573 / fTemp419;
			fRec256[0] = 2.0f * fTemp574 - fRec256[1];
			float fTemp575 = fRec257[1] + fConst149 * (fTemp573 / fTemp421);
			fRec257[0] = 2.0f * fTemp575 - fRec257[1];
			float fRec258 = fTemp574;
			float fRec259 = fTemp575;
			float fTemp576 = fTemp307 * (fRec259 + fTemp570) + fTemp562 + fTemp408 * (fTemp571 + 0.5f * fRec258);
			float fTemp577 = fRec252[1] + fConst149 * ((fTemp576 - fRec253[1]) / fTemp424);
			float fTemp578 = fTemp577 / fTemp427;
			fRec252[0] = 2.0f * fTemp578 - fRec252[1];
			float fTemp579 = fRec253[1] + fConst149 * (fTemp577 / fTemp429);
			fRec253[0] = 2.0f * fTemp579 - fRec253[1];
			float fRec254 = fTemp578;
			float fRec255 = fTemp579;
			float fTemp580 = fTemp576 + 2.0f * fRec254 * fTemp431 + fRec255 * fTemp261;
			float fTemp581 = fRec292[1] + fConst149 * ((fTemp580 - fRec293[1]) / fTemp424);
			float fTemp582 = fTemp581 / fTemp434;
			fRec292[0] = 2.0f * fTemp582 - fRec292[1];
			float fTemp583 = fRec293[1] + fConst149 * (fTemp581 / fTemp436);
			fRec293[0] = 2.0f * fTemp583 - fRec293[1];
			float fRec294 = fTemp582;
			float fRec295 = fTemp583;
			float fTemp584 = fRec255 + fRec295;
			float fTemp585 = 2.0f * fRec254 + 1.4144272f * fRec294;
			float fTemp586 = fTemp261 * fTemp584 + fTemp576 + fTemp431 * fTemp585;
			float fTemp587 = fRec248[1] + fConst149 * ((fTemp586 - fRec249[1]) / fTemp424);
			float fTemp588 = fTemp587 / fTemp442;
			fRec248[0] = 2.0f * fTemp588 - fRec248[1];
			float fTemp589 = fRec249[1] + fConst149 * (fTemp587 / fTemp444);
			fRec249[0] = 2.0f * fTemp589 - fRec249[1];
			float fRec250 = fTemp588;
			float fRec251 = fTemp589;
			float fTemp590 = fTemp261 * (fRec251 + fTemp584) + fTemp576 + fTemp431 * (fTemp585 + 0.5f * fRec250);
			float fTemp591 = fRec244[1] + fConst137 * ((fTemp590 - fRec245[1]) / fTemp447);
			float fTemp592 = fTemp591 / fTemp450;
			fRec244[0] = 2.0f * fTemp592 - fRec244[1];
			float fTemp593 = fRec245[1] + fConst137 * (fTemp591 / fTemp452);
			fRec245[0] = 2.0f * fTemp593 - fRec245[1];
			float fRec246 = fTemp592;
			float fRec247 = fTemp593;
			float fTemp594 = fTemp590 + 2.0f * fRec246 * fTemp454 + fRec247 * fTemp259;
			float fTemp595 = fRec296[1] + fConst137 * ((fTemp594 - fRec297[1]) / fTemp447);
			float fTemp596 = fTemp595 / fTemp457;
			fRec296[0] = 2.0f * fTemp596 - fRec296[1];
			float fTemp597 = fRec297[1] + fConst137 * (fTemp595 / fTemp459);
			fRec297[0] = 2.0f * fTemp597 - fRec297[1];
			float fRec298 = fTemp596;
			float fRec299 = fTemp597;
			float fTemp598 = fRec247 + fRec299;
			float fTemp599 = 2.0f * fRec246 + 1.4144272f * fRec298;
			float fTemp600 = fTemp259 * fTemp598 + fTemp590 + fTemp454 * fTemp599;
			float fTemp601 = fRec240[1] + fConst137 * ((fTemp600 - fRec241[1]) / fTemp447);
			float fTemp602 = fTemp601 / fTemp465;
			fRec240[0] = 2.0f * fTemp602 - fRec240[1];
			float fTemp603 = fRec241[1] + fConst137 * (fTemp601 / fTemp467);
			fRec241[0] = 2.0f * fTemp603 - fRec241[1];
			float fRec242 = fTemp602;
			float fRec243 = fTemp603;
			float fTemp604 = fTemp259 * (fRec243 + fTemp598) + fTemp590 + fTemp454 * (fTemp599 + 0.5f * fRec242);
			float fTemp605 = fRec236[1] + fConst137 * ((fTemp604 - fRec237[1]) / fTemp470);
			float fTemp606 = fTemp605 / fTemp473;
			fRec236[0] = 2.0f * fTemp606 - fRec236[1];
			float fTemp607 = fRec237[1] + fConst137 * (fTemp605 / fTemp475);
			fRec237[0] = 2.0f * fTemp607 - fRec237[1];
			float fRec238 = fTemp606;
			float fRec239 = fTemp607;
			float fTemp608 = fTemp604 + 2.0f * fRec238 * fTemp477 + fRec239 * fTemp213;
			float fTemp609 = fRec300[1] + fConst137 * ((fTemp608 - fRec301[1]) / fTemp470);
			float fTemp610 = fTemp609 / fTemp480;
			fRec300[0] = 2.0f * fTemp610 - fRec300[1];
			float fTemp611 = fRec301[1] + fConst137 * (fTemp609 / fTemp482);
			fRec301[0] = 2.0f * fTemp611 - fRec301[1];
			float fRec302 = fTemp610;
			float fRec303 = fTemp611;
			float fTemp612 = fRec239 + fRec303;
			float fTemp613 = 2.0f * fRec238 + 1.4144272f * fRec302;
			float fTemp614 = fTemp213 * fTemp612 + fTemp604 + fTemp477 * fTemp613;
			float fTemp615 = fRec232[1] + fConst137 * ((fTemp614 - fRec233[1]) / fTemp470);
			float fTemp616 = fTemp615 / fTemp488;
			fRec232[0] = 2.0f * fTemp616 - fRec232[1];
			float fTemp617 = fRec233[1] + fConst137 * (fTemp615 / fTemp490);
			fRec233[0] = 2.0f * fTemp617 - fRec233[1];
			float fRec234 = fTemp616;
			float fRec235 = fTemp617;
			float fTemp618 = fTemp213 * (fRec235 + fTemp612) + fTemp604 + fTemp477 * (fTemp613 + 0.5f * fRec234);
			float fTemp619 = fRec228[1] + fConst102 * ((fTemp618 - fRec229[1]) / fTemp493);
			float fTemp620 = fTemp619 / fTemp496;
			fRec228[0] = 2.0f * fTemp620 - fRec228[1];
			float fTemp621 = fRec229[1] + fConst102 * (fTemp619 / fTemp498);
			fRec229[0] = 2.0f * fTemp621 - fRec229[1];
			float fRec230 = fTemp620;
			float fRec231 = fTemp621;
			float fTemp622 = fTemp618 + 2.0f * fRec230 * fTemp500 + fRec231 * fTemp211;
			float fTemp623 = fRec304[1] + fConst102 * ((fTemp622 - fRec305[1]) / fTemp493);
			float fTemp624 = fTemp623 / fTemp503;
			fRec304[0] = 2.0f * fTemp624 - fRec304[1];
			float fTemp625 = fRec305[1] + fConst102 * (fTemp623 / fTemp505);
			fRec305[0] = 2.0f * fTemp625 - fRec305[1];
			float fRec306 = fTemp624;
			float fRec307 = fTemp625;
			float fTemp626 = fRec231 + fRec307;
			float fTemp627 = 2.0f * fRec230 + 1.4144272f * fRec306;
			float fTemp628 = fTemp211 * fTemp626 + fTemp618 + fTemp500 * fTemp627;
			float fTemp629 = fRec224[1] + fConst102 * ((fTemp628 - fRec225[1]) / fTemp493);
			float fTemp630 = fTemp629 / fTemp511;
			fRec224[0] = 2.0f * fTemp630 - fRec224[1];
			float fTemp631 = fRec225[1] + fConst102 * (fTemp629 / fTemp513);
			fRec225[0] = 2.0f * fTemp631 - fRec225[1];
			float fRec226 = fTemp630;
			float fRec227 = fTemp631;
			float fTemp632 = fTemp211 * (fRec227 + fTemp626) + fTemp618 + fTemp500 * (fTemp627 + 0.5f * fRec226);
			float fTemp633 = fRec308[1] + fConst102 * fTemp516 * (fTemp632 - fRec309[1]);
			float fTemp634 = fTemp633 / fTemp519;
			fRec308[0] = 2.0f * fTemp634 - fRec308[1];
			float fTemp635 = fRec309[1] + fConst102 * (fTemp516 * fTemp633 / fTemp519);
			fRec309[0] = 2.0f * fTemp635 - fRec309[1];
			float fRec310 = fTemp634;
			float fRec311 = fTemp635;
			float fTemp636 = fTemp165 * (fTemp165 * fTemp632 + 2.0f * fRec310 * fTemp522) + fRec311 * fTemp523;
			float fTemp637 = fRec312[1] + fConst102 * fTemp516 * (fTemp636 - fRec313[1]);
			float fTemp638 = fTemp637 / fTemp526;
			fRec312[0] = 2.0f * fTemp638 - fRec312[1];
			float fTemp639 = fRec313[1] + fConst102 * (fTemp516 * fTemp637 / fTemp526);
			fRec313[0] = 2.0f * fTemp639 - fRec313[1];
			float fRec314 = fTemp638;
			float fRec315 = fTemp639;
			float fTemp640 = fTemp165 * (fTemp165 * fTemp636 + 1.4144272f * fRec314 * fTemp522) + fRec315 * fTemp523;
			float fTemp641 = fRec316[1] + fConst102 * fTemp516 * (fTemp640 - fRec317[1]);
			float fTemp642 = fTemp641 / fTemp531;
			fRec316[0] = 2.0f * fTemp642 - fRec316[1];
			float fTemp643 = fRec317[1] + fConst102 * (fTemp516 * fTemp641 / fTemp531);
			fRec317[0] = 2.0f * fTemp643 - fRec317[1];
			float fRec318 = fTemp642;
			float fRec319 = fTemp643;
			float fTemp644 = fRec27[0] * fTemp127 + fTemp120 * (fTemp165 * (fTemp165 * fTemp640 + 0.5f * fRec318 * fTemp522) + fRec319 * fTemp523);
			fRec9[0] = fTemp38 * fTemp644;
			float fTemp645 = fSlow3 * fRec8[0] + fSlow2 * fTemp534;
			fVec225[IOTA0 & 2047] = fTemp645;
			float fTemp646 = fSlow3 * fRec9[0] + fSlow2 * fTemp644;
			fVec226[IOTA0 & 2047] = fTemp646;
			float fTemp647 = std::fabs(std::max<float>(std::fabs(fTemp645), std::fabs(fTemp646)));
			int iTemp648 = (fTemp647 >= fRec7[1]) | (float(iRec6[1]) >= fConst18);
			iRec6[0] = ((iTemp648) ? 0 : iRec6[1] + 1);
			fRec7[0] = ((iTemp648) ? fTemp647 : fRec7[1]);
			fRec5[0] = fConst5 * fRec7[0] + fConst4 * fRec5[1];
			float fTemp649 = std::fabs(fRec5[0]);
			fRec4[0] = std::max<float>(fTemp649, fConst16 * fRec4[1] + fConst173 * fTemp649);
			float fTemp650 = std::min<float>(1.0f, 0.8912509f / std::max<float>(fRec4[0], 1.1920929e-07f));
			fVbargraph10 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp650))));
			float fTemp651 = fTemp650 * (1.0f - fRec3[0]);
			float fTemp652 = fTemp1 * fRec3[0] + fTemp651 * fVec225[(IOTA0 - iConst174) & 2047];
			fVec227[0] = fTemp652;
			fRec0[0] = std::max<float>(fRec0[1] - fConst1, std::min<float>(1e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(0.00031622776f, std::fabs(fTemp652))))));
			fVbargraph11 = FAUSTFLOAT(fRec0[0]);
			output0[i0] = FAUSTFLOAT(fTemp652);
			fVec228[0] = 0.0f - fConst30 * (fConst31 * fRec323[1] - fConst33 * fVec227[1]);
			fRec324[0] = fVec228[1] + fConst30 * (fConst34 * fTemp652 - 2.0f * (fConst35 * fRec324[1] - fConst36 * fVec227[1]));
			fRec323[0] = fRec324[0];
			fVec229[0] = 0.50032705f * fRec323[1] - fConst38 * fRec321[1];
			fRec322[0] = fConst26 * fRec323[1] + fConst37 * (fVec229[1] - fConst39 * fRec322[1] + 0.50032705f * fRec323[0]);
			fRec321[0] = fRec322[0];
			float fTemp653 = mydsp_faustpower2_f(fRec321[0]);
			fVec230[0] = fTemp653;
			float fTemp654 = fTemp653 + fVec230[1];
			fVec231[0] = fTemp654;
			float fTemp655 = fTemp654 + fVec231[2];
			fVec232[0] = fTemp655;
			float fTemp656 = fTemp655 + fVec232[4];
			fVec233[0] = fTemp656;
			float fTemp657 = fTemp656 + fVec233[8];
			fVec234[IOTA0 & 31] = fTemp657;
			float fTemp658 = fTemp657 + fVec234[(IOTA0 - 16) & 31];
			fVec235[IOTA0 & 63] = fTemp658;
			float fTemp659 = fTemp658 + fVec235[(IOTA0 - 32) & 63];
			fVec236[IOTA0 & 127] = fTemp659;
			float fTemp660 = fTemp659 + fVec236[(IOTA0 - 64) & 127];
			fVec237[IOTA0 & 255] = fTemp660;
			float fTemp661 = fTemp660 + fVec237[(IOTA0 - 128) & 255];
			fVec238[IOTA0 & 511] = fTemp661;
			float fTemp662 = fTemp661 + fVec238[(IOTA0 - 256) & 511];
			fVec239[IOTA0 & 1023] = fTemp662;
			float fTemp663 = fTemp662 + fVec239[(IOTA0 - 512) & 1023];
			fVec240[IOTA0 & 2047] = fTemp663;
			float fTemp664 = fTemp663 + fVec240[(IOTA0 - 1024) & 2047];
			fVec241[IOTA0 & 4095] = fTemp664;
			float fTemp665 = fTemp664 + fVec241[(IOTA0 - 2048) & 4095];
			fVec242[IOTA0 & 8191] = fTemp665;
			float fTemp666 = fTemp665 + fVec242[(IOTA0 - 4096) & 8191];
			fVec243[IOTA0 & 16383] = fTemp666;
			float fTemp667 = fTemp666 + fVec243[(IOTA0 - 8192) & 16383];
			fVec244[IOTA0 & 32767] = fTemp667;
			float fTemp668 = fTemp667 + fVec244[(IOTA0 - 16384) & 32767];
			fVec245[IOTA0 & 65535] = fTemp668;
			fVec246[IOTA0 & 131071] = fTemp668 + fVec245[(IOTA0 - 32768) & 65535];
			float fTemp669 = fRec3[0] * fTemp116 + fTemp651 * fVec226[(IOTA0 - iConst174) & 2047];
			fVec247[0] = fTemp669;
			fVec248[0] = 0.0f - fConst30 * (fConst31 * fRec327[1] - fConst33 * fVec247[1]);
			fRec328[0] = fVec248[1] + fConst30 * (fConst34 * fTemp669 - 2.0f * (fConst35 * fRec328[1] - fConst36 * fVec247[1]));
			fRec327[0] = fRec328[0];
			fVec249[0] = 0.50032705f * fRec327[1] - fConst38 * fRec325[1];
			fRec326[0] = fConst26 * fRec327[1] + fConst37 * (fVec249[1] - fConst39 * fRec326[1] + 0.50032705f * fRec327[0]);
			fRec325[0] = fRec326[0];
			float fTemp670 = mydsp_faustpower2_f(fRec325[0]);
			fVec250[0] = fTemp670;
			float fTemp671 = fTemp670 + fVec250[1];
			fVec251[0] = fTemp671;
			float fTemp672 = fTemp671 + fVec251[2];
			fVec252[0] = fTemp672;
			float fTemp673 = fTemp672 + fVec252[4];
			fVec253[0] = fTemp673;
			float fTemp674 = fTemp673 + fVec253[8];
			fVec254[IOTA0 & 31] = fTemp674;
			float fTemp675 = fTemp674 + fVec254[(IOTA0 - 16) & 31];
			fVec255[IOTA0 & 63] = fTemp675;
			float fTemp676 = fTemp675 + fVec255[(IOTA0 - 32) & 63];
			fVec256[IOTA0 & 127] = fTemp676;
			float fTemp677 = fTemp676 + fVec256[(IOTA0 - 64) & 127];
			fVec257[IOTA0 & 255] = fTemp677;
			float fTemp678 = fTemp677 + fVec257[(IOTA0 - 128) & 255];
			fVec258[IOTA0 & 511] = fTemp678;
			float fTemp679 = fTemp678 + fVec258[(IOTA0 - 256) & 511];
			fVec259[IOTA0 & 1023] = fTemp679;
			float fTemp680 = fTemp679 + fVec259[(IOTA0 - 512) & 1023];
			fVec260[IOTA0 & 2047] = fTemp680;
			float fTemp681 = fTemp680 + fVec260[(IOTA0 - 1024) & 2047];
			fVec261[IOTA0 & 4095] = fTemp681;
			float fTemp682 = fTemp681 + fVec261[(IOTA0 - 2048) & 4095];
			fVec262[IOTA0 & 8191] = fTemp682;
			float fTemp683 = fTemp682 + fVec262[(IOTA0 - 4096) & 8191];
			fVec263[IOTA0 & 16383] = fTemp683;
			float fTemp684 = fTemp683 + fVec263[(IOTA0 - 8192) & 16383];
			fVec264[IOTA0 & 32767] = fTemp684;
			float fTemp685 = fTemp684 + fVec264[(IOTA0 - 16384) & 32767];
			fVec265[IOTA0 & 65535] = fTemp685;
			fVec266[IOTA0 & 131071] = fTemp685 + fVec265[(IOTA0 - 32768) & 65535];
			fVbargraph12 = FAUSTFLOAT(4.3429446f * std::log(std::max<float>(1e-12f, fConst69 * (((iConst70) ? 0.86000985f * fVec246[(IOTA0 - iConst101) & 131071] : 0.0f) + ((iConst100) ? 0.86000985f * fVec245[(IOTA0 - iConst99) & 65535] : 0.0f) + ((iConst98) ? 0.86000985f * fVec244[(IOTA0 - iConst97) & 32767] : 0.0f) + ((iConst96) ? 0.86000985f * fVec243[(IOTA0 - iConst95) & 16383] : 0.0f) + ((iConst94) ? 0.86000985f * fVec242[(IOTA0 - iConst93) & 8191] : 0.0f) + ((iConst92) ? 0.86000985f * fVec241[(IOTA0 - iConst91) & 4095] : 0.0f) + ((iConst90) ? 0.86000985f * fVec240[(IOTA0 - iConst89) & 2047] : 0.0f) + ((iConst88) ? 0.86000985f * fVec239[(IOTA0 - iConst87) & 1023] : 0.0f) + ((iConst86) ? 0.86000985f * fVec238[(IOTA0 - iConst85) & 511] : 0.0f) + ((iConst84) ? 0.86000985f * fVec237[(IOTA0 - iConst83) & 255] : 0.0f) + ((iConst82) ? 0.86000985f * fVec236[(IOTA0 - iConst81) & 127] : 0.0f) + ((iConst80) ? 0.86000985f * fVec235[(IOTA0 - iConst79) & 63] : 0.0f) + ((iConst78) ? 0.86000985f * fVec234[(IOTA0 - iConst77) & 31] : 0.0f) + ((iConst76) ? 0.86000985f * fVec233[iConst75] : 0.0f) + ((iConst74) ? 0.86000985f * fVec232[iConst73] : 0.0f) + ((iConst71) ? 0.86000985f * fTemp653 : 0.0f) + ((iConst72) ? 0.86000985f * fVec231[iConst71] : 0.0f) + ((iConst70) ? 0.86000985f * fVec266[(IOTA0 - iConst101) & 131071] : 0.0f) + ((iConst100) ? 0.86000985f * fVec265[(IOTA0 - iConst99) & 65535] : 0.0f) + ((iConst98) ? 0.86000985f * fVec264[(IOTA0 - iConst97) & 32767] : 0.0f) + ((iConst96) ? 0.86000985f * fVec263[(IOTA0 - iConst95) & 16383] : 0.0f) + ((iConst94) ? 0.86000985f * fVec262[(IOTA0 - iConst93) & 8191] : 0.0f) + ((iConst92) ? 0.86000985f * fVec261[(IOTA0 - iConst91) & 4095] : 0.0f) + ((iConst90) ? 0.86000985f * fVec260[(IOTA0 - iConst89) & 2047] : 0.0f) + ((iConst88) ? 0.86000985f * fVec259[(IOTA0 - iConst87) & 1023] : 0.0f) + ((iConst86) ? 0.86000985f * fVec258[(IOTA0 - iConst85) & 511] : 0.0f) + ((iConst84) ? 0.86000985f * fVec257[(IOTA0 - iConst83) & 255] : 0.0f) + ((iConst82) ? 0.86000985f * fVec256[(IOTA0 - iConst81) & 127] : 0.0f) + ((iConst80) ? 0.86000985f * fVec255[(IOTA0 - iConst79) & 63] : 0.0f) + ((iConst78) ? 0.86000985f * fVec254[(IOTA0 - iConst77) & 31] : 0.0f) + ((iConst76) ? 0.86000985f * fVec253[iConst75] : 0.0f) + ((iConst74) ? 0.86000985f * fVec252[iConst73] : 0.0f) + ((iConst71) ? 0.86000985f * fTemp670 : 0.0f) + ((iConst72) ? 0.86000985f * fVec251[iConst71] : 0.0f)))) + -0.691f);
			float fTemp686 = fTemp669;
			fRec320[0] = std::max<float>(fRec320[1] - fConst1, std::min<float>(1e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(0.00031622776f, std::fabs(fTemp686))))));
			fVbargraph13 = FAUSTFLOAT(fRec320[0]);
			output1[i0] = FAUSTFLOAT(fTemp686);
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
			fRec83[2] = fRec83[1];
			fRec83[1] = fRec83[0];
			fRec82[2] = fRec82[1];
			fRec82[1] = fRec82[0];
			fRec81[2] = fRec81[1];
			fRec81[1] = fRec81[0];
			fRec80[2] = fRec80[1];
			fRec80[1] = fRec80[0];
			fRec79[2] = fRec79[1];
			fRec79[1] = fRec79[0];
			fVec129[1] = fVec129[0];
			fRec78[1] = fRec78[0];
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
			fVec130[1] = fVec130[0];
			fRec84[1] = fRec84[0];
			fVec131[2] = fVec131[1];
			fVec131[1] = fVec131[0];
			for (int j20 = 6; j20 > 0; j20 = j20 - 1) {
				fVec132[j20] = fVec132[j20 - 1];
			}
			for (int j21 = 14; j21 > 0; j21 = j21 - 1) {
				fVec133[j21] = fVec133[j21 - 1];
			}
			fRec90[1] = fRec90[0];
			fVec142[2] = fVec142[1];
			fVec142[1] = fVec142[0];
			for (int j22 = 6; j22 > 0; j22 = j22 - 1) {
				fVec143[j22] = fVec143[j22 - 1];
			}
			for (int j23 = 14; j23 > 0; j23 = j23 - 1) {
				fVec144[j23] = fVec144[j23 - 1];
			}
			fRec91[1] = fRec91[0];
			fRec113[2] = fRec113[1];
			fRec113[1] = fRec113[0];
			fRec112[2] = fRec112[1];
			fRec112[1] = fRec112[0];
			fRec111[2] = fRec111[1];
			fRec111[1] = fRec111[0];
			fRec110[2] = fRec110[1];
			fRec110[1] = fRec110[0];
			fRec109[2] = fRec109[1];
			fRec109[1] = fRec109[0];
			fVec153[1] = fVec153[0];
			fRec108[1] = fRec108[0];
			fRec119[2] = fRec119[1];
			fRec119[1] = fRec119[0];
			fRec118[2] = fRec118[1];
			fRec118[1] = fRec118[0];
			fRec117[2] = fRec117[1];
			fRec117[1] = fRec117[0];
			fRec116[2] = fRec116[1];
			fRec116[1] = fRec116[0];
			fRec115[2] = fRec115[1];
			fRec115[1] = fRec115[0];
			fVec154[1] = fVec154[0];
			fRec114[1] = fRec114[0];
			fVec155[2] = fVec155[1];
			fVec155[1] = fVec155[0];
			for (int j24 = 6; j24 > 0; j24 = j24 - 1) {
				fVec156[j24] = fVec156[j24 - 1];
			}
			for (int j25 = 14; j25 > 0; j25 = j25 - 1) {
				fVec157[j25] = fVec157[j25 - 1];
			}
			fRec120[1] = fRec120[0];
			fVec166[2] = fVec166[1];
			fVec166[1] = fVec166[0];
			for (int j26 = 6; j26 > 0; j26 = j26 - 1) {
				fVec167[j26] = fVec167[j26 - 1];
			}
			for (int j27 = 14; j27 > 0; j27 = j27 - 1) {
				fVec168[j27] = fVec168[j27 - 1];
			}
			fRec121[1] = fRec121[0];
			fRec143[2] = fRec143[1];
			fRec143[1] = fRec143[0];
			fRec142[2] = fRec142[1];
			fRec142[1] = fRec142[0];
			fRec141[2] = fRec141[1];
			fRec141[1] = fRec141[0];
			fRec140[2] = fRec140[1];
			fRec140[1] = fRec140[0];
			fRec139[2] = fRec139[1];
			fRec139[1] = fRec139[0];
			fVec177[1] = fVec177[0];
			fRec138[1] = fRec138[0];
			fRec149[2] = fRec149[1];
			fRec149[1] = fRec149[0];
			fRec148[2] = fRec148[1];
			fRec148[1] = fRec148[0];
			fRec147[2] = fRec147[1];
			fRec147[1] = fRec147[0];
			fRec146[2] = fRec146[1];
			fRec146[1] = fRec146[0];
			fRec145[2] = fRec145[1];
			fRec145[1] = fRec145[0];
			fVec178[1] = fVec178[0];
			fRec144[1] = fRec144[0];
			fVec179[2] = fVec179[1];
			fVec179[1] = fVec179[0];
			for (int j28 = 6; j28 > 0; j28 = j28 - 1) {
				fVec180[j28] = fVec180[j28 - 1];
			}
			for (int j29 = 14; j29 > 0; j29 = j29 - 1) {
				fVec181[j29] = fVec181[j29 - 1];
			}
			fRec150[1] = fRec150[0];
			fVec190[2] = fVec190[1];
			fVec190[1] = fVec190[0];
			for (int j30 = 6; j30 > 0; j30 = j30 - 1) {
				fVec191[j30] = fVec191[j30 - 1];
			}
			for (int j31 = 14; j31 > 0; j31 = j31 - 1) {
				fVec192[j31] = fVec192[j31 - 1];
			}
			fRec151[1] = fRec151[0];
			fRec170[2] = fRec170[1];
			fRec170[1] = fRec170[0];
			fRec169[2] = fRec169[1];
			fRec169[1] = fRec169[0];
			fVec201[1] = fVec201[0];
			fRec168[1] = fRec168[0];
			fRec173[2] = fRec173[1];
			fRec173[1] = fRec173[0];
			fRec172[2] = fRec172[1];
			fRec172[1] = fRec172[0];
			fVec202[1] = fVec202[0];
			fRec171[1] = fRec171[0];
			fVec203[2] = fVec203[1];
			fVec203[1] = fVec203[0];
			for (int j32 = 6; j32 > 0; j32 = j32 - 1) {
				fVec204[j32] = fVec204[j32 - 1];
			}
			for (int j33 = 14; j33 > 0; j33 = j33 - 1) {
				fVec205[j33] = fVec205[j33 - 1];
			}
			fRec174[1] = fRec174[0];
			fVec214[2] = fVec214[1];
			fVec214[1] = fVec214[0];
			for (int j34 = 6; j34 > 0; j34 = j34 - 1) {
				fVec215[j34] = fVec215[j34 - 1];
			}
			for (int j35 = 14; j35 > 0; j35 = j35 - 1) {
				fVec216[j35] = fVec216[j35 - 1];
			}
			fRec175[1] = fRec175[0];
			fRec180[1] = fRec180[0];
			fRec181[1] = fRec181[0];
			fRec184[1] = fRec184[0];
			fRec185[1] = fRec185[0];
			fRec176[1] = fRec176[0];
			fRec177[1] = fRec177[0];
			fRec164[1] = fRec164[0];
			fRec165[1] = fRec165[0];
			fRec188[1] = fRec188[0];
			fRec189[1] = fRec189[0];
			fRec160[1] = fRec160[0];
			fRec161[1] = fRec161[0];
			fRec156[1] = fRec156[0];
			fRec157[1] = fRec157[0];
			fRec192[1] = fRec192[0];
			fRec193[1] = fRec193[0];
			fRec152[1] = fRec152[0];
			fRec153[1] = fRec153[0];
			fRec134[1] = fRec134[0];
			fRec135[1] = fRec135[0];
			fRec196[1] = fRec196[0];
			fRec197[1] = fRec197[0];
			fRec130[1] = fRec130[0];
			fRec131[1] = fRec131[0];
			fRec126[1] = fRec126[0];
			fRec127[1] = fRec127[0];
			fRec200[1] = fRec200[0];
			fRec201[1] = fRec201[0];
			fRec122[1] = fRec122[0];
			fRec123[1] = fRec123[0];
			fRec104[1] = fRec104[0];
			fRec105[1] = fRec105[0];
			fRec204[1] = fRec204[0];
			fRec205[1] = fRec205[0];
			fRec100[1] = fRec100[0];
			fRec101[1] = fRec101[0];
			fRec96[1] = fRec96[0];
			fRec97[1] = fRec97[0];
			fRec208[1] = fRec208[0];
			fRec209[1] = fRec209[0];
			fRec92[1] = fRec92[0];
			fRec93[1] = fRec93[0];
			fRec212[1] = fRec212[0];
			fRec213[1] = fRec213[0];
			fRec216[1] = fRec216[0];
			fRec217[1] = fRec217[0];
			fRec220[1] = fRec220[0];
			fRec221[1] = fRec221[0];
			fRec8[2] = fRec8[1];
			fRec8[1] = fRec8[0];
			fRec276[1] = fRec276[0];
			fRec277[1] = fRec277[0];
			fRec280[1] = fRec280[0];
			fRec281[1] = fRec281[0];
			fRec272[1] = fRec272[0];
			fRec273[1] = fRec273[0];
			fRec268[1] = fRec268[0];
			fRec269[1] = fRec269[0];
			fRec284[1] = fRec284[0];
			fRec285[1] = fRec285[0];
			fRec264[1] = fRec264[0];
			fRec265[1] = fRec265[0];
			fRec260[1] = fRec260[0];
			fRec261[1] = fRec261[0];
			fRec288[1] = fRec288[0];
			fRec289[1] = fRec289[0];
			fRec256[1] = fRec256[0];
			fRec257[1] = fRec257[0];
			fRec252[1] = fRec252[0];
			fRec253[1] = fRec253[0];
			fRec292[1] = fRec292[0];
			fRec293[1] = fRec293[0];
			fRec248[1] = fRec248[0];
			fRec249[1] = fRec249[0];
			fRec244[1] = fRec244[0];
			fRec245[1] = fRec245[0];
			fRec296[1] = fRec296[0];
			fRec297[1] = fRec297[0];
			fRec240[1] = fRec240[0];
			fRec241[1] = fRec241[0];
			fRec236[1] = fRec236[0];
			fRec237[1] = fRec237[0];
			fRec300[1] = fRec300[0];
			fRec301[1] = fRec301[0];
			fRec232[1] = fRec232[0];
			fRec233[1] = fRec233[0];
			fRec228[1] = fRec228[0];
			fRec229[1] = fRec229[0];
			fRec304[1] = fRec304[0];
			fRec305[1] = fRec305[0];
			fRec224[1] = fRec224[0];
			fRec225[1] = fRec225[0];
			fRec308[1] = fRec308[0];
			fRec309[1] = fRec309[0];
			fRec312[1] = fRec312[0];
			fRec313[1] = fRec313[0];
			fRec316[1] = fRec316[0];
			fRec317[1] = fRec317[0];
			fRec9[2] = fRec9[1];
			fRec9[1] = fRec9[0];
			iRec6[1] = iRec6[0];
			fRec7[1] = fRec7[0];
			fRec5[1] = fRec5[0];
			fRec4[1] = fRec4[0];
			fVec227[1] = fVec227[0];
			fRec0[1] = fRec0[0];
			fVec228[1] = fVec228[0];
			fRec324[1] = fRec324[0];
			fRec323[1] = fRec323[0];
			fVec229[1] = fVec229[0];
			fRec322[1] = fRec322[0];
			fRec321[1] = fRec321[0];
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
			fRec328[1] = fRec328[0];
			fRec327[1] = fRec327[0];
			fVec249[1] = fVec249[0];
			fRec326[1] = fRec326[0];
			fRec325[1] = fRec325[0];
			fVec250[1] = fVec250[0];
			fVec251[2] = fVec251[1];
			fVec251[1] = fVec251[0];
			for (int j38 = 6; j38 > 0; j38 = j38 - 1) {
				fVec252[j38] = fVec252[j38 - 1];
			}
			for (int j39 = 14; j39 > 0; j39 = j39 - 1) {
				fVec253[j39] = fVec253[j39 - 1];
			}
			fRec320[1] = fRec320[0];
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
        dsp->fVbargraph9 = 0;
        dsp->fVbargraph8 = 0;
        dsp->fVbargraph7 = 0;
        dsp->fVbargraph6 = 0;
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
        case kParameter_multiband_compressor_style:
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
        case kParameter_multiband_compressor_style:
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
            return dsp->fVbargraph9;
        case kParameter_multiband_compressor_gain_band_2:
            return dsp->fVbargraph8;
        case kParameter_multiband_compressor_gain_band_3:
            return dsp->fVbargraph7;
        case kParameter_multiband_compressor_gain_band_4:
            return dsp->fVbargraph6;
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
        case kParameter_multiband_compressor_style:
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