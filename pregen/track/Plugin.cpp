
//------------------------------------------------------------------------------
// This file was generated using the Faust compiler (https://faust.grame.fr),
// and the Faust post-processor (https://github.com/jpcima/faustpp).
//
// Source: PodcastPluginTrack.dsp
// Name: PodcastPlugin Track
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
	float fRec1[2];
	FAUSTFLOAT fVbargraph0;
	float fConst2;
	FAUSTFLOAT fCheckbox0;
	float fConst3;
	float fRec2[2];
	float fConst4;
	float fConst5;
	FAUSTFLOAT fCheckbox1;
	float fRec7[2];
	float fConst6;
	float fConst7;
	int iConst9;
	float fVec0[2];
	int iConst11;
	float fVec1[3];
	int iConst13;
	float fVec2[7];
	int iConst15;
	int iConst17;
	float fVec3[15];
	int iConst19;
	int iConst20;
	int IOTA0;
	float fVec4[32];
	int iConst21;
	FAUSTFLOAT fVslider0;
	float fConst22;
	float fRec18[2];
	float fConst23;
	float fConst24;
	float fConst26;
	int iConst27;
	float fConst31;
	float fConst33;
	float fConst34;
	float fConst35;
	float fVec5[2];
	float fConst36;
	float fConst38;
	float fConst39;
	float fRec22[2];
	float fRec21[2];
	float fConst40;
	float fConst41;
	float fVec6[2];
	float fConst42;
	float fRec20[2];
	float fRec19[2];
	float fVec7[2];
	float fVec8[3];
	float fVec9[7];
	float fVec10[15];
	float fVec11[32];
	float fVec12[64];
	float fVec13[128];
	float fVec14[256];
	float fVec15[512];
	float fVec16[1024];
	float fVec17[2048];
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
	int iConst75;
	int iConst76;
	int iConst77;
	int iConst78;
	int iConst79;
	float fVec18[2];
	float fRec26[2];
	float fRec25[2];
	float fVec19[2];
	float fRec24[2];
	float fRec23[2];
	float fVec20[2];
	float fVec21[3];
	float fVec22[7];
	float fVec23[15];
	float fVec24[32];
	float fVec25[64];
	float fVec26[128];
	float fVec27[256];
	float fVec28[512];
	float fVec29[1024];
	float fVec30[2048];
	float fRec13[2];
	float fRec14[2];
	float fRec11[2];
	FAUSTFLOAT fVbargraph1;
	float fRec10[2];
	FAUSTFLOAT fCheckbox2;
	float fRec27[2];
	FAUSTFLOAT fVslider1;
	float fRec28[2];
	FAUSTFLOAT fCheckbox3;
	float fRec29[2];
	float fConst82;
	float fConst85;
	float fConst87;
	float fConst88;
	float fConst89;
	float fRec31[3];
	float fConst90;
	float fConst91;
	float fConst92;
	float fRec30[3];
	float fConst94;
	int iConst95;
	float fConst96;
	float fConst98;
	float fRec37[2];
	FAUSTFLOAT fVbargraph2;
	float fRec39[3];
	float fRec38[3];
	float fVec31[2];
	float fConst99;
	float fConst100;
	float fRec36[3];
	float fConst101;
	float fVec32[32768];
	float fVec33[2];
	float fConst102;
	float fConst103;
	float fConst104;
	float fRec35[2];
	float fRec34[2];
	float fVec34[2];
	float fRec33[2];
	float fRec32[2];
	float fVec35[2];
	float fVec36[3];
	float fVec37[7];
	float fVec38[15];
	float fVec39[32];
	float fVec40[64];
	float fVec41[128];
	float fVec42[256];
	float fVec43[512];
	float fVec44[1024];
	float fVec45[2048];
	float fVec46[4096];
	float fVec47[8192];
	float fVec48[16384];
	float fVec49[32768];
	float fVec50[65536];
	float fVec51[131072];
	float fVec52[262144];
	int iConst137;
	int iConst138;
	int iConst139;
	int iConst140;
	int iConst141;
	int iConst142;
	int iConst143;
	int iConst144;
	int iConst145;
	int iConst146;
	int iConst147;
	int iConst148;
	int iConst149;
	int iConst150;
	int iConst151;
	int iConst152;
	int iConst153;
	int iConst154;
	int iConst155;
	int iConst156;
	int iConst157;
	int iConst158;
	int iConst159;
	int iConst160;
	int iConst161;
	int iConst162;
	int iConst163;
	int iConst164;
	int iConst165;
	int iConst166;
	int iConst167;
	int iConst168;
	int iConst169;
	float fConst170;
	float fVec53[2];
	float fConst171;
	float fRec43[2];
	float fRec42[2];
	float fVec54[2];
	float fRec41[2];
	float fRec40[2];
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
	float fVec72[262144];
	FAUSTFLOAT fVslider2;
	int iConst173;
	float fVec73[2];
	int iConst175;
	float fVec74[3];
	int iConst177;
	float fVec75[7];
	int iConst179;
	int iConst181;
	float fVec76[15];
	int iConst183;
	int iConst185;
	float fVec77[32];
	int iConst187;
	int iConst189;
	float fVec78[64];
	int iConst191;
	int iConst193;
	float fVec79[128];
	int iConst195;
	int iConst196;
	float fVec80[256];
	int iConst197;
	float fConst198;
	float fConst199;
	float fRec44[2];
	FAUSTFLOAT fVbargraph3;
	int iConst200;
	float fConst204;
	float fConst205;
	float fConst206;
	float fConst207;
	float fRec49[3];
	float fConst208;
	float fVec81[32768];
	float fVec82[2];
	float fRec48[2];
	float fRec47[2];
	float fVec83[2];
	float fRec46[2];
	float fRec45[2];
	float fVec84[2];
	float fVec85[3];
	float fVec86[7];
	float fVec87[15];
	float fVec88[32];
	float fVec89[64];
	float fVec90[128];
	float fVec91[256];
	float fVec92[512];
	float fVec93[1024];
	float fVec94[2048];
	float fVec95[4096];
	float fVec96[8192];
	float fVec97[16384];
	float fVec98[32768];
	float fVec99[65536];
	float fVec100[131072];
	float fVec101[262144];
	FAUSTFLOAT fVbargraph4;
	float fConst212;
	float fConst213;
	float fConst214;
	float fConst215;
	float fRec54[3];
	float fConst216;
	float fVec102[32768];
	float fVec103[2];
	float fRec53[2];
	float fRec52[2];
	float fVec104[2];
	float fRec51[2];
	float fRec50[2];
	float fVec105[2];
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
	float fVec117[8192];
	float fVec118[16384];
	float fVec119[32768];
	float fVec120[65536];
	float fVec121[131072];
	float fVec122[262144];
	FAUSTFLOAT fVbargraph5;
	float fConst220;
	float fConst221;
	float fConst222;
	float fConst223;
	float fRec59[3];
	float fConst224;
	float fVec123[32768];
	float fVec124[2];
	float fRec58[2];
	float fRec57[2];
	float fVec125[2];
	float fRec56[2];
	float fRec55[2];
	float fVec126[2];
	float fVec127[3];
	float fVec128[7];
	float fVec129[15];
	float fVec130[32];
	float fVec131[64];
	float fVec132[128];
	float fVec133[256];
	float fVec134[512];
	float fVec135[1024];
	float fVec136[2048];
	float fVec137[4096];
	float fVec138[8192];
	float fVec139[16384];
	float fVec140[32768];
	float fVec141[65536];
	float fVec142[131072];
	float fVec143[262144];
	FAUSTFLOAT fVbargraph6;
	float fConst228;
	float fConst229;
	float fConst230;
	float fConst231;
	float fRec64[3];
	float fConst232;
	float fVec144[32768];
	float fVec145[2];
	float fRec63[2];
	float fRec62[2];
	float fVec146[2];
	float fRec61[2];
	float fRec60[2];
	float fVec147[2];
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
	float fVec159[8192];
	float fVec160[16384];
	float fVec161[32768];
	float fVec162[65536];
	float fVec163[131072];
	float fVec164[262144];
	FAUSTFLOAT fVbargraph7;
	float fConst236;
	float fConst237;
	float fConst238;
	float fConst239;
	float fRec69[3];
	float fConst240;
	float fVec165[32768];
	float fVec166[2];
	float fRec68[2];
	float fRec67[2];
	float fVec167[2];
	float fRec66[2];
	float fRec65[2];
	float fVec168[2];
	float fVec169[3];
	float fVec170[7];
	float fVec171[15];
	float fVec172[32];
	float fVec173[64];
	float fVec174[128];
	float fVec175[256];
	float fVec176[512];
	float fVec177[1024];
	float fVec178[2048];
	float fVec179[4096];
	float fVec180[8192];
	float fVec181[16384];
	float fVec182[32768];
	float fVec183[65536];
	float fVec184[131072];
	float fVec185[262144];
	FAUSTFLOAT fVbargraph8;
	float fConst244;
	float fConst245;
	float fConst246;
	float fConst247;
	float fRec74[3];
	float fConst248;
	float fVec186[32768];
	float fVec187[2];
	float fRec73[2];
	float fRec72[2];
	float fVec188[2];
	float fRec71[2];
	float fRec70[2];
	float fVec189[2];
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
	float fVec201[8192];
	float fVec202[16384];
	float fVec203[32768];
	float fVec204[65536];
	float fVec205[131072];
	float fVec206[262144];
	FAUSTFLOAT fVbargraph9;
	float fConst252;
	float fConst253;
	float fConst254;
	float fConst255;
	float fRec79[3];
	float fConst256;
	float fVec207[32768];
	float fVec208[2];
	float fRec78[2];
	float fRec77[2];
	float fVec209[2];
	float fRec76[2];
	float fRec75[2];
	float fVec210[2];
	float fVec211[3];
	float fVec212[7];
	float fVec213[15];
	float fVec214[32];
	float fVec215[64];
	float fVec216[128];
	float fVec217[256];
	float fVec218[512];
	float fVec219[1024];
	float fVec220[2048];
	float fVec221[4096];
	float fVec222[8192];
	float fVec223[16384];
	float fVec224[32768];
	float fVec225[65536];
	float fVec226[131072];
	float fVec227[262144];
	FAUSTFLOAT fVbargraph10;
	float fConst260;
	float fConst261;
	float fConst262;
	float fConst263;
	float fRec84[3];
	float fConst264;
	float fVec228[32768];
	float fVec229[2];
	float fRec83[2];
	float fRec82[2];
	float fVec230[2];
	float fRec81[2];
	float fRec80[2];
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
	float fVec248[262144];
	FAUSTFLOAT fVbargraph11;
	float fConst268;
	float fConst269;
	float fConst270;
	float fConst271;
	float fRec89[3];
	float fConst272;
	float fVec249[32768];
	float fVec250[2];
	float fRec88[2];
	float fRec87[2];
	float fVec251[2];
	float fRec86[2];
	float fRec85[2];
	float fVec252[2];
	float fVec253[3];
	float fVec254[7];
	float fVec255[15];
	float fVec256[32];
	float fVec257[64];
	float fVec258[128];
	float fVec259[256];
	float fVec260[512];
	float fVec261[1024];
	float fVec262[2048];
	float fVec263[4096];
	float fVec264[8192];
	float fVec265[16384];
	float fVec266[32768];
	float fVec267[65536];
	float fVec268[131072];
	float fVec269[262144];
	FAUSTFLOAT fVbargraph12;
	float fConst276;
	float fConst277;
	float fConst278;
	float fConst279;
	float fRec94[3];
	float fConst280;
	float fVec270[32768];
	float fVec271[2];
	float fRec93[2];
	float fRec92[2];
	float fVec272[2];
	float fRec91[2];
	float fRec90[2];
	float fVec273[2];
	float fVec274[3];
	float fVec275[7];
	float fVec276[15];
	float fVec277[32];
	float fVec278[64];
	float fVec279[128];
	float fVec280[256];
	float fVec281[512];
	float fVec282[1024];
	float fVec283[2048];
	float fVec284[4096];
	float fVec285[8192];
	float fVec286[16384];
	float fVec287[32768];
	float fVec288[65536];
	float fVec289[131072];
	float fVec290[262144];
	FAUSTFLOAT fVbargraph13;
	float fConst284;
	float fConst285;
	float fConst286;
	float fConst287;
	float fRec99[3];
	float fConst288;
	float fVec291[32768];
	float fVec292[2];
	float fRec98[2];
	float fRec97[2];
	float fVec293[2];
	float fRec96[2];
	float fRec95[2];
	float fVec294[2];
	float fVec295[3];
	float fVec296[7];
	float fVec297[15];
	float fVec298[32];
	float fVec299[64];
	float fVec300[128];
	float fVec301[256];
	float fVec302[512];
	float fVec303[1024];
	float fVec304[2048];
	float fVec305[4096];
	float fVec306[8192];
	float fVec307[16384];
	float fVec308[32768];
	float fVec309[65536];
	float fVec310[131072];
	float fVec311[262144];
	FAUSTFLOAT fVbargraph14;
	float fConst292;
	float fConst293;
	float fConst294;
	float fConst295;
	float fRec104[3];
	float fConst296;
	float fVec312[32768];
	float fVec313[2];
	float fRec103[2];
	float fRec102[2];
	float fVec314[2];
	float fRec101[2];
	float fRec100[2];
	float fVec315[2];
	float fVec316[3];
	float fVec317[7];
	float fVec318[15];
	float fVec319[32];
	float fVec320[64];
	float fVec321[128];
	float fVec322[256];
	float fVec323[512];
	float fVec324[1024];
	float fVec325[2048];
	float fVec326[4096];
	float fVec327[8192];
	float fVec328[16384];
	float fVec329[32768];
	float fVec330[65536];
	float fVec331[131072];
	float fVec332[262144];
	FAUSTFLOAT fVbargraph15;
	float fConst300;
	float fConst301;
	float fConst302;
	float fConst303;
	float fRec109[3];
	float fConst304;
	float fVec333[32768];
	float fVec334[2];
	float fRec108[2];
	float fRec107[2];
	float fVec335[2];
	float fRec106[2];
	float fRec105[2];
	float fVec336[2];
	float fVec337[3];
	float fVec338[7];
	float fVec339[15];
	float fVec340[32];
	float fVec341[64];
	float fVec342[128];
	float fVec343[256];
	float fVec344[512];
	float fVec345[1024];
	float fVec346[2048];
	float fVec347[4096];
	float fVec348[8192];
	float fVec349[16384];
	float fVec350[32768];
	float fVec351[65536];
	float fVec352[131072];
	float fVec353[262144];
	FAUSTFLOAT fVbargraph16;
	float fConst308;
	float fConst309;
	float fConst310;
	float fConst311;
	float fRec114[3];
	float fConst312;
	float fVec354[32768];
	float fVec355[2];
	float fRec113[2];
	float fRec112[2];
	float fVec356[2];
	float fRec111[2];
	float fRec110[2];
	float fVec357[2];
	float fVec358[3];
	float fVec359[7];
	float fVec360[15];
	float fVec361[32];
	float fVec362[64];
	float fVec363[128];
	float fVec364[256];
	float fVec365[512];
	float fVec366[1024];
	float fVec367[2048];
	float fVec368[4096];
	float fVec369[8192];
	float fVec370[16384];
	float fVec371[32768];
	float fVec372[65536];
	float fVec373[131072];
	float fVec374[262144];
	FAUSTFLOAT fVbargraph17;
	float fConst316;
	float fConst317;
	float fConst318;
	float fConst319;
	float fRec119[3];
	float fConst320;
	float fVec375[32768];
	float fVec376[2];
	float fRec118[2];
	float fRec117[2];
	float fVec377[2];
	float fRec116[2];
	float fRec115[2];
	float fVec378[2];
	float fVec379[3];
	float fVec380[7];
	float fVec381[15];
	float fVec382[32];
	float fVec383[64];
	float fVec384[128];
	float fVec385[256];
	float fVec386[512];
	float fVec387[1024];
	float fVec388[2048];
	float fVec389[4096];
	float fVec390[8192];
	float fVec391[16384];
	float fVec392[32768];
	float fVec393[65536];
	float fVec394[131072];
	float fVec395[262144];
	FAUSTFLOAT fVbargraph18;
	float fConst324;
	float fConst325;
	float fConst326;
	float fConst327;
	float fRec124[3];
	float fConst328;
	float fVec396[32768];
	float fVec397[2];
	float fRec123[2];
	float fRec122[2];
	float fVec398[2];
	float fRec121[2];
	float fRec120[2];
	float fVec399[2];
	float fVec400[3];
	float fVec401[7];
	float fVec402[15];
	float fVec403[32];
	float fVec404[64];
	float fVec405[128];
	float fVec406[256];
	float fVec407[512];
	float fVec408[1024];
	float fVec409[2048];
	float fVec410[4096];
	float fVec411[8192];
	float fVec412[16384];
	float fVec413[32768];
	float fVec414[65536];
	float fVec415[131072];
	float fVec416[262144];
	FAUSTFLOAT fVbargraph19;
	float fConst332;
	float fConst333;
	float fConst334;
	float fConst335;
	float fRec129[3];
	float fConst336;
	float fVec417[32768];
	float fVec418[2];
	float fRec128[2];
	float fRec127[2];
	float fVec419[2];
	float fRec126[2];
	float fRec125[2];
	float fVec420[2];
	float fVec421[3];
	float fVec422[7];
	float fVec423[15];
	float fVec424[32];
	float fVec425[64];
	float fVec426[128];
	float fVec427[256];
	float fVec428[512];
	float fVec429[1024];
	float fVec430[2048];
	float fVec431[4096];
	float fVec432[8192];
	float fVec433[16384];
	float fVec434[32768];
	float fVec435[65536];
	float fVec436[131072];
	float fVec437[262144];
	FAUSTFLOAT fVbargraph20;
	float fConst340;
	float fConst341;
	float fConst342;
	float fConst343;
	float fRec134[3];
	float fConst344;
	float fVec438[32768];
	float fVec439[2];
	float fRec133[2];
	float fRec132[2];
	float fVec440[2];
	float fRec131[2];
	float fRec130[2];
	float fVec441[2];
	float fVec442[3];
	float fVec443[7];
	float fVec444[15];
	float fVec445[32];
	float fVec446[64];
	float fVec447[128];
	float fVec448[256];
	float fVec449[512];
	float fVec450[1024];
	float fVec451[2048];
	float fVec452[4096];
	float fVec453[8192];
	float fVec454[16384];
	float fVec455[32768];
	float fVec456[65536];
	float fVec457[131072];
	float fVec458[262144];
	FAUSTFLOAT fVbargraph21;
	float fConst348;
	float fConst349;
	float fConst350;
	float fConst351;
	float fRec139[3];
	float fConst352;
	float fVec459[32768];
	float fVec460[2];
	float fRec138[2];
	float fRec137[2];
	float fVec461[2];
	float fRec136[2];
	float fRec135[2];
	float fVec462[2];
	float fVec463[3];
	float fVec464[7];
	float fVec465[15];
	float fVec466[32];
	float fVec467[64];
	float fVec468[128];
	float fVec469[256];
	float fVec470[512];
	float fVec471[1024];
	float fVec472[2048];
	float fVec473[4096];
	float fVec474[8192];
	float fVec475[16384];
	float fVec476[32768];
	float fVec477[65536];
	float fVec478[131072];
	float fVec479[262144];
	FAUSTFLOAT fVbargraph22;
	float fRec8[3];
	float fRec9[3];
	FAUSTFLOAT fCheckbox4;
	float fRec140[2];
	FAUSTFLOAT fVslider3;
	float fConst353;
	float fConst355;
	float fConst357;
	float fConst358;
	float fConst359;
	float fConst360;
	float fConst361;
	float fRec144[3];
	float fConst362;
	float fConst363;
	float fRec143[3];
	float fConst364;
	float fRec142[3];
	float fConst365;
	float fRec141[2];
	float fRec148[3];
	float fRec147[3];
	float fRec146[3];
	float fRec145[2];
	FAUSTFLOAT fVbargraph23;
	float fConst366;
	float fConst368;
	float fConst370;
	float fConst371;
	float fConst372;
	float fRec154[3];
	float fRec153[3];
	float fConst373;
	float fConst374;
	float fRec152[3];
	float fConst375;
	float fConst376;
	float fRec151[3];
	float fConst377;
	float fRec150[3];
	float fRec149[2];
	float fRec160[3];
	float fRec159[3];
	float fRec158[3];
	float fRec157[3];
	float fRec156[3];
	float fRec155[2];
	FAUSTFLOAT fVbargraph24;
	float fConst378;
	float fConst380;
	float fConst382;
	float fConst383;
	float fConst384;
	float fRec182[3];
	float fRec181[3];
	float fConst385;
	float fConst386;
	float fRec180[3];
	float fConst387;
	float fConst388;
	float fRec179[3];
	float fConst389;
	float fRec178[3];
	float fRec177[2];
	float fRec188[3];
	float fRec187[3];
	float fRec186[3];
	float fRec185[3];
	float fRec184[3];
	float fRec183[2];
	FAUSTFLOAT fVbargraph25;
	float fConst390;
	float fConst392;
	float fConst394;
	float fConst395;
	float fConst396;
	float fRec210[3];
	float fRec209[3];
	float fConst397;
	float fConst398;
	float fRec208[3];
	float fConst399;
	float fConst400;
	float fRec207[3];
	float fConst401;
	float fRec206[3];
	float fRec205[2];
	float fRec216[3];
	float fRec215[3];
	float fRec214[3];
	float fRec213[3];
	float fRec212[3];
	float fRec211[2];
	FAUSTFLOAT fVbargraph26;
	float fRec235[3];
	float fRec234[3];
	float fRec233[2];
	float fRec238[3];
	float fRec237[3];
	float fRec236[2];
	FAUSTFLOAT fVbargraph27;
	float fRec243[2];
	float fRec244[2];
	float fRec247[2];
	float fRec248[2];
	float fRec239[2];
	float fRec240[2];
	float fRec229[2];
	float fRec230[2];
	float fRec251[2];
	float fRec252[2];
	float fRec225[2];
	float fRec226[2];
	float fRec221[2];
	float fRec222[2];
	float fRec255[2];
	float fRec256[2];
	float fRec217[2];
	float fRec218[2];
	float fRec201[2];
	float fRec202[2];
	float fRec259[2];
	float fRec260[2];
	float fRec197[2];
	float fRec198[2];
	float fRec193[2];
	float fRec194[2];
	float fRec263[2];
	float fRec264[2];
	float fRec189[2];
	float fRec190[2];
	float fRec173[2];
	float fRec174[2];
	float fRec267[2];
	float fRec268[2];
	float fRec169[2];
	float fRec170[2];
	float fRec165[2];
	float fRec166[2];
	float fRec271[2];
	float fRec272[2];
	float fRec161[2];
	float fRec162[2];
	float fRec275[2];
	float fRec276[2];
	float fRec279[2];
	float fRec280[2];
	float fRec283[2];
	float fRec284[2];
	float fVec480[2048];
	float fRec339[2];
	float fRec340[2];
	float fRec343[2];
	float fRec344[2];
	float fRec335[2];
	float fRec336[2];
	float fRec331[2];
	float fRec332[2];
	float fRec347[2];
	float fRec348[2];
	float fRec327[2];
	float fRec328[2];
	float fRec323[2];
	float fRec324[2];
	float fRec351[2];
	float fRec352[2];
	float fRec319[2];
	float fRec320[2];
	float fRec315[2];
	float fRec316[2];
	float fRec355[2];
	float fRec356[2];
	float fRec311[2];
	float fRec312[2];
	float fRec307[2];
	float fRec308[2];
	float fRec359[2];
	float fRec360[2];
	float fRec303[2];
	float fRec304[2];
	float fRec299[2];
	float fRec300[2];
	float fRec363[2];
	float fRec364[2];
	float fRec295[2];
	float fRec296[2];
	float fRec291[2];
	float fRec292[2];
	float fRec367[2];
	float fRec368[2];
	float fRec287[2];
	float fRec288[2];
	float fRec371[2];
	float fRec372[2];
	float fRec375[2];
	float fRec376[2];
	float fRec379[2];
	float fRec380[2];
	float fVec481[2048];
	int iRec5[2];
	float fRec6[2];
	float fRec4[2];
	float fConst402;
	float fRec3[2];
	FAUSTFLOAT fVbargraph28;
	FAUSTFLOAT fVbargraph29;
	int iConst403;
	float fRec0[2];
	FAUSTFLOAT fVbargraph30;
	float fVec482[2];
	float fConst405;
	int iConst406;
	float fVec483[2];
	float fRec386[2];
	float fRec385[2];
	float fVec484[2];
	float fRec384[2];
	float fRec383[2];
	float fVec485[2];
	float fVec486[3];
	float fVec487[7];
	float fVec488[15];
	float fVec489[32];
	float fVec490[64];
	float fVec491[128];
	float fVec492[256];
	float fVec493[512];
	float fVec494[1024];
	float fVec495[2048];
	float fVec496[4096];
	float fVec497[8192];
	float fVec498[16384];
	float fVec499[32768];
	float fVec500[65536];
	float fVec501[131072];
	int iConst437;
	int iConst438;
	int iConst439;
	int iConst440;
	int iConst441;
	int iConst442;
	int iConst443;
	int iConst444;
	int iConst445;
	int iConst446;
	int iConst447;
	int iConst448;
	int iConst449;
	int iConst450;
	int iConst451;
	int iConst452;
	int iConst453;
	int iConst454;
	int iConst455;
	int iConst456;
	int iConst457;
	int iConst458;
	int iConst459;
	int iConst460;
	int iConst461;
	int iConst462;
	int iConst463;
	int iConst464;
	int iConst465;
	int iConst466;
	int iConst467;
	float fRec391[2];
	FAUSTFLOAT fVbargraph31;
	float fVec502[2];
	float fVec503[2];
	float fRec390[2];
	float fRec389[2];
	float fVec504[2];
	float fRec388[2];
	float fRec387[2];
	float fVec505[2];
	float fVec506[3];
	float fVec507[7];
	float fVec508[15];
	float fVec509[32];
	float fVec510[64];
	float fVec511[128];
	float fVec512[256];
	float fVec513[512];
	float fVec514[1024];
	float fVec515[2048];
	float fVec516[4096];
	float fVec517[8192];
	float fVec518[16384];
	float fVec519[32768];
	float fVec520[65536];
	float fVec521[131072];
	FAUSTFLOAT fVbargraph32;
	
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
		m->declare("basics.lib/version", "0.8");
		m->declare("compile_options", "-a /tmp/tmpungeylzw.cpp -lang cpp -es 1 -mcd 16 -single -ftz 0");
		m->declare("delays.lib/name", "Faust Delay Library");
		m->declare("delays.lib/version", "0.1");
		m->declare("dynamicsmoothing.lib/author", "Dario Sanfilippo");
		m->declare("dynamicsmoothing.lib/copyright", "2024, Dario Sanfilippo");
		m->declare("dynamicsmoothing.lib/license", "MIT");
		m->declare("dynamicsmoothing.lib/name", "dynamicSmoothing");
		m->declare("dynamicsmoothing.lib/version", "0.1");
		m->declare("ebur128.lib/author", "Jakob Dübel");
		m->declare("ebur128.lib/license", "ISC");
		m->declare("ebur128.lib/name", "ITU-R BS.1770-4 prefilter");
		m->declare("ebur128.lib/version", "1.0");
		m->declare("filename", "PodcastPluginTrack.dsp");
		m->declare("filters.lib/fir:author", "Julius O. Smith III");
		m->declare("filters.lib/fir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/fir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/highpass:author", "Julius O. Smith III");
		m->declare("filters.lib/highpass:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/iir:author", "Julius O. Smith III");
		m->declare("filters.lib/iir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/iir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowpass0_highpass1", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowpass0_highpass1:author", "Julius O. Smith III");
		m->declare("filters.lib/lowpass:author", "Julius O. Smith III");
		m->declare("filters.lib/lowpass:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/lowpass:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/name", "Faust Filters Library");
		m->declare("filters.lib/resonbp:author", "Julius O. Smith III");
		m->declare("filters.lib/resonbp:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/resonbp:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/svf:author", "Oleg Nesterov");
		m->declare("filters.lib/svf:copyright", "Copyright (C) 2020 Oleg Nesterov <oleg@redhat.com>");
		m->declare("filters.lib/svf:license", "MIT-style STK-4.3 license");
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
		m->declare("name", "PodcastPlugin Track");
		m->declare("platform.lib/name", "Generic Platform Library");
		m->declare("platform.lib/version", "0.2");
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
		float fConst0 = std::min<float>(192000.0f, std::max<float>(1.0f, float(fSampleRate)));
		fConst1 = 80.0f / fConst0;
		fConst2 = 44.0999985f / fConst0;
		fConst3 = 1.0f - fConst2;
		fConst4 = std::exp(0.0f - 125.0f / fConst0);
		fConst5 = 1.0f - fConst4;
		fConst6 = 3.14159274f / fConst0;
		fConst7 = 0.125f * fConst0;
		int iConst8 = int(std::floor(9.99999975e-05f * fConst0)) % 2;
		iConst9 = iConst8;
		int iConst10 = int(std::floor(4.99999987e-05f * fConst0)) % 2;
		iConst11 = iConst10;
		int iConst12 = int(std::floor(2.49999994e-05f * fConst0)) % 2;
		iConst13 = iConst12;
		int iConst14 = iConst8 + 2 * iConst10;
		iConst15 = iConst14;
		int iConst16 = int(std::floor(1.24999997e-05f * fConst0)) % 2;
		iConst17 = iConst16;
		int iConst18 = iConst14 + 4 * iConst12;
		iConst19 = iConst18;
		iConst20 = int(std::floor(6.24999984e-06f * fConst0)) % 2;
		iConst21 = iConst18 + 8 * iConst16;
		fConst22 = std::exp(0.0f - 10.0f / fConst0);
		fConst23 = 1.13123053e-06f * fConst0;
		fConst24 = 0.00999999978f * fConst0;
		float fConst25 = std::rint(fConst24);
		fConst26 = 1.0f / std::max<float>(fConst25, 1.1920929e-07f);
		iConst27 = int(std::floor(0.0009765625f * fConst25)) % 2;
		float fConst28 = std::tan(119.806114f / fConst0);
		float fConst29 = 0.500327051f * fConst28;
		float fConst30 = fConst28 * (fConst29 + 1.0f) + 0.500327051f;
		fConst31 = 0.0f - 1.0006541f / fConst30;
		float fConst32 = std::tan(5283.41504f / fConst0);
		fConst33 = 1.0f / (fConst32 * (fConst32 + 1.41421354f) + 1.0f);
		fConst34 = fConst32 * (fConst32 + -1.41421354f) + 1.0f;
		fConst35 = fConst32 * (fConst32 + -1.78036666f) + 1.5848527f;
		fConst36 = fConst32 * (fConst32 + 1.78036666f) + 1.5848527f;
		float fConst37 = mydsp_faustpower2_f(fConst32);
		fConst38 = fConst37 + -1.0f;
		fConst39 = fConst37 + -1.5848527f;
		fConst40 = 1.0f / fConst30;
		fConst41 = fConst28 * (fConst29 + -1.0f) + 0.500327051f;
		fConst42 = 1.0006541f * (mydsp_faustpower2_f(fConst28) + -1.0f);
		int iConst43 = int(std::floor(fConst25)) % 2;
		int iConst44 = int(std::floor(0.5f * fConst25)) % 2;
		int iConst45 = iConst43 + 2 * iConst44;
		int iConst46 = int(std::floor(0.25f * fConst25)) % 2;
		int iConst47 = iConst45 + 4 * iConst46;
		int iConst48 = int(std::floor(0.125f * fConst25)) % 2;
		int iConst49 = iConst47 + 8 * iConst48;
		int iConst50 = int(std::floor(0.0625f * fConst25)) % 2;
		int iConst51 = iConst49 + 16 * iConst50;
		int iConst52 = int(std::floor(0.03125f * fConst25)) % 2;
		int iConst53 = iConst51 + 32 * iConst52;
		int iConst54 = int(std::floor(0.015625f * fConst25)) % 2;
		int iConst55 = iConst53 + 64 * iConst54;
		int iConst56 = int(std::floor(0.0078125f * fConst25)) % 2;
		int iConst57 = iConst55 + 128 * iConst56;
		int iConst58 = int(std::floor(0.00390625f * fConst25)) % 2;
		int iConst59 = iConst57 + 256 * iConst58;
		int iConst60 = int(std::floor(0.001953125f * fConst25)) % 2;
		iConst61 = iConst59 + 512 * iConst60;
		iConst62 = iConst60;
		iConst63 = iConst59;
		iConst64 = iConst58;
		iConst65 = iConst57;
		iConst66 = iConst56;
		iConst67 = iConst55;
		iConst68 = iConst54;
		iConst69 = iConst53;
		iConst70 = iConst52;
		iConst71 = iConst51;
		iConst72 = iConst50;
		iConst73 = iConst49;
		iConst74 = iConst48;
		iConst75 = iConst47;
		iConst76 = iConst46;
		iConst77 = iConst45;
		iConst78 = iConst43;
		iConst79 = iConst44;
		float fConst80 = std::tan(50265.4844f / fConst0);
		float fConst81 = 1.0f / fConst80;
		fConst82 = 1.0f / ((fConst81 + 1.41421354f) / fConst80 + 1.0f);
		float fConst83 = std::tan(188.49556f / fConst0);
		float fConst84 = 1.0f / fConst83;
		fConst85 = 1.0f / ((fConst84 + 1.41421354f) / fConst83 + 1.0f);
		float fConst86 = mydsp_faustpower2_f(fConst83);
		fConst87 = 1.0f / fConst86;
		fConst88 = (fConst84 + -1.41421354f) / fConst83 + 1.0f;
		fConst89 = 2.0f * (1.0f - fConst87);
		fConst90 = 0.0f - 2.0f / fConst86;
		fConst91 = (fConst81 + -1.41421354f) / fConst80 + 1.0f;
		fConst92 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst80));
		float fConst93 = std::rint(0.800000012f * fConst0);
		fConst94 = 1.0f / std::max<float>(fConst93, 1.1920929e-07f);
		iConst95 = int(std::floor(7.62939453e-06f * fConst93)) % 2;
		fConst96 = 0.223606795f * fConst35;
		float fConst97 = (fConst84 + 0.333333343f) / fConst83 + 1.0f;
		fConst98 = 1.0f / (fConst83 * fConst97);
		fConst99 = 1.0f / fConst97;
		fConst100 = (fConst84 + -0.333333343f) / fConst83 + 1.0f;
		fConst101 = 0.0f - fConst98;
		fConst102 = 2.0f * fConst38;
		fConst103 = 0.44721359f * fConst39;
		fConst104 = 0.223606795f * fConst36;
		int iConst105 = int(std::floor(fConst93)) % 2;
		int iConst106 = int(std::floor(0.5f * fConst93)) % 2;
		int iConst107 = iConst105 + 2 * iConst106;
		int iConst108 = int(std::floor(0.25f * fConst93)) % 2;
		int iConst109 = iConst107 + 4 * iConst108;
		int iConst110 = int(std::floor(0.125f * fConst93)) % 2;
		int iConst111 = iConst109 + 8 * iConst110;
		int iConst112 = int(std::floor(0.0625f * fConst93)) % 2;
		int iConst113 = iConst111 + 16 * iConst112;
		int iConst114 = int(std::floor(0.03125f * fConst93)) % 2;
		int iConst115 = iConst113 + 32 * iConst114;
		int iConst116 = int(std::floor(0.015625f * fConst93)) % 2;
		int iConst117 = iConst115 + 64 * iConst116;
		int iConst118 = int(std::floor(0.0078125f * fConst93)) % 2;
		int iConst119 = iConst117 + 128 * iConst118;
		int iConst120 = int(std::floor(0.00390625f * fConst93)) % 2;
		int iConst121 = iConst119 + 256 * iConst120;
		int iConst122 = int(std::floor(0.001953125f * fConst93)) % 2;
		int iConst123 = iConst121 + 512 * iConst122;
		int iConst124 = int(std::floor(0.0009765625f * fConst93)) % 2;
		int iConst125 = iConst123 + 1024 * iConst124;
		int iConst126 = int(std::floor(0.00048828125f * fConst93)) % 2;
		int iConst127 = iConst125 + 2048 * iConst126;
		int iConst128 = int(std::floor(0.000244140625f * fConst93)) % 2;
		int iConst129 = iConst127 + 4096 * iConst128;
		int iConst130 = int(std::floor(0.000122070312f * fConst93)) % 2;
		int iConst131 = iConst129 + 8192 * iConst130;
		int iConst132 = int(std::floor(6.10351562e-05f * fConst93)) % 2;
		int iConst133 = iConst131 + 16384 * iConst132;
		int iConst134 = int(std::floor(3.05175781e-05f * fConst93)) % 2;
		int iConst135 = iConst133 + 32768 * iConst134;
		int iConst136 = int(std::floor(1.52587891e-05f * fConst93)) % 2;
		iConst137 = iConst135 + 65536 * iConst136;
		iConst138 = iConst136;
		iConst139 = iConst135;
		iConst140 = iConst134;
		iConst141 = iConst133;
		iConst142 = iConst132;
		iConst143 = iConst131;
		iConst144 = iConst130;
		iConst145 = iConst129;
		iConst146 = iConst128;
		iConst147 = iConst127;
		iConst148 = iConst126;
		iConst149 = iConst125;
		iConst150 = iConst124;
		iConst151 = iConst123;
		iConst152 = iConst122;
		iConst153 = iConst121;
		iConst154 = iConst120;
		iConst155 = iConst119;
		iConst156 = iConst118;
		iConst157 = iConst117;
		iConst158 = iConst116;
		iConst159 = iConst115;
		iConst160 = iConst114;
		iConst161 = iConst113;
		iConst162 = iConst112;
		iConst163 = iConst111;
		iConst164 = iConst110;
		iConst165 = iConst109;
		iConst166 = iConst108;
		iConst167 = iConst107;
		iConst168 = iConst105;
		iConst169 = iConst106;
		fConst170 = 0.5f * fConst35;
		fConst171 = 0.5f * fConst36;
		int iConst172 = int(std::floor(0.00100000005f * fConst0)) % 2;
		iConst173 = iConst172;
		int iConst174 = int(std::floor(0.000500000024f * fConst0)) % 2;
		iConst175 = iConst174;
		int iConst176 = int(std::floor(0.000250000012f * fConst0)) % 2;
		iConst177 = iConst176;
		int iConst178 = iConst172 + 2 * iConst174;
		iConst179 = iConst178;
		int iConst180 = int(std::floor(0.000125000006f * fConst0)) % 2;
		iConst181 = iConst180;
		int iConst182 = iConst178 + 4 * iConst176;
		iConst183 = iConst182;
		int iConst184 = int(std::floor(6.2500003e-05f * fConst0)) % 2;
		iConst185 = iConst184;
		int iConst186 = iConst182 + 8 * iConst180;
		iConst187 = iConst186;
		int iConst188 = int(std::floor(3.12500015e-05f * fConst0)) % 2;
		iConst189 = iConst188;
		int iConst190 = iConst186 + 16 * iConst184;
		iConst191 = iConst190;
		int iConst192 = int(std::floor(1.56250007e-05f * fConst0)) % 2;
		iConst193 = iConst192;
		int iConst194 = iConst190 + 32 * iConst188;
		iConst195 = iConst194;
		iConst196 = int(std::floor(7.81250037e-06f * fConst0)) % 2;
		iConst197 = iConst194 + 64 * iConst192;
		fConst198 = std::exp(0.0f - 2.0f / fConst0);
		fConst199 = std::exp(0.0f - 100.0f / fConst0);
		iConst200 = int(std::min<float>(48000.0f, std::max<float>(0.0f, 0.100000001f * fConst0)));
		float fConst201 = std::tan(249.119644f / fConst0);
		float fConst202 = 1.0f / fConst201;
		float fConst203 = (fConst202 + 0.333333343f) / fConst201 + 1.0f;
		fConst204 = 1.0f / (fConst201 * fConst203);
		fConst205 = 1.0f / fConst203;
		fConst206 = (fConst202 + -0.333333343f) / fConst201 + 1.0f;
		fConst207 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst201));
		fConst208 = 0.0f - fConst204;
		float fConst209 = std::tan(329.241669f / fConst0);
		float fConst210 = 1.0f / fConst209;
		float fConst211 = (fConst210 + 0.333333343f) / fConst209 + 1.0f;
		fConst212 = 1.0f / (fConst209 * fConst211);
		fConst213 = 1.0f / fConst211;
		fConst214 = (fConst210 + -0.333333343f) / fConst209 + 1.0f;
		fConst215 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst209));
		fConst216 = 0.0f - fConst212;
		float fConst217 = std::tan(435.132629f / fConst0);
		float fConst218 = 1.0f / fConst217;
		float fConst219 = (fConst218 + 0.333333343f) / fConst217 + 1.0f;
		fConst220 = 1.0f / (fConst217 * fConst219);
		fConst221 = 1.0f / fConst219;
		fConst222 = (fConst218 + -0.333333343f) / fConst217 + 1.0f;
		fConst223 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst217));
		fConst224 = 0.0f - fConst220;
		float fConst225 = std::tan(575.080322f / fConst0);
		float fConst226 = 1.0f / fConst225;
		float fConst227 = (fConst226 + 0.333333343f) / fConst225 + 1.0f;
		fConst228 = 1.0f / (fConst225 * fConst227);
		fConst229 = 1.0f / fConst227;
		fConst230 = (fConst226 + -0.333333343f) / fConst225 + 1.0f;
		fConst231 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst225));
		fConst232 = 0.0f - fConst228;
		float fConst233 = std::tan(760.038025f / fConst0);
		float fConst234 = 1.0f / fConst233;
		float fConst235 = (fConst234 + 0.333333343f) / fConst233 + 1.0f;
		fConst236 = 1.0f / (fConst233 * fConst235);
		fConst237 = 1.0f / fConst235;
		fConst238 = (fConst234 + -0.333333343f) / fConst233 + 1.0f;
		fConst239 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst233));
		fConst240 = 0.0f - fConst236;
		float fConst241 = std::tan(1004.48206f / fConst0);
		float fConst242 = 1.0f / fConst241;
		float fConst243 = (fConst242 + 0.333333343f) / fConst241 + 1.0f;
		fConst244 = 1.0f / (fConst241 * fConst243);
		fConst245 = 1.0f / fConst243;
		fConst246 = (fConst242 + -0.333333343f) / fConst241 + 1.0f;
		fConst247 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst241));
		fConst248 = 0.0f - fConst244;
		float fConst249 = std::tan(1327.54431f / fConst0);
		float fConst250 = 1.0f / fConst249;
		float fConst251 = (fConst250 + 0.333333343f) / fConst249 + 1.0f;
		fConst252 = 1.0f / (fConst249 * fConst251);
		fConst253 = 1.0f / fConst251;
		fConst254 = (fConst250 + -0.333333343f) / fConst249 + 1.0f;
		fConst255 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst249));
		fConst256 = 0.0f - fConst252;
		float fConst257 = std::tan(1754.51001f / fConst0);
		float fConst258 = 1.0f / fConst257;
		float fConst259 = (fConst258 + 0.333333343f) / fConst257 + 1.0f;
		fConst260 = 1.0f / (fConst257 * fConst259);
		fConst261 = 1.0f / fConst259;
		fConst262 = (fConst258 + -0.333333343f) / fConst257 + 1.0f;
		fConst263 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst257));
		fConst264 = 0.0f - fConst260;
		float fConst265 = std::tan(2318.79688f / fConst0);
		float fConst266 = 1.0f / fConst265;
		float fConst267 = (fConst266 + 0.333333343f) / fConst265 + 1.0f;
		fConst268 = 1.0f / (fConst265 * fConst267);
		fConst269 = 1.0f / fConst267;
		fConst270 = (fConst266 + -0.333333343f) / fConst265 + 1.0f;
		fConst271 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst265));
		fConst272 = 0.0f - fConst268;
		float fConst273 = std::tan(3064.57007f / fConst0);
		float fConst274 = 1.0f / fConst273;
		float fConst275 = (fConst274 + 0.333333343f) / fConst273 + 1.0f;
		fConst276 = 1.0f / (fConst273 * fConst275);
		fConst277 = 1.0f / fConst275;
		fConst278 = (fConst274 + -0.333333343f) / fConst273 + 1.0f;
		fConst279 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst273));
		fConst280 = 0.0f - fConst276;
		float fConst281 = std::tan(4050.19922f / fConst0);
		float fConst282 = 1.0f / fConst281;
		float fConst283 = (fConst282 + 0.333333343f) / fConst281 + 1.0f;
		fConst284 = 1.0f / (fConst281 * fConst283);
		fConst285 = 1.0f / fConst283;
		fConst286 = (fConst282 + -0.333333343f) / fConst281 + 1.0f;
		fConst287 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst281));
		fConst288 = 0.0f - fConst284;
		float fConst289 = std::tan(5352.82715f / fConst0);
		float fConst290 = 1.0f / fConst289;
		float fConst291 = (fConst290 + 0.333333343f) / fConst289 + 1.0f;
		fConst292 = 1.0f / (fConst289 * fConst291);
		fConst293 = 1.0f / fConst291;
		fConst294 = (fConst290 + -0.333333343f) / fConst289 + 1.0f;
		fConst295 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst289));
		fConst296 = 0.0f - fConst292;
		float fConst297 = std::tan(7074.40723f / fConst0);
		float fConst298 = 1.0f / fConst297;
		float fConst299 = (fConst298 + 0.333333343f) / fConst297 + 1.0f;
		fConst300 = 1.0f / (fConst297 * fConst299);
		fConst301 = 1.0f / fConst299;
		fConst302 = (fConst298 + -0.333333343f) / fConst297 + 1.0f;
		fConst303 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst297));
		fConst304 = 0.0f - fConst300;
		float fConst305 = std::tan(9349.68359f / fConst0);
		float fConst306 = 1.0f / fConst305;
		float fConst307 = (fConst306 + 0.333333343f) / fConst305 + 1.0f;
		fConst308 = 1.0f / (fConst305 * fConst307);
		fConst309 = 1.0f / fConst307;
		fConst310 = (fConst306 + -0.333333343f) / fConst305 + 1.0f;
		fConst311 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst305));
		fConst312 = 0.0f - fConst308;
		float fConst313 = std::tan(12356.7354f / fConst0);
		float fConst314 = 1.0f / fConst313;
		float fConst315 = (fConst314 + 0.333333343f) / fConst313 + 1.0f;
		fConst316 = 1.0f / (fConst313 * fConst315);
		fConst317 = 1.0f / fConst315;
		fConst318 = (fConst314 + -0.333333343f) / fConst313 + 1.0f;
		fConst319 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst313));
		fConst320 = 0.0f - fConst316;
		float fConst321 = std::tan(16330.918f / fConst0);
		float fConst322 = 1.0f / fConst321;
		float fConst323 = (fConst322 + 0.333333343f) / fConst321 + 1.0f;
		fConst324 = 1.0f / (fConst321 * fConst323);
		fConst325 = 1.0f / fConst323;
		fConst326 = (fConst322 + -0.333333343f) / fConst321 + 1.0f;
		fConst327 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst321));
		fConst328 = 0.0f - fConst324;
		float fConst329 = std::tan(21583.2793f / fConst0);
		float fConst330 = 1.0f / fConst329;
		float fConst331 = (fConst330 + 0.333333343f) / fConst329 + 1.0f;
		fConst332 = 1.0f / (fConst329 * fConst331);
		fConst333 = 1.0f / fConst331;
		fConst334 = (fConst330 + -0.333333343f) / fConst329 + 1.0f;
		fConst335 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst329));
		fConst336 = 0.0f - fConst332;
		float fConst337 = std::tan(28524.9102f / fConst0);
		float fConst338 = 1.0f / fConst337;
		float fConst339 = (fConst338 + 0.333333343f) / fConst337 + 1.0f;
		fConst340 = 1.0f / (fConst337 * fConst339);
		fConst341 = 1.0f / fConst339;
		fConst342 = (fConst338 + -0.333333343f) / fConst337 + 1.0f;
		fConst343 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst337));
		fConst344 = 0.0f - fConst340;
		float fConst345 = std::tan(37699.1133f / fConst0);
		float fConst346 = 1.0f / fConst345;
		float fConst347 = (fConst346 + 0.333333343f) / fConst345 + 1.0f;
		fConst348 = 1.0f / (fConst345 * fConst347);
		fConst349 = 1.0f / fConst347;
		fConst350 = (fConst346 + -0.333333343f) / fConst345 + 1.0f;
		fConst351 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst345));
		fConst352 = 0.0f - fConst348;
		fConst353 = std::tan(21991.1484f / fConst0);
		float fConst354 = 1.0f / fConst353;
		fConst355 = 1.0f / ((fConst354 + 0.517638087f) / fConst353 + 1.0f);
		float fConst356 = mydsp_faustpower2_f(fConst353);
		fConst357 = 1.0f / fConst356;
		fConst358 = 1.0f / ((fConst354 + 1.41421354f) / fConst353 + 1.0f);
		fConst359 = 1.0f / ((fConst354 + 1.93185163f) / fConst353 + 1.0f);
		fConst360 = (fConst354 + -1.93185163f) / fConst353 + 1.0f;
		fConst361 = 2.0f * (1.0f - fConst357);
		fConst362 = 0.0f - 2.0f / fConst356;
		fConst363 = (fConst354 + -1.41421354f) / fConst353 + 1.0f;
		fConst364 = (fConst354 + -0.517638087f) / fConst353 + 1.0f;
		fConst365 = 1.0f / fConst0;
		fConst366 = std::tan(5335.99268f / fConst0);
		float fConst367 = 1.0f / fConst366;
		fConst368 = 1.0f / ((fConst367 + 0.517638087f) / fConst366 + 1.0f);
		float fConst369 = mydsp_faustpower2_f(fConst366);
		fConst370 = 1.0f / fConst369;
		fConst371 = 1.0f / ((fConst367 + 1.41421354f) / fConst366 + 1.0f);
		fConst372 = 1.0f / ((fConst367 + 1.93185163f) / fConst366 + 1.0f);
		fConst373 = (fConst367 + -1.93185163f) / fConst366 + 1.0f;
		fConst374 = 2.0f * (1.0f - fConst370);
		fConst375 = 0.0f - 2.0f / fConst369;
		fConst376 = (fConst367 + -1.41421354f) / fConst366 + 1.0f;
		fConst377 = (fConst367 + -0.517638087f) / fConst366 + 1.0f;
		fConst378 = std::tan(1294.73999f / fConst0);
		float fConst379 = 1.0f / fConst378;
		fConst380 = 1.0f / ((fConst379 + 0.517638087f) / fConst378 + 1.0f);
		float fConst381 = mydsp_faustpower2_f(fConst378);
		fConst382 = 1.0f / fConst381;
		fConst383 = 1.0f / ((fConst379 + 1.41421354f) / fConst378 + 1.0f);
		fConst384 = 1.0f / ((fConst379 + 1.93185163f) / fConst378 + 1.0f);
		fConst385 = (fConst379 + -1.93185163f) / fConst378 + 1.0f;
		fConst386 = 2.0f * (1.0f - fConst382);
		fConst387 = 0.0f - 2.0f / fConst381;
		fConst388 = (fConst379 + -1.41421354f) / fConst378 + 1.0f;
		fConst389 = (fConst379 + -0.517638087f) / fConst378 + 1.0f;
		fConst390 = std::tan(314.159271f / fConst0);
		float fConst391 = 1.0f / fConst390;
		fConst392 = 1.0f / ((fConst391 + 0.517638087f) / fConst390 + 1.0f);
		float fConst393 = mydsp_faustpower2_f(fConst390);
		fConst394 = 1.0f / fConst393;
		fConst395 = 1.0f / ((fConst391 + 1.41421354f) / fConst390 + 1.0f);
		fConst396 = 1.0f / ((fConst391 + 1.93185163f) / fConst390 + 1.0f);
		fConst397 = (fConst391 + -1.93185163f) / fConst390 + 1.0f;
		fConst398 = 2.0f * (1.0f - fConst394);
		fConst399 = 0.0f - 2.0f / fConst393;
		fConst400 = (fConst391 + -1.41421354f) / fConst390 + 1.0f;
		fConst401 = (fConst391 + -0.517638087f) / fConst390 + 1.0f;
		fConst402 = 1.0f - fConst22;
		iConst403 = int(fConst0 * (0.109999999f + -0.100000001f));
		float fConst404 = std::rint(0.400000006f * fConst0);
		fConst405 = 1.0f / std::max<float>(fConst404, 1.1920929e-07f);
		iConst406 = int(std::floor(1.52587891e-05f * fConst404)) % 2;
		int iConst407 = int(std::floor(fConst404)) % 2;
		int iConst408 = int(std::floor(0.5f * fConst404)) % 2;
		int iConst409 = iConst407 + 2 * iConst408;
		int iConst410 = int(std::floor(0.25f * fConst404)) % 2;
		int iConst411 = iConst409 + 4 * iConst410;
		int iConst412 = int(std::floor(0.125f * fConst404)) % 2;
		int iConst413 = iConst411 + 8 * iConst412;
		int iConst414 = int(std::floor(0.0625f * fConst404)) % 2;
		int iConst415 = iConst413 + 16 * iConst414;
		int iConst416 = int(std::floor(0.03125f * fConst404)) % 2;
		int iConst417 = iConst415 + 32 * iConst416;
		int iConst418 = int(std::floor(0.015625f * fConst404)) % 2;
		int iConst419 = iConst417 + 64 * iConst418;
		int iConst420 = int(std::floor(0.0078125f * fConst404)) % 2;
		int iConst421 = iConst419 + 128 * iConst420;
		int iConst422 = int(std::floor(0.00390625f * fConst404)) % 2;
		int iConst423 = iConst421 + 256 * iConst422;
		int iConst424 = int(std::floor(0.001953125f * fConst404)) % 2;
		int iConst425 = iConst423 + 512 * iConst424;
		int iConst426 = int(std::floor(0.0009765625f * fConst404)) % 2;
		int iConst427 = iConst425 + 1024 * iConst426;
		int iConst428 = int(std::floor(0.00048828125f * fConst404)) % 2;
		int iConst429 = iConst427 + 2048 * iConst428;
		int iConst430 = int(std::floor(0.000244140625f * fConst404)) % 2;
		int iConst431 = iConst429 + 4096 * iConst430;
		int iConst432 = int(std::floor(0.000122070312f * fConst404)) % 2;
		int iConst433 = iConst431 + 8192 * iConst432;
		int iConst434 = int(std::floor(6.10351562e-05f * fConst404)) % 2;
		int iConst435 = iConst433 + 16384 * iConst434;
		int iConst436 = int(std::floor(3.05175781e-05f * fConst404)) % 2;
		iConst437 = iConst435 + 32768 * iConst436;
		iConst438 = iConst436;
		iConst439 = iConst435;
		iConst440 = iConst434;
		iConst441 = iConst433;
		iConst442 = iConst432;
		iConst443 = iConst431;
		iConst444 = iConst430;
		iConst445 = iConst429;
		iConst446 = iConst428;
		iConst447 = iConst427;
		iConst448 = iConst426;
		iConst449 = iConst425;
		iConst450 = iConst424;
		iConst451 = iConst423;
		iConst452 = iConst422;
		iConst453 = iConst421;
		iConst454 = iConst420;
		iConst455 = iConst419;
		iConst456 = iConst418;
		iConst457 = iConst417;
		iConst458 = iConst416;
		iConst459 = iConst415;
		iConst460 = iConst414;
		iConst461 = iConst413;
		iConst462 = iConst412;
		iConst463 = iConst411;
		iConst464 = iConst410;
		iConst465 = iConst409;
		iConst466 = iConst407;
		iConst467 = iConst408;
	}
	
	FAUSTPP_VIRTUAL void instanceResetUserInterface() {
		fCheckbox0 = FAUSTFLOAT(0.0f);
		fCheckbox1 = FAUSTFLOAT(0.0f);
		fVslider0 = FAUSTFLOAT(-18.0f);
		fCheckbox2 = FAUSTFLOAT(0.0f);
		fVslider1 = FAUSTFLOAT(0.0f);
		fCheckbox3 = FAUSTFLOAT(0.0f);
		fVslider2 = FAUSTFLOAT(0.5f);
		fCheckbox4 = FAUSTFLOAT(0.0f);
		fVslider3 = FAUSTFLOAT(0.5f);
	}
	
	FAUSTPP_VIRTUAL void instanceClear() {
		for (int l0 = 0; l0 < 2; l0 = l0 + 1) {
			fRec1[l0] = 0.0f;
		}
		for (int l1 = 0; l1 < 2; l1 = l1 + 1) {
			fRec2[l1] = 0.0f;
		}
		for (int l2 = 0; l2 < 2; l2 = l2 + 1) {
			fRec7[l2] = 0.0f;
		}
		for (int l3 = 0; l3 < 2; l3 = l3 + 1) {
			fVec0[l3] = 0.0f;
		}
		for (int l4 = 0; l4 < 3; l4 = l4 + 1) {
			fVec1[l4] = 0.0f;
		}
		for (int l5 = 0; l5 < 7; l5 = l5 + 1) {
			fVec2[l5] = 0.0f;
		}
		for (int l6 = 0; l6 < 15; l6 = l6 + 1) {
			fVec3[l6] = 0.0f;
		}
		IOTA0 = 0;
		for (int l7 = 0; l7 < 32; l7 = l7 + 1) {
			fVec4[l7] = 0.0f;
		}
		for (int l8 = 0; l8 < 2; l8 = l8 + 1) {
			fRec18[l8] = 0.0f;
		}
		for (int l9 = 0; l9 < 2; l9 = l9 + 1) {
			fVec5[l9] = 0.0f;
		}
		for (int l10 = 0; l10 < 2; l10 = l10 + 1) {
			fRec22[l10] = 0.0f;
		}
		for (int l11 = 0; l11 < 2; l11 = l11 + 1) {
			fRec21[l11] = 0.0f;
		}
		for (int l12 = 0; l12 < 2; l12 = l12 + 1) {
			fVec6[l12] = 0.0f;
		}
		for (int l13 = 0; l13 < 2; l13 = l13 + 1) {
			fRec20[l13] = 0.0f;
		}
		for (int l14 = 0; l14 < 2; l14 = l14 + 1) {
			fRec19[l14] = 0.0f;
		}
		for (int l15 = 0; l15 < 2; l15 = l15 + 1) {
			fVec7[l15] = 0.0f;
		}
		for (int l16 = 0; l16 < 3; l16 = l16 + 1) {
			fVec8[l16] = 0.0f;
		}
		for (int l17 = 0; l17 < 7; l17 = l17 + 1) {
			fVec9[l17] = 0.0f;
		}
		for (int l18 = 0; l18 < 15; l18 = l18 + 1) {
			fVec10[l18] = 0.0f;
		}
		for (int l19 = 0; l19 < 32; l19 = l19 + 1) {
			fVec11[l19] = 0.0f;
		}
		for (int l20 = 0; l20 < 64; l20 = l20 + 1) {
			fVec12[l20] = 0.0f;
		}
		for (int l21 = 0; l21 < 128; l21 = l21 + 1) {
			fVec13[l21] = 0.0f;
		}
		for (int l22 = 0; l22 < 256; l22 = l22 + 1) {
			fVec14[l22] = 0.0f;
		}
		for (int l23 = 0; l23 < 512; l23 = l23 + 1) {
			fVec15[l23] = 0.0f;
		}
		for (int l24 = 0; l24 < 1024; l24 = l24 + 1) {
			fVec16[l24] = 0.0f;
		}
		for (int l25 = 0; l25 < 2048; l25 = l25 + 1) {
			fVec17[l25] = 0.0f;
		}
		for (int l26 = 0; l26 < 2; l26 = l26 + 1) {
			fVec18[l26] = 0.0f;
		}
		for (int l27 = 0; l27 < 2; l27 = l27 + 1) {
			fRec26[l27] = 0.0f;
		}
		for (int l28 = 0; l28 < 2; l28 = l28 + 1) {
			fRec25[l28] = 0.0f;
		}
		for (int l29 = 0; l29 < 2; l29 = l29 + 1) {
			fVec19[l29] = 0.0f;
		}
		for (int l30 = 0; l30 < 2; l30 = l30 + 1) {
			fRec24[l30] = 0.0f;
		}
		for (int l31 = 0; l31 < 2; l31 = l31 + 1) {
			fRec23[l31] = 0.0f;
		}
		for (int l32 = 0; l32 < 2; l32 = l32 + 1) {
			fVec20[l32] = 0.0f;
		}
		for (int l33 = 0; l33 < 3; l33 = l33 + 1) {
			fVec21[l33] = 0.0f;
		}
		for (int l34 = 0; l34 < 7; l34 = l34 + 1) {
			fVec22[l34] = 0.0f;
		}
		for (int l35 = 0; l35 < 15; l35 = l35 + 1) {
			fVec23[l35] = 0.0f;
		}
		for (int l36 = 0; l36 < 32; l36 = l36 + 1) {
			fVec24[l36] = 0.0f;
		}
		for (int l37 = 0; l37 < 64; l37 = l37 + 1) {
			fVec25[l37] = 0.0f;
		}
		for (int l38 = 0; l38 < 128; l38 = l38 + 1) {
			fVec26[l38] = 0.0f;
		}
		for (int l39 = 0; l39 < 256; l39 = l39 + 1) {
			fVec27[l39] = 0.0f;
		}
		for (int l40 = 0; l40 < 512; l40 = l40 + 1) {
			fVec28[l40] = 0.0f;
		}
		for (int l41 = 0; l41 < 1024; l41 = l41 + 1) {
			fVec29[l41] = 0.0f;
		}
		for (int l42 = 0; l42 < 2048; l42 = l42 + 1) {
			fVec30[l42] = 0.0f;
		}
		for (int l43 = 0; l43 < 2; l43 = l43 + 1) {
			fRec13[l43] = 0.0f;
		}
		for (int l44 = 0; l44 < 2; l44 = l44 + 1) {
			fRec14[l44] = 0.0f;
		}
		for (int l45 = 0; l45 < 2; l45 = l45 + 1) {
			fRec11[l45] = 0.0f;
		}
		for (int l46 = 0; l46 < 2; l46 = l46 + 1) {
			fRec10[l46] = 0.0f;
		}
		for (int l47 = 0; l47 < 2; l47 = l47 + 1) {
			fRec27[l47] = 0.0f;
		}
		for (int l48 = 0; l48 < 2; l48 = l48 + 1) {
			fRec28[l48] = 0.0f;
		}
		for (int l49 = 0; l49 < 2; l49 = l49 + 1) {
			fRec29[l49] = 0.0f;
		}
		for (int l50 = 0; l50 < 3; l50 = l50 + 1) {
			fRec31[l50] = 0.0f;
		}
		for (int l51 = 0; l51 < 3; l51 = l51 + 1) {
			fRec30[l51] = 0.0f;
		}
		for (int l52 = 0; l52 < 2; l52 = l52 + 1) {
			fRec37[l52] = 0.0f;
		}
		for (int l53 = 0; l53 < 3; l53 = l53 + 1) {
			fRec39[l53] = 0.0f;
		}
		for (int l54 = 0; l54 < 3; l54 = l54 + 1) {
			fRec38[l54] = 0.0f;
		}
		for (int l55 = 0; l55 < 2; l55 = l55 + 1) {
			fVec31[l55] = 0.0f;
		}
		for (int l56 = 0; l56 < 3; l56 = l56 + 1) {
			fRec36[l56] = 0.0f;
		}
		for (int l57 = 0; l57 < 32768; l57 = l57 + 1) {
			fVec32[l57] = 0.0f;
		}
		for (int l58 = 0; l58 < 2; l58 = l58 + 1) {
			fVec33[l58] = 0.0f;
		}
		for (int l59 = 0; l59 < 2; l59 = l59 + 1) {
			fRec35[l59] = 0.0f;
		}
		for (int l60 = 0; l60 < 2; l60 = l60 + 1) {
			fRec34[l60] = 0.0f;
		}
		for (int l61 = 0; l61 < 2; l61 = l61 + 1) {
			fVec34[l61] = 0.0f;
		}
		for (int l62 = 0; l62 < 2; l62 = l62 + 1) {
			fRec33[l62] = 0.0f;
		}
		for (int l63 = 0; l63 < 2; l63 = l63 + 1) {
			fRec32[l63] = 0.0f;
		}
		for (int l64 = 0; l64 < 2; l64 = l64 + 1) {
			fVec35[l64] = 0.0f;
		}
		for (int l65 = 0; l65 < 3; l65 = l65 + 1) {
			fVec36[l65] = 0.0f;
		}
		for (int l66 = 0; l66 < 7; l66 = l66 + 1) {
			fVec37[l66] = 0.0f;
		}
		for (int l67 = 0; l67 < 15; l67 = l67 + 1) {
			fVec38[l67] = 0.0f;
		}
		for (int l68 = 0; l68 < 32; l68 = l68 + 1) {
			fVec39[l68] = 0.0f;
		}
		for (int l69 = 0; l69 < 64; l69 = l69 + 1) {
			fVec40[l69] = 0.0f;
		}
		for (int l70 = 0; l70 < 128; l70 = l70 + 1) {
			fVec41[l70] = 0.0f;
		}
		for (int l71 = 0; l71 < 256; l71 = l71 + 1) {
			fVec42[l71] = 0.0f;
		}
		for (int l72 = 0; l72 < 512; l72 = l72 + 1) {
			fVec43[l72] = 0.0f;
		}
		for (int l73 = 0; l73 < 1024; l73 = l73 + 1) {
			fVec44[l73] = 0.0f;
		}
		for (int l74 = 0; l74 < 2048; l74 = l74 + 1) {
			fVec45[l74] = 0.0f;
		}
		for (int l75 = 0; l75 < 4096; l75 = l75 + 1) {
			fVec46[l75] = 0.0f;
		}
		for (int l76 = 0; l76 < 8192; l76 = l76 + 1) {
			fVec47[l76] = 0.0f;
		}
		for (int l77 = 0; l77 < 16384; l77 = l77 + 1) {
			fVec48[l77] = 0.0f;
		}
		for (int l78 = 0; l78 < 32768; l78 = l78 + 1) {
			fVec49[l78] = 0.0f;
		}
		for (int l79 = 0; l79 < 65536; l79 = l79 + 1) {
			fVec50[l79] = 0.0f;
		}
		for (int l80 = 0; l80 < 131072; l80 = l80 + 1) {
			fVec51[l80] = 0.0f;
		}
		for (int l81 = 0; l81 < 262144; l81 = l81 + 1) {
			fVec52[l81] = 0.0f;
		}
		for (int l82 = 0; l82 < 2; l82 = l82 + 1) {
			fVec53[l82] = 0.0f;
		}
		for (int l83 = 0; l83 < 2; l83 = l83 + 1) {
			fRec43[l83] = 0.0f;
		}
		for (int l84 = 0; l84 < 2; l84 = l84 + 1) {
			fRec42[l84] = 0.0f;
		}
		for (int l85 = 0; l85 < 2; l85 = l85 + 1) {
			fVec54[l85] = 0.0f;
		}
		for (int l86 = 0; l86 < 2; l86 = l86 + 1) {
			fRec41[l86] = 0.0f;
		}
		for (int l87 = 0; l87 < 2; l87 = l87 + 1) {
			fRec40[l87] = 0.0f;
		}
		for (int l88 = 0; l88 < 2; l88 = l88 + 1) {
			fVec55[l88] = 0.0f;
		}
		for (int l89 = 0; l89 < 3; l89 = l89 + 1) {
			fVec56[l89] = 0.0f;
		}
		for (int l90 = 0; l90 < 7; l90 = l90 + 1) {
			fVec57[l90] = 0.0f;
		}
		for (int l91 = 0; l91 < 15; l91 = l91 + 1) {
			fVec58[l91] = 0.0f;
		}
		for (int l92 = 0; l92 < 32; l92 = l92 + 1) {
			fVec59[l92] = 0.0f;
		}
		for (int l93 = 0; l93 < 64; l93 = l93 + 1) {
			fVec60[l93] = 0.0f;
		}
		for (int l94 = 0; l94 < 128; l94 = l94 + 1) {
			fVec61[l94] = 0.0f;
		}
		for (int l95 = 0; l95 < 256; l95 = l95 + 1) {
			fVec62[l95] = 0.0f;
		}
		for (int l96 = 0; l96 < 512; l96 = l96 + 1) {
			fVec63[l96] = 0.0f;
		}
		for (int l97 = 0; l97 < 1024; l97 = l97 + 1) {
			fVec64[l97] = 0.0f;
		}
		for (int l98 = 0; l98 < 2048; l98 = l98 + 1) {
			fVec65[l98] = 0.0f;
		}
		for (int l99 = 0; l99 < 4096; l99 = l99 + 1) {
			fVec66[l99] = 0.0f;
		}
		for (int l100 = 0; l100 < 8192; l100 = l100 + 1) {
			fVec67[l100] = 0.0f;
		}
		for (int l101 = 0; l101 < 16384; l101 = l101 + 1) {
			fVec68[l101] = 0.0f;
		}
		for (int l102 = 0; l102 < 32768; l102 = l102 + 1) {
			fVec69[l102] = 0.0f;
		}
		for (int l103 = 0; l103 < 65536; l103 = l103 + 1) {
			fVec70[l103] = 0.0f;
		}
		for (int l104 = 0; l104 < 131072; l104 = l104 + 1) {
			fVec71[l104] = 0.0f;
		}
		for (int l105 = 0; l105 < 262144; l105 = l105 + 1) {
			fVec72[l105] = 0.0f;
		}
		for (int l106 = 0; l106 < 2; l106 = l106 + 1) {
			fVec73[l106] = 0.0f;
		}
		for (int l107 = 0; l107 < 3; l107 = l107 + 1) {
			fVec74[l107] = 0.0f;
		}
		for (int l108 = 0; l108 < 7; l108 = l108 + 1) {
			fVec75[l108] = 0.0f;
		}
		for (int l109 = 0; l109 < 15; l109 = l109 + 1) {
			fVec76[l109] = 0.0f;
		}
		for (int l110 = 0; l110 < 32; l110 = l110 + 1) {
			fVec77[l110] = 0.0f;
		}
		for (int l111 = 0; l111 < 64; l111 = l111 + 1) {
			fVec78[l111] = 0.0f;
		}
		for (int l112 = 0; l112 < 128; l112 = l112 + 1) {
			fVec79[l112] = 0.0f;
		}
		for (int l113 = 0; l113 < 256; l113 = l113 + 1) {
			fVec80[l113] = 0.0f;
		}
		for (int l114 = 0; l114 < 2; l114 = l114 + 1) {
			fRec44[l114] = 0.0f;
		}
		for (int l115 = 0; l115 < 3; l115 = l115 + 1) {
			fRec49[l115] = 0.0f;
		}
		for (int l116 = 0; l116 < 32768; l116 = l116 + 1) {
			fVec81[l116] = 0.0f;
		}
		for (int l117 = 0; l117 < 2; l117 = l117 + 1) {
			fVec82[l117] = 0.0f;
		}
		for (int l118 = 0; l118 < 2; l118 = l118 + 1) {
			fRec48[l118] = 0.0f;
		}
		for (int l119 = 0; l119 < 2; l119 = l119 + 1) {
			fRec47[l119] = 0.0f;
		}
		for (int l120 = 0; l120 < 2; l120 = l120 + 1) {
			fVec83[l120] = 0.0f;
		}
		for (int l121 = 0; l121 < 2; l121 = l121 + 1) {
			fRec46[l121] = 0.0f;
		}
		for (int l122 = 0; l122 < 2; l122 = l122 + 1) {
			fRec45[l122] = 0.0f;
		}
		for (int l123 = 0; l123 < 2; l123 = l123 + 1) {
			fVec84[l123] = 0.0f;
		}
		for (int l124 = 0; l124 < 3; l124 = l124 + 1) {
			fVec85[l124] = 0.0f;
		}
		for (int l125 = 0; l125 < 7; l125 = l125 + 1) {
			fVec86[l125] = 0.0f;
		}
		for (int l126 = 0; l126 < 15; l126 = l126 + 1) {
			fVec87[l126] = 0.0f;
		}
		for (int l127 = 0; l127 < 32; l127 = l127 + 1) {
			fVec88[l127] = 0.0f;
		}
		for (int l128 = 0; l128 < 64; l128 = l128 + 1) {
			fVec89[l128] = 0.0f;
		}
		for (int l129 = 0; l129 < 128; l129 = l129 + 1) {
			fVec90[l129] = 0.0f;
		}
		for (int l130 = 0; l130 < 256; l130 = l130 + 1) {
			fVec91[l130] = 0.0f;
		}
		for (int l131 = 0; l131 < 512; l131 = l131 + 1) {
			fVec92[l131] = 0.0f;
		}
		for (int l132 = 0; l132 < 1024; l132 = l132 + 1) {
			fVec93[l132] = 0.0f;
		}
		for (int l133 = 0; l133 < 2048; l133 = l133 + 1) {
			fVec94[l133] = 0.0f;
		}
		for (int l134 = 0; l134 < 4096; l134 = l134 + 1) {
			fVec95[l134] = 0.0f;
		}
		for (int l135 = 0; l135 < 8192; l135 = l135 + 1) {
			fVec96[l135] = 0.0f;
		}
		for (int l136 = 0; l136 < 16384; l136 = l136 + 1) {
			fVec97[l136] = 0.0f;
		}
		for (int l137 = 0; l137 < 32768; l137 = l137 + 1) {
			fVec98[l137] = 0.0f;
		}
		for (int l138 = 0; l138 < 65536; l138 = l138 + 1) {
			fVec99[l138] = 0.0f;
		}
		for (int l139 = 0; l139 < 131072; l139 = l139 + 1) {
			fVec100[l139] = 0.0f;
		}
		for (int l140 = 0; l140 < 262144; l140 = l140 + 1) {
			fVec101[l140] = 0.0f;
		}
		for (int l141 = 0; l141 < 3; l141 = l141 + 1) {
			fRec54[l141] = 0.0f;
		}
		for (int l142 = 0; l142 < 32768; l142 = l142 + 1) {
			fVec102[l142] = 0.0f;
		}
		for (int l143 = 0; l143 < 2; l143 = l143 + 1) {
			fVec103[l143] = 0.0f;
		}
		for (int l144 = 0; l144 < 2; l144 = l144 + 1) {
			fRec53[l144] = 0.0f;
		}
		for (int l145 = 0; l145 < 2; l145 = l145 + 1) {
			fRec52[l145] = 0.0f;
		}
		for (int l146 = 0; l146 < 2; l146 = l146 + 1) {
			fVec104[l146] = 0.0f;
		}
		for (int l147 = 0; l147 < 2; l147 = l147 + 1) {
			fRec51[l147] = 0.0f;
		}
		for (int l148 = 0; l148 < 2; l148 = l148 + 1) {
			fRec50[l148] = 0.0f;
		}
		for (int l149 = 0; l149 < 2; l149 = l149 + 1) {
			fVec105[l149] = 0.0f;
		}
		for (int l150 = 0; l150 < 3; l150 = l150 + 1) {
			fVec106[l150] = 0.0f;
		}
		for (int l151 = 0; l151 < 7; l151 = l151 + 1) {
			fVec107[l151] = 0.0f;
		}
		for (int l152 = 0; l152 < 15; l152 = l152 + 1) {
			fVec108[l152] = 0.0f;
		}
		for (int l153 = 0; l153 < 32; l153 = l153 + 1) {
			fVec109[l153] = 0.0f;
		}
		for (int l154 = 0; l154 < 64; l154 = l154 + 1) {
			fVec110[l154] = 0.0f;
		}
		for (int l155 = 0; l155 < 128; l155 = l155 + 1) {
			fVec111[l155] = 0.0f;
		}
		for (int l156 = 0; l156 < 256; l156 = l156 + 1) {
			fVec112[l156] = 0.0f;
		}
		for (int l157 = 0; l157 < 512; l157 = l157 + 1) {
			fVec113[l157] = 0.0f;
		}
		for (int l158 = 0; l158 < 1024; l158 = l158 + 1) {
			fVec114[l158] = 0.0f;
		}
		for (int l159 = 0; l159 < 2048; l159 = l159 + 1) {
			fVec115[l159] = 0.0f;
		}
		for (int l160 = 0; l160 < 4096; l160 = l160 + 1) {
			fVec116[l160] = 0.0f;
		}
		for (int l161 = 0; l161 < 8192; l161 = l161 + 1) {
			fVec117[l161] = 0.0f;
		}
		for (int l162 = 0; l162 < 16384; l162 = l162 + 1) {
			fVec118[l162] = 0.0f;
		}
		for (int l163 = 0; l163 < 32768; l163 = l163 + 1) {
			fVec119[l163] = 0.0f;
		}
		for (int l164 = 0; l164 < 65536; l164 = l164 + 1) {
			fVec120[l164] = 0.0f;
		}
		for (int l165 = 0; l165 < 131072; l165 = l165 + 1) {
			fVec121[l165] = 0.0f;
		}
		for (int l166 = 0; l166 < 262144; l166 = l166 + 1) {
			fVec122[l166] = 0.0f;
		}
		for (int l167 = 0; l167 < 3; l167 = l167 + 1) {
			fRec59[l167] = 0.0f;
		}
		for (int l168 = 0; l168 < 32768; l168 = l168 + 1) {
			fVec123[l168] = 0.0f;
		}
		for (int l169 = 0; l169 < 2; l169 = l169 + 1) {
			fVec124[l169] = 0.0f;
		}
		for (int l170 = 0; l170 < 2; l170 = l170 + 1) {
			fRec58[l170] = 0.0f;
		}
		for (int l171 = 0; l171 < 2; l171 = l171 + 1) {
			fRec57[l171] = 0.0f;
		}
		for (int l172 = 0; l172 < 2; l172 = l172 + 1) {
			fVec125[l172] = 0.0f;
		}
		for (int l173 = 0; l173 < 2; l173 = l173 + 1) {
			fRec56[l173] = 0.0f;
		}
		for (int l174 = 0; l174 < 2; l174 = l174 + 1) {
			fRec55[l174] = 0.0f;
		}
		for (int l175 = 0; l175 < 2; l175 = l175 + 1) {
			fVec126[l175] = 0.0f;
		}
		for (int l176 = 0; l176 < 3; l176 = l176 + 1) {
			fVec127[l176] = 0.0f;
		}
		for (int l177 = 0; l177 < 7; l177 = l177 + 1) {
			fVec128[l177] = 0.0f;
		}
		for (int l178 = 0; l178 < 15; l178 = l178 + 1) {
			fVec129[l178] = 0.0f;
		}
		for (int l179 = 0; l179 < 32; l179 = l179 + 1) {
			fVec130[l179] = 0.0f;
		}
		for (int l180 = 0; l180 < 64; l180 = l180 + 1) {
			fVec131[l180] = 0.0f;
		}
		for (int l181 = 0; l181 < 128; l181 = l181 + 1) {
			fVec132[l181] = 0.0f;
		}
		for (int l182 = 0; l182 < 256; l182 = l182 + 1) {
			fVec133[l182] = 0.0f;
		}
		for (int l183 = 0; l183 < 512; l183 = l183 + 1) {
			fVec134[l183] = 0.0f;
		}
		for (int l184 = 0; l184 < 1024; l184 = l184 + 1) {
			fVec135[l184] = 0.0f;
		}
		for (int l185 = 0; l185 < 2048; l185 = l185 + 1) {
			fVec136[l185] = 0.0f;
		}
		for (int l186 = 0; l186 < 4096; l186 = l186 + 1) {
			fVec137[l186] = 0.0f;
		}
		for (int l187 = 0; l187 < 8192; l187 = l187 + 1) {
			fVec138[l187] = 0.0f;
		}
		for (int l188 = 0; l188 < 16384; l188 = l188 + 1) {
			fVec139[l188] = 0.0f;
		}
		for (int l189 = 0; l189 < 32768; l189 = l189 + 1) {
			fVec140[l189] = 0.0f;
		}
		for (int l190 = 0; l190 < 65536; l190 = l190 + 1) {
			fVec141[l190] = 0.0f;
		}
		for (int l191 = 0; l191 < 131072; l191 = l191 + 1) {
			fVec142[l191] = 0.0f;
		}
		for (int l192 = 0; l192 < 262144; l192 = l192 + 1) {
			fVec143[l192] = 0.0f;
		}
		for (int l193 = 0; l193 < 3; l193 = l193 + 1) {
			fRec64[l193] = 0.0f;
		}
		for (int l194 = 0; l194 < 32768; l194 = l194 + 1) {
			fVec144[l194] = 0.0f;
		}
		for (int l195 = 0; l195 < 2; l195 = l195 + 1) {
			fVec145[l195] = 0.0f;
		}
		for (int l196 = 0; l196 < 2; l196 = l196 + 1) {
			fRec63[l196] = 0.0f;
		}
		for (int l197 = 0; l197 < 2; l197 = l197 + 1) {
			fRec62[l197] = 0.0f;
		}
		for (int l198 = 0; l198 < 2; l198 = l198 + 1) {
			fVec146[l198] = 0.0f;
		}
		for (int l199 = 0; l199 < 2; l199 = l199 + 1) {
			fRec61[l199] = 0.0f;
		}
		for (int l200 = 0; l200 < 2; l200 = l200 + 1) {
			fRec60[l200] = 0.0f;
		}
		for (int l201 = 0; l201 < 2; l201 = l201 + 1) {
			fVec147[l201] = 0.0f;
		}
		for (int l202 = 0; l202 < 3; l202 = l202 + 1) {
			fVec148[l202] = 0.0f;
		}
		for (int l203 = 0; l203 < 7; l203 = l203 + 1) {
			fVec149[l203] = 0.0f;
		}
		for (int l204 = 0; l204 < 15; l204 = l204 + 1) {
			fVec150[l204] = 0.0f;
		}
		for (int l205 = 0; l205 < 32; l205 = l205 + 1) {
			fVec151[l205] = 0.0f;
		}
		for (int l206 = 0; l206 < 64; l206 = l206 + 1) {
			fVec152[l206] = 0.0f;
		}
		for (int l207 = 0; l207 < 128; l207 = l207 + 1) {
			fVec153[l207] = 0.0f;
		}
		for (int l208 = 0; l208 < 256; l208 = l208 + 1) {
			fVec154[l208] = 0.0f;
		}
		for (int l209 = 0; l209 < 512; l209 = l209 + 1) {
			fVec155[l209] = 0.0f;
		}
		for (int l210 = 0; l210 < 1024; l210 = l210 + 1) {
			fVec156[l210] = 0.0f;
		}
		for (int l211 = 0; l211 < 2048; l211 = l211 + 1) {
			fVec157[l211] = 0.0f;
		}
		for (int l212 = 0; l212 < 4096; l212 = l212 + 1) {
			fVec158[l212] = 0.0f;
		}
		for (int l213 = 0; l213 < 8192; l213 = l213 + 1) {
			fVec159[l213] = 0.0f;
		}
		for (int l214 = 0; l214 < 16384; l214 = l214 + 1) {
			fVec160[l214] = 0.0f;
		}
		for (int l215 = 0; l215 < 32768; l215 = l215 + 1) {
			fVec161[l215] = 0.0f;
		}
		for (int l216 = 0; l216 < 65536; l216 = l216 + 1) {
			fVec162[l216] = 0.0f;
		}
		for (int l217 = 0; l217 < 131072; l217 = l217 + 1) {
			fVec163[l217] = 0.0f;
		}
		for (int l218 = 0; l218 < 262144; l218 = l218 + 1) {
			fVec164[l218] = 0.0f;
		}
		for (int l219 = 0; l219 < 3; l219 = l219 + 1) {
			fRec69[l219] = 0.0f;
		}
		for (int l220 = 0; l220 < 32768; l220 = l220 + 1) {
			fVec165[l220] = 0.0f;
		}
		for (int l221 = 0; l221 < 2; l221 = l221 + 1) {
			fVec166[l221] = 0.0f;
		}
		for (int l222 = 0; l222 < 2; l222 = l222 + 1) {
			fRec68[l222] = 0.0f;
		}
		for (int l223 = 0; l223 < 2; l223 = l223 + 1) {
			fRec67[l223] = 0.0f;
		}
		for (int l224 = 0; l224 < 2; l224 = l224 + 1) {
			fVec167[l224] = 0.0f;
		}
		for (int l225 = 0; l225 < 2; l225 = l225 + 1) {
			fRec66[l225] = 0.0f;
		}
		for (int l226 = 0; l226 < 2; l226 = l226 + 1) {
			fRec65[l226] = 0.0f;
		}
		for (int l227 = 0; l227 < 2; l227 = l227 + 1) {
			fVec168[l227] = 0.0f;
		}
		for (int l228 = 0; l228 < 3; l228 = l228 + 1) {
			fVec169[l228] = 0.0f;
		}
		for (int l229 = 0; l229 < 7; l229 = l229 + 1) {
			fVec170[l229] = 0.0f;
		}
		for (int l230 = 0; l230 < 15; l230 = l230 + 1) {
			fVec171[l230] = 0.0f;
		}
		for (int l231 = 0; l231 < 32; l231 = l231 + 1) {
			fVec172[l231] = 0.0f;
		}
		for (int l232 = 0; l232 < 64; l232 = l232 + 1) {
			fVec173[l232] = 0.0f;
		}
		for (int l233 = 0; l233 < 128; l233 = l233 + 1) {
			fVec174[l233] = 0.0f;
		}
		for (int l234 = 0; l234 < 256; l234 = l234 + 1) {
			fVec175[l234] = 0.0f;
		}
		for (int l235 = 0; l235 < 512; l235 = l235 + 1) {
			fVec176[l235] = 0.0f;
		}
		for (int l236 = 0; l236 < 1024; l236 = l236 + 1) {
			fVec177[l236] = 0.0f;
		}
		for (int l237 = 0; l237 < 2048; l237 = l237 + 1) {
			fVec178[l237] = 0.0f;
		}
		for (int l238 = 0; l238 < 4096; l238 = l238 + 1) {
			fVec179[l238] = 0.0f;
		}
		for (int l239 = 0; l239 < 8192; l239 = l239 + 1) {
			fVec180[l239] = 0.0f;
		}
		for (int l240 = 0; l240 < 16384; l240 = l240 + 1) {
			fVec181[l240] = 0.0f;
		}
		for (int l241 = 0; l241 < 32768; l241 = l241 + 1) {
			fVec182[l241] = 0.0f;
		}
		for (int l242 = 0; l242 < 65536; l242 = l242 + 1) {
			fVec183[l242] = 0.0f;
		}
		for (int l243 = 0; l243 < 131072; l243 = l243 + 1) {
			fVec184[l243] = 0.0f;
		}
		for (int l244 = 0; l244 < 262144; l244 = l244 + 1) {
			fVec185[l244] = 0.0f;
		}
		for (int l245 = 0; l245 < 3; l245 = l245 + 1) {
			fRec74[l245] = 0.0f;
		}
		for (int l246 = 0; l246 < 32768; l246 = l246 + 1) {
			fVec186[l246] = 0.0f;
		}
		for (int l247 = 0; l247 < 2; l247 = l247 + 1) {
			fVec187[l247] = 0.0f;
		}
		for (int l248 = 0; l248 < 2; l248 = l248 + 1) {
			fRec73[l248] = 0.0f;
		}
		for (int l249 = 0; l249 < 2; l249 = l249 + 1) {
			fRec72[l249] = 0.0f;
		}
		for (int l250 = 0; l250 < 2; l250 = l250 + 1) {
			fVec188[l250] = 0.0f;
		}
		for (int l251 = 0; l251 < 2; l251 = l251 + 1) {
			fRec71[l251] = 0.0f;
		}
		for (int l252 = 0; l252 < 2; l252 = l252 + 1) {
			fRec70[l252] = 0.0f;
		}
		for (int l253 = 0; l253 < 2; l253 = l253 + 1) {
			fVec189[l253] = 0.0f;
		}
		for (int l254 = 0; l254 < 3; l254 = l254 + 1) {
			fVec190[l254] = 0.0f;
		}
		for (int l255 = 0; l255 < 7; l255 = l255 + 1) {
			fVec191[l255] = 0.0f;
		}
		for (int l256 = 0; l256 < 15; l256 = l256 + 1) {
			fVec192[l256] = 0.0f;
		}
		for (int l257 = 0; l257 < 32; l257 = l257 + 1) {
			fVec193[l257] = 0.0f;
		}
		for (int l258 = 0; l258 < 64; l258 = l258 + 1) {
			fVec194[l258] = 0.0f;
		}
		for (int l259 = 0; l259 < 128; l259 = l259 + 1) {
			fVec195[l259] = 0.0f;
		}
		for (int l260 = 0; l260 < 256; l260 = l260 + 1) {
			fVec196[l260] = 0.0f;
		}
		for (int l261 = 0; l261 < 512; l261 = l261 + 1) {
			fVec197[l261] = 0.0f;
		}
		for (int l262 = 0; l262 < 1024; l262 = l262 + 1) {
			fVec198[l262] = 0.0f;
		}
		for (int l263 = 0; l263 < 2048; l263 = l263 + 1) {
			fVec199[l263] = 0.0f;
		}
		for (int l264 = 0; l264 < 4096; l264 = l264 + 1) {
			fVec200[l264] = 0.0f;
		}
		for (int l265 = 0; l265 < 8192; l265 = l265 + 1) {
			fVec201[l265] = 0.0f;
		}
		for (int l266 = 0; l266 < 16384; l266 = l266 + 1) {
			fVec202[l266] = 0.0f;
		}
		for (int l267 = 0; l267 < 32768; l267 = l267 + 1) {
			fVec203[l267] = 0.0f;
		}
		for (int l268 = 0; l268 < 65536; l268 = l268 + 1) {
			fVec204[l268] = 0.0f;
		}
		for (int l269 = 0; l269 < 131072; l269 = l269 + 1) {
			fVec205[l269] = 0.0f;
		}
		for (int l270 = 0; l270 < 262144; l270 = l270 + 1) {
			fVec206[l270] = 0.0f;
		}
		for (int l271 = 0; l271 < 3; l271 = l271 + 1) {
			fRec79[l271] = 0.0f;
		}
		for (int l272 = 0; l272 < 32768; l272 = l272 + 1) {
			fVec207[l272] = 0.0f;
		}
		for (int l273 = 0; l273 < 2; l273 = l273 + 1) {
			fVec208[l273] = 0.0f;
		}
		for (int l274 = 0; l274 < 2; l274 = l274 + 1) {
			fRec78[l274] = 0.0f;
		}
		for (int l275 = 0; l275 < 2; l275 = l275 + 1) {
			fRec77[l275] = 0.0f;
		}
		for (int l276 = 0; l276 < 2; l276 = l276 + 1) {
			fVec209[l276] = 0.0f;
		}
		for (int l277 = 0; l277 < 2; l277 = l277 + 1) {
			fRec76[l277] = 0.0f;
		}
		for (int l278 = 0; l278 < 2; l278 = l278 + 1) {
			fRec75[l278] = 0.0f;
		}
		for (int l279 = 0; l279 < 2; l279 = l279 + 1) {
			fVec210[l279] = 0.0f;
		}
		for (int l280 = 0; l280 < 3; l280 = l280 + 1) {
			fVec211[l280] = 0.0f;
		}
		for (int l281 = 0; l281 < 7; l281 = l281 + 1) {
			fVec212[l281] = 0.0f;
		}
		for (int l282 = 0; l282 < 15; l282 = l282 + 1) {
			fVec213[l282] = 0.0f;
		}
		for (int l283 = 0; l283 < 32; l283 = l283 + 1) {
			fVec214[l283] = 0.0f;
		}
		for (int l284 = 0; l284 < 64; l284 = l284 + 1) {
			fVec215[l284] = 0.0f;
		}
		for (int l285 = 0; l285 < 128; l285 = l285 + 1) {
			fVec216[l285] = 0.0f;
		}
		for (int l286 = 0; l286 < 256; l286 = l286 + 1) {
			fVec217[l286] = 0.0f;
		}
		for (int l287 = 0; l287 < 512; l287 = l287 + 1) {
			fVec218[l287] = 0.0f;
		}
		for (int l288 = 0; l288 < 1024; l288 = l288 + 1) {
			fVec219[l288] = 0.0f;
		}
		for (int l289 = 0; l289 < 2048; l289 = l289 + 1) {
			fVec220[l289] = 0.0f;
		}
		for (int l290 = 0; l290 < 4096; l290 = l290 + 1) {
			fVec221[l290] = 0.0f;
		}
		for (int l291 = 0; l291 < 8192; l291 = l291 + 1) {
			fVec222[l291] = 0.0f;
		}
		for (int l292 = 0; l292 < 16384; l292 = l292 + 1) {
			fVec223[l292] = 0.0f;
		}
		for (int l293 = 0; l293 < 32768; l293 = l293 + 1) {
			fVec224[l293] = 0.0f;
		}
		for (int l294 = 0; l294 < 65536; l294 = l294 + 1) {
			fVec225[l294] = 0.0f;
		}
		for (int l295 = 0; l295 < 131072; l295 = l295 + 1) {
			fVec226[l295] = 0.0f;
		}
		for (int l296 = 0; l296 < 262144; l296 = l296 + 1) {
			fVec227[l296] = 0.0f;
		}
		for (int l297 = 0; l297 < 3; l297 = l297 + 1) {
			fRec84[l297] = 0.0f;
		}
		for (int l298 = 0; l298 < 32768; l298 = l298 + 1) {
			fVec228[l298] = 0.0f;
		}
		for (int l299 = 0; l299 < 2; l299 = l299 + 1) {
			fVec229[l299] = 0.0f;
		}
		for (int l300 = 0; l300 < 2; l300 = l300 + 1) {
			fRec83[l300] = 0.0f;
		}
		for (int l301 = 0; l301 < 2; l301 = l301 + 1) {
			fRec82[l301] = 0.0f;
		}
		for (int l302 = 0; l302 < 2; l302 = l302 + 1) {
			fVec230[l302] = 0.0f;
		}
		for (int l303 = 0; l303 < 2; l303 = l303 + 1) {
			fRec81[l303] = 0.0f;
		}
		for (int l304 = 0; l304 < 2; l304 = l304 + 1) {
			fRec80[l304] = 0.0f;
		}
		for (int l305 = 0; l305 < 2; l305 = l305 + 1) {
			fVec231[l305] = 0.0f;
		}
		for (int l306 = 0; l306 < 3; l306 = l306 + 1) {
			fVec232[l306] = 0.0f;
		}
		for (int l307 = 0; l307 < 7; l307 = l307 + 1) {
			fVec233[l307] = 0.0f;
		}
		for (int l308 = 0; l308 < 15; l308 = l308 + 1) {
			fVec234[l308] = 0.0f;
		}
		for (int l309 = 0; l309 < 32; l309 = l309 + 1) {
			fVec235[l309] = 0.0f;
		}
		for (int l310 = 0; l310 < 64; l310 = l310 + 1) {
			fVec236[l310] = 0.0f;
		}
		for (int l311 = 0; l311 < 128; l311 = l311 + 1) {
			fVec237[l311] = 0.0f;
		}
		for (int l312 = 0; l312 < 256; l312 = l312 + 1) {
			fVec238[l312] = 0.0f;
		}
		for (int l313 = 0; l313 < 512; l313 = l313 + 1) {
			fVec239[l313] = 0.0f;
		}
		for (int l314 = 0; l314 < 1024; l314 = l314 + 1) {
			fVec240[l314] = 0.0f;
		}
		for (int l315 = 0; l315 < 2048; l315 = l315 + 1) {
			fVec241[l315] = 0.0f;
		}
		for (int l316 = 0; l316 < 4096; l316 = l316 + 1) {
			fVec242[l316] = 0.0f;
		}
		for (int l317 = 0; l317 < 8192; l317 = l317 + 1) {
			fVec243[l317] = 0.0f;
		}
		for (int l318 = 0; l318 < 16384; l318 = l318 + 1) {
			fVec244[l318] = 0.0f;
		}
		for (int l319 = 0; l319 < 32768; l319 = l319 + 1) {
			fVec245[l319] = 0.0f;
		}
		for (int l320 = 0; l320 < 65536; l320 = l320 + 1) {
			fVec246[l320] = 0.0f;
		}
		for (int l321 = 0; l321 < 131072; l321 = l321 + 1) {
			fVec247[l321] = 0.0f;
		}
		for (int l322 = 0; l322 < 262144; l322 = l322 + 1) {
			fVec248[l322] = 0.0f;
		}
		for (int l323 = 0; l323 < 3; l323 = l323 + 1) {
			fRec89[l323] = 0.0f;
		}
		for (int l324 = 0; l324 < 32768; l324 = l324 + 1) {
			fVec249[l324] = 0.0f;
		}
		for (int l325 = 0; l325 < 2; l325 = l325 + 1) {
			fVec250[l325] = 0.0f;
		}
		for (int l326 = 0; l326 < 2; l326 = l326 + 1) {
			fRec88[l326] = 0.0f;
		}
		for (int l327 = 0; l327 < 2; l327 = l327 + 1) {
			fRec87[l327] = 0.0f;
		}
		for (int l328 = 0; l328 < 2; l328 = l328 + 1) {
			fVec251[l328] = 0.0f;
		}
		for (int l329 = 0; l329 < 2; l329 = l329 + 1) {
			fRec86[l329] = 0.0f;
		}
		for (int l330 = 0; l330 < 2; l330 = l330 + 1) {
			fRec85[l330] = 0.0f;
		}
		for (int l331 = 0; l331 < 2; l331 = l331 + 1) {
			fVec252[l331] = 0.0f;
		}
		for (int l332 = 0; l332 < 3; l332 = l332 + 1) {
			fVec253[l332] = 0.0f;
		}
		for (int l333 = 0; l333 < 7; l333 = l333 + 1) {
			fVec254[l333] = 0.0f;
		}
		for (int l334 = 0; l334 < 15; l334 = l334 + 1) {
			fVec255[l334] = 0.0f;
		}
		for (int l335 = 0; l335 < 32; l335 = l335 + 1) {
			fVec256[l335] = 0.0f;
		}
		for (int l336 = 0; l336 < 64; l336 = l336 + 1) {
			fVec257[l336] = 0.0f;
		}
		for (int l337 = 0; l337 < 128; l337 = l337 + 1) {
			fVec258[l337] = 0.0f;
		}
		for (int l338 = 0; l338 < 256; l338 = l338 + 1) {
			fVec259[l338] = 0.0f;
		}
		for (int l339 = 0; l339 < 512; l339 = l339 + 1) {
			fVec260[l339] = 0.0f;
		}
		for (int l340 = 0; l340 < 1024; l340 = l340 + 1) {
			fVec261[l340] = 0.0f;
		}
		for (int l341 = 0; l341 < 2048; l341 = l341 + 1) {
			fVec262[l341] = 0.0f;
		}
		for (int l342 = 0; l342 < 4096; l342 = l342 + 1) {
			fVec263[l342] = 0.0f;
		}
		for (int l343 = 0; l343 < 8192; l343 = l343 + 1) {
			fVec264[l343] = 0.0f;
		}
		for (int l344 = 0; l344 < 16384; l344 = l344 + 1) {
			fVec265[l344] = 0.0f;
		}
		for (int l345 = 0; l345 < 32768; l345 = l345 + 1) {
			fVec266[l345] = 0.0f;
		}
		for (int l346 = 0; l346 < 65536; l346 = l346 + 1) {
			fVec267[l346] = 0.0f;
		}
		for (int l347 = 0; l347 < 131072; l347 = l347 + 1) {
			fVec268[l347] = 0.0f;
		}
		for (int l348 = 0; l348 < 262144; l348 = l348 + 1) {
			fVec269[l348] = 0.0f;
		}
		for (int l349 = 0; l349 < 3; l349 = l349 + 1) {
			fRec94[l349] = 0.0f;
		}
		for (int l350 = 0; l350 < 32768; l350 = l350 + 1) {
			fVec270[l350] = 0.0f;
		}
		for (int l351 = 0; l351 < 2; l351 = l351 + 1) {
			fVec271[l351] = 0.0f;
		}
		for (int l352 = 0; l352 < 2; l352 = l352 + 1) {
			fRec93[l352] = 0.0f;
		}
		for (int l353 = 0; l353 < 2; l353 = l353 + 1) {
			fRec92[l353] = 0.0f;
		}
		for (int l354 = 0; l354 < 2; l354 = l354 + 1) {
			fVec272[l354] = 0.0f;
		}
		for (int l355 = 0; l355 < 2; l355 = l355 + 1) {
			fRec91[l355] = 0.0f;
		}
		for (int l356 = 0; l356 < 2; l356 = l356 + 1) {
			fRec90[l356] = 0.0f;
		}
		for (int l357 = 0; l357 < 2; l357 = l357 + 1) {
			fVec273[l357] = 0.0f;
		}
		for (int l358 = 0; l358 < 3; l358 = l358 + 1) {
			fVec274[l358] = 0.0f;
		}
		for (int l359 = 0; l359 < 7; l359 = l359 + 1) {
			fVec275[l359] = 0.0f;
		}
		for (int l360 = 0; l360 < 15; l360 = l360 + 1) {
			fVec276[l360] = 0.0f;
		}
		for (int l361 = 0; l361 < 32; l361 = l361 + 1) {
			fVec277[l361] = 0.0f;
		}
		for (int l362 = 0; l362 < 64; l362 = l362 + 1) {
			fVec278[l362] = 0.0f;
		}
		for (int l363 = 0; l363 < 128; l363 = l363 + 1) {
			fVec279[l363] = 0.0f;
		}
		for (int l364 = 0; l364 < 256; l364 = l364 + 1) {
			fVec280[l364] = 0.0f;
		}
		for (int l365 = 0; l365 < 512; l365 = l365 + 1) {
			fVec281[l365] = 0.0f;
		}
		for (int l366 = 0; l366 < 1024; l366 = l366 + 1) {
			fVec282[l366] = 0.0f;
		}
		for (int l367 = 0; l367 < 2048; l367 = l367 + 1) {
			fVec283[l367] = 0.0f;
		}
		for (int l368 = 0; l368 < 4096; l368 = l368 + 1) {
			fVec284[l368] = 0.0f;
		}
		for (int l369 = 0; l369 < 8192; l369 = l369 + 1) {
			fVec285[l369] = 0.0f;
		}
		for (int l370 = 0; l370 < 16384; l370 = l370 + 1) {
			fVec286[l370] = 0.0f;
		}
		for (int l371 = 0; l371 < 32768; l371 = l371 + 1) {
			fVec287[l371] = 0.0f;
		}
		for (int l372 = 0; l372 < 65536; l372 = l372 + 1) {
			fVec288[l372] = 0.0f;
		}
		for (int l373 = 0; l373 < 131072; l373 = l373 + 1) {
			fVec289[l373] = 0.0f;
		}
		for (int l374 = 0; l374 < 262144; l374 = l374 + 1) {
			fVec290[l374] = 0.0f;
		}
		for (int l375 = 0; l375 < 3; l375 = l375 + 1) {
			fRec99[l375] = 0.0f;
		}
		for (int l376 = 0; l376 < 32768; l376 = l376 + 1) {
			fVec291[l376] = 0.0f;
		}
		for (int l377 = 0; l377 < 2; l377 = l377 + 1) {
			fVec292[l377] = 0.0f;
		}
		for (int l378 = 0; l378 < 2; l378 = l378 + 1) {
			fRec98[l378] = 0.0f;
		}
		for (int l379 = 0; l379 < 2; l379 = l379 + 1) {
			fRec97[l379] = 0.0f;
		}
		for (int l380 = 0; l380 < 2; l380 = l380 + 1) {
			fVec293[l380] = 0.0f;
		}
		for (int l381 = 0; l381 < 2; l381 = l381 + 1) {
			fRec96[l381] = 0.0f;
		}
		for (int l382 = 0; l382 < 2; l382 = l382 + 1) {
			fRec95[l382] = 0.0f;
		}
		for (int l383 = 0; l383 < 2; l383 = l383 + 1) {
			fVec294[l383] = 0.0f;
		}
		for (int l384 = 0; l384 < 3; l384 = l384 + 1) {
			fVec295[l384] = 0.0f;
		}
		for (int l385 = 0; l385 < 7; l385 = l385 + 1) {
			fVec296[l385] = 0.0f;
		}
		for (int l386 = 0; l386 < 15; l386 = l386 + 1) {
			fVec297[l386] = 0.0f;
		}
		for (int l387 = 0; l387 < 32; l387 = l387 + 1) {
			fVec298[l387] = 0.0f;
		}
		for (int l388 = 0; l388 < 64; l388 = l388 + 1) {
			fVec299[l388] = 0.0f;
		}
		for (int l389 = 0; l389 < 128; l389 = l389 + 1) {
			fVec300[l389] = 0.0f;
		}
		for (int l390 = 0; l390 < 256; l390 = l390 + 1) {
			fVec301[l390] = 0.0f;
		}
		for (int l391 = 0; l391 < 512; l391 = l391 + 1) {
			fVec302[l391] = 0.0f;
		}
		for (int l392 = 0; l392 < 1024; l392 = l392 + 1) {
			fVec303[l392] = 0.0f;
		}
		for (int l393 = 0; l393 < 2048; l393 = l393 + 1) {
			fVec304[l393] = 0.0f;
		}
		for (int l394 = 0; l394 < 4096; l394 = l394 + 1) {
			fVec305[l394] = 0.0f;
		}
		for (int l395 = 0; l395 < 8192; l395 = l395 + 1) {
			fVec306[l395] = 0.0f;
		}
		for (int l396 = 0; l396 < 16384; l396 = l396 + 1) {
			fVec307[l396] = 0.0f;
		}
		for (int l397 = 0; l397 < 32768; l397 = l397 + 1) {
			fVec308[l397] = 0.0f;
		}
		for (int l398 = 0; l398 < 65536; l398 = l398 + 1) {
			fVec309[l398] = 0.0f;
		}
		for (int l399 = 0; l399 < 131072; l399 = l399 + 1) {
			fVec310[l399] = 0.0f;
		}
		for (int l400 = 0; l400 < 262144; l400 = l400 + 1) {
			fVec311[l400] = 0.0f;
		}
		for (int l401 = 0; l401 < 3; l401 = l401 + 1) {
			fRec104[l401] = 0.0f;
		}
		for (int l402 = 0; l402 < 32768; l402 = l402 + 1) {
			fVec312[l402] = 0.0f;
		}
		for (int l403 = 0; l403 < 2; l403 = l403 + 1) {
			fVec313[l403] = 0.0f;
		}
		for (int l404 = 0; l404 < 2; l404 = l404 + 1) {
			fRec103[l404] = 0.0f;
		}
		for (int l405 = 0; l405 < 2; l405 = l405 + 1) {
			fRec102[l405] = 0.0f;
		}
		for (int l406 = 0; l406 < 2; l406 = l406 + 1) {
			fVec314[l406] = 0.0f;
		}
		for (int l407 = 0; l407 < 2; l407 = l407 + 1) {
			fRec101[l407] = 0.0f;
		}
		for (int l408 = 0; l408 < 2; l408 = l408 + 1) {
			fRec100[l408] = 0.0f;
		}
		for (int l409 = 0; l409 < 2; l409 = l409 + 1) {
			fVec315[l409] = 0.0f;
		}
		for (int l410 = 0; l410 < 3; l410 = l410 + 1) {
			fVec316[l410] = 0.0f;
		}
		for (int l411 = 0; l411 < 7; l411 = l411 + 1) {
			fVec317[l411] = 0.0f;
		}
		for (int l412 = 0; l412 < 15; l412 = l412 + 1) {
			fVec318[l412] = 0.0f;
		}
		for (int l413 = 0; l413 < 32; l413 = l413 + 1) {
			fVec319[l413] = 0.0f;
		}
		for (int l414 = 0; l414 < 64; l414 = l414 + 1) {
			fVec320[l414] = 0.0f;
		}
		for (int l415 = 0; l415 < 128; l415 = l415 + 1) {
			fVec321[l415] = 0.0f;
		}
		for (int l416 = 0; l416 < 256; l416 = l416 + 1) {
			fVec322[l416] = 0.0f;
		}
		for (int l417 = 0; l417 < 512; l417 = l417 + 1) {
			fVec323[l417] = 0.0f;
		}
		for (int l418 = 0; l418 < 1024; l418 = l418 + 1) {
			fVec324[l418] = 0.0f;
		}
		for (int l419 = 0; l419 < 2048; l419 = l419 + 1) {
			fVec325[l419] = 0.0f;
		}
		for (int l420 = 0; l420 < 4096; l420 = l420 + 1) {
			fVec326[l420] = 0.0f;
		}
		for (int l421 = 0; l421 < 8192; l421 = l421 + 1) {
			fVec327[l421] = 0.0f;
		}
		for (int l422 = 0; l422 < 16384; l422 = l422 + 1) {
			fVec328[l422] = 0.0f;
		}
		for (int l423 = 0; l423 < 32768; l423 = l423 + 1) {
			fVec329[l423] = 0.0f;
		}
		for (int l424 = 0; l424 < 65536; l424 = l424 + 1) {
			fVec330[l424] = 0.0f;
		}
		for (int l425 = 0; l425 < 131072; l425 = l425 + 1) {
			fVec331[l425] = 0.0f;
		}
		for (int l426 = 0; l426 < 262144; l426 = l426 + 1) {
			fVec332[l426] = 0.0f;
		}
		for (int l427 = 0; l427 < 3; l427 = l427 + 1) {
			fRec109[l427] = 0.0f;
		}
		for (int l428 = 0; l428 < 32768; l428 = l428 + 1) {
			fVec333[l428] = 0.0f;
		}
		for (int l429 = 0; l429 < 2; l429 = l429 + 1) {
			fVec334[l429] = 0.0f;
		}
		for (int l430 = 0; l430 < 2; l430 = l430 + 1) {
			fRec108[l430] = 0.0f;
		}
		for (int l431 = 0; l431 < 2; l431 = l431 + 1) {
			fRec107[l431] = 0.0f;
		}
		for (int l432 = 0; l432 < 2; l432 = l432 + 1) {
			fVec335[l432] = 0.0f;
		}
		for (int l433 = 0; l433 < 2; l433 = l433 + 1) {
			fRec106[l433] = 0.0f;
		}
		for (int l434 = 0; l434 < 2; l434 = l434 + 1) {
			fRec105[l434] = 0.0f;
		}
		for (int l435 = 0; l435 < 2; l435 = l435 + 1) {
			fVec336[l435] = 0.0f;
		}
		for (int l436 = 0; l436 < 3; l436 = l436 + 1) {
			fVec337[l436] = 0.0f;
		}
		for (int l437 = 0; l437 < 7; l437 = l437 + 1) {
			fVec338[l437] = 0.0f;
		}
		for (int l438 = 0; l438 < 15; l438 = l438 + 1) {
			fVec339[l438] = 0.0f;
		}
		for (int l439 = 0; l439 < 32; l439 = l439 + 1) {
			fVec340[l439] = 0.0f;
		}
		for (int l440 = 0; l440 < 64; l440 = l440 + 1) {
			fVec341[l440] = 0.0f;
		}
		for (int l441 = 0; l441 < 128; l441 = l441 + 1) {
			fVec342[l441] = 0.0f;
		}
		for (int l442 = 0; l442 < 256; l442 = l442 + 1) {
			fVec343[l442] = 0.0f;
		}
		for (int l443 = 0; l443 < 512; l443 = l443 + 1) {
			fVec344[l443] = 0.0f;
		}
		for (int l444 = 0; l444 < 1024; l444 = l444 + 1) {
			fVec345[l444] = 0.0f;
		}
		for (int l445 = 0; l445 < 2048; l445 = l445 + 1) {
			fVec346[l445] = 0.0f;
		}
		for (int l446 = 0; l446 < 4096; l446 = l446 + 1) {
			fVec347[l446] = 0.0f;
		}
		for (int l447 = 0; l447 < 8192; l447 = l447 + 1) {
			fVec348[l447] = 0.0f;
		}
		for (int l448 = 0; l448 < 16384; l448 = l448 + 1) {
			fVec349[l448] = 0.0f;
		}
		for (int l449 = 0; l449 < 32768; l449 = l449 + 1) {
			fVec350[l449] = 0.0f;
		}
		for (int l450 = 0; l450 < 65536; l450 = l450 + 1) {
			fVec351[l450] = 0.0f;
		}
		for (int l451 = 0; l451 < 131072; l451 = l451 + 1) {
			fVec352[l451] = 0.0f;
		}
		for (int l452 = 0; l452 < 262144; l452 = l452 + 1) {
			fVec353[l452] = 0.0f;
		}
		for (int l453 = 0; l453 < 3; l453 = l453 + 1) {
			fRec114[l453] = 0.0f;
		}
		for (int l454 = 0; l454 < 32768; l454 = l454 + 1) {
			fVec354[l454] = 0.0f;
		}
		for (int l455 = 0; l455 < 2; l455 = l455 + 1) {
			fVec355[l455] = 0.0f;
		}
		for (int l456 = 0; l456 < 2; l456 = l456 + 1) {
			fRec113[l456] = 0.0f;
		}
		for (int l457 = 0; l457 < 2; l457 = l457 + 1) {
			fRec112[l457] = 0.0f;
		}
		for (int l458 = 0; l458 < 2; l458 = l458 + 1) {
			fVec356[l458] = 0.0f;
		}
		for (int l459 = 0; l459 < 2; l459 = l459 + 1) {
			fRec111[l459] = 0.0f;
		}
		for (int l460 = 0; l460 < 2; l460 = l460 + 1) {
			fRec110[l460] = 0.0f;
		}
		for (int l461 = 0; l461 < 2; l461 = l461 + 1) {
			fVec357[l461] = 0.0f;
		}
		for (int l462 = 0; l462 < 3; l462 = l462 + 1) {
			fVec358[l462] = 0.0f;
		}
		for (int l463 = 0; l463 < 7; l463 = l463 + 1) {
			fVec359[l463] = 0.0f;
		}
		for (int l464 = 0; l464 < 15; l464 = l464 + 1) {
			fVec360[l464] = 0.0f;
		}
		for (int l465 = 0; l465 < 32; l465 = l465 + 1) {
			fVec361[l465] = 0.0f;
		}
		for (int l466 = 0; l466 < 64; l466 = l466 + 1) {
			fVec362[l466] = 0.0f;
		}
		for (int l467 = 0; l467 < 128; l467 = l467 + 1) {
			fVec363[l467] = 0.0f;
		}
		for (int l468 = 0; l468 < 256; l468 = l468 + 1) {
			fVec364[l468] = 0.0f;
		}
		for (int l469 = 0; l469 < 512; l469 = l469 + 1) {
			fVec365[l469] = 0.0f;
		}
		for (int l470 = 0; l470 < 1024; l470 = l470 + 1) {
			fVec366[l470] = 0.0f;
		}
		for (int l471 = 0; l471 < 2048; l471 = l471 + 1) {
			fVec367[l471] = 0.0f;
		}
		for (int l472 = 0; l472 < 4096; l472 = l472 + 1) {
			fVec368[l472] = 0.0f;
		}
		for (int l473 = 0; l473 < 8192; l473 = l473 + 1) {
			fVec369[l473] = 0.0f;
		}
		for (int l474 = 0; l474 < 16384; l474 = l474 + 1) {
			fVec370[l474] = 0.0f;
		}
		for (int l475 = 0; l475 < 32768; l475 = l475 + 1) {
			fVec371[l475] = 0.0f;
		}
		for (int l476 = 0; l476 < 65536; l476 = l476 + 1) {
			fVec372[l476] = 0.0f;
		}
		for (int l477 = 0; l477 < 131072; l477 = l477 + 1) {
			fVec373[l477] = 0.0f;
		}
		for (int l478 = 0; l478 < 262144; l478 = l478 + 1) {
			fVec374[l478] = 0.0f;
		}
		for (int l479 = 0; l479 < 3; l479 = l479 + 1) {
			fRec119[l479] = 0.0f;
		}
		for (int l480 = 0; l480 < 32768; l480 = l480 + 1) {
			fVec375[l480] = 0.0f;
		}
		for (int l481 = 0; l481 < 2; l481 = l481 + 1) {
			fVec376[l481] = 0.0f;
		}
		for (int l482 = 0; l482 < 2; l482 = l482 + 1) {
			fRec118[l482] = 0.0f;
		}
		for (int l483 = 0; l483 < 2; l483 = l483 + 1) {
			fRec117[l483] = 0.0f;
		}
		for (int l484 = 0; l484 < 2; l484 = l484 + 1) {
			fVec377[l484] = 0.0f;
		}
		for (int l485 = 0; l485 < 2; l485 = l485 + 1) {
			fRec116[l485] = 0.0f;
		}
		for (int l486 = 0; l486 < 2; l486 = l486 + 1) {
			fRec115[l486] = 0.0f;
		}
		for (int l487 = 0; l487 < 2; l487 = l487 + 1) {
			fVec378[l487] = 0.0f;
		}
		for (int l488 = 0; l488 < 3; l488 = l488 + 1) {
			fVec379[l488] = 0.0f;
		}
		for (int l489 = 0; l489 < 7; l489 = l489 + 1) {
			fVec380[l489] = 0.0f;
		}
		for (int l490 = 0; l490 < 15; l490 = l490 + 1) {
			fVec381[l490] = 0.0f;
		}
		for (int l491 = 0; l491 < 32; l491 = l491 + 1) {
			fVec382[l491] = 0.0f;
		}
		for (int l492 = 0; l492 < 64; l492 = l492 + 1) {
			fVec383[l492] = 0.0f;
		}
		for (int l493 = 0; l493 < 128; l493 = l493 + 1) {
			fVec384[l493] = 0.0f;
		}
		for (int l494 = 0; l494 < 256; l494 = l494 + 1) {
			fVec385[l494] = 0.0f;
		}
		for (int l495 = 0; l495 < 512; l495 = l495 + 1) {
			fVec386[l495] = 0.0f;
		}
		for (int l496 = 0; l496 < 1024; l496 = l496 + 1) {
			fVec387[l496] = 0.0f;
		}
		for (int l497 = 0; l497 < 2048; l497 = l497 + 1) {
			fVec388[l497] = 0.0f;
		}
		for (int l498 = 0; l498 < 4096; l498 = l498 + 1) {
			fVec389[l498] = 0.0f;
		}
		for (int l499 = 0; l499 < 8192; l499 = l499 + 1) {
			fVec390[l499] = 0.0f;
		}
		for (int l500 = 0; l500 < 16384; l500 = l500 + 1) {
			fVec391[l500] = 0.0f;
		}
		for (int l501 = 0; l501 < 32768; l501 = l501 + 1) {
			fVec392[l501] = 0.0f;
		}
		for (int l502 = 0; l502 < 65536; l502 = l502 + 1) {
			fVec393[l502] = 0.0f;
		}
		for (int l503 = 0; l503 < 131072; l503 = l503 + 1) {
			fVec394[l503] = 0.0f;
		}
		for (int l504 = 0; l504 < 262144; l504 = l504 + 1) {
			fVec395[l504] = 0.0f;
		}
		for (int l505 = 0; l505 < 3; l505 = l505 + 1) {
			fRec124[l505] = 0.0f;
		}
		for (int l506 = 0; l506 < 32768; l506 = l506 + 1) {
			fVec396[l506] = 0.0f;
		}
		for (int l507 = 0; l507 < 2; l507 = l507 + 1) {
			fVec397[l507] = 0.0f;
		}
		for (int l508 = 0; l508 < 2; l508 = l508 + 1) {
			fRec123[l508] = 0.0f;
		}
		for (int l509 = 0; l509 < 2; l509 = l509 + 1) {
			fRec122[l509] = 0.0f;
		}
		for (int l510 = 0; l510 < 2; l510 = l510 + 1) {
			fVec398[l510] = 0.0f;
		}
		for (int l511 = 0; l511 < 2; l511 = l511 + 1) {
			fRec121[l511] = 0.0f;
		}
		for (int l512 = 0; l512 < 2; l512 = l512 + 1) {
			fRec120[l512] = 0.0f;
		}
		for (int l513 = 0; l513 < 2; l513 = l513 + 1) {
			fVec399[l513] = 0.0f;
		}
		for (int l514 = 0; l514 < 3; l514 = l514 + 1) {
			fVec400[l514] = 0.0f;
		}
		for (int l515 = 0; l515 < 7; l515 = l515 + 1) {
			fVec401[l515] = 0.0f;
		}
		for (int l516 = 0; l516 < 15; l516 = l516 + 1) {
			fVec402[l516] = 0.0f;
		}
		for (int l517 = 0; l517 < 32; l517 = l517 + 1) {
			fVec403[l517] = 0.0f;
		}
		for (int l518 = 0; l518 < 64; l518 = l518 + 1) {
			fVec404[l518] = 0.0f;
		}
		for (int l519 = 0; l519 < 128; l519 = l519 + 1) {
			fVec405[l519] = 0.0f;
		}
		for (int l520 = 0; l520 < 256; l520 = l520 + 1) {
			fVec406[l520] = 0.0f;
		}
		for (int l521 = 0; l521 < 512; l521 = l521 + 1) {
			fVec407[l521] = 0.0f;
		}
		for (int l522 = 0; l522 < 1024; l522 = l522 + 1) {
			fVec408[l522] = 0.0f;
		}
		for (int l523 = 0; l523 < 2048; l523 = l523 + 1) {
			fVec409[l523] = 0.0f;
		}
		for (int l524 = 0; l524 < 4096; l524 = l524 + 1) {
			fVec410[l524] = 0.0f;
		}
		for (int l525 = 0; l525 < 8192; l525 = l525 + 1) {
			fVec411[l525] = 0.0f;
		}
		for (int l526 = 0; l526 < 16384; l526 = l526 + 1) {
			fVec412[l526] = 0.0f;
		}
		for (int l527 = 0; l527 < 32768; l527 = l527 + 1) {
			fVec413[l527] = 0.0f;
		}
		for (int l528 = 0; l528 < 65536; l528 = l528 + 1) {
			fVec414[l528] = 0.0f;
		}
		for (int l529 = 0; l529 < 131072; l529 = l529 + 1) {
			fVec415[l529] = 0.0f;
		}
		for (int l530 = 0; l530 < 262144; l530 = l530 + 1) {
			fVec416[l530] = 0.0f;
		}
		for (int l531 = 0; l531 < 3; l531 = l531 + 1) {
			fRec129[l531] = 0.0f;
		}
		for (int l532 = 0; l532 < 32768; l532 = l532 + 1) {
			fVec417[l532] = 0.0f;
		}
		for (int l533 = 0; l533 < 2; l533 = l533 + 1) {
			fVec418[l533] = 0.0f;
		}
		for (int l534 = 0; l534 < 2; l534 = l534 + 1) {
			fRec128[l534] = 0.0f;
		}
		for (int l535 = 0; l535 < 2; l535 = l535 + 1) {
			fRec127[l535] = 0.0f;
		}
		for (int l536 = 0; l536 < 2; l536 = l536 + 1) {
			fVec419[l536] = 0.0f;
		}
		for (int l537 = 0; l537 < 2; l537 = l537 + 1) {
			fRec126[l537] = 0.0f;
		}
		for (int l538 = 0; l538 < 2; l538 = l538 + 1) {
			fRec125[l538] = 0.0f;
		}
		for (int l539 = 0; l539 < 2; l539 = l539 + 1) {
			fVec420[l539] = 0.0f;
		}
		for (int l540 = 0; l540 < 3; l540 = l540 + 1) {
			fVec421[l540] = 0.0f;
		}
		for (int l541 = 0; l541 < 7; l541 = l541 + 1) {
			fVec422[l541] = 0.0f;
		}
		for (int l542 = 0; l542 < 15; l542 = l542 + 1) {
			fVec423[l542] = 0.0f;
		}
		for (int l543 = 0; l543 < 32; l543 = l543 + 1) {
			fVec424[l543] = 0.0f;
		}
		for (int l544 = 0; l544 < 64; l544 = l544 + 1) {
			fVec425[l544] = 0.0f;
		}
		for (int l545 = 0; l545 < 128; l545 = l545 + 1) {
			fVec426[l545] = 0.0f;
		}
		for (int l546 = 0; l546 < 256; l546 = l546 + 1) {
			fVec427[l546] = 0.0f;
		}
		for (int l547 = 0; l547 < 512; l547 = l547 + 1) {
			fVec428[l547] = 0.0f;
		}
		for (int l548 = 0; l548 < 1024; l548 = l548 + 1) {
			fVec429[l548] = 0.0f;
		}
		for (int l549 = 0; l549 < 2048; l549 = l549 + 1) {
			fVec430[l549] = 0.0f;
		}
		for (int l550 = 0; l550 < 4096; l550 = l550 + 1) {
			fVec431[l550] = 0.0f;
		}
		for (int l551 = 0; l551 < 8192; l551 = l551 + 1) {
			fVec432[l551] = 0.0f;
		}
		for (int l552 = 0; l552 < 16384; l552 = l552 + 1) {
			fVec433[l552] = 0.0f;
		}
		for (int l553 = 0; l553 < 32768; l553 = l553 + 1) {
			fVec434[l553] = 0.0f;
		}
		for (int l554 = 0; l554 < 65536; l554 = l554 + 1) {
			fVec435[l554] = 0.0f;
		}
		for (int l555 = 0; l555 < 131072; l555 = l555 + 1) {
			fVec436[l555] = 0.0f;
		}
		for (int l556 = 0; l556 < 262144; l556 = l556 + 1) {
			fVec437[l556] = 0.0f;
		}
		for (int l557 = 0; l557 < 3; l557 = l557 + 1) {
			fRec134[l557] = 0.0f;
		}
		for (int l558 = 0; l558 < 32768; l558 = l558 + 1) {
			fVec438[l558] = 0.0f;
		}
		for (int l559 = 0; l559 < 2; l559 = l559 + 1) {
			fVec439[l559] = 0.0f;
		}
		for (int l560 = 0; l560 < 2; l560 = l560 + 1) {
			fRec133[l560] = 0.0f;
		}
		for (int l561 = 0; l561 < 2; l561 = l561 + 1) {
			fRec132[l561] = 0.0f;
		}
		for (int l562 = 0; l562 < 2; l562 = l562 + 1) {
			fVec440[l562] = 0.0f;
		}
		for (int l563 = 0; l563 < 2; l563 = l563 + 1) {
			fRec131[l563] = 0.0f;
		}
		for (int l564 = 0; l564 < 2; l564 = l564 + 1) {
			fRec130[l564] = 0.0f;
		}
		for (int l565 = 0; l565 < 2; l565 = l565 + 1) {
			fVec441[l565] = 0.0f;
		}
		for (int l566 = 0; l566 < 3; l566 = l566 + 1) {
			fVec442[l566] = 0.0f;
		}
		for (int l567 = 0; l567 < 7; l567 = l567 + 1) {
			fVec443[l567] = 0.0f;
		}
		for (int l568 = 0; l568 < 15; l568 = l568 + 1) {
			fVec444[l568] = 0.0f;
		}
		for (int l569 = 0; l569 < 32; l569 = l569 + 1) {
			fVec445[l569] = 0.0f;
		}
		for (int l570 = 0; l570 < 64; l570 = l570 + 1) {
			fVec446[l570] = 0.0f;
		}
		for (int l571 = 0; l571 < 128; l571 = l571 + 1) {
			fVec447[l571] = 0.0f;
		}
		for (int l572 = 0; l572 < 256; l572 = l572 + 1) {
			fVec448[l572] = 0.0f;
		}
		for (int l573 = 0; l573 < 512; l573 = l573 + 1) {
			fVec449[l573] = 0.0f;
		}
		for (int l574 = 0; l574 < 1024; l574 = l574 + 1) {
			fVec450[l574] = 0.0f;
		}
		for (int l575 = 0; l575 < 2048; l575 = l575 + 1) {
			fVec451[l575] = 0.0f;
		}
		for (int l576 = 0; l576 < 4096; l576 = l576 + 1) {
			fVec452[l576] = 0.0f;
		}
		for (int l577 = 0; l577 < 8192; l577 = l577 + 1) {
			fVec453[l577] = 0.0f;
		}
		for (int l578 = 0; l578 < 16384; l578 = l578 + 1) {
			fVec454[l578] = 0.0f;
		}
		for (int l579 = 0; l579 < 32768; l579 = l579 + 1) {
			fVec455[l579] = 0.0f;
		}
		for (int l580 = 0; l580 < 65536; l580 = l580 + 1) {
			fVec456[l580] = 0.0f;
		}
		for (int l581 = 0; l581 < 131072; l581 = l581 + 1) {
			fVec457[l581] = 0.0f;
		}
		for (int l582 = 0; l582 < 262144; l582 = l582 + 1) {
			fVec458[l582] = 0.0f;
		}
		for (int l583 = 0; l583 < 3; l583 = l583 + 1) {
			fRec139[l583] = 0.0f;
		}
		for (int l584 = 0; l584 < 32768; l584 = l584 + 1) {
			fVec459[l584] = 0.0f;
		}
		for (int l585 = 0; l585 < 2; l585 = l585 + 1) {
			fVec460[l585] = 0.0f;
		}
		for (int l586 = 0; l586 < 2; l586 = l586 + 1) {
			fRec138[l586] = 0.0f;
		}
		for (int l587 = 0; l587 < 2; l587 = l587 + 1) {
			fRec137[l587] = 0.0f;
		}
		for (int l588 = 0; l588 < 2; l588 = l588 + 1) {
			fVec461[l588] = 0.0f;
		}
		for (int l589 = 0; l589 < 2; l589 = l589 + 1) {
			fRec136[l589] = 0.0f;
		}
		for (int l590 = 0; l590 < 2; l590 = l590 + 1) {
			fRec135[l590] = 0.0f;
		}
		for (int l591 = 0; l591 < 2; l591 = l591 + 1) {
			fVec462[l591] = 0.0f;
		}
		for (int l592 = 0; l592 < 3; l592 = l592 + 1) {
			fVec463[l592] = 0.0f;
		}
		for (int l593 = 0; l593 < 7; l593 = l593 + 1) {
			fVec464[l593] = 0.0f;
		}
		for (int l594 = 0; l594 < 15; l594 = l594 + 1) {
			fVec465[l594] = 0.0f;
		}
		for (int l595 = 0; l595 < 32; l595 = l595 + 1) {
			fVec466[l595] = 0.0f;
		}
		for (int l596 = 0; l596 < 64; l596 = l596 + 1) {
			fVec467[l596] = 0.0f;
		}
		for (int l597 = 0; l597 < 128; l597 = l597 + 1) {
			fVec468[l597] = 0.0f;
		}
		for (int l598 = 0; l598 < 256; l598 = l598 + 1) {
			fVec469[l598] = 0.0f;
		}
		for (int l599 = 0; l599 < 512; l599 = l599 + 1) {
			fVec470[l599] = 0.0f;
		}
		for (int l600 = 0; l600 < 1024; l600 = l600 + 1) {
			fVec471[l600] = 0.0f;
		}
		for (int l601 = 0; l601 < 2048; l601 = l601 + 1) {
			fVec472[l601] = 0.0f;
		}
		for (int l602 = 0; l602 < 4096; l602 = l602 + 1) {
			fVec473[l602] = 0.0f;
		}
		for (int l603 = 0; l603 < 8192; l603 = l603 + 1) {
			fVec474[l603] = 0.0f;
		}
		for (int l604 = 0; l604 < 16384; l604 = l604 + 1) {
			fVec475[l604] = 0.0f;
		}
		for (int l605 = 0; l605 < 32768; l605 = l605 + 1) {
			fVec476[l605] = 0.0f;
		}
		for (int l606 = 0; l606 < 65536; l606 = l606 + 1) {
			fVec477[l606] = 0.0f;
		}
		for (int l607 = 0; l607 < 131072; l607 = l607 + 1) {
			fVec478[l607] = 0.0f;
		}
		for (int l608 = 0; l608 < 262144; l608 = l608 + 1) {
			fVec479[l608] = 0.0f;
		}
		for (int l609 = 0; l609 < 3; l609 = l609 + 1) {
			fRec8[l609] = 0.0f;
		}
		for (int l610 = 0; l610 < 3; l610 = l610 + 1) {
			fRec9[l610] = 0.0f;
		}
		for (int l611 = 0; l611 < 2; l611 = l611 + 1) {
			fRec140[l611] = 0.0f;
		}
		for (int l612 = 0; l612 < 3; l612 = l612 + 1) {
			fRec144[l612] = 0.0f;
		}
		for (int l613 = 0; l613 < 3; l613 = l613 + 1) {
			fRec143[l613] = 0.0f;
		}
		for (int l614 = 0; l614 < 3; l614 = l614 + 1) {
			fRec142[l614] = 0.0f;
		}
		for (int l615 = 0; l615 < 2; l615 = l615 + 1) {
			fRec141[l615] = 0.0f;
		}
		for (int l616 = 0; l616 < 3; l616 = l616 + 1) {
			fRec148[l616] = 0.0f;
		}
		for (int l617 = 0; l617 < 3; l617 = l617 + 1) {
			fRec147[l617] = 0.0f;
		}
		for (int l618 = 0; l618 < 3; l618 = l618 + 1) {
			fRec146[l618] = 0.0f;
		}
		for (int l619 = 0; l619 < 2; l619 = l619 + 1) {
			fRec145[l619] = 0.0f;
		}
		for (int l620 = 0; l620 < 3; l620 = l620 + 1) {
			fRec154[l620] = 0.0f;
		}
		for (int l621 = 0; l621 < 3; l621 = l621 + 1) {
			fRec153[l621] = 0.0f;
		}
		for (int l622 = 0; l622 < 3; l622 = l622 + 1) {
			fRec152[l622] = 0.0f;
		}
		for (int l623 = 0; l623 < 3; l623 = l623 + 1) {
			fRec151[l623] = 0.0f;
		}
		for (int l624 = 0; l624 < 3; l624 = l624 + 1) {
			fRec150[l624] = 0.0f;
		}
		for (int l625 = 0; l625 < 2; l625 = l625 + 1) {
			fRec149[l625] = 0.0f;
		}
		for (int l626 = 0; l626 < 3; l626 = l626 + 1) {
			fRec160[l626] = 0.0f;
		}
		for (int l627 = 0; l627 < 3; l627 = l627 + 1) {
			fRec159[l627] = 0.0f;
		}
		for (int l628 = 0; l628 < 3; l628 = l628 + 1) {
			fRec158[l628] = 0.0f;
		}
		for (int l629 = 0; l629 < 3; l629 = l629 + 1) {
			fRec157[l629] = 0.0f;
		}
		for (int l630 = 0; l630 < 3; l630 = l630 + 1) {
			fRec156[l630] = 0.0f;
		}
		for (int l631 = 0; l631 < 2; l631 = l631 + 1) {
			fRec155[l631] = 0.0f;
		}
		for (int l632 = 0; l632 < 3; l632 = l632 + 1) {
			fRec182[l632] = 0.0f;
		}
		for (int l633 = 0; l633 < 3; l633 = l633 + 1) {
			fRec181[l633] = 0.0f;
		}
		for (int l634 = 0; l634 < 3; l634 = l634 + 1) {
			fRec180[l634] = 0.0f;
		}
		for (int l635 = 0; l635 < 3; l635 = l635 + 1) {
			fRec179[l635] = 0.0f;
		}
		for (int l636 = 0; l636 < 3; l636 = l636 + 1) {
			fRec178[l636] = 0.0f;
		}
		for (int l637 = 0; l637 < 2; l637 = l637 + 1) {
			fRec177[l637] = 0.0f;
		}
		for (int l638 = 0; l638 < 3; l638 = l638 + 1) {
			fRec188[l638] = 0.0f;
		}
		for (int l639 = 0; l639 < 3; l639 = l639 + 1) {
			fRec187[l639] = 0.0f;
		}
		for (int l640 = 0; l640 < 3; l640 = l640 + 1) {
			fRec186[l640] = 0.0f;
		}
		for (int l641 = 0; l641 < 3; l641 = l641 + 1) {
			fRec185[l641] = 0.0f;
		}
		for (int l642 = 0; l642 < 3; l642 = l642 + 1) {
			fRec184[l642] = 0.0f;
		}
		for (int l643 = 0; l643 < 2; l643 = l643 + 1) {
			fRec183[l643] = 0.0f;
		}
		for (int l644 = 0; l644 < 3; l644 = l644 + 1) {
			fRec210[l644] = 0.0f;
		}
		for (int l645 = 0; l645 < 3; l645 = l645 + 1) {
			fRec209[l645] = 0.0f;
		}
		for (int l646 = 0; l646 < 3; l646 = l646 + 1) {
			fRec208[l646] = 0.0f;
		}
		for (int l647 = 0; l647 < 3; l647 = l647 + 1) {
			fRec207[l647] = 0.0f;
		}
		for (int l648 = 0; l648 < 3; l648 = l648 + 1) {
			fRec206[l648] = 0.0f;
		}
		for (int l649 = 0; l649 < 2; l649 = l649 + 1) {
			fRec205[l649] = 0.0f;
		}
		for (int l650 = 0; l650 < 3; l650 = l650 + 1) {
			fRec216[l650] = 0.0f;
		}
		for (int l651 = 0; l651 < 3; l651 = l651 + 1) {
			fRec215[l651] = 0.0f;
		}
		for (int l652 = 0; l652 < 3; l652 = l652 + 1) {
			fRec214[l652] = 0.0f;
		}
		for (int l653 = 0; l653 < 3; l653 = l653 + 1) {
			fRec213[l653] = 0.0f;
		}
		for (int l654 = 0; l654 < 3; l654 = l654 + 1) {
			fRec212[l654] = 0.0f;
		}
		for (int l655 = 0; l655 < 2; l655 = l655 + 1) {
			fRec211[l655] = 0.0f;
		}
		for (int l656 = 0; l656 < 3; l656 = l656 + 1) {
			fRec235[l656] = 0.0f;
		}
		for (int l657 = 0; l657 < 3; l657 = l657 + 1) {
			fRec234[l657] = 0.0f;
		}
		for (int l658 = 0; l658 < 2; l658 = l658 + 1) {
			fRec233[l658] = 0.0f;
		}
		for (int l659 = 0; l659 < 3; l659 = l659 + 1) {
			fRec238[l659] = 0.0f;
		}
		for (int l660 = 0; l660 < 3; l660 = l660 + 1) {
			fRec237[l660] = 0.0f;
		}
		for (int l661 = 0; l661 < 2; l661 = l661 + 1) {
			fRec236[l661] = 0.0f;
		}
		for (int l662 = 0; l662 < 2; l662 = l662 + 1) {
			fRec243[l662] = 0.0f;
		}
		for (int l663 = 0; l663 < 2; l663 = l663 + 1) {
			fRec244[l663] = 0.0f;
		}
		for (int l664 = 0; l664 < 2; l664 = l664 + 1) {
			fRec247[l664] = 0.0f;
		}
		for (int l665 = 0; l665 < 2; l665 = l665 + 1) {
			fRec248[l665] = 0.0f;
		}
		for (int l666 = 0; l666 < 2; l666 = l666 + 1) {
			fRec239[l666] = 0.0f;
		}
		for (int l667 = 0; l667 < 2; l667 = l667 + 1) {
			fRec240[l667] = 0.0f;
		}
		for (int l668 = 0; l668 < 2; l668 = l668 + 1) {
			fRec229[l668] = 0.0f;
		}
		for (int l669 = 0; l669 < 2; l669 = l669 + 1) {
			fRec230[l669] = 0.0f;
		}
		for (int l670 = 0; l670 < 2; l670 = l670 + 1) {
			fRec251[l670] = 0.0f;
		}
		for (int l671 = 0; l671 < 2; l671 = l671 + 1) {
			fRec252[l671] = 0.0f;
		}
		for (int l672 = 0; l672 < 2; l672 = l672 + 1) {
			fRec225[l672] = 0.0f;
		}
		for (int l673 = 0; l673 < 2; l673 = l673 + 1) {
			fRec226[l673] = 0.0f;
		}
		for (int l674 = 0; l674 < 2; l674 = l674 + 1) {
			fRec221[l674] = 0.0f;
		}
		for (int l675 = 0; l675 < 2; l675 = l675 + 1) {
			fRec222[l675] = 0.0f;
		}
		for (int l676 = 0; l676 < 2; l676 = l676 + 1) {
			fRec255[l676] = 0.0f;
		}
		for (int l677 = 0; l677 < 2; l677 = l677 + 1) {
			fRec256[l677] = 0.0f;
		}
		for (int l678 = 0; l678 < 2; l678 = l678 + 1) {
			fRec217[l678] = 0.0f;
		}
		for (int l679 = 0; l679 < 2; l679 = l679 + 1) {
			fRec218[l679] = 0.0f;
		}
		for (int l680 = 0; l680 < 2; l680 = l680 + 1) {
			fRec201[l680] = 0.0f;
		}
		for (int l681 = 0; l681 < 2; l681 = l681 + 1) {
			fRec202[l681] = 0.0f;
		}
		for (int l682 = 0; l682 < 2; l682 = l682 + 1) {
			fRec259[l682] = 0.0f;
		}
		for (int l683 = 0; l683 < 2; l683 = l683 + 1) {
			fRec260[l683] = 0.0f;
		}
		for (int l684 = 0; l684 < 2; l684 = l684 + 1) {
			fRec197[l684] = 0.0f;
		}
		for (int l685 = 0; l685 < 2; l685 = l685 + 1) {
			fRec198[l685] = 0.0f;
		}
		for (int l686 = 0; l686 < 2; l686 = l686 + 1) {
			fRec193[l686] = 0.0f;
		}
		for (int l687 = 0; l687 < 2; l687 = l687 + 1) {
			fRec194[l687] = 0.0f;
		}
		for (int l688 = 0; l688 < 2; l688 = l688 + 1) {
			fRec263[l688] = 0.0f;
		}
		for (int l689 = 0; l689 < 2; l689 = l689 + 1) {
			fRec264[l689] = 0.0f;
		}
		for (int l690 = 0; l690 < 2; l690 = l690 + 1) {
			fRec189[l690] = 0.0f;
		}
		for (int l691 = 0; l691 < 2; l691 = l691 + 1) {
			fRec190[l691] = 0.0f;
		}
		for (int l692 = 0; l692 < 2; l692 = l692 + 1) {
			fRec173[l692] = 0.0f;
		}
		for (int l693 = 0; l693 < 2; l693 = l693 + 1) {
			fRec174[l693] = 0.0f;
		}
		for (int l694 = 0; l694 < 2; l694 = l694 + 1) {
			fRec267[l694] = 0.0f;
		}
		for (int l695 = 0; l695 < 2; l695 = l695 + 1) {
			fRec268[l695] = 0.0f;
		}
		for (int l696 = 0; l696 < 2; l696 = l696 + 1) {
			fRec169[l696] = 0.0f;
		}
		for (int l697 = 0; l697 < 2; l697 = l697 + 1) {
			fRec170[l697] = 0.0f;
		}
		for (int l698 = 0; l698 < 2; l698 = l698 + 1) {
			fRec165[l698] = 0.0f;
		}
		for (int l699 = 0; l699 < 2; l699 = l699 + 1) {
			fRec166[l699] = 0.0f;
		}
		for (int l700 = 0; l700 < 2; l700 = l700 + 1) {
			fRec271[l700] = 0.0f;
		}
		for (int l701 = 0; l701 < 2; l701 = l701 + 1) {
			fRec272[l701] = 0.0f;
		}
		for (int l702 = 0; l702 < 2; l702 = l702 + 1) {
			fRec161[l702] = 0.0f;
		}
		for (int l703 = 0; l703 < 2; l703 = l703 + 1) {
			fRec162[l703] = 0.0f;
		}
		for (int l704 = 0; l704 < 2; l704 = l704 + 1) {
			fRec275[l704] = 0.0f;
		}
		for (int l705 = 0; l705 < 2; l705 = l705 + 1) {
			fRec276[l705] = 0.0f;
		}
		for (int l706 = 0; l706 < 2; l706 = l706 + 1) {
			fRec279[l706] = 0.0f;
		}
		for (int l707 = 0; l707 < 2; l707 = l707 + 1) {
			fRec280[l707] = 0.0f;
		}
		for (int l708 = 0; l708 < 2; l708 = l708 + 1) {
			fRec283[l708] = 0.0f;
		}
		for (int l709 = 0; l709 < 2; l709 = l709 + 1) {
			fRec284[l709] = 0.0f;
		}
		for (int l710 = 0; l710 < 2048; l710 = l710 + 1) {
			fVec480[l710] = 0.0f;
		}
		for (int l711 = 0; l711 < 2; l711 = l711 + 1) {
			fRec339[l711] = 0.0f;
		}
		for (int l712 = 0; l712 < 2; l712 = l712 + 1) {
			fRec340[l712] = 0.0f;
		}
		for (int l713 = 0; l713 < 2; l713 = l713 + 1) {
			fRec343[l713] = 0.0f;
		}
		for (int l714 = 0; l714 < 2; l714 = l714 + 1) {
			fRec344[l714] = 0.0f;
		}
		for (int l715 = 0; l715 < 2; l715 = l715 + 1) {
			fRec335[l715] = 0.0f;
		}
		for (int l716 = 0; l716 < 2; l716 = l716 + 1) {
			fRec336[l716] = 0.0f;
		}
		for (int l717 = 0; l717 < 2; l717 = l717 + 1) {
			fRec331[l717] = 0.0f;
		}
		for (int l718 = 0; l718 < 2; l718 = l718 + 1) {
			fRec332[l718] = 0.0f;
		}
		for (int l719 = 0; l719 < 2; l719 = l719 + 1) {
			fRec347[l719] = 0.0f;
		}
		for (int l720 = 0; l720 < 2; l720 = l720 + 1) {
			fRec348[l720] = 0.0f;
		}
		for (int l721 = 0; l721 < 2; l721 = l721 + 1) {
			fRec327[l721] = 0.0f;
		}
		for (int l722 = 0; l722 < 2; l722 = l722 + 1) {
			fRec328[l722] = 0.0f;
		}
		for (int l723 = 0; l723 < 2; l723 = l723 + 1) {
			fRec323[l723] = 0.0f;
		}
		for (int l724 = 0; l724 < 2; l724 = l724 + 1) {
			fRec324[l724] = 0.0f;
		}
		for (int l725 = 0; l725 < 2; l725 = l725 + 1) {
			fRec351[l725] = 0.0f;
		}
		for (int l726 = 0; l726 < 2; l726 = l726 + 1) {
			fRec352[l726] = 0.0f;
		}
		for (int l727 = 0; l727 < 2; l727 = l727 + 1) {
			fRec319[l727] = 0.0f;
		}
		for (int l728 = 0; l728 < 2; l728 = l728 + 1) {
			fRec320[l728] = 0.0f;
		}
		for (int l729 = 0; l729 < 2; l729 = l729 + 1) {
			fRec315[l729] = 0.0f;
		}
		for (int l730 = 0; l730 < 2; l730 = l730 + 1) {
			fRec316[l730] = 0.0f;
		}
		for (int l731 = 0; l731 < 2; l731 = l731 + 1) {
			fRec355[l731] = 0.0f;
		}
		for (int l732 = 0; l732 < 2; l732 = l732 + 1) {
			fRec356[l732] = 0.0f;
		}
		for (int l733 = 0; l733 < 2; l733 = l733 + 1) {
			fRec311[l733] = 0.0f;
		}
		for (int l734 = 0; l734 < 2; l734 = l734 + 1) {
			fRec312[l734] = 0.0f;
		}
		for (int l735 = 0; l735 < 2; l735 = l735 + 1) {
			fRec307[l735] = 0.0f;
		}
		for (int l736 = 0; l736 < 2; l736 = l736 + 1) {
			fRec308[l736] = 0.0f;
		}
		for (int l737 = 0; l737 < 2; l737 = l737 + 1) {
			fRec359[l737] = 0.0f;
		}
		for (int l738 = 0; l738 < 2; l738 = l738 + 1) {
			fRec360[l738] = 0.0f;
		}
		for (int l739 = 0; l739 < 2; l739 = l739 + 1) {
			fRec303[l739] = 0.0f;
		}
		for (int l740 = 0; l740 < 2; l740 = l740 + 1) {
			fRec304[l740] = 0.0f;
		}
		for (int l741 = 0; l741 < 2; l741 = l741 + 1) {
			fRec299[l741] = 0.0f;
		}
		for (int l742 = 0; l742 < 2; l742 = l742 + 1) {
			fRec300[l742] = 0.0f;
		}
		for (int l743 = 0; l743 < 2; l743 = l743 + 1) {
			fRec363[l743] = 0.0f;
		}
		for (int l744 = 0; l744 < 2; l744 = l744 + 1) {
			fRec364[l744] = 0.0f;
		}
		for (int l745 = 0; l745 < 2; l745 = l745 + 1) {
			fRec295[l745] = 0.0f;
		}
		for (int l746 = 0; l746 < 2; l746 = l746 + 1) {
			fRec296[l746] = 0.0f;
		}
		for (int l747 = 0; l747 < 2; l747 = l747 + 1) {
			fRec291[l747] = 0.0f;
		}
		for (int l748 = 0; l748 < 2; l748 = l748 + 1) {
			fRec292[l748] = 0.0f;
		}
		for (int l749 = 0; l749 < 2; l749 = l749 + 1) {
			fRec367[l749] = 0.0f;
		}
		for (int l750 = 0; l750 < 2; l750 = l750 + 1) {
			fRec368[l750] = 0.0f;
		}
		for (int l751 = 0; l751 < 2; l751 = l751 + 1) {
			fRec287[l751] = 0.0f;
		}
		for (int l752 = 0; l752 < 2; l752 = l752 + 1) {
			fRec288[l752] = 0.0f;
		}
		for (int l753 = 0; l753 < 2; l753 = l753 + 1) {
			fRec371[l753] = 0.0f;
		}
		for (int l754 = 0; l754 < 2; l754 = l754 + 1) {
			fRec372[l754] = 0.0f;
		}
		for (int l755 = 0; l755 < 2; l755 = l755 + 1) {
			fRec375[l755] = 0.0f;
		}
		for (int l756 = 0; l756 < 2; l756 = l756 + 1) {
			fRec376[l756] = 0.0f;
		}
		for (int l757 = 0; l757 < 2; l757 = l757 + 1) {
			fRec379[l757] = 0.0f;
		}
		for (int l758 = 0; l758 < 2; l758 = l758 + 1) {
			fRec380[l758] = 0.0f;
		}
		for (int l759 = 0; l759 < 2048; l759 = l759 + 1) {
			fVec481[l759] = 0.0f;
		}
		for (int l760 = 0; l760 < 2; l760 = l760 + 1) {
			iRec5[l760] = 0;
		}
		for (int l761 = 0; l761 < 2; l761 = l761 + 1) {
			fRec6[l761] = 0.0f;
		}
		for (int l762 = 0; l762 < 2; l762 = l762 + 1) {
			fRec4[l762] = 0.0f;
		}
		for (int l763 = 0; l763 < 2; l763 = l763 + 1) {
			fRec3[l763] = 0.0f;
		}
		for (int l764 = 0; l764 < 2; l764 = l764 + 1) {
			fRec0[l764] = 0.0f;
		}
		for (int l765 = 0; l765 < 2; l765 = l765 + 1) {
			fVec482[l765] = 0.0f;
		}
		for (int l766 = 0; l766 < 2; l766 = l766 + 1) {
			fVec483[l766] = 0.0f;
		}
		for (int l767 = 0; l767 < 2; l767 = l767 + 1) {
			fRec386[l767] = 0.0f;
		}
		for (int l768 = 0; l768 < 2; l768 = l768 + 1) {
			fRec385[l768] = 0.0f;
		}
		for (int l769 = 0; l769 < 2; l769 = l769 + 1) {
			fVec484[l769] = 0.0f;
		}
		for (int l770 = 0; l770 < 2; l770 = l770 + 1) {
			fRec384[l770] = 0.0f;
		}
		for (int l771 = 0; l771 < 2; l771 = l771 + 1) {
			fRec383[l771] = 0.0f;
		}
		for (int l772 = 0; l772 < 2; l772 = l772 + 1) {
			fVec485[l772] = 0.0f;
		}
		for (int l773 = 0; l773 < 3; l773 = l773 + 1) {
			fVec486[l773] = 0.0f;
		}
		for (int l774 = 0; l774 < 7; l774 = l774 + 1) {
			fVec487[l774] = 0.0f;
		}
		for (int l775 = 0; l775 < 15; l775 = l775 + 1) {
			fVec488[l775] = 0.0f;
		}
		for (int l776 = 0; l776 < 32; l776 = l776 + 1) {
			fVec489[l776] = 0.0f;
		}
		for (int l777 = 0; l777 < 64; l777 = l777 + 1) {
			fVec490[l777] = 0.0f;
		}
		for (int l778 = 0; l778 < 128; l778 = l778 + 1) {
			fVec491[l778] = 0.0f;
		}
		for (int l779 = 0; l779 < 256; l779 = l779 + 1) {
			fVec492[l779] = 0.0f;
		}
		for (int l780 = 0; l780 < 512; l780 = l780 + 1) {
			fVec493[l780] = 0.0f;
		}
		for (int l781 = 0; l781 < 1024; l781 = l781 + 1) {
			fVec494[l781] = 0.0f;
		}
		for (int l782 = 0; l782 < 2048; l782 = l782 + 1) {
			fVec495[l782] = 0.0f;
		}
		for (int l783 = 0; l783 < 4096; l783 = l783 + 1) {
			fVec496[l783] = 0.0f;
		}
		for (int l784 = 0; l784 < 8192; l784 = l784 + 1) {
			fVec497[l784] = 0.0f;
		}
		for (int l785 = 0; l785 < 16384; l785 = l785 + 1) {
			fVec498[l785] = 0.0f;
		}
		for (int l786 = 0; l786 < 32768; l786 = l786 + 1) {
			fVec499[l786] = 0.0f;
		}
		for (int l787 = 0; l787 < 65536; l787 = l787 + 1) {
			fVec500[l787] = 0.0f;
		}
		for (int l788 = 0; l788 < 131072; l788 = l788 + 1) {
			fVec501[l788] = 0.0f;
		}
		for (int l789 = 0; l789 < 2; l789 = l789 + 1) {
			fRec391[l789] = 0.0f;
		}
		for (int l790 = 0; l790 < 2; l790 = l790 + 1) {
			fVec502[l790] = 0.0f;
		}
		for (int l791 = 0; l791 < 2; l791 = l791 + 1) {
			fVec503[l791] = 0.0f;
		}
		for (int l792 = 0; l792 < 2; l792 = l792 + 1) {
			fRec390[l792] = 0.0f;
		}
		for (int l793 = 0; l793 < 2; l793 = l793 + 1) {
			fRec389[l793] = 0.0f;
		}
		for (int l794 = 0; l794 < 2; l794 = l794 + 1) {
			fVec504[l794] = 0.0f;
		}
		for (int l795 = 0; l795 < 2; l795 = l795 + 1) {
			fRec388[l795] = 0.0f;
		}
		for (int l796 = 0; l796 < 2; l796 = l796 + 1) {
			fRec387[l796] = 0.0f;
		}
		for (int l797 = 0; l797 < 2; l797 = l797 + 1) {
			fVec505[l797] = 0.0f;
		}
		for (int l798 = 0; l798 < 3; l798 = l798 + 1) {
			fVec506[l798] = 0.0f;
		}
		for (int l799 = 0; l799 < 7; l799 = l799 + 1) {
			fVec507[l799] = 0.0f;
		}
		for (int l800 = 0; l800 < 15; l800 = l800 + 1) {
			fVec508[l800] = 0.0f;
		}
		for (int l801 = 0; l801 < 32; l801 = l801 + 1) {
			fVec509[l801] = 0.0f;
		}
		for (int l802 = 0; l802 < 64; l802 = l802 + 1) {
			fVec510[l802] = 0.0f;
		}
		for (int l803 = 0; l803 < 128; l803 = l803 + 1) {
			fVec511[l803] = 0.0f;
		}
		for (int l804 = 0; l804 < 256; l804 = l804 + 1) {
			fVec512[l804] = 0.0f;
		}
		for (int l805 = 0; l805 < 512; l805 = l805 + 1) {
			fVec513[l805] = 0.0f;
		}
		for (int l806 = 0; l806 < 1024; l806 = l806 + 1) {
			fVec514[l806] = 0.0f;
		}
		for (int l807 = 0; l807 < 2048; l807 = l807 + 1) {
			fVec515[l807] = 0.0f;
		}
		for (int l808 = 0; l808 < 4096; l808 = l808 + 1) {
			fVec516[l808] = 0.0f;
		}
		for (int l809 = 0; l809 < 8192; l809 = l809 + 1) {
			fVec517[l809] = 0.0f;
		}
		for (int l810 = 0; l810 < 16384; l810 = l810 + 1) {
			fVec518[l810] = 0.0f;
		}
		for (int l811 = 0; l811 < 32768; l811 = l811 + 1) {
			fVec519[l811] = 0.0f;
		}
		for (int l812 = 0; l812 < 65536; l812 = l812 + 1) {
			fVec520[l812] = 0.0f;
		}
		for (int l813 = 0; l813 < 131072; l813 = l813 + 1) {
			fVec521[l813] = 0.0f;
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
		ui_interface->declare(0, "0", "");
		ui_interface->openHorizontalBox("Modules");
		ui_interface->declare(&fCheckbox0, "0", "");
		ui_interface->declare(&fCheckbox0, "symbol", "bypass_global");
		ui_interface->addCheckButton("bypass global", &fCheckbox0);
		ui_interface->declare(&fCheckbox3, "1", "");
		ui_interface->addCheckButton("prefilter", &fCheckbox3);
		ui_interface->declare(&fCheckbox2, "2", "");
		ui_interface->addCheckButton("ballancer", &fCheckbox2);
		ui_interface->declare(&fCheckbox4, "3", "");
		ui_interface->addCheckButton("leveler", &fCheckbox4);
		ui_interface->declare(&fCheckbox1, "4", "");
		ui_interface->addCheckButton("comp", &fCheckbox1);
		ui_interface->closeBox();
		ui_interface->declare(0, "1", "");
		ui_interface->openVerticalBox("Spectral Ballancer");
		ui_interface->openHorizontalBox("Target Spectrum");
		ui_interface->openHorizontalBox("Parameters");
		ui_interface->declare(&fVslider2, "2", "");
		ui_interface->declare(&fVslider2, "symbol", "spectral_ballancer_timbre");
		ui_interface->addVerticalSlider("timbre", &fVslider2, FAUSTFLOAT(0.5f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.00999999978f));
		ui_interface->declare(&fVbargraph29, "symbol", "latency_global");
		ui_interface->addVerticalBargraph("latency_global", &fVbargraph29, FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->closeBox();
		ui_interface->declare(0, "3", "");
		ui_interface->openHorizontalBox("resulting gain");
		ui_interface->declare(&fVbargraph3, "1", "");
		ui_interface->declare(&fVbargraph3, "symbol", "spectral_ballancer_gain_band_ 0");
		ui_interface->addVerticalBargraph("gr  0", &fVbargraph3, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph4, "1", "");
		ui_interface->declare(&fVbargraph4, "symbol", "spectral_ballancer_gain_band_ 1");
		ui_interface->addVerticalBargraph("gr  1", &fVbargraph4, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph5, "1", "");
		ui_interface->declare(&fVbargraph5, "symbol", "spectral_ballancer_gain_band_ 2");
		ui_interface->addVerticalBargraph("gr  2", &fVbargraph5, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph6, "1", "");
		ui_interface->declare(&fVbargraph6, "symbol", "spectral_ballancer_gain_band_ 3");
		ui_interface->addVerticalBargraph("gr  3", &fVbargraph6, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph7, "1", "");
		ui_interface->declare(&fVbargraph7, "symbol", "spectral_ballancer_gain_band_ 4");
		ui_interface->addVerticalBargraph("gr  4", &fVbargraph7, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph8, "1", "");
		ui_interface->declare(&fVbargraph8, "symbol", "spectral_ballancer_gain_band_ 5");
		ui_interface->addVerticalBargraph("gr  5", &fVbargraph8, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph9, "1", "");
		ui_interface->declare(&fVbargraph9, "symbol", "spectral_ballancer_gain_band_ 6");
		ui_interface->addVerticalBargraph("gr  6", &fVbargraph9, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph10, "1", "");
		ui_interface->declare(&fVbargraph10, "symbol", "spectral_ballancer_gain_band_ 7");
		ui_interface->addVerticalBargraph("gr  7", &fVbargraph10, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph11, "1", "");
		ui_interface->declare(&fVbargraph11, "symbol", "spectral_ballancer_gain_band_ 8");
		ui_interface->addVerticalBargraph("gr  8", &fVbargraph11, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph12, "1", "");
		ui_interface->declare(&fVbargraph12, "symbol", "spectral_ballancer_gain_band_ 9");
		ui_interface->addVerticalBargraph("gr  9", &fVbargraph12, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph13, "1", "");
		ui_interface->declare(&fVbargraph13, "symbol", "spectral_ballancer_gain_band_10");
		ui_interface->addVerticalBargraph("gr 10", &fVbargraph13, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph14, "1", "");
		ui_interface->declare(&fVbargraph14, "symbol", "spectral_ballancer_gain_band_11");
		ui_interface->addVerticalBargraph("gr 11", &fVbargraph14, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph15, "1", "");
		ui_interface->declare(&fVbargraph15, "symbol", "spectral_ballancer_gain_band_12");
		ui_interface->addVerticalBargraph("gr 12", &fVbargraph15, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph16, "1", "");
		ui_interface->declare(&fVbargraph16, "symbol", "spectral_ballancer_gain_band_13");
		ui_interface->addVerticalBargraph("gr 13", &fVbargraph16, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph17, "1", "");
		ui_interface->declare(&fVbargraph17, "symbol", "spectral_ballancer_gain_band_14");
		ui_interface->addVerticalBargraph("gr 14", &fVbargraph17, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph18, "1", "");
		ui_interface->declare(&fVbargraph18, "symbol", "spectral_ballancer_gain_band_15");
		ui_interface->addVerticalBargraph("gr 15", &fVbargraph18, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph19, "1", "");
		ui_interface->declare(&fVbargraph19, "symbol", "spectral_ballancer_gain_band_16");
		ui_interface->addVerticalBargraph("gr 16", &fVbargraph19, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph20, "1", "");
		ui_interface->declare(&fVbargraph20, "symbol", "spectral_ballancer_gain_band_17");
		ui_interface->addVerticalBargraph("gr 17", &fVbargraph20, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph21, "1", "");
		ui_interface->declare(&fVbargraph21, "symbol", "spectral_ballancer_gain_band_18");
		ui_interface->addVerticalBargraph("gr 18", &fVbargraph21, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph22, "1", "");
		ui_interface->declare(&fVbargraph22, "symbol", "spectral_ballancer_gain_band_19");
		ui_interface->addVerticalBargraph("gr 19", &fVbargraph22, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->closeBox();
		ui_interface->closeBox();
		ui_interface->declare(0, "2", "");
		ui_interface->openHorizontalBox("Leveler, MBcomp, Limiter");
		ui_interface->declare(0, "1", "");
		ui_interface->openHorizontalBox("PreStage");
		ui_interface->declare(&fVslider1, "1", "");
		ui_interface->declare(&fVslider1, "symbol", "input_gain");
		ui_interface->declare(&fVslider1, "unit", "dB");
		ui_interface->addVerticalSlider("PreGain", &fVslider1, FAUSTFLOAT(0.0f), FAUSTFLOAT(-20.0f), FAUSTFLOAT(20.0f), FAUSTFLOAT(0.100000001f));
		ui_interface->declare(&fVbargraph0, "symbol", "input_peak_channel_0");
		ui_interface->addVerticalBargraph("In 0", &fVbargraph0, FAUSTFLOAT(-70.0f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph2, "symbol", "input_peak_channel_1");
		ui_interface->addVerticalBargraph("In 1", &fVbargraph2, FAUSTFLOAT(-70.0f), FAUSTFLOAT(0.0f));
		ui_interface->closeBox();
		ui_interface->declare(0, "2", "");
		ui_interface->openHorizontalBox("Leveler");
		ui_interface->declare(&fVbargraph1, "1", "");
		ui_interface->declare(&fVbargraph1, "symbol", "leveler_gain");
		ui_interface->declare(&fVbargraph1, "unit", "dB");
		ui_interface->addVerticalBargraph("gain", &fVbargraph1, FAUSTFLOAT(-50.0f), FAUSTFLOAT(50.0f));
		ui_interface->declare(&fVslider0, "3", "");
		ui_interface->declare(&fVslider0, "symbol", "leveler_target");
		ui_interface->declare(&fVslider0, "unit", "dB");
		ui_interface->addVerticalSlider("target", &fVslider0, FAUSTFLOAT(-18.0f), FAUSTFLOAT(-50.0f), FAUSTFLOAT(-2.0f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->declare(0, "3", "");
		ui_interface->openHorizontalBox("Multiband Conpressor");
		ui_interface->openHorizontalBox("Parameters");
		ui_interface->declare(&fVslider3, "2", "");
		ui_interface->addVerticalSlider("mb morph", &fVslider3, FAUSTFLOAT(0.5f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.00999999978f));
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("bands");
		ui_interface->declare(&fVbargraph27, "8", "");
		ui_interface->declare(&fVbargraph27, "symbol", "multiband_compressor_gain_band_1");
		ui_interface->declare(&fVbargraph27, "unit", "dB");
		ui_interface->addVerticalBargraph("gr 1", &fVbargraph27, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph26, "8", "");
		ui_interface->declare(&fVbargraph26, "symbol", "multiband_compressor_gain_band_2");
		ui_interface->declare(&fVbargraph26, "unit", "dB");
		ui_interface->addVerticalBargraph("gr 2", &fVbargraph26, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph25, "8", "");
		ui_interface->declare(&fVbargraph25, "symbol", "multiband_compressor_gain_band_3");
		ui_interface->declare(&fVbargraph25, "unit", "dB");
		ui_interface->addVerticalBargraph("gr 3", &fVbargraph25, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph24, "8", "");
		ui_interface->declare(&fVbargraph24, "symbol", "multiband_compressor_gain_band_4");
		ui_interface->declare(&fVbargraph24, "unit", "dB");
		ui_interface->addVerticalBargraph("gr 4", &fVbargraph24, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph23, "8", "");
		ui_interface->declare(&fVbargraph23, "symbol", "multiband_compressor_gain_band_5");
		ui_interface->declare(&fVbargraph23, "unit", "dB");
		ui_interface->addVerticalBargraph("gr 5", &fVbargraph23, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->closeBox();
		ui_interface->closeBox();
		ui_interface->declare(0, "6", "");
		ui_interface->openHorizontalBox("PostStage");
		ui_interface->declare(&fVbargraph28, "0", "");
		ui_interface->declare(&fVbargraph28, "symbol", "limiter_gain");
		ui_interface->addVerticalBargraph("LimiterGR", &fVbargraph28, FAUSTFLOAT(-60.0f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph32, "symbol", "lufs_out_meter");
		ui_interface->declare(&fVbargraph32, "unit", "dB");
		ui_interface->addVerticalBargraph("lufs", &fVbargraph32, FAUSTFLOAT(-120.0f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph30, "symbol", "output_peak_channel_0");
		ui_interface->addVerticalBargraph("Out 0", &fVbargraph30, FAUSTFLOAT(-70.0f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph31, "symbol", "output_peak_channel_1");
		ui_interface->addVerticalBargraph("Out 1", &fVbargraph31, FAUSTFLOAT(-70.0f), FAUSTFLOAT(0.0f));
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
		float fSlow2 = float(fVslider0);
		float fSlow3 = fSlow2 + 10.0f;
		float fSlow4 = fSlow2 + 10.0f;
		float fSlow5 = fConst2 * float(fCheckbox2);
		float fSlow6 = fConst2 * std::pow(10.0f, 0.0500000007f * float(fVslider1));
		float fSlow7 = fConst2 * float(fCheckbox3);
		float fSlow8 = float(fVslider2);
		float fSlow9 = 2.0f * fSlow8;
		float fSlow10 = 3.0f * fSlow8;
		float fSlow11 = 4.0f * fSlow8;
		float fSlow12 = 5.0f * fSlow8;
		float fSlow13 = 6.0f * fSlow8;
		float fSlow14 = 9.0f * fSlow8;
		float fSlow15 = 13.0f * fSlow8;
		float fSlow16 = fConst2 * float(fCheckbox4);
		float fSlow17 = float(fVslider3);
		float fSlow18 = fSlow17 + 1.0f;
		float fSlow19 = 0.400000006f * fSlow18;
		float fSlow20 = 4.0f * fSlow17;
		float fSlow21 = fSlow2 + -2.5f - fSlow20;
		float fSlow22 = fSlow2 + 6.5f - fSlow20;
		float fSlow23 = 0.00499999989f - 0.00300000003f * fSlow17;
		int iSlow24 = std::fabs(fSlow23) < 1.1920929e-07f;
		float fThen422 = std::exp(0.0f - fConst365 / ((iSlow24) ? 1.0f : fSlow23));
		float fSlow25 = ((iSlow24) ? 0.0f : fThen422);
		float fSlow26 = 0.0500000007f - 0.0399999991f * fSlow17;
		int iSlow27 = std::fabs(fSlow26) < 1.1920929e-07f;
		float fThen424 = std::exp(0.0f - fConst365 / ((iSlow27) ? 1.0f : fSlow26));
		float fSlow28 = ((iSlow27) ? 0.0f : fThen424);
		float fSlow29 = 0.400000006f * fSlow17;
		float fSlow30 = fSlow29 + 0.300000012f;
		float fSlow31 = 1.0f - fSlow17;
		float fSlow32 = 4.0f * (1.0f - fSlow31);
		float fSlow33 = fSlow2 - fSlow32;
		float fSlow34 = fSlow2 + 4.0f * (fSlow31 + 1.0f);
		float fSlow35 = fSlow2 + 4.0f * fSlow31;
		float fSlow36 = 0.00400000019f * fSlow17;
		float fSlow37 = 0.00800000038f - fSlow36;
		int iSlow38 = std::fabs(fSlow37) < 1.1920929e-07f;
		float fThen432 = std::exp(0.0f - fConst365 / ((iSlow38) ? 1.0f : fSlow37));
		float fSlow39 = ((iSlow38) ? 0.0f : fThen432);
		float fSlow40 = fSlow29 + 0.200000003f;
		float fSlow41 = fSlow2 + 2.5f - fSlow20;
		float fSlow42 = fSlow2 + 9.5f - fSlow20;
		float fSlow43 = 0.00999999978f - fSlow36;
		int iSlow44 = std::fabs(fSlow43) < 1.1920929e-07f;
		float fThen440 = std::exp(0.0f - fConst365 / ((iSlow44) ? 1.0f : fSlow43));
		float fSlow45 = ((iSlow44) ? 0.0f : fThen440);
		float fSlow46 = 0.0500000007f - 0.0299999993f * fSlow17;
		int iSlow47 = std::fabs(fSlow46) < 1.1920929e-07f;
		float fThen442 = std::exp(0.0f - fConst365 / ((iSlow47) ? 1.0f : fSlow46));
		float fSlow48 = ((iSlow47) ? 0.0f : fThen442);
		float fSlow49 = 0.300000012f * fSlow17 + 0.200000003f;
		float fSlow50 = fSlow2 + 5.0f - fSlow20;
		float fSlow51 = fSlow2 + 11.0f - fSlow20;
		float fSlow52 = 0.0120000001f - fSlow36;
		int iSlow53 = std::fabs(fSlow52) < 1.1920929e-07f;
		float fThen450 = std::exp(0.0f - fConst365 / ((iSlow53) ? 1.0f : fSlow52));
		float fSlow54 = ((iSlow53) ? 0.0f : fThen450);
		float fSlow55 = 0.0500000007f - 0.0199999996f * fSlow17;
		int iSlow56 = std::fabs(fSlow55) < 1.1920929e-07f;
		float fThen452 = std::exp(0.0f - fConst365 / ((iSlow56) ? 1.0f : fSlow55));
		float fSlow57 = ((iSlow56) ? 0.0f : fThen452);
		float fSlow58 = 0.200000003f * fSlow18;
		float fSlow59 = 3.0f * fSlow17;
		float fSlow60 = fSlow2 + -1.0f - fSlow59;
		float fSlow61 = fSlow2 + 5.0f - fSlow59;
		float fSlow62 = 0.0149999997f - 0.00499999989f * fSlow17;
		int iSlow63 = std::fabs(fSlow62) < 1.1920929e-07f;
		float fThen460 = std::exp(0.0f - fConst365 / ((iSlow63) ? 1.0f : fSlow62));
		float fSlow64 = ((iSlow63) ? 0.0f : fThen460);
		fVbargraph29 = FAUSTFLOAT(0.109999999f);
		for (int i0 = 0; i0 < count; i0 = i0 + 1) {
			float fTemp0 = float(input0[i0]);
			fRec1[0] = std::max<float>(fRec1[1] - fConst1, std::min<float>(10.0f, 20.0f * std::log10(std::max<float>(1.17549435e-38f, std::max<float>(0.000316227757f, std::fabs(fTemp0))))));
			fVbargraph0 = FAUSTFLOAT(fRec1[0]);
			float fTemp1 = fTemp0;
			fRec2[0] = fSlow0 + fConst3 * fRec2[1];
			fRec7[0] = fSlow1 + fConst3 * fRec7[1];
			float fTemp2 = std::fabs(std::fabs(fRec8[1]) + std::fabs(fRec9[1]));
			fVec0[0] = fTemp2;
			float fTemp3 = std::max<float>(fTemp2, fVec0[1]);
			fVec1[0] = fTemp3;
			float fElse1 = fVec1[iConst9];
			float fTemp4 = std::max<float>(fTemp3, fVec1[2]);
			fVec2[0] = fTemp4;
			float fElse2 = fVec2[iConst15];
			float fTemp5 = std::max<float>(fTemp4, fVec2[4]);
			fVec3[0] = fTemp5;
			float fElse3 = fVec3[iConst19];
			fVec4[IOTA0 & 31] = std::max<float>(fTemp5, fVec3[8]);
			float fElse4 = fVec4[(IOTA0 - iConst21) & 31];
			float fTemp6 = 20.0f * std::log10(std::max<float>(1.17549435e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst9) ? fTemp2 : -3.40282347e+38f), ((iConst11) ? fElse1 : -3.40282347e+38f)), ((iConst13) ? fElse2 : -3.40282347e+38f)), ((iConst17) ? fElse3 : -3.40282347e+38f)), ((iConst20) ? fElse4 : -3.40282347e+38f))));
			int iTemp7 = (fTemp6 > fSlow3) + (fTemp6 > fSlow4);
			float fElse5 = 0.0f - 4194304.0f * mydsp_faustpower2_f((fTemp6 + -10.0f) - fSlow2);
			float fThen6 = ((iTemp7 == 1) ? fElse5 : 0.0f);
			float fElse6 = (fTemp6 + -10.0f) - fSlow2;
			float fTemp8 = std::max<float>(-3.40282347e+38f, ((iTemp7 == 0) ? fElse6 : fThen6));
			float fTemp9 = ((fTemp8 > fRec18[1]) ? 0.0f : fConst22);
			fRec18[0] = fTemp8 * (1.0f - fTemp9) + fRec18[1] * fTemp9;
			float fTemp10 = std::min<float>(1.0f, std::max<float>(0.0f, std::pow(10.0f, 0.0500000007f * fRec18[0])));
			float fTemp11 = std::tan(fConst6 * std::min<float>(fConst7, fTemp10 * (fConst23 * std::fabs(fRec11[1]) + 0.131600007f)));
			fVec5[0] = 0.0f - fConst33 * (fConst34 * fRec21[1] - fConst35 * fRec8[2]);
			fRec22[0] = fVec5[1] + fConst33 * (fConst36 * fRec8[1] - 2.0f * (fConst38 * fRec22[1] - fConst39 * fRec8[2]));
			fRec21[0] = fRec22[0];
			fVec6[0] = 0.500327051f * fRec21[1] - fConst41 * fRec19[1];
			fRec20[0] = fConst31 * fRec21[1] + fConst40 * (fVec6[1] - fConst42 * fRec20[1] + 0.500327051f * fRec21[0]);
			fRec19[0] = fRec20[0];
			float fTemp12 = mydsp_faustpower2_f(fRec19[0]);
			fVec7[0] = fTemp12;
			float fTemp13 = fTemp12 + fVec7[1];
			fVec8[0] = fTemp13;
			float fTemp14 = fTemp13 + fVec8[2];
			fVec9[0] = fTemp14;
			float fTemp15 = fTemp14 + fVec9[4];
			fVec10[0] = fTemp15;
			float fTemp16 = fTemp15 + fVec10[8];
			fVec11[IOTA0 & 31] = fTemp16;
			float fTemp17 = fTemp16 + fVec11[(IOTA0 - 16) & 31];
			fVec12[IOTA0 & 63] = fTemp17;
			float fTemp18 = fTemp17 + fVec12[(IOTA0 - 32) & 63];
			fVec13[IOTA0 & 127] = fTemp18;
			float fTemp19 = fTemp18 + fVec13[(IOTA0 - 64) & 127];
			fVec14[IOTA0 & 255] = fTemp19;
			float fTemp20 = fTemp19 + fVec14[(IOTA0 - 128) & 255];
			fVec15[IOTA0 & 511] = fTemp20;
			float fTemp21 = fTemp20 + fVec15[(IOTA0 - 256) & 511];
			fVec16[IOTA0 & 1023] = fTemp21;
			fVec17[IOTA0 & 2047] = fTemp21 + fVec16[(IOTA0 - 512) & 1023];
			float fElse8 = 0.860009849f * fVec17[(IOTA0 - iConst61) & 2047];
			float fElse9 = 0.860009849f * fVec16[(IOTA0 - iConst63) & 1023];
			float fElse10 = 0.860009849f * fVec15[(IOTA0 - iConst65) & 511];
			float fElse11 = 0.860009849f * fVec14[(IOTA0 - iConst67) & 255];
			float fElse12 = 0.860009849f * fVec13[(IOTA0 - iConst69) & 127];
			float fElse13 = 0.860009849f * fVec12[(IOTA0 - iConst71) & 63];
			float fElse14 = 0.860009849f * fVec11[(IOTA0 - iConst73) & 31];
			float fElse15 = 0.860009849f * fVec10[iConst75];
			float fElse16 = 0.860009849f * fVec9[iConst77];
			float fElse17 = 0.860009849f * fTemp12;
			float fElse18 = 0.860009849f * fVec8[iConst78];
			fVec18[0] = 0.0f - fConst33 * (fConst34 * fRec25[1] - fConst35 * fRec9[2]);
			fRec26[0] = fVec18[1] + fConst33 * (fConst36 * fRec9[1] - 2.0f * (fConst38 * fRec26[1] - fConst39 * fRec9[2]));
			fRec25[0] = fRec26[0];
			fVec19[0] = 0.500327051f * fRec25[1] - fConst41 * fRec23[1];
			fRec24[0] = fConst31 * fRec25[1] + fConst40 * (fVec19[1] - fConst42 * fRec24[1] + 0.500327051f * fRec25[0]);
			fRec23[0] = fRec24[0];
			float fTemp22 = mydsp_faustpower2_f(fRec23[0]);
			fVec20[0] = fTemp22;
			float fTemp23 = fTemp22 + fVec20[1];
			fVec21[0] = fTemp23;
			float fTemp24 = fTemp23 + fVec21[2];
			fVec22[0] = fTemp24;
			float fTemp25 = fTemp24 + fVec22[4];
			fVec23[0] = fTemp25;
			float fTemp26 = fTemp25 + fVec23[8];
			fVec24[IOTA0 & 31] = fTemp26;
			float fTemp27 = fTemp26 + fVec24[(IOTA0 - 16) & 31];
			fVec25[IOTA0 & 63] = fTemp27;
			float fTemp28 = fTemp27 + fVec25[(IOTA0 - 32) & 63];
			fVec26[IOTA0 & 127] = fTemp28;
			float fTemp29 = fTemp28 + fVec26[(IOTA0 - 64) & 127];
			fVec27[IOTA0 & 255] = fTemp29;
			float fTemp30 = fTemp29 + fVec27[(IOTA0 - 128) & 255];
			fVec28[IOTA0 & 511] = fTemp30;
			float fTemp31 = fTemp30 + fVec28[(IOTA0 - 256) & 511];
			fVec29[IOTA0 & 1023] = fTemp31;
			fVec30[IOTA0 & 2047] = fTemp31 + fVec29[(IOTA0 - 512) & 1023];
			float fElse19 = 0.860009849f * fVec30[(IOTA0 - iConst61) & 2047];
			float fElse20 = 0.860009849f * fVec29[(IOTA0 - iConst63) & 1023];
			float fElse21 = 0.860009849f * fVec28[(IOTA0 - iConst65) & 511];
			float fElse22 = 0.860009849f * fVec27[(IOTA0 - iConst67) & 255];
			float fElse23 = 0.860009849f * fVec26[(IOTA0 - iConst69) & 127];
			float fElse24 = 0.860009849f * fVec25[(IOTA0 - iConst71) & 63];
			float fElse25 = 0.860009849f * fVec24[(IOTA0 - iConst73) & 31];
			float fElse26 = 0.860009849f * fVec23[iConst75];
			float fElse27 = 0.860009849f * fVec22[iConst77];
			float fElse28 = 0.860009849f * fTemp22;
			float fElse29 = 0.860009849f * fVec21[iConst78];
			float fTemp32 = fTemp11 + 2.0f;
			float fTemp33 = fSlow2 + fRec10[1] + 0.690999985f - (4.34294462f * std::log(std::max<float>(9.99999996e-13f, fConst26 * (((iConst27) ? fElse8 : 0.0f) + ((iConst62) ? fElse9 : 0.0f) + ((iConst64) ? fElse10 : 0.0f) + ((iConst66) ? fElse11 : 0.0f) + ((iConst68) ? fElse12 : 0.0f) + ((iConst70) ? fElse13 : 0.0f) + ((iConst72) ? fElse14 : 0.0f) + ((iConst74) ? fElse15 : 0.0f) + ((iConst76) ? fElse16 : 0.0f) + ((iConst78) ? fElse17 : 0.0f) + ((iConst79) ? fElse18 : 0.0f) + ((iConst27) ? fElse19 : 0.0f) + ((iConst62) ? fElse20 : 0.0f) + ((iConst64) ? fElse21 : 0.0f) + ((iConst66) ? fElse22 : 0.0f) + ((iConst68) ? fElse23 : 0.0f) + ((iConst70) ? fElse24 : 0.0f) + ((iConst72) ? fElse25 : 0.0f) + ((iConst74) ? fElse26 : 0.0f) + ((iConst76) ? fElse27 : 0.0f) + ((iConst78) ? fElse28 : 0.0f) + ((iConst79) ? fElse29 : 0.0f)))) + fRec13[1] * fTemp32 + fRec14[1]);
			float fTemp34 = fTemp11 * fTemp32 + 1.0f;
			float fTemp35 = (fTemp11 * fTemp33) / fTemp34;
			fRec13[0] = fRec13[1] + 2.0f * fTemp35;
			float fTemp36 = fRec13[1] + fTemp35;
			float fTemp37 = fTemp11 * fTemp36;
			fRec14[0] = fRec14[1] + 2.0f * fTemp37;
			float fRec15 = fTemp36;
			float fRec16 = fTemp33 / fTemp34;
			float fRec17 = fRec14[1] + fTemp37;
			fRec11[0] = fRec15;
			float fRec12 = fRec17;
			fVbargraph1 = FAUSTFLOAT(std::max<float>(-30.0f, std::min<float>(30.0f, fRec12)));
			fRec10[0] = fVbargraph1;
			float fTemp38 = std::pow(10.0f, 0.0500000007f * fRec10[0]);
			fRec27[0] = fSlow5 + fConst3 * fRec27[1];
			fRec28[0] = fSlow6 + fConst3 * fRec28[1];
			float fTemp39 = fTemp1 * fRec28[0];
			fRec29[0] = fSlow7 + fConst3 * fRec29[1];
			float fTemp40 = 1.0f - fRec29[0];
			fRec31[0] = fTemp39 - fConst85 * (fConst88 * fRec31[2] + fConst89 * fRec31[1]);
			fRec30[0] = fConst85 * (fConst87 * fRec31[0] + fConst90 * fRec31[1] + fConst87 * fRec31[2]) - fConst82 * (fConst91 * fRec30[2] + fConst92 * fRec30[1]);
			float fTemp41 = fRec30[2] + fRec30[0] + 2.0f * fRec30[1];
			float fTemp42 = fRec28[0] * fRec29[0];
			float fTemp43 = float(input1[i0]);
			fRec37[0] = std::max<float>(fRec37[1] - fConst1, std::min<float>(10.0f, 20.0f * std::log10(std::max<float>(1.17549435e-38f, std::max<float>(0.000316227757f, std::fabs(fTemp43))))));
			fVbargraph2 = FAUSTFLOAT(fRec37[0]);
			float fTemp44 = fTemp43;
			fRec39[0] = fRec28[0] * fTemp44 - fConst85 * (fConst88 * fRec39[2] + fConst89 * fRec39[1]);
			fRec38[0] = fConst85 * (fConst87 * fRec39[0] + fConst90 * fRec39[1] + fConst87 * fRec39[2]) - fConst82 * (fConst91 * fRec38[2] + fConst92 * fRec38[1]);
			float fTemp45 = fRec38[2] + fRec38[0] + 2.0f * fRec38[1];
			float fTemp46 = fTemp42 * (fTemp1 + fTemp44) + fConst82 * fTemp40 * (fTemp41 + fTemp45);
			fVec31[0] = fTemp46;
			float fTemp47 = 0.5f * fTemp46;
			fRec36[0] = fTemp47 - fConst99 * (fConst100 * fRec36[2] + fConst89 * fRec36[1]);
			float fTemp48 = fConst98 * fRec36[0] + fConst101 * fRec36[2];
			fVec32[IOTA0 & 32767] = fTemp48;
			float fTemp49 = fVec32[(IOTA0 - 1) & 32767];
			fVec33[0] = fConst96 * fTemp49 - fConst34 * fRec34[1];
			fRec35[0] = fConst33 * (fVec33[1] - fConst102 * fRec35[1] + fConst103 * fTemp49 + fConst104 * fTemp48);
			fRec34[0] = fRec35[0];
			fVec34[0] = 0.500327051f * fRec34[1] - fConst41 * fRec32[1];
			fRec33[0] = fConst31 * fRec34[1] + fConst40 * (fVec34[1] - fConst42 * fRec33[1] + 0.500327051f * fRec34[0]);
			fRec32[0] = fRec33[0];
			float fTemp50 = mydsp_faustpower2_f(fRec32[0]);
			fVec35[0] = fTemp50;
			float fTemp51 = fTemp50 + fVec35[1];
			fVec36[0] = fTemp51;
			float fTemp52 = fTemp51 + fVec36[2];
			fVec37[0] = fTemp52;
			float fTemp53 = fTemp52 + fVec37[4];
			fVec38[0] = fTemp53;
			float fTemp54 = fTemp53 + fVec38[8];
			fVec39[IOTA0 & 31] = fTemp54;
			float fTemp55 = fTemp54 + fVec39[(IOTA0 - 16) & 31];
			fVec40[IOTA0 & 63] = fTemp55;
			float fTemp56 = fTemp55 + fVec40[(IOTA0 - 32) & 63];
			fVec41[IOTA0 & 127] = fTemp56;
			float fTemp57 = fTemp56 + fVec41[(IOTA0 - 64) & 127];
			fVec42[IOTA0 & 255] = fTemp57;
			float fTemp58 = fTemp57 + fVec42[(IOTA0 - 128) & 255];
			fVec43[IOTA0 & 511] = fTemp58;
			float fTemp59 = fTemp58 + fVec43[(IOTA0 - 256) & 511];
			fVec44[IOTA0 & 1023] = fTemp59;
			float fTemp60 = fTemp59 + fVec44[(IOTA0 - 512) & 1023];
			fVec45[IOTA0 & 2047] = fTemp60;
			float fTemp61 = fTemp60 + fVec45[(IOTA0 - 1024) & 2047];
			fVec46[IOTA0 & 4095] = fTemp61;
			float fTemp62 = fTemp61 + fVec46[(IOTA0 - 2048) & 4095];
			fVec47[IOTA0 & 8191] = fTemp62;
			float fTemp63 = fTemp62 + fVec47[(IOTA0 - 4096) & 8191];
			fVec48[IOTA0 & 16383] = fTemp63;
			float fTemp64 = fTemp63 + fVec48[(IOTA0 - 8192) & 16383];
			fVec49[IOTA0 & 32767] = fTemp64;
			float fTemp65 = fTemp64 + fVec49[(IOTA0 - 16384) & 32767];
			fVec50[IOTA0 & 65535] = fTemp65;
			float fTemp66 = fTemp65 + fVec50[(IOTA0 - 32768) & 65535];
			fVec51[IOTA0 & 131071] = fTemp66;
			fVec52[IOTA0 & 262143] = fTemp66 + fVec51[(IOTA0 - 65536) & 131071];
			float fElse30 = 0.860009849f * fVec52[(IOTA0 - iConst137) & 262143];
			float fElse31 = 0.860009849f * fVec51[(IOTA0 - iConst139) & 131071];
			float fElse32 = 0.860009849f * fVec50[(IOTA0 - iConst141) & 65535];
			float fElse33 = 0.860009849f * fVec49[(IOTA0 - iConst143) & 32767];
			float fElse34 = 0.860009849f * fVec48[(IOTA0 - iConst145) & 16383];
			float fElse35 = 0.860009849f * fVec47[(IOTA0 - iConst147) & 8191];
			float fElse36 = 0.860009849f * fVec46[(IOTA0 - iConst149) & 4095];
			float fElse37 = 0.860009849f * fVec45[(IOTA0 - iConst151) & 2047];
			float fElse38 = 0.860009849f * fVec44[(IOTA0 - iConst153) & 1023];
			float fElse39 = 0.860009849f * fVec43[(IOTA0 - iConst155) & 511];
			float fElse40 = 0.860009849f * fVec42[(IOTA0 - iConst157) & 255];
			float fElse41 = 0.860009849f * fVec41[(IOTA0 - iConst159) & 127];
			float fElse42 = 0.860009849f * fVec40[(IOTA0 - iConst161) & 63];
			float fElse43 = 0.860009849f * fVec39[(IOTA0 - iConst163) & 31];
			float fElse44 = 0.860009849f * fVec38[iConst165];
			float fElse45 = 0.860009849f * fVec37[iConst167];
			float fElse46 = 0.860009849f * fTemp50;
			float fElse47 = 0.860009849f * fVec36[iConst168];
			fVec53[0] = fConst170 * fVec31[1] - fConst34 * fRec42[1];
			fRec43[0] = fConst33 * (fVec53[1] - fConst102 * fRec43[1] + fConst39 * fVec31[1] + fConst171 * fTemp46);
			fRec42[0] = fRec43[0];
			fVec54[0] = 0.500327051f * fRec42[1] - fConst41 * fRec40[1];
			fRec41[0] = fConst31 * fRec42[1] + fConst40 * (fVec54[1] - fConst42 * fRec41[1] + 0.500327051f * fRec42[0]);
			fRec40[0] = fRec41[0];
			float fTemp67 = mydsp_faustpower2_f(fRec40[0]);
			fVec55[0] = fTemp67;
			float fTemp68 = fTemp67 + fVec55[1];
			fVec56[0] = fTemp68;
			float fTemp69 = fTemp68 + fVec56[2];
			fVec57[0] = fTemp69;
			float fTemp70 = fTemp69 + fVec57[4];
			fVec58[0] = fTemp70;
			float fTemp71 = fTemp70 + fVec58[8];
			fVec59[IOTA0 & 31] = fTemp71;
			float fTemp72 = fTemp71 + fVec59[(IOTA0 - 16) & 31];
			fVec60[IOTA0 & 63] = fTemp72;
			float fTemp73 = fTemp72 + fVec60[(IOTA0 - 32) & 63];
			fVec61[IOTA0 & 127] = fTemp73;
			float fTemp74 = fTemp73 + fVec61[(IOTA0 - 64) & 127];
			fVec62[IOTA0 & 255] = fTemp74;
			float fTemp75 = fTemp74 + fVec62[(IOTA0 - 128) & 255];
			fVec63[IOTA0 & 511] = fTemp75;
			float fTemp76 = fTemp75 + fVec63[(IOTA0 - 256) & 511];
			fVec64[IOTA0 & 1023] = fTemp76;
			float fTemp77 = fTemp76 + fVec64[(IOTA0 - 512) & 1023];
			fVec65[IOTA0 & 2047] = fTemp77;
			float fTemp78 = fTemp77 + fVec65[(IOTA0 - 1024) & 2047];
			fVec66[IOTA0 & 4095] = fTemp78;
			float fTemp79 = fTemp78 + fVec66[(IOTA0 - 2048) & 4095];
			fVec67[IOTA0 & 8191] = fTemp79;
			float fTemp80 = fTemp79 + fVec67[(IOTA0 - 4096) & 8191];
			fVec68[IOTA0 & 16383] = fTemp80;
			float fTemp81 = fTemp80 + fVec68[(IOTA0 - 8192) & 16383];
			fVec69[IOTA0 & 32767] = fTemp81;
			float fTemp82 = fTemp81 + fVec69[(IOTA0 - 16384) & 32767];
			fVec70[IOTA0 & 65535] = fTemp82;
			float fTemp83 = fTemp82 + fVec70[(IOTA0 - 32768) & 65535];
			fVec71[IOTA0 & 131071] = fTemp83;
			fVec72[IOTA0 & 262143] = fTemp83 + fVec71[(IOTA0 - 65536) & 131071];
			float fElse48 = 0.860009849f * fVec72[(IOTA0 - iConst137) & 262143];
			float fElse49 = 0.860009849f * fVec71[(IOTA0 - iConst139) & 131071];
			float fElse50 = 0.860009849f * fVec70[(IOTA0 - iConst141) & 65535];
			float fElse51 = 0.860009849f * fVec69[(IOTA0 - iConst143) & 32767];
			float fElse52 = 0.860009849f * fVec68[(IOTA0 - iConst145) & 16383];
			float fElse53 = 0.860009849f * fVec67[(IOTA0 - iConst147) & 8191];
			float fElse54 = 0.860009849f * fVec66[(IOTA0 - iConst149) & 4095];
			float fElse55 = 0.860009849f * fVec65[(IOTA0 - iConst151) & 2047];
			float fElse56 = 0.860009849f * fVec64[(IOTA0 - iConst153) & 1023];
			float fElse57 = 0.860009849f * fVec63[(IOTA0 - iConst155) & 511];
			float fElse58 = 0.860009849f * fVec62[(IOTA0 - iConst157) & 255];
			float fElse59 = 0.860009849f * fVec61[(IOTA0 - iConst159) & 127];
			float fElse60 = 0.860009849f * fVec60[(IOTA0 - iConst161) & 63];
			float fElse61 = 0.860009849f * fVec59[(IOTA0 - iConst163) & 31];
			float fElse62 = 0.860009849f * fVec58[iConst165];
			float fElse63 = 0.860009849f * fVec57[iConst167];
			float fElse64 = 0.860009849f * fTemp67;
			float fElse65 = 0.860009849f * fVec56[iConst168];
			float fTemp84 = std::log(std::max<float>(9.99999996e-13f, fConst94 * (((iConst95) ? fElse48 : 0.0f) + ((iConst138) ? fElse49 : 0.0f) + ((iConst140) ? fElse50 : 0.0f) + ((iConst142) ? fElse51 : 0.0f) + ((iConst144) ? fElse52 : 0.0f) + ((iConst146) ? fElse53 : 0.0f) + ((iConst148) ? fElse54 : 0.0f) + ((iConst150) ? fElse55 : 0.0f) + ((iConst152) ? fElse56 : 0.0f) + ((iConst154) ? fElse57 : 0.0f) + ((iConst156) ? fElse58 : 0.0f) + ((iConst158) ? fElse59 : 0.0f) + ((iConst160) ? fElse60 : 0.0f) + ((iConst162) ? fElse61 : 0.0f) + ((iConst164) ? fElse62 : 0.0f) + ((iConst166) ? fElse63 : 0.0f) + ((iConst168) ? fElse64 : 0.0f) + ((iConst169) ? fElse65 : 0.0f))));
			float fTemp85 = std::fabs(fTemp47);
			fVec73[0] = fTemp85;
			float fTemp86 = std::max<float>(fTemp85, fVec73[1]);
			fVec74[0] = fTemp86;
			float fElse67 = fVec74[iConst173];
			float fTemp87 = std::max<float>(fTemp86, fVec74[2]);
			fVec75[0] = fTemp87;
			float fElse68 = fVec75[iConst179];
			float fTemp88 = std::max<float>(fTemp87, fVec75[4]);
			fVec76[0] = fTemp88;
			float fElse69 = fVec76[iConst183];
			float fTemp89 = std::max<float>(fTemp88, fVec76[8]);
			fVec77[IOTA0 & 31] = fTemp89;
			float fElse70 = fVec77[(IOTA0 - iConst187) & 31];
			float fTemp90 = std::max<float>(fTemp89, fVec77[(IOTA0 - 16) & 31]);
			fVec78[IOTA0 & 63] = fTemp90;
			float fElse71 = fVec78[(IOTA0 - iConst191) & 63];
			float fTemp91 = std::max<float>(fTemp90, fVec78[(IOTA0 - 32) & 63]);
			fVec79[IOTA0 & 127] = fTemp91;
			float fElse72 = fVec79[(IOTA0 - iConst195) & 127];
			fVec80[IOTA0 & 255] = std::max<float>(fTemp91, fVec79[(IOTA0 - 64) & 127]);
			float fElse73 = fVec80[(IOTA0 - iConst197) & 255];
			float fTemp92 = std::log10(std::max<float>(1.17549435e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst173) ? fTemp85 : -3.40282347e+38f), ((iConst175) ? fElse67 : -3.40282347e+38f)), ((iConst177) ? fElse68 : -3.40282347e+38f)), ((iConst181) ? fElse69 : -3.40282347e+38f)), ((iConst185) ? fElse70 : -3.40282347e+38f)), ((iConst189) ? fElse71 : -3.40282347e+38f)), ((iConst193) ? fElse72 : -3.40282347e+38f)), ((iConst196) ? fElse73 : -3.40282347e+38f))));
			float fTemp93 = 20.0f * fTemp92;
			int iTemp94 = (fTemp93 > -20.0f) + (fTemp93 > -20.0f);
			float fTemp95 = 20.0f * (fTemp92 + 1.0f);
			float fElse74 = 0.0f - 4194304.0f * mydsp_faustpower2_f(fTemp95 + -5.96046448e-08f);
			float fThen75 = ((iTemp94 == 1) ? fElse74 : 0.0f);
			float fTemp96 = std::max<float>(-3.40282347e+38f, 0.800000012f * ((iTemp94 == 0) ? fTemp95 : fThen75));
			float fTemp97 = ((fTemp96 > fRec44[1]) ? fConst199 : fConst198);
			fRec44[0] = fTemp96 * (1.0f - fTemp97) + fRec44[1] * fTemp97;
			float fTemp98 = std::min<float>(1.0f, std::max<float>(0.0f, std::pow(10.0f, 0.0500000007f * fRec44[0])));
			float fTemp99 = fTemp98;
			float fTemp100 = (-22.0f - 4.34294462f * (std::log(std::max<float>(9.99999996e-13f, fConst94 * (((iConst95) ? fElse30 : 0.0f) + ((iConst138) ? fElse31 : 0.0f) + ((iConst140) ? fElse32 : 0.0f) + ((iConst142) ? fElse33 : 0.0f) + ((iConst144) ? fElse34 : 0.0f) + ((iConst146) ? fElse35 : 0.0f) + ((iConst148) ? fElse36 : 0.0f) + ((iConst150) ? fElse37 : 0.0f) + ((iConst152) ? fElse38 : 0.0f) + ((iConst154) ? fElse39 : 0.0f) + ((iConst156) ? fElse40 : 0.0f) + ((iConst158) ? fElse41 : 0.0f) + ((iConst160) ? fElse42 : 0.0f) + ((iConst162) ? fElse43 : 0.0f) + ((iConst164) ? fElse44 : 0.0f) + ((iConst166) ? fElse45 : 0.0f) + ((iConst168) ? fElse46 : 0.0f) + ((iConst169) ? fElse47 : 0.0f)))) - fTemp84) - fSlow9) * fTemp99;
			fVbargraph3 = FAUSTFLOAT(fTemp100);
			fRec49[0] = fTemp47 - fConst205 * (fConst206 * fRec49[2] + fConst207 * fRec49[1]);
			float fTemp101 = fConst204 * fRec49[0] + fConst208 * fRec49[2];
			fVec81[IOTA0 & 32767] = fTemp101;
			float fTemp102 = fVec81[(IOTA0 - 1) & 32767];
			fVec82[0] = fConst96 * fTemp102 - fConst34 * fRec47[1];
			fRec48[0] = fConst33 * (fVec82[1] - fConst102 * fRec48[1] + fConst103 * fTemp102 + fConst104 * fTemp101);
			fRec47[0] = fRec48[0];
			fVec83[0] = 0.500327051f * fRec47[1] - fConst41 * fRec45[1];
			fRec46[0] = fConst31 * fRec47[1] + fConst40 * (fVec83[1] - fConst42 * fRec46[1] + 0.500327051f * fRec47[0]);
			fRec45[0] = fRec46[0];
			float fTemp103 = mydsp_faustpower2_f(fRec45[0]);
			fVec84[0] = fTemp103;
			float fTemp104 = fTemp103 + fVec84[1];
			fVec85[0] = fTemp104;
			float fTemp105 = fTemp104 + fVec85[2];
			fVec86[0] = fTemp105;
			float fTemp106 = fTemp105 + fVec86[4];
			fVec87[0] = fTemp106;
			float fTemp107 = fTemp106 + fVec87[8];
			fVec88[IOTA0 & 31] = fTemp107;
			float fTemp108 = fTemp107 + fVec88[(IOTA0 - 16) & 31];
			fVec89[IOTA0 & 63] = fTemp108;
			float fTemp109 = fTemp108 + fVec89[(IOTA0 - 32) & 63];
			fVec90[IOTA0 & 127] = fTemp109;
			float fTemp110 = fTemp109 + fVec90[(IOTA0 - 64) & 127];
			fVec91[IOTA0 & 255] = fTemp110;
			float fTemp111 = fTemp110 + fVec91[(IOTA0 - 128) & 255];
			fVec92[IOTA0 & 511] = fTemp111;
			float fTemp112 = fTemp111 + fVec92[(IOTA0 - 256) & 511];
			fVec93[IOTA0 & 1023] = fTemp112;
			float fTemp113 = fTemp112 + fVec93[(IOTA0 - 512) & 1023];
			fVec94[IOTA0 & 2047] = fTemp113;
			float fTemp114 = fTemp113 + fVec94[(IOTA0 - 1024) & 2047];
			fVec95[IOTA0 & 4095] = fTemp114;
			float fTemp115 = fTemp114 + fVec95[(IOTA0 - 2048) & 4095];
			fVec96[IOTA0 & 8191] = fTemp115;
			float fTemp116 = fTemp115 + fVec96[(IOTA0 - 4096) & 8191];
			fVec97[IOTA0 & 16383] = fTemp116;
			float fTemp117 = fTemp116 + fVec97[(IOTA0 - 8192) & 16383];
			fVec98[IOTA0 & 32767] = fTemp117;
			float fTemp118 = fTemp117 + fVec98[(IOTA0 - 16384) & 32767];
			fVec99[IOTA0 & 65535] = fTemp118;
			float fTemp119 = fTemp118 + fVec99[(IOTA0 - 32768) & 65535];
			fVec100[IOTA0 & 131071] = fTemp119;
			fVec101[IOTA0 & 262143] = fTemp119 + fVec100[(IOTA0 - 65536) & 131071];
			float fElse77 = 0.860009849f * fVec101[(IOTA0 - iConst137) & 262143];
			float fElse78 = 0.860009849f * fVec100[(IOTA0 - iConst139) & 131071];
			float fElse79 = 0.860009849f * fVec99[(IOTA0 - iConst141) & 65535];
			float fElse80 = 0.860009849f * fVec98[(IOTA0 - iConst143) & 32767];
			float fElse81 = 0.860009849f * fVec97[(IOTA0 - iConst145) & 16383];
			float fElse82 = 0.860009849f * fVec96[(IOTA0 - iConst147) & 8191];
			float fElse83 = 0.860009849f * fVec95[(IOTA0 - iConst149) & 4095];
			float fElse84 = 0.860009849f * fVec94[(IOTA0 - iConst151) & 2047];
			float fElse85 = 0.860009849f * fVec93[(IOTA0 - iConst153) & 1023];
			float fElse86 = 0.860009849f * fVec92[(IOTA0 - iConst155) & 511];
			float fElse87 = 0.860009849f * fVec91[(IOTA0 - iConst157) & 255];
			float fElse88 = 0.860009849f * fVec90[(IOTA0 - iConst159) & 127];
			float fElse89 = 0.860009849f * fVec89[(IOTA0 - iConst161) & 63];
			float fElse90 = 0.860009849f * fVec88[(IOTA0 - iConst163) & 31];
			float fElse91 = 0.860009849f * fVec87[iConst165];
			float fElse92 = 0.860009849f * fVec86[iConst167];
			float fElse93 = 0.860009849f * fTemp103;
			float fElse94 = 0.860009849f * fVec85[iConst168];
			float fTemp120 = fTemp99 * ((4.34294462f * (fTemp84 - std::log(std::max<float>(9.99999996e-13f, fConst94 * (((iConst95) ? fElse77 : 0.0f) + ((iConst138) ? fElse78 : 0.0f) + ((iConst140) ? fElse79 : 0.0f) + ((iConst142) ? fElse80 : 0.0f) + ((iConst144) ? fElse81 : 0.0f) + ((iConst146) ? fElse82 : 0.0f) + ((iConst148) ? fElse83 : 0.0f) + ((iConst150) ? fElse84 : 0.0f) + ((iConst152) ? fElse85 : 0.0f) + ((iConst154) ? fElse86 : 0.0f) + ((iConst156) ? fElse87 : 0.0f) + ((iConst158) ? fElse88 : 0.0f) + ((iConst160) ? fElse89 : 0.0f) + ((iConst162) ? fElse90 : 0.0f) + ((iConst164) ? fElse91 : 0.0f) + ((iConst166) ? fElse92 : 0.0f) + ((iConst168) ? fElse93 : 0.0f) + ((iConst169) ? fElse94 : 0.0f))))) + -19.0f) - fSlow10);
			fVbargraph4 = FAUSTFLOAT(fTemp120);
			fRec54[0] = fTemp47 - fConst213 * (fConst214 * fRec54[2] + fConst215 * fRec54[1]);
			float fTemp121 = fConst212 * fRec54[0] + fConst216 * fRec54[2];
			fVec102[IOTA0 & 32767] = fTemp121;
			float fTemp122 = fVec102[(IOTA0 - 1) & 32767];
			fVec103[0] = fConst96 * fTemp122 - fConst34 * fRec52[1];
			fRec53[0] = fConst33 * (fVec103[1] - fConst102 * fRec53[1] + fConst103 * fTemp122 + fConst104 * fTemp121);
			fRec52[0] = fRec53[0];
			fVec104[0] = 0.500327051f * fRec52[1] - fConst41 * fRec50[1];
			fRec51[0] = fConst31 * fRec52[1] + fConst40 * (fVec104[1] - fConst42 * fRec51[1] + 0.500327051f * fRec52[0]);
			fRec50[0] = fRec51[0];
			float fTemp123 = mydsp_faustpower2_f(fRec50[0]);
			fVec105[0] = fTemp123;
			float fTemp124 = fTemp123 + fVec105[1];
			fVec106[0] = fTemp124;
			float fTemp125 = fTemp124 + fVec106[2];
			fVec107[0] = fTemp125;
			float fTemp126 = fTemp125 + fVec107[4];
			fVec108[0] = fTemp126;
			float fTemp127 = fTemp126 + fVec108[8];
			fVec109[IOTA0 & 31] = fTemp127;
			float fTemp128 = fTemp127 + fVec109[(IOTA0 - 16) & 31];
			fVec110[IOTA0 & 63] = fTemp128;
			float fTemp129 = fTemp128 + fVec110[(IOTA0 - 32) & 63];
			fVec111[IOTA0 & 127] = fTemp129;
			float fTemp130 = fTemp129 + fVec111[(IOTA0 - 64) & 127];
			fVec112[IOTA0 & 255] = fTemp130;
			float fTemp131 = fTemp130 + fVec112[(IOTA0 - 128) & 255];
			fVec113[IOTA0 & 511] = fTemp131;
			float fTemp132 = fTemp131 + fVec113[(IOTA0 - 256) & 511];
			fVec114[IOTA0 & 1023] = fTemp132;
			float fTemp133 = fTemp132 + fVec114[(IOTA0 - 512) & 1023];
			fVec115[IOTA0 & 2047] = fTemp133;
			float fTemp134 = fTemp133 + fVec115[(IOTA0 - 1024) & 2047];
			fVec116[IOTA0 & 4095] = fTemp134;
			float fTemp135 = fTemp134 + fVec116[(IOTA0 - 2048) & 4095];
			fVec117[IOTA0 & 8191] = fTemp135;
			float fTemp136 = fTemp135 + fVec117[(IOTA0 - 4096) & 8191];
			fVec118[IOTA0 & 16383] = fTemp136;
			float fTemp137 = fTemp136 + fVec118[(IOTA0 - 8192) & 16383];
			fVec119[IOTA0 & 32767] = fTemp137;
			float fTemp138 = fTemp137 + fVec119[(IOTA0 - 16384) & 32767];
			fVec120[IOTA0 & 65535] = fTemp138;
			float fTemp139 = fTemp138 + fVec120[(IOTA0 - 32768) & 65535];
			fVec121[IOTA0 & 131071] = fTemp139;
			fVec122[IOTA0 & 262143] = fTemp139 + fVec121[(IOTA0 - 65536) & 131071];
			float fElse95 = 0.860009849f * fVec122[(IOTA0 - iConst137) & 262143];
			float fElse96 = 0.860009849f * fVec121[(IOTA0 - iConst139) & 131071];
			float fElse97 = 0.860009849f * fVec120[(IOTA0 - iConst141) & 65535];
			float fElse98 = 0.860009849f * fVec119[(IOTA0 - iConst143) & 32767];
			float fElse99 = 0.860009849f * fVec118[(IOTA0 - iConst145) & 16383];
			float fElse100 = 0.860009849f * fVec117[(IOTA0 - iConst147) & 8191];
			float fElse101 = 0.860009849f * fVec116[(IOTA0 - iConst149) & 4095];
			float fElse102 = 0.860009849f * fVec115[(IOTA0 - iConst151) & 2047];
			float fElse103 = 0.860009849f * fVec114[(IOTA0 - iConst153) & 1023];
			float fElse104 = 0.860009849f * fVec113[(IOTA0 - iConst155) & 511];
			float fElse105 = 0.860009849f * fVec112[(IOTA0 - iConst157) & 255];
			float fElse106 = 0.860009849f * fVec111[(IOTA0 - iConst159) & 127];
			float fElse107 = 0.860009849f * fVec110[(IOTA0 - iConst161) & 63];
			float fElse108 = 0.860009849f * fVec109[(IOTA0 - iConst163) & 31];
			float fElse109 = 0.860009849f * fVec108[iConst165];
			float fElse110 = 0.860009849f * fVec107[iConst167];
			float fElse111 = 0.860009849f * fTemp123;
			float fElse112 = 0.860009849f * fVec106[iConst168];
			float fTemp140 = fTemp99 * ((4.34294462f * (fTemp84 - std::log(std::max<float>(9.99999996e-13f, fConst94 * (((iConst95) ? fElse95 : 0.0f) + ((iConst138) ? fElse96 : 0.0f) + ((iConst140) ? fElse97 : 0.0f) + ((iConst142) ? fElse98 : 0.0f) + ((iConst144) ? fElse99 : 0.0f) + ((iConst146) ? fElse100 : 0.0f) + ((iConst148) ? fElse101 : 0.0f) + ((iConst150) ? fElse102 : 0.0f) + ((iConst152) ? fElse103 : 0.0f) + ((iConst154) ? fElse104 : 0.0f) + ((iConst156) ? fElse105 : 0.0f) + ((iConst158) ? fElse106 : 0.0f) + ((iConst160) ? fElse107 : 0.0f) + ((iConst162) ? fElse108 : 0.0f) + ((iConst164) ? fElse109 : 0.0f) + ((iConst166) ? fElse110 : 0.0f) + ((iConst168) ? fElse111 : 0.0f) + ((iConst169) ? fElse112 : 0.0f))))) + -18.0f) - fSlow9);
			fVbargraph5 = FAUSTFLOAT(fTemp140);
			fRec59[0] = fTemp47 - fConst221 * (fConst222 * fRec59[2] + fConst223 * fRec59[1]);
			float fTemp141 = fConst220 * fRec59[0] + fConst224 * fRec59[2];
			fVec123[IOTA0 & 32767] = fTemp141;
			float fTemp142 = fVec123[(IOTA0 - 1) & 32767];
			fVec124[0] = fConst96 * fTemp142 - fConst34 * fRec57[1];
			fRec58[0] = fConst33 * (fVec124[1] - fConst102 * fRec58[1] + fConst103 * fTemp142 + fConst104 * fTemp141);
			fRec57[0] = fRec58[0];
			fVec125[0] = 0.500327051f * fRec57[1] - fConst41 * fRec55[1];
			fRec56[0] = fConst31 * fRec57[1] + fConst40 * (fVec125[1] - fConst42 * fRec56[1] + 0.500327051f * fRec57[0]);
			fRec55[0] = fRec56[0];
			float fTemp143 = mydsp_faustpower2_f(fRec55[0]);
			fVec126[0] = fTemp143;
			float fTemp144 = fTemp143 + fVec126[1];
			fVec127[0] = fTemp144;
			float fTemp145 = fTemp144 + fVec127[2];
			fVec128[0] = fTemp145;
			float fTemp146 = fTemp145 + fVec128[4];
			fVec129[0] = fTemp146;
			float fTemp147 = fTemp146 + fVec129[8];
			fVec130[IOTA0 & 31] = fTemp147;
			float fTemp148 = fTemp147 + fVec130[(IOTA0 - 16) & 31];
			fVec131[IOTA0 & 63] = fTemp148;
			float fTemp149 = fTemp148 + fVec131[(IOTA0 - 32) & 63];
			fVec132[IOTA0 & 127] = fTemp149;
			float fTemp150 = fTemp149 + fVec132[(IOTA0 - 64) & 127];
			fVec133[IOTA0 & 255] = fTemp150;
			float fTemp151 = fTemp150 + fVec133[(IOTA0 - 128) & 255];
			fVec134[IOTA0 & 511] = fTemp151;
			float fTemp152 = fTemp151 + fVec134[(IOTA0 - 256) & 511];
			fVec135[IOTA0 & 1023] = fTemp152;
			float fTemp153 = fTemp152 + fVec135[(IOTA0 - 512) & 1023];
			fVec136[IOTA0 & 2047] = fTemp153;
			float fTemp154 = fTemp153 + fVec136[(IOTA0 - 1024) & 2047];
			fVec137[IOTA0 & 4095] = fTemp154;
			float fTemp155 = fTemp154 + fVec137[(IOTA0 - 2048) & 4095];
			fVec138[IOTA0 & 8191] = fTemp155;
			float fTemp156 = fTemp155 + fVec138[(IOTA0 - 4096) & 8191];
			fVec139[IOTA0 & 16383] = fTemp156;
			float fTemp157 = fTemp156 + fVec139[(IOTA0 - 8192) & 16383];
			fVec140[IOTA0 & 32767] = fTemp157;
			float fTemp158 = fTemp157 + fVec140[(IOTA0 - 16384) & 32767];
			fVec141[IOTA0 & 65535] = fTemp158;
			float fTemp159 = fTemp158 + fVec141[(IOTA0 - 32768) & 65535];
			fVec142[IOTA0 & 131071] = fTemp159;
			fVec143[IOTA0 & 262143] = fTemp159 + fVec142[(IOTA0 - 65536) & 131071];
			float fElse113 = 0.860009849f * fVec143[(IOTA0 - iConst137) & 262143];
			float fElse114 = 0.860009849f * fVec142[(IOTA0 - iConst139) & 131071];
			float fElse115 = 0.860009849f * fVec141[(IOTA0 - iConst141) & 65535];
			float fElse116 = 0.860009849f * fVec140[(IOTA0 - iConst143) & 32767];
			float fElse117 = 0.860009849f * fVec139[(IOTA0 - iConst145) & 16383];
			float fElse118 = 0.860009849f * fVec138[(IOTA0 - iConst147) & 8191];
			float fElse119 = 0.860009849f * fVec137[(IOTA0 - iConst149) & 4095];
			float fElse120 = 0.860009849f * fVec136[(IOTA0 - iConst151) & 2047];
			float fElse121 = 0.860009849f * fVec135[(IOTA0 - iConst153) & 1023];
			float fElse122 = 0.860009849f * fVec134[(IOTA0 - iConst155) & 511];
			float fElse123 = 0.860009849f * fVec133[(IOTA0 - iConst157) & 255];
			float fElse124 = 0.860009849f * fVec132[(IOTA0 - iConst159) & 127];
			float fElse125 = 0.860009849f * fVec131[(IOTA0 - iConst161) & 63];
			float fElse126 = 0.860009849f * fVec130[(IOTA0 - iConst163) & 31];
			float fElse127 = 0.860009849f * fVec129[iConst165];
			float fElse128 = 0.860009849f * fVec128[iConst167];
			float fElse129 = 0.860009849f * fTemp143;
			float fElse130 = 0.860009849f * fVec127[iConst168];
			float fTemp160 = fTemp99 * ((4.34294462f * (fTemp84 - std::log(std::max<float>(9.99999996e-13f, fConst94 * (((iConst95) ? fElse113 : 0.0f) + ((iConst138) ? fElse114 : 0.0f) + ((iConst140) ? fElse115 : 0.0f) + ((iConst142) ? fElse116 : 0.0f) + ((iConst144) ? fElse117 : 0.0f) + ((iConst146) ? fElse118 : 0.0f) + ((iConst148) ? fElse119 : 0.0f) + ((iConst150) ? fElse120 : 0.0f) + ((iConst152) ? fElse121 : 0.0f) + ((iConst154) ? fElse122 : 0.0f) + ((iConst156) ? fElse123 : 0.0f) + ((iConst158) ? fElse124 : 0.0f) + ((iConst160) ? fElse125 : 0.0f) + ((iConst162) ? fElse126 : 0.0f) + ((iConst164) ? fElse127 : 0.0f) + ((iConst166) ? fElse128 : 0.0f) + ((iConst168) ? fElse129 : 0.0f) + ((iConst169) ? fElse130 : 0.0f))))) + -16.0f) - fSlow10);
			fVbargraph6 = FAUSTFLOAT(fTemp160);
			fRec64[0] = fTemp47 - fConst229 * (fConst230 * fRec64[2] + fConst231 * fRec64[1]);
			float fTemp161 = fConst228 * fRec64[0] + fConst232 * fRec64[2];
			fVec144[IOTA0 & 32767] = fTemp161;
			float fTemp162 = fVec144[(IOTA0 - 1) & 32767];
			fVec145[0] = fConst96 * fTemp162 - fConst34 * fRec62[1];
			fRec63[0] = fConst33 * (fVec145[1] - fConst102 * fRec63[1] + fConst103 * fTemp162 + fConst104 * fTemp161);
			fRec62[0] = fRec63[0];
			fVec146[0] = 0.500327051f * fRec62[1] - fConst41 * fRec60[1];
			fRec61[0] = fConst31 * fRec62[1] + fConst40 * (fVec146[1] - fConst42 * fRec61[1] + 0.500327051f * fRec62[0]);
			fRec60[0] = fRec61[0];
			float fTemp163 = mydsp_faustpower2_f(fRec60[0]);
			fVec147[0] = fTemp163;
			float fTemp164 = fTemp163 + fVec147[1];
			fVec148[0] = fTemp164;
			float fTemp165 = fTemp164 + fVec148[2];
			fVec149[0] = fTemp165;
			float fTemp166 = fTemp165 + fVec149[4];
			fVec150[0] = fTemp166;
			float fTemp167 = fTemp166 + fVec150[8];
			fVec151[IOTA0 & 31] = fTemp167;
			float fTemp168 = fTemp167 + fVec151[(IOTA0 - 16) & 31];
			fVec152[IOTA0 & 63] = fTemp168;
			float fTemp169 = fTemp168 + fVec152[(IOTA0 - 32) & 63];
			fVec153[IOTA0 & 127] = fTemp169;
			float fTemp170 = fTemp169 + fVec153[(IOTA0 - 64) & 127];
			fVec154[IOTA0 & 255] = fTemp170;
			float fTemp171 = fTemp170 + fVec154[(IOTA0 - 128) & 255];
			fVec155[IOTA0 & 511] = fTemp171;
			float fTemp172 = fTemp171 + fVec155[(IOTA0 - 256) & 511];
			fVec156[IOTA0 & 1023] = fTemp172;
			float fTemp173 = fTemp172 + fVec156[(IOTA0 - 512) & 1023];
			fVec157[IOTA0 & 2047] = fTemp173;
			float fTemp174 = fTemp173 + fVec157[(IOTA0 - 1024) & 2047];
			fVec158[IOTA0 & 4095] = fTemp174;
			float fTemp175 = fTemp174 + fVec158[(IOTA0 - 2048) & 4095];
			fVec159[IOTA0 & 8191] = fTemp175;
			float fTemp176 = fTemp175 + fVec159[(IOTA0 - 4096) & 8191];
			fVec160[IOTA0 & 16383] = fTemp176;
			float fTemp177 = fTemp176 + fVec160[(IOTA0 - 8192) & 16383];
			fVec161[IOTA0 & 32767] = fTemp177;
			float fTemp178 = fTemp177 + fVec161[(IOTA0 - 16384) & 32767];
			fVec162[IOTA0 & 65535] = fTemp178;
			float fTemp179 = fTemp178 + fVec162[(IOTA0 - 32768) & 65535];
			fVec163[IOTA0 & 131071] = fTemp179;
			fVec164[IOTA0 & 262143] = fTemp179 + fVec163[(IOTA0 - 65536) & 131071];
			float fElse131 = 0.860009849f * fVec164[(IOTA0 - iConst137) & 262143];
			float fElse132 = 0.860009849f * fVec163[(IOTA0 - iConst139) & 131071];
			float fElse133 = 0.860009849f * fVec162[(IOTA0 - iConst141) & 65535];
			float fElse134 = 0.860009849f * fVec161[(IOTA0 - iConst143) & 32767];
			float fElse135 = 0.860009849f * fVec160[(IOTA0 - iConst145) & 16383];
			float fElse136 = 0.860009849f * fVec159[(IOTA0 - iConst147) & 8191];
			float fElse137 = 0.860009849f * fVec158[(IOTA0 - iConst149) & 4095];
			float fElse138 = 0.860009849f * fVec157[(IOTA0 - iConst151) & 2047];
			float fElse139 = 0.860009849f * fVec156[(IOTA0 - iConst153) & 1023];
			float fElse140 = 0.860009849f * fVec155[(IOTA0 - iConst155) & 511];
			float fElse141 = 0.860009849f * fVec154[(IOTA0 - iConst157) & 255];
			float fElse142 = 0.860009849f * fVec153[(IOTA0 - iConst159) & 127];
			float fElse143 = 0.860009849f * fVec152[(IOTA0 - iConst161) & 63];
			float fElse144 = 0.860009849f * fVec151[(IOTA0 - iConst163) & 31];
			float fElse145 = 0.860009849f * fVec150[iConst165];
			float fElse146 = 0.860009849f * fVec149[iConst167];
			float fElse147 = 0.860009849f * fTemp163;
			float fElse148 = 0.860009849f * fVec148[iConst168];
			float fTemp180 = fTemp99 * ((4.34294462f * (fTemp84 - std::log(std::max<float>(9.99999996e-13f, fConst94 * (((iConst95) ? fElse131 : 0.0f) + ((iConst138) ? fElse132 : 0.0f) + ((iConst140) ? fElse133 : 0.0f) + ((iConst142) ? fElse134 : 0.0f) + ((iConst144) ? fElse135 : 0.0f) + ((iConst146) ? fElse136 : 0.0f) + ((iConst148) ? fElse137 : 0.0f) + ((iConst150) ? fElse138 : 0.0f) + ((iConst152) ? fElse139 : 0.0f) + ((iConst154) ? fElse140 : 0.0f) + ((iConst156) ? fElse141 : 0.0f) + ((iConst158) ? fElse142 : 0.0f) + ((iConst160) ? fElse143 : 0.0f) + ((iConst162) ? fElse144 : 0.0f) + ((iConst164) ? fElse145 : 0.0f) + ((iConst166) ? fElse146 : 0.0f) + ((iConst168) ? fElse147 : 0.0f) + ((iConst169) ? fElse148 : 0.0f))))) + -17.0f) - fSlow8);
			fVbargraph7 = FAUSTFLOAT(fTemp180);
			fRec69[0] = fTemp47 - fConst237 * (fConst238 * fRec69[2] + fConst239 * fRec69[1]);
			float fTemp181 = fConst236 * fRec69[0] + fConst240 * fRec69[2];
			fVec165[IOTA0 & 32767] = fTemp181;
			float fTemp182 = fVec165[(IOTA0 - 1) & 32767];
			fVec166[0] = fConst96 * fTemp182 - fConst34 * fRec67[1];
			fRec68[0] = fConst33 * (fVec166[1] - fConst102 * fRec68[1] + fConst103 * fTemp182 + fConst104 * fTemp181);
			fRec67[0] = fRec68[0];
			fVec167[0] = 0.500327051f * fRec67[1] - fConst41 * fRec65[1];
			fRec66[0] = fConst31 * fRec67[1] + fConst40 * (fVec167[1] - fConst42 * fRec66[1] + 0.500327051f * fRec67[0]);
			fRec65[0] = fRec66[0];
			float fTemp183 = mydsp_faustpower2_f(fRec65[0]);
			fVec168[0] = fTemp183;
			float fTemp184 = fTemp183 + fVec168[1];
			fVec169[0] = fTemp184;
			float fTemp185 = fTemp184 + fVec169[2];
			fVec170[0] = fTemp185;
			float fTemp186 = fTemp185 + fVec170[4];
			fVec171[0] = fTemp186;
			float fTemp187 = fTemp186 + fVec171[8];
			fVec172[IOTA0 & 31] = fTemp187;
			float fTemp188 = fTemp187 + fVec172[(IOTA0 - 16) & 31];
			fVec173[IOTA0 & 63] = fTemp188;
			float fTemp189 = fTemp188 + fVec173[(IOTA0 - 32) & 63];
			fVec174[IOTA0 & 127] = fTemp189;
			float fTemp190 = fTemp189 + fVec174[(IOTA0 - 64) & 127];
			fVec175[IOTA0 & 255] = fTemp190;
			float fTemp191 = fTemp190 + fVec175[(IOTA0 - 128) & 255];
			fVec176[IOTA0 & 511] = fTemp191;
			float fTemp192 = fTemp191 + fVec176[(IOTA0 - 256) & 511];
			fVec177[IOTA0 & 1023] = fTemp192;
			float fTemp193 = fTemp192 + fVec177[(IOTA0 - 512) & 1023];
			fVec178[IOTA0 & 2047] = fTemp193;
			float fTemp194 = fTemp193 + fVec178[(IOTA0 - 1024) & 2047];
			fVec179[IOTA0 & 4095] = fTemp194;
			float fTemp195 = fTemp194 + fVec179[(IOTA0 - 2048) & 4095];
			fVec180[IOTA0 & 8191] = fTemp195;
			float fTemp196 = fTemp195 + fVec180[(IOTA0 - 4096) & 8191];
			fVec181[IOTA0 & 16383] = fTemp196;
			float fTemp197 = fTemp196 + fVec181[(IOTA0 - 8192) & 16383];
			fVec182[IOTA0 & 32767] = fTemp197;
			float fTemp198 = fTemp197 + fVec182[(IOTA0 - 16384) & 32767];
			fVec183[IOTA0 & 65535] = fTemp198;
			float fTemp199 = fTemp198 + fVec183[(IOTA0 - 32768) & 65535];
			fVec184[IOTA0 & 131071] = fTemp199;
			fVec185[IOTA0 & 262143] = fTemp199 + fVec184[(IOTA0 - 65536) & 131071];
			float fElse149 = 0.860009849f * fVec185[(IOTA0 - iConst137) & 262143];
			float fElse150 = 0.860009849f * fVec184[(IOTA0 - iConst139) & 131071];
			float fElse151 = 0.860009849f * fVec183[(IOTA0 - iConst141) & 65535];
			float fElse152 = 0.860009849f * fVec182[(IOTA0 - iConst143) & 32767];
			float fElse153 = 0.860009849f * fVec181[(IOTA0 - iConst145) & 16383];
			float fElse154 = 0.860009849f * fVec180[(IOTA0 - iConst147) & 8191];
			float fElse155 = 0.860009849f * fVec179[(IOTA0 - iConst149) & 4095];
			float fElse156 = 0.860009849f * fVec178[(IOTA0 - iConst151) & 2047];
			float fElse157 = 0.860009849f * fVec177[(IOTA0 - iConst153) & 1023];
			float fElse158 = 0.860009849f * fVec176[(IOTA0 - iConst155) & 511];
			float fElse159 = 0.860009849f * fVec175[(IOTA0 - iConst157) & 255];
			float fElse160 = 0.860009849f * fVec174[(IOTA0 - iConst159) & 127];
			float fElse161 = 0.860009849f * fVec173[(IOTA0 - iConst161) & 63];
			float fElse162 = 0.860009849f * fVec172[(IOTA0 - iConst163) & 31];
			float fElse163 = 0.860009849f * fVec171[iConst165];
			float fElse164 = 0.860009849f * fVec170[iConst167];
			float fElse165 = 0.860009849f * fTemp183;
			float fElse166 = 0.860009849f * fVec169[iConst168];
			float fTemp200 = fTemp99 * (4.34294462f * (fTemp84 - std::log(std::max<float>(9.99999996e-13f, fConst94 * (((iConst95) ? fElse149 : 0.0f) + ((iConst138) ? fElse150 : 0.0f) + ((iConst140) ? fElse151 : 0.0f) + ((iConst142) ? fElse152 : 0.0f) + ((iConst144) ? fElse153 : 0.0f) + ((iConst146) ? fElse154 : 0.0f) + ((iConst148) ? fElse155 : 0.0f) + ((iConst150) ? fElse156 : 0.0f) + ((iConst152) ? fElse157 : 0.0f) + ((iConst154) ? fElse158 : 0.0f) + ((iConst156) ? fElse159 : 0.0f) + ((iConst158) ? fElse160 : 0.0f) + ((iConst160) ? fElse161 : 0.0f) + ((iConst162) ? fElse162 : 0.0f) + ((iConst164) ? fElse163 : 0.0f) + ((iConst166) ? fElse164 : 0.0f) + ((iConst168) ? fElse165 : 0.0f) + ((iConst169) ? fElse166 : 0.0f))))) + -18.0f);
			fVbargraph8 = FAUSTFLOAT(fTemp200);
			fRec74[0] = fTemp47 - fConst245 * (fConst246 * fRec74[2] + fConst247 * fRec74[1]);
			float fTemp201 = fConst244 * fRec74[0] + fConst248 * fRec74[2];
			fVec186[IOTA0 & 32767] = fTemp201;
			float fTemp202 = fVec186[(IOTA0 - 1) & 32767];
			fVec187[0] = fConst96 * fTemp202 - fConst34 * fRec72[1];
			fRec73[0] = fConst33 * (fVec187[1] - fConst102 * fRec73[1] + fConst103 * fTemp202 + fConst104 * fTemp201);
			fRec72[0] = fRec73[0];
			fVec188[0] = 0.500327051f * fRec72[1] - fConst41 * fRec70[1];
			fRec71[0] = fConst31 * fRec72[1] + fConst40 * (fVec188[1] - fConst42 * fRec71[1] + 0.500327051f * fRec72[0]);
			fRec70[0] = fRec71[0];
			float fTemp203 = mydsp_faustpower2_f(fRec70[0]);
			fVec189[0] = fTemp203;
			float fTemp204 = fTemp203 + fVec189[1];
			fVec190[0] = fTemp204;
			float fTemp205 = fTemp204 + fVec190[2];
			fVec191[0] = fTemp205;
			float fTemp206 = fTemp205 + fVec191[4];
			fVec192[0] = fTemp206;
			float fTemp207 = fTemp206 + fVec192[8];
			fVec193[IOTA0 & 31] = fTemp207;
			float fTemp208 = fTemp207 + fVec193[(IOTA0 - 16) & 31];
			fVec194[IOTA0 & 63] = fTemp208;
			float fTemp209 = fTemp208 + fVec194[(IOTA0 - 32) & 63];
			fVec195[IOTA0 & 127] = fTemp209;
			float fTemp210 = fTemp209 + fVec195[(IOTA0 - 64) & 127];
			fVec196[IOTA0 & 255] = fTemp210;
			float fTemp211 = fTemp210 + fVec196[(IOTA0 - 128) & 255];
			fVec197[IOTA0 & 511] = fTemp211;
			float fTemp212 = fTemp211 + fVec197[(IOTA0 - 256) & 511];
			fVec198[IOTA0 & 1023] = fTemp212;
			float fTemp213 = fTemp212 + fVec198[(IOTA0 - 512) & 1023];
			fVec199[IOTA0 & 2047] = fTemp213;
			float fTemp214 = fTemp213 + fVec199[(IOTA0 - 1024) & 2047];
			fVec200[IOTA0 & 4095] = fTemp214;
			float fTemp215 = fTemp214 + fVec200[(IOTA0 - 2048) & 4095];
			fVec201[IOTA0 & 8191] = fTemp215;
			float fTemp216 = fTemp215 + fVec201[(IOTA0 - 4096) & 8191];
			fVec202[IOTA0 & 16383] = fTemp216;
			float fTemp217 = fTemp216 + fVec202[(IOTA0 - 8192) & 16383];
			fVec203[IOTA0 & 32767] = fTemp217;
			float fTemp218 = fTemp217 + fVec203[(IOTA0 - 16384) & 32767];
			fVec204[IOTA0 & 65535] = fTemp218;
			float fTemp219 = fTemp218 + fVec204[(IOTA0 - 32768) & 65535];
			fVec205[IOTA0 & 131071] = fTemp219;
			fVec206[IOTA0 & 262143] = fTemp219 + fVec205[(IOTA0 - 65536) & 131071];
			float fElse167 = 0.860009849f * fVec206[(IOTA0 - iConst137) & 262143];
			float fElse168 = 0.860009849f * fVec205[(IOTA0 - iConst139) & 131071];
			float fElse169 = 0.860009849f * fVec204[(IOTA0 - iConst141) & 65535];
			float fElse170 = 0.860009849f * fVec203[(IOTA0 - iConst143) & 32767];
			float fElse171 = 0.860009849f * fVec202[(IOTA0 - iConst145) & 16383];
			float fElse172 = 0.860009849f * fVec201[(IOTA0 - iConst147) & 8191];
			float fElse173 = 0.860009849f * fVec200[(IOTA0 - iConst149) & 4095];
			float fElse174 = 0.860009849f * fVec199[(IOTA0 - iConst151) & 2047];
			float fElse175 = 0.860009849f * fVec198[(IOTA0 - iConst153) & 1023];
			float fElse176 = 0.860009849f * fVec197[(IOTA0 - iConst155) & 511];
			float fElse177 = 0.860009849f * fVec196[(IOTA0 - iConst157) & 255];
			float fElse178 = 0.860009849f * fVec195[(IOTA0 - iConst159) & 127];
			float fElse179 = 0.860009849f * fVec194[(IOTA0 - iConst161) & 63];
			float fElse180 = 0.860009849f * fVec193[(IOTA0 - iConst163) & 31];
			float fElse181 = 0.860009849f * fVec192[iConst165];
			float fElse182 = 0.860009849f * fVec191[iConst167];
			float fElse183 = 0.860009849f * fTemp203;
			float fElse184 = 0.860009849f * fVec190[iConst168];
			float fTemp220 = fTemp99 * (4.34294462f * (fTemp84 - std::log(std::max<float>(9.99999996e-13f, fConst94 * (((iConst95) ? fElse167 : 0.0f) + ((iConst138) ? fElse168 : 0.0f) + ((iConst140) ? fElse169 : 0.0f) + ((iConst142) ? fElse170 : 0.0f) + ((iConst144) ? fElse171 : 0.0f) + ((iConst146) ? fElse172 : 0.0f) + ((iConst148) ? fElse173 : 0.0f) + ((iConst150) ? fElse174 : 0.0f) + ((iConst152) ? fElse175 : 0.0f) + ((iConst154) ? fElse176 : 0.0f) + ((iConst156) ? fElse177 : 0.0f) + ((iConst158) ? fElse178 : 0.0f) + ((iConst160) ? fElse179 : 0.0f) + ((iConst162) ? fElse180 : 0.0f) + ((iConst164) ? fElse181 : 0.0f) + ((iConst166) ? fElse182 : 0.0f) + ((iConst168) ? fElse183 : 0.0f) + ((iConst169) ? fElse184 : 0.0f))))) + -18.0f);
			fVbargraph9 = FAUSTFLOAT(fTemp220);
			fRec79[0] = fTemp47 - fConst253 * (fConst254 * fRec79[2] + fConst255 * fRec79[1]);
			float fTemp221 = fConst252 * fRec79[0] + fConst256 * fRec79[2];
			fVec207[IOTA0 & 32767] = fTemp221;
			float fTemp222 = fVec207[(IOTA0 - 1) & 32767];
			fVec208[0] = fConst96 * fTemp222 - fConst34 * fRec77[1];
			fRec78[0] = fConst33 * (fVec208[1] - fConst102 * fRec78[1] + fConst103 * fTemp222 + fConst104 * fTemp221);
			fRec77[0] = fRec78[0];
			fVec209[0] = 0.500327051f * fRec77[1] - fConst41 * fRec75[1];
			fRec76[0] = fConst31 * fRec77[1] + fConst40 * (fVec209[1] - fConst42 * fRec76[1] + 0.500327051f * fRec77[0]);
			fRec75[0] = fRec76[0];
			float fTemp223 = mydsp_faustpower2_f(fRec75[0]);
			fVec210[0] = fTemp223;
			float fTemp224 = fTemp223 + fVec210[1];
			fVec211[0] = fTemp224;
			float fTemp225 = fTemp224 + fVec211[2];
			fVec212[0] = fTemp225;
			float fTemp226 = fTemp225 + fVec212[4];
			fVec213[0] = fTemp226;
			float fTemp227 = fTemp226 + fVec213[8];
			fVec214[IOTA0 & 31] = fTemp227;
			float fTemp228 = fTemp227 + fVec214[(IOTA0 - 16) & 31];
			fVec215[IOTA0 & 63] = fTemp228;
			float fTemp229 = fTemp228 + fVec215[(IOTA0 - 32) & 63];
			fVec216[IOTA0 & 127] = fTemp229;
			float fTemp230 = fTemp229 + fVec216[(IOTA0 - 64) & 127];
			fVec217[IOTA0 & 255] = fTemp230;
			float fTemp231 = fTemp230 + fVec217[(IOTA0 - 128) & 255];
			fVec218[IOTA0 & 511] = fTemp231;
			float fTemp232 = fTemp231 + fVec218[(IOTA0 - 256) & 511];
			fVec219[IOTA0 & 1023] = fTemp232;
			float fTemp233 = fTemp232 + fVec219[(IOTA0 - 512) & 1023];
			fVec220[IOTA0 & 2047] = fTemp233;
			float fTemp234 = fTemp233 + fVec220[(IOTA0 - 1024) & 2047];
			fVec221[IOTA0 & 4095] = fTemp234;
			float fTemp235 = fTemp234 + fVec221[(IOTA0 - 2048) & 4095];
			fVec222[IOTA0 & 8191] = fTemp235;
			float fTemp236 = fTemp235 + fVec222[(IOTA0 - 4096) & 8191];
			fVec223[IOTA0 & 16383] = fTemp236;
			float fTemp237 = fTemp236 + fVec223[(IOTA0 - 8192) & 16383];
			fVec224[IOTA0 & 32767] = fTemp237;
			float fTemp238 = fTemp237 + fVec224[(IOTA0 - 16384) & 32767];
			fVec225[IOTA0 & 65535] = fTemp238;
			float fTemp239 = fTemp238 + fVec225[(IOTA0 - 32768) & 65535];
			fVec226[IOTA0 & 131071] = fTemp239;
			fVec227[IOTA0 & 262143] = fTemp239 + fVec226[(IOTA0 - 65536) & 131071];
			float fElse185 = 0.860009849f * fVec227[(IOTA0 - iConst137) & 262143];
			float fElse186 = 0.860009849f * fVec226[(IOTA0 - iConst139) & 131071];
			float fElse187 = 0.860009849f * fVec225[(IOTA0 - iConst141) & 65535];
			float fElse188 = 0.860009849f * fVec224[(IOTA0 - iConst143) & 32767];
			float fElse189 = 0.860009849f * fVec223[(IOTA0 - iConst145) & 16383];
			float fElse190 = 0.860009849f * fVec222[(IOTA0 - iConst147) & 8191];
			float fElse191 = 0.860009849f * fVec221[(IOTA0 - iConst149) & 4095];
			float fElse192 = 0.860009849f * fVec220[(IOTA0 - iConst151) & 2047];
			float fElse193 = 0.860009849f * fVec219[(IOTA0 - iConst153) & 1023];
			float fElse194 = 0.860009849f * fVec218[(IOTA0 - iConst155) & 511];
			float fElse195 = 0.860009849f * fVec217[(IOTA0 - iConst157) & 255];
			float fElse196 = 0.860009849f * fVec216[(IOTA0 - iConst159) & 127];
			float fElse197 = 0.860009849f * fVec215[(IOTA0 - iConst161) & 63];
			float fElse198 = 0.860009849f * fVec214[(IOTA0 - iConst163) & 31];
			float fElse199 = 0.860009849f * fVec213[iConst165];
			float fElse200 = 0.860009849f * fVec212[iConst167];
			float fElse201 = 0.860009849f * fTemp223;
			float fElse202 = 0.860009849f * fVec211[iConst168];
			float fTemp240 = fTemp99 * (4.34294462f * (fTemp84 - std::log(std::max<float>(9.99999996e-13f, fConst94 * (((iConst95) ? fElse185 : 0.0f) + ((iConst138) ? fElse186 : 0.0f) + ((iConst140) ? fElse187 : 0.0f) + ((iConst142) ? fElse188 : 0.0f) + ((iConst144) ? fElse189 : 0.0f) + ((iConst146) ? fElse190 : 0.0f) + ((iConst148) ? fElse191 : 0.0f) + ((iConst150) ? fElse192 : 0.0f) + ((iConst152) ? fElse193 : 0.0f) + ((iConst154) ? fElse194 : 0.0f) + ((iConst156) ? fElse195 : 0.0f) + ((iConst158) ? fElse196 : 0.0f) + ((iConst160) ? fElse197 : 0.0f) + ((iConst162) ? fElse198 : 0.0f) + ((iConst164) ? fElse199 : 0.0f) + ((iConst166) ? fElse200 : 0.0f) + ((iConst168) ? fElse201 : 0.0f) + ((iConst169) ? fElse202 : 0.0f))))) + -18.0f);
			fVbargraph10 = FAUSTFLOAT(fTemp240);
			fRec84[0] = fTemp47 - fConst261 * (fConst262 * fRec84[2] + fConst263 * fRec84[1]);
			float fTemp241 = fConst260 * fRec84[0] + fConst264 * fRec84[2];
			fVec228[IOTA0 & 32767] = fTemp241;
			float fTemp242 = fVec228[(IOTA0 - 1) & 32767];
			fVec229[0] = fConst96 * fTemp242 - fConst34 * fRec82[1];
			fRec83[0] = fConst33 * (fVec229[1] - fConst102 * fRec83[1] + fConst103 * fTemp242 + fConst104 * fTemp241);
			fRec82[0] = fRec83[0];
			fVec230[0] = 0.500327051f * fRec82[1] - fConst41 * fRec80[1];
			fRec81[0] = fConst31 * fRec82[1] + fConst40 * (fVec230[1] - fConst42 * fRec81[1] + 0.500327051f * fRec82[0]);
			fRec80[0] = fRec81[0];
			float fTemp243 = mydsp_faustpower2_f(fRec80[0]);
			fVec231[0] = fTemp243;
			float fTemp244 = fTemp243 + fVec231[1];
			fVec232[0] = fTemp244;
			float fTemp245 = fTemp244 + fVec232[2];
			fVec233[0] = fTemp245;
			float fTemp246 = fTemp245 + fVec233[4];
			fVec234[0] = fTemp246;
			float fTemp247 = fTemp246 + fVec234[8];
			fVec235[IOTA0 & 31] = fTemp247;
			float fTemp248 = fTemp247 + fVec235[(IOTA0 - 16) & 31];
			fVec236[IOTA0 & 63] = fTemp248;
			float fTemp249 = fTemp248 + fVec236[(IOTA0 - 32) & 63];
			fVec237[IOTA0 & 127] = fTemp249;
			float fTemp250 = fTemp249 + fVec237[(IOTA0 - 64) & 127];
			fVec238[IOTA0 & 255] = fTemp250;
			float fTemp251 = fTemp250 + fVec238[(IOTA0 - 128) & 255];
			fVec239[IOTA0 & 511] = fTemp251;
			float fTemp252 = fTemp251 + fVec239[(IOTA0 - 256) & 511];
			fVec240[IOTA0 & 1023] = fTemp252;
			float fTemp253 = fTemp252 + fVec240[(IOTA0 - 512) & 1023];
			fVec241[IOTA0 & 2047] = fTemp253;
			float fTemp254 = fTemp253 + fVec241[(IOTA0 - 1024) & 2047];
			fVec242[IOTA0 & 4095] = fTemp254;
			float fTemp255 = fTemp254 + fVec242[(IOTA0 - 2048) & 4095];
			fVec243[IOTA0 & 8191] = fTemp255;
			float fTemp256 = fTemp255 + fVec243[(IOTA0 - 4096) & 8191];
			fVec244[IOTA0 & 16383] = fTemp256;
			float fTemp257 = fTemp256 + fVec244[(IOTA0 - 8192) & 16383];
			fVec245[IOTA0 & 32767] = fTemp257;
			float fTemp258 = fTemp257 + fVec245[(IOTA0 - 16384) & 32767];
			fVec246[IOTA0 & 65535] = fTemp258;
			float fTemp259 = fTemp258 + fVec246[(IOTA0 - 32768) & 65535];
			fVec247[IOTA0 & 131071] = fTemp259;
			fVec248[IOTA0 & 262143] = fTemp259 + fVec247[(IOTA0 - 65536) & 131071];
			float fElse203 = 0.860009849f * fVec248[(IOTA0 - iConst137) & 262143];
			float fElse204 = 0.860009849f * fVec247[(IOTA0 - iConst139) & 131071];
			float fElse205 = 0.860009849f * fVec246[(IOTA0 - iConst141) & 65535];
			float fElse206 = 0.860009849f * fVec245[(IOTA0 - iConst143) & 32767];
			float fElse207 = 0.860009849f * fVec244[(IOTA0 - iConst145) & 16383];
			float fElse208 = 0.860009849f * fVec243[(IOTA0 - iConst147) & 8191];
			float fElse209 = 0.860009849f * fVec242[(IOTA0 - iConst149) & 4095];
			float fElse210 = 0.860009849f * fVec241[(IOTA0 - iConst151) & 2047];
			float fElse211 = 0.860009849f * fVec240[(IOTA0 - iConst153) & 1023];
			float fElse212 = 0.860009849f * fVec239[(IOTA0 - iConst155) & 511];
			float fElse213 = 0.860009849f * fVec238[(IOTA0 - iConst157) & 255];
			float fElse214 = 0.860009849f * fVec237[(IOTA0 - iConst159) & 127];
			float fElse215 = 0.860009849f * fVec236[(IOTA0 - iConst161) & 63];
			float fElse216 = 0.860009849f * fVec235[(IOTA0 - iConst163) & 31];
			float fElse217 = 0.860009849f * fVec234[iConst165];
			float fElse218 = 0.860009849f * fVec233[iConst167];
			float fElse219 = 0.860009849f * fTemp243;
			float fElse220 = 0.860009849f * fVec232[iConst168];
			float fTemp260 = fTemp99 * ((4.34294462f * (fTemp84 - std::log(std::max<float>(9.99999996e-13f, fConst94 * (((iConst95) ? fElse203 : 0.0f) + ((iConst138) ? fElse204 : 0.0f) + ((iConst140) ? fElse205 : 0.0f) + ((iConst142) ? fElse206 : 0.0f) + ((iConst144) ? fElse207 : 0.0f) + ((iConst146) ? fElse208 : 0.0f) + ((iConst148) ? fElse209 : 0.0f) + ((iConst150) ? fElse210 : 0.0f) + ((iConst152) ? fElse211 : 0.0f) + ((iConst154) ? fElse212 : 0.0f) + ((iConst156) ? fElse213 : 0.0f) + ((iConst158) ? fElse214 : 0.0f) + ((iConst160) ? fElse215 : 0.0f) + ((iConst162) ? fElse216 : 0.0f) + ((iConst164) ? fElse217 : 0.0f) + ((iConst166) ? fElse218 : 0.0f) + ((iConst168) ? fElse219 : 0.0f) + ((iConst169) ? fElse220 : 0.0f))))) + -18.0f) - fSlow9);
			fVbargraph11 = FAUSTFLOAT(fTemp260);
			fRec89[0] = fTemp47 - fConst269 * (fConst270 * fRec89[2] + fConst271 * fRec89[1]);
			float fTemp261 = fConst268 * fRec89[0] + fConst272 * fRec89[2];
			fVec249[IOTA0 & 32767] = fTemp261;
			float fTemp262 = fVec249[(IOTA0 - 1) & 32767];
			fVec250[0] = fConst96 * fTemp262 - fConst34 * fRec87[1];
			fRec88[0] = fConst33 * (fVec250[1] - fConst102 * fRec88[1] + fConst103 * fTemp262 + fConst104 * fTemp261);
			fRec87[0] = fRec88[0];
			fVec251[0] = 0.500327051f * fRec87[1] - fConst41 * fRec85[1];
			fRec86[0] = fConst31 * fRec87[1] + fConst40 * (fVec251[1] - fConst42 * fRec86[1] + 0.500327051f * fRec87[0]);
			fRec85[0] = fRec86[0];
			float fTemp263 = mydsp_faustpower2_f(fRec85[0]);
			fVec252[0] = fTemp263;
			float fTemp264 = fTemp263 + fVec252[1];
			fVec253[0] = fTemp264;
			float fTemp265 = fTemp264 + fVec253[2];
			fVec254[0] = fTemp265;
			float fTemp266 = fTemp265 + fVec254[4];
			fVec255[0] = fTemp266;
			float fTemp267 = fTemp266 + fVec255[8];
			fVec256[IOTA0 & 31] = fTemp267;
			float fTemp268 = fTemp267 + fVec256[(IOTA0 - 16) & 31];
			fVec257[IOTA0 & 63] = fTemp268;
			float fTemp269 = fTemp268 + fVec257[(IOTA0 - 32) & 63];
			fVec258[IOTA0 & 127] = fTemp269;
			float fTemp270 = fTemp269 + fVec258[(IOTA0 - 64) & 127];
			fVec259[IOTA0 & 255] = fTemp270;
			float fTemp271 = fTemp270 + fVec259[(IOTA0 - 128) & 255];
			fVec260[IOTA0 & 511] = fTemp271;
			float fTemp272 = fTemp271 + fVec260[(IOTA0 - 256) & 511];
			fVec261[IOTA0 & 1023] = fTemp272;
			float fTemp273 = fTemp272 + fVec261[(IOTA0 - 512) & 1023];
			fVec262[IOTA0 & 2047] = fTemp273;
			float fTemp274 = fTemp273 + fVec262[(IOTA0 - 1024) & 2047];
			fVec263[IOTA0 & 4095] = fTemp274;
			float fTemp275 = fTemp274 + fVec263[(IOTA0 - 2048) & 4095];
			fVec264[IOTA0 & 8191] = fTemp275;
			float fTemp276 = fTemp275 + fVec264[(IOTA0 - 4096) & 8191];
			fVec265[IOTA0 & 16383] = fTemp276;
			float fTemp277 = fTemp276 + fVec265[(IOTA0 - 8192) & 16383];
			fVec266[IOTA0 & 32767] = fTemp277;
			float fTemp278 = fTemp277 + fVec266[(IOTA0 - 16384) & 32767];
			fVec267[IOTA0 & 65535] = fTemp278;
			float fTemp279 = fTemp278 + fVec267[(IOTA0 - 32768) & 65535];
			fVec268[IOTA0 & 131071] = fTemp279;
			fVec269[IOTA0 & 262143] = fTemp279 + fVec268[(IOTA0 - 65536) & 131071];
			float fElse221 = 0.860009849f * fVec269[(IOTA0 - iConst137) & 262143];
			float fElse222 = 0.860009849f * fVec268[(IOTA0 - iConst139) & 131071];
			float fElse223 = 0.860009849f * fVec267[(IOTA0 - iConst141) & 65535];
			float fElse224 = 0.860009849f * fVec266[(IOTA0 - iConst143) & 32767];
			float fElse225 = 0.860009849f * fVec265[(IOTA0 - iConst145) & 16383];
			float fElse226 = 0.860009849f * fVec264[(IOTA0 - iConst147) & 8191];
			float fElse227 = 0.860009849f * fVec263[(IOTA0 - iConst149) & 4095];
			float fElse228 = 0.860009849f * fVec262[(IOTA0 - iConst151) & 2047];
			float fElse229 = 0.860009849f * fVec261[(IOTA0 - iConst153) & 1023];
			float fElse230 = 0.860009849f * fVec260[(IOTA0 - iConst155) & 511];
			float fElse231 = 0.860009849f * fVec259[(IOTA0 - iConst157) & 255];
			float fElse232 = 0.860009849f * fVec258[(IOTA0 - iConst159) & 127];
			float fElse233 = 0.860009849f * fVec257[(IOTA0 - iConst161) & 63];
			float fElse234 = 0.860009849f * fVec256[(IOTA0 - iConst163) & 31];
			float fElse235 = 0.860009849f * fVec255[iConst165];
			float fElse236 = 0.860009849f * fVec254[iConst167];
			float fElse237 = 0.860009849f * fTemp263;
			float fElse238 = 0.860009849f * fVec253[iConst168];
			float fTemp280 = fTemp99 * ((4.34294462f * (fTemp84 - std::log(std::max<float>(9.99999996e-13f, fConst94 * (((iConst95) ? fElse221 : 0.0f) + ((iConst138) ? fElse222 : 0.0f) + ((iConst140) ? fElse223 : 0.0f) + ((iConst142) ? fElse224 : 0.0f) + ((iConst144) ? fElse225 : 0.0f) + ((iConst146) ? fElse226 : 0.0f) + ((iConst148) ? fElse227 : 0.0f) + ((iConst150) ? fElse228 : 0.0f) + ((iConst152) ? fElse229 : 0.0f) + ((iConst154) ? fElse230 : 0.0f) + ((iConst156) ? fElse231 : 0.0f) + ((iConst158) ? fElse232 : 0.0f) + ((iConst160) ? fElse233 : 0.0f) + ((iConst162) ? fElse234 : 0.0f) + ((iConst164) ? fElse235 : 0.0f) + ((iConst166) ? fElse236 : 0.0f) + ((iConst168) ? fElse237 : 0.0f) + ((iConst169) ? fElse238 : 0.0f))))) + -19.0f) - fSlow10);
			fVbargraph12 = FAUSTFLOAT(fTemp280);
			fRec94[0] = fTemp47 - fConst277 * (fConst278 * fRec94[2] + fConst279 * fRec94[1]);
			float fTemp281 = fConst276 * fRec94[0] + fConst280 * fRec94[2];
			fVec270[IOTA0 & 32767] = fTemp281;
			float fTemp282 = fVec270[(IOTA0 - 1) & 32767];
			fVec271[0] = fConst96 * fTemp282 - fConst34 * fRec92[1];
			fRec93[0] = fConst33 * (fVec271[1] - fConst102 * fRec93[1] + fConst103 * fTemp282 + fConst104 * fTemp281);
			fRec92[0] = fRec93[0];
			fVec272[0] = 0.500327051f * fRec92[1] - fConst41 * fRec90[1];
			fRec91[0] = fConst31 * fRec92[1] + fConst40 * (fVec272[1] - fConst42 * fRec91[1] + 0.500327051f * fRec92[0]);
			fRec90[0] = fRec91[0];
			float fTemp283 = mydsp_faustpower2_f(fRec90[0]);
			fVec273[0] = fTemp283;
			float fTemp284 = fTemp283 + fVec273[1];
			fVec274[0] = fTemp284;
			float fTemp285 = fTemp284 + fVec274[2];
			fVec275[0] = fTemp285;
			float fTemp286 = fTemp285 + fVec275[4];
			fVec276[0] = fTemp286;
			float fTemp287 = fTemp286 + fVec276[8];
			fVec277[IOTA0 & 31] = fTemp287;
			float fTemp288 = fTemp287 + fVec277[(IOTA0 - 16) & 31];
			fVec278[IOTA0 & 63] = fTemp288;
			float fTemp289 = fTemp288 + fVec278[(IOTA0 - 32) & 63];
			fVec279[IOTA0 & 127] = fTemp289;
			float fTemp290 = fTemp289 + fVec279[(IOTA0 - 64) & 127];
			fVec280[IOTA0 & 255] = fTemp290;
			float fTemp291 = fTemp290 + fVec280[(IOTA0 - 128) & 255];
			fVec281[IOTA0 & 511] = fTemp291;
			float fTemp292 = fTemp291 + fVec281[(IOTA0 - 256) & 511];
			fVec282[IOTA0 & 1023] = fTemp292;
			float fTemp293 = fTemp292 + fVec282[(IOTA0 - 512) & 1023];
			fVec283[IOTA0 & 2047] = fTemp293;
			float fTemp294 = fTemp293 + fVec283[(IOTA0 - 1024) & 2047];
			fVec284[IOTA0 & 4095] = fTemp294;
			float fTemp295 = fTemp294 + fVec284[(IOTA0 - 2048) & 4095];
			fVec285[IOTA0 & 8191] = fTemp295;
			float fTemp296 = fTemp295 + fVec285[(IOTA0 - 4096) & 8191];
			fVec286[IOTA0 & 16383] = fTemp296;
			float fTemp297 = fTemp296 + fVec286[(IOTA0 - 8192) & 16383];
			fVec287[IOTA0 & 32767] = fTemp297;
			float fTemp298 = fTemp297 + fVec287[(IOTA0 - 16384) & 32767];
			fVec288[IOTA0 & 65535] = fTemp298;
			float fTemp299 = fTemp298 + fVec288[(IOTA0 - 32768) & 65535];
			fVec289[IOTA0 & 131071] = fTemp299;
			fVec290[IOTA0 & 262143] = fTemp299 + fVec289[(IOTA0 - 65536) & 131071];
			float fElse239 = 0.860009849f * fVec290[(IOTA0 - iConst137) & 262143];
			float fElse240 = 0.860009849f * fVec289[(IOTA0 - iConst139) & 131071];
			float fElse241 = 0.860009849f * fVec288[(IOTA0 - iConst141) & 65535];
			float fElse242 = 0.860009849f * fVec287[(IOTA0 - iConst143) & 32767];
			float fElse243 = 0.860009849f * fVec286[(IOTA0 - iConst145) & 16383];
			float fElse244 = 0.860009849f * fVec285[(IOTA0 - iConst147) & 8191];
			float fElse245 = 0.860009849f * fVec284[(IOTA0 - iConst149) & 4095];
			float fElse246 = 0.860009849f * fVec283[(IOTA0 - iConst151) & 2047];
			float fElse247 = 0.860009849f * fVec282[(IOTA0 - iConst153) & 1023];
			float fElse248 = 0.860009849f * fVec281[(IOTA0 - iConst155) & 511];
			float fElse249 = 0.860009849f * fVec280[(IOTA0 - iConst157) & 255];
			float fElse250 = 0.860009849f * fVec279[(IOTA0 - iConst159) & 127];
			float fElse251 = 0.860009849f * fVec278[(IOTA0 - iConst161) & 63];
			float fElse252 = 0.860009849f * fVec277[(IOTA0 - iConst163) & 31];
			float fElse253 = 0.860009849f * fVec276[iConst165];
			float fElse254 = 0.860009849f * fVec275[iConst167];
			float fElse255 = 0.860009849f * fTemp283;
			float fElse256 = 0.860009849f * fVec274[iConst168];
			float fTemp300 = fTemp99 * ((4.34294462f * (fTemp84 - std::log(std::max<float>(9.99999996e-13f, fConst94 * (((iConst95) ? fElse239 : 0.0f) + ((iConst138) ? fElse240 : 0.0f) + ((iConst140) ? fElse241 : 0.0f) + ((iConst142) ? fElse242 : 0.0f) + ((iConst144) ? fElse243 : 0.0f) + ((iConst146) ? fElse244 : 0.0f) + ((iConst148) ? fElse245 : 0.0f) + ((iConst150) ? fElse246 : 0.0f) + ((iConst152) ? fElse247 : 0.0f) + ((iConst154) ? fElse248 : 0.0f) + ((iConst156) ? fElse249 : 0.0f) + ((iConst158) ? fElse250 : 0.0f) + ((iConst160) ? fElse251 : 0.0f) + ((iConst162) ? fElse252 : 0.0f) + ((iConst164) ? fElse253 : 0.0f) + ((iConst166) ? fElse254 : 0.0f) + ((iConst168) ? fElse255 : 0.0f) + ((iConst169) ? fElse256 : 0.0f))))) + -20.0f) - fSlow11);
			fVbargraph13 = FAUSTFLOAT(fTemp300);
			fRec99[0] = fTemp47 - fConst285 * (fConst286 * fRec99[2] + fConst287 * fRec99[1]);
			float fTemp301 = fConst284 * fRec99[0] + fConst288 * fRec99[2];
			fVec291[IOTA0 & 32767] = fTemp301;
			float fTemp302 = fVec291[(IOTA0 - 1) & 32767];
			fVec292[0] = fConst96 * fTemp302 - fConst34 * fRec97[1];
			fRec98[0] = fConst33 * (fVec292[1] - fConst102 * fRec98[1] + fConst103 * fTemp302 + fConst104 * fTemp301);
			fRec97[0] = fRec98[0];
			fVec293[0] = 0.500327051f * fRec97[1] - fConst41 * fRec95[1];
			fRec96[0] = fConst31 * fRec97[1] + fConst40 * (fVec293[1] - fConst42 * fRec96[1] + 0.500327051f * fRec97[0]);
			fRec95[0] = fRec96[0];
			float fTemp303 = mydsp_faustpower2_f(fRec95[0]);
			fVec294[0] = fTemp303;
			float fTemp304 = fTemp303 + fVec294[1];
			fVec295[0] = fTemp304;
			float fTemp305 = fTemp304 + fVec295[2];
			fVec296[0] = fTemp305;
			float fTemp306 = fTemp305 + fVec296[4];
			fVec297[0] = fTemp306;
			float fTemp307 = fTemp306 + fVec297[8];
			fVec298[IOTA0 & 31] = fTemp307;
			float fTemp308 = fTemp307 + fVec298[(IOTA0 - 16) & 31];
			fVec299[IOTA0 & 63] = fTemp308;
			float fTemp309 = fTemp308 + fVec299[(IOTA0 - 32) & 63];
			fVec300[IOTA0 & 127] = fTemp309;
			float fTemp310 = fTemp309 + fVec300[(IOTA0 - 64) & 127];
			fVec301[IOTA0 & 255] = fTemp310;
			float fTemp311 = fTemp310 + fVec301[(IOTA0 - 128) & 255];
			fVec302[IOTA0 & 511] = fTemp311;
			float fTemp312 = fTemp311 + fVec302[(IOTA0 - 256) & 511];
			fVec303[IOTA0 & 1023] = fTemp312;
			float fTemp313 = fTemp312 + fVec303[(IOTA0 - 512) & 1023];
			fVec304[IOTA0 & 2047] = fTemp313;
			float fTemp314 = fTemp313 + fVec304[(IOTA0 - 1024) & 2047];
			fVec305[IOTA0 & 4095] = fTemp314;
			float fTemp315 = fTemp314 + fVec305[(IOTA0 - 2048) & 4095];
			fVec306[IOTA0 & 8191] = fTemp315;
			float fTemp316 = fTemp315 + fVec306[(IOTA0 - 4096) & 8191];
			fVec307[IOTA0 & 16383] = fTemp316;
			float fTemp317 = fTemp316 + fVec307[(IOTA0 - 8192) & 16383];
			fVec308[IOTA0 & 32767] = fTemp317;
			float fTemp318 = fTemp317 + fVec308[(IOTA0 - 16384) & 32767];
			fVec309[IOTA0 & 65535] = fTemp318;
			float fTemp319 = fTemp318 + fVec309[(IOTA0 - 32768) & 65535];
			fVec310[IOTA0 & 131071] = fTemp319;
			fVec311[IOTA0 & 262143] = fTemp319 + fVec310[(IOTA0 - 65536) & 131071];
			float fElse257 = 0.860009849f * fVec311[(IOTA0 - iConst137) & 262143];
			float fElse258 = 0.860009849f * fVec310[(IOTA0 - iConst139) & 131071];
			float fElse259 = 0.860009849f * fVec309[(IOTA0 - iConst141) & 65535];
			float fElse260 = 0.860009849f * fVec308[(IOTA0 - iConst143) & 32767];
			float fElse261 = 0.860009849f * fVec307[(IOTA0 - iConst145) & 16383];
			float fElse262 = 0.860009849f * fVec306[(IOTA0 - iConst147) & 8191];
			float fElse263 = 0.860009849f * fVec305[(IOTA0 - iConst149) & 4095];
			float fElse264 = 0.860009849f * fVec304[(IOTA0 - iConst151) & 2047];
			float fElse265 = 0.860009849f * fVec303[(IOTA0 - iConst153) & 1023];
			float fElse266 = 0.860009849f * fVec302[(IOTA0 - iConst155) & 511];
			float fElse267 = 0.860009849f * fVec301[(IOTA0 - iConst157) & 255];
			float fElse268 = 0.860009849f * fVec300[(IOTA0 - iConst159) & 127];
			float fElse269 = 0.860009849f * fVec299[(IOTA0 - iConst161) & 63];
			float fElse270 = 0.860009849f * fVec298[(IOTA0 - iConst163) & 31];
			float fElse271 = 0.860009849f * fVec297[iConst165];
			float fElse272 = 0.860009849f * fVec296[iConst167];
			float fElse273 = 0.860009849f * fTemp303;
			float fElse274 = 0.860009849f * fVec295[iConst168];
			float fTemp320 = fTemp99 * ((4.34294462f * (fTemp84 - std::log(std::max<float>(9.99999996e-13f, fConst94 * (((iConst95) ? fElse257 : 0.0f) + ((iConst138) ? fElse258 : 0.0f) + ((iConst140) ? fElse259 : 0.0f) + ((iConst142) ? fElse260 : 0.0f) + ((iConst144) ? fElse261 : 0.0f) + ((iConst146) ? fElse262 : 0.0f) + ((iConst148) ? fElse263 : 0.0f) + ((iConst150) ? fElse264 : 0.0f) + ((iConst152) ? fElse265 : 0.0f) + ((iConst154) ? fElse266 : 0.0f) + ((iConst156) ? fElse267 : 0.0f) + ((iConst158) ? fElse268 : 0.0f) + ((iConst160) ? fElse269 : 0.0f) + ((iConst162) ? fElse270 : 0.0f) + ((iConst164) ? fElse271 : 0.0f) + ((iConst166) ? fElse272 : 0.0f) + ((iConst168) ? fElse273 : 0.0f) + ((iConst169) ? fElse274 : 0.0f))))) + -22.0f) - fSlow9);
			fVbargraph14 = FAUSTFLOAT(fTemp320);
			fRec104[0] = fTemp47 - fConst293 * (fConst294 * fRec104[2] + fConst295 * fRec104[1]);
			float fTemp321 = fConst292 * fRec104[0] + fConst296 * fRec104[2];
			fVec312[IOTA0 & 32767] = fTemp321;
			float fTemp322 = fVec312[(IOTA0 - 1) & 32767];
			fVec313[0] = fConst96 * fTemp322 - fConst34 * fRec102[1];
			fRec103[0] = fConst33 * (fVec313[1] - fConst102 * fRec103[1] + fConst103 * fTemp322 + fConst104 * fTemp321);
			fRec102[0] = fRec103[0];
			fVec314[0] = 0.500327051f * fRec102[1] - fConst41 * fRec100[1];
			fRec101[0] = fConst31 * fRec102[1] + fConst40 * (fVec314[1] - fConst42 * fRec101[1] + 0.500327051f * fRec102[0]);
			fRec100[0] = fRec101[0];
			float fTemp323 = mydsp_faustpower2_f(fRec100[0]);
			fVec315[0] = fTemp323;
			float fTemp324 = fTemp323 + fVec315[1];
			fVec316[0] = fTemp324;
			float fTemp325 = fTemp324 + fVec316[2];
			fVec317[0] = fTemp325;
			float fTemp326 = fTemp325 + fVec317[4];
			fVec318[0] = fTemp326;
			float fTemp327 = fTemp326 + fVec318[8];
			fVec319[IOTA0 & 31] = fTemp327;
			float fTemp328 = fTemp327 + fVec319[(IOTA0 - 16) & 31];
			fVec320[IOTA0 & 63] = fTemp328;
			float fTemp329 = fTemp328 + fVec320[(IOTA0 - 32) & 63];
			fVec321[IOTA0 & 127] = fTemp329;
			float fTemp330 = fTemp329 + fVec321[(IOTA0 - 64) & 127];
			fVec322[IOTA0 & 255] = fTemp330;
			float fTemp331 = fTemp330 + fVec322[(IOTA0 - 128) & 255];
			fVec323[IOTA0 & 511] = fTemp331;
			float fTemp332 = fTemp331 + fVec323[(IOTA0 - 256) & 511];
			fVec324[IOTA0 & 1023] = fTemp332;
			float fTemp333 = fTemp332 + fVec324[(IOTA0 - 512) & 1023];
			fVec325[IOTA0 & 2047] = fTemp333;
			float fTemp334 = fTemp333 + fVec325[(IOTA0 - 1024) & 2047];
			fVec326[IOTA0 & 4095] = fTemp334;
			float fTemp335 = fTemp334 + fVec326[(IOTA0 - 2048) & 4095];
			fVec327[IOTA0 & 8191] = fTemp335;
			float fTemp336 = fTemp335 + fVec327[(IOTA0 - 4096) & 8191];
			fVec328[IOTA0 & 16383] = fTemp336;
			float fTemp337 = fTemp336 + fVec328[(IOTA0 - 8192) & 16383];
			fVec329[IOTA0 & 32767] = fTemp337;
			float fTemp338 = fTemp337 + fVec329[(IOTA0 - 16384) & 32767];
			fVec330[IOTA0 & 65535] = fTemp338;
			float fTemp339 = fTemp338 + fVec330[(IOTA0 - 32768) & 65535];
			fVec331[IOTA0 & 131071] = fTemp339;
			fVec332[IOTA0 & 262143] = fTemp339 + fVec331[(IOTA0 - 65536) & 131071];
			float fElse275 = 0.860009849f * fVec332[(IOTA0 - iConst137) & 262143];
			float fElse276 = 0.860009849f * fVec331[(IOTA0 - iConst139) & 131071];
			float fElse277 = 0.860009849f * fVec330[(IOTA0 - iConst141) & 65535];
			float fElse278 = 0.860009849f * fVec329[(IOTA0 - iConst143) & 32767];
			float fElse279 = 0.860009849f * fVec328[(IOTA0 - iConst145) & 16383];
			float fElse280 = 0.860009849f * fVec327[(IOTA0 - iConst147) & 8191];
			float fElse281 = 0.860009849f * fVec326[(IOTA0 - iConst149) & 4095];
			float fElse282 = 0.860009849f * fVec325[(IOTA0 - iConst151) & 2047];
			float fElse283 = 0.860009849f * fVec324[(IOTA0 - iConst153) & 1023];
			float fElse284 = 0.860009849f * fVec323[(IOTA0 - iConst155) & 511];
			float fElse285 = 0.860009849f * fVec322[(IOTA0 - iConst157) & 255];
			float fElse286 = 0.860009849f * fVec321[(IOTA0 - iConst159) & 127];
			float fElse287 = 0.860009849f * fVec320[(IOTA0 - iConst161) & 63];
			float fElse288 = 0.860009849f * fVec319[(IOTA0 - iConst163) & 31];
			float fElse289 = 0.860009849f * fVec318[iConst165];
			float fElse290 = 0.860009849f * fVec317[iConst167];
			float fElse291 = 0.860009849f * fTemp323;
			float fElse292 = 0.860009849f * fVec316[iConst168];
			float fTemp340 = fTemp99 * (fSlow8 + 4.34294462f * (fTemp84 - std::log(std::max<float>(9.99999996e-13f, fConst94 * (((iConst95) ? fElse275 : 0.0f) + ((iConst138) ? fElse276 : 0.0f) + ((iConst140) ? fElse277 : 0.0f) + ((iConst142) ? fElse278 : 0.0f) + ((iConst144) ? fElse279 : 0.0f) + ((iConst146) ? fElse280 : 0.0f) + ((iConst148) ? fElse281 : 0.0f) + ((iConst150) ? fElse282 : 0.0f) + ((iConst152) ? fElse283 : 0.0f) + ((iConst154) ? fElse284 : 0.0f) + ((iConst156) ? fElse285 : 0.0f) + ((iConst158) ? fElse286 : 0.0f) + ((iConst160) ? fElse287 : 0.0f) + ((iConst162) ? fElse288 : 0.0f) + ((iConst164) ? fElse289 : 0.0f) + ((iConst166) ? fElse290 : 0.0f) + ((iConst168) ? fElse291 : 0.0f) + ((iConst169) ? fElse292 : 0.0f))))) + -24.0f);
			fVbargraph15 = FAUSTFLOAT(fTemp340);
			fRec109[0] = fTemp47 - fConst301 * (fConst302 * fRec109[2] + fConst303 * fRec109[1]);
			float fTemp341 = fConst300 * fRec109[0] + fConst304 * fRec109[2];
			fVec333[IOTA0 & 32767] = fTemp341;
			float fTemp342 = fVec333[(IOTA0 - 1) & 32767];
			fVec334[0] = fConst96 * fTemp342 - fConst34 * fRec107[1];
			fRec108[0] = fConst33 * (fVec334[1] - fConst102 * fRec108[1] + fConst103 * fTemp342 + fConst104 * fTemp341);
			fRec107[0] = fRec108[0];
			fVec335[0] = 0.500327051f * fRec107[1] - fConst41 * fRec105[1];
			fRec106[0] = fConst31 * fRec107[1] + fConst40 * (fVec335[1] - fConst42 * fRec106[1] + 0.500327051f * fRec107[0]);
			fRec105[0] = fRec106[0];
			float fTemp343 = mydsp_faustpower2_f(fRec105[0]);
			fVec336[0] = fTemp343;
			float fTemp344 = fTemp343 + fVec336[1];
			fVec337[0] = fTemp344;
			float fTemp345 = fTemp344 + fVec337[2];
			fVec338[0] = fTemp345;
			float fTemp346 = fTemp345 + fVec338[4];
			fVec339[0] = fTemp346;
			float fTemp347 = fTemp346 + fVec339[8];
			fVec340[IOTA0 & 31] = fTemp347;
			float fTemp348 = fTemp347 + fVec340[(IOTA0 - 16) & 31];
			fVec341[IOTA0 & 63] = fTemp348;
			float fTemp349 = fTemp348 + fVec341[(IOTA0 - 32) & 63];
			fVec342[IOTA0 & 127] = fTemp349;
			float fTemp350 = fTemp349 + fVec342[(IOTA0 - 64) & 127];
			fVec343[IOTA0 & 255] = fTemp350;
			float fTemp351 = fTemp350 + fVec343[(IOTA0 - 128) & 255];
			fVec344[IOTA0 & 511] = fTemp351;
			float fTemp352 = fTemp351 + fVec344[(IOTA0 - 256) & 511];
			fVec345[IOTA0 & 1023] = fTemp352;
			float fTemp353 = fTemp352 + fVec345[(IOTA0 - 512) & 1023];
			fVec346[IOTA0 & 2047] = fTemp353;
			float fTemp354 = fTemp353 + fVec346[(IOTA0 - 1024) & 2047];
			fVec347[IOTA0 & 4095] = fTemp354;
			float fTemp355 = fTemp354 + fVec347[(IOTA0 - 2048) & 4095];
			fVec348[IOTA0 & 8191] = fTemp355;
			float fTemp356 = fTemp355 + fVec348[(IOTA0 - 4096) & 8191];
			fVec349[IOTA0 & 16383] = fTemp356;
			float fTemp357 = fTemp356 + fVec349[(IOTA0 - 8192) & 16383];
			fVec350[IOTA0 & 32767] = fTemp357;
			float fTemp358 = fTemp357 + fVec350[(IOTA0 - 16384) & 32767];
			fVec351[IOTA0 & 65535] = fTemp358;
			float fTemp359 = fTemp358 + fVec351[(IOTA0 - 32768) & 65535];
			fVec352[IOTA0 & 131071] = fTemp359;
			fVec353[IOTA0 & 262143] = fTemp359 + fVec352[(IOTA0 - 65536) & 131071];
			float fElse293 = 0.860009849f * fVec353[(IOTA0 - iConst137) & 262143];
			float fElse294 = 0.860009849f * fVec352[(IOTA0 - iConst139) & 131071];
			float fElse295 = 0.860009849f * fVec351[(IOTA0 - iConst141) & 65535];
			float fElse296 = 0.860009849f * fVec350[(IOTA0 - iConst143) & 32767];
			float fElse297 = 0.860009849f * fVec349[(IOTA0 - iConst145) & 16383];
			float fElse298 = 0.860009849f * fVec348[(IOTA0 - iConst147) & 8191];
			float fElse299 = 0.860009849f * fVec347[(IOTA0 - iConst149) & 4095];
			float fElse300 = 0.860009849f * fVec346[(IOTA0 - iConst151) & 2047];
			float fElse301 = 0.860009849f * fVec345[(IOTA0 - iConst153) & 1023];
			float fElse302 = 0.860009849f * fVec344[(IOTA0 - iConst155) & 511];
			float fElse303 = 0.860009849f * fVec343[(IOTA0 - iConst157) & 255];
			float fElse304 = 0.860009849f * fVec342[(IOTA0 - iConst159) & 127];
			float fElse305 = 0.860009849f * fVec341[(IOTA0 - iConst161) & 63];
			float fElse306 = 0.860009849f * fVec340[(IOTA0 - iConst163) & 31];
			float fElse307 = 0.860009849f * fVec339[iConst165];
			float fElse308 = 0.860009849f * fVec338[iConst167];
			float fElse309 = 0.860009849f * fTemp343;
			float fElse310 = 0.860009849f * fVec337[iConst168];
			float fTemp360 = fTemp99 * (fSlow10 + 4.34294462f * (fTemp84 - std::log(std::max<float>(9.99999996e-13f, fConst94 * (((iConst95) ? fElse293 : 0.0f) + ((iConst138) ? fElse294 : 0.0f) + ((iConst140) ? fElse295 : 0.0f) + ((iConst142) ? fElse296 : 0.0f) + ((iConst144) ? fElse297 : 0.0f) + ((iConst146) ? fElse298 : 0.0f) + ((iConst148) ? fElse299 : 0.0f) + ((iConst150) ? fElse300 : 0.0f) + ((iConst152) ? fElse301 : 0.0f) + ((iConst154) ? fElse302 : 0.0f) + ((iConst156) ? fElse303 : 0.0f) + ((iConst158) ? fElse304 : 0.0f) + ((iConst160) ? fElse305 : 0.0f) + ((iConst162) ? fElse306 : 0.0f) + ((iConst164) ? fElse307 : 0.0f) + ((iConst166) ? fElse308 : 0.0f) + ((iConst168) ? fElse309 : 0.0f) + ((iConst169) ? fElse310 : 0.0f))))) + -27.0f);
			fVbargraph16 = FAUSTFLOAT(fTemp360);
			fRec114[0] = fTemp47 - fConst309 * (fConst310 * fRec114[2] + fConst311 * fRec114[1]);
			float fTemp361 = fConst308 * fRec114[0] + fConst312 * fRec114[2];
			fVec354[IOTA0 & 32767] = fTemp361;
			float fTemp362 = fVec354[(IOTA0 - 1) & 32767];
			fVec355[0] = fConst96 * fTemp362 - fConst34 * fRec112[1];
			fRec113[0] = fConst33 * (fVec355[1] - fConst102 * fRec113[1] + fConst103 * fTemp362 + fConst104 * fTemp361);
			fRec112[0] = fRec113[0];
			fVec356[0] = 0.500327051f * fRec112[1] - fConst41 * fRec110[1];
			fRec111[0] = fConst31 * fRec112[1] + fConst40 * (fVec356[1] - fConst42 * fRec111[1] + 0.500327051f * fRec112[0]);
			fRec110[0] = fRec111[0];
			float fTemp363 = mydsp_faustpower2_f(fRec110[0]);
			fVec357[0] = fTemp363;
			float fTemp364 = fTemp363 + fVec357[1];
			fVec358[0] = fTemp364;
			float fTemp365 = fTemp364 + fVec358[2];
			fVec359[0] = fTemp365;
			float fTemp366 = fTemp365 + fVec359[4];
			fVec360[0] = fTemp366;
			float fTemp367 = fTemp366 + fVec360[8];
			fVec361[IOTA0 & 31] = fTemp367;
			float fTemp368 = fTemp367 + fVec361[(IOTA0 - 16) & 31];
			fVec362[IOTA0 & 63] = fTemp368;
			float fTemp369 = fTemp368 + fVec362[(IOTA0 - 32) & 63];
			fVec363[IOTA0 & 127] = fTemp369;
			float fTemp370 = fTemp369 + fVec363[(IOTA0 - 64) & 127];
			fVec364[IOTA0 & 255] = fTemp370;
			float fTemp371 = fTemp370 + fVec364[(IOTA0 - 128) & 255];
			fVec365[IOTA0 & 511] = fTemp371;
			float fTemp372 = fTemp371 + fVec365[(IOTA0 - 256) & 511];
			fVec366[IOTA0 & 1023] = fTemp372;
			float fTemp373 = fTemp372 + fVec366[(IOTA0 - 512) & 1023];
			fVec367[IOTA0 & 2047] = fTemp373;
			float fTemp374 = fTemp373 + fVec367[(IOTA0 - 1024) & 2047];
			fVec368[IOTA0 & 4095] = fTemp374;
			float fTemp375 = fTemp374 + fVec368[(IOTA0 - 2048) & 4095];
			fVec369[IOTA0 & 8191] = fTemp375;
			float fTemp376 = fTemp375 + fVec369[(IOTA0 - 4096) & 8191];
			fVec370[IOTA0 & 16383] = fTemp376;
			float fTemp377 = fTemp376 + fVec370[(IOTA0 - 8192) & 16383];
			fVec371[IOTA0 & 32767] = fTemp377;
			float fTemp378 = fTemp377 + fVec371[(IOTA0 - 16384) & 32767];
			fVec372[IOTA0 & 65535] = fTemp378;
			float fTemp379 = fTemp378 + fVec372[(IOTA0 - 32768) & 65535];
			fVec373[IOTA0 & 131071] = fTemp379;
			fVec374[IOTA0 & 262143] = fTemp379 + fVec373[(IOTA0 - 65536) & 131071];
			float fElse311 = 0.860009849f * fVec374[(IOTA0 - iConst137) & 262143];
			float fElse312 = 0.860009849f * fVec373[(IOTA0 - iConst139) & 131071];
			float fElse313 = 0.860009849f * fVec372[(IOTA0 - iConst141) & 65535];
			float fElse314 = 0.860009849f * fVec371[(IOTA0 - iConst143) & 32767];
			float fElse315 = 0.860009849f * fVec370[(IOTA0 - iConst145) & 16383];
			float fElse316 = 0.860009849f * fVec369[(IOTA0 - iConst147) & 8191];
			float fElse317 = 0.860009849f * fVec368[(IOTA0 - iConst149) & 4095];
			float fElse318 = 0.860009849f * fVec367[(IOTA0 - iConst151) & 2047];
			float fElse319 = 0.860009849f * fVec366[(IOTA0 - iConst153) & 1023];
			float fElse320 = 0.860009849f * fVec365[(IOTA0 - iConst155) & 511];
			float fElse321 = 0.860009849f * fVec364[(IOTA0 - iConst157) & 255];
			float fElse322 = 0.860009849f * fVec363[(IOTA0 - iConst159) & 127];
			float fElse323 = 0.860009849f * fVec362[(IOTA0 - iConst161) & 63];
			float fElse324 = 0.860009849f * fVec361[(IOTA0 - iConst163) & 31];
			float fElse325 = 0.860009849f * fVec360[iConst165];
			float fElse326 = 0.860009849f * fVec359[iConst167];
			float fElse327 = 0.860009849f * fTemp363;
			float fElse328 = 0.860009849f * fVec358[iConst168];
			float fTemp380 = fTemp99 * (fSlow8 + 4.34294462f * (fTemp84 - std::log(std::max<float>(9.99999996e-13f, fConst94 * (((iConst95) ? fElse311 : 0.0f) + ((iConst138) ? fElse312 : 0.0f) + ((iConst140) ? fElse313 : 0.0f) + ((iConst142) ? fElse314 : 0.0f) + ((iConst144) ? fElse315 : 0.0f) + ((iConst146) ? fElse316 : 0.0f) + ((iConst148) ? fElse317 : 0.0f) + ((iConst150) ? fElse318 : 0.0f) + ((iConst152) ? fElse319 : 0.0f) + ((iConst154) ? fElse320 : 0.0f) + ((iConst156) ? fElse321 : 0.0f) + ((iConst158) ? fElse322 : 0.0f) + ((iConst160) ? fElse323 : 0.0f) + ((iConst162) ? fElse324 : 0.0f) + ((iConst164) ? fElse325 : 0.0f) + ((iConst166) ? fElse326 : 0.0f) + ((iConst168) ? fElse327 : 0.0f) + ((iConst169) ? fElse328 : 0.0f))))) + -26.0f);
			fVbargraph17 = FAUSTFLOAT(fTemp380);
			fRec119[0] = fTemp47 - fConst317 * (fConst318 * fRec119[2] + fConst319 * fRec119[1]);
			float fTemp381 = fConst316 * fRec119[0] + fConst320 * fRec119[2];
			fVec375[IOTA0 & 32767] = fTemp381;
			float fTemp382 = fVec375[(IOTA0 - 1) & 32767];
			fVec376[0] = fConst96 * fTemp382 - fConst34 * fRec117[1];
			fRec118[0] = fConst33 * (fVec376[1] - fConst102 * fRec118[1] + fConst103 * fTemp382 + fConst104 * fTemp381);
			fRec117[0] = fRec118[0];
			fVec377[0] = 0.500327051f * fRec117[1] - fConst41 * fRec115[1];
			fRec116[0] = fConst31 * fRec117[1] + fConst40 * (fVec377[1] - fConst42 * fRec116[1] + 0.500327051f * fRec117[0]);
			fRec115[0] = fRec116[0];
			float fTemp383 = mydsp_faustpower2_f(fRec115[0]);
			fVec378[0] = fTemp383;
			float fTemp384 = fTemp383 + fVec378[1];
			fVec379[0] = fTemp384;
			float fTemp385 = fTemp384 + fVec379[2];
			fVec380[0] = fTemp385;
			float fTemp386 = fTemp385 + fVec380[4];
			fVec381[0] = fTemp386;
			float fTemp387 = fTemp386 + fVec381[8];
			fVec382[IOTA0 & 31] = fTemp387;
			float fTemp388 = fTemp387 + fVec382[(IOTA0 - 16) & 31];
			fVec383[IOTA0 & 63] = fTemp388;
			float fTemp389 = fTemp388 + fVec383[(IOTA0 - 32) & 63];
			fVec384[IOTA0 & 127] = fTemp389;
			float fTemp390 = fTemp389 + fVec384[(IOTA0 - 64) & 127];
			fVec385[IOTA0 & 255] = fTemp390;
			float fTemp391 = fTemp390 + fVec385[(IOTA0 - 128) & 255];
			fVec386[IOTA0 & 511] = fTemp391;
			float fTemp392 = fTemp391 + fVec386[(IOTA0 - 256) & 511];
			fVec387[IOTA0 & 1023] = fTemp392;
			float fTemp393 = fTemp392 + fVec387[(IOTA0 - 512) & 1023];
			fVec388[IOTA0 & 2047] = fTemp393;
			float fTemp394 = fTemp393 + fVec388[(IOTA0 - 1024) & 2047];
			fVec389[IOTA0 & 4095] = fTemp394;
			float fTemp395 = fTemp394 + fVec389[(IOTA0 - 2048) & 4095];
			fVec390[IOTA0 & 8191] = fTemp395;
			float fTemp396 = fTemp395 + fVec390[(IOTA0 - 4096) & 8191];
			fVec391[IOTA0 & 16383] = fTemp396;
			float fTemp397 = fTemp396 + fVec391[(IOTA0 - 8192) & 16383];
			fVec392[IOTA0 & 32767] = fTemp397;
			float fTemp398 = fTemp397 + fVec392[(IOTA0 - 16384) & 32767];
			fVec393[IOTA0 & 65535] = fTemp398;
			float fTemp399 = fTemp398 + fVec393[(IOTA0 - 32768) & 65535];
			fVec394[IOTA0 & 131071] = fTemp399;
			fVec395[IOTA0 & 262143] = fTemp399 + fVec394[(IOTA0 - 65536) & 131071];
			float fElse329 = 0.860009849f * fVec395[(IOTA0 - iConst137) & 262143];
			float fElse330 = 0.860009849f * fVec394[(IOTA0 - iConst139) & 131071];
			float fElse331 = 0.860009849f * fVec393[(IOTA0 - iConst141) & 65535];
			float fElse332 = 0.860009849f * fVec392[(IOTA0 - iConst143) & 32767];
			float fElse333 = 0.860009849f * fVec391[(IOTA0 - iConst145) & 16383];
			float fElse334 = 0.860009849f * fVec390[(IOTA0 - iConst147) & 8191];
			float fElse335 = 0.860009849f * fVec389[(IOTA0 - iConst149) & 4095];
			float fElse336 = 0.860009849f * fVec388[(IOTA0 - iConst151) & 2047];
			float fElse337 = 0.860009849f * fVec387[(IOTA0 - iConst153) & 1023];
			float fElse338 = 0.860009849f * fVec386[(IOTA0 - iConst155) & 511];
			float fElse339 = 0.860009849f * fVec385[(IOTA0 - iConst157) & 255];
			float fElse340 = 0.860009849f * fVec384[(IOTA0 - iConst159) & 127];
			float fElse341 = 0.860009849f * fVec383[(IOTA0 - iConst161) & 63];
			float fElse342 = 0.860009849f * fVec382[(IOTA0 - iConst163) & 31];
			float fElse343 = 0.860009849f * fVec381[iConst165];
			float fElse344 = 0.860009849f * fVec380[iConst167];
			float fElse345 = 0.860009849f * fTemp383;
			float fElse346 = 0.860009849f * fVec379[iConst168];
			float fTemp400 = fTemp99 * (fSlow10 + 4.34294462f * (fTemp84 - std::log(std::max<float>(9.99999996e-13f, fConst94 * (((iConst95) ? fElse329 : 0.0f) + ((iConst138) ? fElse330 : 0.0f) + ((iConst140) ? fElse331 : 0.0f) + ((iConst142) ? fElse332 : 0.0f) + ((iConst144) ? fElse333 : 0.0f) + ((iConst146) ? fElse334 : 0.0f) + ((iConst148) ? fElse335 : 0.0f) + ((iConst150) ? fElse336 : 0.0f) + ((iConst152) ? fElse337 : 0.0f) + ((iConst154) ? fElse338 : 0.0f) + ((iConst156) ? fElse339 : 0.0f) + ((iConst158) ? fElse340 : 0.0f) + ((iConst160) ? fElse341 : 0.0f) + ((iConst162) ? fElse342 : 0.0f) + ((iConst164) ? fElse343 : 0.0f) + ((iConst166) ? fElse344 : 0.0f) + ((iConst168) ? fElse345 : 0.0f) + ((iConst169) ? fElse346 : 0.0f))))) + -28.0f);
			fVbargraph18 = FAUSTFLOAT(fTemp400);
			fRec124[0] = fTemp47 - fConst325 * (fConst326 * fRec124[2] + fConst327 * fRec124[1]);
			float fTemp401 = fConst324 * fRec124[0] + fConst328 * fRec124[2];
			fVec396[IOTA0 & 32767] = fTemp401;
			float fTemp402 = fVec396[(IOTA0 - 1) & 32767];
			fVec397[0] = fConst96 * fTemp402 - fConst34 * fRec122[1];
			fRec123[0] = fConst33 * (fVec397[1] - fConst102 * fRec123[1] + fConst103 * fTemp402 + fConst104 * fTemp401);
			fRec122[0] = fRec123[0];
			fVec398[0] = 0.500327051f * fRec122[1] - fConst41 * fRec120[1];
			fRec121[0] = fConst31 * fRec122[1] + fConst40 * (fVec398[1] - fConst42 * fRec121[1] + 0.500327051f * fRec122[0]);
			fRec120[0] = fRec121[0];
			float fTemp403 = mydsp_faustpower2_f(fRec120[0]);
			fVec399[0] = fTemp403;
			float fTemp404 = fTemp403 + fVec399[1];
			fVec400[0] = fTemp404;
			float fTemp405 = fTemp404 + fVec400[2];
			fVec401[0] = fTemp405;
			float fTemp406 = fTemp405 + fVec401[4];
			fVec402[0] = fTemp406;
			float fTemp407 = fTemp406 + fVec402[8];
			fVec403[IOTA0 & 31] = fTemp407;
			float fTemp408 = fTemp407 + fVec403[(IOTA0 - 16) & 31];
			fVec404[IOTA0 & 63] = fTemp408;
			float fTemp409 = fTemp408 + fVec404[(IOTA0 - 32) & 63];
			fVec405[IOTA0 & 127] = fTemp409;
			float fTemp410 = fTemp409 + fVec405[(IOTA0 - 64) & 127];
			fVec406[IOTA0 & 255] = fTemp410;
			float fTemp411 = fTemp410 + fVec406[(IOTA0 - 128) & 255];
			fVec407[IOTA0 & 511] = fTemp411;
			float fTemp412 = fTemp411 + fVec407[(IOTA0 - 256) & 511];
			fVec408[IOTA0 & 1023] = fTemp412;
			float fTemp413 = fTemp412 + fVec408[(IOTA0 - 512) & 1023];
			fVec409[IOTA0 & 2047] = fTemp413;
			float fTemp414 = fTemp413 + fVec409[(IOTA0 - 1024) & 2047];
			fVec410[IOTA0 & 4095] = fTemp414;
			float fTemp415 = fTemp414 + fVec410[(IOTA0 - 2048) & 4095];
			fVec411[IOTA0 & 8191] = fTemp415;
			float fTemp416 = fTemp415 + fVec411[(IOTA0 - 4096) & 8191];
			fVec412[IOTA0 & 16383] = fTemp416;
			float fTemp417 = fTemp416 + fVec412[(IOTA0 - 8192) & 16383];
			fVec413[IOTA0 & 32767] = fTemp417;
			float fTemp418 = fTemp417 + fVec413[(IOTA0 - 16384) & 32767];
			fVec414[IOTA0 & 65535] = fTemp418;
			float fTemp419 = fTemp418 + fVec414[(IOTA0 - 32768) & 65535];
			fVec415[IOTA0 & 131071] = fTemp419;
			fVec416[IOTA0 & 262143] = fTemp419 + fVec415[(IOTA0 - 65536) & 131071];
			float fElse347 = 0.860009849f * fVec416[(IOTA0 - iConst137) & 262143];
			float fElse348 = 0.860009849f * fVec415[(IOTA0 - iConst139) & 131071];
			float fElse349 = 0.860009849f * fVec414[(IOTA0 - iConst141) & 65535];
			float fElse350 = 0.860009849f * fVec413[(IOTA0 - iConst143) & 32767];
			float fElse351 = 0.860009849f * fVec412[(IOTA0 - iConst145) & 16383];
			float fElse352 = 0.860009849f * fVec411[(IOTA0 - iConst147) & 8191];
			float fElse353 = 0.860009849f * fVec410[(IOTA0 - iConst149) & 4095];
			float fElse354 = 0.860009849f * fVec409[(IOTA0 - iConst151) & 2047];
			float fElse355 = 0.860009849f * fVec408[(IOTA0 - iConst153) & 1023];
			float fElse356 = 0.860009849f * fVec407[(IOTA0 - iConst155) & 511];
			float fElse357 = 0.860009849f * fVec406[(IOTA0 - iConst157) & 255];
			float fElse358 = 0.860009849f * fVec405[(IOTA0 - iConst159) & 127];
			float fElse359 = 0.860009849f * fVec404[(IOTA0 - iConst161) & 63];
			float fElse360 = 0.860009849f * fVec403[(IOTA0 - iConst163) & 31];
			float fElse361 = 0.860009849f * fVec402[iConst165];
			float fElse362 = 0.860009849f * fVec401[iConst167];
			float fElse363 = 0.860009849f * fTemp403;
			float fElse364 = 0.860009849f * fVec400[iConst168];
			float fTemp420 = fTemp99 * (fSlow12 + 4.34294462f * (fTemp84 - std::log(std::max<float>(9.99999996e-13f, fConst94 * (((iConst95) ? fElse347 : 0.0f) + ((iConst138) ? fElse348 : 0.0f) + ((iConst140) ? fElse349 : 0.0f) + ((iConst142) ? fElse350 : 0.0f) + ((iConst144) ? fElse351 : 0.0f) + ((iConst146) ? fElse352 : 0.0f) + ((iConst148) ? fElse353 : 0.0f) + ((iConst150) ? fElse354 : 0.0f) + ((iConst152) ? fElse355 : 0.0f) + ((iConst154) ? fElse356 : 0.0f) + ((iConst156) ? fElse357 : 0.0f) + ((iConst158) ? fElse358 : 0.0f) + ((iConst160) ? fElse359 : 0.0f) + ((iConst162) ? fElse360 : 0.0f) + ((iConst164) ? fElse361 : 0.0f) + ((iConst166) ? fElse362 : 0.0f) + ((iConst168) ? fElse363 : 0.0f) + ((iConst169) ? fElse364 : 0.0f))))) + -29.0f);
			fVbargraph19 = FAUSTFLOAT(fTemp420);
			fRec129[0] = fTemp47 - fConst333 * (fConst334 * fRec129[2] + fConst335 * fRec129[1]);
			float fTemp421 = fConst332 * fRec129[0] + fConst336 * fRec129[2];
			fVec417[IOTA0 & 32767] = fTemp421;
			float fTemp422 = fVec417[(IOTA0 - 1) & 32767];
			fVec418[0] = fConst96 * fTemp422 - fConst34 * fRec127[1];
			fRec128[0] = fConst33 * (fVec418[1] - fConst102 * fRec128[1] + fConst103 * fTemp422 + fConst104 * fTemp421);
			fRec127[0] = fRec128[0];
			fVec419[0] = 0.500327051f * fRec127[1] - fConst41 * fRec125[1];
			fRec126[0] = fConst31 * fRec127[1] + fConst40 * (fVec419[1] - fConst42 * fRec126[1] + 0.500327051f * fRec127[0]);
			fRec125[0] = fRec126[0];
			float fTemp423 = mydsp_faustpower2_f(fRec125[0]);
			fVec420[0] = fTemp423;
			float fTemp424 = fTemp423 + fVec420[1];
			fVec421[0] = fTemp424;
			float fTemp425 = fTemp424 + fVec421[2];
			fVec422[0] = fTemp425;
			float fTemp426 = fTemp425 + fVec422[4];
			fVec423[0] = fTemp426;
			float fTemp427 = fTemp426 + fVec423[8];
			fVec424[IOTA0 & 31] = fTemp427;
			float fTemp428 = fTemp427 + fVec424[(IOTA0 - 16) & 31];
			fVec425[IOTA0 & 63] = fTemp428;
			float fTemp429 = fTemp428 + fVec425[(IOTA0 - 32) & 63];
			fVec426[IOTA0 & 127] = fTemp429;
			float fTemp430 = fTemp429 + fVec426[(IOTA0 - 64) & 127];
			fVec427[IOTA0 & 255] = fTemp430;
			float fTemp431 = fTemp430 + fVec427[(IOTA0 - 128) & 255];
			fVec428[IOTA0 & 511] = fTemp431;
			float fTemp432 = fTemp431 + fVec428[(IOTA0 - 256) & 511];
			fVec429[IOTA0 & 1023] = fTemp432;
			float fTemp433 = fTemp432 + fVec429[(IOTA0 - 512) & 1023];
			fVec430[IOTA0 & 2047] = fTemp433;
			float fTemp434 = fTemp433 + fVec430[(IOTA0 - 1024) & 2047];
			fVec431[IOTA0 & 4095] = fTemp434;
			float fTemp435 = fTemp434 + fVec431[(IOTA0 - 2048) & 4095];
			fVec432[IOTA0 & 8191] = fTemp435;
			float fTemp436 = fTemp435 + fVec432[(IOTA0 - 4096) & 8191];
			fVec433[IOTA0 & 16383] = fTemp436;
			float fTemp437 = fTemp436 + fVec433[(IOTA0 - 8192) & 16383];
			fVec434[IOTA0 & 32767] = fTemp437;
			float fTemp438 = fTemp437 + fVec434[(IOTA0 - 16384) & 32767];
			fVec435[IOTA0 & 65535] = fTemp438;
			float fTemp439 = fTemp438 + fVec435[(IOTA0 - 32768) & 65535];
			fVec436[IOTA0 & 131071] = fTemp439;
			fVec437[IOTA0 & 262143] = fTemp439 + fVec436[(IOTA0 - 65536) & 131071];
			float fElse365 = 0.860009849f * fVec437[(IOTA0 - iConst137) & 262143];
			float fElse366 = 0.860009849f * fVec436[(IOTA0 - iConst139) & 131071];
			float fElse367 = 0.860009849f * fVec435[(IOTA0 - iConst141) & 65535];
			float fElse368 = 0.860009849f * fVec434[(IOTA0 - iConst143) & 32767];
			float fElse369 = 0.860009849f * fVec433[(IOTA0 - iConst145) & 16383];
			float fElse370 = 0.860009849f * fVec432[(IOTA0 - iConst147) & 8191];
			float fElse371 = 0.860009849f * fVec431[(IOTA0 - iConst149) & 4095];
			float fElse372 = 0.860009849f * fVec430[(IOTA0 - iConst151) & 2047];
			float fElse373 = 0.860009849f * fVec429[(IOTA0 - iConst153) & 1023];
			float fElse374 = 0.860009849f * fVec428[(IOTA0 - iConst155) & 511];
			float fElse375 = 0.860009849f * fVec427[(IOTA0 - iConst157) & 255];
			float fElse376 = 0.860009849f * fVec426[(IOTA0 - iConst159) & 127];
			float fElse377 = 0.860009849f * fVec425[(IOTA0 - iConst161) & 63];
			float fElse378 = 0.860009849f * fVec424[(IOTA0 - iConst163) & 31];
			float fElse379 = 0.860009849f * fVec423[iConst165];
			float fElse380 = 0.860009849f * fVec422[iConst167];
			float fElse381 = 0.860009849f * fTemp423;
			float fElse382 = 0.860009849f * fVec421[iConst168];
			float fTemp440 = fTemp99 * (fSlow13 + 4.34294462f * (fTemp84 - std::log(std::max<float>(9.99999996e-13f, fConst94 * (((iConst95) ? fElse365 : 0.0f) + ((iConst138) ? fElse366 : 0.0f) + ((iConst140) ? fElse367 : 0.0f) + ((iConst142) ? fElse368 : 0.0f) + ((iConst144) ? fElse369 : 0.0f) + ((iConst146) ? fElse370 : 0.0f) + ((iConst148) ? fElse371 : 0.0f) + ((iConst150) ? fElse372 : 0.0f) + ((iConst152) ? fElse373 : 0.0f) + ((iConst154) ? fElse374 : 0.0f) + ((iConst156) ? fElse375 : 0.0f) + ((iConst158) ? fElse376 : 0.0f) + ((iConst160) ? fElse377 : 0.0f) + ((iConst162) ? fElse378 : 0.0f) + ((iConst164) ? fElse379 : 0.0f) + ((iConst166) ? fElse380 : 0.0f) + ((iConst168) ? fElse381 : 0.0f) + ((iConst169) ? fElse382 : 0.0f))))) + -29.0f);
			fVbargraph20 = FAUSTFLOAT(fTemp440);
			fRec134[0] = fTemp47 - fConst341 * (fConst342 * fRec134[2] + fConst343 * fRec134[1]);
			float fTemp441 = fConst340 * fRec134[0] + fConst344 * fRec134[2];
			fVec438[IOTA0 & 32767] = fTemp441;
			float fTemp442 = fVec438[(IOTA0 - 1) & 32767];
			fVec439[0] = fConst96 * fTemp442 - fConst34 * fRec132[1];
			fRec133[0] = fConst33 * (fVec439[1] - fConst102 * fRec133[1] + fConst103 * fTemp442 + fConst104 * fTemp441);
			fRec132[0] = fRec133[0];
			fVec440[0] = 0.500327051f * fRec132[1] - fConst41 * fRec130[1];
			fRec131[0] = fConst31 * fRec132[1] + fConst40 * (fVec440[1] - fConst42 * fRec131[1] + 0.500327051f * fRec132[0]);
			fRec130[0] = fRec131[0];
			float fTemp443 = mydsp_faustpower2_f(fRec130[0]);
			fVec441[0] = fTemp443;
			float fTemp444 = fTemp443 + fVec441[1];
			fVec442[0] = fTemp444;
			float fTemp445 = fTemp444 + fVec442[2];
			fVec443[0] = fTemp445;
			float fTemp446 = fTemp445 + fVec443[4];
			fVec444[0] = fTemp446;
			float fTemp447 = fTemp446 + fVec444[8];
			fVec445[IOTA0 & 31] = fTemp447;
			float fTemp448 = fTemp447 + fVec445[(IOTA0 - 16) & 31];
			fVec446[IOTA0 & 63] = fTemp448;
			float fTemp449 = fTemp448 + fVec446[(IOTA0 - 32) & 63];
			fVec447[IOTA0 & 127] = fTemp449;
			float fTemp450 = fTemp449 + fVec447[(IOTA0 - 64) & 127];
			fVec448[IOTA0 & 255] = fTemp450;
			float fTemp451 = fTemp450 + fVec448[(IOTA0 - 128) & 255];
			fVec449[IOTA0 & 511] = fTemp451;
			float fTemp452 = fTemp451 + fVec449[(IOTA0 - 256) & 511];
			fVec450[IOTA0 & 1023] = fTemp452;
			float fTemp453 = fTemp452 + fVec450[(IOTA0 - 512) & 1023];
			fVec451[IOTA0 & 2047] = fTemp453;
			float fTemp454 = fTemp453 + fVec451[(IOTA0 - 1024) & 2047];
			fVec452[IOTA0 & 4095] = fTemp454;
			float fTemp455 = fTemp454 + fVec452[(IOTA0 - 2048) & 4095];
			fVec453[IOTA0 & 8191] = fTemp455;
			float fTemp456 = fTemp455 + fVec453[(IOTA0 - 4096) & 8191];
			fVec454[IOTA0 & 16383] = fTemp456;
			float fTemp457 = fTemp456 + fVec454[(IOTA0 - 8192) & 16383];
			fVec455[IOTA0 & 32767] = fTemp457;
			float fTemp458 = fTemp457 + fVec455[(IOTA0 - 16384) & 32767];
			fVec456[IOTA0 & 65535] = fTemp458;
			float fTemp459 = fTemp458 + fVec456[(IOTA0 - 32768) & 65535];
			fVec457[IOTA0 & 131071] = fTemp459;
			fVec458[IOTA0 & 262143] = fTemp459 + fVec457[(IOTA0 - 65536) & 131071];
			float fElse383 = 0.860009849f * fVec458[(IOTA0 - iConst137) & 262143];
			float fElse384 = 0.860009849f * fVec457[(IOTA0 - iConst139) & 131071];
			float fElse385 = 0.860009849f * fVec456[(IOTA0 - iConst141) & 65535];
			float fElse386 = 0.860009849f * fVec455[(IOTA0 - iConst143) & 32767];
			float fElse387 = 0.860009849f * fVec454[(IOTA0 - iConst145) & 16383];
			float fElse388 = 0.860009849f * fVec453[(IOTA0 - iConst147) & 8191];
			float fElse389 = 0.860009849f * fVec452[(IOTA0 - iConst149) & 4095];
			float fElse390 = 0.860009849f * fVec451[(IOTA0 - iConst151) & 2047];
			float fElse391 = 0.860009849f * fVec450[(IOTA0 - iConst153) & 1023];
			float fElse392 = 0.860009849f * fVec449[(IOTA0 - iConst155) & 511];
			float fElse393 = 0.860009849f * fVec448[(IOTA0 - iConst157) & 255];
			float fElse394 = 0.860009849f * fVec447[(IOTA0 - iConst159) & 127];
			float fElse395 = 0.860009849f * fVec446[(IOTA0 - iConst161) & 63];
			float fElse396 = 0.860009849f * fVec445[(IOTA0 - iConst163) & 31];
			float fElse397 = 0.860009849f * fVec444[iConst165];
			float fElse398 = 0.860009849f * fVec443[iConst167];
			float fElse399 = 0.860009849f * fTemp443;
			float fElse400 = 0.860009849f * fVec442[iConst168];
			float fTemp460 = fTemp99 * (fSlow14 + 4.34294462f * (fTemp84 - std::log(std::max<float>(9.99999996e-13f, fConst94 * (((iConst95) ? fElse383 : 0.0f) + ((iConst138) ? fElse384 : 0.0f) + ((iConst140) ? fElse385 : 0.0f) + ((iConst142) ? fElse386 : 0.0f) + ((iConst144) ? fElse387 : 0.0f) + ((iConst146) ? fElse388 : 0.0f) + ((iConst148) ? fElse389 : 0.0f) + ((iConst150) ? fElse390 : 0.0f) + ((iConst152) ? fElse391 : 0.0f) + ((iConst154) ? fElse392 : 0.0f) + ((iConst156) ? fElse393 : 0.0f) + ((iConst158) ? fElse394 : 0.0f) + ((iConst160) ? fElse395 : 0.0f) + ((iConst162) ? fElse396 : 0.0f) + ((iConst164) ? fElse397 : 0.0f) + ((iConst166) ? fElse398 : 0.0f) + ((iConst168) ? fElse399 : 0.0f) + ((iConst169) ? fElse400 : 0.0f))))) + -29.0f);
			fVbargraph21 = FAUSTFLOAT(fTemp460);
			fRec139[0] = fTemp47 - fConst349 * (fConst350 * fRec139[2] + fConst351 * fRec139[1]);
			float fTemp461 = fConst348 * fRec139[0] + fConst352 * fRec139[2];
			fVec459[IOTA0 & 32767] = fTemp461;
			float fTemp462 = fVec459[(IOTA0 - 1) & 32767];
			fVec460[0] = fConst96 * fTemp462 - fConst34 * fRec137[1];
			fRec138[0] = fConst33 * (fVec460[1] - fConst102 * fRec138[1] + fConst103 * fTemp462 + fConst104 * fTemp461);
			fRec137[0] = fRec138[0];
			fVec461[0] = 0.500327051f * fRec137[1] - fConst41 * fRec135[1];
			fRec136[0] = fConst31 * fRec137[1] + fConst40 * (fVec461[1] - fConst42 * fRec136[1] + 0.500327051f * fRec137[0]);
			fRec135[0] = fRec136[0];
			float fTemp463 = mydsp_faustpower2_f(fRec135[0]);
			fVec462[0] = fTemp463;
			float fTemp464 = fTemp463 + fVec462[1];
			fVec463[0] = fTemp464;
			float fTemp465 = fTemp464 + fVec463[2];
			fVec464[0] = fTemp465;
			float fTemp466 = fTemp465 + fVec464[4];
			fVec465[0] = fTemp466;
			float fTemp467 = fTemp466 + fVec465[8];
			fVec466[IOTA0 & 31] = fTemp467;
			float fTemp468 = fTemp467 + fVec466[(IOTA0 - 16) & 31];
			fVec467[IOTA0 & 63] = fTemp468;
			float fTemp469 = fTemp468 + fVec467[(IOTA0 - 32) & 63];
			fVec468[IOTA0 & 127] = fTemp469;
			float fTemp470 = fTemp469 + fVec468[(IOTA0 - 64) & 127];
			fVec469[IOTA0 & 255] = fTemp470;
			float fTemp471 = fTemp470 + fVec469[(IOTA0 - 128) & 255];
			fVec470[IOTA0 & 511] = fTemp471;
			float fTemp472 = fTemp471 + fVec470[(IOTA0 - 256) & 511];
			fVec471[IOTA0 & 1023] = fTemp472;
			float fTemp473 = fTemp472 + fVec471[(IOTA0 - 512) & 1023];
			fVec472[IOTA0 & 2047] = fTemp473;
			float fTemp474 = fTemp473 + fVec472[(IOTA0 - 1024) & 2047];
			fVec473[IOTA0 & 4095] = fTemp474;
			float fTemp475 = fTemp474 + fVec473[(IOTA0 - 2048) & 4095];
			fVec474[IOTA0 & 8191] = fTemp475;
			float fTemp476 = fTemp475 + fVec474[(IOTA0 - 4096) & 8191];
			fVec475[IOTA0 & 16383] = fTemp476;
			float fTemp477 = fTemp476 + fVec475[(IOTA0 - 8192) & 16383];
			fVec476[IOTA0 & 32767] = fTemp477;
			float fTemp478 = fTemp477 + fVec476[(IOTA0 - 16384) & 32767];
			fVec477[IOTA0 & 65535] = fTemp478;
			float fTemp479 = fTemp478 + fVec477[(IOTA0 - 32768) & 65535];
			fVec478[IOTA0 & 131071] = fTemp479;
			fVec479[IOTA0 & 262143] = fTemp479 + fVec478[(IOTA0 - 65536) & 131071];
			float fElse401 = 0.860009849f * fVec479[(IOTA0 - iConst137) & 262143];
			float fElse402 = 0.860009849f * fVec478[(IOTA0 - iConst139) & 131071];
			float fElse403 = 0.860009849f * fVec477[(IOTA0 - iConst141) & 65535];
			float fElse404 = 0.860009849f * fVec476[(IOTA0 - iConst143) & 32767];
			float fElse405 = 0.860009849f * fVec475[(IOTA0 - iConst145) & 16383];
			float fElse406 = 0.860009849f * fVec474[(IOTA0 - iConst147) & 8191];
			float fElse407 = 0.860009849f * fVec473[(IOTA0 - iConst149) & 4095];
			float fElse408 = 0.860009849f * fVec472[(IOTA0 - iConst151) & 2047];
			float fElse409 = 0.860009849f * fVec471[(IOTA0 - iConst153) & 1023];
			float fElse410 = 0.860009849f * fVec470[(IOTA0 - iConst155) & 511];
			float fElse411 = 0.860009849f * fVec469[(IOTA0 - iConst157) & 255];
			float fElse412 = 0.860009849f * fVec468[(IOTA0 - iConst159) & 127];
			float fElse413 = 0.860009849f * fVec467[(IOTA0 - iConst161) & 63];
			float fElse414 = 0.860009849f * fVec466[(IOTA0 - iConst163) & 31];
			float fElse415 = 0.860009849f * fVec465[iConst165];
			float fElse416 = 0.860009849f * fVec464[iConst167];
			float fElse417 = 0.860009849f * fTemp463;
			float fElse418 = 0.860009849f * fVec463[iConst168];
			float fTemp480 = fTemp99 * (fSlow15 + 4.34294462f * (fTemp84 - std::log(std::max<float>(9.99999996e-13f, fConst94 * (((iConst95) ? fElse401 : 0.0f) + ((iConst138) ? fElse402 : 0.0f) + ((iConst140) ? fElse403 : 0.0f) + ((iConst142) ? fElse404 : 0.0f) + ((iConst144) ? fElse405 : 0.0f) + ((iConst146) ? fElse406 : 0.0f) + ((iConst148) ? fElse407 : 0.0f) + ((iConst150) ? fElse408 : 0.0f) + ((iConst152) ? fElse409 : 0.0f) + ((iConst154) ? fElse410 : 0.0f) + ((iConst156) ? fElse411 : 0.0f) + ((iConst158) ? fElse412 : 0.0f) + ((iConst160) ? fElse413 : 0.0f) + ((iConst162) ? fElse414 : 0.0f) + ((iConst164) ? fElse415 : 0.0f) + ((iConst166) ? fElse416 : 0.0f) + ((iConst168) ? fElse417 : 0.0f) + ((iConst169) ? fElse418 : 0.0f))))) + -29.0f);
			fVbargraph22 = FAUSTFLOAT(fTemp480);
			float fTemp481 = 0.223606795f * (1.0f - fRec27[0]) * (std::pow(10.0f, 0.0500000007f * fTemp100) * fVec32[(IOTA0 - iConst200) & 32767] + std::pow(10.0f, 0.0500000007f * fTemp120) * fVec81[(IOTA0 - iConst200) & 32767] + std::pow(10.0f, 0.0500000007f * fTemp140) * fVec102[(IOTA0 - iConst200) & 32767] + std::pow(10.0f, 0.0500000007f * fTemp160) * fVec123[(IOTA0 - iConst200) & 32767] + std::pow(10.0f, 0.0500000007f * fTemp180) * fVec144[(IOTA0 - iConst200) & 32767] + std::pow(10.0f, 0.0500000007f * fTemp200) * fVec165[(IOTA0 - iConst200) & 32767] + std::pow(10.0f, 0.0500000007f * fTemp220) * fVec186[(IOTA0 - iConst200) & 32767] + std::pow(10.0f, 0.0500000007f * fTemp240) * fVec207[(IOTA0 - iConst200) & 32767] + std::pow(10.0f, 0.0500000007f * fTemp260) * fVec228[(IOTA0 - iConst200) & 32767] + std::pow(10.0f, 0.0500000007f * fTemp280) * fVec249[(IOTA0 - iConst200) & 32767] + std::pow(10.0f, 0.0500000007f * fTemp300) * fVec270[(IOTA0 - iConst200) & 32767] + std::pow(10.0f, 0.0500000007f * fTemp320) * fVec291[(IOTA0 - iConst200) & 32767] + std::pow(10.0f, 0.0500000007f * fTemp340) * fVec312[(IOTA0 - iConst200) & 32767] + std::pow(10.0f, 0.0500000007f * fTemp360) * fVec333[(IOTA0 - iConst200) & 32767] + std::pow(10.0f, 0.0500000007f * fTemp380) * fVec354[(IOTA0 - iConst200) & 32767] + std::pow(10.0f, 0.0500000007f * fTemp400) * fVec375[(IOTA0 - iConst200) & 32767] + std::pow(10.0f, 0.0500000007f * fTemp420) * fVec396[(IOTA0 - iConst200) & 32767] + std::pow(10.0f, 0.0500000007f * fTemp440) * fVec417[(IOTA0 - iConst200) & 32767] + std::pow(10.0f, 0.0500000007f * fTemp460) * fVec438[(IOTA0 - iConst200) & 32767] + std::pow(10.0f, 0.0500000007f * fTemp480) * fVec459[(IOTA0 - iConst200) & 32767]);
			float fTemp482 = fRec27[0] * (fTemp39 * fRec29[0] + fConst82 * fTemp40 * fTemp41) + fTemp481;
			fRec8[0] = fTemp38 * fTemp482;
			float fTemp483 = fTemp481 + fRec27[0] * (fTemp42 * fTemp44 + fConst82 * fTemp40 * fTemp45);
			fRec9[0] = fTemp38 * fTemp483;
			fRec140[0] = fSlow16 + fConst3 * fRec140[1];
			float fTemp484 = 1.0f - fRec140[0];
			float fTemp485 = fRec8[0] * fTemp484 + fRec140[0] * fTemp482;
			float fTemp486 = 1.0f - fRec7[0];
			fRec144[0] = fTemp485 - fConst359 * (fConst360 * fRec144[2] + fConst361 * fRec144[1]);
			fRec143[0] = fConst359 * (fConst357 * fRec144[0] + fConst362 * fRec144[1] + fConst357 * fRec144[2]) - fConst358 * (fConst363 * fRec143[2] + fConst361 * fRec143[1]);
			fRec142[0] = fConst358 * (fConst357 * fRec143[0] + fConst362 * fRec143[1] + fConst357 * fRec143[2]) - fConst355 * (fConst364 * fRec142[2] + fConst361 * fRec142[1]);
			float fTemp487 = 20.0f * std::log10(std::max<float>(1.17549435e-38f, std::fabs(fConst355 * (fConst357 * fRec142[0] + fConst362 * fRec142[1] + fConst357 * fRec142[2]))));
			int iTemp488 = (fTemp487 > fSlow21) + (fTemp487 > fSlow22);
			float fThen419 = fSlow20 + (fTemp487 + -2.0f) - fSlow2;
			float fElse419 = 0.055555556f * mydsp_faustpower2_f(fSlow20 + (fTemp487 + 2.5f) - fSlow2);
			float fThen420 = ((iTemp488 == 1) ? fElse419 : fThen419);
			float fTemp489 = 0.0f - fSlow19 * std::max<float>(0.0f, ((iTemp488 == 0) ? 0.0f : fThen420));
			float fTemp490 = ((fTemp489 > fRec141[1]) ? fSlow28 : fSlow25);
			fRec141[0] = fTemp489 * (1.0f - fTemp490) + fRec141[1] * fTemp490;
			float fTemp491 = fRec9[0] * fTemp484 + fRec140[0] * fTemp483;
			fRec148[0] = fTemp491 - fConst359 * (fConst360 * fRec148[2] + fConst361 * fRec148[1]);
			fRec147[0] = fConst359 * (fConst357 * fRec148[0] + fConst362 * fRec148[1] + fConst357 * fRec148[2]) - fConst358 * (fConst363 * fRec147[2] + fConst361 * fRec147[1]);
			fRec146[0] = fConst358 * (fConst357 * fRec147[0] + fConst362 * fRec147[1] + fConst357 * fRec147[2]) - fConst355 * (fConst364 * fRec146[2] + fConst361 * fRec146[1]);
			float fTemp492 = 20.0f * std::log10(std::max<float>(1.17549435e-38f, std::fabs(fConst355 * (fConst357 * fRec146[0] + fConst362 * fRec146[1] + fConst357 * fRec146[2]))));
			int iTemp493 = (fTemp492 > fSlow21) + (fTemp492 > fSlow22);
			float fThen426 = fSlow20 + (fTemp492 + -2.0f) - fSlow2;
			float fElse426 = 0.055555556f * mydsp_faustpower2_f(fSlow20 + (fTemp492 + 2.5f) - fSlow2);
			float fThen427 = ((iTemp493 == 1) ? fElse426 : fThen426);
			float fTemp494 = 0.0f - fSlow19 * std::max<float>(0.0f, ((iTemp493 == 0) ? 0.0f : fThen427));
			float fTemp495 = ((fTemp494 > fRec145[1]) ? fSlow28 : fSlow25);
			fRec145[0] = fTemp494 * (1.0f - fTemp495) + fRec145[1] * fTemp495;
			float fTemp496 = fSlow17 + std::min<float>(fRec141[0], fRec145[0]);
			fVbargraph23 = FAUSTFLOAT(std::min<float>(12.0f, std::max<float>(-12.0f, fTemp496)));
			float fTemp497 = std::pow(10.0f, 0.00833333377f * fTemp496);
			fRec154[0] = fConst359 * (fRec144[2] + fRec144[0] + 2.0f * fRec144[1]) - fConst358 * (fConst363 * fRec154[2] + fConst361 * fRec154[1]);
			fRec153[0] = fConst358 * (fRec154[2] + fRec154[0] + 2.0f * fRec154[1]) - fConst355 * (fConst364 * fRec153[2] + fConst361 * fRec153[1]);
			fRec152[0] = fConst355 * (fRec153[2] + fRec153[0] + 2.0f * fRec153[1]) - fConst372 * (fConst373 * fRec152[2] + fConst374 * fRec152[1]);
			fRec151[0] = fConst372 * (fConst370 * fRec152[0] + fConst375 * fRec152[1] + fConst370 * fRec152[2]) - fConst371 * (fConst376 * fRec151[2] + fConst374 * fRec151[1]);
			fRec150[0] = fConst371 * (fConst370 * fRec151[0] + fConst375 * fRec151[1] + fConst370 * fRec151[2]) - fConst368 * (fConst377 * fRec150[2] + fConst374 * fRec150[1]);
			float fTemp498 = 20.0f * std::log10(std::max<float>(1.17549435e-38f, std::fabs(fConst368 * (fConst370 * fRec150[0] + fConst375 * fRec150[1] + fConst370 * fRec150[2]))));
			int iTemp499 = (fTemp498 > fSlow33) + (fTemp498 > fSlow34);
			float fThen429 = fTemp498 - fSlow35;
			float fElse429 = 0.0625f * mydsp_faustpower2_f(fSlow32 + fTemp498 - fSlow2);
			float fThen430 = ((iTemp499 == 1) ? fElse429 : fThen429);
			float fTemp500 = 0.0f - fSlow30 * std::max<float>(0.0f, ((iTemp499 == 0) ? 0.0f : fThen430));
			float fTemp501 = ((fTemp500 > fRec149[1]) ? fSlow28 : fSlow39);
			fRec149[0] = fTemp500 * (1.0f - fTemp501) + fRec149[1] * fTemp501;
			fRec160[0] = fConst359 * (fRec148[2] + fRec148[0] + 2.0f * fRec148[1]) - fConst358 * (fConst363 * fRec160[2] + fConst361 * fRec160[1]);
			fRec159[0] = fConst358 * (fRec160[2] + fRec160[0] + 2.0f * fRec160[1]) - fConst355 * (fConst364 * fRec159[2] + fConst361 * fRec159[1]);
			fRec158[0] = fConst355 * (fRec159[2] + fRec159[0] + 2.0f * fRec159[1]) - fConst372 * (fConst373 * fRec158[2] + fConst374 * fRec158[1]);
			fRec157[0] = fConst372 * (fConst370 * fRec158[0] + fConst375 * fRec158[1] + fConst370 * fRec158[2]) - fConst371 * (fConst376 * fRec157[2] + fConst374 * fRec157[1]);
			fRec156[0] = fConst371 * (fConst370 * fRec157[0] + fConst375 * fRec157[1] + fConst370 * fRec157[2]) - fConst368 * (fConst377 * fRec156[2] + fConst374 * fRec156[1]);
			float fTemp502 = 20.0f * std::log10(std::max<float>(1.17549435e-38f, std::fabs(fConst368 * (fConst370 * fRec156[0] + fConst375 * fRec156[1] + fConst370 * fRec156[2]))));
			int iTemp503 = (fTemp502 > fSlow33) + (fTemp502 > fSlow34);
			float fThen434 = fTemp502 - fSlow35;
			float fElse434 = 0.0625f * mydsp_faustpower2_f(fSlow32 + fTemp502 - fSlow2);
			float fThen435 = ((iTemp503 == 1) ? fElse434 : fThen434);
			float fTemp504 = 0.0f - fSlow30 * std::max<float>(0.0f, ((iTemp503 == 0) ? 0.0f : fThen435));
			float fTemp505 = ((fTemp504 > fRec155[1]) ? fSlow28 : fSlow39);
			fRec155[0] = fTemp504 * (1.0f - fTemp505) + fRec155[1] * fTemp505;
			float fTemp506 = fSlow17 + std::min<float>(fRec149[0], fRec155[0]);
			fVbargraph24 = FAUSTFLOAT(std::min<float>(12.0f, std::max<float>(-12.0f, fTemp506)));
			float fTemp507 = fTemp506;
			float fTemp508 = std::pow(10.0f, 0.00833333377f * fTemp507);
			float fTemp509 = mydsp_faustpower2_f(fTemp508) + -1.0f;
			float fTemp510 = std::pow(10.0f, 0.0250000004f * (0.0f - 0.333333343f * fTemp507));
			float fTemp511 = mydsp_faustpower2_f(fTemp510) + -1.0f;
			fRec182[0] = fConst372 * (fRec152[2] + fRec152[0] + 2.0f * fRec152[1]) - fConst371 * (fConst376 * fRec182[2] + fConst374 * fRec182[1]);
			fRec181[0] = fConst371 * (fRec182[2] + fRec182[0] + 2.0f * fRec182[1]) - fConst368 * (fConst377 * fRec181[2] + fConst374 * fRec181[1]);
			fRec180[0] = fConst368 * (fRec181[2] + fRec181[0] + 2.0f * fRec181[1]) - fConst384 * (fConst385 * fRec180[2] + fConst386 * fRec180[1]);
			fRec179[0] = fConst384 * (fConst382 * fRec180[0] + fConst387 * fRec180[1] + fConst382 * fRec180[2]) - fConst383 * (fConst388 * fRec179[2] + fConst386 * fRec179[1]);
			fRec178[0] = fConst383 * (fConst382 * fRec179[0] + fConst387 * fRec179[1] + fConst382 * fRec179[2]) - fConst380 * (fConst389 * fRec178[2] + fConst386 * fRec178[1]);
			float fTemp512 = 20.0f * std::log10(std::max<float>(1.17549435e-38f, std::fabs(fConst380 * (fConst382 * fRec178[0] + fConst387 * fRec178[1] + fConst382 * fRec178[2]))));
			int iTemp513 = (fTemp512 > fSlow41) + (fTemp512 > fSlow42);
			float fThen437 = fSlow20 + (fTemp512 + -6.0f) - fSlow2;
			float fElse437 = 0.0714285746f * mydsp_faustpower2_f(fSlow20 + (fTemp512 + -2.5f) - fSlow2);
			float fThen438 = ((iTemp513 == 1) ? fElse437 : fThen437);
			float fTemp514 = 0.0f - fSlow40 * std::max<float>(0.0f, ((iTemp513 == 0) ? 0.0f : fThen438));
			float fTemp515 = ((fTemp514 > fRec177[1]) ? fSlow48 : fSlow45);
			fRec177[0] = fTemp514 * (1.0f - fTemp515) + fRec177[1] * fTemp515;
			fRec188[0] = fConst372 * (fRec158[2] + fRec158[0] + 2.0f * fRec158[1]) - fConst371 * (fConst376 * fRec188[2] + fConst374 * fRec188[1]);
			fRec187[0] = fConst371 * (fRec188[2] + fRec188[0] + 2.0f * fRec188[1]) - fConst368 * (fConst377 * fRec187[2] + fConst374 * fRec187[1]);
			fRec186[0] = fConst368 * (fRec187[2] + fRec187[0] + 2.0f * fRec187[1]) - fConst384 * (fConst385 * fRec186[2] + fConst386 * fRec186[1]);
			fRec185[0] = fConst384 * (fConst382 * fRec186[0] + fConst387 * fRec186[1] + fConst382 * fRec186[2]) - fConst383 * (fConst388 * fRec185[2] + fConst386 * fRec185[1]);
			fRec184[0] = fConst383 * (fConst382 * fRec185[0] + fConst387 * fRec185[1] + fConst382 * fRec185[2]) - fConst380 * (fConst389 * fRec184[2] + fConst386 * fRec184[1]);
			float fTemp516 = 20.0f * std::log10(std::max<float>(1.17549435e-38f, std::fabs(fConst380 * (fConst382 * fRec184[0] + fConst387 * fRec184[1] + fConst382 * fRec184[2]))));
			int iTemp517 = (fTemp516 > fSlow41) + (fTemp516 > fSlow42);
			float fThen444 = fSlow20 + (fTemp516 + -6.0f) - fSlow2;
			float fElse444 = 0.0714285746f * mydsp_faustpower2_f(fSlow20 + (fTemp516 + -2.5f) - fSlow2);
			float fThen445 = ((iTemp517 == 1) ? fElse444 : fThen444);
			float fTemp518 = 0.0f - fSlow40 * std::max<float>(0.0f, ((iTemp517 == 0) ? 0.0f : fThen445));
			float fTemp519 = ((fTemp518 > fRec183[1]) ? fSlow48 : fSlow45);
			fRec183[0] = fTemp518 * (1.0f - fTemp519) + fRec183[1] * fTemp519;
			float fTemp520 = fSlow17 + std::min<float>(fRec177[0], fRec183[0]);
			fVbargraph25 = FAUSTFLOAT(std::min<float>(12.0f, std::max<float>(-12.0f, fTemp520)));
			float fTemp521 = fTemp520;
			float fTemp522 = std::pow(10.0f, 0.00833333377f * fTemp521);
			float fTemp523 = mydsp_faustpower2_f(fTemp522) + -1.0f;
			float fTemp524 = std::pow(10.0f, 0.0250000004f * (0.0f - 0.333333343f * fTemp521));
			float fTemp525 = mydsp_faustpower2_f(fTemp524) + -1.0f;
			fRec210[0] = fConst384 * (fRec180[2] + fRec180[0] + 2.0f * fRec180[1]) - fConst383 * (fConst388 * fRec210[2] + fConst386 * fRec210[1]);
			fRec209[0] = fConst383 * (fRec210[2] + fRec210[0] + 2.0f * fRec210[1]) - fConst380 * (fConst389 * fRec209[2] + fConst386 * fRec209[1]);
			fRec208[0] = fConst380 * (fRec209[2] + fRec209[0] + 2.0f * fRec209[1]) - fConst396 * (fConst397 * fRec208[2] + fConst398 * fRec208[1]);
			fRec207[0] = fConst396 * (fConst394 * fRec208[0] + fConst399 * fRec208[1] + fConst394 * fRec208[2]) - fConst395 * (fConst400 * fRec207[2] + fConst398 * fRec207[1]);
			fRec206[0] = fConst395 * (fConst394 * fRec207[0] + fConst399 * fRec207[1] + fConst394 * fRec207[2]) - fConst392 * (fConst401 * fRec206[2] + fConst398 * fRec206[1]);
			float fTemp526 = 20.0f * std::log10(std::max<float>(1.17549435e-38f, std::fabs(fConst392 * (fConst394 * fRec206[0] + fConst399 * fRec206[1] + fConst394 * fRec206[2]))));
			int iTemp527 = (fTemp526 > fSlow50) + (fTemp526 > fSlow51);
			float fThen447 = fSlow20 + (fTemp526 + -8.0f) - fSlow2;
			float fElse447 = 0.0833333358f * mydsp_faustpower2_f(fSlow20 + (fTemp526 + -5.0f) - fSlow2);
			float fThen448 = ((iTemp527 == 1) ? fElse447 : fThen447);
			float fTemp528 = 0.0f - fSlow49 * std::max<float>(0.0f, ((iTemp527 == 0) ? 0.0f : fThen448));
			float fTemp529 = ((fTemp528 > fRec205[1]) ? fSlow57 : fSlow54);
			fRec205[0] = fTemp528 * (1.0f - fTemp529) + fRec205[1] * fTemp529;
			fRec216[0] = fConst384 * (fRec186[2] + fRec186[0] + 2.0f * fRec186[1]) - fConst383 * (fConst388 * fRec216[2] + fConst386 * fRec216[1]);
			fRec215[0] = fConst383 * (fRec216[2] + fRec216[0] + 2.0f * fRec216[1]) - fConst380 * (fConst389 * fRec215[2] + fConst386 * fRec215[1]);
			fRec214[0] = fConst380 * (fRec215[2] + fRec215[0] + 2.0f * fRec215[1]) - fConst396 * (fConst397 * fRec214[2] + fConst398 * fRec214[1]);
			fRec213[0] = fConst396 * (fConst394 * fRec214[0] + fConst399 * fRec214[1] + fConst394 * fRec214[2]) - fConst395 * (fConst400 * fRec213[2] + fConst398 * fRec213[1]);
			fRec212[0] = fConst395 * (fConst394 * fRec213[0] + fConst399 * fRec213[1] + fConst394 * fRec213[2]) - fConst392 * (fConst401 * fRec212[2] + fConst398 * fRec212[1]);
			float fTemp530 = 20.0f * std::log10(std::max<float>(1.17549435e-38f, std::fabs(fConst392 * (fConst394 * fRec212[0] + fConst399 * fRec212[1] + fConst394 * fRec212[2]))));
			int iTemp531 = (fTemp530 > fSlow50) + (fTemp530 > fSlow51);
			float fThen454 = fSlow20 + (fTemp530 + -8.0f) - fSlow2;
			float fElse454 = 0.0833333358f * mydsp_faustpower2_f(fSlow20 + (fTemp530 + -5.0f) - fSlow2);
			float fThen455 = ((iTemp531 == 1) ? fElse454 : fThen454);
			float fTemp532 = 0.0f - fSlow49 * std::max<float>(0.0f, ((iTemp531 == 0) ? 0.0f : fThen455));
			float fTemp533 = ((fTemp532 > fRec211[1]) ? fSlow57 : fSlow54);
			fRec211[0] = fTemp532 * (1.0f - fTemp533) + fRec211[1] * fTemp533;
			float fTemp534 = fSlow17 + std::min<float>(fRec205[0], fRec211[0]);
			fVbargraph26 = FAUSTFLOAT(std::min<float>(12.0f, std::max<float>(-12.0f, fTemp534)));
			float fTemp535 = fTemp534;
			float fTemp536 = std::pow(10.0f, 0.00833333377f * fTemp535);
			float fTemp537 = mydsp_faustpower2_f(fTemp536) + -1.0f;
			float fTemp538 = std::pow(10.0f, 0.0250000004f * (0.0f - 0.333333343f * fTemp535));
			float fTemp539 = mydsp_faustpower2_f(fTemp538) + -1.0f;
			fRec235[0] = fConst396 * (fRec208[2] + fRec208[0] + 2.0f * fRec208[1]) - fConst395 * (fConst400 * fRec235[2] + fConst398 * fRec235[1]);
			fRec234[0] = fConst395 * (fRec235[2] + fRec235[0] + 2.0f * fRec235[1]) - fConst392 * (fConst401 * fRec234[2] + fConst398 * fRec234[1]);
			float fTemp540 = 20.0f * std::log10(std::max<float>(1.17549435e-38f, std::fabs(fConst392 * (fRec234[2] + fRec234[0] + 2.0f * fRec234[1]))));
			int iTemp541 = (fTemp540 > fSlow60) + (fTemp540 > fSlow61);
			float fThen457 = fSlow59 + (fTemp540 + -2.0f) - fSlow2;
			float fElse457 = 0.0833333358f * mydsp_faustpower2_f(fSlow59 + (fTemp540 + 1.0f) - fSlow2);
			float fThen458 = ((iTemp541 == 1) ? fElse457 : fThen457);
			float fTemp542 = 0.0f - fSlow58 * std::max<float>(0.0f, ((iTemp541 == 0) ? 0.0f : fThen458));
			float fTemp543 = ((fTemp542 > fRec233[1]) ? fSlow57 : fSlow64);
			fRec233[0] = fTemp542 * (1.0f - fTemp543) + fRec233[1] * fTemp543;
			fRec238[0] = fConst396 * (fRec214[2] + fRec214[0] + 2.0f * fRec214[1]) - fConst395 * (fConst400 * fRec238[2] + fConst398 * fRec238[1]);
			fRec237[0] = fConst395 * (fRec238[2] + fRec238[0] + 2.0f * fRec238[1]) - fConst392 * (fConst401 * fRec237[2] + fConst398 * fRec237[1]);
			float fTemp544 = 20.0f * std::log10(std::max<float>(1.17549435e-38f, std::fabs(fConst392 * (fRec237[2] + fRec237[0] + 2.0f * fRec237[1]))));
			int iTemp545 = (fTemp544 > fSlow60) + (fTemp544 > fSlow61);
			float fThen462 = fSlow59 + (fTemp544 + -2.0f) - fSlow2;
			float fElse462 = 0.0833333358f * mydsp_faustpower2_f(fSlow59 + (fTemp544 + 1.0f) - fSlow2);
			float fThen463 = ((iTemp545 == 1) ? fElse462 : fThen462);
			float fTemp546 = 0.0f - fSlow58 * std::max<float>(0.0f, ((iTemp545 == 0) ? 0.0f : fThen463));
			float fTemp547 = ((fTemp546 > fRec236[1]) ? fSlow57 : fSlow64);
			fRec236[0] = fTemp546 * (1.0f - fTemp547) + fRec236[1] * fTemp547;
			float fTemp548 = fSlow17 + std::min<float>(fRec233[0], fRec236[0]);
			fVbargraph27 = FAUSTFLOAT(std::min<float>(12.0f, std::max<float>(-12.0f, fTemp548)));
			float fTemp549 = std::pow(10.0f, 0.00833333377f * fTemp548);
			float fTemp550 = mydsp_faustpower2_f(fTemp549) + -1.0f;
			float fTemp551 = std::sqrt(fTemp549);
			float fTemp552 = fRec243[1] + fConst390 * (fTemp485 - fRec244[1]) / fTemp551;
			float fTemp553 = fConst390 / fTemp551;
			float fTemp554 = fConst390 * (fTemp553 + 2.0f) / fTemp551 + 1.0f;
			float fTemp555 = fTemp552 / fTemp554;
			fRec243[0] = 2.0f * fTemp555 - fRec243[1];
			float fTemp556 = fTemp551 * fTemp554;
			float fTemp557 = fRec244[1] + fConst390 * fTemp552 / fTemp556;
			fRec244[0] = 2.0f * fTemp557 - fRec244[1];
			float fRec245 = fTemp555;
			float fRec246 = fTemp557;
			float fTemp558 = fTemp549 + -1.0f;
			float fTemp559 = fTemp485 + 2.0f * fRec245 * fTemp558 + fRec246 * fTemp550;
			float fTemp560 = fRec247[1] + fConst390 * (fTemp559 - fRec248[1]) / fTemp551;
			float fTemp561 = fConst390 * (fTemp553 + 1.41442716f) / fTemp551 + 1.0f;
			float fTemp562 = fTemp560 / fTemp561;
			fRec247[0] = 2.0f * fTemp562 - fRec247[1];
			float fTemp563 = fTemp551 * fTemp561;
			float fTemp564 = fRec248[1] + fConst390 * fTemp560 / fTemp563;
			fRec248[0] = 2.0f * fTemp564 - fRec248[1];
			float fRec249 = fTemp562;
			float fRec250 = fTemp564;
			float fTemp565 = fRec246 + fRec250;
			float fTemp566 = 2.0f * fRec245 + 1.41442716f * fRec249;
			float fTemp567 = fTemp550 * fTemp565 + fTemp485 + fTemp558 * fTemp566;
			float fTemp568 = fRec239[1] + fConst390 * (fTemp567 - fRec240[1]) / fTemp551;
			float fTemp569 = fConst390 * (fTemp553 + 0.5f) / fTemp551 + 1.0f;
			float fTemp570 = fTemp568 / fTemp569;
			fRec239[0] = 2.0f * fTemp570 - fRec239[1];
			float fTemp571 = fTemp551 * fTemp569;
			float fTemp572 = fRec240[1] + fConst390 * fTemp568 / fTemp571;
			fRec240[0] = 2.0f * fTemp572 - fRec240[1];
			float fRec241 = fTemp570;
			float fRec242 = fTemp572;
			float fTemp573 = fTemp550 * (fRec242 + fTemp565) + fTemp485 + fTemp558 * (fTemp566 + 0.5f * fRec241);
			float fTemp574 = std::sqrt(fTemp538);
			float fTemp575 = fRec229[1] + fConst390 * (fTemp573 - fRec230[1]) / fTemp574;
			float fTemp576 = fConst390 / fTemp574;
			float fTemp577 = fConst390 * (fTemp576 + 2.0f) / fTemp574 + 1.0f;
			float fTemp578 = fTemp575 / fTemp577;
			fRec229[0] = 2.0f * fTemp578 - fRec229[1];
			float fTemp579 = fTemp574 * fTemp577;
			float fTemp580 = fRec230[1] + fConst390 * fTemp575 / fTemp579;
			fRec230[0] = 2.0f * fTemp580 - fRec230[1];
			float fRec231 = fTemp578;
			float fRec232 = fTemp580;
			float fTemp581 = fTemp538 + -1.0f;
			float fTemp582 = fTemp573 + 2.0f * fRec231 * fTemp581 + fRec232 * fTemp539;
			float fTemp583 = fRec251[1] + fConst390 * (fTemp582 - fRec252[1]) / fTemp574;
			float fTemp584 = fConst390 * (fTemp576 + 1.41442716f) / fTemp574 + 1.0f;
			float fTemp585 = fTemp583 / fTemp584;
			fRec251[0] = 2.0f * fTemp585 - fRec251[1];
			float fTemp586 = fTemp574 * fTemp584;
			float fTemp587 = fRec252[1] + fConst390 * fTemp583 / fTemp586;
			fRec252[0] = 2.0f * fTemp587 - fRec252[1];
			float fRec253 = fTemp585;
			float fRec254 = fTemp587;
			float fTemp588 = fRec232 + fRec254;
			float fTemp589 = 2.0f * fRec231 + 1.41442716f * fRec253;
			float fTemp590 = fTemp539 * fTemp588 + fTemp573 + fTemp581 * fTemp589;
			float fTemp591 = fRec225[1] + fConst390 * (fTemp590 - fRec226[1]) / fTemp574;
			float fTemp592 = fConst390 * (fTemp576 + 0.5f) / fTemp574 + 1.0f;
			float fTemp593 = fTemp591 / fTemp592;
			fRec225[0] = 2.0f * fTemp593 - fRec225[1];
			float fTemp594 = fTemp574 * fTemp592;
			float fTemp595 = fRec226[1] + fConst390 * fTemp591 / fTemp594;
			fRec226[0] = 2.0f * fTemp595 - fRec226[1];
			float fRec227 = fTemp593;
			float fRec228 = fTemp595;
			float fTemp596 = fTemp539 * (fRec228 + fTemp588) + fTemp573 + fTemp581 * (fTemp589 + 0.5f * fRec227);
			float fTemp597 = std::sqrt(fTemp536);
			float fTemp598 = fRec221[1] + fConst378 * (fTemp596 - fRec222[1]) / fTemp597;
			float fTemp599 = fConst378 / fTemp597;
			float fTemp600 = fConst378 * (fTemp599 + 2.0f) / fTemp597 + 1.0f;
			float fTemp601 = fTemp598 / fTemp600;
			fRec221[0] = 2.0f * fTemp601 - fRec221[1];
			float fTemp602 = fTemp597 * fTemp600;
			float fTemp603 = fRec222[1] + fConst378 * fTemp598 / fTemp602;
			fRec222[0] = 2.0f * fTemp603 - fRec222[1];
			float fRec223 = fTemp601;
			float fRec224 = fTemp603;
			float fTemp604 = fTemp536 + -1.0f;
			float fTemp605 = fTemp596 + 2.0f * fRec223 * fTemp604 + fRec224 * fTemp537;
			float fTemp606 = fRec255[1] + fConst378 * (fTemp605 - fRec256[1]) / fTemp597;
			float fTemp607 = fConst378 * (fTemp599 + 1.41442716f) / fTemp597 + 1.0f;
			float fTemp608 = fTemp606 / fTemp607;
			fRec255[0] = 2.0f * fTemp608 - fRec255[1];
			float fTemp609 = fTemp597 * fTemp607;
			float fTemp610 = fRec256[1] + fConst378 * fTemp606 / fTemp609;
			fRec256[0] = 2.0f * fTemp610 - fRec256[1];
			float fRec257 = fTemp608;
			float fRec258 = fTemp610;
			float fTemp611 = fRec224 + fRec258;
			float fTemp612 = 2.0f * fRec223 + 1.41442716f * fRec257;
			float fTemp613 = fTemp537 * fTemp611 + fTemp596 + fTemp604 * fTemp612;
			float fTemp614 = fRec217[1] + fConst378 * (fTemp613 - fRec218[1]) / fTemp597;
			float fTemp615 = fConst378 * (fTemp599 + 0.5f) / fTemp597 + 1.0f;
			float fTemp616 = fTemp614 / fTemp615;
			fRec217[0] = 2.0f * fTemp616 - fRec217[1];
			float fTemp617 = fTemp597 * fTemp615;
			float fTemp618 = fRec218[1] + fConst378 * fTemp614 / fTemp617;
			fRec218[0] = 2.0f * fTemp618 - fRec218[1];
			float fRec219 = fTemp616;
			float fRec220 = fTemp618;
			float fTemp619 = fTemp537 * (fRec220 + fTemp611) + fTemp596 + fTemp604 * (fTemp612 + 0.5f * fRec219);
			float fTemp620 = std::sqrt(fTemp524);
			float fTemp621 = fRec201[1] + fConst378 * (fTemp619 - fRec202[1]) / fTemp620;
			float fTemp622 = fConst378 / fTemp620;
			float fTemp623 = fConst378 * (fTemp622 + 2.0f) / fTemp620 + 1.0f;
			float fTemp624 = fTemp621 / fTemp623;
			fRec201[0] = 2.0f * fTemp624 - fRec201[1];
			float fTemp625 = fTemp620 * fTemp623;
			float fTemp626 = fRec202[1] + fConst378 * fTemp621 / fTemp625;
			fRec202[0] = 2.0f * fTemp626 - fRec202[1];
			float fRec203 = fTemp624;
			float fRec204 = fTemp626;
			float fTemp627 = fTemp524 + -1.0f;
			float fTemp628 = fTemp619 + 2.0f * fRec203 * fTemp627 + fRec204 * fTemp525;
			float fTemp629 = fRec259[1] + fConst378 * (fTemp628 - fRec260[1]) / fTemp620;
			float fTemp630 = fConst378 * (fTemp622 + 1.41442716f) / fTemp620 + 1.0f;
			float fTemp631 = fTemp629 / fTemp630;
			fRec259[0] = 2.0f * fTemp631 - fRec259[1];
			float fTemp632 = fTemp620 * fTemp630;
			float fTemp633 = fRec260[1] + fConst378 * fTemp629 / fTemp632;
			fRec260[0] = 2.0f * fTemp633 - fRec260[1];
			float fRec261 = fTemp631;
			float fRec262 = fTemp633;
			float fTemp634 = fRec204 + fRec262;
			float fTemp635 = 2.0f * fRec203 + 1.41442716f * fRec261;
			float fTemp636 = fTemp525 * fTemp634 + fTemp619 + fTemp627 * fTemp635;
			float fTemp637 = fRec197[1] + fConst378 * (fTemp636 - fRec198[1]) / fTemp620;
			float fTemp638 = fConst378 * (fTemp622 + 0.5f) / fTemp620 + 1.0f;
			float fTemp639 = fTemp637 / fTemp638;
			fRec197[0] = 2.0f * fTemp639 - fRec197[1];
			float fTemp640 = fTemp620 * fTemp638;
			float fTemp641 = fRec198[1] + fConst378 * fTemp637 / fTemp640;
			fRec198[0] = 2.0f * fTemp641 - fRec198[1];
			float fRec199 = fTemp639;
			float fRec200 = fTemp641;
			float fTemp642 = fTemp525 * (fRec200 + fTemp634) + fTemp619 + fTemp627 * (fTemp635 + 0.5f * fRec199);
			float fTemp643 = std::sqrt(fTemp522);
			float fTemp644 = fRec193[1] + fConst366 * (fTemp642 - fRec194[1]) / fTemp643;
			float fTemp645 = fConst366 / fTemp643;
			float fTemp646 = fConst366 * (fTemp645 + 2.0f) / fTemp643 + 1.0f;
			float fTemp647 = fTemp644 / fTemp646;
			fRec193[0] = 2.0f * fTemp647 - fRec193[1];
			float fTemp648 = fTemp643 * fTemp646;
			float fTemp649 = fRec194[1] + fConst366 * fTemp644 / fTemp648;
			fRec194[0] = 2.0f * fTemp649 - fRec194[1];
			float fRec195 = fTemp647;
			float fRec196 = fTemp649;
			float fTemp650 = fTemp522 + -1.0f;
			float fTemp651 = fTemp642 + 2.0f * fRec195 * fTemp650 + fRec196 * fTemp523;
			float fTemp652 = fRec263[1] + fConst366 * (fTemp651 - fRec264[1]) / fTemp643;
			float fTemp653 = fConst366 * (fTemp645 + 1.41442716f) / fTemp643 + 1.0f;
			float fTemp654 = fTemp652 / fTemp653;
			fRec263[0] = 2.0f * fTemp654 - fRec263[1];
			float fTemp655 = fTemp643 * fTemp653;
			float fTemp656 = fRec264[1] + fConst366 * fTemp652 / fTemp655;
			fRec264[0] = 2.0f * fTemp656 - fRec264[1];
			float fRec265 = fTemp654;
			float fRec266 = fTemp656;
			float fTemp657 = fRec196 + fRec266;
			float fTemp658 = 2.0f * fRec195 + 1.41442716f * fRec265;
			float fTemp659 = fTemp523 * fTemp657 + fTemp642 + fTemp650 * fTemp658;
			float fTemp660 = fRec189[1] + fConst366 * (fTemp659 - fRec190[1]) / fTemp643;
			float fTemp661 = fConst366 * (fTemp645 + 0.5f) / fTemp643 + 1.0f;
			float fTemp662 = fTemp660 / fTemp661;
			fRec189[0] = 2.0f * fTemp662 - fRec189[1];
			float fTemp663 = fTemp643 * fTemp661;
			float fTemp664 = fRec190[1] + fConst366 * fTemp660 / fTemp663;
			fRec190[0] = 2.0f * fTemp664 - fRec190[1];
			float fRec191 = fTemp662;
			float fRec192 = fTemp664;
			float fTemp665 = fTemp523 * (fRec192 + fTemp657) + fTemp642 + fTemp650 * (fTemp658 + 0.5f * fRec191);
			float fTemp666 = std::sqrt(fTemp510);
			float fTemp667 = fRec173[1] + fConst366 * (fTemp665 - fRec174[1]) / fTemp666;
			float fTemp668 = fConst366 / fTemp666;
			float fTemp669 = fConst366 * (fTemp668 + 2.0f) / fTemp666 + 1.0f;
			float fTemp670 = fTemp667 / fTemp669;
			fRec173[0] = 2.0f * fTemp670 - fRec173[1];
			float fTemp671 = fTemp666 * fTemp669;
			float fTemp672 = fRec174[1] + fConst366 * fTemp667 / fTemp671;
			fRec174[0] = 2.0f * fTemp672 - fRec174[1];
			float fRec175 = fTemp670;
			float fRec176 = fTemp672;
			float fTemp673 = fTemp510 + -1.0f;
			float fTemp674 = fTemp665 + 2.0f * fRec175 * fTemp673 + fRec176 * fTemp511;
			float fTemp675 = fRec267[1] + fConst366 * (fTemp674 - fRec268[1]) / fTemp666;
			float fTemp676 = fConst366 * (fTemp668 + 1.41442716f) / fTemp666 + 1.0f;
			float fTemp677 = fTemp675 / fTemp676;
			fRec267[0] = 2.0f * fTemp677 - fRec267[1];
			float fTemp678 = fTemp666 * fTemp676;
			float fTemp679 = fRec268[1] + fConst366 * fTemp675 / fTemp678;
			fRec268[0] = 2.0f * fTemp679 - fRec268[1];
			float fRec269 = fTemp677;
			float fRec270 = fTemp679;
			float fTemp680 = fRec176 + fRec270;
			float fTemp681 = 2.0f * fRec175 + 1.41442716f * fRec269;
			float fTemp682 = fTemp511 * fTemp680 + fTemp665 + fTemp673 * fTemp681;
			float fTemp683 = fRec169[1] + fConst366 * (fTemp682 - fRec170[1]) / fTemp666;
			float fTemp684 = fConst366 * (fTemp668 + 0.5f) / fTemp666 + 1.0f;
			float fTemp685 = fTemp683 / fTemp684;
			fRec169[0] = 2.0f * fTemp685 - fRec169[1];
			float fTemp686 = fTemp666 * fTemp684;
			float fTemp687 = fRec170[1] + fConst366 * fTemp683 / fTemp686;
			fRec170[0] = 2.0f * fTemp687 - fRec170[1];
			float fRec171 = fTemp685;
			float fRec172 = fTemp687;
			float fTemp688 = fTemp511 * (fRec172 + fTemp680) + fTemp665 + fTemp673 * (fTemp681 + 0.5f * fRec171);
			float fTemp689 = std::sqrt(fTemp508);
			float fTemp690 = fRec165[1] + fConst353 * (fTemp688 - fRec166[1]) / fTemp689;
			float fTemp691 = fConst353 / fTemp689;
			float fTemp692 = fConst353 * (fTemp691 + 2.0f) / fTemp689 + 1.0f;
			float fTemp693 = fTemp690 / fTemp692;
			fRec165[0] = 2.0f * fTemp693 - fRec165[1];
			float fTemp694 = fTemp689 * fTemp692;
			float fTemp695 = fRec166[1] + fConst353 * fTemp690 / fTemp694;
			fRec166[0] = 2.0f * fTemp695 - fRec166[1];
			float fRec167 = fTemp693;
			float fRec168 = fTemp695;
			float fTemp696 = fTemp508 + -1.0f;
			float fTemp697 = fTemp688 + 2.0f * fRec167 * fTemp696 + fRec168 * fTemp509;
			float fTemp698 = fRec271[1] + fConst353 * (fTemp697 - fRec272[1]) / fTemp689;
			float fTemp699 = fConst353 * (fTemp691 + 1.41442716f) / fTemp689 + 1.0f;
			float fTemp700 = fTemp698 / fTemp699;
			fRec271[0] = 2.0f * fTemp700 - fRec271[1];
			float fTemp701 = fTemp689 * fTemp699;
			float fTemp702 = fRec272[1] + fConst353 * fTemp698 / fTemp701;
			fRec272[0] = 2.0f * fTemp702 - fRec272[1];
			float fRec273 = fTemp700;
			float fRec274 = fTemp702;
			float fTemp703 = fRec168 + fRec274;
			float fTemp704 = 2.0f * fRec167 + 1.41442716f * fRec273;
			float fTemp705 = fTemp509 * fTemp703 + fTemp688 + fTemp696 * fTemp704;
			float fTemp706 = fRec161[1] + fConst353 * (fTemp705 - fRec162[1]) / fTemp689;
			float fTemp707 = fConst353 * (fTemp691 + 0.5f) / fTemp689 + 1.0f;
			float fTemp708 = fTemp706 / fTemp707;
			fRec161[0] = 2.0f * fTemp708 - fRec161[1];
			float fTemp709 = fTemp689 * fTemp707;
			float fTemp710 = fRec162[1] + fConst353 * fTemp706 / fTemp709;
			fRec162[0] = 2.0f * fTemp710 - fRec162[1];
			float fRec163 = fTemp708;
			float fRec164 = fTemp710;
			float fTemp711 = fTemp509 * (fRec164 + fTemp703) + fTemp688 + fTemp696 * (fTemp704 + 0.5f * fRec163);
			float fTemp712 = std::sqrt(fTemp497);
			float fTemp713 = fRec275[1] + fConst353 * fTemp712 * (fTemp711 - fRec276[1]);
			float fTemp714 = fConst353 * fTemp712;
			float fTemp715 = fConst353 * fTemp712 * (fTemp714 + 2.0f) + 1.0f;
			float fTemp716 = fTemp713 / fTemp715;
			fRec275[0] = 2.0f * fTemp716 - fRec275[1];
			float fTemp717 = fRec276[1] + fConst353 * (fTemp712 * fTemp713) / fTemp715;
			fRec276[0] = 2.0f * fTemp717 - fRec276[1];
			float fRec277 = fTemp716;
			float fRec278 = fTemp717;
			float fTemp718 = 1.0f - fTemp497;
			float fTemp719 = 1.0f - mydsp_faustpower2_f(fTemp497);
			float fTemp720 = fTemp497 * (fTemp497 * fTemp711 + 2.0f * fRec277 * fTemp718) + fRec278 * fTemp719;
			float fTemp721 = fRec279[1] + fConst353 * fTemp712 * (fTemp720 - fRec280[1]);
			float fTemp722 = fConst353 * fTemp712 * (fTemp714 + 1.41442716f) + 1.0f;
			float fTemp723 = fTemp721 / fTemp722;
			fRec279[0] = 2.0f * fTemp723 - fRec279[1];
			float fTemp724 = fRec280[1] + fConst353 * (fTemp712 * fTemp721) / fTemp722;
			fRec280[0] = 2.0f * fTemp724 - fRec280[1];
			float fRec281 = fTemp723;
			float fRec282 = fTemp724;
			float fTemp725 = fTemp497 * (fTemp497 * fTemp720 + 1.41442716f * fRec281 * fTemp718) + fRec282 * fTemp719;
			float fTemp726 = fRec283[1] + fConst353 * fTemp712 * (fTemp725 - fRec284[1]);
			float fTemp727 = fConst353 * fTemp712 * (fTemp714 + 0.5f) + 1.0f;
			float fTemp728 = fTemp726 / fTemp727;
			fRec283[0] = 2.0f * fTemp728 - fRec283[1];
			float fTemp729 = fRec284[1] + fConst353 * (fTemp712 * fTemp726) / fTemp727;
			fRec284[0] = 2.0f * fTemp729 - fRec284[1];
			float fRec285 = fTemp728;
			float fRec286 = fTemp729;
			float fTemp730 = fRec7[0] * fTemp485 + fTemp486 * (fTemp497 * (fTemp497 * fTemp725 + 0.5f * fRec285 * fTemp718) + fRec286 * fTemp719);
			fVec480[IOTA0 & 2047] = fTemp730;
			float fTemp731 = fRec339[1] + fConst390 * (fTemp491 - fRec340[1]) / fTemp551;
			float fTemp732 = fTemp731 / fTemp554;
			fRec339[0] = 2.0f * fTemp732 - fRec339[1];
			float fTemp733 = fRec340[1] + fConst390 * fTemp731 / fTemp556;
			fRec340[0] = 2.0f * fTemp733 - fRec340[1];
			float fRec341 = fTemp732;
			float fRec342 = fTemp733;
			float fTemp734 = fTemp491 + 2.0f * fRec341 * fTemp558 + fRec342 * fTemp550;
			float fTemp735 = fRec343[1] + fConst390 * (fTemp734 - fRec344[1]) / fTemp551;
			float fTemp736 = fTemp735 / fTemp561;
			fRec343[0] = 2.0f * fTemp736 - fRec343[1];
			float fTemp737 = fRec344[1] + fConst390 * fTemp735 / fTemp563;
			fRec344[0] = 2.0f * fTemp737 - fRec344[1];
			float fRec345 = fTemp736;
			float fRec346 = fTemp737;
			float fTemp738 = fRec342 + fRec346;
			float fTemp739 = 2.0f * fRec341 + 1.41442716f * fRec345;
			float fTemp740 = fTemp550 * fTemp738 + fTemp491 + fTemp558 * fTemp739;
			float fTemp741 = fRec335[1] + fConst390 * (fTemp740 - fRec336[1]) / fTemp551;
			float fTemp742 = fTemp741 / fTemp569;
			fRec335[0] = 2.0f * fTemp742 - fRec335[1];
			float fTemp743 = fRec336[1] + fConst390 * fTemp741 / fTemp571;
			fRec336[0] = 2.0f * fTemp743 - fRec336[1];
			float fRec337 = fTemp742;
			float fRec338 = fTemp743;
			float fTemp744 = fTemp550 * (fRec338 + fTemp738) + fTemp491 + fTemp558 * (fTemp739 + 0.5f * fRec337);
			float fTemp745 = fRec331[1] + fConst390 * (fTemp744 - fRec332[1]) / fTemp574;
			float fTemp746 = fTemp745 / fTemp577;
			fRec331[0] = 2.0f * fTemp746 - fRec331[1];
			float fTemp747 = fRec332[1] + fConst390 * fTemp745 / fTemp579;
			fRec332[0] = 2.0f * fTemp747 - fRec332[1];
			float fRec333 = fTemp746;
			float fRec334 = fTemp747;
			float fTemp748 = fTemp744 + 2.0f * fRec333 * fTemp581 + fRec334 * fTemp539;
			float fTemp749 = fRec347[1] + fConst390 * (fTemp748 - fRec348[1]) / fTemp574;
			float fTemp750 = fTemp749 / fTemp584;
			fRec347[0] = 2.0f * fTemp750 - fRec347[1];
			float fTemp751 = fRec348[1] + fConst390 * fTemp749 / fTemp586;
			fRec348[0] = 2.0f * fTemp751 - fRec348[1];
			float fRec349 = fTemp750;
			float fRec350 = fTemp751;
			float fTemp752 = fRec334 + fRec350;
			float fTemp753 = 2.0f * fRec333 + 1.41442716f * fRec349;
			float fTemp754 = fTemp539 * fTemp752 + fTemp744 + fTemp581 * fTemp753;
			float fTemp755 = fRec327[1] + fConst390 * (fTemp754 - fRec328[1]) / fTemp574;
			float fTemp756 = fTemp755 / fTemp592;
			fRec327[0] = 2.0f * fTemp756 - fRec327[1];
			float fTemp757 = fRec328[1] + fConst390 * fTemp755 / fTemp594;
			fRec328[0] = 2.0f * fTemp757 - fRec328[1];
			float fRec329 = fTemp756;
			float fRec330 = fTemp757;
			float fTemp758 = fTemp539 * (fRec330 + fTemp752) + fTemp744 + fTemp581 * (fTemp753 + 0.5f * fRec329);
			float fTemp759 = fRec323[1] + fConst378 * (fTemp758 - fRec324[1]) / fTemp597;
			float fTemp760 = fTemp759 / fTemp600;
			fRec323[0] = 2.0f * fTemp760 - fRec323[1];
			float fTemp761 = fRec324[1] + fConst378 * fTemp759 / fTemp602;
			fRec324[0] = 2.0f * fTemp761 - fRec324[1];
			float fRec325 = fTemp760;
			float fRec326 = fTemp761;
			float fTemp762 = fTemp758 + 2.0f * fRec325 * fTemp604 + fRec326 * fTemp537;
			float fTemp763 = fRec351[1] + fConst378 * (fTemp762 - fRec352[1]) / fTemp597;
			float fTemp764 = fTemp763 / fTemp607;
			fRec351[0] = 2.0f * fTemp764 - fRec351[1];
			float fTemp765 = fRec352[1] + fConst378 * fTemp763 / fTemp609;
			fRec352[0] = 2.0f * fTemp765 - fRec352[1];
			float fRec353 = fTemp764;
			float fRec354 = fTemp765;
			float fTemp766 = fRec326 + fRec354;
			float fTemp767 = 2.0f * fRec325 + 1.41442716f * fRec353;
			float fTemp768 = fTemp537 * fTemp766 + fTemp758 + fTemp604 * fTemp767;
			float fTemp769 = fRec319[1] + fConst378 * (fTemp768 - fRec320[1]) / fTemp597;
			float fTemp770 = fTemp769 / fTemp615;
			fRec319[0] = 2.0f * fTemp770 - fRec319[1];
			float fTemp771 = fRec320[1] + fConst378 * fTemp769 / fTemp617;
			fRec320[0] = 2.0f * fTemp771 - fRec320[1];
			float fRec321 = fTemp770;
			float fRec322 = fTemp771;
			float fTemp772 = fTemp537 * (fRec322 + fTemp766) + fTemp758 + fTemp604 * (fTemp767 + 0.5f * fRec321);
			float fTemp773 = fRec315[1] + fConst378 * (fTemp772 - fRec316[1]) / fTemp620;
			float fTemp774 = fTemp773 / fTemp623;
			fRec315[0] = 2.0f * fTemp774 - fRec315[1];
			float fTemp775 = fRec316[1] + fConst378 * fTemp773 / fTemp625;
			fRec316[0] = 2.0f * fTemp775 - fRec316[1];
			float fRec317 = fTemp774;
			float fRec318 = fTemp775;
			float fTemp776 = fTemp772 + 2.0f * fRec317 * fTemp627 + fRec318 * fTemp525;
			float fTemp777 = fRec355[1] + fConst378 * (fTemp776 - fRec356[1]) / fTemp620;
			float fTemp778 = fTemp777 / fTemp630;
			fRec355[0] = 2.0f * fTemp778 - fRec355[1];
			float fTemp779 = fRec356[1] + fConst378 * fTemp777 / fTemp632;
			fRec356[0] = 2.0f * fTemp779 - fRec356[1];
			float fRec357 = fTemp778;
			float fRec358 = fTemp779;
			float fTemp780 = fRec318 + fRec358;
			float fTemp781 = 2.0f * fRec317 + 1.41442716f * fRec357;
			float fTemp782 = fTemp525 * fTemp780 + fTemp772 + fTemp627 * fTemp781;
			float fTemp783 = fRec311[1] + fConst378 * (fTemp782 - fRec312[1]) / fTemp620;
			float fTemp784 = fTemp783 / fTemp638;
			fRec311[0] = 2.0f * fTemp784 - fRec311[1];
			float fTemp785 = fRec312[1] + fConst378 * fTemp783 / fTemp640;
			fRec312[0] = 2.0f * fTemp785 - fRec312[1];
			float fRec313 = fTemp784;
			float fRec314 = fTemp785;
			float fTemp786 = fTemp525 * (fRec314 + fTemp780) + fTemp772 + fTemp627 * (fTemp781 + 0.5f * fRec313);
			float fTemp787 = fRec307[1] + fConst366 * (fTemp786 - fRec308[1]) / fTemp643;
			float fTemp788 = fTemp787 / fTemp646;
			fRec307[0] = 2.0f * fTemp788 - fRec307[1];
			float fTemp789 = fRec308[1] + fConst366 * fTemp787 / fTemp648;
			fRec308[0] = 2.0f * fTemp789 - fRec308[1];
			float fRec309 = fTemp788;
			float fRec310 = fTemp789;
			float fTemp790 = fTemp786 + 2.0f * fRec309 * fTemp650 + fRec310 * fTemp523;
			float fTemp791 = fRec359[1] + fConst366 * (fTemp790 - fRec360[1]) / fTemp643;
			float fTemp792 = fTemp791 / fTemp653;
			fRec359[0] = 2.0f * fTemp792 - fRec359[1];
			float fTemp793 = fRec360[1] + fConst366 * fTemp791 / fTemp655;
			fRec360[0] = 2.0f * fTemp793 - fRec360[1];
			float fRec361 = fTemp792;
			float fRec362 = fTemp793;
			float fTemp794 = fRec310 + fRec362;
			float fTemp795 = 2.0f * fRec309 + 1.41442716f * fRec361;
			float fTemp796 = fTemp523 * fTemp794 + fTemp786 + fTemp650 * fTemp795;
			float fTemp797 = fRec303[1] + fConst366 * (fTemp796 - fRec304[1]) / fTemp643;
			float fTemp798 = fTemp797 / fTemp661;
			fRec303[0] = 2.0f * fTemp798 - fRec303[1];
			float fTemp799 = fRec304[1] + fConst366 * fTemp797 / fTemp663;
			fRec304[0] = 2.0f * fTemp799 - fRec304[1];
			float fRec305 = fTemp798;
			float fRec306 = fTemp799;
			float fTemp800 = fTemp523 * (fRec306 + fTemp794) + fTemp786 + fTemp650 * (fTemp795 + 0.5f * fRec305);
			float fTemp801 = fRec299[1] + fConst366 * (fTemp800 - fRec300[1]) / fTemp666;
			float fTemp802 = fTemp801 / fTemp669;
			fRec299[0] = 2.0f * fTemp802 - fRec299[1];
			float fTemp803 = fRec300[1] + fConst366 * fTemp801 / fTemp671;
			fRec300[0] = 2.0f * fTemp803 - fRec300[1];
			float fRec301 = fTemp802;
			float fRec302 = fTemp803;
			float fTemp804 = fTemp800 + 2.0f * fRec301 * fTemp673 + fRec302 * fTemp511;
			float fTemp805 = fRec363[1] + fConst366 * (fTemp804 - fRec364[1]) / fTemp666;
			float fTemp806 = fTemp805 / fTemp676;
			fRec363[0] = 2.0f * fTemp806 - fRec363[1];
			float fTemp807 = fRec364[1] + fConst366 * fTemp805 / fTemp678;
			fRec364[0] = 2.0f * fTemp807 - fRec364[1];
			float fRec365 = fTemp806;
			float fRec366 = fTemp807;
			float fTemp808 = fRec302 + fRec366;
			float fTemp809 = 2.0f * fRec301 + 1.41442716f * fRec365;
			float fTemp810 = fTemp511 * fTemp808 + fTemp800 + fTemp673 * fTemp809;
			float fTemp811 = fRec295[1] + fConst366 * (fTemp810 - fRec296[1]) / fTemp666;
			float fTemp812 = fTemp811 / fTemp684;
			fRec295[0] = 2.0f * fTemp812 - fRec295[1];
			float fTemp813 = fRec296[1] + fConst366 * fTemp811 / fTemp686;
			fRec296[0] = 2.0f * fTemp813 - fRec296[1];
			float fRec297 = fTemp812;
			float fRec298 = fTemp813;
			float fTemp814 = fTemp511 * (fRec298 + fTemp808) + fTemp800 + fTemp673 * (fTemp809 + 0.5f * fRec297);
			float fTemp815 = fRec291[1] + fConst353 * (fTemp814 - fRec292[1]) / fTemp689;
			float fTemp816 = fTemp815 / fTemp692;
			fRec291[0] = 2.0f * fTemp816 - fRec291[1];
			float fTemp817 = fRec292[1] + fConst353 * fTemp815 / fTemp694;
			fRec292[0] = 2.0f * fTemp817 - fRec292[1];
			float fRec293 = fTemp816;
			float fRec294 = fTemp817;
			float fTemp818 = fTemp814 + 2.0f * fRec293 * fTemp696 + fRec294 * fTemp509;
			float fTemp819 = fRec367[1] + fConst353 * (fTemp818 - fRec368[1]) / fTemp689;
			float fTemp820 = fTemp819 / fTemp699;
			fRec367[0] = 2.0f * fTemp820 - fRec367[1];
			float fTemp821 = fRec368[1] + fConst353 * fTemp819 / fTemp701;
			fRec368[0] = 2.0f * fTemp821 - fRec368[1];
			float fRec369 = fTemp820;
			float fRec370 = fTemp821;
			float fTemp822 = fRec294 + fRec370;
			float fTemp823 = 2.0f * fRec293 + 1.41442716f * fRec369;
			float fTemp824 = fTemp509 * fTemp822 + fTemp814 + fTemp696 * fTemp823;
			float fTemp825 = fRec287[1] + fConst353 * (fTemp824 - fRec288[1]) / fTemp689;
			float fTemp826 = fTemp825 / fTemp707;
			fRec287[0] = 2.0f * fTemp826 - fRec287[1];
			float fTemp827 = fRec288[1] + fConst353 * fTemp825 / fTemp709;
			fRec288[0] = 2.0f * fTemp827 - fRec288[1];
			float fRec289 = fTemp826;
			float fRec290 = fTemp827;
			float fTemp828 = fTemp509 * (fRec290 + fTemp822) + fTemp814 + fTemp696 * (fTemp823 + 0.5f * fRec289);
			float fTemp829 = fRec371[1] + fConst353 * fTemp712 * (fTemp828 - fRec372[1]);
			float fTemp830 = fTemp829 / fTemp715;
			fRec371[0] = 2.0f * fTemp830 - fRec371[1];
			float fTemp831 = fRec372[1] + fConst353 * (fTemp712 * fTemp829) / fTemp715;
			fRec372[0] = 2.0f * fTemp831 - fRec372[1];
			float fRec373 = fTemp830;
			float fRec374 = fTemp831;
			float fTemp832 = fTemp497 * (fTemp497 * fTemp828 + 2.0f * fRec373 * fTemp718) + fRec374 * fTemp719;
			float fTemp833 = fRec375[1] + fConst353 * fTemp712 * (fTemp832 - fRec376[1]);
			float fTemp834 = fTemp833 / fTemp722;
			fRec375[0] = 2.0f * fTemp834 - fRec375[1];
			float fTemp835 = fRec376[1] + fConst353 * (fTemp712 * fTemp833) / fTemp722;
			fRec376[0] = 2.0f * fTemp835 - fRec376[1];
			float fRec377 = fTemp834;
			float fRec378 = fTemp835;
			float fTemp836 = fTemp497 * (fTemp497 * fTemp832 + 1.41442716f * fRec377 * fTemp718) + fRec378 * fTemp719;
			float fTemp837 = fRec379[1] + fConst353 * fTemp712 * (fTemp836 - fRec380[1]);
			float fTemp838 = fTemp837 / fTemp727;
			fRec379[0] = 2.0f * fTemp838 - fRec379[1];
			float fTemp839 = fRec380[1] + fConst353 * (fTemp712 * fTemp837) / fTemp727;
			fRec380[0] = 2.0f * fTemp839 - fRec380[1];
			float fRec381 = fTemp838;
			float fRec382 = fTemp839;
			float fTemp840 = fRec7[0] * fTemp491 + fTemp486 * (fTemp497 * (fTemp497 * fTemp836 + 0.5f * fRec381 * fTemp718) + fRec382 * fTemp719);
			fVec481[IOTA0 & 2047] = fTemp840;
			float fTemp841 = std::fabs(std::max<float>(std::fabs(fTemp730), std::fabs(fTemp840)));
			int iTemp842 = (fTemp841 >= fRec6[1]) | (float(iRec5[1]) >= fConst24);
			int iThen465 = iRec5[1] + 1;
			iRec5[0] = ((iTemp842) ? 0 : iThen465);
			fRec6[0] = ((iTemp842) ? fTemp841 : fRec6[1]);
			fRec4[0] = fConst5 * fRec6[0] + fConst4 * fRec4[1];
			float fTemp843 = std::fabs(fRec4[0]);
			fRec3[0] = std::max<float>(fTemp843, fConst22 * fRec3[1] + fConst402 * fTemp843);
			float fTemp844 = std::min<float>(1.0f, 0.891250908f / std::max<float>(fRec3[0], 1.1920929e-07f));
			fVbargraph28 = FAUSTFLOAT(20.0f * std::log10(std::max<float>(1.17549435e-38f, std::fabs(fTemp844))));
			float fTemp845 = fTemp844 * (1.0f - fRec2[0]);
			float fTemp846 = fTemp1 * fRec2[0] + fTemp845 * fVec480[(IOTA0 - iConst403) & 2047];
			fRec0[0] = std::max<float>(fRec0[1] - fConst1, std::min<float>(10.0f, 20.0f * std::log10(std::max<float>(1.17549435e-38f, std::max<float>(0.000316227757f, std::fabs(fTemp846))))));
			fVbargraph30 = FAUSTFLOAT(fRec0[0]);
			float fTemp847 = fTemp846;
			fVec482[0] = fTemp847;
			output0[i0] = FAUSTFLOAT(fTemp847);
			fVec483[0] = 0.0f - fConst33 * (fConst34 * fRec385[1] - fConst35 * fVec482[1]);
			fRec386[0] = fVec483[1] + fConst33 * (fConst36 * fTemp847 - 2.0f * (fConst38 * fRec386[1] - fConst39 * fVec482[1]));
			fRec385[0] = fRec386[0];
			fVec484[0] = 0.500327051f * fRec385[1] - fConst41 * fRec383[1];
			fRec384[0] = fConst31 * fRec385[1] + fConst40 * (fVec484[1] - fConst42 * fRec384[1] + 0.500327051f * fRec385[0]);
			fRec383[0] = fRec384[0];
			float fTemp848 = mydsp_faustpower2_f(fRec383[0]);
			fVec485[0] = fTemp848;
			float fTemp849 = fTemp848 + fVec485[1];
			fVec486[0] = fTemp849;
			float fTemp850 = fTemp849 + fVec486[2];
			fVec487[0] = fTemp850;
			float fTemp851 = fTemp850 + fVec487[4];
			fVec488[0] = fTemp851;
			float fTemp852 = fTemp851 + fVec488[8];
			fVec489[IOTA0 & 31] = fTemp852;
			float fTemp853 = fTemp852 + fVec489[(IOTA0 - 16) & 31];
			fVec490[IOTA0 & 63] = fTemp853;
			float fTemp854 = fTemp853 + fVec490[(IOTA0 - 32) & 63];
			fVec491[IOTA0 & 127] = fTemp854;
			float fTemp855 = fTemp854 + fVec491[(IOTA0 - 64) & 127];
			fVec492[IOTA0 & 255] = fTemp855;
			float fTemp856 = fTemp855 + fVec492[(IOTA0 - 128) & 255];
			fVec493[IOTA0 & 511] = fTemp856;
			float fTemp857 = fTemp856 + fVec493[(IOTA0 - 256) & 511];
			fVec494[IOTA0 & 1023] = fTemp857;
			float fTemp858 = fTemp857 + fVec494[(IOTA0 - 512) & 1023];
			fVec495[IOTA0 & 2047] = fTemp858;
			float fTemp859 = fTemp858 + fVec495[(IOTA0 - 1024) & 2047];
			fVec496[IOTA0 & 4095] = fTemp859;
			float fTemp860 = fTemp859 + fVec496[(IOTA0 - 2048) & 4095];
			fVec497[IOTA0 & 8191] = fTemp860;
			float fTemp861 = fTemp860 + fVec497[(IOTA0 - 4096) & 8191];
			fVec498[IOTA0 & 16383] = fTemp861;
			float fTemp862 = fTemp861 + fVec498[(IOTA0 - 8192) & 16383];
			fVec499[IOTA0 & 32767] = fTemp862;
			float fTemp863 = fTemp862 + fVec499[(IOTA0 - 16384) & 32767];
			fVec500[IOTA0 & 65535] = fTemp863;
			fVec501[IOTA0 & 131071] = fTemp863 + fVec500[(IOTA0 - 32768) & 65535];
			float fElse467 = 0.860009849f * fVec501[(IOTA0 - iConst437) & 131071];
			float fElse468 = 0.860009849f * fVec500[(IOTA0 - iConst439) & 65535];
			float fElse469 = 0.860009849f * fVec499[(IOTA0 - iConst441) & 32767];
			float fElse470 = 0.860009849f * fVec498[(IOTA0 - iConst443) & 16383];
			float fElse471 = 0.860009849f * fVec497[(IOTA0 - iConst445) & 8191];
			float fElse472 = 0.860009849f * fVec496[(IOTA0 - iConst447) & 4095];
			float fElse473 = 0.860009849f * fVec495[(IOTA0 - iConst449) & 2047];
			float fElse474 = 0.860009849f * fVec494[(IOTA0 - iConst451) & 1023];
			float fElse475 = 0.860009849f * fVec493[(IOTA0 - iConst453) & 511];
			float fElse476 = 0.860009849f * fVec492[(IOTA0 - iConst455) & 255];
			float fElse477 = 0.860009849f * fVec491[(IOTA0 - iConst457) & 127];
			float fElse478 = 0.860009849f * fVec490[(IOTA0 - iConst459) & 63];
			float fElse479 = 0.860009849f * fVec489[(IOTA0 - iConst461) & 31];
			float fElse480 = 0.860009849f * fVec488[iConst463];
			float fElse481 = 0.860009849f * fVec487[iConst465];
			float fElse482 = 0.860009849f * fTemp848;
			float fElse483 = 0.860009849f * fVec486[iConst466];
			float fTemp864 = fRec2[0] * fTemp44 + fTemp845 * fVec481[(IOTA0 - iConst403) & 2047];
			fRec391[0] = std::max<float>(fRec391[1] - fConst1, std::min<float>(10.0f, 20.0f * std::log10(std::max<float>(1.17549435e-38f, std::max<float>(0.000316227757f, std::fabs(fTemp864))))));
			fVbargraph31 = FAUSTFLOAT(fRec391[0]);
			float fTemp865 = fTemp864;
			fVec502[0] = fTemp865;
			fVec503[0] = 0.0f - fConst33 * (fConst34 * fRec389[1] - fConst35 * fVec502[1]);
			fRec390[0] = fVec503[1] + fConst33 * (fConst36 * fTemp865 - 2.0f * (fConst38 * fRec390[1] - fConst39 * fVec502[1]));
			fRec389[0] = fRec390[0];
			fVec504[0] = 0.500327051f * fRec389[1] - fConst41 * fRec387[1];
			fRec388[0] = fConst31 * fRec389[1] + fConst40 * (fVec504[1] - fConst42 * fRec388[1] + 0.500327051f * fRec389[0]);
			fRec387[0] = fRec388[0];
			float fTemp866 = mydsp_faustpower2_f(fRec387[0]);
			fVec505[0] = fTemp866;
			float fTemp867 = fTemp866 + fVec505[1];
			fVec506[0] = fTemp867;
			float fTemp868 = fTemp867 + fVec506[2];
			fVec507[0] = fTemp868;
			float fTemp869 = fTemp868 + fVec507[4];
			fVec508[0] = fTemp869;
			float fTemp870 = fTemp869 + fVec508[8];
			fVec509[IOTA0 & 31] = fTemp870;
			float fTemp871 = fTemp870 + fVec509[(IOTA0 - 16) & 31];
			fVec510[IOTA0 & 63] = fTemp871;
			float fTemp872 = fTemp871 + fVec510[(IOTA0 - 32) & 63];
			fVec511[IOTA0 & 127] = fTemp872;
			float fTemp873 = fTemp872 + fVec511[(IOTA0 - 64) & 127];
			fVec512[IOTA0 & 255] = fTemp873;
			float fTemp874 = fTemp873 + fVec512[(IOTA0 - 128) & 255];
			fVec513[IOTA0 & 511] = fTemp874;
			float fTemp875 = fTemp874 + fVec513[(IOTA0 - 256) & 511];
			fVec514[IOTA0 & 1023] = fTemp875;
			float fTemp876 = fTemp875 + fVec514[(IOTA0 - 512) & 1023];
			fVec515[IOTA0 & 2047] = fTemp876;
			float fTemp877 = fTemp876 + fVec515[(IOTA0 - 1024) & 2047];
			fVec516[IOTA0 & 4095] = fTemp877;
			float fTemp878 = fTemp877 + fVec516[(IOTA0 - 2048) & 4095];
			fVec517[IOTA0 & 8191] = fTemp878;
			float fTemp879 = fTemp878 + fVec517[(IOTA0 - 4096) & 8191];
			fVec518[IOTA0 & 16383] = fTemp879;
			float fTemp880 = fTemp879 + fVec518[(IOTA0 - 8192) & 16383];
			fVec519[IOTA0 & 32767] = fTemp880;
			float fTemp881 = fTemp880 + fVec519[(IOTA0 - 16384) & 32767];
			fVec520[IOTA0 & 65535] = fTemp881;
			fVec521[IOTA0 & 131071] = fTemp881 + fVec520[(IOTA0 - 32768) & 65535];
			float fElse484 = 0.860009849f * fVec521[(IOTA0 - iConst437) & 131071];
			float fElse485 = 0.860009849f * fVec520[(IOTA0 - iConst439) & 65535];
			float fElse486 = 0.860009849f * fVec519[(IOTA0 - iConst441) & 32767];
			float fElse487 = 0.860009849f * fVec518[(IOTA0 - iConst443) & 16383];
			float fElse488 = 0.860009849f * fVec517[(IOTA0 - iConst445) & 8191];
			float fElse489 = 0.860009849f * fVec516[(IOTA0 - iConst447) & 4095];
			float fElse490 = 0.860009849f * fVec515[(IOTA0 - iConst449) & 2047];
			float fElse491 = 0.860009849f * fVec514[(IOTA0 - iConst451) & 1023];
			float fElse492 = 0.860009849f * fVec513[(IOTA0 - iConst453) & 511];
			float fElse493 = 0.860009849f * fVec512[(IOTA0 - iConst455) & 255];
			float fElse494 = 0.860009849f * fVec511[(IOTA0 - iConst457) & 127];
			float fElse495 = 0.860009849f * fVec510[(IOTA0 - iConst459) & 63];
			float fElse496 = 0.860009849f * fVec509[(IOTA0 - iConst461) & 31];
			float fElse497 = 0.860009849f * fVec508[iConst463];
			float fElse498 = 0.860009849f * fVec507[iConst465];
			float fElse499 = 0.860009849f * fTemp866;
			float fElse500 = 0.860009849f * fVec506[iConst466];
			fVbargraph32 = FAUSTFLOAT(4.34294462f * std::log(std::max<float>(9.99999996e-13f, fConst405 * (((iConst406) ? fElse467 : 0.0f) + ((iConst438) ? fElse468 : 0.0f) + ((iConst440) ? fElse469 : 0.0f) + ((iConst442) ? fElse470 : 0.0f) + ((iConst444) ? fElse471 : 0.0f) + ((iConst446) ? fElse472 : 0.0f) + ((iConst448) ? fElse473 : 0.0f) + ((iConst450) ? fElse474 : 0.0f) + ((iConst452) ? fElse475 : 0.0f) + ((iConst454) ? fElse476 : 0.0f) + ((iConst456) ? fElse477 : 0.0f) + ((iConst458) ? fElse478 : 0.0f) + ((iConst460) ? fElse479 : 0.0f) + ((iConst462) ? fElse480 : 0.0f) + ((iConst464) ? fElse481 : 0.0f) + ((iConst466) ? fElse482 : 0.0f) + ((iConst467) ? fElse483 : 0.0f) + ((iConst406) ? fElse484 : 0.0f) + ((iConst438) ? fElse485 : 0.0f) + ((iConst440) ? fElse486 : 0.0f) + ((iConst442) ? fElse487 : 0.0f) + ((iConst444) ? fElse488 : 0.0f) + ((iConst446) ? fElse489 : 0.0f) + ((iConst448) ? fElse490 : 0.0f) + ((iConst450) ? fElse491 : 0.0f) + ((iConst452) ? fElse492 : 0.0f) + ((iConst454) ? fElse493 : 0.0f) + ((iConst456) ? fElse494 : 0.0f) + ((iConst458) ? fElse495 : 0.0f) + ((iConst460) ? fElse496 : 0.0f) + ((iConst462) ? fElse497 : 0.0f) + ((iConst464) ? fElse498 : 0.0f) + ((iConst466) ? fElse499 : 0.0f) + ((iConst467) ? fElse500 : 0.0f)))) + -0.690999985f);
			output1[i0] = FAUSTFLOAT(fTemp865);
			fRec1[1] = fRec1[0];
			fRec2[1] = fRec2[0];
			fRec7[1] = fRec7[0];
			fVec0[1] = fVec0[0];
			fVec1[2] = fVec1[1];
			fVec1[1] = fVec1[0];
			for (int j0 = 6; j0 > 0; j0 = j0 - 1) {
				fVec2[j0] = fVec2[j0 - 1];
			}
			for (int j1 = 14; j1 > 0; j1 = j1 - 1) {
				fVec3[j1] = fVec3[j1 - 1];
			}
			IOTA0 = IOTA0 + 1;
			fRec18[1] = fRec18[0];
			fVec5[1] = fVec5[0];
			fRec22[1] = fRec22[0];
			fRec21[1] = fRec21[0];
			fVec6[1] = fVec6[0];
			fRec20[1] = fRec20[0];
			fRec19[1] = fRec19[0];
			fVec7[1] = fVec7[0];
			fVec8[2] = fVec8[1];
			fVec8[1] = fVec8[0];
			for (int j2 = 6; j2 > 0; j2 = j2 - 1) {
				fVec9[j2] = fVec9[j2 - 1];
			}
			for (int j3 = 14; j3 > 0; j3 = j3 - 1) {
				fVec10[j3] = fVec10[j3 - 1];
			}
			fVec18[1] = fVec18[0];
			fRec26[1] = fRec26[0];
			fRec25[1] = fRec25[0];
			fVec19[1] = fVec19[0];
			fRec24[1] = fRec24[0];
			fRec23[1] = fRec23[0];
			fVec20[1] = fVec20[0];
			fVec21[2] = fVec21[1];
			fVec21[1] = fVec21[0];
			for (int j4 = 6; j4 > 0; j4 = j4 - 1) {
				fVec22[j4] = fVec22[j4 - 1];
			}
			for (int j5 = 14; j5 > 0; j5 = j5 - 1) {
				fVec23[j5] = fVec23[j5 - 1];
			}
			fRec13[1] = fRec13[0];
			fRec14[1] = fRec14[0];
			fRec11[1] = fRec11[0];
			fRec10[1] = fRec10[0];
			fRec27[1] = fRec27[0];
			fRec28[1] = fRec28[0];
			fRec29[1] = fRec29[0];
			fRec31[2] = fRec31[1];
			fRec31[1] = fRec31[0];
			fRec30[2] = fRec30[1];
			fRec30[1] = fRec30[0];
			fRec37[1] = fRec37[0];
			fRec39[2] = fRec39[1];
			fRec39[1] = fRec39[0];
			fRec38[2] = fRec38[1];
			fRec38[1] = fRec38[0];
			fVec31[1] = fVec31[0];
			fRec36[2] = fRec36[1];
			fRec36[1] = fRec36[0];
			fVec33[1] = fVec33[0];
			fRec35[1] = fRec35[0];
			fRec34[1] = fRec34[0];
			fVec34[1] = fVec34[0];
			fRec33[1] = fRec33[0];
			fRec32[1] = fRec32[0];
			fVec35[1] = fVec35[0];
			fVec36[2] = fVec36[1];
			fVec36[1] = fVec36[0];
			for (int j6 = 6; j6 > 0; j6 = j6 - 1) {
				fVec37[j6] = fVec37[j6 - 1];
			}
			for (int j7 = 14; j7 > 0; j7 = j7 - 1) {
				fVec38[j7] = fVec38[j7 - 1];
			}
			fVec53[1] = fVec53[0];
			fRec43[1] = fRec43[0];
			fRec42[1] = fRec42[0];
			fVec54[1] = fVec54[0];
			fRec41[1] = fRec41[0];
			fRec40[1] = fRec40[0];
			fVec55[1] = fVec55[0];
			fVec56[2] = fVec56[1];
			fVec56[1] = fVec56[0];
			for (int j8 = 6; j8 > 0; j8 = j8 - 1) {
				fVec57[j8] = fVec57[j8 - 1];
			}
			for (int j9 = 14; j9 > 0; j9 = j9 - 1) {
				fVec58[j9] = fVec58[j9 - 1];
			}
			fVec73[1] = fVec73[0];
			fVec74[2] = fVec74[1];
			fVec74[1] = fVec74[0];
			for (int j10 = 6; j10 > 0; j10 = j10 - 1) {
				fVec75[j10] = fVec75[j10 - 1];
			}
			for (int j11 = 14; j11 > 0; j11 = j11 - 1) {
				fVec76[j11] = fVec76[j11 - 1];
			}
			fRec44[1] = fRec44[0];
			fRec49[2] = fRec49[1];
			fRec49[1] = fRec49[0];
			fVec82[1] = fVec82[0];
			fRec48[1] = fRec48[0];
			fRec47[1] = fRec47[0];
			fVec83[1] = fVec83[0];
			fRec46[1] = fRec46[0];
			fRec45[1] = fRec45[0];
			fVec84[1] = fVec84[0];
			fVec85[2] = fVec85[1];
			fVec85[1] = fVec85[0];
			for (int j12 = 6; j12 > 0; j12 = j12 - 1) {
				fVec86[j12] = fVec86[j12 - 1];
			}
			for (int j13 = 14; j13 > 0; j13 = j13 - 1) {
				fVec87[j13] = fVec87[j13 - 1];
			}
			fRec54[2] = fRec54[1];
			fRec54[1] = fRec54[0];
			fVec103[1] = fVec103[0];
			fRec53[1] = fRec53[0];
			fRec52[1] = fRec52[0];
			fVec104[1] = fVec104[0];
			fRec51[1] = fRec51[0];
			fRec50[1] = fRec50[0];
			fVec105[1] = fVec105[0];
			fVec106[2] = fVec106[1];
			fVec106[1] = fVec106[0];
			for (int j14 = 6; j14 > 0; j14 = j14 - 1) {
				fVec107[j14] = fVec107[j14 - 1];
			}
			for (int j15 = 14; j15 > 0; j15 = j15 - 1) {
				fVec108[j15] = fVec108[j15 - 1];
			}
			fRec59[2] = fRec59[1];
			fRec59[1] = fRec59[0];
			fVec124[1] = fVec124[0];
			fRec58[1] = fRec58[0];
			fRec57[1] = fRec57[0];
			fVec125[1] = fVec125[0];
			fRec56[1] = fRec56[0];
			fRec55[1] = fRec55[0];
			fVec126[1] = fVec126[0];
			fVec127[2] = fVec127[1];
			fVec127[1] = fVec127[0];
			for (int j16 = 6; j16 > 0; j16 = j16 - 1) {
				fVec128[j16] = fVec128[j16 - 1];
			}
			for (int j17 = 14; j17 > 0; j17 = j17 - 1) {
				fVec129[j17] = fVec129[j17 - 1];
			}
			fRec64[2] = fRec64[1];
			fRec64[1] = fRec64[0];
			fVec145[1] = fVec145[0];
			fRec63[1] = fRec63[0];
			fRec62[1] = fRec62[0];
			fVec146[1] = fVec146[0];
			fRec61[1] = fRec61[0];
			fRec60[1] = fRec60[0];
			fVec147[1] = fVec147[0];
			fVec148[2] = fVec148[1];
			fVec148[1] = fVec148[0];
			for (int j18 = 6; j18 > 0; j18 = j18 - 1) {
				fVec149[j18] = fVec149[j18 - 1];
			}
			for (int j19 = 14; j19 > 0; j19 = j19 - 1) {
				fVec150[j19] = fVec150[j19 - 1];
			}
			fRec69[2] = fRec69[1];
			fRec69[1] = fRec69[0];
			fVec166[1] = fVec166[0];
			fRec68[1] = fRec68[0];
			fRec67[1] = fRec67[0];
			fVec167[1] = fVec167[0];
			fRec66[1] = fRec66[0];
			fRec65[1] = fRec65[0];
			fVec168[1] = fVec168[0];
			fVec169[2] = fVec169[1];
			fVec169[1] = fVec169[0];
			for (int j20 = 6; j20 > 0; j20 = j20 - 1) {
				fVec170[j20] = fVec170[j20 - 1];
			}
			for (int j21 = 14; j21 > 0; j21 = j21 - 1) {
				fVec171[j21] = fVec171[j21 - 1];
			}
			fRec74[2] = fRec74[1];
			fRec74[1] = fRec74[0];
			fVec187[1] = fVec187[0];
			fRec73[1] = fRec73[0];
			fRec72[1] = fRec72[0];
			fVec188[1] = fVec188[0];
			fRec71[1] = fRec71[0];
			fRec70[1] = fRec70[0];
			fVec189[1] = fVec189[0];
			fVec190[2] = fVec190[1];
			fVec190[1] = fVec190[0];
			for (int j22 = 6; j22 > 0; j22 = j22 - 1) {
				fVec191[j22] = fVec191[j22 - 1];
			}
			for (int j23 = 14; j23 > 0; j23 = j23 - 1) {
				fVec192[j23] = fVec192[j23 - 1];
			}
			fRec79[2] = fRec79[1];
			fRec79[1] = fRec79[0];
			fVec208[1] = fVec208[0];
			fRec78[1] = fRec78[0];
			fRec77[1] = fRec77[0];
			fVec209[1] = fVec209[0];
			fRec76[1] = fRec76[0];
			fRec75[1] = fRec75[0];
			fVec210[1] = fVec210[0];
			fVec211[2] = fVec211[1];
			fVec211[1] = fVec211[0];
			for (int j24 = 6; j24 > 0; j24 = j24 - 1) {
				fVec212[j24] = fVec212[j24 - 1];
			}
			for (int j25 = 14; j25 > 0; j25 = j25 - 1) {
				fVec213[j25] = fVec213[j25 - 1];
			}
			fRec84[2] = fRec84[1];
			fRec84[1] = fRec84[0];
			fVec229[1] = fVec229[0];
			fRec83[1] = fRec83[0];
			fRec82[1] = fRec82[0];
			fVec230[1] = fVec230[0];
			fRec81[1] = fRec81[0];
			fRec80[1] = fRec80[0];
			fVec231[1] = fVec231[0];
			fVec232[2] = fVec232[1];
			fVec232[1] = fVec232[0];
			for (int j26 = 6; j26 > 0; j26 = j26 - 1) {
				fVec233[j26] = fVec233[j26 - 1];
			}
			for (int j27 = 14; j27 > 0; j27 = j27 - 1) {
				fVec234[j27] = fVec234[j27 - 1];
			}
			fRec89[2] = fRec89[1];
			fRec89[1] = fRec89[0];
			fVec250[1] = fVec250[0];
			fRec88[1] = fRec88[0];
			fRec87[1] = fRec87[0];
			fVec251[1] = fVec251[0];
			fRec86[1] = fRec86[0];
			fRec85[1] = fRec85[0];
			fVec252[1] = fVec252[0];
			fVec253[2] = fVec253[1];
			fVec253[1] = fVec253[0];
			for (int j28 = 6; j28 > 0; j28 = j28 - 1) {
				fVec254[j28] = fVec254[j28 - 1];
			}
			for (int j29 = 14; j29 > 0; j29 = j29 - 1) {
				fVec255[j29] = fVec255[j29 - 1];
			}
			fRec94[2] = fRec94[1];
			fRec94[1] = fRec94[0];
			fVec271[1] = fVec271[0];
			fRec93[1] = fRec93[0];
			fRec92[1] = fRec92[0];
			fVec272[1] = fVec272[0];
			fRec91[1] = fRec91[0];
			fRec90[1] = fRec90[0];
			fVec273[1] = fVec273[0];
			fVec274[2] = fVec274[1];
			fVec274[1] = fVec274[0];
			for (int j30 = 6; j30 > 0; j30 = j30 - 1) {
				fVec275[j30] = fVec275[j30 - 1];
			}
			for (int j31 = 14; j31 > 0; j31 = j31 - 1) {
				fVec276[j31] = fVec276[j31 - 1];
			}
			fRec99[2] = fRec99[1];
			fRec99[1] = fRec99[0];
			fVec292[1] = fVec292[0];
			fRec98[1] = fRec98[0];
			fRec97[1] = fRec97[0];
			fVec293[1] = fVec293[0];
			fRec96[1] = fRec96[0];
			fRec95[1] = fRec95[0];
			fVec294[1] = fVec294[0];
			fVec295[2] = fVec295[1];
			fVec295[1] = fVec295[0];
			for (int j32 = 6; j32 > 0; j32 = j32 - 1) {
				fVec296[j32] = fVec296[j32 - 1];
			}
			for (int j33 = 14; j33 > 0; j33 = j33 - 1) {
				fVec297[j33] = fVec297[j33 - 1];
			}
			fRec104[2] = fRec104[1];
			fRec104[1] = fRec104[0];
			fVec313[1] = fVec313[0];
			fRec103[1] = fRec103[0];
			fRec102[1] = fRec102[0];
			fVec314[1] = fVec314[0];
			fRec101[1] = fRec101[0];
			fRec100[1] = fRec100[0];
			fVec315[1] = fVec315[0];
			fVec316[2] = fVec316[1];
			fVec316[1] = fVec316[0];
			for (int j34 = 6; j34 > 0; j34 = j34 - 1) {
				fVec317[j34] = fVec317[j34 - 1];
			}
			for (int j35 = 14; j35 > 0; j35 = j35 - 1) {
				fVec318[j35] = fVec318[j35 - 1];
			}
			fRec109[2] = fRec109[1];
			fRec109[1] = fRec109[0];
			fVec334[1] = fVec334[0];
			fRec108[1] = fRec108[0];
			fRec107[1] = fRec107[0];
			fVec335[1] = fVec335[0];
			fRec106[1] = fRec106[0];
			fRec105[1] = fRec105[0];
			fVec336[1] = fVec336[0];
			fVec337[2] = fVec337[1];
			fVec337[1] = fVec337[0];
			for (int j36 = 6; j36 > 0; j36 = j36 - 1) {
				fVec338[j36] = fVec338[j36 - 1];
			}
			for (int j37 = 14; j37 > 0; j37 = j37 - 1) {
				fVec339[j37] = fVec339[j37 - 1];
			}
			fRec114[2] = fRec114[1];
			fRec114[1] = fRec114[0];
			fVec355[1] = fVec355[0];
			fRec113[1] = fRec113[0];
			fRec112[1] = fRec112[0];
			fVec356[1] = fVec356[0];
			fRec111[1] = fRec111[0];
			fRec110[1] = fRec110[0];
			fVec357[1] = fVec357[0];
			fVec358[2] = fVec358[1];
			fVec358[1] = fVec358[0];
			for (int j38 = 6; j38 > 0; j38 = j38 - 1) {
				fVec359[j38] = fVec359[j38 - 1];
			}
			for (int j39 = 14; j39 > 0; j39 = j39 - 1) {
				fVec360[j39] = fVec360[j39 - 1];
			}
			fRec119[2] = fRec119[1];
			fRec119[1] = fRec119[0];
			fVec376[1] = fVec376[0];
			fRec118[1] = fRec118[0];
			fRec117[1] = fRec117[0];
			fVec377[1] = fVec377[0];
			fRec116[1] = fRec116[0];
			fRec115[1] = fRec115[0];
			fVec378[1] = fVec378[0];
			fVec379[2] = fVec379[1];
			fVec379[1] = fVec379[0];
			for (int j40 = 6; j40 > 0; j40 = j40 - 1) {
				fVec380[j40] = fVec380[j40 - 1];
			}
			for (int j41 = 14; j41 > 0; j41 = j41 - 1) {
				fVec381[j41] = fVec381[j41 - 1];
			}
			fRec124[2] = fRec124[1];
			fRec124[1] = fRec124[0];
			fVec397[1] = fVec397[0];
			fRec123[1] = fRec123[0];
			fRec122[1] = fRec122[0];
			fVec398[1] = fVec398[0];
			fRec121[1] = fRec121[0];
			fRec120[1] = fRec120[0];
			fVec399[1] = fVec399[0];
			fVec400[2] = fVec400[1];
			fVec400[1] = fVec400[0];
			for (int j42 = 6; j42 > 0; j42 = j42 - 1) {
				fVec401[j42] = fVec401[j42 - 1];
			}
			for (int j43 = 14; j43 > 0; j43 = j43 - 1) {
				fVec402[j43] = fVec402[j43 - 1];
			}
			fRec129[2] = fRec129[1];
			fRec129[1] = fRec129[0];
			fVec418[1] = fVec418[0];
			fRec128[1] = fRec128[0];
			fRec127[1] = fRec127[0];
			fVec419[1] = fVec419[0];
			fRec126[1] = fRec126[0];
			fRec125[1] = fRec125[0];
			fVec420[1] = fVec420[0];
			fVec421[2] = fVec421[1];
			fVec421[1] = fVec421[0];
			for (int j44 = 6; j44 > 0; j44 = j44 - 1) {
				fVec422[j44] = fVec422[j44 - 1];
			}
			for (int j45 = 14; j45 > 0; j45 = j45 - 1) {
				fVec423[j45] = fVec423[j45 - 1];
			}
			fRec134[2] = fRec134[1];
			fRec134[1] = fRec134[0];
			fVec439[1] = fVec439[0];
			fRec133[1] = fRec133[0];
			fRec132[1] = fRec132[0];
			fVec440[1] = fVec440[0];
			fRec131[1] = fRec131[0];
			fRec130[1] = fRec130[0];
			fVec441[1] = fVec441[0];
			fVec442[2] = fVec442[1];
			fVec442[1] = fVec442[0];
			for (int j46 = 6; j46 > 0; j46 = j46 - 1) {
				fVec443[j46] = fVec443[j46 - 1];
			}
			for (int j47 = 14; j47 > 0; j47 = j47 - 1) {
				fVec444[j47] = fVec444[j47 - 1];
			}
			fRec139[2] = fRec139[1];
			fRec139[1] = fRec139[0];
			fVec460[1] = fVec460[0];
			fRec138[1] = fRec138[0];
			fRec137[1] = fRec137[0];
			fVec461[1] = fVec461[0];
			fRec136[1] = fRec136[0];
			fRec135[1] = fRec135[0];
			fVec462[1] = fVec462[0];
			fVec463[2] = fVec463[1];
			fVec463[1] = fVec463[0];
			for (int j48 = 6; j48 > 0; j48 = j48 - 1) {
				fVec464[j48] = fVec464[j48 - 1];
			}
			for (int j49 = 14; j49 > 0; j49 = j49 - 1) {
				fVec465[j49] = fVec465[j49 - 1];
			}
			fRec8[2] = fRec8[1];
			fRec8[1] = fRec8[0];
			fRec9[2] = fRec9[1];
			fRec9[1] = fRec9[0];
			fRec140[1] = fRec140[0];
			fRec144[2] = fRec144[1];
			fRec144[1] = fRec144[0];
			fRec143[2] = fRec143[1];
			fRec143[1] = fRec143[0];
			fRec142[2] = fRec142[1];
			fRec142[1] = fRec142[0];
			fRec141[1] = fRec141[0];
			fRec148[2] = fRec148[1];
			fRec148[1] = fRec148[0];
			fRec147[2] = fRec147[1];
			fRec147[1] = fRec147[0];
			fRec146[2] = fRec146[1];
			fRec146[1] = fRec146[0];
			fRec145[1] = fRec145[0];
			fRec154[2] = fRec154[1];
			fRec154[1] = fRec154[0];
			fRec153[2] = fRec153[1];
			fRec153[1] = fRec153[0];
			fRec152[2] = fRec152[1];
			fRec152[1] = fRec152[0];
			fRec151[2] = fRec151[1];
			fRec151[1] = fRec151[0];
			fRec150[2] = fRec150[1];
			fRec150[1] = fRec150[0];
			fRec149[1] = fRec149[0];
			fRec160[2] = fRec160[1];
			fRec160[1] = fRec160[0];
			fRec159[2] = fRec159[1];
			fRec159[1] = fRec159[0];
			fRec158[2] = fRec158[1];
			fRec158[1] = fRec158[0];
			fRec157[2] = fRec157[1];
			fRec157[1] = fRec157[0];
			fRec156[2] = fRec156[1];
			fRec156[1] = fRec156[0];
			fRec155[1] = fRec155[0];
			fRec182[2] = fRec182[1];
			fRec182[1] = fRec182[0];
			fRec181[2] = fRec181[1];
			fRec181[1] = fRec181[0];
			fRec180[2] = fRec180[1];
			fRec180[1] = fRec180[0];
			fRec179[2] = fRec179[1];
			fRec179[1] = fRec179[0];
			fRec178[2] = fRec178[1];
			fRec178[1] = fRec178[0];
			fRec177[1] = fRec177[0];
			fRec188[2] = fRec188[1];
			fRec188[1] = fRec188[0];
			fRec187[2] = fRec187[1];
			fRec187[1] = fRec187[0];
			fRec186[2] = fRec186[1];
			fRec186[1] = fRec186[0];
			fRec185[2] = fRec185[1];
			fRec185[1] = fRec185[0];
			fRec184[2] = fRec184[1];
			fRec184[1] = fRec184[0];
			fRec183[1] = fRec183[0];
			fRec210[2] = fRec210[1];
			fRec210[1] = fRec210[0];
			fRec209[2] = fRec209[1];
			fRec209[1] = fRec209[0];
			fRec208[2] = fRec208[1];
			fRec208[1] = fRec208[0];
			fRec207[2] = fRec207[1];
			fRec207[1] = fRec207[0];
			fRec206[2] = fRec206[1];
			fRec206[1] = fRec206[0];
			fRec205[1] = fRec205[0];
			fRec216[2] = fRec216[1];
			fRec216[1] = fRec216[0];
			fRec215[2] = fRec215[1];
			fRec215[1] = fRec215[0];
			fRec214[2] = fRec214[1];
			fRec214[1] = fRec214[0];
			fRec213[2] = fRec213[1];
			fRec213[1] = fRec213[0];
			fRec212[2] = fRec212[1];
			fRec212[1] = fRec212[0];
			fRec211[1] = fRec211[0];
			fRec235[2] = fRec235[1];
			fRec235[1] = fRec235[0];
			fRec234[2] = fRec234[1];
			fRec234[1] = fRec234[0];
			fRec233[1] = fRec233[0];
			fRec238[2] = fRec238[1];
			fRec238[1] = fRec238[0];
			fRec237[2] = fRec237[1];
			fRec237[1] = fRec237[0];
			fRec236[1] = fRec236[0];
			fRec243[1] = fRec243[0];
			fRec244[1] = fRec244[0];
			fRec247[1] = fRec247[0];
			fRec248[1] = fRec248[0];
			fRec239[1] = fRec239[0];
			fRec240[1] = fRec240[0];
			fRec229[1] = fRec229[0];
			fRec230[1] = fRec230[0];
			fRec251[1] = fRec251[0];
			fRec252[1] = fRec252[0];
			fRec225[1] = fRec225[0];
			fRec226[1] = fRec226[0];
			fRec221[1] = fRec221[0];
			fRec222[1] = fRec222[0];
			fRec255[1] = fRec255[0];
			fRec256[1] = fRec256[0];
			fRec217[1] = fRec217[0];
			fRec218[1] = fRec218[0];
			fRec201[1] = fRec201[0];
			fRec202[1] = fRec202[0];
			fRec259[1] = fRec259[0];
			fRec260[1] = fRec260[0];
			fRec197[1] = fRec197[0];
			fRec198[1] = fRec198[0];
			fRec193[1] = fRec193[0];
			fRec194[1] = fRec194[0];
			fRec263[1] = fRec263[0];
			fRec264[1] = fRec264[0];
			fRec189[1] = fRec189[0];
			fRec190[1] = fRec190[0];
			fRec173[1] = fRec173[0];
			fRec174[1] = fRec174[0];
			fRec267[1] = fRec267[0];
			fRec268[1] = fRec268[0];
			fRec169[1] = fRec169[0];
			fRec170[1] = fRec170[0];
			fRec165[1] = fRec165[0];
			fRec166[1] = fRec166[0];
			fRec271[1] = fRec271[0];
			fRec272[1] = fRec272[0];
			fRec161[1] = fRec161[0];
			fRec162[1] = fRec162[0];
			fRec275[1] = fRec275[0];
			fRec276[1] = fRec276[0];
			fRec279[1] = fRec279[0];
			fRec280[1] = fRec280[0];
			fRec283[1] = fRec283[0];
			fRec284[1] = fRec284[0];
			fRec339[1] = fRec339[0];
			fRec340[1] = fRec340[0];
			fRec343[1] = fRec343[0];
			fRec344[1] = fRec344[0];
			fRec335[1] = fRec335[0];
			fRec336[1] = fRec336[0];
			fRec331[1] = fRec331[0];
			fRec332[1] = fRec332[0];
			fRec347[1] = fRec347[0];
			fRec348[1] = fRec348[0];
			fRec327[1] = fRec327[0];
			fRec328[1] = fRec328[0];
			fRec323[1] = fRec323[0];
			fRec324[1] = fRec324[0];
			fRec351[1] = fRec351[0];
			fRec352[1] = fRec352[0];
			fRec319[1] = fRec319[0];
			fRec320[1] = fRec320[0];
			fRec315[1] = fRec315[0];
			fRec316[1] = fRec316[0];
			fRec355[1] = fRec355[0];
			fRec356[1] = fRec356[0];
			fRec311[1] = fRec311[0];
			fRec312[1] = fRec312[0];
			fRec307[1] = fRec307[0];
			fRec308[1] = fRec308[0];
			fRec359[1] = fRec359[0];
			fRec360[1] = fRec360[0];
			fRec303[1] = fRec303[0];
			fRec304[1] = fRec304[0];
			fRec299[1] = fRec299[0];
			fRec300[1] = fRec300[0];
			fRec363[1] = fRec363[0];
			fRec364[1] = fRec364[0];
			fRec295[1] = fRec295[0];
			fRec296[1] = fRec296[0];
			fRec291[1] = fRec291[0];
			fRec292[1] = fRec292[0];
			fRec367[1] = fRec367[0];
			fRec368[1] = fRec368[0];
			fRec287[1] = fRec287[0];
			fRec288[1] = fRec288[0];
			fRec371[1] = fRec371[0];
			fRec372[1] = fRec372[0];
			fRec375[1] = fRec375[0];
			fRec376[1] = fRec376[0];
			fRec379[1] = fRec379[0];
			fRec380[1] = fRec380[0];
			iRec5[1] = iRec5[0];
			fRec6[1] = fRec6[0];
			fRec4[1] = fRec4[0];
			fRec3[1] = fRec3[0];
			fRec0[1] = fRec0[0];
			fVec482[1] = fVec482[0];
			fVec483[1] = fVec483[0];
			fRec386[1] = fRec386[0];
			fRec385[1] = fRec385[0];
			fVec484[1] = fVec484[0];
			fRec384[1] = fRec384[0];
			fRec383[1] = fRec383[0];
			fVec485[1] = fVec485[0];
			fVec486[2] = fVec486[1];
			fVec486[1] = fVec486[0];
			for (int j50 = 6; j50 > 0; j50 = j50 - 1) {
				fVec487[j50] = fVec487[j50 - 1];
			}
			for (int j51 = 14; j51 > 0; j51 = j51 - 1) {
				fVec488[j51] = fVec488[j51 - 1];
			}
			fRec391[1] = fRec391[0];
			fVec502[1] = fVec502[0];
			fVec503[1] = fVec503[0];
			fRec390[1] = fRec390[0];
			fRec389[1] = fRec389[0];
			fVec504[1] = fVec504[0];
			fRec388[1] = fRec388[0];
			fRec387[1] = fRec387[0];
			fVec505[1] = fVec505[0];
			fVec506[2] = fVec506[1];
			fVec506[1] = fVec506[0];
			for (int j52 = 6; j52 > 0; j52 = j52 - 1) {
				fVec507[j52] = fVec507[j52 - 1];
			}
			for (int j53 = 14; j53 > 0; j53 = j53 - 1) {
				fVec508[j53] = fVec508[j53 - 1];
			}
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
        dsp->fVbargraph29 = 0;
        dsp->fVbargraph3 = 0;
        dsp->fVbargraph4 = 0;
        dsp->fVbargraph5 = 0;
        dsp->fVbargraph6 = 0;
        dsp->fVbargraph7 = 0;
        dsp->fVbargraph8 = 0;
        dsp->fVbargraph9 = 0;
        dsp->fVbargraph10 = 0;
        dsp->fVbargraph11 = 0;
        dsp->fVbargraph12 = 0;
        dsp->fVbargraph13 = 0;
        dsp->fVbargraph14 = 0;
        dsp->fVbargraph15 = 0;
        dsp->fVbargraph16 = 0;
        dsp->fVbargraph17 = 0;
        dsp->fVbargraph18 = 0;
        dsp->fVbargraph19 = 0;
        dsp->fVbargraph20 = 0;
        dsp->fVbargraph21 = 0;
        dsp->fVbargraph22 = 0;
        dsp->fVbargraph0 = 0;
        dsp->fVbargraph2 = 0;
        dsp->fVbargraph1 = 0;
        dsp->fVbargraph27 = 0;
        dsp->fVbargraph26 = 0;
        dsp->fVbargraph25 = 0;
        dsp->fVbargraph24 = 0;
        dsp->fVbargraph23 = 0;
        dsp->fVbargraph28 = 0;
        dsp->fVbargraph32 = 0;
        dsp->fVbargraph30 = 0;
        dsp->fVbargraph31 = 0;
        
    }

    /*
    void printCurrentValues()
    {
        d_stdout("==== preset data start ===");
        printf("%.12g,", dsp->fCheckbox0);
        printf("%.12g,", dsp->fCheckbox3);
        printf("%.12g,", dsp->fCheckbox2);
        printf("%.12g,", dsp->fCheckbox4);
        printf("%.12g,", dsp->fCheckbox1);
        printf("%.12g,", dsp->fVslider2);
        printf("%.12g,", dsp->fVslider1);
        printf("%.12g,", dsp->fVslider0);
        printf("%.12g,", dsp->fVslider3);
        
        d_stdout("\n==== preset data end ===");
    }
    */

protected:
   /* -----------------------------------------------------------------------------------------------------------------
    * Information */

    const char* getLabel() const override
    {
        return "pod-track";
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
        case kParameter_bypass_global:
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
        case kParameter__2:
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
        case kParameter__3:
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
        case kParameter__4:
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
        case kParameter__5:
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
        case kParameter_spectral_ballancer_timbre:
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
        case kParameter_input_gain:
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
        case kParameter_leveler_target:
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
        case kParameter__9:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[8];
            param.unit = kParameterUnits[8];
            param.symbol = kParameterSymbols[8];
            param.shortName = "";
            param.ranges.def = kParameterRanges[8].def;
            param.ranges.min = kParameterRanges[8].min;
            param.ranges.max = kParameterRanges[8].max;
            break;
        
        case kParameter_latency_global:
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
        case kParameter_spectral_ballancer_gain_band__0:
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
        case kParameter_spectral_ballancer_gain_band__1:
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
        case kParameter_spectral_ballancer_gain_band__2:
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
        case kParameter_spectral_ballancer_gain_band__3:
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
        case kParameter_spectral_ballancer_gain_band__4:
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
        case kParameter_spectral_ballancer_gain_band__5:
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
        case kParameter_spectral_ballancer_gain_band__6:
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
        case kParameter_spectral_ballancer_gain_band__7:
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
        case kParameter_spectral_ballancer_gain_band__8:
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
        case kParameter_spectral_ballancer_gain_band__9:
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
        case kParameter_spectral_ballancer_gain_band_10:
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
        case kParameter_spectral_ballancer_gain_band_11:
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
        case kParameter_spectral_ballancer_gain_band_12:
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
        case kParameter_spectral_ballancer_gain_band_13:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[23];
            param.unit = kParameterUnits[23];
            param.symbol = kParameterSymbols[23];
            param.shortName = "";
            param.ranges.def = kParameterRanges[23].def;
            param.ranges.min = kParameterRanges[23].min;
            param.ranges.max = kParameterRanges[23].max;
            break;
        case kParameter_spectral_ballancer_gain_band_14:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[24];
            param.unit = kParameterUnits[24];
            param.symbol = kParameterSymbols[24];
            param.shortName = "";
            param.ranges.def = kParameterRanges[24].def;
            param.ranges.min = kParameterRanges[24].min;
            param.ranges.max = kParameterRanges[24].max;
            break;
        case kParameter_spectral_ballancer_gain_band_15:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[25];
            param.unit = kParameterUnits[25];
            param.symbol = kParameterSymbols[25];
            param.shortName = "";
            param.ranges.def = kParameterRanges[25].def;
            param.ranges.min = kParameterRanges[25].min;
            param.ranges.max = kParameterRanges[25].max;
            break;
        case kParameter_spectral_ballancer_gain_band_16:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[26];
            param.unit = kParameterUnits[26];
            param.symbol = kParameterSymbols[26];
            param.shortName = "";
            param.ranges.def = kParameterRanges[26].def;
            param.ranges.min = kParameterRanges[26].min;
            param.ranges.max = kParameterRanges[26].max;
            break;
        case kParameter_spectral_ballancer_gain_band_17:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[27];
            param.unit = kParameterUnits[27];
            param.symbol = kParameterSymbols[27];
            param.shortName = "";
            param.ranges.def = kParameterRanges[27].def;
            param.ranges.min = kParameterRanges[27].min;
            param.ranges.max = kParameterRanges[27].max;
            break;
        case kParameter_spectral_ballancer_gain_band_18:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[28];
            param.unit = kParameterUnits[28];
            param.symbol = kParameterSymbols[28];
            param.shortName = "";
            param.ranges.def = kParameterRanges[28].def;
            param.ranges.min = kParameterRanges[28].min;
            param.ranges.max = kParameterRanges[28].max;
            break;
        case kParameter_spectral_ballancer_gain_band_19:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[29];
            param.unit = kParameterUnits[29];
            param.symbol = kParameterSymbols[29];
            param.shortName = "";
            param.ranges.def = kParameterRanges[29].def;
            param.ranges.min = kParameterRanges[29].min;
            param.ranges.max = kParameterRanges[29].max;
            break;
        case kParameter_input_peak_channel_0:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[30];
            param.unit = kParameterUnits[30];
            param.symbol = kParameterSymbols[30];
            param.shortName = "";
            param.ranges.def = kParameterRanges[30].def;
            param.ranges.min = kParameterRanges[30].min;
            param.ranges.max = kParameterRanges[30].max;
            break;
        case kParameter_input_peak_channel_1:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[31];
            param.unit = kParameterUnits[31];
            param.symbol = kParameterSymbols[31];
            param.shortName = "";
            param.ranges.def = kParameterRanges[31].def;
            param.ranges.min = kParameterRanges[31].min;
            param.ranges.max = kParameterRanges[31].max;
            break;
        case kParameter_leveler_gain:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[32];
            param.unit = kParameterUnits[32];
            param.symbol = kParameterSymbols[32];
            param.shortName = "";
            param.ranges.def = kParameterRanges[32].def;
            param.ranges.min = kParameterRanges[32].min;
            param.ranges.max = kParameterRanges[32].max;
            break;
        case kParameter_multiband_compressor_gain_band_1:
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
        case kParameter_multiband_compressor_gain_band_2:
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
        case kParameter_multiband_compressor_gain_band_3:
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
        case kParameter_multiband_compressor_gain_band_4:
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
        case kParameter_multiband_compressor_gain_band_5:
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
        case kParameter_limiter_gain:
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
        case kParameter_lufs_out_meter:
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
        case kParameter_output_peak_channel_0:
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
        case kParameter_output_peak_channel_1:
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
        
        }
    }

   /* -----------------------------------------------------------------------------------------------------------------
    * Internal data */

    float getParameterValue(const uint32_t index) const override
    {
        switch (index)
        {
        case kParameter_bypass_global:
            return dsp->fCheckbox0;
        case kParameter__2:
            return dsp->fCheckbox3;
        case kParameter__3:
            return dsp->fCheckbox2;
        case kParameter__4:
            return dsp->fCheckbox4;
        case kParameter__5:
            return dsp->fCheckbox1;
        case kParameter_spectral_ballancer_timbre:
            return dsp->fVslider2;
        case kParameter_input_gain:
            return dsp->fVslider1;
        case kParameter_leveler_target:
            return dsp->fVslider0;
        case kParameter__9:
            return dsp->fVslider3;
        case kParameter_latency_global:
            return dsp->fVbargraph29;
        case kParameter_spectral_ballancer_gain_band__0:
            return dsp->fVbargraph3;
        case kParameter_spectral_ballancer_gain_band__1:
            return dsp->fVbargraph4;
        case kParameter_spectral_ballancer_gain_band__2:
            return dsp->fVbargraph5;
        case kParameter_spectral_ballancer_gain_band__3:
            return dsp->fVbargraph6;
        case kParameter_spectral_ballancer_gain_band__4:
            return dsp->fVbargraph7;
        case kParameter_spectral_ballancer_gain_band__5:
            return dsp->fVbargraph8;
        case kParameter_spectral_ballancer_gain_band__6:
            return dsp->fVbargraph9;
        case kParameter_spectral_ballancer_gain_band__7:
            return dsp->fVbargraph10;
        case kParameter_spectral_ballancer_gain_band__8:
            return dsp->fVbargraph11;
        case kParameter_spectral_ballancer_gain_band__9:
            return dsp->fVbargraph12;
        case kParameter_spectral_ballancer_gain_band_10:
            return dsp->fVbargraph13;
        case kParameter_spectral_ballancer_gain_band_11:
            return dsp->fVbargraph14;
        case kParameter_spectral_ballancer_gain_band_12:
            return dsp->fVbargraph15;
        case kParameter_spectral_ballancer_gain_band_13:
            return dsp->fVbargraph16;
        case kParameter_spectral_ballancer_gain_band_14:
            return dsp->fVbargraph17;
        case kParameter_spectral_ballancer_gain_band_15:
            return dsp->fVbargraph18;
        case kParameter_spectral_ballancer_gain_band_16:
            return dsp->fVbargraph19;
        case kParameter_spectral_ballancer_gain_band_17:
            return dsp->fVbargraph20;
        case kParameter_spectral_ballancer_gain_band_18:
            return dsp->fVbargraph21;
        case kParameter_spectral_ballancer_gain_band_19:
            return dsp->fVbargraph22;
        case kParameter_input_peak_channel_0:
            return dsp->fVbargraph0;
        case kParameter_input_peak_channel_1:
            return dsp->fVbargraph2;
        case kParameter_leveler_gain:
            return dsp->fVbargraph1;
        case kParameter_multiband_compressor_gain_band_1:
            return dsp->fVbargraph27;
        case kParameter_multiband_compressor_gain_band_2:
            return dsp->fVbargraph26;
        case kParameter_multiband_compressor_gain_band_3:
            return dsp->fVbargraph25;
        case kParameter_multiband_compressor_gain_band_4:
            return dsp->fVbargraph24;
        case kParameter_multiband_compressor_gain_band_5:
            return dsp->fVbargraph23;
        case kParameter_limiter_gain:
            return dsp->fVbargraph28;
        case kParameter_lufs_out_meter:
            return dsp->fVbargraph32;
        case kParameter_output_peak_channel_0:
            return dsp->fVbargraph30;
        case kParameter_output_peak_channel_1:
            return dsp->fVbargraph31;
        
        default:
            return 0.0f;
        }
    }

    void setParameterValue(const uint32_t index, const float value) override
    {
        switch (index)
        {
        case kParameter_bypass_global:
            dsp->fCheckbox0 = value;
            break;
        case kParameter__2:
            dsp->fCheckbox3 = value;
            break;
        case kParameter__3:
            dsp->fCheckbox2 = value;
            break;
        case kParameter__4:
            dsp->fCheckbox4 = value;
            break;
        case kParameter__5:
            dsp->fCheckbox1 = value;
            break;
        case kParameter_spectral_ballancer_timbre:
            dsp->fVslider2 = value;
            break;
        case kParameter_input_gain:
            dsp->fVslider1 = value;
            break;
        case kParameter_leveler_target:
            dsp->fVslider0 = value;
            break;
        case kParameter__9:
            dsp->fVslider3 = value;
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
        float params[9] = {
            dsp->fCheckbox0,
            dsp->fCheckbox3,
            dsp->fCheckbox2,
            dsp->fCheckbox4,
            dsp->fCheckbox1,
            dsp->fVslider2,
            dsp->fVslider1,
            dsp->fVslider0,
            dsp->fVslider3,
            
        };

        // tell dsp to change sample rate
        dsp->init(newSampleRate);

        // set parameters back, which have been reset in the dsp
        dsp->fCheckbox0 = params[0];
        dsp->fCheckbox3 = params[1];
        dsp->fCheckbox2 = params[2];
        dsp->fCheckbox4 = params[3];
        dsp->fCheckbox1 = params[4];
        dsp->fVslider2 = params[5];
        dsp->fVslider1 = params[6];
        dsp->fVslider0 = params[7];
        dsp->fVslider3 = params[8];
        
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