
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
	float fConst2;
	float fConst3;
	FAUSTFLOAT fCheckbox0;
	float fConst4;
	float fRec4[2];
	float fConst5;
	float fConst6;
	int iConst8;
	float fVec0[2];
	int iConst10;
	float fVec1[3];
	int iConst12;
	float fVec2[7];
	int iConst14;
	int iConst16;
	float fVec3[15];
	int iConst18;
	int iConst19;
	int IOTA0;
	float fVec4[32];
	int iConst20;
	FAUSTFLOAT fVslider0;
	float fConst21;
	float fRec15[2];
	float fConst22;
	float fConst23;
	float fConst25;
	int iConst26;
	float fConst30;
	float fConst32;
	float fConst33;
	float fConst34;
	float fVec5[2];
	float fConst35;
	float fConst37;
	float fConst38;
	float fRec19[2];
	float fRec18[2];
	float fConst39;
	float fConst40;
	float fVec6[2];
	float fConst41;
	float fRec17[2];
	float fRec16[2];
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
	int iConst75;
	int iConst76;
	int iConst77;
	int iConst78;
	float fVec18[2];
	float fRec23[2];
	float fRec22[2];
	float fVec19[2];
	float fRec21[2];
	float fRec20[2];
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
	float fRec10[2];
	float fRec11[2];
	float fRec8[2];
	FAUSTFLOAT fVbargraph0;
	float fRec7[2];
	FAUSTFLOAT fCheckbox1;
	float fRec24[2];
	FAUSTFLOAT fVbargraph1;
	FAUSTFLOAT fVslider1;
	float fRec25[2];
	FAUSTFLOAT fCheckbox2;
	float fRec26[2];
	float fConst81;
	float fConst84;
	float fConst86;
	float fConst87;
	float fConst88;
	float fRec28[3];
	float fConst89;
	float fConst90;
	float fConst91;
	float fRec27[3];
	float fConst93;
	int iConst94;
	float fConst95;
	float fConst97;
	FAUSTFLOAT fVbargraph2;
	float fRec35[3];
	float fRec34[3];
	float fVec31[2];
	float fConst98;
	float fConst99;
	float fRec33[3];
	float fConst100;
	float fVec32[32768];
	float fVec33[2];
	float fConst101;
	float fConst102;
	float fConst103;
	float fRec32[2];
	float fRec31[2];
	float fVec34[2];
	float fRec30[2];
	float fRec29[2];
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
	int iConst136;
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
	float fConst169;
	float fVec53[2];
	float fConst170;
	float fRec39[2];
	float fRec38[2];
	float fVec54[2];
	float fRec37[2];
	float fRec36[2];
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
	int iConst172;
	float fVec73[2];
	int iConst174;
	float fVec74[3];
	int iConst176;
	float fVec75[7];
	int iConst178;
	int iConst180;
	float fVec76[15];
	int iConst182;
	int iConst184;
	float fVec77[32];
	int iConst186;
	int iConst188;
	float fVec78[64];
	int iConst190;
	int iConst192;
	float fVec79[128];
	int iConst194;
	int iConst195;
	float fVec80[256];
	int iConst196;
	float fConst197;
	float fConst198;
	float fRec40[2];
	FAUSTFLOAT fVbargraph3;
	int iConst199;
	float fConst203;
	float fConst204;
	float fConst205;
	float fConst206;
	float fRec45[3];
	float fConst207;
	float fVec81[32768];
	float fVec82[2];
	float fRec44[2];
	float fRec43[2];
	float fVec83[2];
	float fRec42[2];
	float fRec41[2];
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
	float fConst211;
	float fConst212;
	float fConst213;
	float fConst214;
	float fRec50[3];
	float fConst215;
	float fVec102[32768];
	float fVec103[2];
	float fRec49[2];
	float fRec48[2];
	float fVec104[2];
	float fRec47[2];
	float fRec46[2];
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
	float fConst219;
	float fConst220;
	float fConst221;
	float fConst222;
	float fRec55[3];
	float fConst223;
	float fVec123[32768];
	float fVec124[2];
	float fRec54[2];
	float fRec53[2];
	float fVec125[2];
	float fRec52[2];
	float fRec51[2];
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
	float fConst227;
	float fConst228;
	float fConst229;
	float fConst230;
	float fRec60[3];
	float fConst231;
	float fVec144[32768];
	float fVec145[2];
	float fRec59[2];
	float fRec58[2];
	float fVec146[2];
	float fRec57[2];
	float fRec56[2];
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
	float fConst235;
	float fConst236;
	float fConst237;
	float fConst238;
	float fRec65[3];
	float fConst239;
	float fVec165[32768];
	float fVec166[2];
	float fRec64[2];
	float fRec63[2];
	float fVec167[2];
	float fRec62[2];
	float fRec61[2];
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
	float fConst243;
	float fConst244;
	float fConst245;
	float fConst246;
	float fRec70[3];
	float fConst247;
	float fVec186[32768];
	float fVec187[2];
	float fRec69[2];
	float fRec68[2];
	float fVec188[2];
	float fRec67[2];
	float fRec66[2];
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
	float fConst251;
	float fConst252;
	float fConst253;
	float fConst254;
	float fRec75[3];
	float fConst255;
	float fVec207[32768];
	float fVec208[2];
	float fRec74[2];
	float fRec73[2];
	float fVec209[2];
	float fRec72[2];
	float fRec71[2];
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
	float fConst259;
	float fConst260;
	float fConst261;
	float fConst262;
	float fRec80[3];
	float fConst263;
	float fVec228[32768];
	float fVec229[2];
	float fRec79[2];
	float fRec78[2];
	float fVec230[2];
	float fRec77[2];
	float fRec76[2];
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
	float fConst267;
	float fConst268;
	float fConst269;
	float fConst270;
	float fRec85[3];
	float fConst271;
	float fVec249[32768];
	float fVec250[2];
	float fRec84[2];
	float fRec83[2];
	float fVec251[2];
	float fRec82[2];
	float fRec81[2];
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
	float fConst275;
	float fConst276;
	float fConst277;
	float fConst278;
	float fRec90[3];
	float fConst279;
	float fVec270[32768];
	float fVec271[2];
	float fRec89[2];
	float fRec88[2];
	float fVec272[2];
	float fRec87[2];
	float fRec86[2];
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
	float fConst283;
	float fConst284;
	float fConst285;
	float fConst286;
	float fRec95[3];
	float fConst287;
	float fVec291[32768];
	float fVec292[2];
	float fRec94[2];
	float fRec93[2];
	float fVec293[2];
	float fRec92[2];
	float fRec91[2];
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
	float fConst291;
	float fConst292;
	float fConst293;
	float fConst294;
	float fRec100[3];
	float fConst295;
	float fVec312[32768];
	float fVec313[2];
	float fRec99[2];
	float fRec98[2];
	float fVec314[2];
	float fRec97[2];
	float fRec96[2];
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
	float fConst299;
	float fConst300;
	float fConst301;
	float fConst302;
	float fRec105[3];
	float fConst303;
	float fVec333[32768];
	float fVec334[2];
	float fRec104[2];
	float fRec103[2];
	float fVec335[2];
	float fRec102[2];
	float fRec101[2];
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
	float fConst307;
	float fConst308;
	float fConst309;
	float fConst310;
	float fRec110[3];
	float fConst311;
	float fVec354[32768];
	float fVec355[2];
	float fRec109[2];
	float fRec108[2];
	float fVec356[2];
	float fRec107[2];
	float fRec106[2];
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
	float fConst315;
	float fConst316;
	float fConst317;
	float fConst318;
	float fRec115[3];
	float fConst319;
	float fVec375[32768];
	float fVec376[2];
	float fRec114[2];
	float fRec113[2];
	float fVec377[2];
	float fRec112[2];
	float fRec111[2];
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
	float fConst323;
	float fConst324;
	float fConst325;
	float fConst326;
	float fRec120[3];
	float fConst327;
	float fVec396[32768];
	float fVec397[2];
	float fRec119[2];
	float fRec118[2];
	float fVec398[2];
	float fRec117[2];
	float fRec116[2];
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
	float fConst331;
	float fConst332;
	float fConst333;
	float fConst334;
	float fRec125[3];
	float fConst335;
	float fVec417[32768];
	float fVec418[2];
	float fRec124[2];
	float fRec123[2];
	float fVec419[2];
	float fRec122[2];
	float fRec121[2];
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
	float fConst339;
	float fConst340;
	float fConst341;
	float fConst342;
	float fRec130[3];
	float fConst343;
	float fVec438[32768];
	float fVec439[2];
	float fRec129[2];
	float fRec128[2];
	float fVec440[2];
	float fRec127[2];
	float fRec126[2];
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
	float fConst347;
	float fConst348;
	float fConst349;
	float fConst350;
	float fRec135[3];
	float fConst351;
	float fVec459[32768];
	float fVec460[2];
	float fRec134[2];
	float fRec133[2];
	float fVec461[2];
	float fRec132[2];
	float fRec131[2];
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
	float fRec5[3];
	float fRec6[3];
	FAUSTFLOAT fCheckbox3;
	float fRec136[2];
	FAUSTFLOAT fVslider3;
	float fConst352;
	float fConst354;
	float fConst356;
	float fConst357;
	float fConst358;
	float fConst359;
	float fConst360;
	float fRec140[3];
	float fConst361;
	float fConst362;
	float fRec139[3];
	float fConst363;
	float fRec138[3];
	float fConst364;
	float fRec137[2];
	float fRec144[3];
	float fRec143[3];
	float fRec142[3];
	float fRec141[2];
	FAUSTFLOAT fVbargraph23;
	float fConst365;
	float fConst367;
	float fConst369;
	float fConst370;
	float fConst371;
	float fRec150[3];
	float fRec149[3];
	float fConst372;
	float fConst373;
	float fRec148[3];
	float fConst374;
	float fConst375;
	float fRec147[3];
	float fConst376;
	float fRec146[3];
	float fRec145[2];
	float fRec156[3];
	float fRec155[3];
	float fRec154[3];
	float fRec153[3];
	float fRec152[3];
	float fRec151[2];
	FAUSTFLOAT fVbargraph24;
	float fConst377;
	float fConst379;
	float fConst381;
	float fConst382;
	float fConst383;
	float fRec178[3];
	float fRec177[3];
	float fConst384;
	float fConst385;
	float fRec176[3];
	float fConst386;
	float fConst387;
	float fRec175[3];
	float fConst388;
	float fRec174[3];
	float fRec173[2];
	float fRec184[3];
	float fRec183[3];
	float fRec182[3];
	float fRec181[3];
	float fRec180[3];
	float fRec179[2];
	FAUSTFLOAT fVbargraph25;
	float fConst389;
	float fConst391;
	float fConst393;
	float fConst394;
	float fConst395;
	float fRec206[3];
	float fRec205[3];
	float fConst396;
	float fConst397;
	float fRec204[3];
	float fConst398;
	float fConst399;
	float fRec203[3];
	float fConst400;
	float fRec202[3];
	float fRec201[2];
	float fRec212[3];
	float fRec211[3];
	float fRec210[3];
	float fRec209[3];
	float fRec208[3];
	float fRec207[2];
	FAUSTFLOAT fVbargraph26;
	float fRec231[3];
	float fRec230[3];
	float fRec229[2];
	float fRec234[3];
	float fRec233[3];
	float fRec232[2];
	FAUSTFLOAT fVbargraph27;
	float fRec239[2];
	float fRec240[2];
	float fRec243[2];
	float fRec244[2];
	float fRec235[2];
	float fRec236[2];
	float fRec225[2];
	float fRec226[2];
	float fRec247[2];
	float fRec248[2];
	float fRec221[2];
	float fRec222[2];
	float fRec217[2];
	float fRec218[2];
	float fRec251[2];
	float fRec252[2];
	float fRec213[2];
	float fRec214[2];
	float fRec197[2];
	float fRec198[2];
	float fRec255[2];
	float fRec256[2];
	float fRec193[2];
	float fRec194[2];
	float fRec189[2];
	float fRec190[2];
	float fRec259[2];
	float fRec260[2];
	float fRec185[2];
	float fRec186[2];
	float fRec169[2];
	float fRec170[2];
	float fRec263[2];
	float fRec264[2];
	float fRec165[2];
	float fRec166[2];
	float fRec161[2];
	float fRec162[2];
	float fRec267[2];
	float fRec268[2];
	float fRec157[2];
	float fRec158[2];
	float fRec271[2];
	float fRec272[2];
	float fRec275[2];
	float fRec276[2];
	float fRec279[2];
	float fRec280[2];
	float fVec480[2048];
	float fRec335[2];
	float fRec336[2];
	float fRec339[2];
	float fRec340[2];
	float fRec331[2];
	float fRec332[2];
	float fRec327[2];
	float fRec328[2];
	float fRec343[2];
	float fRec344[2];
	float fRec323[2];
	float fRec324[2];
	float fRec319[2];
	float fRec320[2];
	float fRec347[2];
	float fRec348[2];
	float fRec315[2];
	float fRec316[2];
	float fRec311[2];
	float fRec312[2];
	float fRec351[2];
	float fRec352[2];
	float fRec307[2];
	float fRec308[2];
	float fRec303[2];
	float fRec304[2];
	float fRec355[2];
	float fRec356[2];
	float fRec299[2];
	float fRec300[2];
	float fRec295[2];
	float fRec296[2];
	float fRec359[2];
	float fRec360[2];
	float fRec291[2];
	float fRec292[2];
	float fRec287[2];
	float fRec288[2];
	float fRec363[2];
	float fRec364[2];
	float fRec283[2];
	float fRec284[2];
	float fRec367[2];
	float fRec368[2];
	float fRec371[2];
	float fRec372[2];
	float fRec375[2];
	float fRec376[2];
	float fVec481[2048];
	int iRec2[2];
	float fRec3[2];
	float fRec1[2];
	float fConst401;
	float fRec0[2];
	int iConst402;
	FAUSTFLOAT fVbargraph28;
	float fVec482[2];
	float fConst404;
	int iConst405;
	float fVec483[2];
	float fRec382[2];
	float fRec381[2];
	float fVec484[2];
	float fRec380[2];
	float fRec379[2];
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
	int iConst436;
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
	FAUSTFLOAT fVbargraph29;
	float fVec502[2];
	float fVec503[2];
	float fRec386[2];
	float fRec385[2];
	float fVec504[2];
	float fRec384[2];
	float fRec383[2];
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
	FAUSTFLOAT fVbargraph30;
	
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
		m->declare("compile_options", "-a /tmp/tmprwr1ur9s.cpp -lang cpp -es 1 -mcd 16 -single -ftz 0");
		m->declare("compressors.lib/limiter_lad_N:author", "Dario Sanfilippo");
		m->declare("compressors.lib/limiter_lad_N:copyright", "Copyright (C) 2020 Dario Sanfilippo       <sanfilippo.dario@gmail.com>");
		m->declare("compressors.lib/limiter_lad_N:license", "GPLv3 license");
		m->declare("compressors.lib/limiter_lad_stereo:author", "Dario Sanfilippo");
		m->declare("compressors.lib/limiter_lad_stereo:copyright", "Copyright (C) 2020 Dario Sanfilippo       <sanfilippo.dario@gmail.com>");
		m->declare("compressors.lib/limiter_lad_stereo:license", "GPLv3 license");
		m->declare("compressors.lib/name", "Faust Compressor Effect Library");
		m->declare("compressors.lib/version", "0.2");
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
		fConst1 = std::exp(0.0f - 125.0f / fConst0);
		fConst2 = 1.0f - fConst1;
		fConst3 = 44.0999985f / fConst0;
		fConst4 = 1.0f - fConst3;
		fConst5 = 3.14159274f / fConst0;
		fConst6 = 0.125f * fConst0;
		int iConst7 = int(std::floor(9.99999975e-05f * fConst0)) % 2;
		iConst8 = iConst7;
		int iConst9 = int(std::floor(4.99999987e-05f * fConst0)) % 2;
		iConst10 = iConst9;
		int iConst11 = int(std::floor(2.49999994e-05f * fConst0)) % 2;
		iConst12 = iConst11;
		int iConst13 = iConst7 + 2 * iConst9;
		iConst14 = iConst13;
		int iConst15 = int(std::floor(1.24999997e-05f * fConst0)) % 2;
		iConst16 = iConst15;
		int iConst17 = iConst13 + 4 * iConst11;
		iConst18 = iConst17;
		iConst19 = int(std::floor(6.24999984e-06f * fConst0)) % 2;
		iConst20 = iConst17 + 8 * iConst15;
		fConst21 = std::exp(0.0f - 10.0f / fConst0);
		fConst22 = 1.13123053e-06f * fConst0;
		fConst23 = 0.00999999978f * fConst0;
		float fConst24 = std::rint(fConst23);
		fConst25 = 1.0f / std::max<float>(fConst24, 1.1920929e-07f);
		iConst26 = int(std::floor(0.0009765625f * fConst24)) % 2;
		float fConst27 = std::tan(119.806114f / fConst0);
		float fConst28 = 0.500327051f * fConst27;
		float fConst29 = fConst27 * (fConst28 + 1.0f) + 0.500327051f;
		fConst30 = 0.0f - 1.0006541f / fConst29;
		float fConst31 = std::tan(5283.41504f / fConst0);
		fConst32 = 1.0f / (fConst31 * (fConst31 + 1.41421354f) + 1.0f);
		fConst33 = fConst31 * (fConst31 + -1.41421354f) + 1.0f;
		fConst34 = fConst31 * (fConst31 + -1.78036666f) + 1.5848527f;
		fConst35 = fConst31 * (fConst31 + 1.78036666f) + 1.5848527f;
		float fConst36 = mydsp_faustpower2_f(fConst31);
		fConst37 = fConst36 + -1.0f;
		fConst38 = fConst36 + -1.5848527f;
		fConst39 = 1.0f / fConst29;
		fConst40 = fConst27 * (fConst28 + -1.0f) + 0.500327051f;
		fConst41 = 1.0006541f * (mydsp_faustpower2_f(fConst27) + -1.0f);
		int iConst42 = int(std::floor(fConst24)) % 2;
		int iConst43 = int(std::floor(0.5f * fConst24)) % 2;
		int iConst44 = iConst42 + 2 * iConst43;
		int iConst45 = int(std::floor(0.25f * fConst24)) % 2;
		int iConst46 = iConst44 + 4 * iConst45;
		int iConst47 = int(std::floor(0.125f * fConst24)) % 2;
		int iConst48 = iConst46 + 8 * iConst47;
		int iConst49 = int(std::floor(0.0625f * fConst24)) % 2;
		int iConst50 = iConst48 + 16 * iConst49;
		int iConst51 = int(std::floor(0.03125f * fConst24)) % 2;
		int iConst52 = iConst50 + 32 * iConst51;
		int iConst53 = int(std::floor(0.015625f * fConst24)) % 2;
		int iConst54 = iConst52 + 64 * iConst53;
		int iConst55 = int(std::floor(0.0078125f * fConst24)) % 2;
		int iConst56 = iConst54 + 128 * iConst55;
		int iConst57 = int(std::floor(0.00390625f * fConst24)) % 2;
		int iConst58 = iConst56 + 256 * iConst57;
		int iConst59 = int(std::floor(0.001953125f * fConst24)) % 2;
		iConst60 = iConst58 + 512 * iConst59;
		iConst61 = iConst59;
		iConst62 = iConst58;
		iConst63 = iConst57;
		iConst64 = iConst56;
		iConst65 = iConst55;
		iConst66 = iConst54;
		iConst67 = iConst53;
		iConst68 = iConst52;
		iConst69 = iConst51;
		iConst70 = iConst50;
		iConst71 = iConst49;
		iConst72 = iConst48;
		iConst73 = iConst47;
		iConst74 = iConst46;
		iConst75 = iConst45;
		iConst76 = iConst44;
		iConst77 = iConst42;
		iConst78 = iConst43;
		float fConst79 = std::tan(50265.4844f / fConst0);
		float fConst80 = 1.0f / fConst79;
		fConst81 = 1.0f / ((fConst80 + 1.41421354f) / fConst79 + 1.0f);
		float fConst82 = std::tan(188.49556f / fConst0);
		float fConst83 = 1.0f / fConst82;
		fConst84 = 1.0f / ((fConst83 + 1.41421354f) / fConst82 + 1.0f);
		float fConst85 = mydsp_faustpower2_f(fConst82);
		fConst86 = 1.0f / fConst85;
		fConst87 = (fConst83 + -1.41421354f) / fConst82 + 1.0f;
		fConst88 = 2.0f * (1.0f - fConst86);
		fConst89 = 0.0f - 2.0f / fConst85;
		fConst90 = (fConst80 + -1.41421354f) / fConst79 + 1.0f;
		fConst91 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst79));
		float fConst92 = std::rint(0.800000012f * fConst0);
		fConst93 = 1.0f / std::max<float>(fConst92, 1.1920929e-07f);
		iConst94 = int(std::floor(7.62939453e-06f * fConst92)) % 2;
		fConst95 = 0.223606795f * fConst34;
		float fConst96 = (fConst83 + 0.333333343f) / fConst82 + 1.0f;
		fConst97 = 1.0f / (fConst82 * fConst96);
		fConst98 = 1.0f / fConst96;
		fConst99 = (fConst83 + -0.333333343f) / fConst82 + 1.0f;
		fConst100 = 0.0f - fConst97;
		fConst101 = 2.0f * fConst37;
		fConst102 = 0.44721359f * fConst38;
		fConst103 = 0.223606795f * fConst35;
		int iConst104 = int(std::floor(fConst92)) % 2;
		int iConst105 = int(std::floor(0.5f * fConst92)) % 2;
		int iConst106 = iConst104 + 2 * iConst105;
		int iConst107 = int(std::floor(0.25f * fConst92)) % 2;
		int iConst108 = iConst106 + 4 * iConst107;
		int iConst109 = int(std::floor(0.125f * fConst92)) % 2;
		int iConst110 = iConst108 + 8 * iConst109;
		int iConst111 = int(std::floor(0.0625f * fConst92)) % 2;
		int iConst112 = iConst110 + 16 * iConst111;
		int iConst113 = int(std::floor(0.03125f * fConst92)) % 2;
		int iConst114 = iConst112 + 32 * iConst113;
		int iConst115 = int(std::floor(0.015625f * fConst92)) % 2;
		int iConst116 = iConst114 + 64 * iConst115;
		int iConst117 = int(std::floor(0.0078125f * fConst92)) % 2;
		int iConst118 = iConst116 + 128 * iConst117;
		int iConst119 = int(std::floor(0.00390625f * fConst92)) % 2;
		int iConst120 = iConst118 + 256 * iConst119;
		int iConst121 = int(std::floor(0.001953125f * fConst92)) % 2;
		int iConst122 = iConst120 + 512 * iConst121;
		int iConst123 = int(std::floor(0.0009765625f * fConst92)) % 2;
		int iConst124 = iConst122 + 1024 * iConst123;
		int iConst125 = int(std::floor(0.00048828125f * fConst92)) % 2;
		int iConst126 = iConst124 + 2048 * iConst125;
		int iConst127 = int(std::floor(0.000244140625f * fConst92)) % 2;
		int iConst128 = iConst126 + 4096 * iConst127;
		int iConst129 = int(std::floor(0.000122070312f * fConst92)) % 2;
		int iConst130 = iConst128 + 8192 * iConst129;
		int iConst131 = int(std::floor(6.10351562e-05f * fConst92)) % 2;
		int iConst132 = iConst130 + 16384 * iConst131;
		int iConst133 = int(std::floor(3.05175781e-05f * fConst92)) % 2;
		int iConst134 = iConst132 + 32768 * iConst133;
		int iConst135 = int(std::floor(1.52587891e-05f * fConst92)) % 2;
		iConst136 = iConst134 + 65536 * iConst135;
		iConst137 = iConst135;
		iConst138 = iConst134;
		iConst139 = iConst133;
		iConst140 = iConst132;
		iConst141 = iConst131;
		iConst142 = iConst130;
		iConst143 = iConst129;
		iConst144 = iConst128;
		iConst145 = iConst127;
		iConst146 = iConst126;
		iConst147 = iConst125;
		iConst148 = iConst124;
		iConst149 = iConst123;
		iConst150 = iConst122;
		iConst151 = iConst121;
		iConst152 = iConst120;
		iConst153 = iConst119;
		iConst154 = iConst118;
		iConst155 = iConst117;
		iConst156 = iConst116;
		iConst157 = iConst115;
		iConst158 = iConst114;
		iConst159 = iConst113;
		iConst160 = iConst112;
		iConst161 = iConst111;
		iConst162 = iConst110;
		iConst163 = iConst109;
		iConst164 = iConst108;
		iConst165 = iConst107;
		iConst166 = iConst106;
		iConst167 = iConst104;
		iConst168 = iConst105;
		fConst169 = 0.5f * fConst34;
		fConst170 = 0.5f * fConst35;
		int iConst171 = int(std::floor(0.00100000005f * fConst0)) % 2;
		iConst172 = iConst171;
		int iConst173 = int(std::floor(0.000500000024f * fConst0)) % 2;
		iConst174 = iConst173;
		int iConst175 = int(std::floor(0.000250000012f * fConst0)) % 2;
		iConst176 = iConst175;
		int iConst177 = iConst171 + 2 * iConst173;
		iConst178 = iConst177;
		int iConst179 = int(std::floor(0.000125000006f * fConst0)) % 2;
		iConst180 = iConst179;
		int iConst181 = iConst177 + 4 * iConst175;
		iConst182 = iConst181;
		int iConst183 = int(std::floor(6.2500003e-05f * fConst0)) % 2;
		iConst184 = iConst183;
		int iConst185 = iConst181 + 8 * iConst179;
		iConst186 = iConst185;
		int iConst187 = int(std::floor(3.12500015e-05f * fConst0)) % 2;
		iConst188 = iConst187;
		int iConst189 = iConst185 + 16 * iConst183;
		iConst190 = iConst189;
		int iConst191 = int(std::floor(1.56250007e-05f * fConst0)) % 2;
		iConst192 = iConst191;
		int iConst193 = iConst189 + 32 * iConst187;
		iConst194 = iConst193;
		iConst195 = int(std::floor(7.81250037e-06f * fConst0)) % 2;
		iConst196 = iConst193 + 64 * iConst191;
		fConst197 = std::exp(0.0f - 2.0f / fConst0);
		fConst198 = std::exp(0.0f - 100.0f / fConst0);
		iConst199 = int(std::min<float>(48000.0f, std::max<float>(0.0f, 0.100000001f * fConst0)));
		float fConst200 = std::tan(249.119644f / fConst0);
		float fConst201 = 1.0f / fConst200;
		float fConst202 = (fConst201 + 0.333333343f) / fConst200 + 1.0f;
		fConst203 = 1.0f / (fConst200 * fConst202);
		fConst204 = 1.0f / fConst202;
		fConst205 = (fConst201 + -0.333333343f) / fConst200 + 1.0f;
		fConst206 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst200));
		fConst207 = 0.0f - fConst203;
		float fConst208 = std::tan(329.241669f / fConst0);
		float fConst209 = 1.0f / fConst208;
		float fConst210 = (fConst209 + 0.333333343f) / fConst208 + 1.0f;
		fConst211 = 1.0f / (fConst208 * fConst210);
		fConst212 = 1.0f / fConst210;
		fConst213 = (fConst209 + -0.333333343f) / fConst208 + 1.0f;
		fConst214 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst208));
		fConst215 = 0.0f - fConst211;
		float fConst216 = std::tan(435.132629f / fConst0);
		float fConst217 = 1.0f / fConst216;
		float fConst218 = (fConst217 + 0.333333343f) / fConst216 + 1.0f;
		fConst219 = 1.0f / (fConst216 * fConst218);
		fConst220 = 1.0f / fConst218;
		fConst221 = (fConst217 + -0.333333343f) / fConst216 + 1.0f;
		fConst222 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst216));
		fConst223 = 0.0f - fConst219;
		float fConst224 = std::tan(575.080322f / fConst0);
		float fConst225 = 1.0f / fConst224;
		float fConst226 = (fConst225 + 0.333333343f) / fConst224 + 1.0f;
		fConst227 = 1.0f / (fConst224 * fConst226);
		fConst228 = 1.0f / fConst226;
		fConst229 = (fConst225 + -0.333333343f) / fConst224 + 1.0f;
		fConst230 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst224));
		fConst231 = 0.0f - fConst227;
		float fConst232 = std::tan(760.038025f / fConst0);
		float fConst233 = 1.0f / fConst232;
		float fConst234 = (fConst233 + 0.333333343f) / fConst232 + 1.0f;
		fConst235 = 1.0f / (fConst232 * fConst234);
		fConst236 = 1.0f / fConst234;
		fConst237 = (fConst233 + -0.333333343f) / fConst232 + 1.0f;
		fConst238 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst232));
		fConst239 = 0.0f - fConst235;
		float fConst240 = std::tan(1004.48206f / fConst0);
		float fConst241 = 1.0f / fConst240;
		float fConst242 = (fConst241 + 0.333333343f) / fConst240 + 1.0f;
		fConst243 = 1.0f / (fConst240 * fConst242);
		fConst244 = 1.0f / fConst242;
		fConst245 = (fConst241 + -0.333333343f) / fConst240 + 1.0f;
		fConst246 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst240));
		fConst247 = 0.0f - fConst243;
		float fConst248 = std::tan(1327.54431f / fConst0);
		float fConst249 = 1.0f / fConst248;
		float fConst250 = (fConst249 + 0.333333343f) / fConst248 + 1.0f;
		fConst251 = 1.0f / (fConst248 * fConst250);
		fConst252 = 1.0f / fConst250;
		fConst253 = (fConst249 + -0.333333343f) / fConst248 + 1.0f;
		fConst254 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst248));
		fConst255 = 0.0f - fConst251;
		float fConst256 = std::tan(1754.51001f / fConst0);
		float fConst257 = 1.0f / fConst256;
		float fConst258 = (fConst257 + 0.333333343f) / fConst256 + 1.0f;
		fConst259 = 1.0f / (fConst256 * fConst258);
		fConst260 = 1.0f / fConst258;
		fConst261 = (fConst257 + -0.333333343f) / fConst256 + 1.0f;
		fConst262 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst256));
		fConst263 = 0.0f - fConst259;
		float fConst264 = std::tan(2318.79688f / fConst0);
		float fConst265 = 1.0f / fConst264;
		float fConst266 = (fConst265 + 0.333333343f) / fConst264 + 1.0f;
		fConst267 = 1.0f / (fConst264 * fConst266);
		fConst268 = 1.0f / fConst266;
		fConst269 = (fConst265 + -0.333333343f) / fConst264 + 1.0f;
		fConst270 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst264));
		fConst271 = 0.0f - fConst267;
		float fConst272 = std::tan(3064.57007f / fConst0);
		float fConst273 = 1.0f / fConst272;
		float fConst274 = (fConst273 + 0.333333343f) / fConst272 + 1.0f;
		fConst275 = 1.0f / (fConst272 * fConst274);
		fConst276 = 1.0f / fConst274;
		fConst277 = (fConst273 + -0.333333343f) / fConst272 + 1.0f;
		fConst278 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst272));
		fConst279 = 0.0f - fConst275;
		float fConst280 = std::tan(4050.19922f / fConst0);
		float fConst281 = 1.0f / fConst280;
		float fConst282 = (fConst281 + 0.333333343f) / fConst280 + 1.0f;
		fConst283 = 1.0f / (fConst280 * fConst282);
		fConst284 = 1.0f / fConst282;
		fConst285 = (fConst281 + -0.333333343f) / fConst280 + 1.0f;
		fConst286 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst280));
		fConst287 = 0.0f - fConst283;
		float fConst288 = std::tan(5352.82715f / fConst0);
		float fConst289 = 1.0f / fConst288;
		float fConst290 = (fConst289 + 0.333333343f) / fConst288 + 1.0f;
		fConst291 = 1.0f / (fConst288 * fConst290);
		fConst292 = 1.0f / fConst290;
		fConst293 = (fConst289 + -0.333333343f) / fConst288 + 1.0f;
		fConst294 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst288));
		fConst295 = 0.0f - fConst291;
		float fConst296 = std::tan(7074.40723f / fConst0);
		float fConst297 = 1.0f / fConst296;
		float fConst298 = (fConst297 + 0.333333343f) / fConst296 + 1.0f;
		fConst299 = 1.0f / (fConst296 * fConst298);
		fConst300 = 1.0f / fConst298;
		fConst301 = (fConst297 + -0.333333343f) / fConst296 + 1.0f;
		fConst302 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst296));
		fConst303 = 0.0f - fConst299;
		float fConst304 = std::tan(9349.68359f / fConst0);
		float fConst305 = 1.0f / fConst304;
		float fConst306 = (fConst305 + 0.333333343f) / fConst304 + 1.0f;
		fConst307 = 1.0f / (fConst304 * fConst306);
		fConst308 = 1.0f / fConst306;
		fConst309 = (fConst305 + -0.333333343f) / fConst304 + 1.0f;
		fConst310 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst304));
		fConst311 = 0.0f - fConst307;
		float fConst312 = std::tan(12356.7354f / fConst0);
		float fConst313 = 1.0f / fConst312;
		float fConst314 = (fConst313 + 0.333333343f) / fConst312 + 1.0f;
		fConst315 = 1.0f / (fConst312 * fConst314);
		fConst316 = 1.0f / fConst314;
		fConst317 = (fConst313 + -0.333333343f) / fConst312 + 1.0f;
		fConst318 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst312));
		fConst319 = 0.0f - fConst315;
		float fConst320 = std::tan(16330.918f / fConst0);
		float fConst321 = 1.0f / fConst320;
		float fConst322 = (fConst321 + 0.333333343f) / fConst320 + 1.0f;
		fConst323 = 1.0f / (fConst320 * fConst322);
		fConst324 = 1.0f / fConst322;
		fConst325 = (fConst321 + -0.333333343f) / fConst320 + 1.0f;
		fConst326 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst320));
		fConst327 = 0.0f - fConst323;
		float fConst328 = std::tan(21583.2793f / fConst0);
		float fConst329 = 1.0f / fConst328;
		float fConst330 = (fConst329 + 0.333333343f) / fConst328 + 1.0f;
		fConst331 = 1.0f / (fConst328 * fConst330);
		fConst332 = 1.0f / fConst330;
		fConst333 = (fConst329 + -0.333333343f) / fConst328 + 1.0f;
		fConst334 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst328));
		fConst335 = 0.0f - fConst331;
		float fConst336 = std::tan(28524.9102f / fConst0);
		float fConst337 = 1.0f / fConst336;
		float fConst338 = (fConst337 + 0.333333343f) / fConst336 + 1.0f;
		fConst339 = 1.0f / (fConst336 * fConst338);
		fConst340 = 1.0f / fConst338;
		fConst341 = (fConst337 + -0.333333343f) / fConst336 + 1.0f;
		fConst342 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst336));
		fConst343 = 0.0f - fConst339;
		float fConst344 = std::tan(37699.1133f / fConst0);
		float fConst345 = 1.0f / fConst344;
		float fConst346 = (fConst345 + 0.333333343f) / fConst344 + 1.0f;
		fConst347 = 1.0f / (fConst344 * fConst346);
		fConst348 = 1.0f / fConst346;
		fConst349 = (fConst345 + -0.333333343f) / fConst344 + 1.0f;
		fConst350 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst344));
		fConst351 = 0.0f - fConst347;
		fConst352 = std::tan(21991.1484f / fConst0);
		float fConst353 = 1.0f / fConst352;
		fConst354 = 1.0f / ((fConst353 + 0.517638087f) / fConst352 + 1.0f);
		float fConst355 = mydsp_faustpower2_f(fConst352);
		fConst356 = 1.0f / fConst355;
		fConst357 = 1.0f / ((fConst353 + 1.41421354f) / fConst352 + 1.0f);
		fConst358 = 1.0f / ((fConst353 + 1.93185163f) / fConst352 + 1.0f);
		fConst359 = (fConst353 + -1.93185163f) / fConst352 + 1.0f;
		fConst360 = 2.0f * (1.0f - fConst356);
		fConst361 = 0.0f - 2.0f / fConst355;
		fConst362 = (fConst353 + -1.41421354f) / fConst352 + 1.0f;
		fConst363 = (fConst353 + -0.517638087f) / fConst352 + 1.0f;
		fConst364 = 1.0f / fConst0;
		fConst365 = std::tan(5335.99268f / fConst0);
		float fConst366 = 1.0f / fConst365;
		fConst367 = 1.0f / ((fConst366 + 0.517638087f) / fConst365 + 1.0f);
		float fConst368 = mydsp_faustpower2_f(fConst365);
		fConst369 = 1.0f / fConst368;
		fConst370 = 1.0f / ((fConst366 + 1.41421354f) / fConst365 + 1.0f);
		fConst371 = 1.0f / ((fConst366 + 1.93185163f) / fConst365 + 1.0f);
		fConst372 = (fConst366 + -1.93185163f) / fConst365 + 1.0f;
		fConst373 = 2.0f * (1.0f - fConst369);
		fConst374 = 0.0f - 2.0f / fConst368;
		fConst375 = (fConst366 + -1.41421354f) / fConst365 + 1.0f;
		fConst376 = (fConst366 + -0.517638087f) / fConst365 + 1.0f;
		fConst377 = std::tan(1294.73999f / fConst0);
		float fConst378 = 1.0f / fConst377;
		fConst379 = 1.0f / ((fConst378 + 0.517638087f) / fConst377 + 1.0f);
		float fConst380 = mydsp_faustpower2_f(fConst377);
		fConst381 = 1.0f / fConst380;
		fConst382 = 1.0f / ((fConst378 + 1.41421354f) / fConst377 + 1.0f);
		fConst383 = 1.0f / ((fConst378 + 1.93185163f) / fConst377 + 1.0f);
		fConst384 = (fConst378 + -1.93185163f) / fConst377 + 1.0f;
		fConst385 = 2.0f * (1.0f - fConst381);
		fConst386 = 0.0f - 2.0f / fConst380;
		fConst387 = (fConst378 + -1.41421354f) / fConst377 + 1.0f;
		fConst388 = (fConst378 + -0.517638087f) / fConst377 + 1.0f;
		fConst389 = std::tan(314.159271f / fConst0);
		float fConst390 = 1.0f / fConst389;
		fConst391 = 1.0f / ((fConst390 + 0.517638087f) / fConst389 + 1.0f);
		float fConst392 = mydsp_faustpower2_f(fConst389);
		fConst393 = 1.0f / fConst392;
		fConst394 = 1.0f / ((fConst390 + 1.41421354f) / fConst389 + 1.0f);
		fConst395 = 1.0f / ((fConst390 + 1.93185163f) / fConst389 + 1.0f);
		fConst396 = (fConst390 + -1.93185163f) / fConst389 + 1.0f;
		fConst397 = 2.0f * (1.0f - fConst393);
		fConst398 = 0.0f - 2.0f / fConst392;
		fConst399 = (fConst390 + -1.41421354f) / fConst389 + 1.0f;
		fConst400 = (fConst390 + -0.517638087f) / fConst389 + 1.0f;
		fConst401 = 1.0f - fConst21;
		iConst402 = int(fConst23);
		float fConst403 = std::rint(0.400000006f * fConst0);
		fConst404 = 1.0f / std::max<float>(fConst403, 1.1920929e-07f);
		iConst405 = int(std::floor(1.52587891e-05f * fConst403)) % 2;
		int iConst406 = int(std::floor(fConst403)) % 2;
		int iConst407 = int(std::floor(0.5f * fConst403)) % 2;
		int iConst408 = iConst406 + 2 * iConst407;
		int iConst409 = int(std::floor(0.25f * fConst403)) % 2;
		int iConst410 = iConst408 + 4 * iConst409;
		int iConst411 = int(std::floor(0.125f * fConst403)) % 2;
		int iConst412 = iConst410 + 8 * iConst411;
		int iConst413 = int(std::floor(0.0625f * fConst403)) % 2;
		int iConst414 = iConst412 + 16 * iConst413;
		int iConst415 = int(std::floor(0.03125f * fConst403)) % 2;
		int iConst416 = iConst414 + 32 * iConst415;
		int iConst417 = int(std::floor(0.015625f * fConst403)) % 2;
		int iConst418 = iConst416 + 64 * iConst417;
		int iConst419 = int(std::floor(0.0078125f * fConst403)) % 2;
		int iConst420 = iConst418 + 128 * iConst419;
		int iConst421 = int(std::floor(0.00390625f * fConst403)) % 2;
		int iConst422 = iConst420 + 256 * iConst421;
		int iConst423 = int(std::floor(0.001953125f * fConst403)) % 2;
		int iConst424 = iConst422 + 512 * iConst423;
		int iConst425 = int(std::floor(0.0009765625f * fConst403)) % 2;
		int iConst426 = iConst424 + 1024 * iConst425;
		int iConst427 = int(std::floor(0.00048828125f * fConst403)) % 2;
		int iConst428 = iConst426 + 2048 * iConst427;
		int iConst429 = int(std::floor(0.000244140625f * fConst403)) % 2;
		int iConst430 = iConst428 + 4096 * iConst429;
		int iConst431 = int(std::floor(0.000122070312f * fConst403)) % 2;
		int iConst432 = iConst430 + 8192 * iConst431;
		int iConst433 = int(std::floor(6.10351562e-05f * fConst403)) % 2;
		int iConst434 = iConst432 + 16384 * iConst433;
		int iConst435 = int(std::floor(3.05175781e-05f * fConst403)) % 2;
		iConst436 = iConst434 + 32768 * iConst435;
		iConst437 = iConst435;
		iConst438 = iConst434;
		iConst439 = iConst433;
		iConst440 = iConst432;
		iConst441 = iConst431;
		iConst442 = iConst430;
		iConst443 = iConst429;
		iConst444 = iConst428;
		iConst445 = iConst427;
		iConst446 = iConst426;
		iConst447 = iConst425;
		iConst448 = iConst424;
		iConst449 = iConst423;
		iConst450 = iConst422;
		iConst451 = iConst421;
		iConst452 = iConst420;
		iConst453 = iConst419;
		iConst454 = iConst418;
		iConst455 = iConst417;
		iConst456 = iConst416;
		iConst457 = iConst415;
		iConst458 = iConst414;
		iConst459 = iConst413;
		iConst460 = iConst412;
		iConst461 = iConst411;
		iConst462 = iConst410;
		iConst463 = iConst409;
		iConst464 = iConst408;
		iConst465 = iConst406;
		iConst466 = iConst407;
	}
	
	FAUSTPP_VIRTUAL void instanceResetUserInterface() {
		fCheckbox0 = FAUSTFLOAT(0.0f);
		fVslider0 = FAUSTFLOAT(-18.0f);
		fCheckbox1 = FAUSTFLOAT(0.0f);
		fVslider1 = FAUSTFLOAT(0.0f);
		fCheckbox2 = FAUSTFLOAT(0.0f);
		fVslider2 = FAUSTFLOAT(0.5f);
		fCheckbox3 = FAUSTFLOAT(0.0f);
		fVslider3 = FAUSTFLOAT(0.5f);
	}
	
	FAUSTPP_VIRTUAL void instanceClear() {
		for (int l0 = 0; l0 < 2; l0 = l0 + 1) {
			fRec4[l0] = 0.0f;
		}
		for (int l1 = 0; l1 < 2; l1 = l1 + 1) {
			fVec0[l1] = 0.0f;
		}
		for (int l2 = 0; l2 < 3; l2 = l2 + 1) {
			fVec1[l2] = 0.0f;
		}
		for (int l3 = 0; l3 < 7; l3 = l3 + 1) {
			fVec2[l3] = 0.0f;
		}
		for (int l4 = 0; l4 < 15; l4 = l4 + 1) {
			fVec3[l4] = 0.0f;
		}
		IOTA0 = 0;
		for (int l5 = 0; l5 < 32; l5 = l5 + 1) {
			fVec4[l5] = 0.0f;
		}
		for (int l6 = 0; l6 < 2; l6 = l6 + 1) {
			fRec15[l6] = 0.0f;
		}
		for (int l7 = 0; l7 < 2; l7 = l7 + 1) {
			fVec5[l7] = 0.0f;
		}
		for (int l8 = 0; l8 < 2; l8 = l8 + 1) {
			fRec19[l8] = 0.0f;
		}
		for (int l9 = 0; l9 < 2; l9 = l9 + 1) {
			fRec18[l9] = 0.0f;
		}
		for (int l10 = 0; l10 < 2; l10 = l10 + 1) {
			fVec6[l10] = 0.0f;
		}
		for (int l11 = 0; l11 < 2; l11 = l11 + 1) {
			fRec17[l11] = 0.0f;
		}
		for (int l12 = 0; l12 < 2; l12 = l12 + 1) {
			fRec16[l12] = 0.0f;
		}
		for (int l13 = 0; l13 < 2; l13 = l13 + 1) {
			fVec7[l13] = 0.0f;
		}
		for (int l14 = 0; l14 < 3; l14 = l14 + 1) {
			fVec8[l14] = 0.0f;
		}
		for (int l15 = 0; l15 < 7; l15 = l15 + 1) {
			fVec9[l15] = 0.0f;
		}
		for (int l16 = 0; l16 < 15; l16 = l16 + 1) {
			fVec10[l16] = 0.0f;
		}
		for (int l17 = 0; l17 < 32; l17 = l17 + 1) {
			fVec11[l17] = 0.0f;
		}
		for (int l18 = 0; l18 < 64; l18 = l18 + 1) {
			fVec12[l18] = 0.0f;
		}
		for (int l19 = 0; l19 < 128; l19 = l19 + 1) {
			fVec13[l19] = 0.0f;
		}
		for (int l20 = 0; l20 < 256; l20 = l20 + 1) {
			fVec14[l20] = 0.0f;
		}
		for (int l21 = 0; l21 < 512; l21 = l21 + 1) {
			fVec15[l21] = 0.0f;
		}
		for (int l22 = 0; l22 < 1024; l22 = l22 + 1) {
			fVec16[l22] = 0.0f;
		}
		for (int l23 = 0; l23 < 2048; l23 = l23 + 1) {
			fVec17[l23] = 0.0f;
		}
		for (int l24 = 0; l24 < 2; l24 = l24 + 1) {
			fVec18[l24] = 0.0f;
		}
		for (int l25 = 0; l25 < 2; l25 = l25 + 1) {
			fRec23[l25] = 0.0f;
		}
		for (int l26 = 0; l26 < 2; l26 = l26 + 1) {
			fRec22[l26] = 0.0f;
		}
		for (int l27 = 0; l27 < 2; l27 = l27 + 1) {
			fVec19[l27] = 0.0f;
		}
		for (int l28 = 0; l28 < 2; l28 = l28 + 1) {
			fRec21[l28] = 0.0f;
		}
		for (int l29 = 0; l29 < 2; l29 = l29 + 1) {
			fRec20[l29] = 0.0f;
		}
		for (int l30 = 0; l30 < 2; l30 = l30 + 1) {
			fVec20[l30] = 0.0f;
		}
		for (int l31 = 0; l31 < 3; l31 = l31 + 1) {
			fVec21[l31] = 0.0f;
		}
		for (int l32 = 0; l32 < 7; l32 = l32 + 1) {
			fVec22[l32] = 0.0f;
		}
		for (int l33 = 0; l33 < 15; l33 = l33 + 1) {
			fVec23[l33] = 0.0f;
		}
		for (int l34 = 0; l34 < 32; l34 = l34 + 1) {
			fVec24[l34] = 0.0f;
		}
		for (int l35 = 0; l35 < 64; l35 = l35 + 1) {
			fVec25[l35] = 0.0f;
		}
		for (int l36 = 0; l36 < 128; l36 = l36 + 1) {
			fVec26[l36] = 0.0f;
		}
		for (int l37 = 0; l37 < 256; l37 = l37 + 1) {
			fVec27[l37] = 0.0f;
		}
		for (int l38 = 0; l38 < 512; l38 = l38 + 1) {
			fVec28[l38] = 0.0f;
		}
		for (int l39 = 0; l39 < 1024; l39 = l39 + 1) {
			fVec29[l39] = 0.0f;
		}
		for (int l40 = 0; l40 < 2048; l40 = l40 + 1) {
			fVec30[l40] = 0.0f;
		}
		for (int l41 = 0; l41 < 2; l41 = l41 + 1) {
			fRec10[l41] = 0.0f;
		}
		for (int l42 = 0; l42 < 2; l42 = l42 + 1) {
			fRec11[l42] = 0.0f;
		}
		for (int l43 = 0; l43 < 2; l43 = l43 + 1) {
			fRec8[l43] = 0.0f;
		}
		for (int l44 = 0; l44 < 2; l44 = l44 + 1) {
			fRec7[l44] = 0.0f;
		}
		for (int l45 = 0; l45 < 2; l45 = l45 + 1) {
			fRec24[l45] = 0.0f;
		}
		for (int l46 = 0; l46 < 2; l46 = l46 + 1) {
			fRec25[l46] = 0.0f;
		}
		for (int l47 = 0; l47 < 2; l47 = l47 + 1) {
			fRec26[l47] = 0.0f;
		}
		for (int l48 = 0; l48 < 3; l48 = l48 + 1) {
			fRec28[l48] = 0.0f;
		}
		for (int l49 = 0; l49 < 3; l49 = l49 + 1) {
			fRec27[l49] = 0.0f;
		}
		for (int l50 = 0; l50 < 3; l50 = l50 + 1) {
			fRec35[l50] = 0.0f;
		}
		for (int l51 = 0; l51 < 3; l51 = l51 + 1) {
			fRec34[l51] = 0.0f;
		}
		for (int l52 = 0; l52 < 2; l52 = l52 + 1) {
			fVec31[l52] = 0.0f;
		}
		for (int l53 = 0; l53 < 3; l53 = l53 + 1) {
			fRec33[l53] = 0.0f;
		}
		for (int l54 = 0; l54 < 32768; l54 = l54 + 1) {
			fVec32[l54] = 0.0f;
		}
		for (int l55 = 0; l55 < 2; l55 = l55 + 1) {
			fVec33[l55] = 0.0f;
		}
		for (int l56 = 0; l56 < 2; l56 = l56 + 1) {
			fRec32[l56] = 0.0f;
		}
		for (int l57 = 0; l57 < 2; l57 = l57 + 1) {
			fRec31[l57] = 0.0f;
		}
		for (int l58 = 0; l58 < 2; l58 = l58 + 1) {
			fVec34[l58] = 0.0f;
		}
		for (int l59 = 0; l59 < 2; l59 = l59 + 1) {
			fRec30[l59] = 0.0f;
		}
		for (int l60 = 0; l60 < 2; l60 = l60 + 1) {
			fRec29[l60] = 0.0f;
		}
		for (int l61 = 0; l61 < 2; l61 = l61 + 1) {
			fVec35[l61] = 0.0f;
		}
		for (int l62 = 0; l62 < 3; l62 = l62 + 1) {
			fVec36[l62] = 0.0f;
		}
		for (int l63 = 0; l63 < 7; l63 = l63 + 1) {
			fVec37[l63] = 0.0f;
		}
		for (int l64 = 0; l64 < 15; l64 = l64 + 1) {
			fVec38[l64] = 0.0f;
		}
		for (int l65 = 0; l65 < 32; l65 = l65 + 1) {
			fVec39[l65] = 0.0f;
		}
		for (int l66 = 0; l66 < 64; l66 = l66 + 1) {
			fVec40[l66] = 0.0f;
		}
		for (int l67 = 0; l67 < 128; l67 = l67 + 1) {
			fVec41[l67] = 0.0f;
		}
		for (int l68 = 0; l68 < 256; l68 = l68 + 1) {
			fVec42[l68] = 0.0f;
		}
		for (int l69 = 0; l69 < 512; l69 = l69 + 1) {
			fVec43[l69] = 0.0f;
		}
		for (int l70 = 0; l70 < 1024; l70 = l70 + 1) {
			fVec44[l70] = 0.0f;
		}
		for (int l71 = 0; l71 < 2048; l71 = l71 + 1) {
			fVec45[l71] = 0.0f;
		}
		for (int l72 = 0; l72 < 4096; l72 = l72 + 1) {
			fVec46[l72] = 0.0f;
		}
		for (int l73 = 0; l73 < 8192; l73 = l73 + 1) {
			fVec47[l73] = 0.0f;
		}
		for (int l74 = 0; l74 < 16384; l74 = l74 + 1) {
			fVec48[l74] = 0.0f;
		}
		for (int l75 = 0; l75 < 32768; l75 = l75 + 1) {
			fVec49[l75] = 0.0f;
		}
		for (int l76 = 0; l76 < 65536; l76 = l76 + 1) {
			fVec50[l76] = 0.0f;
		}
		for (int l77 = 0; l77 < 131072; l77 = l77 + 1) {
			fVec51[l77] = 0.0f;
		}
		for (int l78 = 0; l78 < 262144; l78 = l78 + 1) {
			fVec52[l78] = 0.0f;
		}
		for (int l79 = 0; l79 < 2; l79 = l79 + 1) {
			fVec53[l79] = 0.0f;
		}
		for (int l80 = 0; l80 < 2; l80 = l80 + 1) {
			fRec39[l80] = 0.0f;
		}
		for (int l81 = 0; l81 < 2; l81 = l81 + 1) {
			fRec38[l81] = 0.0f;
		}
		for (int l82 = 0; l82 < 2; l82 = l82 + 1) {
			fVec54[l82] = 0.0f;
		}
		for (int l83 = 0; l83 < 2; l83 = l83 + 1) {
			fRec37[l83] = 0.0f;
		}
		for (int l84 = 0; l84 < 2; l84 = l84 + 1) {
			fRec36[l84] = 0.0f;
		}
		for (int l85 = 0; l85 < 2; l85 = l85 + 1) {
			fVec55[l85] = 0.0f;
		}
		for (int l86 = 0; l86 < 3; l86 = l86 + 1) {
			fVec56[l86] = 0.0f;
		}
		for (int l87 = 0; l87 < 7; l87 = l87 + 1) {
			fVec57[l87] = 0.0f;
		}
		for (int l88 = 0; l88 < 15; l88 = l88 + 1) {
			fVec58[l88] = 0.0f;
		}
		for (int l89 = 0; l89 < 32; l89 = l89 + 1) {
			fVec59[l89] = 0.0f;
		}
		for (int l90 = 0; l90 < 64; l90 = l90 + 1) {
			fVec60[l90] = 0.0f;
		}
		for (int l91 = 0; l91 < 128; l91 = l91 + 1) {
			fVec61[l91] = 0.0f;
		}
		for (int l92 = 0; l92 < 256; l92 = l92 + 1) {
			fVec62[l92] = 0.0f;
		}
		for (int l93 = 0; l93 < 512; l93 = l93 + 1) {
			fVec63[l93] = 0.0f;
		}
		for (int l94 = 0; l94 < 1024; l94 = l94 + 1) {
			fVec64[l94] = 0.0f;
		}
		for (int l95 = 0; l95 < 2048; l95 = l95 + 1) {
			fVec65[l95] = 0.0f;
		}
		for (int l96 = 0; l96 < 4096; l96 = l96 + 1) {
			fVec66[l96] = 0.0f;
		}
		for (int l97 = 0; l97 < 8192; l97 = l97 + 1) {
			fVec67[l97] = 0.0f;
		}
		for (int l98 = 0; l98 < 16384; l98 = l98 + 1) {
			fVec68[l98] = 0.0f;
		}
		for (int l99 = 0; l99 < 32768; l99 = l99 + 1) {
			fVec69[l99] = 0.0f;
		}
		for (int l100 = 0; l100 < 65536; l100 = l100 + 1) {
			fVec70[l100] = 0.0f;
		}
		for (int l101 = 0; l101 < 131072; l101 = l101 + 1) {
			fVec71[l101] = 0.0f;
		}
		for (int l102 = 0; l102 < 262144; l102 = l102 + 1) {
			fVec72[l102] = 0.0f;
		}
		for (int l103 = 0; l103 < 2; l103 = l103 + 1) {
			fVec73[l103] = 0.0f;
		}
		for (int l104 = 0; l104 < 3; l104 = l104 + 1) {
			fVec74[l104] = 0.0f;
		}
		for (int l105 = 0; l105 < 7; l105 = l105 + 1) {
			fVec75[l105] = 0.0f;
		}
		for (int l106 = 0; l106 < 15; l106 = l106 + 1) {
			fVec76[l106] = 0.0f;
		}
		for (int l107 = 0; l107 < 32; l107 = l107 + 1) {
			fVec77[l107] = 0.0f;
		}
		for (int l108 = 0; l108 < 64; l108 = l108 + 1) {
			fVec78[l108] = 0.0f;
		}
		for (int l109 = 0; l109 < 128; l109 = l109 + 1) {
			fVec79[l109] = 0.0f;
		}
		for (int l110 = 0; l110 < 256; l110 = l110 + 1) {
			fVec80[l110] = 0.0f;
		}
		for (int l111 = 0; l111 < 2; l111 = l111 + 1) {
			fRec40[l111] = 0.0f;
		}
		for (int l112 = 0; l112 < 3; l112 = l112 + 1) {
			fRec45[l112] = 0.0f;
		}
		for (int l113 = 0; l113 < 32768; l113 = l113 + 1) {
			fVec81[l113] = 0.0f;
		}
		for (int l114 = 0; l114 < 2; l114 = l114 + 1) {
			fVec82[l114] = 0.0f;
		}
		for (int l115 = 0; l115 < 2; l115 = l115 + 1) {
			fRec44[l115] = 0.0f;
		}
		for (int l116 = 0; l116 < 2; l116 = l116 + 1) {
			fRec43[l116] = 0.0f;
		}
		for (int l117 = 0; l117 < 2; l117 = l117 + 1) {
			fVec83[l117] = 0.0f;
		}
		for (int l118 = 0; l118 < 2; l118 = l118 + 1) {
			fRec42[l118] = 0.0f;
		}
		for (int l119 = 0; l119 < 2; l119 = l119 + 1) {
			fRec41[l119] = 0.0f;
		}
		for (int l120 = 0; l120 < 2; l120 = l120 + 1) {
			fVec84[l120] = 0.0f;
		}
		for (int l121 = 0; l121 < 3; l121 = l121 + 1) {
			fVec85[l121] = 0.0f;
		}
		for (int l122 = 0; l122 < 7; l122 = l122 + 1) {
			fVec86[l122] = 0.0f;
		}
		for (int l123 = 0; l123 < 15; l123 = l123 + 1) {
			fVec87[l123] = 0.0f;
		}
		for (int l124 = 0; l124 < 32; l124 = l124 + 1) {
			fVec88[l124] = 0.0f;
		}
		for (int l125 = 0; l125 < 64; l125 = l125 + 1) {
			fVec89[l125] = 0.0f;
		}
		for (int l126 = 0; l126 < 128; l126 = l126 + 1) {
			fVec90[l126] = 0.0f;
		}
		for (int l127 = 0; l127 < 256; l127 = l127 + 1) {
			fVec91[l127] = 0.0f;
		}
		for (int l128 = 0; l128 < 512; l128 = l128 + 1) {
			fVec92[l128] = 0.0f;
		}
		for (int l129 = 0; l129 < 1024; l129 = l129 + 1) {
			fVec93[l129] = 0.0f;
		}
		for (int l130 = 0; l130 < 2048; l130 = l130 + 1) {
			fVec94[l130] = 0.0f;
		}
		for (int l131 = 0; l131 < 4096; l131 = l131 + 1) {
			fVec95[l131] = 0.0f;
		}
		for (int l132 = 0; l132 < 8192; l132 = l132 + 1) {
			fVec96[l132] = 0.0f;
		}
		for (int l133 = 0; l133 < 16384; l133 = l133 + 1) {
			fVec97[l133] = 0.0f;
		}
		for (int l134 = 0; l134 < 32768; l134 = l134 + 1) {
			fVec98[l134] = 0.0f;
		}
		for (int l135 = 0; l135 < 65536; l135 = l135 + 1) {
			fVec99[l135] = 0.0f;
		}
		for (int l136 = 0; l136 < 131072; l136 = l136 + 1) {
			fVec100[l136] = 0.0f;
		}
		for (int l137 = 0; l137 < 262144; l137 = l137 + 1) {
			fVec101[l137] = 0.0f;
		}
		for (int l138 = 0; l138 < 3; l138 = l138 + 1) {
			fRec50[l138] = 0.0f;
		}
		for (int l139 = 0; l139 < 32768; l139 = l139 + 1) {
			fVec102[l139] = 0.0f;
		}
		for (int l140 = 0; l140 < 2; l140 = l140 + 1) {
			fVec103[l140] = 0.0f;
		}
		for (int l141 = 0; l141 < 2; l141 = l141 + 1) {
			fRec49[l141] = 0.0f;
		}
		for (int l142 = 0; l142 < 2; l142 = l142 + 1) {
			fRec48[l142] = 0.0f;
		}
		for (int l143 = 0; l143 < 2; l143 = l143 + 1) {
			fVec104[l143] = 0.0f;
		}
		for (int l144 = 0; l144 < 2; l144 = l144 + 1) {
			fRec47[l144] = 0.0f;
		}
		for (int l145 = 0; l145 < 2; l145 = l145 + 1) {
			fRec46[l145] = 0.0f;
		}
		for (int l146 = 0; l146 < 2; l146 = l146 + 1) {
			fVec105[l146] = 0.0f;
		}
		for (int l147 = 0; l147 < 3; l147 = l147 + 1) {
			fVec106[l147] = 0.0f;
		}
		for (int l148 = 0; l148 < 7; l148 = l148 + 1) {
			fVec107[l148] = 0.0f;
		}
		for (int l149 = 0; l149 < 15; l149 = l149 + 1) {
			fVec108[l149] = 0.0f;
		}
		for (int l150 = 0; l150 < 32; l150 = l150 + 1) {
			fVec109[l150] = 0.0f;
		}
		for (int l151 = 0; l151 < 64; l151 = l151 + 1) {
			fVec110[l151] = 0.0f;
		}
		for (int l152 = 0; l152 < 128; l152 = l152 + 1) {
			fVec111[l152] = 0.0f;
		}
		for (int l153 = 0; l153 < 256; l153 = l153 + 1) {
			fVec112[l153] = 0.0f;
		}
		for (int l154 = 0; l154 < 512; l154 = l154 + 1) {
			fVec113[l154] = 0.0f;
		}
		for (int l155 = 0; l155 < 1024; l155 = l155 + 1) {
			fVec114[l155] = 0.0f;
		}
		for (int l156 = 0; l156 < 2048; l156 = l156 + 1) {
			fVec115[l156] = 0.0f;
		}
		for (int l157 = 0; l157 < 4096; l157 = l157 + 1) {
			fVec116[l157] = 0.0f;
		}
		for (int l158 = 0; l158 < 8192; l158 = l158 + 1) {
			fVec117[l158] = 0.0f;
		}
		for (int l159 = 0; l159 < 16384; l159 = l159 + 1) {
			fVec118[l159] = 0.0f;
		}
		for (int l160 = 0; l160 < 32768; l160 = l160 + 1) {
			fVec119[l160] = 0.0f;
		}
		for (int l161 = 0; l161 < 65536; l161 = l161 + 1) {
			fVec120[l161] = 0.0f;
		}
		for (int l162 = 0; l162 < 131072; l162 = l162 + 1) {
			fVec121[l162] = 0.0f;
		}
		for (int l163 = 0; l163 < 262144; l163 = l163 + 1) {
			fVec122[l163] = 0.0f;
		}
		for (int l164 = 0; l164 < 3; l164 = l164 + 1) {
			fRec55[l164] = 0.0f;
		}
		for (int l165 = 0; l165 < 32768; l165 = l165 + 1) {
			fVec123[l165] = 0.0f;
		}
		for (int l166 = 0; l166 < 2; l166 = l166 + 1) {
			fVec124[l166] = 0.0f;
		}
		for (int l167 = 0; l167 < 2; l167 = l167 + 1) {
			fRec54[l167] = 0.0f;
		}
		for (int l168 = 0; l168 < 2; l168 = l168 + 1) {
			fRec53[l168] = 0.0f;
		}
		for (int l169 = 0; l169 < 2; l169 = l169 + 1) {
			fVec125[l169] = 0.0f;
		}
		for (int l170 = 0; l170 < 2; l170 = l170 + 1) {
			fRec52[l170] = 0.0f;
		}
		for (int l171 = 0; l171 < 2; l171 = l171 + 1) {
			fRec51[l171] = 0.0f;
		}
		for (int l172 = 0; l172 < 2; l172 = l172 + 1) {
			fVec126[l172] = 0.0f;
		}
		for (int l173 = 0; l173 < 3; l173 = l173 + 1) {
			fVec127[l173] = 0.0f;
		}
		for (int l174 = 0; l174 < 7; l174 = l174 + 1) {
			fVec128[l174] = 0.0f;
		}
		for (int l175 = 0; l175 < 15; l175 = l175 + 1) {
			fVec129[l175] = 0.0f;
		}
		for (int l176 = 0; l176 < 32; l176 = l176 + 1) {
			fVec130[l176] = 0.0f;
		}
		for (int l177 = 0; l177 < 64; l177 = l177 + 1) {
			fVec131[l177] = 0.0f;
		}
		for (int l178 = 0; l178 < 128; l178 = l178 + 1) {
			fVec132[l178] = 0.0f;
		}
		for (int l179 = 0; l179 < 256; l179 = l179 + 1) {
			fVec133[l179] = 0.0f;
		}
		for (int l180 = 0; l180 < 512; l180 = l180 + 1) {
			fVec134[l180] = 0.0f;
		}
		for (int l181 = 0; l181 < 1024; l181 = l181 + 1) {
			fVec135[l181] = 0.0f;
		}
		for (int l182 = 0; l182 < 2048; l182 = l182 + 1) {
			fVec136[l182] = 0.0f;
		}
		for (int l183 = 0; l183 < 4096; l183 = l183 + 1) {
			fVec137[l183] = 0.0f;
		}
		for (int l184 = 0; l184 < 8192; l184 = l184 + 1) {
			fVec138[l184] = 0.0f;
		}
		for (int l185 = 0; l185 < 16384; l185 = l185 + 1) {
			fVec139[l185] = 0.0f;
		}
		for (int l186 = 0; l186 < 32768; l186 = l186 + 1) {
			fVec140[l186] = 0.0f;
		}
		for (int l187 = 0; l187 < 65536; l187 = l187 + 1) {
			fVec141[l187] = 0.0f;
		}
		for (int l188 = 0; l188 < 131072; l188 = l188 + 1) {
			fVec142[l188] = 0.0f;
		}
		for (int l189 = 0; l189 < 262144; l189 = l189 + 1) {
			fVec143[l189] = 0.0f;
		}
		for (int l190 = 0; l190 < 3; l190 = l190 + 1) {
			fRec60[l190] = 0.0f;
		}
		for (int l191 = 0; l191 < 32768; l191 = l191 + 1) {
			fVec144[l191] = 0.0f;
		}
		for (int l192 = 0; l192 < 2; l192 = l192 + 1) {
			fVec145[l192] = 0.0f;
		}
		for (int l193 = 0; l193 < 2; l193 = l193 + 1) {
			fRec59[l193] = 0.0f;
		}
		for (int l194 = 0; l194 < 2; l194 = l194 + 1) {
			fRec58[l194] = 0.0f;
		}
		for (int l195 = 0; l195 < 2; l195 = l195 + 1) {
			fVec146[l195] = 0.0f;
		}
		for (int l196 = 0; l196 < 2; l196 = l196 + 1) {
			fRec57[l196] = 0.0f;
		}
		for (int l197 = 0; l197 < 2; l197 = l197 + 1) {
			fRec56[l197] = 0.0f;
		}
		for (int l198 = 0; l198 < 2; l198 = l198 + 1) {
			fVec147[l198] = 0.0f;
		}
		for (int l199 = 0; l199 < 3; l199 = l199 + 1) {
			fVec148[l199] = 0.0f;
		}
		for (int l200 = 0; l200 < 7; l200 = l200 + 1) {
			fVec149[l200] = 0.0f;
		}
		for (int l201 = 0; l201 < 15; l201 = l201 + 1) {
			fVec150[l201] = 0.0f;
		}
		for (int l202 = 0; l202 < 32; l202 = l202 + 1) {
			fVec151[l202] = 0.0f;
		}
		for (int l203 = 0; l203 < 64; l203 = l203 + 1) {
			fVec152[l203] = 0.0f;
		}
		for (int l204 = 0; l204 < 128; l204 = l204 + 1) {
			fVec153[l204] = 0.0f;
		}
		for (int l205 = 0; l205 < 256; l205 = l205 + 1) {
			fVec154[l205] = 0.0f;
		}
		for (int l206 = 0; l206 < 512; l206 = l206 + 1) {
			fVec155[l206] = 0.0f;
		}
		for (int l207 = 0; l207 < 1024; l207 = l207 + 1) {
			fVec156[l207] = 0.0f;
		}
		for (int l208 = 0; l208 < 2048; l208 = l208 + 1) {
			fVec157[l208] = 0.0f;
		}
		for (int l209 = 0; l209 < 4096; l209 = l209 + 1) {
			fVec158[l209] = 0.0f;
		}
		for (int l210 = 0; l210 < 8192; l210 = l210 + 1) {
			fVec159[l210] = 0.0f;
		}
		for (int l211 = 0; l211 < 16384; l211 = l211 + 1) {
			fVec160[l211] = 0.0f;
		}
		for (int l212 = 0; l212 < 32768; l212 = l212 + 1) {
			fVec161[l212] = 0.0f;
		}
		for (int l213 = 0; l213 < 65536; l213 = l213 + 1) {
			fVec162[l213] = 0.0f;
		}
		for (int l214 = 0; l214 < 131072; l214 = l214 + 1) {
			fVec163[l214] = 0.0f;
		}
		for (int l215 = 0; l215 < 262144; l215 = l215 + 1) {
			fVec164[l215] = 0.0f;
		}
		for (int l216 = 0; l216 < 3; l216 = l216 + 1) {
			fRec65[l216] = 0.0f;
		}
		for (int l217 = 0; l217 < 32768; l217 = l217 + 1) {
			fVec165[l217] = 0.0f;
		}
		for (int l218 = 0; l218 < 2; l218 = l218 + 1) {
			fVec166[l218] = 0.0f;
		}
		for (int l219 = 0; l219 < 2; l219 = l219 + 1) {
			fRec64[l219] = 0.0f;
		}
		for (int l220 = 0; l220 < 2; l220 = l220 + 1) {
			fRec63[l220] = 0.0f;
		}
		for (int l221 = 0; l221 < 2; l221 = l221 + 1) {
			fVec167[l221] = 0.0f;
		}
		for (int l222 = 0; l222 < 2; l222 = l222 + 1) {
			fRec62[l222] = 0.0f;
		}
		for (int l223 = 0; l223 < 2; l223 = l223 + 1) {
			fRec61[l223] = 0.0f;
		}
		for (int l224 = 0; l224 < 2; l224 = l224 + 1) {
			fVec168[l224] = 0.0f;
		}
		for (int l225 = 0; l225 < 3; l225 = l225 + 1) {
			fVec169[l225] = 0.0f;
		}
		for (int l226 = 0; l226 < 7; l226 = l226 + 1) {
			fVec170[l226] = 0.0f;
		}
		for (int l227 = 0; l227 < 15; l227 = l227 + 1) {
			fVec171[l227] = 0.0f;
		}
		for (int l228 = 0; l228 < 32; l228 = l228 + 1) {
			fVec172[l228] = 0.0f;
		}
		for (int l229 = 0; l229 < 64; l229 = l229 + 1) {
			fVec173[l229] = 0.0f;
		}
		for (int l230 = 0; l230 < 128; l230 = l230 + 1) {
			fVec174[l230] = 0.0f;
		}
		for (int l231 = 0; l231 < 256; l231 = l231 + 1) {
			fVec175[l231] = 0.0f;
		}
		for (int l232 = 0; l232 < 512; l232 = l232 + 1) {
			fVec176[l232] = 0.0f;
		}
		for (int l233 = 0; l233 < 1024; l233 = l233 + 1) {
			fVec177[l233] = 0.0f;
		}
		for (int l234 = 0; l234 < 2048; l234 = l234 + 1) {
			fVec178[l234] = 0.0f;
		}
		for (int l235 = 0; l235 < 4096; l235 = l235 + 1) {
			fVec179[l235] = 0.0f;
		}
		for (int l236 = 0; l236 < 8192; l236 = l236 + 1) {
			fVec180[l236] = 0.0f;
		}
		for (int l237 = 0; l237 < 16384; l237 = l237 + 1) {
			fVec181[l237] = 0.0f;
		}
		for (int l238 = 0; l238 < 32768; l238 = l238 + 1) {
			fVec182[l238] = 0.0f;
		}
		for (int l239 = 0; l239 < 65536; l239 = l239 + 1) {
			fVec183[l239] = 0.0f;
		}
		for (int l240 = 0; l240 < 131072; l240 = l240 + 1) {
			fVec184[l240] = 0.0f;
		}
		for (int l241 = 0; l241 < 262144; l241 = l241 + 1) {
			fVec185[l241] = 0.0f;
		}
		for (int l242 = 0; l242 < 3; l242 = l242 + 1) {
			fRec70[l242] = 0.0f;
		}
		for (int l243 = 0; l243 < 32768; l243 = l243 + 1) {
			fVec186[l243] = 0.0f;
		}
		for (int l244 = 0; l244 < 2; l244 = l244 + 1) {
			fVec187[l244] = 0.0f;
		}
		for (int l245 = 0; l245 < 2; l245 = l245 + 1) {
			fRec69[l245] = 0.0f;
		}
		for (int l246 = 0; l246 < 2; l246 = l246 + 1) {
			fRec68[l246] = 0.0f;
		}
		for (int l247 = 0; l247 < 2; l247 = l247 + 1) {
			fVec188[l247] = 0.0f;
		}
		for (int l248 = 0; l248 < 2; l248 = l248 + 1) {
			fRec67[l248] = 0.0f;
		}
		for (int l249 = 0; l249 < 2; l249 = l249 + 1) {
			fRec66[l249] = 0.0f;
		}
		for (int l250 = 0; l250 < 2; l250 = l250 + 1) {
			fVec189[l250] = 0.0f;
		}
		for (int l251 = 0; l251 < 3; l251 = l251 + 1) {
			fVec190[l251] = 0.0f;
		}
		for (int l252 = 0; l252 < 7; l252 = l252 + 1) {
			fVec191[l252] = 0.0f;
		}
		for (int l253 = 0; l253 < 15; l253 = l253 + 1) {
			fVec192[l253] = 0.0f;
		}
		for (int l254 = 0; l254 < 32; l254 = l254 + 1) {
			fVec193[l254] = 0.0f;
		}
		for (int l255 = 0; l255 < 64; l255 = l255 + 1) {
			fVec194[l255] = 0.0f;
		}
		for (int l256 = 0; l256 < 128; l256 = l256 + 1) {
			fVec195[l256] = 0.0f;
		}
		for (int l257 = 0; l257 < 256; l257 = l257 + 1) {
			fVec196[l257] = 0.0f;
		}
		for (int l258 = 0; l258 < 512; l258 = l258 + 1) {
			fVec197[l258] = 0.0f;
		}
		for (int l259 = 0; l259 < 1024; l259 = l259 + 1) {
			fVec198[l259] = 0.0f;
		}
		for (int l260 = 0; l260 < 2048; l260 = l260 + 1) {
			fVec199[l260] = 0.0f;
		}
		for (int l261 = 0; l261 < 4096; l261 = l261 + 1) {
			fVec200[l261] = 0.0f;
		}
		for (int l262 = 0; l262 < 8192; l262 = l262 + 1) {
			fVec201[l262] = 0.0f;
		}
		for (int l263 = 0; l263 < 16384; l263 = l263 + 1) {
			fVec202[l263] = 0.0f;
		}
		for (int l264 = 0; l264 < 32768; l264 = l264 + 1) {
			fVec203[l264] = 0.0f;
		}
		for (int l265 = 0; l265 < 65536; l265 = l265 + 1) {
			fVec204[l265] = 0.0f;
		}
		for (int l266 = 0; l266 < 131072; l266 = l266 + 1) {
			fVec205[l266] = 0.0f;
		}
		for (int l267 = 0; l267 < 262144; l267 = l267 + 1) {
			fVec206[l267] = 0.0f;
		}
		for (int l268 = 0; l268 < 3; l268 = l268 + 1) {
			fRec75[l268] = 0.0f;
		}
		for (int l269 = 0; l269 < 32768; l269 = l269 + 1) {
			fVec207[l269] = 0.0f;
		}
		for (int l270 = 0; l270 < 2; l270 = l270 + 1) {
			fVec208[l270] = 0.0f;
		}
		for (int l271 = 0; l271 < 2; l271 = l271 + 1) {
			fRec74[l271] = 0.0f;
		}
		for (int l272 = 0; l272 < 2; l272 = l272 + 1) {
			fRec73[l272] = 0.0f;
		}
		for (int l273 = 0; l273 < 2; l273 = l273 + 1) {
			fVec209[l273] = 0.0f;
		}
		for (int l274 = 0; l274 < 2; l274 = l274 + 1) {
			fRec72[l274] = 0.0f;
		}
		for (int l275 = 0; l275 < 2; l275 = l275 + 1) {
			fRec71[l275] = 0.0f;
		}
		for (int l276 = 0; l276 < 2; l276 = l276 + 1) {
			fVec210[l276] = 0.0f;
		}
		for (int l277 = 0; l277 < 3; l277 = l277 + 1) {
			fVec211[l277] = 0.0f;
		}
		for (int l278 = 0; l278 < 7; l278 = l278 + 1) {
			fVec212[l278] = 0.0f;
		}
		for (int l279 = 0; l279 < 15; l279 = l279 + 1) {
			fVec213[l279] = 0.0f;
		}
		for (int l280 = 0; l280 < 32; l280 = l280 + 1) {
			fVec214[l280] = 0.0f;
		}
		for (int l281 = 0; l281 < 64; l281 = l281 + 1) {
			fVec215[l281] = 0.0f;
		}
		for (int l282 = 0; l282 < 128; l282 = l282 + 1) {
			fVec216[l282] = 0.0f;
		}
		for (int l283 = 0; l283 < 256; l283 = l283 + 1) {
			fVec217[l283] = 0.0f;
		}
		for (int l284 = 0; l284 < 512; l284 = l284 + 1) {
			fVec218[l284] = 0.0f;
		}
		for (int l285 = 0; l285 < 1024; l285 = l285 + 1) {
			fVec219[l285] = 0.0f;
		}
		for (int l286 = 0; l286 < 2048; l286 = l286 + 1) {
			fVec220[l286] = 0.0f;
		}
		for (int l287 = 0; l287 < 4096; l287 = l287 + 1) {
			fVec221[l287] = 0.0f;
		}
		for (int l288 = 0; l288 < 8192; l288 = l288 + 1) {
			fVec222[l288] = 0.0f;
		}
		for (int l289 = 0; l289 < 16384; l289 = l289 + 1) {
			fVec223[l289] = 0.0f;
		}
		for (int l290 = 0; l290 < 32768; l290 = l290 + 1) {
			fVec224[l290] = 0.0f;
		}
		for (int l291 = 0; l291 < 65536; l291 = l291 + 1) {
			fVec225[l291] = 0.0f;
		}
		for (int l292 = 0; l292 < 131072; l292 = l292 + 1) {
			fVec226[l292] = 0.0f;
		}
		for (int l293 = 0; l293 < 262144; l293 = l293 + 1) {
			fVec227[l293] = 0.0f;
		}
		for (int l294 = 0; l294 < 3; l294 = l294 + 1) {
			fRec80[l294] = 0.0f;
		}
		for (int l295 = 0; l295 < 32768; l295 = l295 + 1) {
			fVec228[l295] = 0.0f;
		}
		for (int l296 = 0; l296 < 2; l296 = l296 + 1) {
			fVec229[l296] = 0.0f;
		}
		for (int l297 = 0; l297 < 2; l297 = l297 + 1) {
			fRec79[l297] = 0.0f;
		}
		for (int l298 = 0; l298 < 2; l298 = l298 + 1) {
			fRec78[l298] = 0.0f;
		}
		for (int l299 = 0; l299 < 2; l299 = l299 + 1) {
			fVec230[l299] = 0.0f;
		}
		for (int l300 = 0; l300 < 2; l300 = l300 + 1) {
			fRec77[l300] = 0.0f;
		}
		for (int l301 = 0; l301 < 2; l301 = l301 + 1) {
			fRec76[l301] = 0.0f;
		}
		for (int l302 = 0; l302 < 2; l302 = l302 + 1) {
			fVec231[l302] = 0.0f;
		}
		for (int l303 = 0; l303 < 3; l303 = l303 + 1) {
			fVec232[l303] = 0.0f;
		}
		for (int l304 = 0; l304 < 7; l304 = l304 + 1) {
			fVec233[l304] = 0.0f;
		}
		for (int l305 = 0; l305 < 15; l305 = l305 + 1) {
			fVec234[l305] = 0.0f;
		}
		for (int l306 = 0; l306 < 32; l306 = l306 + 1) {
			fVec235[l306] = 0.0f;
		}
		for (int l307 = 0; l307 < 64; l307 = l307 + 1) {
			fVec236[l307] = 0.0f;
		}
		for (int l308 = 0; l308 < 128; l308 = l308 + 1) {
			fVec237[l308] = 0.0f;
		}
		for (int l309 = 0; l309 < 256; l309 = l309 + 1) {
			fVec238[l309] = 0.0f;
		}
		for (int l310 = 0; l310 < 512; l310 = l310 + 1) {
			fVec239[l310] = 0.0f;
		}
		for (int l311 = 0; l311 < 1024; l311 = l311 + 1) {
			fVec240[l311] = 0.0f;
		}
		for (int l312 = 0; l312 < 2048; l312 = l312 + 1) {
			fVec241[l312] = 0.0f;
		}
		for (int l313 = 0; l313 < 4096; l313 = l313 + 1) {
			fVec242[l313] = 0.0f;
		}
		for (int l314 = 0; l314 < 8192; l314 = l314 + 1) {
			fVec243[l314] = 0.0f;
		}
		for (int l315 = 0; l315 < 16384; l315 = l315 + 1) {
			fVec244[l315] = 0.0f;
		}
		for (int l316 = 0; l316 < 32768; l316 = l316 + 1) {
			fVec245[l316] = 0.0f;
		}
		for (int l317 = 0; l317 < 65536; l317 = l317 + 1) {
			fVec246[l317] = 0.0f;
		}
		for (int l318 = 0; l318 < 131072; l318 = l318 + 1) {
			fVec247[l318] = 0.0f;
		}
		for (int l319 = 0; l319 < 262144; l319 = l319 + 1) {
			fVec248[l319] = 0.0f;
		}
		for (int l320 = 0; l320 < 3; l320 = l320 + 1) {
			fRec85[l320] = 0.0f;
		}
		for (int l321 = 0; l321 < 32768; l321 = l321 + 1) {
			fVec249[l321] = 0.0f;
		}
		for (int l322 = 0; l322 < 2; l322 = l322 + 1) {
			fVec250[l322] = 0.0f;
		}
		for (int l323 = 0; l323 < 2; l323 = l323 + 1) {
			fRec84[l323] = 0.0f;
		}
		for (int l324 = 0; l324 < 2; l324 = l324 + 1) {
			fRec83[l324] = 0.0f;
		}
		for (int l325 = 0; l325 < 2; l325 = l325 + 1) {
			fVec251[l325] = 0.0f;
		}
		for (int l326 = 0; l326 < 2; l326 = l326 + 1) {
			fRec82[l326] = 0.0f;
		}
		for (int l327 = 0; l327 < 2; l327 = l327 + 1) {
			fRec81[l327] = 0.0f;
		}
		for (int l328 = 0; l328 < 2; l328 = l328 + 1) {
			fVec252[l328] = 0.0f;
		}
		for (int l329 = 0; l329 < 3; l329 = l329 + 1) {
			fVec253[l329] = 0.0f;
		}
		for (int l330 = 0; l330 < 7; l330 = l330 + 1) {
			fVec254[l330] = 0.0f;
		}
		for (int l331 = 0; l331 < 15; l331 = l331 + 1) {
			fVec255[l331] = 0.0f;
		}
		for (int l332 = 0; l332 < 32; l332 = l332 + 1) {
			fVec256[l332] = 0.0f;
		}
		for (int l333 = 0; l333 < 64; l333 = l333 + 1) {
			fVec257[l333] = 0.0f;
		}
		for (int l334 = 0; l334 < 128; l334 = l334 + 1) {
			fVec258[l334] = 0.0f;
		}
		for (int l335 = 0; l335 < 256; l335 = l335 + 1) {
			fVec259[l335] = 0.0f;
		}
		for (int l336 = 0; l336 < 512; l336 = l336 + 1) {
			fVec260[l336] = 0.0f;
		}
		for (int l337 = 0; l337 < 1024; l337 = l337 + 1) {
			fVec261[l337] = 0.0f;
		}
		for (int l338 = 0; l338 < 2048; l338 = l338 + 1) {
			fVec262[l338] = 0.0f;
		}
		for (int l339 = 0; l339 < 4096; l339 = l339 + 1) {
			fVec263[l339] = 0.0f;
		}
		for (int l340 = 0; l340 < 8192; l340 = l340 + 1) {
			fVec264[l340] = 0.0f;
		}
		for (int l341 = 0; l341 < 16384; l341 = l341 + 1) {
			fVec265[l341] = 0.0f;
		}
		for (int l342 = 0; l342 < 32768; l342 = l342 + 1) {
			fVec266[l342] = 0.0f;
		}
		for (int l343 = 0; l343 < 65536; l343 = l343 + 1) {
			fVec267[l343] = 0.0f;
		}
		for (int l344 = 0; l344 < 131072; l344 = l344 + 1) {
			fVec268[l344] = 0.0f;
		}
		for (int l345 = 0; l345 < 262144; l345 = l345 + 1) {
			fVec269[l345] = 0.0f;
		}
		for (int l346 = 0; l346 < 3; l346 = l346 + 1) {
			fRec90[l346] = 0.0f;
		}
		for (int l347 = 0; l347 < 32768; l347 = l347 + 1) {
			fVec270[l347] = 0.0f;
		}
		for (int l348 = 0; l348 < 2; l348 = l348 + 1) {
			fVec271[l348] = 0.0f;
		}
		for (int l349 = 0; l349 < 2; l349 = l349 + 1) {
			fRec89[l349] = 0.0f;
		}
		for (int l350 = 0; l350 < 2; l350 = l350 + 1) {
			fRec88[l350] = 0.0f;
		}
		for (int l351 = 0; l351 < 2; l351 = l351 + 1) {
			fVec272[l351] = 0.0f;
		}
		for (int l352 = 0; l352 < 2; l352 = l352 + 1) {
			fRec87[l352] = 0.0f;
		}
		for (int l353 = 0; l353 < 2; l353 = l353 + 1) {
			fRec86[l353] = 0.0f;
		}
		for (int l354 = 0; l354 < 2; l354 = l354 + 1) {
			fVec273[l354] = 0.0f;
		}
		for (int l355 = 0; l355 < 3; l355 = l355 + 1) {
			fVec274[l355] = 0.0f;
		}
		for (int l356 = 0; l356 < 7; l356 = l356 + 1) {
			fVec275[l356] = 0.0f;
		}
		for (int l357 = 0; l357 < 15; l357 = l357 + 1) {
			fVec276[l357] = 0.0f;
		}
		for (int l358 = 0; l358 < 32; l358 = l358 + 1) {
			fVec277[l358] = 0.0f;
		}
		for (int l359 = 0; l359 < 64; l359 = l359 + 1) {
			fVec278[l359] = 0.0f;
		}
		for (int l360 = 0; l360 < 128; l360 = l360 + 1) {
			fVec279[l360] = 0.0f;
		}
		for (int l361 = 0; l361 < 256; l361 = l361 + 1) {
			fVec280[l361] = 0.0f;
		}
		for (int l362 = 0; l362 < 512; l362 = l362 + 1) {
			fVec281[l362] = 0.0f;
		}
		for (int l363 = 0; l363 < 1024; l363 = l363 + 1) {
			fVec282[l363] = 0.0f;
		}
		for (int l364 = 0; l364 < 2048; l364 = l364 + 1) {
			fVec283[l364] = 0.0f;
		}
		for (int l365 = 0; l365 < 4096; l365 = l365 + 1) {
			fVec284[l365] = 0.0f;
		}
		for (int l366 = 0; l366 < 8192; l366 = l366 + 1) {
			fVec285[l366] = 0.0f;
		}
		for (int l367 = 0; l367 < 16384; l367 = l367 + 1) {
			fVec286[l367] = 0.0f;
		}
		for (int l368 = 0; l368 < 32768; l368 = l368 + 1) {
			fVec287[l368] = 0.0f;
		}
		for (int l369 = 0; l369 < 65536; l369 = l369 + 1) {
			fVec288[l369] = 0.0f;
		}
		for (int l370 = 0; l370 < 131072; l370 = l370 + 1) {
			fVec289[l370] = 0.0f;
		}
		for (int l371 = 0; l371 < 262144; l371 = l371 + 1) {
			fVec290[l371] = 0.0f;
		}
		for (int l372 = 0; l372 < 3; l372 = l372 + 1) {
			fRec95[l372] = 0.0f;
		}
		for (int l373 = 0; l373 < 32768; l373 = l373 + 1) {
			fVec291[l373] = 0.0f;
		}
		for (int l374 = 0; l374 < 2; l374 = l374 + 1) {
			fVec292[l374] = 0.0f;
		}
		for (int l375 = 0; l375 < 2; l375 = l375 + 1) {
			fRec94[l375] = 0.0f;
		}
		for (int l376 = 0; l376 < 2; l376 = l376 + 1) {
			fRec93[l376] = 0.0f;
		}
		for (int l377 = 0; l377 < 2; l377 = l377 + 1) {
			fVec293[l377] = 0.0f;
		}
		for (int l378 = 0; l378 < 2; l378 = l378 + 1) {
			fRec92[l378] = 0.0f;
		}
		for (int l379 = 0; l379 < 2; l379 = l379 + 1) {
			fRec91[l379] = 0.0f;
		}
		for (int l380 = 0; l380 < 2; l380 = l380 + 1) {
			fVec294[l380] = 0.0f;
		}
		for (int l381 = 0; l381 < 3; l381 = l381 + 1) {
			fVec295[l381] = 0.0f;
		}
		for (int l382 = 0; l382 < 7; l382 = l382 + 1) {
			fVec296[l382] = 0.0f;
		}
		for (int l383 = 0; l383 < 15; l383 = l383 + 1) {
			fVec297[l383] = 0.0f;
		}
		for (int l384 = 0; l384 < 32; l384 = l384 + 1) {
			fVec298[l384] = 0.0f;
		}
		for (int l385 = 0; l385 < 64; l385 = l385 + 1) {
			fVec299[l385] = 0.0f;
		}
		for (int l386 = 0; l386 < 128; l386 = l386 + 1) {
			fVec300[l386] = 0.0f;
		}
		for (int l387 = 0; l387 < 256; l387 = l387 + 1) {
			fVec301[l387] = 0.0f;
		}
		for (int l388 = 0; l388 < 512; l388 = l388 + 1) {
			fVec302[l388] = 0.0f;
		}
		for (int l389 = 0; l389 < 1024; l389 = l389 + 1) {
			fVec303[l389] = 0.0f;
		}
		for (int l390 = 0; l390 < 2048; l390 = l390 + 1) {
			fVec304[l390] = 0.0f;
		}
		for (int l391 = 0; l391 < 4096; l391 = l391 + 1) {
			fVec305[l391] = 0.0f;
		}
		for (int l392 = 0; l392 < 8192; l392 = l392 + 1) {
			fVec306[l392] = 0.0f;
		}
		for (int l393 = 0; l393 < 16384; l393 = l393 + 1) {
			fVec307[l393] = 0.0f;
		}
		for (int l394 = 0; l394 < 32768; l394 = l394 + 1) {
			fVec308[l394] = 0.0f;
		}
		for (int l395 = 0; l395 < 65536; l395 = l395 + 1) {
			fVec309[l395] = 0.0f;
		}
		for (int l396 = 0; l396 < 131072; l396 = l396 + 1) {
			fVec310[l396] = 0.0f;
		}
		for (int l397 = 0; l397 < 262144; l397 = l397 + 1) {
			fVec311[l397] = 0.0f;
		}
		for (int l398 = 0; l398 < 3; l398 = l398 + 1) {
			fRec100[l398] = 0.0f;
		}
		for (int l399 = 0; l399 < 32768; l399 = l399 + 1) {
			fVec312[l399] = 0.0f;
		}
		for (int l400 = 0; l400 < 2; l400 = l400 + 1) {
			fVec313[l400] = 0.0f;
		}
		for (int l401 = 0; l401 < 2; l401 = l401 + 1) {
			fRec99[l401] = 0.0f;
		}
		for (int l402 = 0; l402 < 2; l402 = l402 + 1) {
			fRec98[l402] = 0.0f;
		}
		for (int l403 = 0; l403 < 2; l403 = l403 + 1) {
			fVec314[l403] = 0.0f;
		}
		for (int l404 = 0; l404 < 2; l404 = l404 + 1) {
			fRec97[l404] = 0.0f;
		}
		for (int l405 = 0; l405 < 2; l405 = l405 + 1) {
			fRec96[l405] = 0.0f;
		}
		for (int l406 = 0; l406 < 2; l406 = l406 + 1) {
			fVec315[l406] = 0.0f;
		}
		for (int l407 = 0; l407 < 3; l407 = l407 + 1) {
			fVec316[l407] = 0.0f;
		}
		for (int l408 = 0; l408 < 7; l408 = l408 + 1) {
			fVec317[l408] = 0.0f;
		}
		for (int l409 = 0; l409 < 15; l409 = l409 + 1) {
			fVec318[l409] = 0.0f;
		}
		for (int l410 = 0; l410 < 32; l410 = l410 + 1) {
			fVec319[l410] = 0.0f;
		}
		for (int l411 = 0; l411 < 64; l411 = l411 + 1) {
			fVec320[l411] = 0.0f;
		}
		for (int l412 = 0; l412 < 128; l412 = l412 + 1) {
			fVec321[l412] = 0.0f;
		}
		for (int l413 = 0; l413 < 256; l413 = l413 + 1) {
			fVec322[l413] = 0.0f;
		}
		for (int l414 = 0; l414 < 512; l414 = l414 + 1) {
			fVec323[l414] = 0.0f;
		}
		for (int l415 = 0; l415 < 1024; l415 = l415 + 1) {
			fVec324[l415] = 0.0f;
		}
		for (int l416 = 0; l416 < 2048; l416 = l416 + 1) {
			fVec325[l416] = 0.0f;
		}
		for (int l417 = 0; l417 < 4096; l417 = l417 + 1) {
			fVec326[l417] = 0.0f;
		}
		for (int l418 = 0; l418 < 8192; l418 = l418 + 1) {
			fVec327[l418] = 0.0f;
		}
		for (int l419 = 0; l419 < 16384; l419 = l419 + 1) {
			fVec328[l419] = 0.0f;
		}
		for (int l420 = 0; l420 < 32768; l420 = l420 + 1) {
			fVec329[l420] = 0.0f;
		}
		for (int l421 = 0; l421 < 65536; l421 = l421 + 1) {
			fVec330[l421] = 0.0f;
		}
		for (int l422 = 0; l422 < 131072; l422 = l422 + 1) {
			fVec331[l422] = 0.0f;
		}
		for (int l423 = 0; l423 < 262144; l423 = l423 + 1) {
			fVec332[l423] = 0.0f;
		}
		for (int l424 = 0; l424 < 3; l424 = l424 + 1) {
			fRec105[l424] = 0.0f;
		}
		for (int l425 = 0; l425 < 32768; l425 = l425 + 1) {
			fVec333[l425] = 0.0f;
		}
		for (int l426 = 0; l426 < 2; l426 = l426 + 1) {
			fVec334[l426] = 0.0f;
		}
		for (int l427 = 0; l427 < 2; l427 = l427 + 1) {
			fRec104[l427] = 0.0f;
		}
		for (int l428 = 0; l428 < 2; l428 = l428 + 1) {
			fRec103[l428] = 0.0f;
		}
		for (int l429 = 0; l429 < 2; l429 = l429 + 1) {
			fVec335[l429] = 0.0f;
		}
		for (int l430 = 0; l430 < 2; l430 = l430 + 1) {
			fRec102[l430] = 0.0f;
		}
		for (int l431 = 0; l431 < 2; l431 = l431 + 1) {
			fRec101[l431] = 0.0f;
		}
		for (int l432 = 0; l432 < 2; l432 = l432 + 1) {
			fVec336[l432] = 0.0f;
		}
		for (int l433 = 0; l433 < 3; l433 = l433 + 1) {
			fVec337[l433] = 0.0f;
		}
		for (int l434 = 0; l434 < 7; l434 = l434 + 1) {
			fVec338[l434] = 0.0f;
		}
		for (int l435 = 0; l435 < 15; l435 = l435 + 1) {
			fVec339[l435] = 0.0f;
		}
		for (int l436 = 0; l436 < 32; l436 = l436 + 1) {
			fVec340[l436] = 0.0f;
		}
		for (int l437 = 0; l437 < 64; l437 = l437 + 1) {
			fVec341[l437] = 0.0f;
		}
		for (int l438 = 0; l438 < 128; l438 = l438 + 1) {
			fVec342[l438] = 0.0f;
		}
		for (int l439 = 0; l439 < 256; l439 = l439 + 1) {
			fVec343[l439] = 0.0f;
		}
		for (int l440 = 0; l440 < 512; l440 = l440 + 1) {
			fVec344[l440] = 0.0f;
		}
		for (int l441 = 0; l441 < 1024; l441 = l441 + 1) {
			fVec345[l441] = 0.0f;
		}
		for (int l442 = 0; l442 < 2048; l442 = l442 + 1) {
			fVec346[l442] = 0.0f;
		}
		for (int l443 = 0; l443 < 4096; l443 = l443 + 1) {
			fVec347[l443] = 0.0f;
		}
		for (int l444 = 0; l444 < 8192; l444 = l444 + 1) {
			fVec348[l444] = 0.0f;
		}
		for (int l445 = 0; l445 < 16384; l445 = l445 + 1) {
			fVec349[l445] = 0.0f;
		}
		for (int l446 = 0; l446 < 32768; l446 = l446 + 1) {
			fVec350[l446] = 0.0f;
		}
		for (int l447 = 0; l447 < 65536; l447 = l447 + 1) {
			fVec351[l447] = 0.0f;
		}
		for (int l448 = 0; l448 < 131072; l448 = l448 + 1) {
			fVec352[l448] = 0.0f;
		}
		for (int l449 = 0; l449 < 262144; l449 = l449 + 1) {
			fVec353[l449] = 0.0f;
		}
		for (int l450 = 0; l450 < 3; l450 = l450 + 1) {
			fRec110[l450] = 0.0f;
		}
		for (int l451 = 0; l451 < 32768; l451 = l451 + 1) {
			fVec354[l451] = 0.0f;
		}
		for (int l452 = 0; l452 < 2; l452 = l452 + 1) {
			fVec355[l452] = 0.0f;
		}
		for (int l453 = 0; l453 < 2; l453 = l453 + 1) {
			fRec109[l453] = 0.0f;
		}
		for (int l454 = 0; l454 < 2; l454 = l454 + 1) {
			fRec108[l454] = 0.0f;
		}
		for (int l455 = 0; l455 < 2; l455 = l455 + 1) {
			fVec356[l455] = 0.0f;
		}
		for (int l456 = 0; l456 < 2; l456 = l456 + 1) {
			fRec107[l456] = 0.0f;
		}
		for (int l457 = 0; l457 < 2; l457 = l457 + 1) {
			fRec106[l457] = 0.0f;
		}
		for (int l458 = 0; l458 < 2; l458 = l458 + 1) {
			fVec357[l458] = 0.0f;
		}
		for (int l459 = 0; l459 < 3; l459 = l459 + 1) {
			fVec358[l459] = 0.0f;
		}
		for (int l460 = 0; l460 < 7; l460 = l460 + 1) {
			fVec359[l460] = 0.0f;
		}
		for (int l461 = 0; l461 < 15; l461 = l461 + 1) {
			fVec360[l461] = 0.0f;
		}
		for (int l462 = 0; l462 < 32; l462 = l462 + 1) {
			fVec361[l462] = 0.0f;
		}
		for (int l463 = 0; l463 < 64; l463 = l463 + 1) {
			fVec362[l463] = 0.0f;
		}
		for (int l464 = 0; l464 < 128; l464 = l464 + 1) {
			fVec363[l464] = 0.0f;
		}
		for (int l465 = 0; l465 < 256; l465 = l465 + 1) {
			fVec364[l465] = 0.0f;
		}
		for (int l466 = 0; l466 < 512; l466 = l466 + 1) {
			fVec365[l466] = 0.0f;
		}
		for (int l467 = 0; l467 < 1024; l467 = l467 + 1) {
			fVec366[l467] = 0.0f;
		}
		for (int l468 = 0; l468 < 2048; l468 = l468 + 1) {
			fVec367[l468] = 0.0f;
		}
		for (int l469 = 0; l469 < 4096; l469 = l469 + 1) {
			fVec368[l469] = 0.0f;
		}
		for (int l470 = 0; l470 < 8192; l470 = l470 + 1) {
			fVec369[l470] = 0.0f;
		}
		for (int l471 = 0; l471 < 16384; l471 = l471 + 1) {
			fVec370[l471] = 0.0f;
		}
		for (int l472 = 0; l472 < 32768; l472 = l472 + 1) {
			fVec371[l472] = 0.0f;
		}
		for (int l473 = 0; l473 < 65536; l473 = l473 + 1) {
			fVec372[l473] = 0.0f;
		}
		for (int l474 = 0; l474 < 131072; l474 = l474 + 1) {
			fVec373[l474] = 0.0f;
		}
		for (int l475 = 0; l475 < 262144; l475 = l475 + 1) {
			fVec374[l475] = 0.0f;
		}
		for (int l476 = 0; l476 < 3; l476 = l476 + 1) {
			fRec115[l476] = 0.0f;
		}
		for (int l477 = 0; l477 < 32768; l477 = l477 + 1) {
			fVec375[l477] = 0.0f;
		}
		for (int l478 = 0; l478 < 2; l478 = l478 + 1) {
			fVec376[l478] = 0.0f;
		}
		for (int l479 = 0; l479 < 2; l479 = l479 + 1) {
			fRec114[l479] = 0.0f;
		}
		for (int l480 = 0; l480 < 2; l480 = l480 + 1) {
			fRec113[l480] = 0.0f;
		}
		for (int l481 = 0; l481 < 2; l481 = l481 + 1) {
			fVec377[l481] = 0.0f;
		}
		for (int l482 = 0; l482 < 2; l482 = l482 + 1) {
			fRec112[l482] = 0.0f;
		}
		for (int l483 = 0; l483 < 2; l483 = l483 + 1) {
			fRec111[l483] = 0.0f;
		}
		for (int l484 = 0; l484 < 2; l484 = l484 + 1) {
			fVec378[l484] = 0.0f;
		}
		for (int l485 = 0; l485 < 3; l485 = l485 + 1) {
			fVec379[l485] = 0.0f;
		}
		for (int l486 = 0; l486 < 7; l486 = l486 + 1) {
			fVec380[l486] = 0.0f;
		}
		for (int l487 = 0; l487 < 15; l487 = l487 + 1) {
			fVec381[l487] = 0.0f;
		}
		for (int l488 = 0; l488 < 32; l488 = l488 + 1) {
			fVec382[l488] = 0.0f;
		}
		for (int l489 = 0; l489 < 64; l489 = l489 + 1) {
			fVec383[l489] = 0.0f;
		}
		for (int l490 = 0; l490 < 128; l490 = l490 + 1) {
			fVec384[l490] = 0.0f;
		}
		for (int l491 = 0; l491 < 256; l491 = l491 + 1) {
			fVec385[l491] = 0.0f;
		}
		for (int l492 = 0; l492 < 512; l492 = l492 + 1) {
			fVec386[l492] = 0.0f;
		}
		for (int l493 = 0; l493 < 1024; l493 = l493 + 1) {
			fVec387[l493] = 0.0f;
		}
		for (int l494 = 0; l494 < 2048; l494 = l494 + 1) {
			fVec388[l494] = 0.0f;
		}
		for (int l495 = 0; l495 < 4096; l495 = l495 + 1) {
			fVec389[l495] = 0.0f;
		}
		for (int l496 = 0; l496 < 8192; l496 = l496 + 1) {
			fVec390[l496] = 0.0f;
		}
		for (int l497 = 0; l497 < 16384; l497 = l497 + 1) {
			fVec391[l497] = 0.0f;
		}
		for (int l498 = 0; l498 < 32768; l498 = l498 + 1) {
			fVec392[l498] = 0.0f;
		}
		for (int l499 = 0; l499 < 65536; l499 = l499 + 1) {
			fVec393[l499] = 0.0f;
		}
		for (int l500 = 0; l500 < 131072; l500 = l500 + 1) {
			fVec394[l500] = 0.0f;
		}
		for (int l501 = 0; l501 < 262144; l501 = l501 + 1) {
			fVec395[l501] = 0.0f;
		}
		for (int l502 = 0; l502 < 3; l502 = l502 + 1) {
			fRec120[l502] = 0.0f;
		}
		for (int l503 = 0; l503 < 32768; l503 = l503 + 1) {
			fVec396[l503] = 0.0f;
		}
		for (int l504 = 0; l504 < 2; l504 = l504 + 1) {
			fVec397[l504] = 0.0f;
		}
		for (int l505 = 0; l505 < 2; l505 = l505 + 1) {
			fRec119[l505] = 0.0f;
		}
		for (int l506 = 0; l506 < 2; l506 = l506 + 1) {
			fRec118[l506] = 0.0f;
		}
		for (int l507 = 0; l507 < 2; l507 = l507 + 1) {
			fVec398[l507] = 0.0f;
		}
		for (int l508 = 0; l508 < 2; l508 = l508 + 1) {
			fRec117[l508] = 0.0f;
		}
		for (int l509 = 0; l509 < 2; l509 = l509 + 1) {
			fRec116[l509] = 0.0f;
		}
		for (int l510 = 0; l510 < 2; l510 = l510 + 1) {
			fVec399[l510] = 0.0f;
		}
		for (int l511 = 0; l511 < 3; l511 = l511 + 1) {
			fVec400[l511] = 0.0f;
		}
		for (int l512 = 0; l512 < 7; l512 = l512 + 1) {
			fVec401[l512] = 0.0f;
		}
		for (int l513 = 0; l513 < 15; l513 = l513 + 1) {
			fVec402[l513] = 0.0f;
		}
		for (int l514 = 0; l514 < 32; l514 = l514 + 1) {
			fVec403[l514] = 0.0f;
		}
		for (int l515 = 0; l515 < 64; l515 = l515 + 1) {
			fVec404[l515] = 0.0f;
		}
		for (int l516 = 0; l516 < 128; l516 = l516 + 1) {
			fVec405[l516] = 0.0f;
		}
		for (int l517 = 0; l517 < 256; l517 = l517 + 1) {
			fVec406[l517] = 0.0f;
		}
		for (int l518 = 0; l518 < 512; l518 = l518 + 1) {
			fVec407[l518] = 0.0f;
		}
		for (int l519 = 0; l519 < 1024; l519 = l519 + 1) {
			fVec408[l519] = 0.0f;
		}
		for (int l520 = 0; l520 < 2048; l520 = l520 + 1) {
			fVec409[l520] = 0.0f;
		}
		for (int l521 = 0; l521 < 4096; l521 = l521 + 1) {
			fVec410[l521] = 0.0f;
		}
		for (int l522 = 0; l522 < 8192; l522 = l522 + 1) {
			fVec411[l522] = 0.0f;
		}
		for (int l523 = 0; l523 < 16384; l523 = l523 + 1) {
			fVec412[l523] = 0.0f;
		}
		for (int l524 = 0; l524 < 32768; l524 = l524 + 1) {
			fVec413[l524] = 0.0f;
		}
		for (int l525 = 0; l525 < 65536; l525 = l525 + 1) {
			fVec414[l525] = 0.0f;
		}
		for (int l526 = 0; l526 < 131072; l526 = l526 + 1) {
			fVec415[l526] = 0.0f;
		}
		for (int l527 = 0; l527 < 262144; l527 = l527 + 1) {
			fVec416[l527] = 0.0f;
		}
		for (int l528 = 0; l528 < 3; l528 = l528 + 1) {
			fRec125[l528] = 0.0f;
		}
		for (int l529 = 0; l529 < 32768; l529 = l529 + 1) {
			fVec417[l529] = 0.0f;
		}
		for (int l530 = 0; l530 < 2; l530 = l530 + 1) {
			fVec418[l530] = 0.0f;
		}
		for (int l531 = 0; l531 < 2; l531 = l531 + 1) {
			fRec124[l531] = 0.0f;
		}
		for (int l532 = 0; l532 < 2; l532 = l532 + 1) {
			fRec123[l532] = 0.0f;
		}
		for (int l533 = 0; l533 < 2; l533 = l533 + 1) {
			fVec419[l533] = 0.0f;
		}
		for (int l534 = 0; l534 < 2; l534 = l534 + 1) {
			fRec122[l534] = 0.0f;
		}
		for (int l535 = 0; l535 < 2; l535 = l535 + 1) {
			fRec121[l535] = 0.0f;
		}
		for (int l536 = 0; l536 < 2; l536 = l536 + 1) {
			fVec420[l536] = 0.0f;
		}
		for (int l537 = 0; l537 < 3; l537 = l537 + 1) {
			fVec421[l537] = 0.0f;
		}
		for (int l538 = 0; l538 < 7; l538 = l538 + 1) {
			fVec422[l538] = 0.0f;
		}
		for (int l539 = 0; l539 < 15; l539 = l539 + 1) {
			fVec423[l539] = 0.0f;
		}
		for (int l540 = 0; l540 < 32; l540 = l540 + 1) {
			fVec424[l540] = 0.0f;
		}
		for (int l541 = 0; l541 < 64; l541 = l541 + 1) {
			fVec425[l541] = 0.0f;
		}
		for (int l542 = 0; l542 < 128; l542 = l542 + 1) {
			fVec426[l542] = 0.0f;
		}
		for (int l543 = 0; l543 < 256; l543 = l543 + 1) {
			fVec427[l543] = 0.0f;
		}
		for (int l544 = 0; l544 < 512; l544 = l544 + 1) {
			fVec428[l544] = 0.0f;
		}
		for (int l545 = 0; l545 < 1024; l545 = l545 + 1) {
			fVec429[l545] = 0.0f;
		}
		for (int l546 = 0; l546 < 2048; l546 = l546 + 1) {
			fVec430[l546] = 0.0f;
		}
		for (int l547 = 0; l547 < 4096; l547 = l547 + 1) {
			fVec431[l547] = 0.0f;
		}
		for (int l548 = 0; l548 < 8192; l548 = l548 + 1) {
			fVec432[l548] = 0.0f;
		}
		for (int l549 = 0; l549 < 16384; l549 = l549 + 1) {
			fVec433[l549] = 0.0f;
		}
		for (int l550 = 0; l550 < 32768; l550 = l550 + 1) {
			fVec434[l550] = 0.0f;
		}
		for (int l551 = 0; l551 < 65536; l551 = l551 + 1) {
			fVec435[l551] = 0.0f;
		}
		for (int l552 = 0; l552 < 131072; l552 = l552 + 1) {
			fVec436[l552] = 0.0f;
		}
		for (int l553 = 0; l553 < 262144; l553 = l553 + 1) {
			fVec437[l553] = 0.0f;
		}
		for (int l554 = 0; l554 < 3; l554 = l554 + 1) {
			fRec130[l554] = 0.0f;
		}
		for (int l555 = 0; l555 < 32768; l555 = l555 + 1) {
			fVec438[l555] = 0.0f;
		}
		for (int l556 = 0; l556 < 2; l556 = l556 + 1) {
			fVec439[l556] = 0.0f;
		}
		for (int l557 = 0; l557 < 2; l557 = l557 + 1) {
			fRec129[l557] = 0.0f;
		}
		for (int l558 = 0; l558 < 2; l558 = l558 + 1) {
			fRec128[l558] = 0.0f;
		}
		for (int l559 = 0; l559 < 2; l559 = l559 + 1) {
			fVec440[l559] = 0.0f;
		}
		for (int l560 = 0; l560 < 2; l560 = l560 + 1) {
			fRec127[l560] = 0.0f;
		}
		for (int l561 = 0; l561 < 2; l561 = l561 + 1) {
			fRec126[l561] = 0.0f;
		}
		for (int l562 = 0; l562 < 2; l562 = l562 + 1) {
			fVec441[l562] = 0.0f;
		}
		for (int l563 = 0; l563 < 3; l563 = l563 + 1) {
			fVec442[l563] = 0.0f;
		}
		for (int l564 = 0; l564 < 7; l564 = l564 + 1) {
			fVec443[l564] = 0.0f;
		}
		for (int l565 = 0; l565 < 15; l565 = l565 + 1) {
			fVec444[l565] = 0.0f;
		}
		for (int l566 = 0; l566 < 32; l566 = l566 + 1) {
			fVec445[l566] = 0.0f;
		}
		for (int l567 = 0; l567 < 64; l567 = l567 + 1) {
			fVec446[l567] = 0.0f;
		}
		for (int l568 = 0; l568 < 128; l568 = l568 + 1) {
			fVec447[l568] = 0.0f;
		}
		for (int l569 = 0; l569 < 256; l569 = l569 + 1) {
			fVec448[l569] = 0.0f;
		}
		for (int l570 = 0; l570 < 512; l570 = l570 + 1) {
			fVec449[l570] = 0.0f;
		}
		for (int l571 = 0; l571 < 1024; l571 = l571 + 1) {
			fVec450[l571] = 0.0f;
		}
		for (int l572 = 0; l572 < 2048; l572 = l572 + 1) {
			fVec451[l572] = 0.0f;
		}
		for (int l573 = 0; l573 < 4096; l573 = l573 + 1) {
			fVec452[l573] = 0.0f;
		}
		for (int l574 = 0; l574 < 8192; l574 = l574 + 1) {
			fVec453[l574] = 0.0f;
		}
		for (int l575 = 0; l575 < 16384; l575 = l575 + 1) {
			fVec454[l575] = 0.0f;
		}
		for (int l576 = 0; l576 < 32768; l576 = l576 + 1) {
			fVec455[l576] = 0.0f;
		}
		for (int l577 = 0; l577 < 65536; l577 = l577 + 1) {
			fVec456[l577] = 0.0f;
		}
		for (int l578 = 0; l578 < 131072; l578 = l578 + 1) {
			fVec457[l578] = 0.0f;
		}
		for (int l579 = 0; l579 < 262144; l579 = l579 + 1) {
			fVec458[l579] = 0.0f;
		}
		for (int l580 = 0; l580 < 3; l580 = l580 + 1) {
			fRec135[l580] = 0.0f;
		}
		for (int l581 = 0; l581 < 32768; l581 = l581 + 1) {
			fVec459[l581] = 0.0f;
		}
		for (int l582 = 0; l582 < 2; l582 = l582 + 1) {
			fVec460[l582] = 0.0f;
		}
		for (int l583 = 0; l583 < 2; l583 = l583 + 1) {
			fRec134[l583] = 0.0f;
		}
		for (int l584 = 0; l584 < 2; l584 = l584 + 1) {
			fRec133[l584] = 0.0f;
		}
		for (int l585 = 0; l585 < 2; l585 = l585 + 1) {
			fVec461[l585] = 0.0f;
		}
		for (int l586 = 0; l586 < 2; l586 = l586 + 1) {
			fRec132[l586] = 0.0f;
		}
		for (int l587 = 0; l587 < 2; l587 = l587 + 1) {
			fRec131[l587] = 0.0f;
		}
		for (int l588 = 0; l588 < 2; l588 = l588 + 1) {
			fVec462[l588] = 0.0f;
		}
		for (int l589 = 0; l589 < 3; l589 = l589 + 1) {
			fVec463[l589] = 0.0f;
		}
		for (int l590 = 0; l590 < 7; l590 = l590 + 1) {
			fVec464[l590] = 0.0f;
		}
		for (int l591 = 0; l591 < 15; l591 = l591 + 1) {
			fVec465[l591] = 0.0f;
		}
		for (int l592 = 0; l592 < 32; l592 = l592 + 1) {
			fVec466[l592] = 0.0f;
		}
		for (int l593 = 0; l593 < 64; l593 = l593 + 1) {
			fVec467[l593] = 0.0f;
		}
		for (int l594 = 0; l594 < 128; l594 = l594 + 1) {
			fVec468[l594] = 0.0f;
		}
		for (int l595 = 0; l595 < 256; l595 = l595 + 1) {
			fVec469[l595] = 0.0f;
		}
		for (int l596 = 0; l596 < 512; l596 = l596 + 1) {
			fVec470[l596] = 0.0f;
		}
		for (int l597 = 0; l597 < 1024; l597 = l597 + 1) {
			fVec471[l597] = 0.0f;
		}
		for (int l598 = 0; l598 < 2048; l598 = l598 + 1) {
			fVec472[l598] = 0.0f;
		}
		for (int l599 = 0; l599 < 4096; l599 = l599 + 1) {
			fVec473[l599] = 0.0f;
		}
		for (int l600 = 0; l600 < 8192; l600 = l600 + 1) {
			fVec474[l600] = 0.0f;
		}
		for (int l601 = 0; l601 < 16384; l601 = l601 + 1) {
			fVec475[l601] = 0.0f;
		}
		for (int l602 = 0; l602 < 32768; l602 = l602 + 1) {
			fVec476[l602] = 0.0f;
		}
		for (int l603 = 0; l603 < 65536; l603 = l603 + 1) {
			fVec477[l603] = 0.0f;
		}
		for (int l604 = 0; l604 < 131072; l604 = l604 + 1) {
			fVec478[l604] = 0.0f;
		}
		for (int l605 = 0; l605 < 262144; l605 = l605 + 1) {
			fVec479[l605] = 0.0f;
		}
		for (int l606 = 0; l606 < 3; l606 = l606 + 1) {
			fRec5[l606] = 0.0f;
		}
		for (int l607 = 0; l607 < 3; l607 = l607 + 1) {
			fRec6[l607] = 0.0f;
		}
		for (int l608 = 0; l608 < 2; l608 = l608 + 1) {
			fRec136[l608] = 0.0f;
		}
		for (int l609 = 0; l609 < 3; l609 = l609 + 1) {
			fRec140[l609] = 0.0f;
		}
		for (int l610 = 0; l610 < 3; l610 = l610 + 1) {
			fRec139[l610] = 0.0f;
		}
		for (int l611 = 0; l611 < 3; l611 = l611 + 1) {
			fRec138[l611] = 0.0f;
		}
		for (int l612 = 0; l612 < 2; l612 = l612 + 1) {
			fRec137[l612] = 0.0f;
		}
		for (int l613 = 0; l613 < 3; l613 = l613 + 1) {
			fRec144[l613] = 0.0f;
		}
		for (int l614 = 0; l614 < 3; l614 = l614 + 1) {
			fRec143[l614] = 0.0f;
		}
		for (int l615 = 0; l615 < 3; l615 = l615 + 1) {
			fRec142[l615] = 0.0f;
		}
		for (int l616 = 0; l616 < 2; l616 = l616 + 1) {
			fRec141[l616] = 0.0f;
		}
		for (int l617 = 0; l617 < 3; l617 = l617 + 1) {
			fRec150[l617] = 0.0f;
		}
		for (int l618 = 0; l618 < 3; l618 = l618 + 1) {
			fRec149[l618] = 0.0f;
		}
		for (int l619 = 0; l619 < 3; l619 = l619 + 1) {
			fRec148[l619] = 0.0f;
		}
		for (int l620 = 0; l620 < 3; l620 = l620 + 1) {
			fRec147[l620] = 0.0f;
		}
		for (int l621 = 0; l621 < 3; l621 = l621 + 1) {
			fRec146[l621] = 0.0f;
		}
		for (int l622 = 0; l622 < 2; l622 = l622 + 1) {
			fRec145[l622] = 0.0f;
		}
		for (int l623 = 0; l623 < 3; l623 = l623 + 1) {
			fRec156[l623] = 0.0f;
		}
		for (int l624 = 0; l624 < 3; l624 = l624 + 1) {
			fRec155[l624] = 0.0f;
		}
		for (int l625 = 0; l625 < 3; l625 = l625 + 1) {
			fRec154[l625] = 0.0f;
		}
		for (int l626 = 0; l626 < 3; l626 = l626 + 1) {
			fRec153[l626] = 0.0f;
		}
		for (int l627 = 0; l627 < 3; l627 = l627 + 1) {
			fRec152[l627] = 0.0f;
		}
		for (int l628 = 0; l628 < 2; l628 = l628 + 1) {
			fRec151[l628] = 0.0f;
		}
		for (int l629 = 0; l629 < 3; l629 = l629 + 1) {
			fRec178[l629] = 0.0f;
		}
		for (int l630 = 0; l630 < 3; l630 = l630 + 1) {
			fRec177[l630] = 0.0f;
		}
		for (int l631 = 0; l631 < 3; l631 = l631 + 1) {
			fRec176[l631] = 0.0f;
		}
		for (int l632 = 0; l632 < 3; l632 = l632 + 1) {
			fRec175[l632] = 0.0f;
		}
		for (int l633 = 0; l633 < 3; l633 = l633 + 1) {
			fRec174[l633] = 0.0f;
		}
		for (int l634 = 0; l634 < 2; l634 = l634 + 1) {
			fRec173[l634] = 0.0f;
		}
		for (int l635 = 0; l635 < 3; l635 = l635 + 1) {
			fRec184[l635] = 0.0f;
		}
		for (int l636 = 0; l636 < 3; l636 = l636 + 1) {
			fRec183[l636] = 0.0f;
		}
		for (int l637 = 0; l637 < 3; l637 = l637 + 1) {
			fRec182[l637] = 0.0f;
		}
		for (int l638 = 0; l638 < 3; l638 = l638 + 1) {
			fRec181[l638] = 0.0f;
		}
		for (int l639 = 0; l639 < 3; l639 = l639 + 1) {
			fRec180[l639] = 0.0f;
		}
		for (int l640 = 0; l640 < 2; l640 = l640 + 1) {
			fRec179[l640] = 0.0f;
		}
		for (int l641 = 0; l641 < 3; l641 = l641 + 1) {
			fRec206[l641] = 0.0f;
		}
		for (int l642 = 0; l642 < 3; l642 = l642 + 1) {
			fRec205[l642] = 0.0f;
		}
		for (int l643 = 0; l643 < 3; l643 = l643 + 1) {
			fRec204[l643] = 0.0f;
		}
		for (int l644 = 0; l644 < 3; l644 = l644 + 1) {
			fRec203[l644] = 0.0f;
		}
		for (int l645 = 0; l645 < 3; l645 = l645 + 1) {
			fRec202[l645] = 0.0f;
		}
		for (int l646 = 0; l646 < 2; l646 = l646 + 1) {
			fRec201[l646] = 0.0f;
		}
		for (int l647 = 0; l647 < 3; l647 = l647 + 1) {
			fRec212[l647] = 0.0f;
		}
		for (int l648 = 0; l648 < 3; l648 = l648 + 1) {
			fRec211[l648] = 0.0f;
		}
		for (int l649 = 0; l649 < 3; l649 = l649 + 1) {
			fRec210[l649] = 0.0f;
		}
		for (int l650 = 0; l650 < 3; l650 = l650 + 1) {
			fRec209[l650] = 0.0f;
		}
		for (int l651 = 0; l651 < 3; l651 = l651 + 1) {
			fRec208[l651] = 0.0f;
		}
		for (int l652 = 0; l652 < 2; l652 = l652 + 1) {
			fRec207[l652] = 0.0f;
		}
		for (int l653 = 0; l653 < 3; l653 = l653 + 1) {
			fRec231[l653] = 0.0f;
		}
		for (int l654 = 0; l654 < 3; l654 = l654 + 1) {
			fRec230[l654] = 0.0f;
		}
		for (int l655 = 0; l655 < 2; l655 = l655 + 1) {
			fRec229[l655] = 0.0f;
		}
		for (int l656 = 0; l656 < 3; l656 = l656 + 1) {
			fRec234[l656] = 0.0f;
		}
		for (int l657 = 0; l657 < 3; l657 = l657 + 1) {
			fRec233[l657] = 0.0f;
		}
		for (int l658 = 0; l658 < 2; l658 = l658 + 1) {
			fRec232[l658] = 0.0f;
		}
		for (int l659 = 0; l659 < 2; l659 = l659 + 1) {
			fRec239[l659] = 0.0f;
		}
		for (int l660 = 0; l660 < 2; l660 = l660 + 1) {
			fRec240[l660] = 0.0f;
		}
		for (int l661 = 0; l661 < 2; l661 = l661 + 1) {
			fRec243[l661] = 0.0f;
		}
		for (int l662 = 0; l662 < 2; l662 = l662 + 1) {
			fRec244[l662] = 0.0f;
		}
		for (int l663 = 0; l663 < 2; l663 = l663 + 1) {
			fRec235[l663] = 0.0f;
		}
		for (int l664 = 0; l664 < 2; l664 = l664 + 1) {
			fRec236[l664] = 0.0f;
		}
		for (int l665 = 0; l665 < 2; l665 = l665 + 1) {
			fRec225[l665] = 0.0f;
		}
		for (int l666 = 0; l666 < 2; l666 = l666 + 1) {
			fRec226[l666] = 0.0f;
		}
		for (int l667 = 0; l667 < 2; l667 = l667 + 1) {
			fRec247[l667] = 0.0f;
		}
		for (int l668 = 0; l668 < 2; l668 = l668 + 1) {
			fRec248[l668] = 0.0f;
		}
		for (int l669 = 0; l669 < 2; l669 = l669 + 1) {
			fRec221[l669] = 0.0f;
		}
		for (int l670 = 0; l670 < 2; l670 = l670 + 1) {
			fRec222[l670] = 0.0f;
		}
		for (int l671 = 0; l671 < 2; l671 = l671 + 1) {
			fRec217[l671] = 0.0f;
		}
		for (int l672 = 0; l672 < 2; l672 = l672 + 1) {
			fRec218[l672] = 0.0f;
		}
		for (int l673 = 0; l673 < 2; l673 = l673 + 1) {
			fRec251[l673] = 0.0f;
		}
		for (int l674 = 0; l674 < 2; l674 = l674 + 1) {
			fRec252[l674] = 0.0f;
		}
		for (int l675 = 0; l675 < 2; l675 = l675 + 1) {
			fRec213[l675] = 0.0f;
		}
		for (int l676 = 0; l676 < 2; l676 = l676 + 1) {
			fRec214[l676] = 0.0f;
		}
		for (int l677 = 0; l677 < 2; l677 = l677 + 1) {
			fRec197[l677] = 0.0f;
		}
		for (int l678 = 0; l678 < 2; l678 = l678 + 1) {
			fRec198[l678] = 0.0f;
		}
		for (int l679 = 0; l679 < 2; l679 = l679 + 1) {
			fRec255[l679] = 0.0f;
		}
		for (int l680 = 0; l680 < 2; l680 = l680 + 1) {
			fRec256[l680] = 0.0f;
		}
		for (int l681 = 0; l681 < 2; l681 = l681 + 1) {
			fRec193[l681] = 0.0f;
		}
		for (int l682 = 0; l682 < 2; l682 = l682 + 1) {
			fRec194[l682] = 0.0f;
		}
		for (int l683 = 0; l683 < 2; l683 = l683 + 1) {
			fRec189[l683] = 0.0f;
		}
		for (int l684 = 0; l684 < 2; l684 = l684 + 1) {
			fRec190[l684] = 0.0f;
		}
		for (int l685 = 0; l685 < 2; l685 = l685 + 1) {
			fRec259[l685] = 0.0f;
		}
		for (int l686 = 0; l686 < 2; l686 = l686 + 1) {
			fRec260[l686] = 0.0f;
		}
		for (int l687 = 0; l687 < 2; l687 = l687 + 1) {
			fRec185[l687] = 0.0f;
		}
		for (int l688 = 0; l688 < 2; l688 = l688 + 1) {
			fRec186[l688] = 0.0f;
		}
		for (int l689 = 0; l689 < 2; l689 = l689 + 1) {
			fRec169[l689] = 0.0f;
		}
		for (int l690 = 0; l690 < 2; l690 = l690 + 1) {
			fRec170[l690] = 0.0f;
		}
		for (int l691 = 0; l691 < 2; l691 = l691 + 1) {
			fRec263[l691] = 0.0f;
		}
		for (int l692 = 0; l692 < 2; l692 = l692 + 1) {
			fRec264[l692] = 0.0f;
		}
		for (int l693 = 0; l693 < 2; l693 = l693 + 1) {
			fRec165[l693] = 0.0f;
		}
		for (int l694 = 0; l694 < 2; l694 = l694 + 1) {
			fRec166[l694] = 0.0f;
		}
		for (int l695 = 0; l695 < 2; l695 = l695 + 1) {
			fRec161[l695] = 0.0f;
		}
		for (int l696 = 0; l696 < 2; l696 = l696 + 1) {
			fRec162[l696] = 0.0f;
		}
		for (int l697 = 0; l697 < 2; l697 = l697 + 1) {
			fRec267[l697] = 0.0f;
		}
		for (int l698 = 0; l698 < 2; l698 = l698 + 1) {
			fRec268[l698] = 0.0f;
		}
		for (int l699 = 0; l699 < 2; l699 = l699 + 1) {
			fRec157[l699] = 0.0f;
		}
		for (int l700 = 0; l700 < 2; l700 = l700 + 1) {
			fRec158[l700] = 0.0f;
		}
		for (int l701 = 0; l701 < 2; l701 = l701 + 1) {
			fRec271[l701] = 0.0f;
		}
		for (int l702 = 0; l702 < 2; l702 = l702 + 1) {
			fRec272[l702] = 0.0f;
		}
		for (int l703 = 0; l703 < 2; l703 = l703 + 1) {
			fRec275[l703] = 0.0f;
		}
		for (int l704 = 0; l704 < 2; l704 = l704 + 1) {
			fRec276[l704] = 0.0f;
		}
		for (int l705 = 0; l705 < 2; l705 = l705 + 1) {
			fRec279[l705] = 0.0f;
		}
		for (int l706 = 0; l706 < 2; l706 = l706 + 1) {
			fRec280[l706] = 0.0f;
		}
		for (int l707 = 0; l707 < 2048; l707 = l707 + 1) {
			fVec480[l707] = 0.0f;
		}
		for (int l708 = 0; l708 < 2; l708 = l708 + 1) {
			fRec335[l708] = 0.0f;
		}
		for (int l709 = 0; l709 < 2; l709 = l709 + 1) {
			fRec336[l709] = 0.0f;
		}
		for (int l710 = 0; l710 < 2; l710 = l710 + 1) {
			fRec339[l710] = 0.0f;
		}
		for (int l711 = 0; l711 < 2; l711 = l711 + 1) {
			fRec340[l711] = 0.0f;
		}
		for (int l712 = 0; l712 < 2; l712 = l712 + 1) {
			fRec331[l712] = 0.0f;
		}
		for (int l713 = 0; l713 < 2; l713 = l713 + 1) {
			fRec332[l713] = 0.0f;
		}
		for (int l714 = 0; l714 < 2; l714 = l714 + 1) {
			fRec327[l714] = 0.0f;
		}
		for (int l715 = 0; l715 < 2; l715 = l715 + 1) {
			fRec328[l715] = 0.0f;
		}
		for (int l716 = 0; l716 < 2; l716 = l716 + 1) {
			fRec343[l716] = 0.0f;
		}
		for (int l717 = 0; l717 < 2; l717 = l717 + 1) {
			fRec344[l717] = 0.0f;
		}
		for (int l718 = 0; l718 < 2; l718 = l718 + 1) {
			fRec323[l718] = 0.0f;
		}
		for (int l719 = 0; l719 < 2; l719 = l719 + 1) {
			fRec324[l719] = 0.0f;
		}
		for (int l720 = 0; l720 < 2; l720 = l720 + 1) {
			fRec319[l720] = 0.0f;
		}
		for (int l721 = 0; l721 < 2; l721 = l721 + 1) {
			fRec320[l721] = 0.0f;
		}
		for (int l722 = 0; l722 < 2; l722 = l722 + 1) {
			fRec347[l722] = 0.0f;
		}
		for (int l723 = 0; l723 < 2; l723 = l723 + 1) {
			fRec348[l723] = 0.0f;
		}
		for (int l724 = 0; l724 < 2; l724 = l724 + 1) {
			fRec315[l724] = 0.0f;
		}
		for (int l725 = 0; l725 < 2; l725 = l725 + 1) {
			fRec316[l725] = 0.0f;
		}
		for (int l726 = 0; l726 < 2; l726 = l726 + 1) {
			fRec311[l726] = 0.0f;
		}
		for (int l727 = 0; l727 < 2; l727 = l727 + 1) {
			fRec312[l727] = 0.0f;
		}
		for (int l728 = 0; l728 < 2; l728 = l728 + 1) {
			fRec351[l728] = 0.0f;
		}
		for (int l729 = 0; l729 < 2; l729 = l729 + 1) {
			fRec352[l729] = 0.0f;
		}
		for (int l730 = 0; l730 < 2; l730 = l730 + 1) {
			fRec307[l730] = 0.0f;
		}
		for (int l731 = 0; l731 < 2; l731 = l731 + 1) {
			fRec308[l731] = 0.0f;
		}
		for (int l732 = 0; l732 < 2; l732 = l732 + 1) {
			fRec303[l732] = 0.0f;
		}
		for (int l733 = 0; l733 < 2; l733 = l733 + 1) {
			fRec304[l733] = 0.0f;
		}
		for (int l734 = 0; l734 < 2; l734 = l734 + 1) {
			fRec355[l734] = 0.0f;
		}
		for (int l735 = 0; l735 < 2; l735 = l735 + 1) {
			fRec356[l735] = 0.0f;
		}
		for (int l736 = 0; l736 < 2; l736 = l736 + 1) {
			fRec299[l736] = 0.0f;
		}
		for (int l737 = 0; l737 < 2; l737 = l737 + 1) {
			fRec300[l737] = 0.0f;
		}
		for (int l738 = 0; l738 < 2; l738 = l738 + 1) {
			fRec295[l738] = 0.0f;
		}
		for (int l739 = 0; l739 < 2; l739 = l739 + 1) {
			fRec296[l739] = 0.0f;
		}
		for (int l740 = 0; l740 < 2; l740 = l740 + 1) {
			fRec359[l740] = 0.0f;
		}
		for (int l741 = 0; l741 < 2; l741 = l741 + 1) {
			fRec360[l741] = 0.0f;
		}
		for (int l742 = 0; l742 < 2; l742 = l742 + 1) {
			fRec291[l742] = 0.0f;
		}
		for (int l743 = 0; l743 < 2; l743 = l743 + 1) {
			fRec292[l743] = 0.0f;
		}
		for (int l744 = 0; l744 < 2; l744 = l744 + 1) {
			fRec287[l744] = 0.0f;
		}
		for (int l745 = 0; l745 < 2; l745 = l745 + 1) {
			fRec288[l745] = 0.0f;
		}
		for (int l746 = 0; l746 < 2; l746 = l746 + 1) {
			fRec363[l746] = 0.0f;
		}
		for (int l747 = 0; l747 < 2; l747 = l747 + 1) {
			fRec364[l747] = 0.0f;
		}
		for (int l748 = 0; l748 < 2; l748 = l748 + 1) {
			fRec283[l748] = 0.0f;
		}
		for (int l749 = 0; l749 < 2; l749 = l749 + 1) {
			fRec284[l749] = 0.0f;
		}
		for (int l750 = 0; l750 < 2; l750 = l750 + 1) {
			fRec367[l750] = 0.0f;
		}
		for (int l751 = 0; l751 < 2; l751 = l751 + 1) {
			fRec368[l751] = 0.0f;
		}
		for (int l752 = 0; l752 < 2; l752 = l752 + 1) {
			fRec371[l752] = 0.0f;
		}
		for (int l753 = 0; l753 < 2; l753 = l753 + 1) {
			fRec372[l753] = 0.0f;
		}
		for (int l754 = 0; l754 < 2; l754 = l754 + 1) {
			fRec375[l754] = 0.0f;
		}
		for (int l755 = 0; l755 < 2; l755 = l755 + 1) {
			fRec376[l755] = 0.0f;
		}
		for (int l756 = 0; l756 < 2048; l756 = l756 + 1) {
			fVec481[l756] = 0.0f;
		}
		for (int l757 = 0; l757 < 2; l757 = l757 + 1) {
			iRec2[l757] = 0;
		}
		for (int l758 = 0; l758 < 2; l758 = l758 + 1) {
			fRec3[l758] = 0.0f;
		}
		for (int l759 = 0; l759 < 2; l759 = l759 + 1) {
			fRec1[l759] = 0.0f;
		}
		for (int l760 = 0; l760 < 2; l760 = l760 + 1) {
			fRec0[l760] = 0.0f;
		}
		for (int l761 = 0; l761 < 2; l761 = l761 + 1) {
			fVec482[l761] = 0.0f;
		}
		for (int l762 = 0; l762 < 2; l762 = l762 + 1) {
			fVec483[l762] = 0.0f;
		}
		for (int l763 = 0; l763 < 2; l763 = l763 + 1) {
			fRec382[l763] = 0.0f;
		}
		for (int l764 = 0; l764 < 2; l764 = l764 + 1) {
			fRec381[l764] = 0.0f;
		}
		for (int l765 = 0; l765 < 2; l765 = l765 + 1) {
			fVec484[l765] = 0.0f;
		}
		for (int l766 = 0; l766 < 2; l766 = l766 + 1) {
			fRec380[l766] = 0.0f;
		}
		for (int l767 = 0; l767 < 2; l767 = l767 + 1) {
			fRec379[l767] = 0.0f;
		}
		for (int l768 = 0; l768 < 2; l768 = l768 + 1) {
			fVec485[l768] = 0.0f;
		}
		for (int l769 = 0; l769 < 3; l769 = l769 + 1) {
			fVec486[l769] = 0.0f;
		}
		for (int l770 = 0; l770 < 7; l770 = l770 + 1) {
			fVec487[l770] = 0.0f;
		}
		for (int l771 = 0; l771 < 15; l771 = l771 + 1) {
			fVec488[l771] = 0.0f;
		}
		for (int l772 = 0; l772 < 32; l772 = l772 + 1) {
			fVec489[l772] = 0.0f;
		}
		for (int l773 = 0; l773 < 64; l773 = l773 + 1) {
			fVec490[l773] = 0.0f;
		}
		for (int l774 = 0; l774 < 128; l774 = l774 + 1) {
			fVec491[l774] = 0.0f;
		}
		for (int l775 = 0; l775 < 256; l775 = l775 + 1) {
			fVec492[l775] = 0.0f;
		}
		for (int l776 = 0; l776 < 512; l776 = l776 + 1) {
			fVec493[l776] = 0.0f;
		}
		for (int l777 = 0; l777 < 1024; l777 = l777 + 1) {
			fVec494[l777] = 0.0f;
		}
		for (int l778 = 0; l778 < 2048; l778 = l778 + 1) {
			fVec495[l778] = 0.0f;
		}
		for (int l779 = 0; l779 < 4096; l779 = l779 + 1) {
			fVec496[l779] = 0.0f;
		}
		for (int l780 = 0; l780 < 8192; l780 = l780 + 1) {
			fVec497[l780] = 0.0f;
		}
		for (int l781 = 0; l781 < 16384; l781 = l781 + 1) {
			fVec498[l781] = 0.0f;
		}
		for (int l782 = 0; l782 < 32768; l782 = l782 + 1) {
			fVec499[l782] = 0.0f;
		}
		for (int l783 = 0; l783 < 65536; l783 = l783 + 1) {
			fVec500[l783] = 0.0f;
		}
		for (int l784 = 0; l784 < 131072; l784 = l784 + 1) {
			fVec501[l784] = 0.0f;
		}
		for (int l785 = 0; l785 < 2; l785 = l785 + 1) {
			fVec502[l785] = 0.0f;
		}
		for (int l786 = 0; l786 < 2; l786 = l786 + 1) {
			fVec503[l786] = 0.0f;
		}
		for (int l787 = 0; l787 < 2; l787 = l787 + 1) {
			fRec386[l787] = 0.0f;
		}
		for (int l788 = 0; l788 < 2; l788 = l788 + 1) {
			fRec385[l788] = 0.0f;
		}
		for (int l789 = 0; l789 < 2; l789 = l789 + 1) {
			fVec504[l789] = 0.0f;
		}
		for (int l790 = 0; l790 < 2; l790 = l790 + 1) {
			fRec384[l790] = 0.0f;
		}
		for (int l791 = 0; l791 < 2; l791 = l791 + 1) {
			fRec383[l791] = 0.0f;
		}
		for (int l792 = 0; l792 < 2; l792 = l792 + 1) {
			fVec505[l792] = 0.0f;
		}
		for (int l793 = 0; l793 < 3; l793 = l793 + 1) {
			fVec506[l793] = 0.0f;
		}
		for (int l794 = 0; l794 < 7; l794 = l794 + 1) {
			fVec507[l794] = 0.0f;
		}
		for (int l795 = 0; l795 < 15; l795 = l795 + 1) {
			fVec508[l795] = 0.0f;
		}
		for (int l796 = 0; l796 < 32; l796 = l796 + 1) {
			fVec509[l796] = 0.0f;
		}
		for (int l797 = 0; l797 < 64; l797 = l797 + 1) {
			fVec510[l797] = 0.0f;
		}
		for (int l798 = 0; l798 < 128; l798 = l798 + 1) {
			fVec511[l798] = 0.0f;
		}
		for (int l799 = 0; l799 < 256; l799 = l799 + 1) {
			fVec512[l799] = 0.0f;
		}
		for (int l800 = 0; l800 < 512; l800 = l800 + 1) {
			fVec513[l800] = 0.0f;
		}
		for (int l801 = 0; l801 < 1024; l801 = l801 + 1) {
			fVec514[l801] = 0.0f;
		}
		for (int l802 = 0; l802 < 2048; l802 = l802 + 1) {
			fVec515[l802] = 0.0f;
		}
		for (int l803 = 0; l803 < 4096; l803 = l803 + 1) {
			fVec516[l803] = 0.0f;
		}
		for (int l804 = 0; l804 < 8192; l804 = l804 + 1) {
			fVec517[l804] = 0.0f;
		}
		for (int l805 = 0; l805 < 16384; l805 = l805 + 1) {
			fVec518[l805] = 0.0f;
		}
		for (int l806 = 0; l806 < 32768; l806 = l806 + 1) {
			fVec519[l806] = 0.0f;
		}
		for (int l807 = 0; l807 < 65536; l807 = l807 + 1) {
			fVec520[l807] = 0.0f;
		}
		for (int l808 = 0; l808 < 131072; l808 = l808 + 1) {
			fVec521[l808] = 0.0f;
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
		ui_interface->declare(&fCheckbox2, "1", "");
		ui_interface->addCheckButton("prefilter", &fCheckbox2);
		ui_interface->declare(&fCheckbox1, "2", "");
		ui_interface->addCheckButton("ballancer", &fCheckbox1);
		ui_interface->declare(&fCheckbox3, "3", "");
		ui_interface->addCheckButton("leveler", &fCheckbox3);
		ui_interface->declare(&fCheckbox0, "4", "");
		ui_interface->addCheckButton("comp", &fCheckbox0);
		ui_interface->closeBox();
		ui_interface->declare(0, "1", "");
		ui_interface->openVerticalBox("Spectral Ballancer");
		ui_interface->openHorizontalBox("Target Spectrum");
		ui_interface->openHorizontalBox("Parameters");
		ui_interface->declare(&fVslider2, "2", "");
		ui_interface->declare(&fVslider2, "symbol", "spectral_ballancer_timbre");
		ui_interface->addVerticalSlider("timbre", &fVslider2, FAUSTFLOAT(0.5f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.00999999978f));
		ui_interface->closeBox();
		ui_interface->closeBox();
		ui_interface->declare(0, "3", "");
		ui_interface->openHorizontalBox("resulting gain");
		ui_interface->declare(&fVbargraph3, "1", "");
		ui_interface->declare(&fVbargraph3, "symbol", "spectral_ballancer_gain_band_ 0");
		ui_interface->addVerticalBargraph("gr  0", &fVbargraph3, FAUSTFLOAT(-20.0f), FAUSTFLOAT(20.0f));
		ui_interface->declare(&fVbargraph4, "1", "");
		ui_interface->declare(&fVbargraph4, "symbol", "spectral_ballancer_gain_band_ 1");
		ui_interface->addVerticalBargraph("gr  1", &fVbargraph4, FAUSTFLOAT(-20.0f), FAUSTFLOAT(20.0f));
		ui_interface->declare(&fVbargraph5, "1", "");
		ui_interface->declare(&fVbargraph5, "symbol", "spectral_ballancer_gain_band_ 2");
		ui_interface->addVerticalBargraph("gr  2", &fVbargraph5, FAUSTFLOAT(-20.0f), FAUSTFLOAT(20.0f));
		ui_interface->declare(&fVbargraph6, "1", "");
		ui_interface->declare(&fVbargraph6, "symbol", "spectral_ballancer_gain_band_ 3");
		ui_interface->addVerticalBargraph("gr  3", &fVbargraph6, FAUSTFLOAT(-20.0f), FAUSTFLOAT(20.0f));
		ui_interface->declare(&fVbargraph7, "1", "");
		ui_interface->declare(&fVbargraph7, "symbol", "spectral_ballancer_gain_band_ 4");
		ui_interface->addVerticalBargraph("gr  4", &fVbargraph7, FAUSTFLOAT(-20.0f), FAUSTFLOAT(20.0f));
		ui_interface->declare(&fVbargraph8, "1", "");
		ui_interface->declare(&fVbargraph8, "symbol", "spectral_ballancer_gain_band_ 5");
		ui_interface->addVerticalBargraph("gr  5", &fVbargraph8, FAUSTFLOAT(-20.0f), FAUSTFLOAT(20.0f));
		ui_interface->declare(&fVbargraph9, "1", "");
		ui_interface->declare(&fVbargraph9, "symbol", "spectral_ballancer_gain_band_ 6");
		ui_interface->addVerticalBargraph("gr  6", &fVbargraph9, FAUSTFLOAT(-20.0f), FAUSTFLOAT(20.0f));
		ui_interface->declare(&fVbargraph10, "1", "");
		ui_interface->declare(&fVbargraph10, "symbol", "spectral_ballancer_gain_band_ 7");
		ui_interface->addVerticalBargraph("gr  7", &fVbargraph10, FAUSTFLOAT(-20.0f), FAUSTFLOAT(20.0f));
		ui_interface->declare(&fVbargraph11, "1", "");
		ui_interface->declare(&fVbargraph11, "symbol", "spectral_ballancer_gain_band_ 8");
		ui_interface->addVerticalBargraph("gr  8", &fVbargraph11, FAUSTFLOAT(-20.0f), FAUSTFLOAT(20.0f));
		ui_interface->declare(&fVbargraph12, "1", "");
		ui_interface->declare(&fVbargraph12, "symbol", "spectral_ballancer_gain_band_ 9");
		ui_interface->addVerticalBargraph("gr  9", &fVbargraph12, FAUSTFLOAT(-20.0f), FAUSTFLOAT(20.0f));
		ui_interface->declare(&fVbargraph13, "1", "");
		ui_interface->declare(&fVbargraph13, "symbol", "spectral_ballancer_gain_band_10");
		ui_interface->addVerticalBargraph("gr 10", &fVbargraph13, FAUSTFLOAT(-20.0f), FAUSTFLOAT(20.0f));
		ui_interface->declare(&fVbargraph14, "1", "");
		ui_interface->declare(&fVbargraph14, "symbol", "spectral_ballancer_gain_band_11");
		ui_interface->addVerticalBargraph("gr 11", &fVbargraph14, FAUSTFLOAT(-20.0f), FAUSTFLOAT(20.0f));
		ui_interface->declare(&fVbargraph15, "1", "");
		ui_interface->declare(&fVbargraph15, "symbol", "spectral_ballancer_gain_band_12");
		ui_interface->addVerticalBargraph("gr 12", &fVbargraph15, FAUSTFLOAT(-20.0f), FAUSTFLOAT(20.0f));
		ui_interface->declare(&fVbargraph16, "1", "");
		ui_interface->declare(&fVbargraph16, "symbol", "spectral_ballancer_gain_band_13");
		ui_interface->addVerticalBargraph("gr 13", &fVbargraph16, FAUSTFLOAT(-20.0f), FAUSTFLOAT(20.0f));
		ui_interface->declare(&fVbargraph17, "1", "");
		ui_interface->declare(&fVbargraph17, "symbol", "spectral_ballancer_gain_band_14");
		ui_interface->addVerticalBargraph("gr 14", &fVbargraph17, FAUSTFLOAT(-20.0f), FAUSTFLOAT(20.0f));
		ui_interface->declare(&fVbargraph18, "1", "");
		ui_interface->declare(&fVbargraph18, "symbol", "spectral_ballancer_gain_band_15");
		ui_interface->addVerticalBargraph("gr 15", &fVbargraph18, FAUSTFLOAT(-20.0f), FAUSTFLOAT(20.0f));
		ui_interface->declare(&fVbargraph19, "1", "");
		ui_interface->declare(&fVbargraph19, "symbol", "spectral_ballancer_gain_band_16");
		ui_interface->addVerticalBargraph("gr 16", &fVbargraph19, FAUSTFLOAT(-20.0f), FAUSTFLOAT(20.0f));
		ui_interface->declare(&fVbargraph20, "1", "");
		ui_interface->declare(&fVbargraph20, "symbol", "spectral_ballancer_gain_band_17");
		ui_interface->addVerticalBargraph("gr 17", &fVbargraph20, FAUSTFLOAT(-20.0f), FAUSTFLOAT(20.0f));
		ui_interface->declare(&fVbargraph21, "1", "");
		ui_interface->declare(&fVbargraph21, "symbol", "spectral_ballancer_gain_band_18");
		ui_interface->addVerticalBargraph("gr 18", &fVbargraph21, FAUSTFLOAT(-20.0f), FAUSTFLOAT(20.0f));
		ui_interface->declare(&fVbargraph22, "1", "");
		ui_interface->declare(&fVbargraph22, "symbol", "spectral_ballancer_gain_band_19");
		ui_interface->addVerticalBargraph("gr 19", &fVbargraph22, FAUSTFLOAT(-20.0f), FAUSTFLOAT(20.0f));
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
		ui_interface->declare(&fVbargraph1, "symbol", "input_vu_channel_0");
		ui_interface->addVerticalBargraph("InVU 0", &fVbargraph1, FAUSTFLOAT(-60.0f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph2, "symbol", "input_vu_channel_1");
		ui_interface->addVerticalBargraph("InVU 1", &fVbargraph2, FAUSTFLOAT(-60.0f), FAUSTFLOAT(0.0f));
		ui_interface->closeBox();
		ui_interface->declare(0, "2", "");
		ui_interface->openHorizontalBox("Leveler");
		ui_interface->declare(&fVbargraph0, "1", "");
		ui_interface->declare(&fVbargraph0, "symbol", "leveler_gain");
		ui_interface->declare(&fVbargraph0, "unit", "dB");
		ui_interface->addVerticalBargraph("gain", &fVbargraph0, FAUSTFLOAT(-50.0f), FAUSTFLOAT(50.0f));
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
		ui_interface->addVerticalBargraph("gr 1", &fVbargraph27, FAUSTFLOAT(-6.0f), FAUSTFLOAT(6.0f));
		ui_interface->declare(&fVbargraph26, "8", "");
		ui_interface->declare(&fVbargraph26, "symbol", "multiband_compressor_gain_band_2");
		ui_interface->declare(&fVbargraph26, "unit", "dB");
		ui_interface->addVerticalBargraph("gr 2", &fVbargraph26, FAUSTFLOAT(-6.0f), FAUSTFLOAT(6.0f));
		ui_interface->declare(&fVbargraph25, "8", "");
		ui_interface->declare(&fVbargraph25, "symbol", "multiband_compressor_gain_band_3");
		ui_interface->declare(&fVbargraph25, "unit", "dB");
		ui_interface->addVerticalBargraph("gr 3", &fVbargraph25, FAUSTFLOAT(-6.0f), FAUSTFLOAT(6.0f));
		ui_interface->declare(&fVbargraph24, "8", "");
		ui_interface->declare(&fVbargraph24, "symbol", "multiband_compressor_gain_band_4");
		ui_interface->declare(&fVbargraph24, "unit", "dB");
		ui_interface->addVerticalBargraph("gr 4", &fVbargraph24, FAUSTFLOAT(-6.0f), FAUSTFLOAT(6.0f));
		ui_interface->declare(&fVbargraph23, "8", "");
		ui_interface->declare(&fVbargraph23, "symbol", "multiband_compressor_gain_band_5");
		ui_interface->declare(&fVbargraph23, "unit", "dB");
		ui_interface->addVerticalBargraph("gr 5", &fVbargraph23, FAUSTFLOAT(-6.0f), FAUSTFLOAT(6.0f));
		ui_interface->closeBox();
		ui_interface->closeBox();
		ui_interface->declare(0, "6", "");
		ui_interface->openHorizontalBox("PostStage");
		ui_interface->declare(&fVbargraph30, "symbol", "lufs_out_meter");
		ui_interface->declare(&fVbargraph30, "unit", "dB");
		ui_interface->addVerticalBargraph("lufs", &fVbargraph30, FAUSTFLOAT(-120.0f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph28, "symbol", "output_vu_channel_0");
		ui_interface->addVerticalBargraph("InVU 0", &fVbargraph28, FAUSTFLOAT(-60.0f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph29, "symbol", "output_vu_channel_1");
		ui_interface->addVerticalBargraph("InVU 1", &fVbargraph29, FAUSTFLOAT(-60.0f), FAUSTFLOAT(0.0f));
		ui_interface->closeBox();
		ui_interface->closeBox();
		ui_interface->closeBox();
	}
	
	FAUSTPP_VIRTUAL void compute(int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
		FAUSTFLOAT* input0 = inputs[0];
		FAUSTFLOAT* input1 = inputs[1];
		FAUSTFLOAT* output0 = outputs[0];
		FAUSTFLOAT* output1 = outputs[1];
		float fSlow0 = fConst3 * float(fCheckbox0);
		float fSlow1 = float(fVslider0);
		float fSlow2 = fSlow1 + 10.0f;
		float fSlow3 = fSlow1 + 10.0f;
		float fSlow4 = fConst3 * float(fCheckbox1);
		float fSlow5 = fConst3 * std::pow(10.0f, 0.0500000007f * float(fVslider1));
		float fSlow6 = fConst3 * float(fCheckbox2);
		float fSlow7 = float(fVslider2);
		float fSlow8 = 2.0f * fSlow7;
		float fSlow9 = 3.0f * fSlow7;
		float fSlow10 = 4.0f * fSlow7;
		float fSlow11 = 5.0f * fSlow7;
		float fSlow12 = 6.0f * fSlow7;
		float fSlow13 = 9.0f * fSlow7;
		float fSlow14 = 13.0f * fSlow7;
		float fSlow15 = fConst3 * float(fCheckbox3);
		float fSlow16 = float(fVslider3);
		float fSlow17 = fSlow16 + 1.0f;
		float fSlow18 = 0.400000006f * fSlow17;
		float fSlow19 = 4.0f * fSlow16;
		float fSlow20 = fSlow1 + -2.5f - fSlow19;
		float fSlow21 = fSlow1 + 6.5f - fSlow19;
		float fSlow22 = 0.00499999989f - 0.00300000003f * fSlow16;
		int iSlow23 = std::fabs(fSlow22) < 1.1920929e-07f;
		float fThen422 = std::exp(0.0f - fConst364 / ((iSlow23) ? 1.0f : fSlow22));
		float fSlow24 = ((iSlow23) ? 0.0f : fThen422);
		float fSlow25 = 0.0500000007f - 0.0399999991f * fSlow16;
		int iSlow26 = std::fabs(fSlow25) < 1.1920929e-07f;
		float fThen424 = std::exp(0.0f - fConst364 / ((iSlow26) ? 1.0f : fSlow25));
		float fSlow27 = ((iSlow26) ? 0.0f : fThen424);
		float fSlow28 = 0.400000006f * fSlow16;
		float fSlow29 = fSlow28 + 0.300000012f;
		float fSlow30 = 1.0f - fSlow16;
		float fSlow31 = 4.0f * (1.0f - fSlow30);
		float fSlow32 = fSlow1 - fSlow31;
		float fSlow33 = fSlow1 + 4.0f * (fSlow30 + 1.0f);
		float fSlow34 = fSlow1 + 4.0f * fSlow30;
		float fSlow35 = 0.00400000019f * fSlow16;
		float fSlow36 = 0.00800000038f - fSlow35;
		int iSlow37 = std::fabs(fSlow36) < 1.1920929e-07f;
		float fThen432 = std::exp(0.0f - fConst364 / ((iSlow37) ? 1.0f : fSlow36));
		float fSlow38 = ((iSlow37) ? 0.0f : fThen432);
		float fSlow39 = fSlow28 + 0.200000003f;
		float fSlow40 = fSlow1 + 2.5f - fSlow19;
		float fSlow41 = fSlow1 + 9.5f - fSlow19;
		float fSlow42 = 0.00999999978f - fSlow35;
		int iSlow43 = std::fabs(fSlow42) < 1.1920929e-07f;
		float fThen440 = std::exp(0.0f - fConst364 / ((iSlow43) ? 1.0f : fSlow42));
		float fSlow44 = ((iSlow43) ? 0.0f : fThen440);
		float fSlow45 = 0.0500000007f - 0.0299999993f * fSlow16;
		int iSlow46 = std::fabs(fSlow45) < 1.1920929e-07f;
		float fThen442 = std::exp(0.0f - fConst364 / ((iSlow46) ? 1.0f : fSlow45));
		float fSlow47 = ((iSlow46) ? 0.0f : fThen442);
		float fSlow48 = 0.300000012f * fSlow16 + 0.200000003f;
		float fSlow49 = fSlow1 + 5.0f - fSlow19;
		float fSlow50 = fSlow1 + 11.0f - fSlow19;
		float fSlow51 = 0.0120000001f - fSlow35;
		int iSlow52 = std::fabs(fSlow51) < 1.1920929e-07f;
		float fThen450 = std::exp(0.0f - fConst364 / ((iSlow52) ? 1.0f : fSlow51));
		float fSlow53 = ((iSlow52) ? 0.0f : fThen450);
		float fSlow54 = 0.0500000007f - 0.0199999996f * fSlow16;
		int iSlow55 = std::fabs(fSlow54) < 1.1920929e-07f;
		float fThen452 = std::exp(0.0f - fConst364 / ((iSlow55) ? 1.0f : fSlow54));
		float fSlow56 = ((iSlow55) ? 0.0f : fThen452);
		float fSlow57 = 0.200000003f * fSlow17;
		float fSlow58 = 3.0f * fSlow16;
		float fSlow59 = fSlow1 + -1.0f - fSlow58;
		float fSlow60 = fSlow1 + 5.0f - fSlow58;
		float fSlow61 = 0.0149999997f - 0.00499999989f * fSlow16;
		int iSlow62 = std::fabs(fSlow61) < 1.1920929e-07f;
		float fThen460 = std::exp(0.0f - fConst364 / ((iSlow62) ? 1.0f : fSlow61));
		float fSlow63 = ((iSlow62) ? 0.0f : fThen460);
		for (int i0 = 0; i0 < count; i0 = i0 + 1) {
			fRec4[0] = fSlow0 + fConst4 * fRec4[1];
			float fTemp0 = std::fabs(std::fabs(fRec5[1]) + std::fabs(fRec6[1]));
			fVec0[0] = fTemp0;
			float fTemp1 = std::max<float>(fTemp0, fVec0[1]);
			fVec1[0] = fTemp1;
			float fElse1 = fVec1[iConst8];
			float fTemp2 = std::max<float>(fTemp1, fVec1[2]);
			fVec2[0] = fTemp2;
			float fElse2 = fVec2[iConst14];
			float fTemp3 = std::max<float>(fTemp2, fVec2[4]);
			fVec3[0] = fTemp3;
			float fElse3 = fVec3[iConst18];
			fVec4[IOTA0 & 31] = std::max<float>(fTemp3, fVec3[8]);
			float fElse4 = fVec4[(IOTA0 - iConst20) & 31];
			float fTemp4 = 20.0f * std::log10(std::max<float>(1.17549435e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst8) ? fTemp0 : -3.40282347e+38f), ((iConst10) ? fElse1 : -3.40282347e+38f)), ((iConst12) ? fElse2 : -3.40282347e+38f)), ((iConst16) ? fElse3 : -3.40282347e+38f)), ((iConst19) ? fElse4 : -3.40282347e+38f))));
			int iTemp5 = (fTemp4 > fSlow2) + (fTemp4 > fSlow3);
			float fElse5 = 0.0f - 4194304.0f * mydsp_faustpower2_f((fTemp4 + -10.0f) - fSlow1);
			float fThen6 = ((iTemp5 == 1) ? fElse5 : 0.0f);
			float fElse6 = (fTemp4 + -10.0f) - fSlow1;
			float fTemp6 = std::max<float>(-3.40282347e+38f, ((iTemp5 == 0) ? fElse6 : fThen6));
			float fTemp7 = ((fTemp6 > fRec15[1]) ? 0.0f : fConst21);
			fRec15[0] = fTemp6 * (1.0f - fTemp7) + fRec15[1] * fTemp7;
			float fTemp8 = std::min<float>(1.0f, std::max<float>(0.0f, std::pow(10.0f, 0.0500000007f * fRec15[0])));
			float fTemp9 = std::tan(fConst5 * std::min<float>(fConst6, fTemp8 * (fConst22 * std::fabs(fRec8[1]) + 0.131600007f)));
			fVec5[0] = 0.0f - fConst32 * (fConst33 * fRec18[1] - fConst34 * fRec5[2]);
			fRec19[0] = fVec5[1] + fConst32 * (fConst35 * fRec5[1] - 2.0f * (fConst37 * fRec19[1] - fConst38 * fRec5[2]));
			fRec18[0] = fRec19[0];
			fVec6[0] = 0.500327051f * fRec18[1] - fConst40 * fRec16[1];
			fRec17[0] = fConst30 * fRec18[1] + fConst39 * (fVec6[1] - fConst41 * fRec17[1] + 0.500327051f * fRec18[0]);
			fRec16[0] = fRec17[0];
			float fTemp10 = mydsp_faustpower2_f(fRec16[0]);
			fVec7[0] = fTemp10;
			float fTemp11 = fTemp10 + fVec7[1];
			fVec8[0] = fTemp11;
			float fTemp12 = fTemp11 + fVec8[2];
			fVec9[0] = fTemp12;
			float fTemp13 = fTemp12 + fVec9[4];
			fVec10[0] = fTemp13;
			float fTemp14 = fTemp13 + fVec10[8];
			fVec11[IOTA0 & 31] = fTemp14;
			float fTemp15 = fTemp14 + fVec11[(IOTA0 - 16) & 31];
			fVec12[IOTA0 & 63] = fTemp15;
			float fTemp16 = fTemp15 + fVec12[(IOTA0 - 32) & 63];
			fVec13[IOTA0 & 127] = fTemp16;
			float fTemp17 = fTemp16 + fVec13[(IOTA0 - 64) & 127];
			fVec14[IOTA0 & 255] = fTemp17;
			float fTemp18 = fTemp17 + fVec14[(IOTA0 - 128) & 255];
			fVec15[IOTA0 & 511] = fTemp18;
			float fTemp19 = fTemp18 + fVec15[(IOTA0 - 256) & 511];
			fVec16[IOTA0 & 1023] = fTemp19;
			fVec17[IOTA0 & 2047] = fTemp19 + fVec16[(IOTA0 - 512) & 1023];
			float fElse8 = 0.860009849f * fVec17[(IOTA0 - iConst60) & 2047];
			float fElse9 = 0.860009849f * fVec16[(IOTA0 - iConst62) & 1023];
			float fElse10 = 0.860009849f * fVec15[(IOTA0 - iConst64) & 511];
			float fElse11 = 0.860009849f * fVec14[(IOTA0 - iConst66) & 255];
			float fElse12 = 0.860009849f * fVec13[(IOTA0 - iConst68) & 127];
			float fElse13 = 0.860009849f * fVec12[(IOTA0 - iConst70) & 63];
			float fElse14 = 0.860009849f * fVec11[(IOTA0 - iConst72) & 31];
			float fElse15 = 0.860009849f * fVec10[iConst74];
			float fElse16 = 0.860009849f * fVec9[iConst76];
			float fElse17 = 0.860009849f * fTemp10;
			float fElse18 = 0.860009849f * fVec8[iConst77];
			fVec18[0] = 0.0f - fConst32 * (fConst33 * fRec22[1] - fConst34 * fRec6[2]);
			fRec23[0] = fVec18[1] + fConst32 * (fConst35 * fRec6[1] - 2.0f * (fConst37 * fRec23[1] - fConst38 * fRec6[2]));
			fRec22[0] = fRec23[0];
			fVec19[0] = 0.500327051f * fRec22[1] - fConst40 * fRec20[1];
			fRec21[0] = fConst30 * fRec22[1] + fConst39 * (fVec19[1] - fConst41 * fRec21[1] + 0.500327051f * fRec22[0]);
			fRec20[0] = fRec21[0];
			float fTemp20 = mydsp_faustpower2_f(fRec20[0]);
			fVec20[0] = fTemp20;
			float fTemp21 = fTemp20 + fVec20[1];
			fVec21[0] = fTemp21;
			float fTemp22 = fTemp21 + fVec21[2];
			fVec22[0] = fTemp22;
			float fTemp23 = fTemp22 + fVec22[4];
			fVec23[0] = fTemp23;
			float fTemp24 = fTemp23 + fVec23[8];
			fVec24[IOTA0 & 31] = fTemp24;
			float fTemp25 = fTemp24 + fVec24[(IOTA0 - 16) & 31];
			fVec25[IOTA0 & 63] = fTemp25;
			float fTemp26 = fTemp25 + fVec25[(IOTA0 - 32) & 63];
			fVec26[IOTA0 & 127] = fTemp26;
			float fTemp27 = fTemp26 + fVec26[(IOTA0 - 64) & 127];
			fVec27[IOTA0 & 255] = fTemp27;
			float fTemp28 = fTemp27 + fVec27[(IOTA0 - 128) & 255];
			fVec28[IOTA0 & 511] = fTemp28;
			float fTemp29 = fTemp28 + fVec28[(IOTA0 - 256) & 511];
			fVec29[IOTA0 & 1023] = fTemp29;
			fVec30[IOTA0 & 2047] = fTemp29 + fVec29[(IOTA0 - 512) & 1023];
			float fElse19 = 0.860009849f * fVec30[(IOTA0 - iConst60) & 2047];
			float fElse20 = 0.860009849f * fVec29[(IOTA0 - iConst62) & 1023];
			float fElse21 = 0.860009849f * fVec28[(IOTA0 - iConst64) & 511];
			float fElse22 = 0.860009849f * fVec27[(IOTA0 - iConst66) & 255];
			float fElse23 = 0.860009849f * fVec26[(IOTA0 - iConst68) & 127];
			float fElse24 = 0.860009849f * fVec25[(IOTA0 - iConst70) & 63];
			float fElse25 = 0.860009849f * fVec24[(IOTA0 - iConst72) & 31];
			float fElse26 = 0.860009849f * fVec23[iConst74];
			float fElse27 = 0.860009849f * fVec22[iConst76];
			float fElse28 = 0.860009849f * fTemp20;
			float fElse29 = 0.860009849f * fVec21[iConst77];
			float fTemp30 = fTemp9 + 2.0f;
			float fTemp31 = fSlow1 + fRec7[1] + 0.690999985f - (4.34294462f * std::log(std::max<float>(9.99999996e-13f, fConst25 * (((iConst26) ? fElse8 : 0.0f) + ((iConst61) ? fElse9 : 0.0f) + ((iConst63) ? fElse10 : 0.0f) + ((iConst65) ? fElse11 : 0.0f) + ((iConst67) ? fElse12 : 0.0f) + ((iConst69) ? fElse13 : 0.0f) + ((iConst71) ? fElse14 : 0.0f) + ((iConst73) ? fElse15 : 0.0f) + ((iConst75) ? fElse16 : 0.0f) + ((iConst77) ? fElse17 : 0.0f) + ((iConst78) ? fElse18 : 0.0f) + ((iConst26) ? fElse19 : 0.0f) + ((iConst61) ? fElse20 : 0.0f) + ((iConst63) ? fElse21 : 0.0f) + ((iConst65) ? fElse22 : 0.0f) + ((iConst67) ? fElse23 : 0.0f) + ((iConst69) ? fElse24 : 0.0f) + ((iConst71) ? fElse25 : 0.0f) + ((iConst73) ? fElse26 : 0.0f) + ((iConst75) ? fElse27 : 0.0f) + ((iConst77) ? fElse28 : 0.0f) + ((iConst78) ? fElse29 : 0.0f)))) + fRec10[1] * fTemp30 + fRec11[1]);
			float fTemp32 = fTemp9 * fTemp30 + 1.0f;
			float fTemp33 = (fTemp9 * fTemp31) / fTemp32;
			fRec10[0] = fRec10[1] + 2.0f * fTemp33;
			float fTemp34 = fRec10[1] + fTemp33;
			float fTemp35 = fTemp9 * fTemp34;
			fRec11[0] = fRec11[1] + 2.0f * fTemp35;
			float fRec12 = fTemp34;
			float fRec13 = fTemp31 / fTemp32;
			float fRec14 = fRec11[1] + fTemp35;
			fRec8[0] = fRec12;
			float fRec9 = fRec14;
			fVbargraph0 = FAUSTFLOAT(std::max<float>(-30.0f, std::min<float>(30.0f, fRec9)));
			fRec7[0] = fVbargraph0;
			float fTemp36 = std::pow(10.0f, 0.0500000007f * fRec7[0]);
			fRec24[0] = fSlow4 + fConst4 * fRec24[1];
			float fTemp37 = float(input0[i0]);
			fVbargraph1 = FAUSTFLOAT(20.0f * std::log10(std::max<float>(1.17549435e-38f, std::fabs(fTemp37))));
			float fTemp38 = fTemp37;
			fRec25[0] = fSlow5 + fConst4 * fRec25[1];
			float fTemp39 = fTemp38 * fRec25[0];
			fRec26[0] = fSlow6 + fConst4 * fRec26[1];
			float fTemp40 = 1.0f - fRec26[0];
			fRec28[0] = fTemp39 - fConst84 * (fConst87 * fRec28[2] + fConst88 * fRec28[1]);
			fRec27[0] = fConst84 * (fConst86 * fRec28[0] + fConst89 * fRec28[1] + fConst86 * fRec28[2]) - fConst81 * (fConst90 * fRec27[2] + fConst91 * fRec27[1]);
			float fTemp41 = fRec27[2] + fRec27[0] + 2.0f * fRec27[1];
			float fTemp42 = float(input1[i0]);
			fVbargraph2 = FAUSTFLOAT(20.0f * std::log10(std::max<float>(1.17549435e-38f, std::fabs(fTemp42))));
			float fTemp43 = fTemp42;
			float fTemp44 = fTemp43 * fRec25[0];
			fRec35[0] = fTemp44 - fConst84 * (fConst87 * fRec35[2] + fConst88 * fRec35[1]);
			fRec34[0] = fConst84 * (fConst86 * fRec35[0] + fConst89 * fRec35[1] + fConst86 * fRec35[2]) - fConst81 * (fConst90 * fRec34[2] + fConst91 * fRec34[1]);
			float fTemp45 = fRec34[2] + fRec34[0] + 2.0f * fRec34[1];
			float fTemp46 = fRec25[0] * fRec26[0] * (fTemp43 + fTemp38) + fConst81 * fTemp40 * (fTemp41 + fTemp45);
			fVec31[0] = fTemp46;
			float fTemp47 = 0.5f * fTemp46;
			fRec33[0] = fTemp47 - fConst98 * (fConst99 * fRec33[2] + fConst88 * fRec33[1]);
			float fTemp48 = fConst97 * fRec33[0] + fConst100 * fRec33[2];
			fVec32[IOTA0 & 32767] = fTemp48;
			float fTemp49 = fVec32[(IOTA0 - 1) & 32767];
			fVec33[0] = fConst95 * fTemp49 - fConst33 * fRec31[1];
			fRec32[0] = fConst32 * (fVec33[1] - fConst101 * fRec32[1] + fConst102 * fTemp49 + fConst103 * fTemp48);
			fRec31[0] = fRec32[0];
			fVec34[0] = 0.500327051f * fRec31[1] - fConst40 * fRec29[1];
			fRec30[0] = fConst30 * fRec31[1] + fConst39 * (fVec34[1] - fConst41 * fRec30[1] + 0.500327051f * fRec31[0]);
			fRec29[0] = fRec30[0];
			float fTemp50 = mydsp_faustpower2_f(fRec29[0]);
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
			float fElse30 = 0.860009849f * fVec52[(IOTA0 - iConst136) & 262143];
			float fElse31 = 0.860009849f * fVec51[(IOTA0 - iConst138) & 131071];
			float fElse32 = 0.860009849f * fVec50[(IOTA0 - iConst140) & 65535];
			float fElse33 = 0.860009849f * fVec49[(IOTA0 - iConst142) & 32767];
			float fElse34 = 0.860009849f * fVec48[(IOTA0 - iConst144) & 16383];
			float fElse35 = 0.860009849f * fVec47[(IOTA0 - iConst146) & 8191];
			float fElse36 = 0.860009849f * fVec46[(IOTA0 - iConst148) & 4095];
			float fElse37 = 0.860009849f * fVec45[(IOTA0 - iConst150) & 2047];
			float fElse38 = 0.860009849f * fVec44[(IOTA0 - iConst152) & 1023];
			float fElse39 = 0.860009849f * fVec43[(IOTA0 - iConst154) & 511];
			float fElse40 = 0.860009849f * fVec42[(IOTA0 - iConst156) & 255];
			float fElse41 = 0.860009849f * fVec41[(IOTA0 - iConst158) & 127];
			float fElse42 = 0.860009849f * fVec40[(IOTA0 - iConst160) & 63];
			float fElse43 = 0.860009849f * fVec39[(IOTA0 - iConst162) & 31];
			float fElse44 = 0.860009849f * fVec38[iConst164];
			float fElse45 = 0.860009849f * fVec37[iConst166];
			float fElse46 = 0.860009849f * fTemp50;
			float fElse47 = 0.860009849f * fVec36[iConst167];
			fVec53[0] = fConst169 * fVec31[1] - fConst33 * fRec38[1];
			fRec39[0] = fConst32 * (fVec53[1] - fConst101 * fRec39[1] + fConst38 * fVec31[1] + fConst170 * fTemp46);
			fRec38[0] = fRec39[0];
			fVec54[0] = 0.500327051f * fRec38[1] - fConst40 * fRec36[1];
			fRec37[0] = fConst30 * fRec38[1] + fConst39 * (fVec54[1] - fConst41 * fRec37[1] + 0.500327051f * fRec38[0]);
			fRec36[0] = fRec37[0];
			float fTemp67 = mydsp_faustpower2_f(fRec36[0]);
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
			float fElse48 = 0.860009849f * fVec72[(IOTA0 - iConst136) & 262143];
			float fElse49 = 0.860009849f * fVec71[(IOTA0 - iConst138) & 131071];
			float fElse50 = 0.860009849f * fVec70[(IOTA0 - iConst140) & 65535];
			float fElse51 = 0.860009849f * fVec69[(IOTA0 - iConst142) & 32767];
			float fElse52 = 0.860009849f * fVec68[(IOTA0 - iConst144) & 16383];
			float fElse53 = 0.860009849f * fVec67[(IOTA0 - iConst146) & 8191];
			float fElse54 = 0.860009849f * fVec66[(IOTA0 - iConst148) & 4095];
			float fElse55 = 0.860009849f * fVec65[(IOTA0 - iConst150) & 2047];
			float fElse56 = 0.860009849f * fVec64[(IOTA0 - iConst152) & 1023];
			float fElse57 = 0.860009849f * fVec63[(IOTA0 - iConst154) & 511];
			float fElse58 = 0.860009849f * fVec62[(IOTA0 - iConst156) & 255];
			float fElse59 = 0.860009849f * fVec61[(IOTA0 - iConst158) & 127];
			float fElse60 = 0.860009849f * fVec60[(IOTA0 - iConst160) & 63];
			float fElse61 = 0.860009849f * fVec59[(IOTA0 - iConst162) & 31];
			float fElse62 = 0.860009849f * fVec58[iConst164];
			float fElse63 = 0.860009849f * fVec57[iConst166];
			float fElse64 = 0.860009849f * fTemp67;
			float fElse65 = 0.860009849f * fVec56[iConst167];
			float fTemp84 = std::log(std::max<float>(9.99999996e-13f, fConst93 * (((iConst94) ? fElse48 : 0.0f) + ((iConst137) ? fElse49 : 0.0f) + ((iConst139) ? fElse50 : 0.0f) + ((iConst141) ? fElse51 : 0.0f) + ((iConst143) ? fElse52 : 0.0f) + ((iConst145) ? fElse53 : 0.0f) + ((iConst147) ? fElse54 : 0.0f) + ((iConst149) ? fElse55 : 0.0f) + ((iConst151) ? fElse56 : 0.0f) + ((iConst153) ? fElse57 : 0.0f) + ((iConst155) ? fElse58 : 0.0f) + ((iConst157) ? fElse59 : 0.0f) + ((iConst159) ? fElse60 : 0.0f) + ((iConst161) ? fElse61 : 0.0f) + ((iConst163) ? fElse62 : 0.0f) + ((iConst165) ? fElse63 : 0.0f) + ((iConst167) ? fElse64 : 0.0f) + ((iConst168) ? fElse65 : 0.0f))));
			float fTemp85 = std::fabs(fTemp47);
			fVec73[0] = fTemp85;
			float fTemp86 = std::max<float>(fTemp85, fVec73[1]);
			fVec74[0] = fTemp86;
			float fElse67 = fVec74[iConst172];
			float fTemp87 = std::max<float>(fTemp86, fVec74[2]);
			fVec75[0] = fTemp87;
			float fElse68 = fVec75[iConst178];
			float fTemp88 = std::max<float>(fTemp87, fVec75[4]);
			fVec76[0] = fTemp88;
			float fElse69 = fVec76[iConst182];
			float fTemp89 = std::max<float>(fTemp88, fVec76[8]);
			fVec77[IOTA0 & 31] = fTemp89;
			float fElse70 = fVec77[(IOTA0 - iConst186) & 31];
			float fTemp90 = std::max<float>(fTemp89, fVec77[(IOTA0 - 16) & 31]);
			fVec78[IOTA0 & 63] = fTemp90;
			float fElse71 = fVec78[(IOTA0 - iConst190) & 63];
			float fTemp91 = std::max<float>(fTemp90, fVec78[(IOTA0 - 32) & 63]);
			fVec79[IOTA0 & 127] = fTemp91;
			float fElse72 = fVec79[(IOTA0 - iConst194) & 127];
			fVec80[IOTA0 & 255] = std::max<float>(fTemp91, fVec79[(IOTA0 - 64) & 127]);
			float fElse73 = fVec80[(IOTA0 - iConst196) & 255];
			float fTemp92 = std::log10(std::max<float>(1.17549435e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst172) ? fTemp85 : -3.40282347e+38f), ((iConst174) ? fElse67 : -3.40282347e+38f)), ((iConst176) ? fElse68 : -3.40282347e+38f)), ((iConst180) ? fElse69 : -3.40282347e+38f)), ((iConst184) ? fElse70 : -3.40282347e+38f)), ((iConst188) ? fElse71 : -3.40282347e+38f)), ((iConst192) ? fElse72 : -3.40282347e+38f)), ((iConst195) ? fElse73 : -3.40282347e+38f))));
			float fTemp93 = 20.0f * fTemp92;
			int iTemp94 = (fTemp93 > -20.0f) + (fTemp93 > -20.0f);
			float fTemp95 = 20.0f * (fTemp92 + 1.0f);
			float fElse74 = 0.0f - 4194304.0f * mydsp_faustpower2_f(fTemp95 + -5.96046448e-08f);
			float fThen75 = ((iTemp94 == 1) ? fElse74 : 0.0f);
			float fTemp96 = std::max<float>(-3.40282347e+38f, 0.800000012f * ((iTemp94 == 0) ? fTemp95 : fThen75));
			float fTemp97 = ((fTemp96 > fRec40[1]) ? fConst198 : fConst197);
			fRec40[0] = fTemp96 * (1.0f - fTemp97) + fRec40[1] * fTemp97;
			float fTemp98 = std::min<float>(1.0f, std::max<float>(0.0f, std::pow(10.0f, 0.0500000007f * fRec40[0])));
			float fTemp99 = fTemp98;
			float fTemp100 = (-22.0f - 4.34294462f * (std::log(std::max<float>(9.99999996e-13f, fConst93 * (((iConst94) ? fElse30 : 0.0f) + ((iConst137) ? fElse31 : 0.0f) + ((iConst139) ? fElse32 : 0.0f) + ((iConst141) ? fElse33 : 0.0f) + ((iConst143) ? fElse34 : 0.0f) + ((iConst145) ? fElse35 : 0.0f) + ((iConst147) ? fElse36 : 0.0f) + ((iConst149) ? fElse37 : 0.0f) + ((iConst151) ? fElse38 : 0.0f) + ((iConst153) ? fElse39 : 0.0f) + ((iConst155) ? fElse40 : 0.0f) + ((iConst157) ? fElse41 : 0.0f) + ((iConst159) ? fElse42 : 0.0f) + ((iConst161) ? fElse43 : 0.0f) + ((iConst163) ? fElse44 : 0.0f) + ((iConst165) ? fElse45 : 0.0f) + ((iConst167) ? fElse46 : 0.0f) + ((iConst168) ? fElse47 : 0.0f)))) - fTemp84) - fSlow8) * fTemp99;
			fVbargraph3 = FAUSTFLOAT(fTemp100);
			fRec45[0] = fTemp47 - fConst204 * (fConst205 * fRec45[2] + fConst206 * fRec45[1]);
			float fTemp101 = fConst203 * fRec45[0] + fConst207 * fRec45[2];
			fVec81[IOTA0 & 32767] = fTemp101;
			float fTemp102 = fVec81[(IOTA0 - 1) & 32767];
			fVec82[0] = fConst95 * fTemp102 - fConst33 * fRec43[1];
			fRec44[0] = fConst32 * (fVec82[1] - fConst101 * fRec44[1] + fConst102 * fTemp102 + fConst103 * fTemp101);
			fRec43[0] = fRec44[0];
			fVec83[0] = 0.500327051f * fRec43[1] - fConst40 * fRec41[1];
			fRec42[0] = fConst30 * fRec43[1] + fConst39 * (fVec83[1] - fConst41 * fRec42[1] + 0.500327051f * fRec43[0]);
			fRec41[0] = fRec42[0];
			float fTemp103 = mydsp_faustpower2_f(fRec41[0]);
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
			float fElse77 = 0.860009849f * fVec101[(IOTA0 - iConst136) & 262143];
			float fElse78 = 0.860009849f * fVec100[(IOTA0 - iConst138) & 131071];
			float fElse79 = 0.860009849f * fVec99[(IOTA0 - iConst140) & 65535];
			float fElse80 = 0.860009849f * fVec98[(IOTA0 - iConst142) & 32767];
			float fElse81 = 0.860009849f * fVec97[(IOTA0 - iConst144) & 16383];
			float fElse82 = 0.860009849f * fVec96[(IOTA0 - iConst146) & 8191];
			float fElse83 = 0.860009849f * fVec95[(IOTA0 - iConst148) & 4095];
			float fElse84 = 0.860009849f * fVec94[(IOTA0 - iConst150) & 2047];
			float fElse85 = 0.860009849f * fVec93[(IOTA0 - iConst152) & 1023];
			float fElse86 = 0.860009849f * fVec92[(IOTA0 - iConst154) & 511];
			float fElse87 = 0.860009849f * fVec91[(IOTA0 - iConst156) & 255];
			float fElse88 = 0.860009849f * fVec90[(IOTA0 - iConst158) & 127];
			float fElse89 = 0.860009849f * fVec89[(IOTA0 - iConst160) & 63];
			float fElse90 = 0.860009849f * fVec88[(IOTA0 - iConst162) & 31];
			float fElse91 = 0.860009849f * fVec87[iConst164];
			float fElse92 = 0.860009849f * fVec86[iConst166];
			float fElse93 = 0.860009849f * fTemp103;
			float fElse94 = 0.860009849f * fVec85[iConst167];
			float fTemp120 = fTemp99 * ((4.34294462f * (fTemp84 - std::log(std::max<float>(9.99999996e-13f, fConst93 * (((iConst94) ? fElse77 : 0.0f) + ((iConst137) ? fElse78 : 0.0f) + ((iConst139) ? fElse79 : 0.0f) + ((iConst141) ? fElse80 : 0.0f) + ((iConst143) ? fElse81 : 0.0f) + ((iConst145) ? fElse82 : 0.0f) + ((iConst147) ? fElse83 : 0.0f) + ((iConst149) ? fElse84 : 0.0f) + ((iConst151) ? fElse85 : 0.0f) + ((iConst153) ? fElse86 : 0.0f) + ((iConst155) ? fElse87 : 0.0f) + ((iConst157) ? fElse88 : 0.0f) + ((iConst159) ? fElse89 : 0.0f) + ((iConst161) ? fElse90 : 0.0f) + ((iConst163) ? fElse91 : 0.0f) + ((iConst165) ? fElse92 : 0.0f) + ((iConst167) ? fElse93 : 0.0f) + ((iConst168) ? fElse94 : 0.0f))))) + -19.0f) - fSlow9);
			fVbargraph4 = FAUSTFLOAT(fTemp120);
			fRec50[0] = fTemp47 - fConst212 * (fConst213 * fRec50[2] + fConst214 * fRec50[1]);
			float fTemp121 = fConst211 * fRec50[0] + fConst215 * fRec50[2];
			fVec102[IOTA0 & 32767] = fTemp121;
			float fTemp122 = fVec102[(IOTA0 - 1) & 32767];
			fVec103[0] = fConst95 * fTemp122 - fConst33 * fRec48[1];
			fRec49[0] = fConst32 * (fVec103[1] - fConst101 * fRec49[1] + fConst102 * fTemp122 + fConst103 * fTemp121);
			fRec48[0] = fRec49[0];
			fVec104[0] = 0.500327051f * fRec48[1] - fConst40 * fRec46[1];
			fRec47[0] = fConst30 * fRec48[1] + fConst39 * (fVec104[1] - fConst41 * fRec47[1] + 0.500327051f * fRec48[0]);
			fRec46[0] = fRec47[0];
			float fTemp123 = mydsp_faustpower2_f(fRec46[0]);
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
			float fElse95 = 0.860009849f * fVec122[(IOTA0 - iConst136) & 262143];
			float fElse96 = 0.860009849f * fVec121[(IOTA0 - iConst138) & 131071];
			float fElse97 = 0.860009849f * fVec120[(IOTA0 - iConst140) & 65535];
			float fElse98 = 0.860009849f * fVec119[(IOTA0 - iConst142) & 32767];
			float fElse99 = 0.860009849f * fVec118[(IOTA0 - iConst144) & 16383];
			float fElse100 = 0.860009849f * fVec117[(IOTA0 - iConst146) & 8191];
			float fElse101 = 0.860009849f * fVec116[(IOTA0 - iConst148) & 4095];
			float fElse102 = 0.860009849f * fVec115[(IOTA0 - iConst150) & 2047];
			float fElse103 = 0.860009849f * fVec114[(IOTA0 - iConst152) & 1023];
			float fElse104 = 0.860009849f * fVec113[(IOTA0 - iConst154) & 511];
			float fElse105 = 0.860009849f * fVec112[(IOTA0 - iConst156) & 255];
			float fElse106 = 0.860009849f * fVec111[(IOTA0 - iConst158) & 127];
			float fElse107 = 0.860009849f * fVec110[(IOTA0 - iConst160) & 63];
			float fElse108 = 0.860009849f * fVec109[(IOTA0 - iConst162) & 31];
			float fElse109 = 0.860009849f * fVec108[iConst164];
			float fElse110 = 0.860009849f * fVec107[iConst166];
			float fElse111 = 0.860009849f * fTemp123;
			float fElse112 = 0.860009849f * fVec106[iConst167];
			float fTemp140 = fTemp99 * ((4.34294462f * (fTemp84 - std::log(std::max<float>(9.99999996e-13f, fConst93 * (((iConst94) ? fElse95 : 0.0f) + ((iConst137) ? fElse96 : 0.0f) + ((iConst139) ? fElse97 : 0.0f) + ((iConst141) ? fElse98 : 0.0f) + ((iConst143) ? fElse99 : 0.0f) + ((iConst145) ? fElse100 : 0.0f) + ((iConst147) ? fElse101 : 0.0f) + ((iConst149) ? fElse102 : 0.0f) + ((iConst151) ? fElse103 : 0.0f) + ((iConst153) ? fElse104 : 0.0f) + ((iConst155) ? fElse105 : 0.0f) + ((iConst157) ? fElse106 : 0.0f) + ((iConst159) ? fElse107 : 0.0f) + ((iConst161) ? fElse108 : 0.0f) + ((iConst163) ? fElse109 : 0.0f) + ((iConst165) ? fElse110 : 0.0f) + ((iConst167) ? fElse111 : 0.0f) + ((iConst168) ? fElse112 : 0.0f))))) + -18.0f) - fSlow8);
			fVbargraph5 = FAUSTFLOAT(fTemp140);
			fRec55[0] = fTemp47 - fConst220 * (fConst221 * fRec55[2] + fConst222 * fRec55[1]);
			float fTemp141 = fConst219 * fRec55[0] + fConst223 * fRec55[2];
			fVec123[IOTA0 & 32767] = fTemp141;
			float fTemp142 = fVec123[(IOTA0 - 1) & 32767];
			fVec124[0] = fConst95 * fTemp142 - fConst33 * fRec53[1];
			fRec54[0] = fConst32 * (fVec124[1] - fConst101 * fRec54[1] + fConst102 * fTemp142 + fConst103 * fTemp141);
			fRec53[0] = fRec54[0];
			fVec125[0] = 0.500327051f * fRec53[1] - fConst40 * fRec51[1];
			fRec52[0] = fConst30 * fRec53[1] + fConst39 * (fVec125[1] - fConst41 * fRec52[1] + 0.500327051f * fRec53[0]);
			fRec51[0] = fRec52[0];
			float fTemp143 = mydsp_faustpower2_f(fRec51[0]);
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
			float fElse113 = 0.860009849f * fVec143[(IOTA0 - iConst136) & 262143];
			float fElse114 = 0.860009849f * fVec142[(IOTA0 - iConst138) & 131071];
			float fElse115 = 0.860009849f * fVec141[(IOTA0 - iConst140) & 65535];
			float fElse116 = 0.860009849f * fVec140[(IOTA0 - iConst142) & 32767];
			float fElse117 = 0.860009849f * fVec139[(IOTA0 - iConst144) & 16383];
			float fElse118 = 0.860009849f * fVec138[(IOTA0 - iConst146) & 8191];
			float fElse119 = 0.860009849f * fVec137[(IOTA0 - iConst148) & 4095];
			float fElse120 = 0.860009849f * fVec136[(IOTA0 - iConst150) & 2047];
			float fElse121 = 0.860009849f * fVec135[(IOTA0 - iConst152) & 1023];
			float fElse122 = 0.860009849f * fVec134[(IOTA0 - iConst154) & 511];
			float fElse123 = 0.860009849f * fVec133[(IOTA0 - iConst156) & 255];
			float fElse124 = 0.860009849f * fVec132[(IOTA0 - iConst158) & 127];
			float fElse125 = 0.860009849f * fVec131[(IOTA0 - iConst160) & 63];
			float fElse126 = 0.860009849f * fVec130[(IOTA0 - iConst162) & 31];
			float fElse127 = 0.860009849f * fVec129[iConst164];
			float fElse128 = 0.860009849f * fVec128[iConst166];
			float fElse129 = 0.860009849f * fTemp143;
			float fElse130 = 0.860009849f * fVec127[iConst167];
			float fTemp160 = fTemp99 * ((4.34294462f * (fTemp84 - std::log(std::max<float>(9.99999996e-13f, fConst93 * (((iConst94) ? fElse113 : 0.0f) + ((iConst137) ? fElse114 : 0.0f) + ((iConst139) ? fElse115 : 0.0f) + ((iConst141) ? fElse116 : 0.0f) + ((iConst143) ? fElse117 : 0.0f) + ((iConst145) ? fElse118 : 0.0f) + ((iConst147) ? fElse119 : 0.0f) + ((iConst149) ? fElse120 : 0.0f) + ((iConst151) ? fElse121 : 0.0f) + ((iConst153) ? fElse122 : 0.0f) + ((iConst155) ? fElse123 : 0.0f) + ((iConst157) ? fElse124 : 0.0f) + ((iConst159) ? fElse125 : 0.0f) + ((iConst161) ? fElse126 : 0.0f) + ((iConst163) ? fElse127 : 0.0f) + ((iConst165) ? fElse128 : 0.0f) + ((iConst167) ? fElse129 : 0.0f) + ((iConst168) ? fElse130 : 0.0f))))) + -16.0f) - fSlow9);
			fVbargraph6 = FAUSTFLOAT(fTemp160);
			fRec60[0] = fTemp47 - fConst228 * (fConst229 * fRec60[2] + fConst230 * fRec60[1]);
			float fTemp161 = fConst227 * fRec60[0] + fConst231 * fRec60[2];
			fVec144[IOTA0 & 32767] = fTemp161;
			float fTemp162 = fVec144[(IOTA0 - 1) & 32767];
			fVec145[0] = fConst95 * fTemp162 - fConst33 * fRec58[1];
			fRec59[0] = fConst32 * (fVec145[1] - fConst101 * fRec59[1] + fConst102 * fTemp162 + fConst103 * fTemp161);
			fRec58[0] = fRec59[0];
			fVec146[0] = 0.500327051f * fRec58[1] - fConst40 * fRec56[1];
			fRec57[0] = fConst30 * fRec58[1] + fConst39 * (fVec146[1] - fConst41 * fRec57[1] + 0.500327051f * fRec58[0]);
			fRec56[0] = fRec57[0];
			float fTemp163 = mydsp_faustpower2_f(fRec56[0]);
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
			float fElse131 = 0.860009849f * fVec164[(IOTA0 - iConst136) & 262143];
			float fElse132 = 0.860009849f * fVec163[(IOTA0 - iConst138) & 131071];
			float fElse133 = 0.860009849f * fVec162[(IOTA0 - iConst140) & 65535];
			float fElse134 = 0.860009849f * fVec161[(IOTA0 - iConst142) & 32767];
			float fElse135 = 0.860009849f * fVec160[(IOTA0 - iConst144) & 16383];
			float fElse136 = 0.860009849f * fVec159[(IOTA0 - iConst146) & 8191];
			float fElse137 = 0.860009849f * fVec158[(IOTA0 - iConst148) & 4095];
			float fElse138 = 0.860009849f * fVec157[(IOTA0 - iConst150) & 2047];
			float fElse139 = 0.860009849f * fVec156[(IOTA0 - iConst152) & 1023];
			float fElse140 = 0.860009849f * fVec155[(IOTA0 - iConst154) & 511];
			float fElse141 = 0.860009849f * fVec154[(IOTA0 - iConst156) & 255];
			float fElse142 = 0.860009849f * fVec153[(IOTA0 - iConst158) & 127];
			float fElse143 = 0.860009849f * fVec152[(IOTA0 - iConst160) & 63];
			float fElse144 = 0.860009849f * fVec151[(IOTA0 - iConst162) & 31];
			float fElse145 = 0.860009849f * fVec150[iConst164];
			float fElse146 = 0.860009849f * fVec149[iConst166];
			float fElse147 = 0.860009849f * fTemp163;
			float fElse148 = 0.860009849f * fVec148[iConst167];
			float fTemp180 = fTemp99 * ((4.34294462f * (fTemp84 - std::log(std::max<float>(9.99999996e-13f, fConst93 * (((iConst94) ? fElse131 : 0.0f) + ((iConst137) ? fElse132 : 0.0f) + ((iConst139) ? fElse133 : 0.0f) + ((iConst141) ? fElse134 : 0.0f) + ((iConst143) ? fElse135 : 0.0f) + ((iConst145) ? fElse136 : 0.0f) + ((iConst147) ? fElse137 : 0.0f) + ((iConst149) ? fElse138 : 0.0f) + ((iConst151) ? fElse139 : 0.0f) + ((iConst153) ? fElse140 : 0.0f) + ((iConst155) ? fElse141 : 0.0f) + ((iConst157) ? fElse142 : 0.0f) + ((iConst159) ? fElse143 : 0.0f) + ((iConst161) ? fElse144 : 0.0f) + ((iConst163) ? fElse145 : 0.0f) + ((iConst165) ? fElse146 : 0.0f) + ((iConst167) ? fElse147 : 0.0f) + ((iConst168) ? fElse148 : 0.0f))))) + -17.0f) - fSlow7);
			fVbargraph7 = FAUSTFLOAT(fTemp180);
			fRec65[0] = fTemp47 - fConst236 * (fConst237 * fRec65[2] + fConst238 * fRec65[1]);
			float fTemp181 = fConst235 * fRec65[0] + fConst239 * fRec65[2];
			fVec165[IOTA0 & 32767] = fTemp181;
			float fTemp182 = fVec165[(IOTA0 - 1) & 32767];
			fVec166[0] = fConst95 * fTemp182 - fConst33 * fRec63[1];
			fRec64[0] = fConst32 * (fVec166[1] - fConst101 * fRec64[1] + fConst102 * fTemp182 + fConst103 * fTemp181);
			fRec63[0] = fRec64[0];
			fVec167[0] = 0.500327051f * fRec63[1] - fConst40 * fRec61[1];
			fRec62[0] = fConst30 * fRec63[1] + fConst39 * (fVec167[1] - fConst41 * fRec62[1] + 0.500327051f * fRec63[0]);
			fRec61[0] = fRec62[0];
			float fTemp183 = mydsp_faustpower2_f(fRec61[0]);
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
			float fElse149 = 0.860009849f * fVec185[(IOTA0 - iConst136) & 262143];
			float fElse150 = 0.860009849f * fVec184[(IOTA0 - iConst138) & 131071];
			float fElse151 = 0.860009849f * fVec183[(IOTA0 - iConst140) & 65535];
			float fElse152 = 0.860009849f * fVec182[(IOTA0 - iConst142) & 32767];
			float fElse153 = 0.860009849f * fVec181[(IOTA0 - iConst144) & 16383];
			float fElse154 = 0.860009849f * fVec180[(IOTA0 - iConst146) & 8191];
			float fElse155 = 0.860009849f * fVec179[(IOTA0 - iConst148) & 4095];
			float fElse156 = 0.860009849f * fVec178[(IOTA0 - iConst150) & 2047];
			float fElse157 = 0.860009849f * fVec177[(IOTA0 - iConst152) & 1023];
			float fElse158 = 0.860009849f * fVec176[(IOTA0 - iConst154) & 511];
			float fElse159 = 0.860009849f * fVec175[(IOTA0 - iConst156) & 255];
			float fElse160 = 0.860009849f * fVec174[(IOTA0 - iConst158) & 127];
			float fElse161 = 0.860009849f * fVec173[(IOTA0 - iConst160) & 63];
			float fElse162 = 0.860009849f * fVec172[(IOTA0 - iConst162) & 31];
			float fElse163 = 0.860009849f * fVec171[iConst164];
			float fElse164 = 0.860009849f * fVec170[iConst166];
			float fElse165 = 0.860009849f * fTemp183;
			float fElse166 = 0.860009849f * fVec169[iConst167];
			float fTemp200 = fTemp99 * (4.34294462f * (fTemp84 - std::log(std::max<float>(9.99999996e-13f, fConst93 * (((iConst94) ? fElse149 : 0.0f) + ((iConst137) ? fElse150 : 0.0f) + ((iConst139) ? fElse151 : 0.0f) + ((iConst141) ? fElse152 : 0.0f) + ((iConst143) ? fElse153 : 0.0f) + ((iConst145) ? fElse154 : 0.0f) + ((iConst147) ? fElse155 : 0.0f) + ((iConst149) ? fElse156 : 0.0f) + ((iConst151) ? fElse157 : 0.0f) + ((iConst153) ? fElse158 : 0.0f) + ((iConst155) ? fElse159 : 0.0f) + ((iConst157) ? fElse160 : 0.0f) + ((iConst159) ? fElse161 : 0.0f) + ((iConst161) ? fElse162 : 0.0f) + ((iConst163) ? fElse163 : 0.0f) + ((iConst165) ? fElse164 : 0.0f) + ((iConst167) ? fElse165 : 0.0f) + ((iConst168) ? fElse166 : 0.0f))))) + -18.0f);
			fVbargraph8 = FAUSTFLOAT(fTemp200);
			fRec70[0] = fTemp47 - fConst244 * (fConst245 * fRec70[2] + fConst246 * fRec70[1]);
			float fTemp201 = fConst243 * fRec70[0] + fConst247 * fRec70[2];
			fVec186[IOTA0 & 32767] = fTemp201;
			float fTemp202 = fVec186[(IOTA0 - 1) & 32767];
			fVec187[0] = fConst95 * fTemp202 - fConst33 * fRec68[1];
			fRec69[0] = fConst32 * (fVec187[1] - fConst101 * fRec69[1] + fConst102 * fTemp202 + fConst103 * fTemp201);
			fRec68[0] = fRec69[0];
			fVec188[0] = 0.500327051f * fRec68[1] - fConst40 * fRec66[1];
			fRec67[0] = fConst30 * fRec68[1] + fConst39 * (fVec188[1] - fConst41 * fRec67[1] + 0.500327051f * fRec68[0]);
			fRec66[0] = fRec67[0];
			float fTemp203 = mydsp_faustpower2_f(fRec66[0]);
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
			float fElse167 = 0.860009849f * fVec206[(IOTA0 - iConst136) & 262143];
			float fElse168 = 0.860009849f * fVec205[(IOTA0 - iConst138) & 131071];
			float fElse169 = 0.860009849f * fVec204[(IOTA0 - iConst140) & 65535];
			float fElse170 = 0.860009849f * fVec203[(IOTA0 - iConst142) & 32767];
			float fElse171 = 0.860009849f * fVec202[(IOTA0 - iConst144) & 16383];
			float fElse172 = 0.860009849f * fVec201[(IOTA0 - iConst146) & 8191];
			float fElse173 = 0.860009849f * fVec200[(IOTA0 - iConst148) & 4095];
			float fElse174 = 0.860009849f * fVec199[(IOTA0 - iConst150) & 2047];
			float fElse175 = 0.860009849f * fVec198[(IOTA0 - iConst152) & 1023];
			float fElse176 = 0.860009849f * fVec197[(IOTA0 - iConst154) & 511];
			float fElse177 = 0.860009849f * fVec196[(IOTA0 - iConst156) & 255];
			float fElse178 = 0.860009849f * fVec195[(IOTA0 - iConst158) & 127];
			float fElse179 = 0.860009849f * fVec194[(IOTA0 - iConst160) & 63];
			float fElse180 = 0.860009849f * fVec193[(IOTA0 - iConst162) & 31];
			float fElse181 = 0.860009849f * fVec192[iConst164];
			float fElse182 = 0.860009849f * fVec191[iConst166];
			float fElse183 = 0.860009849f * fTemp203;
			float fElse184 = 0.860009849f * fVec190[iConst167];
			float fTemp220 = fTemp99 * (4.34294462f * (fTemp84 - std::log(std::max<float>(9.99999996e-13f, fConst93 * (((iConst94) ? fElse167 : 0.0f) + ((iConst137) ? fElse168 : 0.0f) + ((iConst139) ? fElse169 : 0.0f) + ((iConst141) ? fElse170 : 0.0f) + ((iConst143) ? fElse171 : 0.0f) + ((iConst145) ? fElse172 : 0.0f) + ((iConst147) ? fElse173 : 0.0f) + ((iConst149) ? fElse174 : 0.0f) + ((iConst151) ? fElse175 : 0.0f) + ((iConst153) ? fElse176 : 0.0f) + ((iConst155) ? fElse177 : 0.0f) + ((iConst157) ? fElse178 : 0.0f) + ((iConst159) ? fElse179 : 0.0f) + ((iConst161) ? fElse180 : 0.0f) + ((iConst163) ? fElse181 : 0.0f) + ((iConst165) ? fElse182 : 0.0f) + ((iConst167) ? fElse183 : 0.0f) + ((iConst168) ? fElse184 : 0.0f))))) + -18.0f);
			fVbargraph9 = FAUSTFLOAT(fTemp220);
			fRec75[0] = fTemp47 - fConst252 * (fConst253 * fRec75[2] + fConst254 * fRec75[1]);
			float fTemp221 = fConst251 * fRec75[0] + fConst255 * fRec75[2];
			fVec207[IOTA0 & 32767] = fTemp221;
			float fTemp222 = fVec207[(IOTA0 - 1) & 32767];
			fVec208[0] = fConst95 * fTemp222 - fConst33 * fRec73[1];
			fRec74[0] = fConst32 * (fVec208[1] - fConst101 * fRec74[1] + fConst102 * fTemp222 + fConst103 * fTemp221);
			fRec73[0] = fRec74[0];
			fVec209[0] = 0.500327051f * fRec73[1] - fConst40 * fRec71[1];
			fRec72[0] = fConst30 * fRec73[1] + fConst39 * (fVec209[1] - fConst41 * fRec72[1] + 0.500327051f * fRec73[0]);
			fRec71[0] = fRec72[0];
			float fTemp223 = mydsp_faustpower2_f(fRec71[0]);
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
			float fElse185 = 0.860009849f * fVec227[(IOTA0 - iConst136) & 262143];
			float fElse186 = 0.860009849f * fVec226[(IOTA0 - iConst138) & 131071];
			float fElse187 = 0.860009849f * fVec225[(IOTA0 - iConst140) & 65535];
			float fElse188 = 0.860009849f * fVec224[(IOTA0 - iConst142) & 32767];
			float fElse189 = 0.860009849f * fVec223[(IOTA0 - iConst144) & 16383];
			float fElse190 = 0.860009849f * fVec222[(IOTA0 - iConst146) & 8191];
			float fElse191 = 0.860009849f * fVec221[(IOTA0 - iConst148) & 4095];
			float fElse192 = 0.860009849f * fVec220[(IOTA0 - iConst150) & 2047];
			float fElse193 = 0.860009849f * fVec219[(IOTA0 - iConst152) & 1023];
			float fElse194 = 0.860009849f * fVec218[(IOTA0 - iConst154) & 511];
			float fElse195 = 0.860009849f * fVec217[(IOTA0 - iConst156) & 255];
			float fElse196 = 0.860009849f * fVec216[(IOTA0 - iConst158) & 127];
			float fElse197 = 0.860009849f * fVec215[(IOTA0 - iConst160) & 63];
			float fElse198 = 0.860009849f * fVec214[(IOTA0 - iConst162) & 31];
			float fElse199 = 0.860009849f * fVec213[iConst164];
			float fElse200 = 0.860009849f * fVec212[iConst166];
			float fElse201 = 0.860009849f * fTemp223;
			float fElse202 = 0.860009849f * fVec211[iConst167];
			float fTemp240 = fTemp99 * (4.34294462f * (fTemp84 - std::log(std::max<float>(9.99999996e-13f, fConst93 * (((iConst94) ? fElse185 : 0.0f) + ((iConst137) ? fElse186 : 0.0f) + ((iConst139) ? fElse187 : 0.0f) + ((iConst141) ? fElse188 : 0.0f) + ((iConst143) ? fElse189 : 0.0f) + ((iConst145) ? fElse190 : 0.0f) + ((iConst147) ? fElse191 : 0.0f) + ((iConst149) ? fElse192 : 0.0f) + ((iConst151) ? fElse193 : 0.0f) + ((iConst153) ? fElse194 : 0.0f) + ((iConst155) ? fElse195 : 0.0f) + ((iConst157) ? fElse196 : 0.0f) + ((iConst159) ? fElse197 : 0.0f) + ((iConst161) ? fElse198 : 0.0f) + ((iConst163) ? fElse199 : 0.0f) + ((iConst165) ? fElse200 : 0.0f) + ((iConst167) ? fElse201 : 0.0f) + ((iConst168) ? fElse202 : 0.0f))))) + -18.0f);
			fVbargraph10 = FAUSTFLOAT(fTemp240);
			fRec80[0] = fTemp47 - fConst260 * (fConst261 * fRec80[2] + fConst262 * fRec80[1]);
			float fTemp241 = fConst259 * fRec80[0] + fConst263 * fRec80[2];
			fVec228[IOTA0 & 32767] = fTemp241;
			float fTemp242 = fVec228[(IOTA0 - 1) & 32767];
			fVec229[0] = fConst95 * fTemp242 - fConst33 * fRec78[1];
			fRec79[0] = fConst32 * (fVec229[1] - fConst101 * fRec79[1] + fConst102 * fTemp242 + fConst103 * fTemp241);
			fRec78[0] = fRec79[0];
			fVec230[0] = 0.500327051f * fRec78[1] - fConst40 * fRec76[1];
			fRec77[0] = fConst30 * fRec78[1] + fConst39 * (fVec230[1] - fConst41 * fRec77[1] + 0.500327051f * fRec78[0]);
			fRec76[0] = fRec77[0];
			float fTemp243 = mydsp_faustpower2_f(fRec76[0]);
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
			float fElse203 = 0.860009849f * fVec248[(IOTA0 - iConst136) & 262143];
			float fElse204 = 0.860009849f * fVec247[(IOTA0 - iConst138) & 131071];
			float fElse205 = 0.860009849f * fVec246[(IOTA0 - iConst140) & 65535];
			float fElse206 = 0.860009849f * fVec245[(IOTA0 - iConst142) & 32767];
			float fElse207 = 0.860009849f * fVec244[(IOTA0 - iConst144) & 16383];
			float fElse208 = 0.860009849f * fVec243[(IOTA0 - iConst146) & 8191];
			float fElse209 = 0.860009849f * fVec242[(IOTA0 - iConst148) & 4095];
			float fElse210 = 0.860009849f * fVec241[(IOTA0 - iConst150) & 2047];
			float fElse211 = 0.860009849f * fVec240[(IOTA0 - iConst152) & 1023];
			float fElse212 = 0.860009849f * fVec239[(IOTA0 - iConst154) & 511];
			float fElse213 = 0.860009849f * fVec238[(IOTA0 - iConst156) & 255];
			float fElse214 = 0.860009849f * fVec237[(IOTA0 - iConst158) & 127];
			float fElse215 = 0.860009849f * fVec236[(IOTA0 - iConst160) & 63];
			float fElse216 = 0.860009849f * fVec235[(IOTA0 - iConst162) & 31];
			float fElse217 = 0.860009849f * fVec234[iConst164];
			float fElse218 = 0.860009849f * fVec233[iConst166];
			float fElse219 = 0.860009849f * fTemp243;
			float fElse220 = 0.860009849f * fVec232[iConst167];
			float fTemp260 = fTemp99 * ((4.34294462f * (fTemp84 - std::log(std::max<float>(9.99999996e-13f, fConst93 * (((iConst94) ? fElse203 : 0.0f) + ((iConst137) ? fElse204 : 0.0f) + ((iConst139) ? fElse205 : 0.0f) + ((iConst141) ? fElse206 : 0.0f) + ((iConst143) ? fElse207 : 0.0f) + ((iConst145) ? fElse208 : 0.0f) + ((iConst147) ? fElse209 : 0.0f) + ((iConst149) ? fElse210 : 0.0f) + ((iConst151) ? fElse211 : 0.0f) + ((iConst153) ? fElse212 : 0.0f) + ((iConst155) ? fElse213 : 0.0f) + ((iConst157) ? fElse214 : 0.0f) + ((iConst159) ? fElse215 : 0.0f) + ((iConst161) ? fElse216 : 0.0f) + ((iConst163) ? fElse217 : 0.0f) + ((iConst165) ? fElse218 : 0.0f) + ((iConst167) ? fElse219 : 0.0f) + ((iConst168) ? fElse220 : 0.0f))))) + -18.0f) - fSlow8);
			fVbargraph11 = FAUSTFLOAT(fTemp260);
			fRec85[0] = fTemp47 - fConst268 * (fConst269 * fRec85[2] + fConst270 * fRec85[1]);
			float fTemp261 = fConst267 * fRec85[0] + fConst271 * fRec85[2];
			fVec249[IOTA0 & 32767] = fTemp261;
			float fTemp262 = fVec249[(IOTA0 - 1) & 32767];
			fVec250[0] = fConst95 * fTemp262 - fConst33 * fRec83[1];
			fRec84[0] = fConst32 * (fVec250[1] - fConst101 * fRec84[1] + fConst102 * fTemp262 + fConst103 * fTemp261);
			fRec83[0] = fRec84[0];
			fVec251[0] = 0.500327051f * fRec83[1] - fConst40 * fRec81[1];
			fRec82[0] = fConst30 * fRec83[1] + fConst39 * (fVec251[1] - fConst41 * fRec82[1] + 0.500327051f * fRec83[0]);
			fRec81[0] = fRec82[0];
			float fTemp263 = mydsp_faustpower2_f(fRec81[0]);
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
			float fElse221 = 0.860009849f * fVec269[(IOTA0 - iConst136) & 262143];
			float fElse222 = 0.860009849f * fVec268[(IOTA0 - iConst138) & 131071];
			float fElse223 = 0.860009849f * fVec267[(IOTA0 - iConst140) & 65535];
			float fElse224 = 0.860009849f * fVec266[(IOTA0 - iConst142) & 32767];
			float fElse225 = 0.860009849f * fVec265[(IOTA0 - iConst144) & 16383];
			float fElse226 = 0.860009849f * fVec264[(IOTA0 - iConst146) & 8191];
			float fElse227 = 0.860009849f * fVec263[(IOTA0 - iConst148) & 4095];
			float fElse228 = 0.860009849f * fVec262[(IOTA0 - iConst150) & 2047];
			float fElse229 = 0.860009849f * fVec261[(IOTA0 - iConst152) & 1023];
			float fElse230 = 0.860009849f * fVec260[(IOTA0 - iConst154) & 511];
			float fElse231 = 0.860009849f * fVec259[(IOTA0 - iConst156) & 255];
			float fElse232 = 0.860009849f * fVec258[(IOTA0 - iConst158) & 127];
			float fElse233 = 0.860009849f * fVec257[(IOTA0 - iConst160) & 63];
			float fElse234 = 0.860009849f * fVec256[(IOTA0 - iConst162) & 31];
			float fElse235 = 0.860009849f * fVec255[iConst164];
			float fElse236 = 0.860009849f * fVec254[iConst166];
			float fElse237 = 0.860009849f * fTemp263;
			float fElse238 = 0.860009849f * fVec253[iConst167];
			float fTemp280 = fTemp99 * ((4.34294462f * (fTemp84 - std::log(std::max<float>(9.99999996e-13f, fConst93 * (((iConst94) ? fElse221 : 0.0f) + ((iConst137) ? fElse222 : 0.0f) + ((iConst139) ? fElse223 : 0.0f) + ((iConst141) ? fElse224 : 0.0f) + ((iConst143) ? fElse225 : 0.0f) + ((iConst145) ? fElse226 : 0.0f) + ((iConst147) ? fElse227 : 0.0f) + ((iConst149) ? fElse228 : 0.0f) + ((iConst151) ? fElse229 : 0.0f) + ((iConst153) ? fElse230 : 0.0f) + ((iConst155) ? fElse231 : 0.0f) + ((iConst157) ? fElse232 : 0.0f) + ((iConst159) ? fElse233 : 0.0f) + ((iConst161) ? fElse234 : 0.0f) + ((iConst163) ? fElse235 : 0.0f) + ((iConst165) ? fElse236 : 0.0f) + ((iConst167) ? fElse237 : 0.0f) + ((iConst168) ? fElse238 : 0.0f))))) + -19.0f) - fSlow9);
			fVbargraph12 = FAUSTFLOAT(fTemp280);
			fRec90[0] = fTemp47 - fConst276 * (fConst277 * fRec90[2] + fConst278 * fRec90[1]);
			float fTemp281 = fConst275 * fRec90[0] + fConst279 * fRec90[2];
			fVec270[IOTA0 & 32767] = fTemp281;
			float fTemp282 = fVec270[(IOTA0 - 1) & 32767];
			fVec271[0] = fConst95 * fTemp282 - fConst33 * fRec88[1];
			fRec89[0] = fConst32 * (fVec271[1] - fConst101 * fRec89[1] + fConst102 * fTemp282 + fConst103 * fTemp281);
			fRec88[0] = fRec89[0];
			fVec272[0] = 0.500327051f * fRec88[1] - fConst40 * fRec86[1];
			fRec87[0] = fConst30 * fRec88[1] + fConst39 * (fVec272[1] - fConst41 * fRec87[1] + 0.500327051f * fRec88[0]);
			fRec86[0] = fRec87[0];
			float fTemp283 = mydsp_faustpower2_f(fRec86[0]);
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
			float fElse239 = 0.860009849f * fVec290[(IOTA0 - iConst136) & 262143];
			float fElse240 = 0.860009849f * fVec289[(IOTA0 - iConst138) & 131071];
			float fElse241 = 0.860009849f * fVec288[(IOTA0 - iConst140) & 65535];
			float fElse242 = 0.860009849f * fVec287[(IOTA0 - iConst142) & 32767];
			float fElse243 = 0.860009849f * fVec286[(IOTA0 - iConst144) & 16383];
			float fElse244 = 0.860009849f * fVec285[(IOTA0 - iConst146) & 8191];
			float fElse245 = 0.860009849f * fVec284[(IOTA0 - iConst148) & 4095];
			float fElse246 = 0.860009849f * fVec283[(IOTA0 - iConst150) & 2047];
			float fElse247 = 0.860009849f * fVec282[(IOTA0 - iConst152) & 1023];
			float fElse248 = 0.860009849f * fVec281[(IOTA0 - iConst154) & 511];
			float fElse249 = 0.860009849f * fVec280[(IOTA0 - iConst156) & 255];
			float fElse250 = 0.860009849f * fVec279[(IOTA0 - iConst158) & 127];
			float fElse251 = 0.860009849f * fVec278[(IOTA0 - iConst160) & 63];
			float fElse252 = 0.860009849f * fVec277[(IOTA0 - iConst162) & 31];
			float fElse253 = 0.860009849f * fVec276[iConst164];
			float fElse254 = 0.860009849f * fVec275[iConst166];
			float fElse255 = 0.860009849f * fTemp283;
			float fElse256 = 0.860009849f * fVec274[iConst167];
			float fTemp300 = fTemp99 * ((4.34294462f * (fTemp84 - std::log(std::max<float>(9.99999996e-13f, fConst93 * (((iConst94) ? fElse239 : 0.0f) + ((iConst137) ? fElse240 : 0.0f) + ((iConst139) ? fElse241 : 0.0f) + ((iConst141) ? fElse242 : 0.0f) + ((iConst143) ? fElse243 : 0.0f) + ((iConst145) ? fElse244 : 0.0f) + ((iConst147) ? fElse245 : 0.0f) + ((iConst149) ? fElse246 : 0.0f) + ((iConst151) ? fElse247 : 0.0f) + ((iConst153) ? fElse248 : 0.0f) + ((iConst155) ? fElse249 : 0.0f) + ((iConst157) ? fElse250 : 0.0f) + ((iConst159) ? fElse251 : 0.0f) + ((iConst161) ? fElse252 : 0.0f) + ((iConst163) ? fElse253 : 0.0f) + ((iConst165) ? fElse254 : 0.0f) + ((iConst167) ? fElse255 : 0.0f) + ((iConst168) ? fElse256 : 0.0f))))) + -20.0f) - fSlow10);
			fVbargraph13 = FAUSTFLOAT(fTemp300);
			fRec95[0] = fTemp47 - fConst284 * (fConst285 * fRec95[2] + fConst286 * fRec95[1]);
			float fTemp301 = fConst283 * fRec95[0] + fConst287 * fRec95[2];
			fVec291[IOTA0 & 32767] = fTemp301;
			float fTemp302 = fVec291[(IOTA0 - 1) & 32767];
			fVec292[0] = fConst95 * fTemp302 - fConst33 * fRec93[1];
			fRec94[0] = fConst32 * (fVec292[1] - fConst101 * fRec94[1] + fConst102 * fTemp302 + fConst103 * fTemp301);
			fRec93[0] = fRec94[0];
			fVec293[0] = 0.500327051f * fRec93[1] - fConst40 * fRec91[1];
			fRec92[0] = fConst30 * fRec93[1] + fConst39 * (fVec293[1] - fConst41 * fRec92[1] + 0.500327051f * fRec93[0]);
			fRec91[0] = fRec92[0];
			float fTemp303 = mydsp_faustpower2_f(fRec91[0]);
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
			float fElse257 = 0.860009849f * fVec311[(IOTA0 - iConst136) & 262143];
			float fElse258 = 0.860009849f * fVec310[(IOTA0 - iConst138) & 131071];
			float fElse259 = 0.860009849f * fVec309[(IOTA0 - iConst140) & 65535];
			float fElse260 = 0.860009849f * fVec308[(IOTA0 - iConst142) & 32767];
			float fElse261 = 0.860009849f * fVec307[(IOTA0 - iConst144) & 16383];
			float fElse262 = 0.860009849f * fVec306[(IOTA0 - iConst146) & 8191];
			float fElse263 = 0.860009849f * fVec305[(IOTA0 - iConst148) & 4095];
			float fElse264 = 0.860009849f * fVec304[(IOTA0 - iConst150) & 2047];
			float fElse265 = 0.860009849f * fVec303[(IOTA0 - iConst152) & 1023];
			float fElse266 = 0.860009849f * fVec302[(IOTA0 - iConst154) & 511];
			float fElse267 = 0.860009849f * fVec301[(IOTA0 - iConst156) & 255];
			float fElse268 = 0.860009849f * fVec300[(IOTA0 - iConst158) & 127];
			float fElse269 = 0.860009849f * fVec299[(IOTA0 - iConst160) & 63];
			float fElse270 = 0.860009849f * fVec298[(IOTA0 - iConst162) & 31];
			float fElse271 = 0.860009849f * fVec297[iConst164];
			float fElse272 = 0.860009849f * fVec296[iConst166];
			float fElse273 = 0.860009849f * fTemp303;
			float fElse274 = 0.860009849f * fVec295[iConst167];
			float fTemp320 = fTemp99 * ((4.34294462f * (fTemp84 - std::log(std::max<float>(9.99999996e-13f, fConst93 * (((iConst94) ? fElse257 : 0.0f) + ((iConst137) ? fElse258 : 0.0f) + ((iConst139) ? fElse259 : 0.0f) + ((iConst141) ? fElse260 : 0.0f) + ((iConst143) ? fElse261 : 0.0f) + ((iConst145) ? fElse262 : 0.0f) + ((iConst147) ? fElse263 : 0.0f) + ((iConst149) ? fElse264 : 0.0f) + ((iConst151) ? fElse265 : 0.0f) + ((iConst153) ? fElse266 : 0.0f) + ((iConst155) ? fElse267 : 0.0f) + ((iConst157) ? fElse268 : 0.0f) + ((iConst159) ? fElse269 : 0.0f) + ((iConst161) ? fElse270 : 0.0f) + ((iConst163) ? fElse271 : 0.0f) + ((iConst165) ? fElse272 : 0.0f) + ((iConst167) ? fElse273 : 0.0f) + ((iConst168) ? fElse274 : 0.0f))))) + -22.0f) - fSlow8);
			fVbargraph14 = FAUSTFLOAT(fTemp320);
			fRec100[0] = fTemp47 - fConst292 * (fConst293 * fRec100[2] + fConst294 * fRec100[1]);
			float fTemp321 = fConst291 * fRec100[0] + fConst295 * fRec100[2];
			fVec312[IOTA0 & 32767] = fTemp321;
			float fTemp322 = fVec312[(IOTA0 - 1) & 32767];
			fVec313[0] = fConst95 * fTemp322 - fConst33 * fRec98[1];
			fRec99[0] = fConst32 * (fVec313[1] - fConst101 * fRec99[1] + fConst102 * fTemp322 + fConst103 * fTemp321);
			fRec98[0] = fRec99[0];
			fVec314[0] = 0.500327051f * fRec98[1] - fConst40 * fRec96[1];
			fRec97[0] = fConst30 * fRec98[1] + fConst39 * (fVec314[1] - fConst41 * fRec97[1] + 0.500327051f * fRec98[0]);
			fRec96[0] = fRec97[0];
			float fTemp323 = mydsp_faustpower2_f(fRec96[0]);
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
			float fElse275 = 0.860009849f * fVec332[(IOTA0 - iConst136) & 262143];
			float fElse276 = 0.860009849f * fVec331[(IOTA0 - iConst138) & 131071];
			float fElse277 = 0.860009849f * fVec330[(IOTA0 - iConst140) & 65535];
			float fElse278 = 0.860009849f * fVec329[(IOTA0 - iConst142) & 32767];
			float fElse279 = 0.860009849f * fVec328[(IOTA0 - iConst144) & 16383];
			float fElse280 = 0.860009849f * fVec327[(IOTA0 - iConst146) & 8191];
			float fElse281 = 0.860009849f * fVec326[(IOTA0 - iConst148) & 4095];
			float fElse282 = 0.860009849f * fVec325[(IOTA0 - iConst150) & 2047];
			float fElse283 = 0.860009849f * fVec324[(IOTA0 - iConst152) & 1023];
			float fElse284 = 0.860009849f * fVec323[(IOTA0 - iConst154) & 511];
			float fElse285 = 0.860009849f * fVec322[(IOTA0 - iConst156) & 255];
			float fElse286 = 0.860009849f * fVec321[(IOTA0 - iConst158) & 127];
			float fElse287 = 0.860009849f * fVec320[(IOTA0 - iConst160) & 63];
			float fElse288 = 0.860009849f * fVec319[(IOTA0 - iConst162) & 31];
			float fElse289 = 0.860009849f * fVec318[iConst164];
			float fElse290 = 0.860009849f * fVec317[iConst166];
			float fElse291 = 0.860009849f * fTemp323;
			float fElse292 = 0.860009849f * fVec316[iConst167];
			float fTemp340 = fTemp99 * (fSlow7 + 4.34294462f * (fTemp84 - std::log(std::max<float>(9.99999996e-13f, fConst93 * (((iConst94) ? fElse275 : 0.0f) + ((iConst137) ? fElse276 : 0.0f) + ((iConst139) ? fElse277 : 0.0f) + ((iConst141) ? fElse278 : 0.0f) + ((iConst143) ? fElse279 : 0.0f) + ((iConst145) ? fElse280 : 0.0f) + ((iConst147) ? fElse281 : 0.0f) + ((iConst149) ? fElse282 : 0.0f) + ((iConst151) ? fElse283 : 0.0f) + ((iConst153) ? fElse284 : 0.0f) + ((iConst155) ? fElse285 : 0.0f) + ((iConst157) ? fElse286 : 0.0f) + ((iConst159) ? fElse287 : 0.0f) + ((iConst161) ? fElse288 : 0.0f) + ((iConst163) ? fElse289 : 0.0f) + ((iConst165) ? fElse290 : 0.0f) + ((iConst167) ? fElse291 : 0.0f) + ((iConst168) ? fElse292 : 0.0f))))) + -24.0f);
			fVbargraph15 = FAUSTFLOAT(fTemp340);
			fRec105[0] = fTemp47 - fConst300 * (fConst301 * fRec105[2] + fConst302 * fRec105[1]);
			float fTemp341 = fConst299 * fRec105[0] + fConst303 * fRec105[2];
			fVec333[IOTA0 & 32767] = fTemp341;
			float fTemp342 = fVec333[(IOTA0 - 1) & 32767];
			fVec334[0] = fConst95 * fTemp342 - fConst33 * fRec103[1];
			fRec104[0] = fConst32 * (fVec334[1] - fConst101 * fRec104[1] + fConst102 * fTemp342 + fConst103 * fTemp341);
			fRec103[0] = fRec104[0];
			fVec335[0] = 0.500327051f * fRec103[1] - fConst40 * fRec101[1];
			fRec102[0] = fConst30 * fRec103[1] + fConst39 * (fVec335[1] - fConst41 * fRec102[1] + 0.500327051f * fRec103[0]);
			fRec101[0] = fRec102[0];
			float fTemp343 = mydsp_faustpower2_f(fRec101[0]);
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
			float fElse293 = 0.860009849f * fVec353[(IOTA0 - iConst136) & 262143];
			float fElse294 = 0.860009849f * fVec352[(IOTA0 - iConst138) & 131071];
			float fElse295 = 0.860009849f * fVec351[(IOTA0 - iConst140) & 65535];
			float fElse296 = 0.860009849f * fVec350[(IOTA0 - iConst142) & 32767];
			float fElse297 = 0.860009849f * fVec349[(IOTA0 - iConst144) & 16383];
			float fElse298 = 0.860009849f * fVec348[(IOTA0 - iConst146) & 8191];
			float fElse299 = 0.860009849f * fVec347[(IOTA0 - iConst148) & 4095];
			float fElse300 = 0.860009849f * fVec346[(IOTA0 - iConst150) & 2047];
			float fElse301 = 0.860009849f * fVec345[(IOTA0 - iConst152) & 1023];
			float fElse302 = 0.860009849f * fVec344[(IOTA0 - iConst154) & 511];
			float fElse303 = 0.860009849f * fVec343[(IOTA0 - iConst156) & 255];
			float fElse304 = 0.860009849f * fVec342[(IOTA0 - iConst158) & 127];
			float fElse305 = 0.860009849f * fVec341[(IOTA0 - iConst160) & 63];
			float fElse306 = 0.860009849f * fVec340[(IOTA0 - iConst162) & 31];
			float fElse307 = 0.860009849f * fVec339[iConst164];
			float fElse308 = 0.860009849f * fVec338[iConst166];
			float fElse309 = 0.860009849f * fTemp343;
			float fElse310 = 0.860009849f * fVec337[iConst167];
			float fTemp360 = fTemp99 * (fSlow9 + 4.34294462f * (fTemp84 - std::log(std::max<float>(9.99999996e-13f, fConst93 * (((iConst94) ? fElse293 : 0.0f) + ((iConst137) ? fElse294 : 0.0f) + ((iConst139) ? fElse295 : 0.0f) + ((iConst141) ? fElse296 : 0.0f) + ((iConst143) ? fElse297 : 0.0f) + ((iConst145) ? fElse298 : 0.0f) + ((iConst147) ? fElse299 : 0.0f) + ((iConst149) ? fElse300 : 0.0f) + ((iConst151) ? fElse301 : 0.0f) + ((iConst153) ? fElse302 : 0.0f) + ((iConst155) ? fElse303 : 0.0f) + ((iConst157) ? fElse304 : 0.0f) + ((iConst159) ? fElse305 : 0.0f) + ((iConst161) ? fElse306 : 0.0f) + ((iConst163) ? fElse307 : 0.0f) + ((iConst165) ? fElse308 : 0.0f) + ((iConst167) ? fElse309 : 0.0f) + ((iConst168) ? fElse310 : 0.0f))))) + -27.0f);
			fVbargraph16 = FAUSTFLOAT(fTemp360);
			fRec110[0] = fTemp47 - fConst308 * (fConst309 * fRec110[2] + fConst310 * fRec110[1]);
			float fTemp361 = fConst307 * fRec110[0] + fConst311 * fRec110[2];
			fVec354[IOTA0 & 32767] = fTemp361;
			float fTemp362 = fVec354[(IOTA0 - 1) & 32767];
			fVec355[0] = fConst95 * fTemp362 - fConst33 * fRec108[1];
			fRec109[0] = fConst32 * (fVec355[1] - fConst101 * fRec109[1] + fConst102 * fTemp362 + fConst103 * fTemp361);
			fRec108[0] = fRec109[0];
			fVec356[0] = 0.500327051f * fRec108[1] - fConst40 * fRec106[1];
			fRec107[0] = fConst30 * fRec108[1] + fConst39 * (fVec356[1] - fConst41 * fRec107[1] + 0.500327051f * fRec108[0]);
			fRec106[0] = fRec107[0];
			float fTemp363 = mydsp_faustpower2_f(fRec106[0]);
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
			float fElse311 = 0.860009849f * fVec374[(IOTA0 - iConst136) & 262143];
			float fElse312 = 0.860009849f * fVec373[(IOTA0 - iConst138) & 131071];
			float fElse313 = 0.860009849f * fVec372[(IOTA0 - iConst140) & 65535];
			float fElse314 = 0.860009849f * fVec371[(IOTA0 - iConst142) & 32767];
			float fElse315 = 0.860009849f * fVec370[(IOTA0 - iConst144) & 16383];
			float fElse316 = 0.860009849f * fVec369[(IOTA0 - iConst146) & 8191];
			float fElse317 = 0.860009849f * fVec368[(IOTA0 - iConst148) & 4095];
			float fElse318 = 0.860009849f * fVec367[(IOTA0 - iConst150) & 2047];
			float fElse319 = 0.860009849f * fVec366[(IOTA0 - iConst152) & 1023];
			float fElse320 = 0.860009849f * fVec365[(IOTA0 - iConst154) & 511];
			float fElse321 = 0.860009849f * fVec364[(IOTA0 - iConst156) & 255];
			float fElse322 = 0.860009849f * fVec363[(IOTA0 - iConst158) & 127];
			float fElse323 = 0.860009849f * fVec362[(IOTA0 - iConst160) & 63];
			float fElse324 = 0.860009849f * fVec361[(IOTA0 - iConst162) & 31];
			float fElse325 = 0.860009849f * fVec360[iConst164];
			float fElse326 = 0.860009849f * fVec359[iConst166];
			float fElse327 = 0.860009849f * fTemp363;
			float fElse328 = 0.860009849f * fVec358[iConst167];
			float fTemp380 = fTemp99 * (fSlow7 + 4.34294462f * (fTemp84 - std::log(std::max<float>(9.99999996e-13f, fConst93 * (((iConst94) ? fElse311 : 0.0f) + ((iConst137) ? fElse312 : 0.0f) + ((iConst139) ? fElse313 : 0.0f) + ((iConst141) ? fElse314 : 0.0f) + ((iConst143) ? fElse315 : 0.0f) + ((iConst145) ? fElse316 : 0.0f) + ((iConst147) ? fElse317 : 0.0f) + ((iConst149) ? fElse318 : 0.0f) + ((iConst151) ? fElse319 : 0.0f) + ((iConst153) ? fElse320 : 0.0f) + ((iConst155) ? fElse321 : 0.0f) + ((iConst157) ? fElse322 : 0.0f) + ((iConst159) ? fElse323 : 0.0f) + ((iConst161) ? fElse324 : 0.0f) + ((iConst163) ? fElse325 : 0.0f) + ((iConst165) ? fElse326 : 0.0f) + ((iConst167) ? fElse327 : 0.0f) + ((iConst168) ? fElse328 : 0.0f))))) + -26.0f);
			fVbargraph17 = FAUSTFLOAT(fTemp380);
			fRec115[0] = fTemp47 - fConst316 * (fConst317 * fRec115[2] + fConst318 * fRec115[1]);
			float fTemp381 = fConst315 * fRec115[0] + fConst319 * fRec115[2];
			fVec375[IOTA0 & 32767] = fTemp381;
			float fTemp382 = fVec375[(IOTA0 - 1) & 32767];
			fVec376[0] = fConst95 * fTemp382 - fConst33 * fRec113[1];
			fRec114[0] = fConst32 * (fVec376[1] - fConst101 * fRec114[1] + fConst102 * fTemp382 + fConst103 * fTemp381);
			fRec113[0] = fRec114[0];
			fVec377[0] = 0.500327051f * fRec113[1] - fConst40 * fRec111[1];
			fRec112[0] = fConst30 * fRec113[1] + fConst39 * (fVec377[1] - fConst41 * fRec112[1] + 0.500327051f * fRec113[0]);
			fRec111[0] = fRec112[0];
			float fTemp383 = mydsp_faustpower2_f(fRec111[0]);
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
			float fElse329 = 0.860009849f * fVec395[(IOTA0 - iConst136) & 262143];
			float fElse330 = 0.860009849f * fVec394[(IOTA0 - iConst138) & 131071];
			float fElse331 = 0.860009849f * fVec393[(IOTA0 - iConst140) & 65535];
			float fElse332 = 0.860009849f * fVec392[(IOTA0 - iConst142) & 32767];
			float fElse333 = 0.860009849f * fVec391[(IOTA0 - iConst144) & 16383];
			float fElse334 = 0.860009849f * fVec390[(IOTA0 - iConst146) & 8191];
			float fElse335 = 0.860009849f * fVec389[(IOTA0 - iConst148) & 4095];
			float fElse336 = 0.860009849f * fVec388[(IOTA0 - iConst150) & 2047];
			float fElse337 = 0.860009849f * fVec387[(IOTA0 - iConst152) & 1023];
			float fElse338 = 0.860009849f * fVec386[(IOTA0 - iConst154) & 511];
			float fElse339 = 0.860009849f * fVec385[(IOTA0 - iConst156) & 255];
			float fElse340 = 0.860009849f * fVec384[(IOTA0 - iConst158) & 127];
			float fElse341 = 0.860009849f * fVec383[(IOTA0 - iConst160) & 63];
			float fElse342 = 0.860009849f * fVec382[(IOTA0 - iConst162) & 31];
			float fElse343 = 0.860009849f * fVec381[iConst164];
			float fElse344 = 0.860009849f * fVec380[iConst166];
			float fElse345 = 0.860009849f * fTemp383;
			float fElse346 = 0.860009849f * fVec379[iConst167];
			float fTemp400 = fTemp99 * (fSlow9 + 4.34294462f * (fTemp84 - std::log(std::max<float>(9.99999996e-13f, fConst93 * (((iConst94) ? fElse329 : 0.0f) + ((iConst137) ? fElse330 : 0.0f) + ((iConst139) ? fElse331 : 0.0f) + ((iConst141) ? fElse332 : 0.0f) + ((iConst143) ? fElse333 : 0.0f) + ((iConst145) ? fElse334 : 0.0f) + ((iConst147) ? fElse335 : 0.0f) + ((iConst149) ? fElse336 : 0.0f) + ((iConst151) ? fElse337 : 0.0f) + ((iConst153) ? fElse338 : 0.0f) + ((iConst155) ? fElse339 : 0.0f) + ((iConst157) ? fElse340 : 0.0f) + ((iConst159) ? fElse341 : 0.0f) + ((iConst161) ? fElse342 : 0.0f) + ((iConst163) ? fElse343 : 0.0f) + ((iConst165) ? fElse344 : 0.0f) + ((iConst167) ? fElse345 : 0.0f) + ((iConst168) ? fElse346 : 0.0f))))) + -28.0f);
			fVbargraph18 = FAUSTFLOAT(fTemp400);
			fRec120[0] = fTemp47 - fConst324 * (fConst325 * fRec120[2] + fConst326 * fRec120[1]);
			float fTemp401 = fConst323 * fRec120[0] + fConst327 * fRec120[2];
			fVec396[IOTA0 & 32767] = fTemp401;
			float fTemp402 = fVec396[(IOTA0 - 1) & 32767];
			fVec397[0] = fConst95 * fTemp402 - fConst33 * fRec118[1];
			fRec119[0] = fConst32 * (fVec397[1] - fConst101 * fRec119[1] + fConst102 * fTemp402 + fConst103 * fTemp401);
			fRec118[0] = fRec119[0];
			fVec398[0] = 0.500327051f * fRec118[1] - fConst40 * fRec116[1];
			fRec117[0] = fConst30 * fRec118[1] + fConst39 * (fVec398[1] - fConst41 * fRec117[1] + 0.500327051f * fRec118[0]);
			fRec116[0] = fRec117[0];
			float fTemp403 = mydsp_faustpower2_f(fRec116[0]);
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
			float fElse347 = 0.860009849f * fVec416[(IOTA0 - iConst136) & 262143];
			float fElse348 = 0.860009849f * fVec415[(IOTA0 - iConst138) & 131071];
			float fElse349 = 0.860009849f * fVec414[(IOTA0 - iConst140) & 65535];
			float fElse350 = 0.860009849f * fVec413[(IOTA0 - iConst142) & 32767];
			float fElse351 = 0.860009849f * fVec412[(IOTA0 - iConst144) & 16383];
			float fElse352 = 0.860009849f * fVec411[(IOTA0 - iConst146) & 8191];
			float fElse353 = 0.860009849f * fVec410[(IOTA0 - iConst148) & 4095];
			float fElse354 = 0.860009849f * fVec409[(IOTA0 - iConst150) & 2047];
			float fElse355 = 0.860009849f * fVec408[(IOTA0 - iConst152) & 1023];
			float fElse356 = 0.860009849f * fVec407[(IOTA0 - iConst154) & 511];
			float fElse357 = 0.860009849f * fVec406[(IOTA0 - iConst156) & 255];
			float fElse358 = 0.860009849f * fVec405[(IOTA0 - iConst158) & 127];
			float fElse359 = 0.860009849f * fVec404[(IOTA0 - iConst160) & 63];
			float fElse360 = 0.860009849f * fVec403[(IOTA0 - iConst162) & 31];
			float fElse361 = 0.860009849f * fVec402[iConst164];
			float fElse362 = 0.860009849f * fVec401[iConst166];
			float fElse363 = 0.860009849f * fTemp403;
			float fElse364 = 0.860009849f * fVec400[iConst167];
			float fTemp420 = fTemp99 * (fSlow11 + 4.34294462f * (fTemp84 - std::log(std::max<float>(9.99999996e-13f, fConst93 * (((iConst94) ? fElse347 : 0.0f) + ((iConst137) ? fElse348 : 0.0f) + ((iConst139) ? fElse349 : 0.0f) + ((iConst141) ? fElse350 : 0.0f) + ((iConst143) ? fElse351 : 0.0f) + ((iConst145) ? fElse352 : 0.0f) + ((iConst147) ? fElse353 : 0.0f) + ((iConst149) ? fElse354 : 0.0f) + ((iConst151) ? fElse355 : 0.0f) + ((iConst153) ? fElse356 : 0.0f) + ((iConst155) ? fElse357 : 0.0f) + ((iConst157) ? fElse358 : 0.0f) + ((iConst159) ? fElse359 : 0.0f) + ((iConst161) ? fElse360 : 0.0f) + ((iConst163) ? fElse361 : 0.0f) + ((iConst165) ? fElse362 : 0.0f) + ((iConst167) ? fElse363 : 0.0f) + ((iConst168) ? fElse364 : 0.0f))))) + -29.0f);
			fVbargraph19 = FAUSTFLOAT(fTemp420);
			fRec125[0] = fTemp47 - fConst332 * (fConst333 * fRec125[2] + fConst334 * fRec125[1]);
			float fTemp421 = fConst331 * fRec125[0] + fConst335 * fRec125[2];
			fVec417[IOTA0 & 32767] = fTemp421;
			float fTemp422 = fVec417[(IOTA0 - 1) & 32767];
			fVec418[0] = fConst95 * fTemp422 - fConst33 * fRec123[1];
			fRec124[0] = fConst32 * (fVec418[1] - fConst101 * fRec124[1] + fConst102 * fTemp422 + fConst103 * fTemp421);
			fRec123[0] = fRec124[0];
			fVec419[0] = 0.500327051f * fRec123[1] - fConst40 * fRec121[1];
			fRec122[0] = fConst30 * fRec123[1] + fConst39 * (fVec419[1] - fConst41 * fRec122[1] + 0.500327051f * fRec123[0]);
			fRec121[0] = fRec122[0];
			float fTemp423 = mydsp_faustpower2_f(fRec121[0]);
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
			float fElse365 = 0.860009849f * fVec437[(IOTA0 - iConst136) & 262143];
			float fElse366 = 0.860009849f * fVec436[(IOTA0 - iConst138) & 131071];
			float fElse367 = 0.860009849f * fVec435[(IOTA0 - iConst140) & 65535];
			float fElse368 = 0.860009849f * fVec434[(IOTA0 - iConst142) & 32767];
			float fElse369 = 0.860009849f * fVec433[(IOTA0 - iConst144) & 16383];
			float fElse370 = 0.860009849f * fVec432[(IOTA0 - iConst146) & 8191];
			float fElse371 = 0.860009849f * fVec431[(IOTA0 - iConst148) & 4095];
			float fElse372 = 0.860009849f * fVec430[(IOTA0 - iConst150) & 2047];
			float fElse373 = 0.860009849f * fVec429[(IOTA0 - iConst152) & 1023];
			float fElse374 = 0.860009849f * fVec428[(IOTA0 - iConst154) & 511];
			float fElse375 = 0.860009849f * fVec427[(IOTA0 - iConst156) & 255];
			float fElse376 = 0.860009849f * fVec426[(IOTA0 - iConst158) & 127];
			float fElse377 = 0.860009849f * fVec425[(IOTA0 - iConst160) & 63];
			float fElse378 = 0.860009849f * fVec424[(IOTA0 - iConst162) & 31];
			float fElse379 = 0.860009849f * fVec423[iConst164];
			float fElse380 = 0.860009849f * fVec422[iConst166];
			float fElse381 = 0.860009849f * fTemp423;
			float fElse382 = 0.860009849f * fVec421[iConst167];
			float fTemp440 = fTemp99 * (fSlow12 + 4.34294462f * (fTemp84 - std::log(std::max<float>(9.99999996e-13f, fConst93 * (((iConst94) ? fElse365 : 0.0f) + ((iConst137) ? fElse366 : 0.0f) + ((iConst139) ? fElse367 : 0.0f) + ((iConst141) ? fElse368 : 0.0f) + ((iConst143) ? fElse369 : 0.0f) + ((iConst145) ? fElse370 : 0.0f) + ((iConst147) ? fElse371 : 0.0f) + ((iConst149) ? fElse372 : 0.0f) + ((iConst151) ? fElse373 : 0.0f) + ((iConst153) ? fElse374 : 0.0f) + ((iConst155) ? fElse375 : 0.0f) + ((iConst157) ? fElse376 : 0.0f) + ((iConst159) ? fElse377 : 0.0f) + ((iConst161) ? fElse378 : 0.0f) + ((iConst163) ? fElse379 : 0.0f) + ((iConst165) ? fElse380 : 0.0f) + ((iConst167) ? fElse381 : 0.0f) + ((iConst168) ? fElse382 : 0.0f))))) + -29.0f);
			fVbargraph20 = FAUSTFLOAT(fTemp440);
			fRec130[0] = fTemp47 - fConst340 * (fConst341 * fRec130[2] + fConst342 * fRec130[1]);
			float fTemp441 = fConst339 * fRec130[0] + fConst343 * fRec130[2];
			fVec438[IOTA0 & 32767] = fTemp441;
			float fTemp442 = fVec438[(IOTA0 - 1) & 32767];
			fVec439[0] = fConst95 * fTemp442 - fConst33 * fRec128[1];
			fRec129[0] = fConst32 * (fVec439[1] - fConst101 * fRec129[1] + fConst102 * fTemp442 + fConst103 * fTemp441);
			fRec128[0] = fRec129[0];
			fVec440[0] = 0.500327051f * fRec128[1] - fConst40 * fRec126[1];
			fRec127[0] = fConst30 * fRec128[1] + fConst39 * (fVec440[1] - fConst41 * fRec127[1] + 0.500327051f * fRec128[0]);
			fRec126[0] = fRec127[0];
			float fTemp443 = mydsp_faustpower2_f(fRec126[0]);
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
			float fElse383 = 0.860009849f * fVec458[(IOTA0 - iConst136) & 262143];
			float fElse384 = 0.860009849f * fVec457[(IOTA0 - iConst138) & 131071];
			float fElse385 = 0.860009849f * fVec456[(IOTA0 - iConst140) & 65535];
			float fElse386 = 0.860009849f * fVec455[(IOTA0 - iConst142) & 32767];
			float fElse387 = 0.860009849f * fVec454[(IOTA0 - iConst144) & 16383];
			float fElse388 = 0.860009849f * fVec453[(IOTA0 - iConst146) & 8191];
			float fElse389 = 0.860009849f * fVec452[(IOTA0 - iConst148) & 4095];
			float fElse390 = 0.860009849f * fVec451[(IOTA0 - iConst150) & 2047];
			float fElse391 = 0.860009849f * fVec450[(IOTA0 - iConst152) & 1023];
			float fElse392 = 0.860009849f * fVec449[(IOTA0 - iConst154) & 511];
			float fElse393 = 0.860009849f * fVec448[(IOTA0 - iConst156) & 255];
			float fElse394 = 0.860009849f * fVec447[(IOTA0 - iConst158) & 127];
			float fElse395 = 0.860009849f * fVec446[(IOTA0 - iConst160) & 63];
			float fElse396 = 0.860009849f * fVec445[(IOTA0 - iConst162) & 31];
			float fElse397 = 0.860009849f * fVec444[iConst164];
			float fElse398 = 0.860009849f * fVec443[iConst166];
			float fElse399 = 0.860009849f * fTemp443;
			float fElse400 = 0.860009849f * fVec442[iConst167];
			float fTemp460 = fTemp99 * (fSlow13 + 4.34294462f * (fTemp84 - std::log(std::max<float>(9.99999996e-13f, fConst93 * (((iConst94) ? fElse383 : 0.0f) + ((iConst137) ? fElse384 : 0.0f) + ((iConst139) ? fElse385 : 0.0f) + ((iConst141) ? fElse386 : 0.0f) + ((iConst143) ? fElse387 : 0.0f) + ((iConst145) ? fElse388 : 0.0f) + ((iConst147) ? fElse389 : 0.0f) + ((iConst149) ? fElse390 : 0.0f) + ((iConst151) ? fElse391 : 0.0f) + ((iConst153) ? fElse392 : 0.0f) + ((iConst155) ? fElse393 : 0.0f) + ((iConst157) ? fElse394 : 0.0f) + ((iConst159) ? fElse395 : 0.0f) + ((iConst161) ? fElse396 : 0.0f) + ((iConst163) ? fElse397 : 0.0f) + ((iConst165) ? fElse398 : 0.0f) + ((iConst167) ? fElse399 : 0.0f) + ((iConst168) ? fElse400 : 0.0f))))) + -29.0f);
			fVbargraph21 = FAUSTFLOAT(fTemp460);
			fRec135[0] = fTemp47 - fConst348 * (fConst349 * fRec135[2] + fConst350 * fRec135[1]);
			float fTemp461 = fConst347 * fRec135[0] + fConst351 * fRec135[2];
			fVec459[IOTA0 & 32767] = fTemp461;
			float fTemp462 = fVec459[(IOTA0 - 1) & 32767];
			fVec460[0] = fConst95 * fTemp462 - fConst33 * fRec133[1];
			fRec134[0] = fConst32 * (fVec460[1] - fConst101 * fRec134[1] + fConst102 * fTemp462 + fConst103 * fTemp461);
			fRec133[0] = fRec134[0];
			fVec461[0] = 0.500327051f * fRec133[1] - fConst40 * fRec131[1];
			fRec132[0] = fConst30 * fRec133[1] + fConst39 * (fVec461[1] - fConst41 * fRec132[1] + 0.500327051f * fRec133[0]);
			fRec131[0] = fRec132[0];
			float fTemp463 = mydsp_faustpower2_f(fRec131[0]);
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
			float fElse401 = 0.860009849f * fVec479[(IOTA0 - iConst136) & 262143];
			float fElse402 = 0.860009849f * fVec478[(IOTA0 - iConst138) & 131071];
			float fElse403 = 0.860009849f * fVec477[(IOTA0 - iConst140) & 65535];
			float fElse404 = 0.860009849f * fVec476[(IOTA0 - iConst142) & 32767];
			float fElse405 = 0.860009849f * fVec475[(IOTA0 - iConst144) & 16383];
			float fElse406 = 0.860009849f * fVec474[(IOTA0 - iConst146) & 8191];
			float fElse407 = 0.860009849f * fVec473[(IOTA0 - iConst148) & 4095];
			float fElse408 = 0.860009849f * fVec472[(IOTA0 - iConst150) & 2047];
			float fElse409 = 0.860009849f * fVec471[(IOTA0 - iConst152) & 1023];
			float fElse410 = 0.860009849f * fVec470[(IOTA0 - iConst154) & 511];
			float fElse411 = 0.860009849f * fVec469[(IOTA0 - iConst156) & 255];
			float fElse412 = 0.860009849f * fVec468[(IOTA0 - iConst158) & 127];
			float fElse413 = 0.860009849f * fVec467[(IOTA0 - iConst160) & 63];
			float fElse414 = 0.860009849f * fVec466[(IOTA0 - iConst162) & 31];
			float fElse415 = 0.860009849f * fVec465[iConst164];
			float fElse416 = 0.860009849f * fVec464[iConst166];
			float fElse417 = 0.860009849f * fTemp463;
			float fElse418 = 0.860009849f * fVec463[iConst167];
			float fTemp480 = fTemp99 * (fSlow14 + 4.34294462f * (fTemp84 - std::log(std::max<float>(9.99999996e-13f, fConst93 * (((iConst94) ? fElse401 : 0.0f) + ((iConst137) ? fElse402 : 0.0f) + ((iConst139) ? fElse403 : 0.0f) + ((iConst141) ? fElse404 : 0.0f) + ((iConst143) ? fElse405 : 0.0f) + ((iConst145) ? fElse406 : 0.0f) + ((iConst147) ? fElse407 : 0.0f) + ((iConst149) ? fElse408 : 0.0f) + ((iConst151) ? fElse409 : 0.0f) + ((iConst153) ? fElse410 : 0.0f) + ((iConst155) ? fElse411 : 0.0f) + ((iConst157) ? fElse412 : 0.0f) + ((iConst159) ? fElse413 : 0.0f) + ((iConst161) ? fElse414 : 0.0f) + ((iConst163) ? fElse415 : 0.0f) + ((iConst165) ? fElse416 : 0.0f) + ((iConst167) ? fElse417 : 0.0f) + ((iConst168) ? fElse418 : 0.0f))))) + -29.0f);
			fVbargraph22 = FAUSTFLOAT(fTemp480);
			float fTemp481 = 0.223606795f * (1.0f - fRec24[0]) * (std::pow(10.0f, 0.0500000007f * fTemp100) * fVec32[(IOTA0 - iConst199) & 32767] + std::pow(10.0f, 0.0500000007f * fTemp120) * fVec81[(IOTA0 - iConst199) & 32767] + std::pow(10.0f, 0.0500000007f * fTemp140) * fVec102[(IOTA0 - iConst199) & 32767] + std::pow(10.0f, 0.0500000007f * fTemp160) * fVec123[(IOTA0 - iConst199) & 32767] + std::pow(10.0f, 0.0500000007f * fTemp180) * fVec144[(IOTA0 - iConst199) & 32767] + std::pow(10.0f, 0.0500000007f * fTemp200) * fVec165[(IOTA0 - iConst199) & 32767] + std::pow(10.0f, 0.0500000007f * fTemp220) * fVec186[(IOTA0 - iConst199) & 32767] + std::pow(10.0f, 0.0500000007f * fTemp240) * fVec207[(IOTA0 - iConst199) & 32767] + std::pow(10.0f, 0.0500000007f * fTemp260) * fVec228[(IOTA0 - iConst199) & 32767] + std::pow(10.0f, 0.0500000007f * fTemp280) * fVec249[(IOTA0 - iConst199) & 32767] + std::pow(10.0f, 0.0500000007f * fTemp300) * fVec270[(IOTA0 - iConst199) & 32767] + std::pow(10.0f, 0.0500000007f * fTemp320) * fVec291[(IOTA0 - iConst199) & 32767] + std::pow(10.0f, 0.0500000007f * fTemp340) * fVec312[(IOTA0 - iConst199) & 32767] + std::pow(10.0f, 0.0500000007f * fTemp360) * fVec333[(IOTA0 - iConst199) & 32767] + std::pow(10.0f, 0.0500000007f * fTemp380) * fVec354[(IOTA0 - iConst199) & 32767] + std::pow(10.0f, 0.0500000007f * fTemp400) * fVec375[(IOTA0 - iConst199) & 32767] + std::pow(10.0f, 0.0500000007f * fTemp420) * fVec396[(IOTA0 - iConst199) & 32767] + std::pow(10.0f, 0.0500000007f * fTemp440) * fVec417[(IOTA0 - iConst199) & 32767] + std::pow(10.0f, 0.0500000007f * fTemp460) * fVec438[(IOTA0 - iConst199) & 32767] + std::pow(10.0f, 0.0500000007f * fTemp480) * fVec459[(IOTA0 - iConst199) & 32767]);
			float fTemp482 = fRec24[0] * (fTemp39 * fRec26[0] + fConst81 * fTemp40 * fTemp41) + fTemp481;
			fRec5[0] = fTemp36 * fTemp482;
			float fTemp483 = fTemp481 + fRec24[0] * (fTemp44 * fRec26[0] + fConst81 * fTemp40 * fTemp45);
			fRec6[0] = fTemp36 * fTemp483;
			fRec136[0] = fSlow15 + fConst4 * fRec136[1];
			float fTemp484 = 1.0f - fRec136[0];
			float fTemp485 = fRec5[0] * fTemp484 + fRec136[0] * fTemp482;
			float fTemp486 = 1.0f - fRec4[0];
			fRec140[0] = fTemp485 - fConst358 * (fConst359 * fRec140[2] + fConst360 * fRec140[1]);
			fRec139[0] = fConst358 * (fConst356 * fRec140[0] + fConst361 * fRec140[1] + fConst356 * fRec140[2]) - fConst357 * (fConst362 * fRec139[2] + fConst360 * fRec139[1]);
			fRec138[0] = fConst357 * (fConst356 * fRec139[0] + fConst361 * fRec139[1] + fConst356 * fRec139[2]) - fConst354 * (fConst363 * fRec138[2] + fConst360 * fRec138[1]);
			float fTemp487 = 20.0f * std::log10(std::max<float>(1.17549435e-38f, std::fabs(fConst354 * (fConst356 * fRec138[0] + fConst361 * fRec138[1] + fConst356 * fRec138[2]))));
			int iTemp488 = (fTemp487 > fSlow20) + (fTemp487 > fSlow21);
			float fThen419 = fSlow19 + (fTemp487 + -2.0f) - fSlow1;
			float fElse419 = 0.055555556f * mydsp_faustpower2_f(fSlow19 + (fTemp487 + 2.5f) - fSlow1);
			float fThen420 = ((iTemp488 == 1) ? fElse419 : fThen419);
			float fTemp489 = 0.0f - fSlow18 * std::max<float>(0.0f, ((iTemp488 == 0) ? 0.0f : fThen420));
			float fTemp490 = ((fTemp489 > fRec137[1]) ? fSlow27 : fSlow24);
			fRec137[0] = fTemp489 * (1.0f - fTemp490) + fRec137[1] * fTemp490;
			float fTemp491 = fRec6[0] * fTemp484 + fRec136[0] * fTemp483;
			fRec144[0] = fTemp491 - fConst358 * (fConst359 * fRec144[2] + fConst360 * fRec144[1]);
			fRec143[0] = fConst358 * (fConst356 * fRec144[0] + fConst361 * fRec144[1] + fConst356 * fRec144[2]) - fConst357 * (fConst362 * fRec143[2] + fConst360 * fRec143[1]);
			fRec142[0] = fConst357 * (fConst356 * fRec143[0] + fConst361 * fRec143[1] + fConst356 * fRec143[2]) - fConst354 * (fConst363 * fRec142[2] + fConst360 * fRec142[1]);
			float fTemp492 = 20.0f * std::log10(std::max<float>(1.17549435e-38f, std::fabs(fConst354 * (fConst356 * fRec142[0] + fConst361 * fRec142[1] + fConst356 * fRec142[2]))));
			int iTemp493 = (fTemp492 > fSlow20) + (fTemp492 > fSlow21);
			float fThen426 = fSlow19 + (fTemp492 + -2.0f) - fSlow1;
			float fElse426 = 0.055555556f * mydsp_faustpower2_f(fSlow19 + (fTemp492 + 2.5f) - fSlow1);
			float fThen427 = ((iTemp493 == 1) ? fElse426 : fThen426);
			float fTemp494 = 0.0f - fSlow18 * std::max<float>(0.0f, ((iTemp493 == 0) ? 0.0f : fThen427));
			float fTemp495 = ((fTemp494 > fRec141[1]) ? fSlow27 : fSlow24);
			fRec141[0] = fTemp494 * (1.0f - fTemp495) + fRec141[1] * fTemp495;
			float fTemp496 = fSlow16 + std::min<float>(fRec137[0], fRec141[0]);
			fVbargraph23 = FAUSTFLOAT(std::min<float>(12.0f, std::max<float>(-12.0f, fTemp496)));
			float fTemp497 = std::pow(10.0f, 0.00833333377f * fTemp496);
			fRec150[0] = fConst358 * (fRec140[2] + fRec140[0] + 2.0f * fRec140[1]) - fConst357 * (fConst362 * fRec150[2] + fConst360 * fRec150[1]);
			fRec149[0] = fConst357 * (fRec150[2] + fRec150[0] + 2.0f * fRec150[1]) - fConst354 * (fConst363 * fRec149[2] + fConst360 * fRec149[1]);
			fRec148[0] = fConst354 * (fRec149[2] + fRec149[0] + 2.0f * fRec149[1]) - fConst371 * (fConst372 * fRec148[2] + fConst373 * fRec148[1]);
			fRec147[0] = fConst371 * (fConst369 * fRec148[0] + fConst374 * fRec148[1] + fConst369 * fRec148[2]) - fConst370 * (fConst375 * fRec147[2] + fConst373 * fRec147[1]);
			fRec146[0] = fConst370 * (fConst369 * fRec147[0] + fConst374 * fRec147[1] + fConst369 * fRec147[2]) - fConst367 * (fConst376 * fRec146[2] + fConst373 * fRec146[1]);
			float fTemp498 = 20.0f * std::log10(std::max<float>(1.17549435e-38f, std::fabs(fConst367 * (fConst369 * fRec146[0] + fConst374 * fRec146[1] + fConst369 * fRec146[2]))));
			int iTemp499 = (fTemp498 > fSlow32) + (fTemp498 > fSlow33);
			float fThen429 = fTemp498 - fSlow34;
			float fElse429 = 0.0625f * mydsp_faustpower2_f(fSlow31 + fTemp498 - fSlow1);
			float fThen430 = ((iTemp499 == 1) ? fElse429 : fThen429);
			float fTemp500 = 0.0f - fSlow29 * std::max<float>(0.0f, ((iTemp499 == 0) ? 0.0f : fThen430));
			float fTemp501 = ((fTemp500 > fRec145[1]) ? fSlow27 : fSlow38);
			fRec145[0] = fTemp500 * (1.0f - fTemp501) + fRec145[1] * fTemp501;
			fRec156[0] = fConst358 * (fRec144[2] + fRec144[0] + 2.0f * fRec144[1]) - fConst357 * (fConst362 * fRec156[2] + fConst360 * fRec156[1]);
			fRec155[0] = fConst357 * (fRec156[2] + fRec156[0] + 2.0f * fRec156[1]) - fConst354 * (fConst363 * fRec155[2] + fConst360 * fRec155[1]);
			fRec154[0] = fConst354 * (fRec155[2] + fRec155[0] + 2.0f * fRec155[1]) - fConst371 * (fConst372 * fRec154[2] + fConst373 * fRec154[1]);
			fRec153[0] = fConst371 * (fConst369 * fRec154[0] + fConst374 * fRec154[1] + fConst369 * fRec154[2]) - fConst370 * (fConst375 * fRec153[2] + fConst373 * fRec153[1]);
			fRec152[0] = fConst370 * (fConst369 * fRec153[0] + fConst374 * fRec153[1] + fConst369 * fRec153[2]) - fConst367 * (fConst376 * fRec152[2] + fConst373 * fRec152[1]);
			float fTemp502 = 20.0f * std::log10(std::max<float>(1.17549435e-38f, std::fabs(fConst367 * (fConst369 * fRec152[0] + fConst374 * fRec152[1] + fConst369 * fRec152[2]))));
			int iTemp503 = (fTemp502 > fSlow32) + (fTemp502 > fSlow33);
			float fThen434 = fTemp502 - fSlow34;
			float fElse434 = 0.0625f * mydsp_faustpower2_f(fSlow31 + fTemp502 - fSlow1);
			float fThen435 = ((iTemp503 == 1) ? fElse434 : fThen434);
			float fTemp504 = 0.0f - fSlow29 * std::max<float>(0.0f, ((iTemp503 == 0) ? 0.0f : fThen435));
			float fTemp505 = ((fTemp504 > fRec151[1]) ? fSlow27 : fSlow38);
			fRec151[0] = fTemp504 * (1.0f - fTemp505) + fRec151[1] * fTemp505;
			float fTemp506 = fSlow16 + std::min<float>(fRec145[0], fRec151[0]);
			fVbargraph24 = FAUSTFLOAT(std::min<float>(12.0f, std::max<float>(-12.0f, fTemp506)));
			float fTemp507 = fTemp506;
			float fTemp508 = std::pow(10.0f, 0.00833333377f * fTemp507);
			float fTemp509 = mydsp_faustpower2_f(fTemp508) + -1.0f;
			float fTemp510 = std::pow(10.0f, 0.0250000004f * (0.0f - 0.333333343f * fTemp507));
			float fTemp511 = mydsp_faustpower2_f(fTemp510) + -1.0f;
			fRec178[0] = fConst371 * (fRec148[2] + fRec148[0] + 2.0f * fRec148[1]) - fConst370 * (fConst375 * fRec178[2] + fConst373 * fRec178[1]);
			fRec177[0] = fConst370 * (fRec178[2] + fRec178[0] + 2.0f * fRec178[1]) - fConst367 * (fConst376 * fRec177[2] + fConst373 * fRec177[1]);
			fRec176[0] = fConst367 * (fRec177[2] + fRec177[0] + 2.0f * fRec177[1]) - fConst383 * (fConst384 * fRec176[2] + fConst385 * fRec176[1]);
			fRec175[0] = fConst383 * (fConst381 * fRec176[0] + fConst386 * fRec176[1] + fConst381 * fRec176[2]) - fConst382 * (fConst387 * fRec175[2] + fConst385 * fRec175[1]);
			fRec174[0] = fConst382 * (fConst381 * fRec175[0] + fConst386 * fRec175[1] + fConst381 * fRec175[2]) - fConst379 * (fConst388 * fRec174[2] + fConst385 * fRec174[1]);
			float fTemp512 = 20.0f * std::log10(std::max<float>(1.17549435e-38f, std::fabs(fConst379 * (fConst381 * fRec174[0] + fConst386 * fRec174[1] + fConst381 * fRec174[2]))));
			int iTemp513 = (fTemp512 > fSlow40) + (fTemp512 > fSlow41);
			float fThen437 = fSlow19 + (fTemp512 + -6.0f) - fSlow1;
			float fElse437 = 0.0714285746f * mydsp_faustpower2_f(fSlow19 + (fTemp512 + -2.5f) - fSlow1);
			float fThen438 = ((iTemp513 == 1) ? fElse437 : fThen437);
			float fTemp514 = 0.0f - fSlow39 * std::max<float>(0.0f, ((iTemp513 == 0) ? 0.0f : fThen438));
			float fTemp515 = ((fTemp514 > fRec173[1]) ? fSlow47 : fSlow44);
			fRec173[0] = fTemp514 * (1.0f - fTemp515) + fRec173[1] * fTemp515;
			fRec184[0] = fConst371 * (fRec154[2] + fRec154[0] + 2.0f * fRec154[1]) - fConst370 * (fConst375 * fRec184[2] + fConst373 * fRec184[1]);
			fRec183[0] = fConst370 * (fRec184[2] + fRec184[0] + 2.0f * fRec184[1]) - fConst367 * (fConst376 * fRec183[2] + fConst373 * fRec183[1]);
			fRec182[0] = fConst367 * (fRec183[2] + fRec183[0] + 2.0f * fRec183[1]) - fConst383 * (fConst384 * fRec182[2] + fConst385 * fRec182[1]);
			fRec181[0] = fConst383 * (fConst381 * fRec182[0] + fConst386 * fRec182[1] + fConst381 * fRec182[2]) - fConst382 * (fConst387 * fRec181[2] + fConst385 * fRec181[1]);
			fRec180[0] = fConst382 * (fConst381 * fRec181[0] + fConst386 * fRec181[1] + fConst381 * fRec181[2]) - fConst379 * (fConst388 * fRec180[2] + fConst385 * fRec180[1]);
			float fTemp516 = 20.0f * std::log10(std::max<float>(1.17549435e-38f, std::fabs(fConst379 * (fConst381 * fRec180[0] + fConst386 * fRec180[1] + fConst381 * fRec180[2]))));
			int iTemp517 = (fTemp516 > fSlow40) + (fTemp516 > fSlow41);
			float fThen444 = fSlow19 + (fTemp516 + -6.0f) - fSlow1;
			float fElse444 = 0.0714285746f * mydsp_faustpower2_f(fSlow19 + (fTemp516 + -2.5f) - fSlow1);
			float fThen445 = ((iTemp517 == 1) ? fElse444 : fThen444);
			float fTemp518 = 0.0f - fSlow39 * std::max<float>(0.0f, ((iTemp517 == 0) ? 0.0f : fThen445));
			float fTemp519 = ((fTemp518 > fRec179[1]) ? fSlow47 : fSlow44);
			fRec179[0] = fTemp518 * (1.0f - fTemp519) + fRec179[1] * fTemp519;
			float fTemp520 = fSlow16 + std::min<float>(fRec173[0], fRec179[0]);
			fVbargraph25 = FAUSTFLOAT(std::min<float>(12.0f, std::max<float>(-12.0f, fTemp520)));
			float fTemp521 = fTemp520;
			float fTemp522 = std::pow(10.0f, 0.00833333377f * fTemp521);
			float fTemp523 = mydsp_faustpower2_f(fTemp522) + -1.0f;
			float fTemp524 = std::pow(10.0f, 0.0250000004f * (0.0f - 0.333333343f * fTemp521));
			float fTemp525 = mydsp_faustpower2_f(fTemp524) + -1.0f;
			fRec206[0] = fConst383 * (fRec176[2] + fRec176[0] + 2.0f * fRec176[1]) - fConst382 * (fConst387 * fRec206[2] + fConst385 * fRec206[1]);
			fRec205[0] = fConst382 * (fRec206[2] + fRec206[0] + 2.0f * fRec206[1]) - fConst379 * (fConst388 * fRec205[2] + fConst385 * fRec205[1]);
			fRec204[0] = fConst379 * (fRec205[2] + fRec205[0] + 2.0f * fRec205[1]) - fConst395 * (fConst396 * fRec204[2] + fConst397 * fRec204[1]);
			fRec203[0] = fConst395 * (fConst393 * fRec204[0] + fConst398 * fRec204[1] + fConst393 * fRec204[2]) - fConst394 * (fConst399 * fRec203[2] + fConst397 * fRec203[1]);
			fRec202[0] = fConst394 * (fConst393 * fRec203[0] + fConst398 * fRec203[1] + fConst393 * fRec203[2]) - fConst391 * (fConst400 * fRec202[2] + fConst397 * fRec202[1]);
			float fTemp526 = 20.0f * std::log10(std::max<float>(1.17549435e-38f, std::fabs(fConst391 * (fConst393 * fRec202[0] + fConst398 * fRec202[1] + fConst393 * fRec202[2]))));
			int iTemp527 = (fTemp526 > fSlow49) + (fTemp526 > fSlow50);
			float fThen447 = fSlow19 + (fTemp526 + -8.0f) - fSlow1;
			float fElse447 = 0.0833333358f * mydsp_faustpower2_f(fSlow19 + (fTemp526 + -5.0f) - fSlow1);
			float fThen448 = ((iTemp527 == 1) ? fElse447 : fThen447);
			float fTemp528 = 0.0f - fSlow48 * std::max<float>(0.0f, ((iTemp527 == 0) ? 0.0f : fThen448));
			float fTemp529 = ((fTemp528 > fRec201[1]) ? fSlow56 : fSlow53);
			fRec201[0] = fTemp528 * (1.0f - fTemp529) + fRec201[1] * fTemp529;
			fRec212[0] = fConst383 * (fRec182[2] + fRec182[0] + 2.0f * fRec182[1]) - fConst382 * (fConst387 * fRec212[2] + fConst385 * fRec212[1]);
			fRec211[0] = fConst382 * (fRec212[2] + fRec212[0] + 2.0f * fRec212[1]) - fConst379 * (fConst388 * fRec211[2] + fConst385 * fRec211[1]);
			fRec210[0] = fConst379 * (fRec211[2] + fRec211[0] + 2.0f * fRec211[1]) - fConst395 * (fConst396 * fRec210[2] + fConst397 * fRec210[1]);
			fRec209[0] = fConst395 * (fConst393 * fRec210[0] + fConst398 * fRec210[1] + fConst393 * fRec210[2]) - fConst394 * (fConst399 * fRec209[2] + fConst397 * fRec209[1]);
			fRec208[0] = fConst394 * (fConst393 * fRec209[0] + fConst398 * fRec209[1] + fConst393 * fRec209[2]) - fConst391 * (fConst400 * fRec208[2] + fConst397 * fRec208[1]);
			float fTemp530 = 20.0f * std::log10(std::max<float>(1.17549435e-38f, std::fabs(fConst391 * (fConst393 * fRec208[0] + fConst398 * fRec208[1] + fConst393 * fRec208[2]))));
			int iTemp531 = (fTemp530 > fSlow49) + (fTemp530 > fSlow50);
			float fThen454 = fSlow19 + (fTemp530 + -8.0f) - fSlow1;
			float fElse454 = 0.0833333358f * mydsp_faustpower2_f(fSlow19 + (fTemp530 + -5.0f) - fSlow1);
			float fThen455 = ((iTemp531 == 1) ? fElse454 : fThen454);
			float fTemp532 = 0.0f - fSlow48 * std::max<float>(0.0f, ((iTemp531 == 0) ? 0.0f : fThen455));
			float fTemp533 = ((fTemp532 > fRec207[1]) ? fSlow56 : fSlow53);
			fRec207[0] = fTemp532 * (1.0f - fTemp533) + fRec207[1] * fTemp533;
			float fTemp534 = fSlow16 + std::min<float>(fRec201[0], fRec207[0]);
			fVbargraph26 = FAUSTFLOAT(std::min<float>(12.0f, std::max<float>(-12.0f, fTemp534)));
			float fTemp535 = fTemp534;
			float fTemp536 = std::pow(10.0f, 0.00833333377f * fTemp535);
			float fTemp537 = mydsp_faustpower2_f(fTemp536) + -1.0f;
			float fTemp538 = std::pow(10.0f, 0.0250000004f * (0.0f - 0.333333343f * fTemp535));
			float fTemp539 = mydsp_faustpower2_f(fTemp538) + -1.0f;
			fRec231[0] = fConst395 * (fRec204[2] + fRec204[0] + 2.0f * fRec204[1]) - fConst394 * (fConst399 * fRec231[2] + fConst397 * fRec231[1]);
			fRec230[0] = fConst394 * (fRec231[2] + fRec231[0] + 2.0f * fRec231[1]) - fConst391 * (fConst400 * fRec230[2] + fConst397 * fRec230[1]);
			float fTemp540 = 20.0f * std::log10(std::max<float>(1.17549435e-38f, std::fabs(fConst391 * (fRec230[2] + fRec230[0] + 2.0f * fRec230[1]))));
			int iTemp541 = (fTemp540 > fSlow59) + (fTemp540 > fSlow60);
			float fThen457 = fSlow58 + (fTemp540 + -2.0f) - fSlow1;
			float fElse457 = 0.0833333358f * mydsp_faustpower2_f(fSlow58 + (fTemp540 + 1.0f) - fSlow1);
			float fThen458 = ((iTemp541 == 1) ? fElse457 : fThen457);
			float fTemp542 = 0.0f - fSlow57 * std::max<float>(0.0f, ((iTemp541 == 0) ? 0.0f : fThen458));
			float fTemp543 = ((fTemp542 > fRec229[1]) ? fSlow56 : fSlow63);
			fRec229[0] = fTemp542 * (1.0f - fTemp543) + fRec229[1] * fTemp543;
			fRec234[0] = fConst395 * (fRec210[2] + fRec210[0] + 2.0f * fRec210[1]) - fConst394 * (fConst399 * fRec234[2] + fConst397 * fRec234[1]);
			fRec233[0] = fConst394 * (fRec234[2] + fRec234[0] + 2.0f * fRec234[1]) - fConst391 * (fConst400 * fRec233[2] + fConst397 * fRec233[1]);
			float fTemp544 = 20.0f * std::log10(std::max<float>(1.17549435e-38f, std::fabs(fConst391 * (fRec233[2] + fRec233[0] + 2.0f * fRec233[1]))));
			int iTemp545 = (fTemp544 > fSlow59) + (fTemp544 > fSlow60);
			float fThen462 = fSlow58 + (fTemp544 + -2.0f) - fSlow1;
			float fElse462 = 0.0833333358f * mydsp_faustpower2_f(fSlow58 + (fTemp544 + 1.0f) - fSlow1);
			float fThen463 = ((iTemp545 == 1) ? fElse462 : fThen462);
			float fTemp546 = 0.0f - fSlow57 * std::max<float>(0.0f, ((iTemp545 == 0) ? 0.0f : fThen463));
			float fTemp547 = ((fTemp546 > fRec232[1]) ? fSlow56 : fSlow63);
			fRec232[0] = fTemp546 * (1.0f - fTemp547) + fRec232[1] * fTemp547;
			float fTemp548 = fSlow16 + std::min<float>(fRec229[0], fRec232[0]);
			fVbargraph27 = FAUSTFLOAT(std::min<float>(12.0f, std::max<float>(-12.0f, fTemp548)));
			float fTemp549 = std::pow(10.0f, 0.00833333377f * fTemp548);
			float fTemp550 = mydsp_faustpower2_f(fTemp549) + -1.0f;
			float fTemp551 = std::sqrt(fTemp549);
			float fTemp552 = fRec239[1] + fConst389 * (fTemp485 - fRec240[1]) / fTemp551;
			float fTemp553 = fConst389 / fTemp551;
			float fTemp554 = fConst389 * (fTemp553 + 2.0f) / fTemp551 + 1.0f;
			float fTemp555 = fTemp552 / fTemp554;
			fRec239[0] = 2.0f * fTemp555 - fRec239[1];
			float fTemp556 = fTemp551 * fTemp554;
			float fTemp557 = fRec240[1] + fConst389 * fTemp552 / fTemp556;
			fRec240[0] = 2.0f * fTemp557 - fRec240[1];
			float fRec241 = fTemp555;
			float fRec242 = fTemp557;
			float fTemp558 = fTemp549 + -1.0f;
			float fTemp559 = fTemp485 + 2.0f * fRec241 * fTemp558 + fRec242 * fTemp550;
			float fTemp560 = fRec243[1] + fConst389 * (fTemp559 - fRec244[1]) / fTemp551;
			float fTemp561 = fConst389 * (fTemp553 + 1.41442716f) / fTemp551 + 1.0f;
			float fTemp562 = fTemp560 / fTemp561;
			fRec243[0] = 2.0f * fTemp562 - fRec243[1];
			float fTemp563 = fTemp551 * fTemp561;
			float fTemp564 = fRec244[1] + fConst389 * fTemp560 / fTemp563;
			fRec244[0] = 2.0f * fTemp564 - fRec244[1];
			float fRec245 = fTemp562;
			float fRec246 = fTemp564;
			float fTemp565 = fRec242 + fRec246;
			float fTemp566 = 2.0f * fRec241 + 1.41442716f * fRec245;
			float fTemp567 = fTemp550 * fTemp565 + fTemp485 + fTemp558 * fTemp566;
			float fTemp568 = fRec235[1] + fConst389 * (fTemp567 - fRec236[1]) / fTemp551;
			float fTemp569 = fConst389 * (fTemp553 + 0.5f) / fTemp551 + 1.0f;
			float fTemp570 = fTemp568 / fTemp569;
			fRec235[0] = 2.0f * fTemp570 - fRec235[1];
			float fTemp571 = fTemp551 * fTemp569;
			float fTemp572 = fRec236[1] + fConst389 * fTemp568 / fTemp571;
			fRec236[0] = 2.0f * fTemp572 - fRec236[1];
			float fRec237 = fTemp570;
			float fRec238 = fTemp572;
			float fTemp573 = fTemp550 * (fRec238 + fTemp565) + fTemp485 + fTemp558 * (fTemp566 + 0.5f * fRec237);
			float fTemp574 = std::sqrt(fTemp538);
			float fTemp575 = fRec225[1] + fConst389 * (fTemp573 - fRec226[1]) / fTemp574;
			float fTemp576 = fConst389 / fTemp574;
			float fTemp577 = fConst389 * (fTemp576 + 2.0f) / fTemp574 + 1.0f;
			float fTemp578 = fTemp575 / fTemp577;
			fRec225[0] = 2.0f * fTemp578 - fRec225[1];
			float fTemp579 = fTemp574 * fTemp577;
			float fTemp580 = fRec226[1] + fConst389 * fTemp575 / fTemp579;
			fRec226[0] = 2.0f * fTemp580 - fRec226[1];
			float fRec227 = fTemp578;
			float fRec228 = fTemp580;
			float fTemp581 = fTemp538 + -1.0f;
			float fTemp582 = fTemp573 + 2.0f * fRec227 * fTemp581 + fRec228 * fTemp539;
			float fTemp583 = fRec247[1] + fConst389 * (fTemp582 - fRec248[1]) / fTemp574;
			float fTemp584 = fConst389 * (fTemp576 + 1.41442716f) / fTemp574 + 1.0f;
			float fTemp585 = fTemp583 / fTemp584;
			fRec247[0] = 2.0f * fTemp585 - fRec247[1];
			float fTemp586 = fTemp574 * fTemp584;
			float fTemp587 = fRec248[1] + fConst389 * fTemp583 / fTemp586;
			fRec248[0] = 2.0f * fTemp587 - fRec248[1];
			float fRec249 = fTemp585;
			float fRec250 = fTemp587;
			float fTemp588 = fRec228 + fRec250;
			float fTemp589 = 2.0f * fRec227 + 1.41442716f * fRec249;
			float fTemp590 = fTemp539 * fTemp588 + fTemp573 + fTemp581 * fTemp589;
			float fTemp591 = fRec221[1] + fConst389 * (fTemp590 - fRec222[1]) / fTemp574;
			float fTemp592 = fConst389 * (fTemp576 + 0.5f) / fTemp574 + 1.0f;
			float fTemp593 = fTemp591 / fTemp592;
			fRec221[0] = 2.0f * fTemp593 - fRec221[1];
			float fTemp594 = fTemp574 * fTemp592;
			float fTemp595 = fRec222[1] + fConst389 * fTemp591 / fTemp594;
			fRec222[0] = 2.0f * fTemp595 - fRec222[1];
			float fRec223 = fTemp593;
			float fRec224 = fTemp595;
			float fTemp596 = fTemp539 * (fRec224 + fTemp588) + fTemp573 + fTemp581 * (fTemp589 + 0.5f * fRec223);
			float fTemp597 = std::sqrt(fTemp536);
			float fTemp598 = fRec217[1] + fConst377 * (fTemp596 - fRec218[1]) / fTemp597;
			float fTemp599 = fConst377 / fTemp597;
			float fTemp600 = fConst377 * (fTemp599 + 2.0f) / fTemp597 + 1.0f;
			float fTemp601 = fTemp598 / fTemp600;
			fRec217[0] = 2.0f * fTemp601 - fRec217[1];
			float fTemp602 = fTemp597 * fTemp600;
			float fTemp603 = fRec218[1] + fConst377 * fTemp598 / fTemp602;
			fRec218[0] = 2.0f * fTemp603 - fRec218[1];
			float fRec219 = fTemp601;
			float fRec220 = fTemp603;
			float fTemp604 = fTemp536 + -1.0f;
			float fTemp605 = fTemp596 + 2.0f * fRec219 * fTemp604 + fRec220 * fTemp537;
			float fTemp606 = fRec251[1] + fConst377 * (fTemp605 - fRec252[1]) / fTemp597;
			float fTemp607 = fConst377 * (fTemp599 + 1.41442716f) / fTemp597 + 1.0f;
			float fTemp608 = fTemp606 / fTemp607;
			fRec251[0] = 2.0f * fTemp608 - fRec251[1];
			float fTemp609 = fTemp597 * fTemp607;
			float fTemp610 = fRec252[1] + fConst377 * fTemp606 / fTemp609;
			fRec252[0] = 2.0f * fTemp610 - fRec252[1];
			float fRec253 = fTemp608;
			float fRec254 = fTemp610;
			float fTemp611 = fRec220 + fRec254;
			float fTemp612 = 2.0f * fRec219 + 1.41442716f * fRec253;
			float fTemp613 = fTemp537 * fTemp611 + fTemp596 + fTemp604 * fTemp612;
			float fTemp614 = fRec213[1] + fConst377 * (fTemp613 - fRec214[1]) / fTemp597;
			float fTemp615 = fConst377 * (fTemp599 + 0.5f) / fTemp597 + 1.0f;
			float fTemp616 = fTemp614 / fTemp615;
			fRec213[0] = 2.0f * fTemp616 - fRec213[1];
			float fTemp617 = fTemp597 * fTemp615;
			float fTemp618 = fRec214[1] + fConst377 * fTemp614 / fTemp617;
			fRec214[0] = 2.0f * fTemp618 - fRec214[1];
			float fRec215 = fTemp616;
			float fRec216 = fTemp618;
			float fTemp619 = fTemp537 * (fRec216 + fTemp611) + fTemp596 + fTemp604 * (fTemp612 + 0.5f * fRec215);
			float fTemp620 = std::sqrt(fTemp524);
			float fTemp621 = fRec197[1] + fConst377 * (fTemp619 - fRec198[1]) / fTemp620;
			float fTemp622 = fConst377 / fTemp620;
			float fTemp623 = fConst377 * (fTemp622 + 2.0f) / fTemp620 + 1.0f;
			float fTemp624 = fTemp621 / fTemp623;
			fRec197[0] = 2.0f * fTemp624 - fRec197[1];
			float fTemp625 = fTemp620 * fTemp623;
			float fTemp626 = fRec198[1] + fConst377 * fTemp621 / fTemp625;
			fRec198[0] = 2.0f * fTemp626 - fRec198[1];
			float fRec199 = fTemp624;
			float fRec200 = fTemp626;
			float fTemp627 = fTemp524 + -1.0f;
			float fTemp628 = fTemp619 + 2.0f * fRec199 * fTemp627 + fRec200 * fTemp525;
			float fTemp629 = fRec255[1] + fConst377 * (fTemp628 - fRec256[1]) / fTemp620;
			float fTemp630 = fConst377 * (fTemp622 + 1.41442716f) / fTemp620 + 1.0f;
			float fTemp631 = fTemp629 / fTemp630;
			fRec255[0] = 2.0f * fTemp631 - fRec255[1];
			float fTemp632 = fTemp620 * fTemp630;
			float fTemp633 = fRec256[1] + fConst377 * fTemp629 / fTemp632;
			fRec256[0] = 2.0f * fTemp633 - fRec256[1];
			float fRec257 = fTemp631;
			float fRec258 = fTemp633;
			float fTemp634 = fRec200 + fRec258;
			float fTemp635 = 2.0f * fRec199 + 1.41442716f * fRec257;
			float fTemp636 = fTemp525 * fTemp634 + fTemp619 + fTemp627 * fTemp635;
			float fTemp637 = fRec193[1] + fConst377 * (fTemp636 - fRec194[1]) / fTemp620;
			float fTemp638 = fConst377 * (fTemp622 + 0.5f) / fTemp620 + 1.0f;
			float fTemp639 = fTemp637 / fTemp638;
			fRec193[0] = 2.0f * fTemp639 - fRec193[1];
			float fTemp640 = fTemp620 * fTemp638;
			float fTemp641 = fRec194[1] + fConst377 * fTemp637 / fTemp640;
			fRec194[0] = 2.0f * fTemp641 - fRec194[1];
			float fRec195 = fTemp639;
			float fRec196 = fTemp641;
			float fTemp642 = fTemp525 * (fRec196 + fTemp634) + fTemp619 + fTemp627 * (fTemp635 + 0.5f * fRec195);
			float fTemp643 = std::sqrt(fTemp522);
			float fTemp644 = fRec189[1] + fConst365 * (fTemp642 - fRec190[1]) / fTemp643;
			float fTemp645 = fConst365 / fTemp643;
			float fTemp646 = fConst365 * (fTemp645 + 2.0f) / fTemp643 + 1.0f;
			float fTemp647 = fTemp644 / fTemp646;
			fRec189[0] = 2.0f * fTemp647 - fRec189[1];
			float fTemp648 = fTemp643 * fTemp646;
			float fTemp649 = fRec190[1] + fConst365 * fTemp644 / fTemp648;
			fRec190[0] = 2.0f * fTemp649 - fRec190[1];
			float fRec191 = fTemp647;
			float fRec192 = fTemp649;
			float fTemp650 = fTemp522 + -1.0f;
			float fTemp651 = fTemp642 + 2.0f * fRec191 * fTemp650 + fRec192 * fTemp523;
			float fTemp652 = fRec259[1] + fConst365 * (fTemp651 - fRec260[1]) / fTemp643;
			float fTemp653 = fConst365 * (fTemp645 + 1.41442716f) / fTemp643 + 1.0f;
			float fTemp654 = fTemp652 / fTemp653;
			fRec259[0] = 2.0f * fTemp654 - fRec259[1];
			float fTemp655 = fTemp643 * fTemp653;
			float fTemp656 = fRec260[1] + fConst365 * fTemp652 / fTemp655;
			fRec260[0] = 2.0f * fTemp656 - fRec260[1];
			float fRec261 = fTemp654;
			float fRec262 = fTemp656;
			float fTemp657 = fRec192 + fRec262;
			float fTemp658 = 2.0f * fRec191 + 1.41442716f * fRec261;
			float fTemp659 = fTemp523 * fTemp657 + fTemp642 + fTemp650 * fTemp658;
			float fTemp660 = fRec185[1] + fConst365 * (fTemp659 - fRec186[1]) / fTemp643;
			float fTemp661 = fConst365 * (fTemp645 + 0.5f) / fTemp643 + 1.0f;
			float fTemp662 = fTemp660 / fTemp661;
			fRec185[0] = 2.0f * fTemp662 - fRec185[1];
			float fTemp663 = fTemp643 * fTemp661;
			float fTemp664 = fRec186[1] + fConst365 * fTemp660 / fTemp663;
			fRec186[0] = 2.0f * fTemp664 - fRec186[1];
			float fRec187 = fTemp662;
			float fRec188 = fTemp664;
			float fTemp665 = fTemp523 * (fRec188 + fTemp657) + fTemp642 + fTemp650 * (fTemp658 + 0.5f * fRec187);
			float fTemp666 = std::sqrt(fTemp510);
			float fTemp667 = fRec169[1] + fConst365 * (fTemp665 - fRec170[1]) / fTemp666;
			float fTemp668 = fConst365 / fTemp666;
			float fTemp669 = fConst365 * (fTemp668 + 2.0f) / fTemp666 + 1.0f;
			float fTemp670 = fTemp667 / fTemp669;
			fRec169[0] = 2.0f * fTemp670 - fRec169[1];
			float fTemp671 = fTemp666 * fTemp669;
			float fTemp672 = fRec170[1] + fConst365 * fTemp667 / fTemp671;
			fRec170[0] = 2.0f * fTemp672 - fRec170[1];
			float fRec171 = fTemp670;
			float fRec172 = fTemp672;
			float fTemp673 = fTemp510 + -1.0f;
			float fTemp674 = fTemp665 + 2.0f * fRec171 * fTemp673 + fRec172 * fTemp511;
			float fTemp675 = fRec263[1] + fConst365 * (fTemp674 - fRec264[1]) / fTemp666;
			float fTemp676 = fConst365 * (fTemp668 + 1.41442716f) / fTemp666 + 1.0f;
			float fTemp677 = fTemp675 / fTemp676;
			fRec263[0] = 2.0f * fTemp677 - fRec263[1];
			float fTemp678 = fTemp666 * fTemp676;
			float fTemp679 = fRec264[1] + fConst365 * fTemp675 / fTemp678;
			fRec264[0] = 2.0f * fTemp679 - fRec264[1];
			float fRec265 = fTemp677;
			float fRec266 = fTemp679;
			float fTemp680 = fRec172 + fRec266;
			float fTemp681 = 2.0f * fRec171 + 1.41442716f * fRec265;
			float fTemp682 = fTemp511 * fTemp680 + fTemp665 + fTemp673 * fTemp681;
			float fTemp683 = fRec165[1] + fConst365 * (fTemp682 - fRec166[1]) / fTemp666;
			float fTemp684 = fConst365 * (fTemp668 + 0.5f) / fTemp666 + 1.0f;
			float fTemp685 = fTemp683 / fTemp684;
			fRec165[0] = 2.0f * fTemp685 - fRec165[1];
			float fTemp686 = fTemp666 * fTemp684;
			float fTemp687 = fRec166[1] + fConst365 * fTemp683 / fTemp686;
			fRec166[0] = 2.0f * fTemp687 - fRec166[1];
			float fRec167 = fTemp685;
			float fRec168 = fTemp687;
			float fTemp688 = fTemp511 * (fRec168 + fTemp680) + fTemp665 + fTemp673 * (fTemp681 + 0.5f * fRec167);
			float fTemp689 = std::sqrt(fTemp508);
			float fTemp690 = fRec161[1] + fConst352 * (fTemp688 - fRec162[1]) / fTemp689;
			float fTemp691 = fConst352 / fTemp689;
			float fTemp692 = fConst352 * (fTemp691 + 2.0f) / fTemp689 + 1.0f;
			float fTemp693 = fTemp690 / fTemp692;
			fRec161[0] = 2.0f * fTemp693 - fRec161[1];
			float fTemp694 = fTemp689 * fTemp692;
			float fTemp695 = fRec162[1] + fConst352 * fTemp690 / fTemp694;
			fRec162[0] = 2.0f * fTemp695 - fRec162[1];
			float fRec163 = fTemp693;
			float fRec164 = fTemp695;
			float fTemp696 = fTemp508 + -1.0f;
			float fTemp697 = fTemp688 + 2.0f * fRec163 * fTemp696 + fRec164 * fTemp509;
			float fTemp698 = fRec267[1] + fConst352 * (fTemp697 - fRec268[1]) / fTemp689;
			float fTemp699 = fConst352 * (fTemp691 + 1.41442716f) / fTemp689 + 1.0f;
			float fTemp700 = fTemp698 / fTemp699;
			fRec267[0] = 2.0f * fTemp700 - fRec267[1];
			float fTemp701 = fTemp689 * fTemp699;
			float fTemp702 = fRec268[1] + fConst352 * fTemp698 / fTemp701;
			fRec268[0] = 2.0f * fTemp702 - fRec268[1];
			float fRec269 = fTemp700;
			float fRec270 = fTemp702;
			float fTemp703 = fRec164 + fRec270;
			float fTemp704 = 2.0f * fRec163 + 1.41442716f * fRec269;
			float fTemp705 = fTemp509 * fTemp703 + fTemp688 + fTemp696 * fTemp704;
			float fTemp706 = fRec157[1] + fConst352 * (fTemp705 - fRec158[1]) / fTemp689;
			float fTemp707 = fConst352 * (fTemp691 + 0.5f) / fTemp689 + 1.0f;
			float fTemp708 = fTemp706 / fTemp707;
			fRec157[0] = 2.0f * fTemp708 - fRec157[1];
			float fTemp709 = fTemp689 * fTemp707;
			float fTemp710 = fRec158[1] + fConst352 * fTemp706 / fTemp709;
			fRec158[0] = 2.0f * fTemp710 - fRec158[1];
			float fRec159 = fTemp708;
			float fRec160 = fTemp710;
			float fTemp711 = fTemp509 * (fRec160 + fTemp703) + fTemp688 + fTemp696 * (fTemp704 + 0.5f * fRec159);
			float fTemp712 = std::sqrt(fTemp497);
			float fTemp713 = fRec271[1] + fConst352 * fTemp712 * (fTemp711 - fRec272[1]);
			float fTemp714 = fConst352 * fTemp712;
			float fTemp715 = fConst352 * fTemp712 * (fTemp714 + 2.0f) + 1.0f;
			float fTemp716 = fTemp713 / fTemp715;
			fRec271[0] = 2.0f * fTemp716 - fRec271[1];
			float fTemp717 = fRec272[1] + fConst352 * (fTemp712 * fTemp713) / fTemp715;
			fRec272[0] = 2.0f * fTemp717 - fRec272[1];
			float fRec273 = fTemp716;
			float fRec274 = fTemp717;
			float fTemp718 = 1.0f - fTemp497;
			float fTemp719 = 1.0f - mydsp_faustpower2_f(fTemp497);
			float fTemp720 = fTemp497 * (fTemp497 * fTemp711 + 2.0f * fRec273 * fTemp718) + fRec274 * fTemp719;
			float fTemp721 = fRec275[1] + fConst352 * fTemp712 * (fTemp720 - fRec276[1]);
			float fTemp722 = fConst352 * fTemp712 * (fTemp714 + 1.41442716f) + 1.0f;
			float fTemp723 = fTemp721 / fTemp722;
			fRec275[0] = 2.0f * fTemp723 - fRec275[1];
			float fTemp724 = fRec276[1] + fConst352 * (fTemp712 * fTemp721) / fTemp722;
			fRec276[0] = 2.0f * fTemp724 - fRec276[1];
			float fRec277 = fTemp723;
			float fRec278 = fTemp724;
			float fTemp725 = fTemp497 * (fTemp497 * fTemp720 + 1.41442716f * fRec277 * fTemp718) + fRec278 * fTemp719;
			float fTemp726 = fRec279[1] + fConst352 * fTemp712 * (fTemp725 - fRec280[1]);
			float fTemp727 = fConst352 * fTemp712 * (fTemp714 + 0.5f) + 1.0f;
			float fTemp728 = fTemp726 / fTemp727;
			fRec279[0] = 2.0f * fTemp728 - fRec279[1];
			float fTemp729 = fRec280[1] + fConst352 * (fTemp712 * fTemp726) / fTemp727;
			fRec280[0] = 2.0f * fTemp729 - fRec280[1];
			float fRec281 = fTemp728;
			float fRec282 = fTemp729;
			float fTemp730 = fRec4[0] * fTemp485 + fTemp486 * (fTemp497 * (fTemp497 * fTemp725 + 0.5f * fRec281 * fTemp718) + fRec282 * fTemp719);
			fVec480[IOTA0 & 2047] = fTemp730;
			float fTemp731 = fRec335[1] + fConst389 * (fTemp491 - fRec336[1]) / fTemp551;
			float fTemp732 = fTemp731 / fTemp554;
			fRec335[0] = 2.0f * fTemp732 - fRec335[1];
			float fTemp733 = fRec336[1] + fConst389 * fTemp731 / fTemp556;
			fRec336[0] = 2.0f * fTemp733 - fRec336[1];
			float fRec337 = fTemp732;
			float fRec338 = fTemp733;
			float fTemp734 = fTemp491 + 2.0f * fRec337 * fTemp558 + fRec338 * fTemp550;
			float fTemp735 = fRec339[1] + fConst389 * (fTemp734 - fRec340[1]) / fTemp551;
			float fTemp736 = fTemp735 / fTemp561;
			fRec339[0] = 2.0f * fTemp736 - fRec339[1];
			float fTemp737 = fRec340[1] + fConst389 * fTemp735 / fTemp563;
			fRec340[0] = 2.0f * fTemp737 - fRec340[1];
			float fRec341 = fTemp736;
			float fRec342 = fTemp737;
			float fTemp738 = fRec338 + fRec342;
			float fTemp739 = 2.0f * fRec337 + 1.41442716f * fRec341;
			float fTemp740 = fTemp550 * fTemp738 + fTemp491 + fTemp558 * fTemp739;
			float fTemp741 = fRec331[1] + fConst389 * (fTemp740 - fRec332[1]) / fTemp551;
			float fTemp742 = fTemp741 / fTemp569;
			fRec331[0] = 2.0f * fTemp742 - fRec331[1];
			float fTemp743 = fRec332[1] + fConst389 * fTemp741 / fTemp571;
			fRec332[0] = 2.0f * fTemp743 - fRec332[1];
			float fRec333 = fTemp742;
			float fRec334 = fTemp743;
			float fTemp744 = fTemp550 * (fRec334 + fTemp738) + fTemp491 + fTemp558 * (fTemp739 + 0.5f * fRec333);
			float fTemp745 = fRec327[1] + fConst389 * (fTemp744 - fRec328[1]) / fTemp574;
			float fTemp746 = fTemp745 / fTemp577;
			fRec327[0] = 2.0f * fTemp746 - fRec327[1];
			float fTemp747 = fRec328[1] + fConst389 * fTemp745 / fTemp579;
			fRec328[0] = 2.0f * fTemp747 - fRec328[1];
			float fRec329 = fTemp746;
			float fRec330 = fTemp747;
			float fTemp748 = fTemp744 + 2.0f * fRec329 * fTemp581 + fRec330 * fTemp539;
			float fTemp749 = fRec343[1] + fConst389 * (fTemp748 - fRec344[1]) / fTemp574;
			float fTemp750 = fTemp749 / fTemp584;
			fRec343[0] = 2.0f * fTemp750 - fRec343[1];
			float fTemp751 = fRec344[1] + fConst389 * fTemp749 / fTemp586;
			fRec344[0] = 2.0f * fTemp751 - fRec344[1];
			float fRec345 = fTemp750;
			float fRec346 = fTemp751;
			float fTemp752 = fRec330 + fRec346;
			float fTemp753 = 2.0f * fRec329 + 1.41442716f * fRec345;
			float fTemp754 = fTemp539 * fTemp752 + fTemp744 + fTemp581 * fTemp753;
			float fTemp755 = fRec323[1] + fConst389 * (fTemp754 - fRec324[1]) / fTemp574;
			float fTemp756 = fTemp755 / fTemp592;
			fRec323[0] = 2.0f * fTemp756 - fRec323[1];
			float fTemp757 = fRec324[1] + fConst389 * fTemp755 / fTemp594;
			fRec324[0] = 2.0f * fTemp757 - fRec324[1];
			float fRec325 = fTemp756;
			float fRec326 = fTemp757;
			float fTemp758 = fTemp539 * (fRec326 + fTemp752) + fTemp744 + fTemp581 * (fTemp753 + 0.5f * fRec325);
			float fTemp759 = fRec319[1] + fConst377 * (fTemp758 - fRec320[1]) / fTemp597;
			float fTemp760 = fTemp759 / fTemp600;
			fRec319[0] = 2.0f * fTemp760 - fRec319[1];
			float fTemp761 = fRec320[1] + fConst377 * fTemp759 / fTemp602;
			fRec320[0] = 2.0f * fTemp761 - fRec320[1];
			float fRec321 = fTemp760;
			float fRec322 = fTemp761;
			float fTemp762 = fTemp758 + 2.0f * fRec321 * fTemp604 + fRec322 * fTemp537;
			float fTemp763 = fRec347[1] + fConst377 * (fTemp762 - fRec348[1]) / fTemp597;
			float fTemp764 = fTemp763 / fTemp607;
			fRec347[0] = 2.0f * fTemp764 - fRec347[1];
			float fTemp765 = fRec348[1] + fConst377 * fTemp763 / fTemp609;
			fRec348[0] = 2.0f * fTemp765 - fRec348[1];
			float fRec349 = fTemp764;
			float fRec350 = fTemp765;
			float fTemp766 = fRec322 + fRec350;
			float fTemp767 = 2.0f * fRec321 + 1.41442716f * fRec349;
			float fTemp768 = fTemp537 * fTemp766 + fTemp758 + fTemp604 * fTemp767;
			float fTemp769 = fRec315[1] + fConst377 * (fTemp768 - fRec316[1]) / fTemp597;
			float fTemp770 = fTemp769 / fTemp615;
			fRec315[0] = 2.0f * fTemp770 - fRec315[1];
			float fTemp771 = fRec316[1] + fConst377 * fTemp769 / fTemp617;
			fRec316[0] = 2.0f * fTemp771 - fRec316[1];
			float fRec317 = fTemp770;
			float fRec318 = fTemp771;
			float fTemp772 = fTemp537 * (fRec318 + fTemp766) + fTemp758 + fTemp604 * (fTemp767 + 0.5f * fRec317);
			float fTemp773 = fRec311[1] + fConst377 * (fTemp772 - fRec312[1]) / fTemp620;
			float fTemp774 = fTemp773 / fTemp623;
			fRec311[0] = 2.0f * fTemp774 - fRec311[1];
			float fTemp775 = fRec312[1] + fConst377 * fTemp773 / fTemp625;
			fRec312[0] = 2.0f * fTemp775 - fRec312[1];
			float fRec313 = fTemp774;
			float fRec314 = fTemp775;
			float fTemp776 = fTemp772 + 2.0f * fRec313 * fTemp627 + fRec314 * fTemp525;
			float fTemp777 = fRec351[1] + fConst377 * (fTemp776 - fRec352[1]) / fTemp620;
			float fTemp778 = fTemp777 / fTemp630;
			fRec351[0] = 2.0f * fTemp778 - fRec351[1];
			float fTemp779 = fRec352[1] + fConst377 * fTemp777 / fTemp632;
			fRec352[0] = 2.0f * fTemp779 - fRec352[1];
			float fRec353 = fTemp778;
			float fRec354 = fTemp779;
			float fTemp780 = fRec314 + fRec354;
			float fTemp781 = 2.0f * fRec313 + 1.41442716f * fRec353;
			float fTemp782 = fTemp525 * fTemp780 + fTemp772 + fTemp627 * fTemp781;
			float fTemp783 = fRec307[1] + fConst377 * (fTemp782 - fRec308[1]) / fTemp620;
			float fTemp784 = fTemp783 / fTemp638;
			fRec307[0] = 2.0f * fTemp784 - fRec307[1];
			float fTemp785 = fRec308[1] + fConst377 * fTemp783 / fTemp640;
			fRec308[0] = 2.0f * fTemp785 - fRec308[1];
			float fRec309 = fTemp784;
			float fRec310 = fTemp785;
			float fTemp786 = fTemp525 * (fRec310 + fTemp780) + fTemp772 + fTemp627 * (fTemp781 + 0.5f * fRec309);
			float fTemp787 = fRec303[1] + fConst365 * (fTemp786 - fRec304[1]) / fTemp643;
			float fTemp788 = fTemp787 / fTemp646;
			fRec303[0] = 2.0f * fTemp788 - fRec303[1];
			float fTemp789 = fRec304[1] + fConst365 * fTemp787 / fTemp648;
			fRec304[0] = 2.0f * fTemp789 - fRec304[1];
			float fRec305 = fTemp788;
			float fRec306 = fTemp789;
			float fTemp790 = fTemp786 + 2.0f * fRec305 * fTemp650 + fRec306 * fTemp523;
			float fTemp791 = fRec355[1] + fConst365 * (fTemp790 - fRec356[1]) / fTemp643;
			float fTemp792 = fTemp791 / fTemp653;
			fRec355[0] = 2.0f * fTemp792 - fRec355[1];
			float fTemp793 = fRec356[1] + fConst365 * fTemp791 / fTemp655;
			fRec356[0] = 2.0f * fTemp793 - fRec356[1];
			float fRec357 = fTemp792;
			float fRec358 = fTemp793;
			float fTemp794 = fRec306 + fRec358;
			float fTemp795 = 2.0f * fRec305 + 1.41442716f * fRec357;
			float fTemp796 = fTemp523 * fTemp794 + fTemp786 + fTemp650 * fTemp795;
			float fTemp797 = fRec299[1] + fConst365 * (fTemp796 - fRec300[1]) / fTemp643;
			float fTemp798 = fTemp797 / fTemp661;
			fRec299[0] = 2.0f * fTemp798 - fRec299[1];
			float fTemp799 = fRec300[1] + fConst365 * fTemp797 / fTemp663;
			fRec300[0] = 2.0f * fTemp799 - fRec300[1];
			float fRec301 = fTemp798;
			float fRec302 = fTemp799;
			float fTemp800 = fTemp523 * (fRec302 + fTemp794) + fTemp786 + fTemp650 * (fTemp795 + 0.5f * fRec301);
			float fTemp801 = fRec295[1] + fConst365 * (fTemp800 - fRec296[1]) / fTemp666;
			float fTemp802 = fTemp801 / fTemp669;
			fRec295[0] = 2.0f * fTemp802 - fRec295[1];
			float fTemp803 = fRec296[1] + fConst365 * fTemp801 / fTemp671;
			fRec296[0] = 2.0f * fTemp803 - fRec296[1];
			float fRec297 = fTemp802;
			float fRec298 = fTemp803;
			float fTemp804 = fTemp800 + 2.0f * fRec297 * fTemp673 + fRec298 * fTemp511;
			float fTemp805 = fRec359[1] + fConst365 * (fTemp804 - fRec360[1]) / fTemp666;
			float fTemp806 = fTemp805 / fTemp676;
			fRec359[0] = 2.0f * fTemp806 - fRec359[1];
			float fTemp807 = fRec360[1] + fConst365 * fTemp805 / fTemp678;
			fRec360[0] = 2.0f * fTemp807 - fRec360[1];
			float fRec361 = fTemp806;
			float fRec362 = fTemp807;
			float fTemp808 = fRec298 + fRec362;
			float fTemp809 = 2.0f * fRec297 + 1.41442716f * fRec361;
			float fTemp810 = fTemp511 * fTemp808 + fTemp800 + fTemp673 * fTemp809;
			float fTemp811 = fRec291[1] + fConst365 * (fTemp810 - fRec292[1]) / fTemp666;
			float fTemp812 = fTemp811 / fTemp684;
			fRec291[0] = 2.0f * fTemp812 - fRec291[1];
			float fTemp813 = fRec292[1] + fConst365 * fTemp811 / fTemp686;
			fRec292[0] = 2.0f * fTemp813 - fRec292[1];
			float fRec293 = fTemp812;
			float fRec294 = fTemp813;
			float fTemp814 = fTemp511 * (fRec294 + fTemp808) + fTemp800 + fTemp673 * (fTemp809 + 0.5f * fRec293);
			float fTemp815 = fRec287[1] + fConst352 * (fTemp814 - fRec288[1]) / fTemp689;
			float fTemp816 = fTemp815 / fTemp692;
			fRec287[0] = 2.0f * fTemp816 - fRec287[1];
			float fTemp817 = fRec288[1] + fConst352 * fTemp815 / fTemp694;
			fRec288[0] = 2.0f * fTemp817 - fRec288[1];
			float fRec289 = fTemp816;
			float fRec290 = fTemp817;
			float fTemp818 = fTemp814 + 2.0f * fRec289 * fTemp696 + fRec290 * fTemp509;
			float fTemp819 = fRec363[1] + fConst352 * (fTemp818 - fRec364[1]) / fTemp689;
			float fTemp820 = fTemp819 / fTemp699;
			fRec363[0] = 2.0f * fTemp820 - fRec363[1];
			float fTemp821 = fRec364[1] + fConst352 * fTemp819 / fTemp701;
			fRec364[0] = 2.0f * fTemp821 - fRec364[1];
			float fRec365 = fTemp820;
			float fRec366 = fTemp821;
			float fTemp822 = fRec290 + fRec366;
			float fTemp823 = 2.0f * fRec289 + 1.41442716f * fRec365;
			float fTemp824 = fTemp509 * fTemp822 + fTemp814 + fTemp696 * fTemp823;
			float fTemp825 = fRec283[1] + fConst352 * (fTemp824 - fRec284[1]) / fTemp689;
			float fTemp826 = fTemp825 / fTemp707;
			fRec283[0] = 2.0f * fTemp826 - fRec283[1];
			float fTemp827 = fRec284[1] + fConst352 * fTemp825 / fTemp709;
			fRec284[0] = 2.0f * fTemp827 - fRec284[1];
			float fRec285 = fTemp826;
			float fRec286 = fTemp827;
			float fTemp828 = fTemp509 * (fRec286 + fTemp822) + fTemp814 + fTemp696 * (fTemp823 + 0.5f * fRec285);
			float fTemp829 = fRec367[1] + fConst352 * fTemp712 * (fTemp828 - fRec368[1]);
			float fTemp830 = fTemp829 / fTemp715;
			fRec367[0] = 2.0f * fTemp830 - fRec367[1];
			float fTemp831 = fRec368[1] + fConst352 * (fTemp712 * fTemp829) / fTemp715;
			fRec368[0] = 2.0f * fTemp831 - fRec368[1];
			float fRec369 = fTemp830;
			float fRec370 = fTemp831;
			float fTemp832 = fTemp497 * (fTemp497 * fTemp828 + 2.0f * fRec369 * fTemp718) + fRec370 * fTemp719;
			float fTemp833 = fRec371[1] + fConst352 * fTemp712 * (fTemp832 - fRec372[1]);
			float fTemp834 = fTemp833 / fTemp722;
			fRec371[0] = 2.0f * fTemp834 - fRec371[1];
			float fTemp835 = fRec372[1] + fConst352 * (fTemp712 * fTemp833) / fTemp722;
			fRec372[0] = 2.0f * fTemp835 - fRec372[1];
			float fRec373 = fTemp834;
			float fRec374 = fTemp835;
			float fTemp836 = fTemp497 * (fTemp497 * fTemp832 + 1.41442716f * fRec373 * fTemp718) + fRec374 * fTemp719;
			float fTemp837 = fRec375[1] + fConst352 * fTemp712 * (fTemp836 - fRec376[1]);
			float fTemp838 = fTemp837 / fTemp727;
			fRec375[0] = 2.0f * fTemp838 - fRec375[1];
			float fTemp839 = fRec376[1] + fConst352 * (fTemp712 * fTemp837) / fTemp727;
			fRec376[0] = 2.0f * fTemp839 - fRec376[1];
			float fRec377 = fTemp838;
			float fRec378 = fTemp839;
			float fTemp840 = fRec4[0] * fTemp491 + fTemp486 * (fTemp497 * (fTemp497 * fTemp836 + 0.5f * fRec377 * fTemp718) + fRec378 * fTemp719);
			fVec481[IOTA0 & 2047] = fTemp840;
			float fTemp841 = std::fabs(std::max<float>(std::fabs(fTemp730), std::fabs(fTemp840)));
			int iTemp842 = (fTemp841 >= fRec3[1]) | (float(iRec2[1]) >= fConst23);
			int iThen465 = iRec2[1] + 1;
			iRec2[0] = ((iTemp842) ? 0 : iThen465);
			fRec3[0] = ((iTemp842) ? fTemp841 : fRec3[1]);
			fRec1[0] = fConst2 * fRec3[0] + fConst1 * fRec1[1];
			float fTemp843 = std::fabs(fRec1[0]);
			fRec0[0] = std::max<float>(fTemp843, fConst21 * fRec0[1] + fConst401 * fTemp843);
			float fTemp844 = std::min<float>(1.0f, 0.891250908f / std::max<float>(fRec0[0], 1.1920929e-07f));
			float fTemp845 = fTemp844 * fVec480[(IOTA0 - iConst402) & 2047];
			fVbargraph28 = FAUSTFLOAT(20.0f * std::log10(std::max<float>(1.17549435e-38f, std::fabs(fTemp845))));
			float fTemp846 = fTemp845;
			fVec482[0] = fTemp846;
			output0[i0] = FAUSTFLOAT(fTemp846);
			fVec483[0] = 0.0f - fConst32 * (fConst33 * fRec381[1] - fConst34 * fVec482[1]);
			fRec382[0] = fVec483[1] + fConst32 * (fConst35 * fTemp846 - 2.0f * (fConst37 * fRec382[1] - fConst38 * fVec482[1]));
			fRec381[0] = fRec382[0];
			fVec484[0] = 0.500327051f * fRec381[1] - fConst40 * fRec379[1];
			fRec380[0] = fConst30 * fRec381[1] + fConst39 * (fVec484[1] - fConst41 * fRec380[1] + 0.500327051f * fRec381[0]);
			fRec379[0] = fRec380[0];
			float fTemp847 = mydsp_faustpower2_f(fRec379[0]);
			fVec485[0] = fTemp847;
			float fTemp848 = fTemp847 + fVec485[1];
			fVec486[0] = fTemp848;
			float fTemp849 = fTemp848 + fVec486[2];
			fVec487[0] = fTemp849;
			float fTemp850 = fTemp849 + fVec487[4];
			fVec488[0] = fTemp850;
			float fTemp851 = fTemp850 + fVec488[8];
			fVec489[IOTA0 & 31] = fTemp851;
			float fTemp852 = fTemp851 + fVec489[(IOTA0 - 16) & 31];
			fVec490[IOTA0 & 63] = fTemp852;
			float fTemp853 = fTemp852 + fVec490[(IOTA0 - 32) & 63];
			fVec491[IOTA0 & 127] = fTemp853;
			float fTemp854 = fTemp853 + fVec491[(IOTA0 - 64) & 127];
			fVec492[IOTA0 & 255] = fTemp854;
			float fTemp855 = fTemp854 + fVec492[(IOTA0 - 128) & 255];
			fVec493[IOTA0 & 511] = fTemp855;
			float fTemp856 = fTemp855 + fVec493[(IOTA0 - 256) & 511];
			fVec494[IOTA0 & 1023] = fTemp856;
			float fTemp857 = fTemp856 + fVec494[(IOTA0 - 512) & 1023];
			fVec495[IOTA0 & 2047] = fTemp857;
			float fTemp858 = fTemp857 + fVec495[(IOTA0 - 1024) & 2047];
			fVec496[IOTA0 & 4095] = fTemp858;
			float fTemp859 = fTemp858 + fVec496[(IOTA0 - 2048) & 4095];
			fVec497[IOTA0 & 8191] = fTemp859;
			float fTemp860 = fTemp859 + fVec497[(IOTA0 - 4096) & 8191];
			fVec498[IOTA0 & 16383] = fTemp860;
			float fTemp861 = fTemp860 + fVec498[(IOTA0 - 8192) & 16383];
			fVec499[IOTA0 & 32767] = fTemp861;
			float fTemp862 = fTemp861 + fVec499[(IOTA0 - 16384) & 32767];
			fVec500[IOTA0 & 65535] = fTemp862;
			fVec501[IOTA0 & 131071] = fTemp862 + fVec500[(IOTA0 - 32768) & 65535];
			float fElse467 = 0.860009849f * fVec501[(IOTA0 - iConst436) & 131071];
			float fElse468 = 0.860009849f * fVec500[(IOTA0 - iConst438) & 65535];
			float fElse469 = 0.860009849f * fVec499[(IOTA0 - iConst440) & 32767];
			float fElse470 = 0.860009849f * fVec498[(IOTA0 - iConst442) & 16383];
			float fElse471 = 0.860009849f * fVec497[(IOTA0 - iConst444) & 8191];
			float fElse472 = 0.860009849f * fVec496[(IOTA0 - iConst446) & 4095];
			float fElse473 = 0.860009849f * fVec495[(IOTA0 - iConst448) & 2047];
			float fElse474 = 0.860009849f * fVec494[(IOTA0 - iConst450) & 1023];
			float fElse475 = 0.860009849f * fVec493[(IOTA0 - iConst452) & 511];
			float fElse476 = 0.860009849f * fVec492[(IOTA0 - iConst454) & 255];
			float fElse477 = 0.860009849f * fVec491[(IOTA0 - iConst456) & 127];
			float fElse478 = 0.860009849f * fVec490[(IOTA0 - iConst458) & 63];
			float fElse479 = 0.860009849f * fVec489[(IOTA0 - iConst460) & 31];
			float fElse480 = 0.860009849f * fVec488[iConst462];
			float fElse481 = 0.860009849f * fVec487[iConst464];
			float fElse482 = 0.860009849f * fTemp847;
			float fElse483 = 0.860009849f * fVec486[iConst465];
			float fTemp863 = fTemp844 * fVec481[(IOTA0 - iConst402) & 2047];
			fVbargraph29 = FAUSTFLOAT(20.0f * std::log10(std::max<float>(1.17549435e-38f, std::fabs(fTemp863))));
			float fTemp864 = fTemp863;
			fVec502[0] = fTemp864;
			fVec503[0] = 0.0f - fConst32 * (fConst33 * fRec385[1] - fConst34 * fVec502[1]);
			fRec386[0] = fVec503[1] + fConst32 * (fConst35 * fTemp864 - 2.0f * (fConst37 * fRec386[1] - fConst38 * fVec502[1]));
			fRec385[0] = fRec386[0];
			fVec504[0] = 0.500327051f * fRec385[1] - fConst40 * fRec383[1];
			fRec384[0] = fConst30 * fRec385[1] + fConst39 * (fVec504[1] - fConst41 * fRec384[1] + 0.500327051f * fRec385[0]);
			fRec383[0] = fRec384[0];
			float fTemp865 = mydsp_faustpower2_f(fRec383[0]);
			fVec505[0] = fTemp865;
			float fTemp866 = fTemp865 + fVec505[1];
			fVec506[0] = fTemp866;
			float fTemp867 = fTemp866 + fVec506[2];
			fVec507[0] = fTemp867;
			float fTemp868 = fTemp867 + fVec507[4];
			fVec508[0] = fTemp868;
			float fTemp869 = fTemp868 + fVec508[8];
			fVec509[IOTA0 & 31] = fTemp869;
			float fTemp870 = fTemp869 + fVec509[(IOTA0 - 16) & 31];
			fVec510[IOTA0 & 63] = fTemp870;
			float fTemp871 = fTemp870 + fVec510[(IOTA0 - 32) & 63];
			fVec511[IOTA0 & 127] = fTemp871;
			float fTemp872 = fTemp871 + fVec511[(IOTA0 - 64) & 127];
			fVec512[IOTA0 & 255] = fTemp872;
			float fTemp873 = fTemp872 + fVec512[(IOTA0 - 128) & 255];
			fVec513[IOTA0 & 511] = fTemp873;
			float fTemp874 = fTemp873 + fVec513[(IOTA0 - 256) & 511];
			fVec514[IOTA0 & 1023] = fTemp874;
			float fTemp875 = fTemp874 + fVec514[(IOTA0 - 512) & 1023];
			fVec515[IOTA0 & 2047] = fTemp875;
			float fTemp876 = fTemp875 + fVec515[(IOTA0 - 1024) & 2047];
			fVec516[IOTA0 & 4095] = fTemp876;
			float fTemp877 = fTemp876 + fVec516[(IOTA0 - 2048) & 4095];
			fVec517[IOTA0 & 8191] = fTemp877;
			float fTemp878 = fTemp877 + fVec517[(IOTA0 - 4096) & 8191];
			fVec518[IOTA0 & 16383] = fTemp878;
			float fTemp879 = fTemp878 + fVec518[(IOTA0 - 8192) & 16383];
			fVec519[IOTA0 & 32767] = fTemp879;
			float fTemp880 = fTemp879 + fVec519[(IOTA0 - 16384) & 32767];
			fVec520[IOTA0 & 65535] = fTemp880;
			fVec521[IOTA0 & 131071] = fTemp880 + fVec520[(IOTA0 - 32768) & 65535];
			float fElse484 = 0.860009849f * fVec521[(IOTA0 - iConst436) & 131071];
			float fElse485 = 0.860009849f * fVec520[(IOTA0 - iConst438) & 65535];
			float fElse486 = 0.860009849f * fVec519[(IOTA0 - iConst440) & 32767];
			float fElse487 = 0.860009849f * fVec518[(IOTA0 - iConst442) & 16383];
			float fElse488 = 0.860009849f * fVec517[(IOTA0 - iConst444) & 8191];
			float fElse489 = 0.860009849f * fVec516[(IOTA0 - iConst446) & 4095];
			float fElse490 = 0.860009849f * fVec515[(IOTA0 - iConst448) & 2047];
			float fElse491 = 0.860009849f * fVec514[(IOTA0 - iConst450) & 1023];
			float fElse492 = 0.860009849f * fVec513[(IOTA0 - iConst452) & 511];
			float fElse493 = 0.860009849f * fVec512[(IOTA0 - iConst454) & 255];
			float fElse494 = 0.860009849f * fVec511[(IOTA0 - iConst456) & 127];
			float fElse495 = 0.860009849f * fVec510[(IOTA0 - iConst458) & 63];
			float fElse496 = 0.860009849f * fVec509[(IOTA0 - iConst460) & 31];
			float fElse497 = 0.860009849f * fVec508[iConst462];
			float fElse498 = 0.860009849f * fVec507[iConst464];
			float fElse499 = 0.860009849f * fTemp865;
			float fElse500 = 0.860009849f * fVec506[iConst465];
			fVbargraph30 = FAUSTFLOAT(4.34294462f * std::log(std::max<float>(9.99999996e-13f, fConst404 * (((iConst405) ? fElse467 : 0.0f) + ((iConst437) ? fElse468 : 0.0f) + ((iConst439) ? fElse469 : 0.0f) + ((iConst441) ? fElse470 : 0.0f) + ((iConst443) ? fElse471 : 0.0f) + ((iConst445) ? fElse472 : 0.0f) + ((iConst447) ? fElse473 : 0.0f) + ((iConst449) ? fElse474 : 0.0f) + ((iConst451) ? fElse475 : 0.0f) + ((iConst453) ? fElse476 : 0.0f) + ((iConst455) ? fElse477 : 0.0f) + ((iConst457) ? fElse478 : 0.0f) + ((iConst459) ? fElse479 : 0.0f) + ((iConst461) ? fElse480 : 0.0f) + ((iConst463) ? fElse481 : 0.0f) + ((iConst465) ? fElse482 : 0.0f) + ((iConst466) ? fElse483 : 0.0f) + ((iConst405) ? fElse484 : 0.0f) + ((iConst437) ? fElse485 : 0.0f) + ((iConst439) ? fElse486 : 0.0f) + ((iConst441) ? fElse487 : 0.0f) + ((iConst443) ? fElse488 : 0.0f) + ((iConst445) ? fElse489 : 0.0f) + ((iConst447) ? fElse490 : 0.0f) + ((iConst449) ? fElse491 : 0.0f) + ((iConst451) ? fElse492 : 0.0f) + ((iConst453) ? fElse493 : 0.0f) + ((iConst455) ? fElse494 : 0.0f) + ((iConst457) ? fElse495 : 0.0f) + ((iConst459) ? fElse496 : 0.0f) + ((iConst461) ? fElse497 : 0.0f) + ((iConst463) ? fElse498 : 0.0f) + ((iConst465) ? fElse499 : 0.0f) + ((iConst466) ? fElse500 : 0.0f)))) + -0.690999985f);
			output1[i0] = FAUSTFLOAT(fTemp864);
			fRec4[1] = fRec4[0];
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
			fRec15[1] = fRec15[0];
			fVec5[1] = fVec5[0];
			fRec19[1] = fRec19[0];
			fRec18[1] = fRec18[0];
			fVec6[1] = fVec6[0];
			fRec17[1] = fRec17[0];
			fRec16[1] = fRec16[0];
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
			fRec23[1] = fRec23[0];
			fRec22[1] = fRec22[0];
			fVec19[1] = fVec19[0];
			fRec21[1] = fRec21[0];
			fRec20[1] = fRec20[0];
			fVec20[1] = fVec20[0];
			fVec21[2] = fVec21[1];
			fVec21[1] = fVec21[0];
			for (int j4 = 6; j4 > 0; j4 = j4 - 1) {
				fVec22[j4] = fVec22[j4 - 1];
			}
			for (int j5 = 14; j5 > 0; j5 = j5 - 1) {
				fVec23[j5] = fVec23[j5 - 1];
			}
			fRec10[1] = fRec10[0];
			fRec11[1] = fRec11[0];
			fRec8[1] = fRec8[0];
			fRec7[1] = fRec7[0];
			fRec24[1] = fRec24[0];
			fRec25[1] = fRec25[0];
			fRec26[1] = fRec26[0];
			fRec28[2] = fRec28[1];
			fRec28[1] = fRec28[0];
			fRec27[2] = fRec27[1];
			fRec27[1] = fRec27[0];
			fRec35[2] = fRec35[1];
			fRec35[1] = fRec35[0];
			fRec34[2] = fRec34[1];
			fRec34[1] = fRec34[0];
			fVec31[1] = fVec31[0];
			fRec33[2] = fRec33[1];
			fRec33[1] = fRec33[0];
			fVec33[1] = fVec33[0];
			fRec32[1] = fRec32[0];
			fRec31[1] = fRec31[0];
			fVec34[1] = fVec34[0];
			fRec30[1] = fRec30[0];
			fRec29[1] = fRec29[0];
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
			fRec39[1] = fRec39[0];
			fRec38[1] = fRec38[0];
			fVec54[1] = fVec54[0];
			fRec37[1] = fRec37[0];
			fRec36[1] = fRec36[0];
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
			fRec40[1] = fRec40[0];
			fRec45[2] = fRec45[1];
			fRec45[1] = fRec45[0];
			fVec82[1] = fVec82[0];
			fRec44[1] = fRec44[0];
			fRec43[1] = fRec43[0];
			fVec83[1] = fVec83[0];
			fRec42[1] = fRec42[0];
			fRec41[1] = fRec41[0];
			fVec84[1] = fVec84[0];
			fVec85[2] = fVec85[1];
			fVec85[1] = fVec85[0];
			for (int j12 = 6; j12 > 0; j12 = j12 - 1) {
				fVec86[j12] = fVec86[j12 - 1];
			}
			for (int j13 = 14; j13 > 0; j13 = j13 - 1) {
				fVec87[j13] = fVec87[j13 - 1];
			}
			fRec50[2] = fRec50[1];
			fRec50[1] = fRec50[0];
			fVec103[1] = fVec103[0];
			fRec49[1] = fRec49[0];
			fRec48[1] = fRec48[0];
			fVec104[1] = fVec104[0];
			fRec47[1] = fRec47[0];
			fRec46[1] = fRec46[0];
			fVec105[1] = fVec105[0];
			fVec106[2] = fVec106[1];
			fVec106[1] = fVec106[0];
			for (int j14 = 6; j14 > 0; j14 = j14 - 1) {
				fVec107[j14] = fVec107[j14 - 1];
			}
			for (int j15 = 14; j15 > 0; j15 = j15 - 1) {
				fVec108[j15] = fVec108[j15 - 1];
			}
			fRec55[2] = fRec55[1];
			fRec55[1] = fRec55[0];
			fVec124[1] = fVec124[0];
			fRec54[1] = fRec54[0];
			fRec53[1] = fRec53[0];
			fVec125[1] = fVec125[0];
			fRec52[1] = fRec52[0];
			fRec51[1] = fRec51[0];
			fVec126[1] = fVec126[0];
			fVec127[2] = fVec127[1];
			fVec127[1] = fVec127[0];
			for (int j16 = 6; j16 > 0; j16 = j16 - 1) {
				fVec128[j16] = fVec128[j16 - 1];
			}
			for (int j17 = 14; j17 > 0; j17 = j17 - 1) {
				fVec129[j17] = fVec129[j17 - 1];
			}
			fRec60[2] = fRec60[1];
			fRec60[1] = fRec60[0];
			fVec145[1] = fVec145[0];
			fRec59[1] = fRec59[0];
			fRec58[1] = fRec58[0];
			fVec146[1] = fVec146[0];
			fRec57[1] = fRec57[0];
			fRec56[1] = fRec56[0];
			fVec147[1] = fVec147[0];
			fVec148[2] = fVec148[1];
			fVec148[1] = fVec148[0];
			for (int j18 = 6; j18 > 0; j18 = j18 - 1) {
				fVec149[j18] = fVec149[j18 - 1];
			}
			for (int j19 = 14; j19 > 0; j19 = j19 - 1) {
				fVec150[j19] = fVec150[j19 - 1];
			}
			fRec65[2] = fRec65[1];
			fRec65[1] = fRec65[0];
			fVec166[1] = fVec166[0];
			fRec64[1] = fRec64[0];
			fRec63[1] = fRec63[0];
			fVec167[1] = fVec167[0];
			fRec62[1] = fRec62[0];
			fRec61[1] = fRec61[0];
			fVec168[1] = fVec168[0];
			fVec169[2] = fVec169[1];
			fVec169[1] = fVec169[0];
			for (int j20 = 6; j20 > 0; j20 = j20 - 1) {
				fVec170[j20] = fVec170[j20 - 1];
			}
			for (int j21 = 14; j21 > 0; j21 = j21 - 1) {
				fVec171[j21] = fVec171[j21 - 1];
			}
			fRec70[2] = fRec70[1];
			fRec70[1] = fRec70[0];
			fVec187[1] = fVec187[0];
			fRec69[1] = fRec69[0];
			fRec68[1] = fRec68[0];
			fVec188[1] = fVec188[0];
			fRec67[1] = fRec67[0];
			fRec66[1] = fRec66[0];
			fVec189[1] = fVec189[0];
			fVec190[2] = fVec190[1];
			fVec190[1] = fVec190[0];
			for (int j22 = 6; j22 > 0; j22 = j22 - 1) {
				fVec191[j22] = fVec191[j22 - 1];
			}
			for (int j23 = 14; j23 > 0; j23 = j23 - 1) {
				fVec192[j23] = fVec192[j23 - 1];
			}
			fRec75[2] = fRec75[1];
			fRec75[1] = fRec75[0];
			fVec208[1] = fVec208[0];
			fRec74[1] = fRec74[0];
			fRec73[1] = fRec73[0];
			fVec209[1] = fVec209[0];
			fRec72[1] = fRec72[0];
			fRec71[1] = fRec71[0];
			fVec210[1] = fVec210[0];
			fVec211[2] = fVec211[1];
			fVec211[1] = fVec211[0];
			for (int j24 = 6; j24 > 0; j24 = j24 - 1) {
				fVec212[j24] = fVec212[j24 - 1];
			}
			for (int j25 = 14; j25 > 0; j25 = j25 - 1) {
				fVec213[j25] = fVec213[j25 - 1];
			}
			fRec80[2] = fRec80[1];
			fRec80[1] = fRec80[0];
			fVec229[1] = fVec229[0];
			fRec79[1] = fRec79[0];
			fRec78[1] = fRec78[0];
			fVec230[1] = fVec230[0];
			fRec77[1] = fRec77[0];
			fRec76[1] = fRec76[0];
			fVec231[1] = fVec231[0];
			fVec232[2] = fVec232[1];
			fVec232[1] = fVec232[0];
			for (int j26 = 6; j26 > 0; j26 = j26 - 1) {
				fVec233[j26] = fVec233[j26 - 1];
			}
			for (int j27 = 14; j27 > 0; j27 = j27 - 1) {
				fVec234[j27] = fVec234[j27 - 1];
			}
			fRec85[2] = fRec85[1];
			fRec85[1] = fRec85[0];
			fVec250[1] = fVec250[0];
			fRec84[1] = fRec84[0];
			fRec83[1] = fRec83[0];
			fVec251[1] = fVec251[0];
			fRec82[1] = fRec82[0];
			fRec81[1] = fRec81[0];
			fVec252[1] = fVec252[0];
			fVec253[2] = fVec253[1];
			fVec253[1] = fVec253[0];
			for (int j28 = 6; j28 > 0; j28 = j28 - 1) {
				fVec254[j28] = fVec254[j28 - 1];
			}
			for (int j29 = 14; j29 > 0; j29 = j29 - 1) {
				fVec255[j29] = fVec255[j29 - 1];
			}
			fRec90[2] = fRec90[1];
			fRec90[1] = fRec90[0];
			fVec271[1] = fVec271[0];
			fRec89[1] = fRec89[0];
			fRec88[1] = fRec88[0];
			fVec272[1] = fVec272[0];
			fRec87[1] = fRec87[0];
			fRec86[1] = fRec86[0];
			fVec273[1] = fVec273[0];
			fVec274[2] = fVec274[1];
			fVec274[1] = fVec274[0];
			for (int j30 = 6; j30 > 0; j30 = j30 - 1) {
				fVec275[j30] = fVec275[j30 - 1];
			}
			for (int j31 = 14; j31 > 0; j31 = j31 - 1) {
				fVec276[j31] = fVec276[j31 - 1];
			}
			fRec95[2] = fRec95[1];
			fRec95[1] = fRec95[0];
			fVec292[1] = fVec292[0];
			fRec94[1] = fRec94[0];
			fRec93[1] = fRec93[0];
			fVec293[1] = fVec293[0];
			fRec92[1] = fRec92[0];
			fRec91[1] = fRec91[0];
			fVec294[1] = fVec294[0];
			fVec295[2] = fVec295[1];
			fVec295[1] = fVec295[0];
			for (int j32 = 6; j32 > 0; j32 = j32 - 1) {
				fVec296[j32] = fVec296[j32 - 1];
			}
			for (int j33 = 14; j33 > 0; j33 = j33 - 1) {
				fVec297[j33] = fVec297[j33 - 1];
			}
			fRec100[2] = fRec100[1];
			fRec100[1] = fRec100[0];
			fVec313[1] = fVec313[0];
			fRec99[1] = fRec99[0];
			fRec98[1] = fRec98[0];
			fVec314[1] = fVec314[0];
			fRec97[1] = fRec97[0];
			fRec96[1] = fRec96[0];
			fVec315[1] = fVec315[0];
			fVec316[2] = fVec316[1];
			fVec316[1] = fVec316[0];
			for (int j34 = 6; j34 > 0; j34 = j34 - 1) {
				fVec317[j34] = fVec317[j34 - 1];
			}
			for (int j35 = 14; j35 > 0; j35 = j35 - 1) {
				fVec318[j35] = fVec318[j35 - 1];
			}
			fRec105[2] = fRec105[1];
			fRec105[1] = fRec105[0];
			fVec334[1] = fVec334[0];
			fRec104[1] = fRec104[0];
			fRec103[1] = fRec103[0];
			fVec335[1] = fVec335[0];
			fRec102[1] = fRec102[0];
			fRec101[1] = fRec101[0];
			fVec336[1] = fVec336[0];
			fVec337[2] = fVec337[1];
			fVec337[1] = fVec337[0];
			for (int j36 = 6; j36 > 0; j36 = j36 - 1) {
				fVec338[j36] = fVec338[j36 - 1];
			}
			for (int j37 = 14; j37 > 0; j37 = j37 - 1) {
				fVec339[j37] = fVec339[j37 - 1];
			}
			fRec110[2] = fRec110[1];
			fRec110[1] = fRec110[0];
			fVec355[1] = fVec355[0];
			fRec109[1] = fRec109[0];
			fRec108[1] = fRec108[0];
			fVec356[1] = fVec356[0];
			fRec107[1] = fRec107[0];
			fRec106[1] = fRec106[0];
			fVec357[1] = fVec357[0];
			fVec358[2] = fVec358[1];
			fVec358[1] = fVec358[0];
			for (int j38 = 6; j38 > 0; j38 = j38 - 1) {
				fVec359[j38] = fVec359[j38 - 1];
			}
			for (int j39 = 14; j39 > 0; j39 = j39 - 1) {
				fVec360[j39] = fVec360[j39 - 1];
			}
			fRec115[2] = fRec115[1];
			fRec115[1] = fRec115[0];
			fVec376[1] = fVec376[0];
			fRec114[1] = fRec114[0];
			fRec113[1] = fRec113[0];
			fVec377[1] = fVec377[0];
			fRec112[1] = fRec112[0];
			fRec111[1] = fRec111[0];
			fVec378[1] = fVec378[0];
			fVec379[2] = fVec379[1];
			fVec379[1] = fVec379[0];
			for (int j40 = 6; j40 > 0; j40 = j40 - 1) {
				fVec380[j40] = fVec380[j40 - 1];
			}
			for (int j41 = 14; j41 > 0; j41 = j41 - 1) {
				fVec381[j41] = fVec381[j41 - 1];
			}
			fRec120[2] = fRec120[1];
			fRec120[1] = fRec120[0];
			fVec397[1] = fVec397[0];
			fRec119[1] = fRec119[0];
			fRec118[1] = fRec118[0];
			fVec398[1] = fVec398[0];
			fRec117[1] = fRec117[0];
			fRec116[1] = fRec116[0];
			fVec399[1] = fVec399[0];
			fVec400[2] = fVec400[1];
			fVec400[1] = fVec400[0];
			for (int j42 = 6; j42 > 0; j42 = j42 - 1) {
				fVec401[j42] = fVec401[j42 - 1];
			}
			for (int j43 = 14; j43 > 0; j43 = j43 - 1) {
				fVec402[j43] = fVec402[j43 - 1];
			}
			fRec125[2] = fRec125[1];
			fRec125[1] = fRec125[0];
			fVec418[1] = fVec418[0];
			fRec124[1] = fRec124[0];
			fRec123[1] = fRec123[0];
			fVec419[1] = fVec419[0];
			fRec122[1] = fRec122[0];
			fRec121[1] = fRec121[0];
			fVec420[1] = fVec420[0];
			fVec421[2] = fVec421[1];
			fVec421[1] = fVec421[0];
			for (int j44 = 6; j44 > 0; j44 = j44 - 1) {
				fVec422[j44] = fVec422[j44 - 1];
			}
			for (int j45 = 14; j45 > 0; j45 = j45 - 1) {
				fVec423[j45] = fVec423[j45 - 1];
			}
			fRec130[2] = fRec130[1];
			fRec130[1] = fRec130[0];
			fVec439[1] = fVec439[0];
			fRec129[1] = fRec129[0];
			fRec128[1] = fRec128[0];
			fVec440[1] = fVec440[0];
			fRec127[1] = fRec127[0];
			fRec126[1] = fRec126[0];
			fVec441[1] = fVec441[0];
			fVec442[2] = fVec442[1];
			fVec442[1] = fVec442[0];
			for (int j46 = 6; j46 > 0; j46 = j46 - 1) {
				fVec443[j46] = fVec443[j46 - 1];
			}
			for (int j47 = 14; j47 > 0; j47 = j47 - 1) {
				fVec444[j47] = fVec444[j47 - 1];
			}
			fRec135[2] = fRec135[1];
			fRec135[1] = fRec135[0];
			fVec460[1] = fVec460[0];
			fRec134[1] = fRec134[0];
			fRec133[1] = fRec133[0];
			fVec461[1] = fVec461[0];
			fRec132[1] = fRec132[0];
			fRec131[1] = fRec131[0];
			fVec462[1] = fVec462[0];
			fVec463[2] = fVec463[1];
			fVec463[1] = fVec463[0];
			for (int j48 = 6; j48 > 0; j48 = j48 - 1) {
				fVec464[j48] = fVec464[j48 - 1];
			}
			for (int j49 = 14; j49 > 0; j49 = j49 - 1) {
				fVec465[j49] = fVec465[j49 - 1];
			}
			fRec5[2] = fRec5[1];
			fRec5[1] = fRec5[0];
			fRec6[2] = fRec6[1];
			fRec6[1] = fRec6[0];
			fRec136[1] = fRec136[0];
			fRec140[2] = fRec140[1];
			fRec140[1] = fRec140[0];
			fRec139[2] = fRec139[1];
			fRec139[1] = fRec139[0];
			fRec138[2] = fRec138[1];
			fRec138[1] = fRec138[0];
			fRec137[1] = fRec137[0];
			fRec144[2] = fRec144[1];
			fRec144[1] = fRec144[0];
			fRec143[2] = fRec143[1];
			fRec143[1] = fRec143[0];
			fRec142[2] = fRec142[1];
			fRec142[1] = fRec142[0];
			fRec141[1] = fRec141[0];
			fRec150[2] = fRec150[1];
			fRec150[1] = fRec150[0];
			fRec149[2] = fRec149[1];
			fRec149[1] = fRec149[0];
			fRec148[2] = fRec148[1];
			fRec148[1] = fRec148[0];
			fRec147[2] = fRec147[1];
			fRec147[1] = fRec147[0];
			fRec146[2] = fRec146[1];
			fRec146[1] = fRec146[0];
			fRec145[1] = fRec145[0];
			fRec156[2] = fRec156[1];
			fRec156[1] = fRec156[0];
			fRec155[2] = fRec155[1];
			fRec155[1] = fRec155[0];
			fRec154[2] = fRec154[1];
			fRec154[1] = fRec154[0];
			fRec153[2] = fRec153[1];
			fRec153[1] = fRec153[0];
			fRec152[2] = fRec152[1];
			fRec152[1] = fRec152[0];
			fRec151[1] = fRec151[0];
			fRec178[2] = fRec178[1];
			fRec178[1] = fRec178[0];
			fRec177[2] = fRec177[1];
			fRec177[1] = fRec177[0];
			fRec176[2] = fRec176[1];
			fRec176[1] = fRec176[0];
			fRec175[2] = fRec175[1];
			fRec175[1] = fRec175[0];
			fRec174[2] = fRec174[1];
			fRec174[1] = fRec174[0];
			fRec173[1] = fRec173[0];
			fRec184[2] = fRec184[1];
			fRec184[1] = fRec184[0];
			fRec183[2] = fRec183[1];
			fRec183[1] = fRec183[0];
			fRec182[2] = fRec182[1];
			fRec182[1] = fRec182[0];
			fRec181[2] = fRec181[1];
			fRec181[1] = fRec181[0];
			fRec180[2] = fRec180[1];
			fRec180[1] = fRec180[0];
			fRec179[1] = fRec179[0];
			fRec206[2] = fRec206[1];
			fRec206[1] = fRec206[0];
			fRec205[2] = fRec205[1];
			fRec205[1] = fRec205[0];
			fRec204[2] = fRec204[1];
			fRec204[1] = fRec204[0];
			fRec203[2] = fRec203[1];
			fRec203[1] = fRec203[0];
			fRec202[2] = fRec202[1];
			fRec202[1] = fRec202[0];
			fRec201[1] = fRec201[0];
			fRec212[2] = fRec212[1];
			fRec212[1] = fRec212[0];
			fRec211[2] = fRec211[1];
			fRec211[1] = fRec211[0];
			fRec210[2] = fRec210[1];
			fRec210[1] = fRec210[0];
			fRec209[2] = fRec209[1];
			fRec209[1] = fRec209[0];
			fRec208[2] = fRec208[1];
			fRec208[1] = fRec208[0];
			fRec207[1] = fRec207[0];
			fRec231[2] = fRec231[1];
			fRec231[1] = fRec231[0];
			fRec230[2] = fRec230[1];
			fRec230[1] = fRec230[0];
			fRec229[1] = fRec229[0];
			fRec234[2] = fRec234[1];
			fRec234[1] = fRec234[0];
			fRec233[2] = fRec233[1];
			fRec233[1] = fRec233[0];
			fRec232[1] = fRec232[0];
			fRec239[1] = fRec239[0];
			fRec240[1] = fRec240[0];
			fRec243[1] = fRec243[0];
			fRec244[1] = fRec244[0];
			fRec235[1] = fRec235[0];
			fRec236[1] = fRec236[0];
			fRec225[1] = fRec225[0];
			fRec226[1] = fRec226[0];
			fRec247[1] = fRec247[0];
			fRec248[1] = fRec248[0];
			fRec221[1] = fRec221[0];
			fRec222[1] = fRec222[0];
			fRec217[1] = fRec217[0];
			fRec218[1] = fRec218[0];
			fRec251[1] = fRec251[0];
			fRec252[1] = fRec252[0];
			fRec213[1] = fRec213[0];
			fRec214[1] = fRec214[0];
			fRec197[1] = fRec197[0];
			fRec198[1] = fRec198[0];
			fRec255[1] = fRec255[0];
			fRec256[1] = fRec256[0];
			fRec193[1] = fRec193[0];
			fRec194[1] = fRec194[0];
			fRec189[1] = fRec189[0];
			fRec190[1] = fRec190[0];
			fRec259[1] = fRec259[0];
			fRec260[1] = fRec260[0];
			fRec185[1] = fRec185[0];
			fRec186[1] = fRec186[0];
			fRec169[1] = fRec169[0];
			fRec170[1] = fRec170[0];
			fRec263[1] = fRec263[0];
			fRec264[1] = fRec264[0];
			fRec165[1] = fRec165[0];
			fRec166[1] = fRec166[0];
			fRec161[1] = fRec161[0];
			fRec162[1] = fRec162[0];
			fRec267[1] = fRec267[0];
			fRec268[1] = fRec268[0];
			fRec157[1] = fRec157[0];
			fRec158[1] = fRec158[0];
			fRec271[1] = fRec271[0];
			fRec272[1] = fRec272[0];
			fRec275[1] = fRec275[0];
			fRec276[1] = fRec276[0];
			fRec279[1] = fRec279[0];
			fRec280[1] = fRec280[0];
			fRec335[1] = fRec335[0];
			fRec336[1] = fRec336[0];
			fRec339[1] = fRec339[0];
			fRec340[1] = fRec340[0];
			fRec331[1] = fRec331[0];
			fRec332[1] = fRec332[0];
			fRec327[1] = fRec327[0];
			fRec328[1] = fRec328[0];
			fRec343[1] = fRec343[0];
			fRec344[1] = fRec344[0];
			fRec323[1] = fRec323[0];
			fRec324[1] = fRec324[0];
			fRec319[1] = fRec319[0];
			fRec320[1] = fRec320[0];
			fRec347[1] = fRec347[0];
			fRec348[1] = fRec348[0];
			fRec315[1] = fRec315[0];
			fRec316[1] = fRec316[0];
			fRec311[1] = fRec311[0];
			fRec312[1] = fRec312[0];
			fRec351[1] = fRec351[0];
			fRec352[1] = fRec352[0];
			fRec307[1] = fRec307[0];
			fRec308[1] = fRec308[0];
			fRec303[1] = fRec303[0];
			fRec304[1] = fRec304[0];
			fRec355[1] = fRec355[0];
			fRec356[1] = fRec356[0];
			fRec299[1] = fRec299[0];
			fRec300[1] = fRec300[0];
			fRec295[1] = fRec295[0];
			fRec296[1] = fRec296[0];
			fRec359[1] = fRec359[0];
			fRec360[1] = fRec360[0];
			fRec291[1] = fRec291[0];
			fRec292[1] = fRec292[0];
			fRec287[1] = fRec287[0];
			fRec288[1] = fRec288[0];
			fRec363[1] = fRec363[0];
			fRec364[1] = fRec364[0];
			fRec283[1] = fRec283[0];
			fRec284[1] = fRec284[0];
			fRec367[1] = fRec367[0];
			fRec368[1] = fRec368[0];
			fRec371[1] = fRec371[0];
			fRec372[1] = fRec372[0];
			fRec375[1] = fRec375[0];
			fRec376[1] = fRec376[0];
			iRec2[1] = iRec2[0];
			fRec3[1] = fRec3[0];
			fRec1[1] = fRec1[0];
			fRec0[1] = fRec0[0];
			fVec482[1] = fVec482[0];
			fVec483[1] = fVec483[0];
			fRec382[1] = fRec382[0];
			fRec381[1] = fRec381[0];
			fVec484[1] = fVec484[0];
			fRec380[1] = fRec380[0];
			fRec379[1] = fRec379[0];
			fVec485[1] = fVec485[0];
			fVec486[2] = fVec486[1];
			fVec486[1] = fVec486[0];
			for (int j50 = 6; j50 > 0; j50 = j50 - 1) {
				fVec487[j50] = fVec487[j50 - 1];
			}
			for (int j51 = 14; j51 > 0; j51 = j51 - 1) {
				fVec488[j51] = fVec488[j51 - 1];
			}
			fVec502[1] = fVec502[0];
			fVec503[1] = fVec503[0];
			fRec386[1] = fRec386[0];
			fRec385[1] = fRec385[0];
			fVec504[1] = fVec504[0];
			fRec384[1] = fRec384[0];
			fRec383[1] = fRec383[0];
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
        dsp->fVbargraph1 = 0;
        dsp->fVbargraph2 = 0;
        dsp->fVbargraph0 = 0;
        dsp->fVbargraph27 = 0;
        dsp->fVbargraph26 = 0;
        dsp->fVbargraph25 = 0;
        dsp->fVbargraph24 = 0;
        dsp->fVbargraph23 = 0;
        dsp->fVbargraph30 = 0;
        dsp->fVbargraph28 = 0;
        dsp->fVbargraph29 = 0;
        
    }

    /*
    void printCurrentValues()
    {
        d_stdout("==== preset data start ===");
        printf("%.12g,", dsp->fCheckbox2);
        printf("%.12g,", dsp->fCheckbox1);
        printf("%.12g,", dsp->fCheckbox3);
        printf("%.12g,", dsp->fCheckbox0);
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
        case kParameter__1:
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
        case kParameter_spectral_ballancer_timbre:
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
        case kParameter_input_gain:
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
        case kParameter_leveler_target:
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
        case kParameter__8:
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
        
        case kParameter_spectral_ballancer_gain_band__0:
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
        case kParameter_spectral_ballancer_gain_band__1:
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
        case kParameter_spectral_ballancer_gain_band__2:
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
        case kParameter_spectral_ballancer_gain_band__3:
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
        case kParameter_spectral_ballancer_gain_band__4:
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
        case kParameter_spectral_ballancer_gain_band__5:
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
        case kParameter_spectral_ballancer_gain_band__6:
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
        case kParameter_spectral_ballancer_gain_band__7:
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
        case kParameter_spectral_ballancer_gain_band__8:
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
        case kParameter_spectral_ballancer_gain_band__9:
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
        case kParameter_spectral_ballancer_gain_band_10:
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
        case kParameter_spectral_ballancer_gain_band_11:
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
        case kParameter_spectral_ballancer_gain_band_12:
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
        case kParameter_spectral_ballancer_gain_band_13:
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
        case kParameter_spectral_ballancer_gain_band_14:
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
        case kParameter_spectral_ballancer_gain_band_15:
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
        case kParameter_spectral_ballancer_gain_band_16:
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
        case kParameter_spectral_ballancer_gain_band_17:
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
        case kParameter_spectral_ballancer_gain_band_18:
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
        case kParameter_spectral_ballancer_gain_band_19:
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
        case kParameter_input_vu_channel_0:
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
        case kParameter_input_vu_channel_1:
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
        case kParameter_leveler_gain:
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
        case kParameter_multiband_compressor_gain_band_1:
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
        case kParameter_multiband_compressor_gain_band_2:
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
        case kParameter_multiband_compressor_gain_band_3:
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
        case kParameter_multiband_compressor_gain_band_4:
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
        case kParameter_multiband_compressor_gain_band_5:
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
        case kParameter_lufs_out_meter:
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
        case kParameter_output_vu_channel_0:
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
        case kParameter_output_vu_channel_1:
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
        
        }
    }

   /* -----------------------------------------------------------------------------------------------------------------
    * Internal data */

    float getParameterValue(const uint32_t index) const override
    {
        switch (index)
        {
        case kParameter__1:
            return dsp->fCheckbox2;
        case kParameter__2:
            return dsp->fCheckbox1;
        case kParameter__3:
            return dsp->fCheckbox3;
        case kParameter__4:
            return dsp->fCheckbox0;
        case kParameter_spectral_ballancer_timbre:
            return dsp->fVslider2;
        case kParameter_input_gain:
            return dsp->fVslider1;
        case kParameter_leveler_target:
            return dsp->fVslider0;
        case kParameter__8:
            return dsp->fVslider3;
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
        case kParameter_input_vu_channel_0:
            return dsp->fVbargraph1;
        case kParameter_input_vu_channel_1:
            return dsp->fVbargraph2;
        case kParameter_leveler_gain:
            return dsp->fVbargraph0;
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
        case kParameter_lufs_out_meter:
            return dsp->fVbargraph30;
        case kParameter_output_vu_channel_0:
            return dsp->fVbargraph28;
        case kParameter_output_vu_channel_1:
            return dsp->fVbargraph29;
        
        default:
            return 0.0f;
        }
    }

    void setParameterValue(const uint32_t index, const float value) override
    {
        switch (index)
        {
        case kParameter__1:
            dsp->fCheckbox2 = value;
            break;
        case kParameter__2:
            dsp->fCheckbox1 = value;
            break;
        case kParameter__3:
            dsp->fCheckbox3 = value;
            break;
        case kParameter__4:
            dsp->fCheckbox0 = value;
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
        case kParameter__8:
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
        float params[8] = {
            dsp->fCheckbox2,
            dsp->fCheckbox1,
            dsp->fCheckbox3,
            dsp->fCheckbox0,
            dsp->fVslider2,
            dsp->fVslider1,
            dsp->fVslider0,
            dsp->fVslider3,
            
        };

        // tell dsp to change sample rate
        dsp->init(newSampleRate);

        // set parameters back, which have been reset in the dsp
        dsp->fCheckbox2 = params[0];
        dsp->fCheckbox1 = params[1];
        dsp->fCheckbox3 = params[2];
        dsp->fCheckbox0 = params[3];
        dsp->fVslider2 = params[4];
        dsp->fVslider1 = params[5];
        dsp->fVslider0 = params[6];
        dsp->fVslider3 = params[7];
        
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