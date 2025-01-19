
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
	float fConst6;
	float fConst7;
	int iConst8;
	float fVec0[2];
	int iConst9;
	float fVec1[3];
	int iConst10;
	float fVec2[7];
	int iConst11;
	int iConst12;
	float fVec3[15];
	int iConst13;
	int iConst14;
	int IOTA0;
	float fVec4[32];
	int iConst15;
	FAUSTFLOAT fVslider0;
	float fConst16;
	float fRec17[2];
	float fConst17;
	float fConst18;
	float fConst20;
	int iConst21;
	float fConst26;
	float fConst30;
	float fConst31;
	float fConst33;
	float fVec5[2];
	float fConst34;
	float fConst35;
	float fConst36;
	float fRec21[2];
	float fRec20[2];
	float fConst37;
	float fConst38;
	float fVec6[2];
	float fConst39;
	float fRec19[2];
	float fRec18[2];
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
	float fVec18[2];
	float fRec25[2];
	float fRec24[2];
	float fVec19[2];
	float fRec23[2];
	float fRec22[2];
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
	float fRec12[2];
	float fRec13[2];
	float fRec10[2];
	FAUSTFLOAT fVbargraph1;
	float fRec9[2];
	float fRec26[2];
	FAUSTFLOAT fVslider1;
	float fRec27[2];
	float fConst61;
	float fConst64;
	float fConst66;
	float fConst67;
	float fConst68;
	float fRec29[3];
	float fConst69;
	float fConst70;
	float fConst71;
	float fRec28[3];
	float fConst73;
	int iConst74;
	float fConst75;
	float fConst77;
	float fRec35[2];
	FAUSTFLOAT fVbargraph2;
	float fRec37[3];
	float fRec36[3];
	float fVec31[2];
	float fConst78;
	float fConst79;
	float fRec34[3];
	float fConst80;
	float fVec32[32768];
	float fVec33[2];
	float fConst81;
	float fConst82;
	float fConst83;
	float fRec33[2];
	float fRec32[2];
	float fVec34[2];
	float fRec31[2];
	float fRec30[2];
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
	int iConst102;
	int iConst103;
	int iConst104;
	int iConst105;
	int iConst106;
	int iConst107;
	int iConst108;
	int iConst109;
	int iConst110;
	int iConst111;
	int iConst112;
	int iConst113;
	int iConst114;
	int iConst115;
	int iConst116;
	float fConst117;
	float fVec53[2];
	float fConst118;
	float fRec41[2];
	float fRec40[2];
	float fVec54[2];
	float fRec39[2];
	float fRec38[2];
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
	int iConst119;
	float fVec73[2];
	int iConst120;
	float fVec74[3];
	int iConst121;
	float fVec75[7];
	int iConst122;
	int iConst123;
	float fVec76[15];
	int iConst124;
	int iConst125;
	float fVec77[32];
	int iConst126;
	int iConst127;
	float fVec78[64];
	int iConst128;
	int iConst129;
	float fVec79[128];
	int iConst130;
	int iConst131;
	float fVec80[256];
	int iConst132;
	float fConst133;
	float fConst134;
	float fRec42[2];
	FAUSTFLOAT fVbargraph3;
	int iConst135;
	float fConst139;
	float fConst140;
	float fConst141;
	float fConst142;
	float fRec47[3];
	float fConst143;
	float fVec81[32768];
	float fVec82[2];
	float fRec46[2];
	float fRec45[2];
	float fVec83[2];
	float fRec44[2];
	float fRec43[2];
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
	float fConst147;
	float fConst148;
	float fConst149;
	float fConst150;
	float fRec52[3];
	float fConst151;
	float fVec102[32768];
	float fVec103[2];
	float fRec51[2];
	float fRec50[2];
	float fVec104[2];
	float fRec49[2];
	float fRec48[2];
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
	float fConst155;
	float fConst156;
	float fConst157;
	float fConst158;
	float fRec57[3];
	float fConst159;
	float fVec123[32768];
	float fVec124[2];
	float fRec56[2];
	float fRec55[2];
	float fVec125[2];
	float fRec54[2];
	float fRec53[2];
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
	float fConst163;
	float fConst164;
	float fConst165;
	float fConst166;
	float fRec62[3];
	float fConst167;
	float fVec144[32768];
	float fVec145[2];
	float fRec61[2];
	float fRec60[2];
	float fVec146[2];
	float fRec59[2];
	float fRec58[2];
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
	float fConst171;
	float fConst172;
	float fConst173;
	float fConst174;
	float fRec67[3];
	float fConst175;
	float fVec165[32768];
	float fVec166[2];
	float fRec66[2];
	float fRec65[2];
	float fVec167[2];
	float fRec64[2];
	float fRec63[2];
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
	float fConst179;
	float fConst180;
	float fConst181;
	float fConst182;
	float fRec72[3];
	float fConst183;
	float fVec186[32768];
	float fVec187[2];
	float fRec71[2];
	float fRec70[2];
	float fVec188[2];
	float fRec69[2];
	float fRec68[2];
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
	float fConst187;
	float fConst188;
	float fConst189;
	float fConst190;
	float fRec77[3];
	float fConst191;
	float fVec207[32768];
	float fVec208[2];
	float fRec76[2];
	float fRec75[2];
	float fVec209[2];
	float fRec74[2];
	float fRec73[2];
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
	float fConst195;
	float fConst196;
	float fConst197;
	float fConst198;
	float fRec82[3];
	float fConst199;
	float fVec228[32768];
	float fVec229[2];
	float fRec81[2];
	float fRec80[2];
	float fVec230[2];
	float fRec79[2];
	float fRec78[2];
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
	float fConst203;
	float fConst204;
	float fConst205;
	float fConst206;
	float fRec87[3];
	float fConst207;
	float fVec249[32768];
	float fVec250[2];
	float fRec86[2];
	float fRec85[2];
	float fVec251[2];
	float fRec84[2];
	float fRec83[2];
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
	float fConst211;
	float fConst212;
	float fConst213;
	float fConst214;
	float fRec92[3];
	float fConst215;
	float fVec270[32768];
	float fVec271[2];
	float fRec91[2];
	float fRec90[2];
	float fVec272[2];
	float fRec89[2];
	float fRec88[2];
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
	float fConst219;
	float fConst220;
	float fConst221;
	float fConst222;
	float fRec97[3];
	float fConst223;
	float fVec291[32768];
	float fVec292[2];
	float fRec96[2];
	float fRec95[2];
	float fVec293[2];
	float fRec94[2];
	float fRec93[2];
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
	float fConst227;
	float fConst228;
	float fConst229;
	float fConst230;
	float fRec102[3];
	float fConst231;
	float fVec312[32768];
	float fVec313[2];
	float fRec101[2];
	float fRec100[2];
	float fVec314[2];
	float fRec99[2];
	float fRec98[2];
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
	float fConst235;
	float fConst236;
	float fConst237;
	float fConst238;
	float fRec107[3];
	float fConst239;
	float fVec333[32768];
	float fVec334[2];
	float fRec106[2];
	float fRec105[2];
	float fVec335[2];
	float fRec104[2];
	float fRec103[2];
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
	float fConst243;
	float fConst244;
	float fConst245;
	float fConst246;
	float fRec112[3];
	float fConst247;
	float fVec354[32768];
	float fVec355[2];
	float fRec111[2];
	float fRec110[2];
	float fVec356[2];
	float fRec109[2];
	float fRec108[2];
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
	float fConst251;
	float fConst252;
	float fConst253;
	float fConst254;
	float fRec117[3];
	float fConst255;
	float fVec375[32768];
	float fVec376[2];
	float fRec116[2];
	float fRec115[2];
	float fVec377[2];
	float fRec114[2];
	float fRec113[2];
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
	float fConst259;
	float fConst260;
	float fConst261;
	float fConst262;
	float fRec122[3];
	float fConst263;
	float fVec396[32768];
	float fVec397[2];
	float fRec121[2];
	float fRec120[2];
	float fVec398[2];
	float fRec119[2];
	float fRec118[2];
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
	float fConst267;
	float fConst268;
	float fConst269;
	float fConst270;
	float fRec127[3];
	float fConst271;
	float fVec417[32768];
	float fVec418[2];
	float fRec126[2];
	float fRec125[2];
	float fVec419[2];
	float fRec124[2];
	float fRec123[2];
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
	float fConst275;
	float fConst276;
	float fConst277;
	float fConst278;
	float fRec132[3];
	float fConst279;
	float fVec438[32768];
	float fVec439[2];
	float fRec131[2];
	float fRec130[2];
	float fVec440[2];
	float fRec129[2];
	float fRec128[2];
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
	float fConst283;
	float fConst284;
	float fConst285;
	float fConst286;
	float fRec137[3];
	float fConst287;
	float fVec459[32768];
	float fVec460[2];
	float fRec136[2];
	float fRec135[2];
	float fVec461[2];
	float fRec134[2];
	float fRec133[2];
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
	float fRec7[3];
	float fRec8[3];
	FAUSTFLOAT fCheckbox1;
	float fRec138[2];
	FAUSTFLOAT fVslider3;
	float fConst288;
	float fConst290;
	float fConst292;
	float fConst293;
	float fConst294;
	float fConst295;
	float fConst296;
	float fRec142[3];
	float fConst297;
	float fConst298;
	float fRec141[3];
	float fConst299;
	float fRec140[3];
	float fVec480[2];
	float fConst300;
	float fRec139[2];
	float fRec146[3];
	float fRec145[3];
	float fRec144[3];
	float fVec481[2];
	float fRec143[2];
	int iConst301;
	int iConst302;
	float fVec482[3];
	int iConst303;
	float fVec483[7];
	int iConst304;
	int iConst305;
	float fVec484[15];
	int iConst306;
	int iConst307;
	float fVec485[32];
	int iConst308;
	int iConst309;
	float fVec486[64];
	int iConst310;
	int iConst311;
	float fVec487[128];
	int iConst312;
	int iConst313;
	float fVec488[256];
	int iConst314;
	int iConst315;
	float fVec489[512];
	int iConst316;
	int iConst317;
	float fVec490[1024];
	int iConst318;
	int iConst319;
	float fVec491[2048];
	int iConst320;
	int iConst321;
	float fVec492[4096];
	int iConst322;
	float fConst323;
	float fConst324;
	float fRec147[2];
	float fVec493[3];
	float fVec494[7];
	float fVec495[15];
	float fVec496[32];
	float fVec497[64];
	float fVec498[128];
	float fVec499[256];
	float fVec500[512];
	float fVec501[1024];
	float fVec502[2048];
	float fVec503[4096];
	float fRec148[2];
	FAUSTFLOAT fVbargraph23;
	float fConst325;
	float fConst327;
	float fConst329;
	float fConst330;
	float fConst331;
	float fRec154[3];
	float fRec153[3];
	float fConst332;
	float fConst333;
	float fRec152[3];
	float fConst334;
	float fConst335;
	float fRec151[3];
	float fConst336;
	float fRec150[3];
	float fVec504[2];
	float fRec149[2];
	float fRec160[3];
	float fRec159[3];
	float fRec158[3];
	float fRec157[3];
	float fRec156[3];
	float fVec505[2];
	float fRec155[2];
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
	float fConst337;
	float fRec161[2];
	float fVec517[3];
	float fVec518[7];
	float fVec519[15];
	float fVec520[32];
	float fVec521[64];
	float fVec522[128];
	float fVec523[256];
	float fVec524[512];
	float fVec525[1024];
	float fVec526[2048];
	float fVec527[4096];
	float fRec162[2];
	FAUSTFLOAT fVbargraph24;
	float fConst338;
	float fConst340;
	float fConst342;
	float fConst343;
	float fConst344;
	float fRec184[3];
	float fRec183[3];
	float fConst345;
	float fConst346;
	float fRec182[3];
	float fConst347;
	float fConst348;
	float fRec181[3];
	float fConst349;
	float fRec180[3];
	float fVec528[2];
	float fRec179[2];
	float fRec190[3];
	float fRec189[3];
	float fRec188[3];
	float fRec187[3];
	float fRec186[3];
	float fVec529[2];
	float fRec185[2];
	float fVec530[3];
	float fVec531[7];
	float fVec532[15];
	float fVec533[32];
	float fVec534[64];
	float fVec535[128];
	float fVec536[256];
	float fVec537[512];
	float fVec538[1024];
	float fVec539[2048];
	float fVec540[4096];
	float fConst350;
	float fConst351;
	float fRec191[2];
	float fVec541[3];
	float fVec542[7];
	float fVec543[15];
	float fVec544[32];
	float fVec545[64];
	float fVec546[128];
	float fVec547[256];
	float fVec548[512];
	float fVec549[1024];
	float fVec550[2048];
	float fVec551[4096];
	float fRec192[2];
	FAUSTFLOAT fVbargraph25;
	float fConst352;
	float fConst354;
	float fConst356;
	float fConst357;
	float fConst358;
	float fRec214[3];
	float fRec213[3];
	float fConst359;
	float fConst360;
	float fRec212[3];
	float fConst361;
	float fConst362;
	float fRec211[3];
	float fConst363;
	float fRec210[3];
	float fVec552[2];
	float fRec209[2];
	float fRec220[3];
	float fRec219[3];
	float fRec218[3];
	float fRec217[3];
	float fRec216[3];
	float fVec553[2];
	float fRec215[2];
	float fVec554[3];
	float fVec555[7];
	float fVec556[15];
	float fVec557[32];
	float fVec558[64];
	float fVec559[128];
	float fVec560[256];
	float fVec561[512];
	float fVec562[1024];
	float fVec563[2048];
	float fVec564[4096];
	float fConst364;
	float fRec221[2];
	float fVec565[3];
	float fVec566[7];
	float fVec567[15];
	float fVec568[32];
	float fVec569[64];
	float fVec570[128];
	float fVec571[256];
	float fVec572[512];
	float fVec573[1024];
	float fVec574[2048];
	float fVec575[4096];
	float fRec222[2];
	FAUSTFLOAT fVbargraph26;
	float fRec241[3];
	float fRec240[3];
	float fVec576[2];
	float fRec239[2];
	float fRec244[3];
	float fRec243[3];
	float fVec577[2];
	float fRec242[2];
	float fVec578[3];
	float fVec579[7];
	float fVec580[15];
	float fVec581[32];
	float fVec582[64];
	float fVec583[128];
	float fVec584[256];
	float fVec585[512];
	float fVec586[1024];
	float fVec587[2048];
	float fVec588[4096];
	float fRec245[2];
	float fVec589[3];
	float fVec590[7];
	float fVec591[15];
	float fVec592[32];
	float fVec593[64];
	float fVec594[128];
	float fVec595[256];
	float fVec596[512];
	float fVec597[1024];
	float fVec598[2048];
	float fVec599[4096];
	float fRec246[2];
	FAUSTFLOAT fVbargraph27;
	float fRec251[2];
	float fRec252[2];
	float fRec255[2];
	float fRec256[2];
	float fRec247[2];
	float fRec248[2];
	float fRec235[2];
	float fRec236[2];
	float fRec259[2];
	float fRec260[2];
	float fRec231[2];
	float fRec232[2];
	float fRec227[2];
	float fRec228[2];
	float fRec263[2];
	float fRec264[2];
	float fRec223[2];
	float fRec224[2];
	float fRec205[2];
	float fRec206[2];
	float fRec267[2];
	float fRec268[2];
	float fRec201[2];
	float fRec202[2];
	float fRec197[2];
	float fRec198[2];
	float fRec271[2];
	float fRec272[2];
	float fRec193[2];
	float fRec194[2];
	float fRec175[2];
	float fRec176[2];
	float fRec275[2];
	float fRec276[2];
	float fRec171[2];
	float fRec172[2];
	float fRec167[2];
	float fRec168[2];
	float fRec279[2];
	float fRec280[2];
	float fRec163[2];
	float fRec164[2];
	float fRec283[2];
	float fRec284[2];
	float fRec287[2];
	float fRec288[2];
	float fRec291[2];
	float fRec292[2];
	float fVec600[2048];
	float fRec347[2];
	float fRec348[2];
	float fRec351[2];
	float fRec352[2];
	float fRec343[2];
	float fRec344[2];
	float fRec339[2];
	float fRec340[2];
	float fRec355[2];
	float fRec356[2];
	float fRec335[2];
	float fRec336[2];
	float fRec331[2];
	float fRec332[2];
	float fRec359[2];
	float fRec360[2];
	float fRec327[2];
	float fRec328[2];
	float fRec323[2];
	float fRec324[2];
	float fRec363[2];
	float fRec364[2];
	float fRec319[2];
	float fRec320[2];
	float fRec315[2];
	float fRec316[2];
	float fRec367[2];
	float fRec368[2];
	float fRec311[2];
	float fRec312[2];
	float fRec307[2];
	float fRec308[2];
	float fRec371[2];
	float fRec372[2];
	float fRec303[2];
	float fRec304[2];
	float fRec299[2];
	float fRec300[2];
	float fRec375[2];
	float fRec376[2];
	float fRec295[2];
	float fRec296[2];
	float fRec379[2];
	float fRec380[2];
	float fRec383[2];
	float fRec384[2];
	float fRec387[2];
	float fRec388[2];
	float fVec601[2048];
	int iRec5[2];
	float fRec6[2];
	float fRec4[2];
	float fConst365;
	float fRec3[2];
	FAUSTFLOAT fVbargraph28;
	FAUSTFLOAT fVbargraph29;
	int iConst366;
	float fRec0[2];
	FAUSTFLOAT fVbargraph30;
	float fVec602[2];
	float fConst368;
	int iConst369;
	float fVec603[2];
	float fRec394[2];
	float fRec393[2];
	float fVec604[2];
	float fRec392[2];
	float fRec391[2];
	float fVec605[2];
	float fVec606[3];
	float fVec607[7];
	float fVec608[15];
	float fVec609[32];
	float fVec610[64];
	float fVec611[128];
	float fVec612[256];
	float fVec613[512];
	float fVec614[1024];
	float fVec615[2048];
	float fVec616[4096];
	float fVec617[8192];
	float fVec618[16384];
	float fVec619[32768];
	float fVec620[65536];
	float fVec621[131072];
	int iConst370;
	int iConst371;
	int iConst372;
	int iConst373;
	int iConst374;
	int iConst375;
	int iConst376;
	int iConst377;
	int iConst378;
	int iConst379;
	int iConst380;
	int iConst381;
	int iConst382;
	int iConst383;
	int iConst384;
	int iConst385;
	int iConst386;
	int iConst387;
	int iConst388;
	int iConst389;
	int iConst390;
	int iConst391;
	int iConst392;
	int iConst393;
	int iConst394;
	int iConst395;
	int iConst396;
	int iConst397;
	int iConst398;
	int iConst399;
	int iConst400;
	float fRec399[2];
	FAUSTFLOAT fVbargraph31;
	float fVec622[2];
	float fVec623[2];
	float fRec398[2];
	float fRec397[2];
	float fVec624[2];
	float fRec396[2];
	float fRec395[2];
	float fVec625[2];
	float fVec626[3];
	float fVec627[7];
	float fVec628[15];
	float fVec629[32];
	float fVec630[64];
	float fVec631[128];
	float fVec632[256];
	float fVec633[512];
	float fVec634[1024];
	float fVec635[2048];
	float fVec636[4096];
	float fVec637[8192];
	float fVec638[16384];
	float fVec639[32768];
	float fVec640[65536];
	float fVec641[131072];
	FAUSTFLOAT fVbargraph32;
	
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
		m->declare("compile_options", "-a /tmp/tmp14rljag7.cpp -lang cpp -es 1 -mcd 16 -single -ftz 0");
		m->declare("compressors.lib/name", "Faust Compressor Effect Library");
		m->declare("compressors.lib/peak_compression_gain_N_chan_db:author", "Bart Brouns");
		m->declare("compressors.lib/peak_compression_gain_N_chan_db:license", "GPLv3");
		m->declare("compressors.lib/peak_compression_gain_mono_db:author", "Bart Brouns");
		m->declare("compressors.lib/peak_compression_gain_mono_db:license", "GPLv3");
		m->declare("compressors.lib/peak_expansion_gain_N_chan_db:author", "Bart Brouns");
		m->declare("compressors.lib/peak_expansion_gain_N_chan_db:license", "GPLv3");
		m->declare("compressors.lib/version", "0.4");
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
		fConst17 = 1.1312305e-06f * fConst0;
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
		float fConst59 = std::tan(50265.484f / fConst0);
		float fConst60 = 1.0f / fConst59;
		fConst61 = 1.0f / ((fConst60 + 1.4142135f) / fConst59 + 1.0f);
		float fConst62 = std::tan(188.49556f / fConst0);
		float fConst63 = 1.0f / fConst62;
		fConst64 = 1.0f / ((fConst63 + 1.4142135f) / fConst62 + 1.0f);
		float fConst65 = mydsp_faustpower2_f(fConst62);
		fConst66 = 1.0f / fConst65;
		fConst67 = (fConst63 + -1.4142135f) / fConst62 + 1.0f;
		fConst68 = 2.0f * (1.0f - fConst66);
		fConst69 = 0.0f - 2.0f / fConst65;
		fConst70 = (fConst60 + -1.4142135f) / fConst59 + 1.0f;
		fConst71 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst59));
		float fConst72 = std::rint(0.8f * fConst0);
		fConst73 = 1.0f / std::max<float>(fConst72, 1.1920929e-07f);
		iConst74 = int(std::floor(7.6293945e-06f * fConst72)) % 2;
		fConst75 = 0.2236068f * fConst33;
		float fConst76 = (fConst63 + 0.33333334f) / fConst62 + 1.0f;
		fConst77 = 1.0f / (fConst62 * fConst76);
		fConst78 = 1.0f / fConst76;
		fConst79 = (fConst63 + -0.33333334f) / fConst62 + 1.0f;
		fConst80 = 0.0f - fConst77;
		fConst81 = 2.0f * fConst35;
		fConst82 = 0.4472136f * fConst36;
		fConst83 = 0.2236068f * fConst34;
		iConst84 = int(std::floor(fConst72)) % 2;
		iConst85 = int(std::floor(0.5f * fConst72)) % 2;
		iConst86 = iConst84 + 2 * iConst85;
		iConst87 = int(std::floor(0.25f * fConst72)) % 2;
		iConst88 = iConst86 + 4 * iConst87;
		iConst89 = int(std::floor(0.125f * fConst72)) % 2;
		iConst90 = iConst88 + 8 * iConst89;
		iConst91 = int(std::floor(0.0625f * fConst72)) % 2;
		iConst92 = iConst90 + 16 * iConst91;
		iConst93 = int(std::floor(0.03125f * fConst72)) % 2;
		iConst94 = iConst92 + 32 * iConst93;
		iConst95 = int(std::floor(0.015625f * fConst72)) % 2;
		iConst96 = iConst94 + 64 * iConst95;
		iConst97 = int(std::floor(0.0078125f * fConst72)) % 2;
		iConst98 = iConst96 + 128 * iConst97;
		iConst99 = int(std::floor(0.00390625f * fConst72)) % 2;
		iConst100 = iConst98 + 256 * iConst99;
		iConst101 = int(std::floor(0.001953125f * fConst72)) % 2;
		iConst102 = iConst100 + 512 * iConst101;
		iConst103 = int(std::floor(0.0009765625f * fConst72)) % 2;
		iConst104 = iConst102 + 1024 * iConst103;
		iConst105 = int(std::floor(0.00048828125f * fConst72)) % 2;
		iConst106 = iConst104 + 2048 * iConst105;
		iConst107 = int(std::floor(0.00024414062f * fConst72)) % 2;
		iConst108 = iConst106 + 4096 * iConst107;
		iConst109 = int(std::floor(0.00012207031f * fConst72)) % 2;
		iConst110 = iConst108 + 8192 * iConst109;
		iConst111 = int(std::floor(6.1035156e-05f * fConst72)) % 2;
		iConst112 = iConst110 + 16384 * iConst111;
		iConst113 = int(std::floor(3.0517578e-05f * fConst72)) % 2;
		iConst114 = iConst112 + 32768 * iConst113;
		iConst115 = int(std::floor(1.5258789e-05f * fConst72)) % 2;
		iConst116 = iConst114 + 65536 * iConst115;
		fConst117 = 0.5f * fConst33;
		fConst118 = 0.5f * fConst34;
		iConst119 = int(std::floor(0.001f * fConst0)) % 2;
		iConst120 = int(std::floor(0.0005f * fConst0)) % 2;
		iConst121 = int(std::floor(0.00025f * fConst0)) % 2;
		iConst122 = iConst119 + 2 * iConst120;
		iConst123 = int(std::floor(0.000125f * fConst0)) % 2;
		iConst124 = iConst122 + 4 * iConst121;
		iConst125 = int(std::floor(6.25e-05f * fConst0)) % 2;
		iConst126 = iConst124 + 8 * iConst123;
		iConst127 = int(std::floor(3.125e-05f * fConst0)) % 2;
		iConst128 = iConst126 + 16 * iConst125;
		iConst129 = int(std::floor(1.5625e-05f * fConst0)) % 2;
		iConst130 = iConst128 + 32 * iConst127;
		iConst131 = int(std::floor(7.8125e-06f * fConst0)) % 2;
		iConst132 = iConst130 + 64 * iConst129;
		fConst133 = std::exp(0.0f - 2.0f / fConst0);
		fConst134 = std::exp(0.0f - 1e+02f / fConst0);
		iConst135 = int(std::min<float>(4.8e+04f, std::max<float>(0.0f, 0.1f * fConst0)));
		float fConst136 = std::tan(249.11964f / fConst0);
		float fConst137 = 1.0f / fConst136;
		float fConst138 = (fConst137 + 0.33333334f) / fConst136 + 1.0f;
		fConst139 = 1.0f / (fConst136 * fConst138);
		fConst140 = 1.0f / fConst138;
		fConst141 = (fConst137 + -0.33333334f) / fConst136 + 1.0f;
		fConst142 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst136));
		fConst143 = 0.0f - fConst139;
		float fConst144 = std::tan(329.24167f / fConst0);
		float fConst145 = 1.0f / fConst144;
		float fConst146 = (fConst145 + 0.33333334f) / fConst144 + 1.0f;
		fConst147 = 1.0f / (fConst144 * fConst146);
		fConst148 = 1.0f / fConst146;
		fConst149 = (fConst145 + -0.33333334f) / fConst144 + 1.0f;
		fConst150 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst144));
		fConst151 = 0.0f - fConst147;
		float fConst152 = std::tan(435.13263f / fConst0);
		float fConst153 = 1.0f / fConst152;
		float fConst154 = (fConst153 + 0.33333334f) / fConst152 + 1.0f;
		fConst155 = 1.0f / (fConst152 * fConst154);
		fConst156 = 1.0f / fConst154;
		fConst157 = (fConst153 + -0.33333334f) / fConst152 + 1.0f;
		fConst158 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst152));
		fConst159 = 0.0f - fConst155;
		float fConst160 = std::tan(575.0803f / fConst0);
		float fConst161 = 1.0f / fConst160;
		float fConst162 = (fConst161 + 0.33333334f) / fConst160 + 1.0f;
		fConst163 = 1.0f / (fConst160 * fConst162);
		fConst164 = 1.0f / fConst162;
		fConst165 = (fConst161 + -0.33333334f) / fConst160 + 1.0f;
		fConst166 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst160));
		fConst167 = 0.0f - fConst163;
		float fConst168 = std::tan(760.038f / fConst0);
		float fConst169 = 1.0f / fConst168;
		float fConst170 = (fConst169 + 0.33333334f) / fConst168 + 1.0f;
		fConst171 = 1.0f / (fConst168 * fConst170);
		fConst172 = 1.0f / fConst170;
		fConst173 = (fConst169 + -0.33333334f) / fConst168 + 1.0f;
		fConst174 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst168));
		fConst175 = 0.0f - fConst171;
		float fConst176 = std::tan(1004.48206f / fConst0);
		float fConst177 = 1.0f / fConst176;
		float fConst178 = (fConst177 + 0.33333334f) / fConst176 + 1.0f;
		fConst179 = 1.0f / (fConst176 * fConst178);
		fConst180 = 1.0f / fConst178;
		fConst181 = (fConst177 + -0.33333334f) / fConst176 + 1.0f;
		fConst182 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst176));
		fConst183 = 0.0f - fConst179;
		float fConst184 = std::tan(1327.5443f / fConst0);
		float fConst185 = 1.0f / fConst184;
		float fConst186 = (fConst185 + 0.33333334f) / fConst184 + 1.0f;
		fConst187 = 1.0f / (fConst184 * fConst186);
		fConst188 = 1.0f / fConst186;
		fConst189 = (fConst185 + -0.33333334f) / fConst184 + 1.0f;
		fConst190 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst184));
		fConst191 = 0.0f - fConst187;
		float fConst192 = std::tan(1754.51f / fConst0);
		float fConst193 = 1.0f / fConst192;
		float fConst194 = (fConst193 + 0.33333334f) / fConst192 + 1.0f;
		fConst195 = 1.0f / (fConst192 * fConst194);
		fConst196 = 1.0f / fConst194;
		fConst197 = (fConst193 + -0.33333334f) / fConst192 + 1.0f;
		fConst198 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst192));
		fConst199 = 0.0f - fConst195;
		float fConst200 = std::tan(2318.7969f / fConst0);
		float fConst201 = 1.0f / fConst200;
		float fConst202 = (fConst201 + 0.33333334f) / fConst200 + 1.0f;
		fConst203 = 1.0f / (fConst200 * fConst202);
		fConst204 = 1.0f / fConst202;
		fConst205 = (fConst201 + -0.33333334f) / fConst200 + 1.0f;
		fConst206 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst200));
		fConst207 = 0.0f - fConst203;
		float fConst208 = std::tan(3064.57f / fConst0);
		float fConst209 = 1.0f / fConst208;
		float fConst210 = (fConst209 + 0.33333334f) / fConst208 + 1.0f;
		fConst211 = 1.0f / (fConst208 * fConst210);
		fConst212 = 1.0f / fConst210;
		fConst213 = (fConst209 + -0.33333334f) / fConst208 + 1.0f;
		fConst214 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst208));
		fConst215 = 0.0f - fConst211;
		float fConst216 = std::tan(4050.1992f / fConst0);
		float fConst217 = 1.0f / fConst216;
		float fConst218 = (fConst217 + 0.33333334f) / fConst216 + 1.0f;
		fConst219 = 1.0f / (fConst216 * fConst218);
		fConst220 = 1.0f / fConst218;
		fConst221 = (fConst217 + -0.33333334f) / fConst216 + 1.0f;
		fConst222 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst216));
		fConst223 = 0.0f - fConst219;
		float fConst224 = std::tan(5352.827f / fConst0);
		float fConst225 = 1.0f / fConst224;
		float fConst226 = (fConst225 + 0.33333334f) / fConst224 + 1.0f;
		fConst227 = 1.0f / (fConst224 * fConst226);
		fConst228 = 1.0f / fConst226;
		fConst229 = (fConst225 + -0.33333334f) / fConst224 + 1.0f;
		fConst230 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst224));
		fConst231 = 0.0f - fConst227;
		float fConst232 = std::tan(7074.407f / fConst0);
		float fConst233 = 1.0f / fConst232;
		float fConst234 = (fConst233 + 0.33333334f) / fConst232 + 1.0f;
		fConst235 = 1.0f / (fConst232 * fConst234);
		fConst236 = 1.0f / fConst234;
		fConst237 = (fConst233 + -0.33333334f) / fConst232 + 1.0f;
		fConst238 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst232));
		fConst239 = 0.0f - fConst235;
		float fConst240 = std::tan(9349.684f / fConst0);
		float fConst241 = 1.0f / fConst240;
		float fConst242 = (fConst241 + 0.33333334f) / fConst240 + 1.0f;
		fConst243 = 1.0f / (fConst240 * fConst242);
		fConst244 = 1.0f / fConst242;
		fConst245 = (fConst241 + -0.33333334f) / fConst240 + 1.0f;
		fConst246 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst240));
		fConst247 = 0.0f - fConst243;
		float fConst248 = std::tan(12356.735f / fConst0);
		float fConst249 = 1.0f / fConst248;
		float fConst250 = (fConst249 + 0.33333334f) / fConst248 + 1.0f;
		fConst251 = 1.0f / (fConst248 * fConst250);
		fConst252 = 1.0f / fConst250;
		fConst253 = (fConst249 + -0.33333334f) / fConst248 + 1.0f;
		fConst254 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst248));
		fConst255 = 0.0f - fConst251;
		float fConst256 = std::tan(16330.918f / fConst0);
		float fConst257 = 1.0f / fConst256;
		float fConst258 = (fConst257 + 0.33333334f) / fConst256 + 1.0f;
		fConst259 = 1.0f / (fConst256 * fConst258);
		fConst260 = 1.0f / fConst258;
		fConst261 = (fConst257 + -0.33333334f) / fConst256 + 1.0f;
		fConst262 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst256));
		fConst263 = 0.0f - fConst259;
		float fConst264 = std::tan(21583.28f / fConst0);
		float fConst265 = 1.0f / fConst264;
		float fConst266 = (fConst265 + 0.33333334f) / fConst264 + 1.0f;
		fConst267 = 1.0f / (fConst264 * fConst266);
		fConst268 = 1.0f / fConst266;
		fConst269 = (fConst265 + -0.33333334f) / fConst264 + 1.0f;
		fConst270 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst264));
		fConst271 = 0.0f - fConst267;
		float fConst272 = std::tan(28524.91f / fConst0);
		float fConst273 = 1.0f / fConst272;
		float fConst274 = (fConst273 + 0.33333334f) / fConst272 + 1.0f;
		fConst275 = 1.0f / (fConst272 * fConst274);
		fConst276 = 1.0f / fConst274;
		fConst277 = (fConst273 + -0.33333334f) / fConst272 + 1.0f;
		fConst278 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst272));
		fConst279 = 0.0f - fConst275;
		float fConst280 = std::tan(37699.113f / fConst0);
		float fConst281 = 1.0f / fConst280;
		float fConst282 = (fConst281 + 0.33333334f) / fConst280 + 1.0f;
		fConst283 = 1.0f / (fConst280 * fConst282);
		fConst284 = 1.0f / fConst282;
		fConst285 = (fConst281 + -0.33333334f) / fConst280 + 1.0f;
		fConst286 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst280));
		fConst287 = 0.0f - fConst283;
		fConst288 = std::tan(21991.148f / fConst0);
		float fConst289 = 1.0f / fConst288;
		fConst290 = 1.0f / ((fConst289 + 0.5176381f) / fConst288 + 1.0f);
		float fConst291 = mydsp_faustpower2_f(fConst288);
		fConst292 = 1.0f / fConst291;
		fConst293 = 1.0f / ((fConst289 + 1.4142135f) / fConst288 + 1.0f);
		fConst294 = 1.0f / ((fConst289 + 1.9318516f) / fConst288 + 1.0f);
		fConst295 = (fConst289 + -1.9318516f) / fConst288 + 1.0f;
		fConst296 = 2.0f * (1.0f - fConst292);
		fConst297 = 0.0f - 2.0f / fConst291;
		fConst298 = (fConst289 + -1.4142135f) / fConst288 + 1.0f;
		fConst299 = (fConst289 + -0.5176381f) / fConst288 + 1.0f;
		fConst300 = 1.0f / fConst0;
		iConst301 = int(std::floor(fConst18)) % 2;
		iConst302 = int(std::floor(0.005f * fConst0)) % 2;
		iConst303 = int(std::floor(0.0025f * fConst0)) % 2;
		iConst304 = iConst301 + 2 * iConst302;
		iConst305 = int(std::floor(0.00125f * fConst0)) % 2;
		iConst306 = iConst304 + 4 * iConst303;
		iConst307 = int(std::floor(0.000625f * fConst0)) % 2;
		iConst308 = iConst306 + 8 * iConst305;
		iConst309 = int(std::floor(0.0003125f * fConst0)) % 2;
		iConst310 = iConst308 + 16 * iConst307;
		iConst311 = int(std::floor(0.00015625f * fConst0)) % 2;
		iConst312 = iConst310 + 32 * iConst309;
		iConst313 = int(std::floor(7.8125e-05f * fConst0)) % 2;
		iConst314 = iConst312 + 64 * iConst311;
		iConst315 = int(std::floor(3.90625e-05f * fConst0)) % 2;
		iConst316 = iConst314 + 128 * iConst313;
		iConst317 = int(std::floor(1.953125e-05f * fConst0)) % 2;
		iConst318 = iConst316 + 256 * iConst315;
		iConst319 = int(std::floor(9.765625e-06f * fConst0)) % 2;
		iConst320 = iConst318 + 512 * iConst317;
		iConst321 = int(std::floor(4.8828124e-06f * fConst0)) % 2;
		iConst322 = iConst320 + 1024 * iConst319;
		fConst323 = std::exp(0.0f - 2e+01f / fConst0);
		fConst324 = std::exp(0.0f - 1e+03f / fConst0);
		fConst325 = std::tan(5335.9927f / fConst0);
		float fConst326 = 1.0f / fConst325;
		fConst327 = 1.0f / ((fConst326 + 0.5176381f) / fConst325 + 1.0f);
		float fConst328 = mydsp_faustpower2_f(fConst325);
		fConst329 = 1.0f / fConst328;
		fConst330 = 1.0f / ((fConst326 + 1.4142135f) / fConst325 + 1.0f);
		fConst331 = 1.0f / ((fConst326 + 1.9318516f) / fConst325 + 1.0f);
		fConst332 = (fConst326 + -1.9318516f) / fConst325 + 1.0f;
		fConst333 = 2.0f * (1.0f - fConst329);
		fConst334 = 0.0f - 2.0f / fConst328;
		fConst335 = (fConst326 + -1.4142135f) / fConst325 + 1.0f;
		fConst336 = (fConst326 + -0.5176381f) / fConst325 + 1.0f;
		fConst337 = std::exp(0.0f - 5e+02f / fConst0);
		fConst338 = std::tan(1294.74f / fConst0);
		float fConst339 = 1.0f / fConst338;
		fConst340 = 1.0f / ((fConst339 + 0.5176381f) / fConst338 + 1.0f);
		float fConst341 = mydsp_faustpower2_f(fConst338);
		fConst342 = 1.0f / fConst341;
		fConst343 = 1.0f / ((fConst339 + 1.4142135f) / fConst338 + 1.0f);
		fConst344 = 1.0f / ((fConst339 + 1.9318516f) / fConst338 + 1.0f);
		fConst345 = (fConst339 + -1.9318516f) / fConst338 + 1.0f;
		fConst346 = 2.0f * (1.0f - fConst342);
		fConst347 = 0.0f - 2.0f / fConst341;
		fConst348 = (fConst339 + -1.4142135f) / fConst338 + 1.0f;
		fConst349 = (fConst339 + -0.5176381f) / fConst338 + 1.0f;
		fConst350 = std::exp(0.0f - 5.0f / fConst0);
		fConst351 = std::exp(0.0f - 2e+02f / fConst0);
		fConst352 = std::tan(314.15927f / fConst0);
		float fConst353 = 1.0f / fConst352;
		fConst354 = 1.0f / ((fConst353 + 0.5176381f) / fConst352 + 1.0f);
		float fConst355 = mydsp_faustpower2_f(fConst352);
		fConst356 = 1.0f / fConst355;
		fConst357 = 1.0f / ((fConst353 + 1.4142135f) / fConst352 + 1.0f);
		fConst358 = 1.0f / ((fConst353 + 1.9318516f) / fConst352 + 1.0f);
		fConst359 = (fConst353 + -1.9318516f) / fConst352 + 1.0f;
		fConst360 = 2.0f * (1.0f - fConst356);
		fConst361 = 0.0f - 2.0f / fConst355;
		fConst362 = (fConst353 + -1.4142135f) / fConst352 + 1.0f;
		fConst363 = (fConst353 + -0.5176381f) / fConst352 + 1.0f;
		fConst364 = std::exp(0.0f - 2.5f / fConst0);
		fConst365 = 1.0f - fConst16;
		iConst366 = int((0.11f + -0.1f) * fConst0);
		float fConst367 = std::rint(0.4f * fConst0);
		fConst368 = 1.0f / std::max<float>(fConst367, 1.1920929e-07f);
		iConst369 = int(std::floor(1.5258789e-05f * fConst367)) % 2;
		iConst370 = int(std::floor(fConst367)) % 2;
		iConst371 = int(std::floor(0.5f * fConst367)) % 2;
		iConst372 = iConst370 + 2 * iConst371;
		iConst373 = int(std::floor(0.25f * fConst367)) % 2;
		iConst374 = iConst372 + 4 * iConst373;
		iConst375 = int(std::floor(0.125f * fConst367)) % 2;
		iConst376 = iConst374 + 8 * iConst375;
		iConst377 = int(std::floor(0.0625f * fConst367)) % 2;
		iConst378 = iConst376 + 16 * iConst377;
		iConst379 = int(std::floor(0.03125f * fConst367)) % 2;
		iConst380 = iConst378 + 32 * iConst379;
		iConst381 = int(std::floor(0.015625f * fConst367)) % 2;
		iConst382 = iConst380 + 64 * iConst381;
		iConst383 = int(std::floor(0.0078125f * fConst367)) % 2;
		iConst384 = iConst382 + 128 * iConst383;
		iConst385 = int(std::floor(0.00390625f * fConst367)) % 2;
		iConst386 = iConst384 + 256 * iConst385;
		iConst387 = int(std::floor(0.001953125f * fConst367)) % 2;
		iConst388 = iConst386 + 512 * iConst387;
		iConst389 = int(std::floor(0.0009765625f * fConst367)) % 2;
		iConst390 = iConst388 + 1024 * iConst389;
		iConst391 = int(std::floor(0.00048828125f * fConst367)) % 2;
		iConst392 = iConst390 + 2048 * iConst391;
		iConst393 = int(std::floor(0.00024414062f * fConst367)) % 2;
		iConst394 = iConst392 + 4096 * iConst393;
		iConst395 = int(std::floor(0.00012207031f * fConst367)) % 2;
		iConst396 = iConst394 + 8192 * iConst395;
		iConst397 = int(std::floor(6.1035156e-05f * fConst367)) % 2;
		iConst398 = iConst396 + 16384 * iConst397;
		iConst399 = int(std::floor(3.0517578e-05f * fConst367)) % 2;
		iConst400 = iConst398 + 32768 * iConst399;
	}
	
	FAUSTPP_VIRTUAL void instanceResetUserInterface() {
		fCheckbox0 = FAUSTFLOAT(0.0f);
		fVslider0 = FAUSTFLOAT(-18.0f);
		fVslider1 = FAUSTFLOAT(0.0f);
		fVslider2 = FAUSTFLOAT(0.5f);
		fCheckbox1 = FAUSTFLOAT(0.0f);
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
			fVec0[l2] = 0.0f;
		}
		for (int l3 = 0; l3 < 3; l3 = l3 + 1) {
			fVec1[l3] = 0.0f;
		}
		for (int l4 = 0; l4 < 7; l4 = l4 + 1) {
			fVec2[l4] = 0.0f;
		}
		for (int l5 = 0; l5 < 15; l5 = l5 + 1) {
			fVec3[l5] = 0.0f;
		}
		IOTA0 = 0;
		for (int l6 = 0; l6 < 32; l6 = l6 + 1) {
			fVec4[l6] = 0.0f;
		}
		for (int l7 = 0; l7 < 2; l7 = l7 + 1) {
			fRec17[l7] = 0.0f;
		}
		for (int l8 = 0; l8 < 2; l8 = l8 + 1) {
			fVec5[l8] = 0.0f;
		}
		for (int l9 = 0; l9 < 2; l9 = l9 + 1) {
			fRec21[l9] = 0.0f;
		}
		for (int l10 = 0; l10 < 2; l10 = l10 + 1) {
			fRec20[l10] = 0.0f;
		}
		for (int l11 = 0; l11 < 2; l11 = l11 + 1) {
			fVec6[l11] = 0.0f;
		}
		for (int l12 = 0; l12 < 2; l12 = l12 + 1) {
			fRec19[l12] = 0.0f;
		}
		for (int l13 = 0; l13 < 2; l13 = l13 + 1) {
			fRec18[l13] = 0.0f;
		}
		for (int l14 = 0; l14 < 2; l14 = l14 + 1) {
			fVec7[l14] = 0.0f;
		}
		for (int l15 = 0; l15 < 3; l15 = l15 + 1) {
			fVec8[l15] = 0.0f;
		}
		for (int l16 = 0; l16 < 7; l16 = l16 + 1) {
			fVec9[l16] = 0.0f;
		}
		for (int l17 = 0; l17 < 15; l17 = l17 + 1) {
			fVec10[l17] = 0.0f;
		}
		for (int l18 = 0; l18 < 32; l18 = l18 + 1) {
			fVec11[l18] = 0.0f;
		}
		for (int l19 = 0; l19 < 64; l19 = l19 + 1) {
			fVec12[l19] = 0.0f;
		}
		for (int l20 = 0; l20 < 128; l20 = l20 + 1) {
			fVec13[l20] = 0.0f;
		}
		for (int l21 = 0; l21 < 256; l21 = l21 + 1) {
			fVec14[l21] = 0.0f;
		}
		for (int l22 = 0; l22 < 512; l22 = l22 + 1) {
			fVec15[l22] = 0.0f;
		}
		for (int l23 = 0; l23 < 1024; l23 = l23 + 1) {
			fVec16[l23] = 0.0f;
		}
		for (int l24 = 0; l24 < 2048; l24 = l24 + 1) {
			fVec17[l24] = 0.0f;
		}
		for (int l25 = 0; l25 < 2; l25 = l25 + 1) {
			fVec18[l25] = 0.0f;
		}
		for (int l26 = 0; l26 < 2; l26 = l26 + 1) {
			fRec25[l26] = 0.0f;
		}
		for (int l27 = 0; l27 < 2; l27 = l27 + 1) {
			fRec24[l27] = 0.0f;
		}
		for (int l28 = 0; l28 < 2; l28 = l28 + 1) {
			fVec19[l28] = 0.0f;
		}
		for (int l29 = 0; l29 < 2; l29 = l29 + 1) {
			fRec23[l29] = 0.0f;
		}
		for (int l30 = 0; l30 < 2; l30 = l30 + 1) {
			fRec22[l30] = 0.0f;
		}
		for (int l31 = 0; l31 < 2; l31 = l31 + 1) {
			fVec20[l31] = 0.0f;
		}
		for (int l32 = 0; l32 < 3; l32 = l32 + 1) {
			fVec21[l32] = 0.0f;
		}
		for (int l33 = 0; l33 < 7; l33 = l33 + 1) {
			fVec22[l33] = 0.0f;
		}
		for (int l34 = 0; l34 < 15; l34 = l34 + 1) {
			fVec23[l34] = 0.0f;
		}
		for (int l35 = 0; l35 < 32; l35 = l35 + 1) {
			fVec24[l35] = 0.0f;
		}
		for (int l36 = 0; l36 < 64; l36 = l36 + 1) {
			fVec25[l36] = 0.0f;
		}
		for (int l37 = 0; l37 < 128; l37 = l37 + 1) {
			fVec26[l37] = 0.0f;
		}
		for (int l38 = 0; l38 < 256; l38 = l38 + 1) {
			fVec27[l38] = 0.0f;
		}
		for (int l39 = 0; l39 < 512; l39 = l39 + 1) {
			fVec28[l39] = 0.0f;
		}
		for (int l40 = 0; l40 < 1024; l40 = l40 + 1) {
			fVec29[l40] = 0.0f;
		}
		for (int l41 = 0; l41 < 2048; l41 = l41 + 1) {
			fVec30[l41] = 0.0f;
		}
		for (int l42 = 0; l42 < 2; l42 = l42 + 1) {
			fRec12[l42] = 0.0f;
		}
		for (int l43 = 0; l43 < 2; l43 = l43 + 1) {
			fRec13[l43] = 0.0f;
		}
		for (int l44 = 0; l44 < 2; l44 = l44 + 1) {
			fRec10[l44] = 0.0f;
		}
		for (int l45 = 0; l45 < 2; l45 = l45 + 1) {
			fRec9[l45] = 0.0f;
		}
		for (int l46 = 0; l46 < 2; l46 = l46 + 1) {
			fRec26[l46] = 0.0f;
		}
		for (int l47 = 0; l47 < 2; l47 = l47 + 1) {
			fRec27[l47] = 0.0f;
		}
		for (int l48 = 0; l48 < 3; l48 = l48 + 1) {
			fRec29[l48] = 0.0f;
		}
		for (int l49 = 0; l49 < 3; l49 = l49 + 1) {
			fRec28[l49] = 0.0f;
		}
		for (int l50 = 0; l50 < 2; l50 = l50 + 1) {
			fRec35[l50] = 0.0f;
		}
		for (int l51 = 0; l51 < 3; l51 = l51 + 1) {
			fRec37[l51] = 0.0f;
		}
		for (int l52 = 0; l52 < 3; l52 = l52 + 1) {
			fRec36[l52] = 0.0f;
		}
		for (int l53 = 0; l53 < 2; l53 = l53 + 1) {
			fVec31[l53] = 0.0f;
		}
		for (int l54 = 0; l54 < 3; l54 = l54 + 1) {
			fRec34[l54] = 0.0f;
		}
		for (int l55 = 0; l55 < 32768; l55 = l55 + 1) {
			fVec32[l55] = 0.0f;
		}
		for (int l56 = 0; l56 < 2; l56 = l56 + 1) {
			fVec33[l56] = 0.0f;
		}
		for (int l57 = 0; l57 < 2; l57 = l57 + 1) {
			fRec33[l57] = 0.0f;
		}
		for (int l58 = 0; l58 < 2; l58 = l58 + 1) {
			fRec32[l58] = 0.0f;
		}
		for (int l59 = 0; l59 < 2; l59 = l59 + 1) {
			fVec34[l59] = 0.0f;
		}
		for (int l60 = 0; l60 < 2; l60 = l60 + 1) {
			fRec31[l60] = 0.0f;
		}
		for (int l61 = 0; l61 < 2; l61 = l61 + 1) {
			fRec30[l61] = 0.0f;
		}
		for (int l62 = 0; l62 < 2; l62 = l62 + 1) {
			fVec35[l62] = 0.0f;
		}
		for (int l63 = 0; l63 < 3; l63 = l63 + 1) {
			fVec36[l63] = 0.0f;
		}
		for (int l64 = 0; l64 < 7; l64 = l64 + 1) {
			fVec37[l64] = 0.0f;
		}
		for (int l65 = 0; l65 < 15; l65 = l65 + 1) {
			fVec38[l65] = 0.0f;
		}
		for (int l66 = 0; l66 < 32; l66 = l66 + 1) {
			fVec39[l66] = 0.0f;
		}
		for (int l67 = 0; l67 < 64; l67 = l67 + 1) {
			fVec40[l67] = 0.0f;
		}
		for (int l68 = 0; l68 < 128; l68 = l68 + 1) {
			fVec41[l68] = 0.0f;
		}
		for (int l69 = 0; l69 < 256; l69 = l69 + 1) {
			fVec42[l69] = 0.0f;
		}
		for (int l70 = 0; l70 < 512; l70 = l70 + 1) {
			fVec43[l70] = 0.0f;
		}
		for (int l71 = 0; l71 < 1024; l71 = l71 + 1) {
			fVec44[l71] = 0.0f;
		}
		for (int l72 = 0; l72 < 2048; l72 = l72 + 1) {
			fVec45[l72] = 0.0f;
		}
		for (int l73 = 0; l73 < 4096; l73 = l73 + 1) {
			fVec46[l73] = 0.0f;
		}
		for (int l74 = 0; l74 < 8192; l74 = l74 + 1) {
			fVec47[l74] = 0.0f;
		}
		for (int l75 = 0; l75 < 16384; l75 = l75 + 1) {
			fVec48[l75] = 0.0f;
		}
		for (int l76 = 0; l76 < 32768; l76 = l76 + 1) {
			fVec49[l76] = 0.0f;
		}
		for (int l77 = 0; l77 < 65536; l77 = l77 + 1) {
			fVec50[l77] = 0.0f;
		}
		for (int l78 = 0; l78 < 131072; l78 = l78 + 1) {
			fVec51[l78] = 0.0f;
		}
		for (int l79 = 0; l79 < 262144; l79 = l79 + 1) {
			fVec52[l79] = 0.0f;
		}
		for (int l80 = 0; l80 < 2; l80 = l80 + 1) {
			fVec53[l80] = 0.0f;
		}
		for (int l81 = 0; l81 < 2; l81 = l81 + 1) {
			fRec41[l81] = 0.0f;
		}
		for (int l82 = 0; l82 < 2; l82 = l82 + 1) {
			fRec40[l82] = 0.0f;
		}
		for (int l83 = 0; l83 < 2; l83 = l83 + 1) {
			fVec54[l83] = 0.0f;
		}
		for (int l84 = 0; l84 < 2; l84 = l84 + 1) {
			fRec39[l84] = 0.0f;
		}
		for (int l85 = 0; l85 < 2; l85 = l85 + 1) {
			fRec38[l85] = 0.0f;
		}
		for (int l86 = 0; l86 < 2; l86 = l86 + 1) {
			fVec55[l86] = 0.0f;
		}
		for (int l87 = 0; l87 < 3; l87 = l87 + 1) {
			fVec56[l87] = 0.0f;
		}
		for (int l88 = 0; l88 < 7; l88 = l88 + 1) {
			fVec57[l88] = 0.0f;
		}
		for (int l89 = 0; l89 < 15; l89 = l89 + 1) {
			fVec58[l89] = 0.0f;
		}
		for (int l90 = 0; l90 < 32; l90 = l90 + 1) {
			fVec59[l90] = 0.0f;
		}
		for (int l91 = 0; l91 < 64; l91 = l91 + 1) {
			fVec60[l91] = 0.0f;
		}
		for (int l92 = 0; l92 < 128; l92 = l92 + 1) {
			fVec61[l92] = 0.0f;
		}
		for (int l93 = 0; l93 < 256; l93 = l93 + 1) {
			fVec62[l93] = 0.0f;
		}
		for (int l94 = 0; l94 < 512; l94 = l94 + 1) {
			fVec63[l94] = 0.0f;
		}
		for (int l95 = 0; l95 < 1024; l95 = l95 + 1) {
			fVec64[l95] = 0.0f;
		}
		for (int l96 = 0; l96 < 2048; l96 = l96 + 1) {
			fVec65[l96] = 0.0f;
		}
		for (int l97 = 0; l97 < 4096; l97 = l97 + 1) {
			fVec66[l97] = 0.0f;
		}
		for (int l98 = 0; l98 < 8192; l98 = l98 + 1) {
			fVec67[l98] = 0.0f;
		}
		for (int l99 = 0; l99 < 16384; l99 = l99 + 1) {
			fVec68[l99] = 0.0f;
		}
		for (int l100 = 0; l100 < 32768; l100 = l100 + 1) {
			fVec69[l100] = 0.0f;
		}
		for (int l101 = 0; l101 < 65536; l101 = l101 + 1) {
			fVec70[l101] = 0.0f;
		}
		for (int l102 = 0; l102 < 131072; l102 = l102 + 1) {
			fVec71[l102] = 0.0f;
		}
		for (int l103 = 0; l103 < 262144; l103 = l103 + 1) {
			fVec72[l103] = 0.0f;
		}
		for (int l104 = 0; l104 < 2; l104 = l104 + 1) {
			fVec73[l104] = 0.0f;
		}
		for (int l105 = 0; l105 < 3; l105 = l105 + 1) {
			fVec74[l105] = 0.0f;
		}
		for (int l106 = 0; l106 < 7; l106 = l106 + 1) {
			fVec75[l106] = 0.0f;
		}
		for (int l107 = 0; l107 < 15; l107 = l107 + 1) {
			fVec76[l107] = 0.0f;
		}
		for (int l108 = 0; l108 < 32; l108 = l108 + 1) {
			fVec77[l108] = 0.0f;
		}
		for (int l109 = 0; l109 < 64; l109 = l109 + 1) {
			fVec78[l109] = 0.0f;
		}
		for (int l110 = 0; l110 < 128; l110 = l110 + 1) {
			fVec79[l110] = 0.0f;
		}
		for (int l111 = 0; l111 < 256; l111 = l111 + 1) {
			fVec80[l111] = 0.0f;
		}
		for (int l112 = 0; l112 < 2; l112 = l112 + 1) {
			fRec42[l112] = 0.0f;
		}
		for (int l113 = 0; l113 < 3; l113 = l113 + 1) {
			fRec47[l113] = 0.0f;
		}
		for (int l114 = 0; l114 < 32768; l114 = l114 + 1) {
			fVec81[l114] = 0.0f;
		}
		for (int l115 = 0; l115 < 2; l115 = l115 + 1) {
			fVec82[l115] = 0.0f;
		}
		for (int l116 = 0; l116 < 2; l116 = l116 + 1) {
			fRec46[l116] = 0.0f;
		}
		for (int l117 = 0; l117 < 2; l117 = l117 + 1) {
			fRec45[l117] = 0.0f;
		}
		for (int l118 = 0; l118 < 2; l118 = l118 + 1) {
			fVec83[l118] = 0.0f;
		}
		for (int l119 = 0; l119 < 2; l119 = l119 + 1) {
			fRec44[l119] = 0.0f;
		}
		for (int l120 = 0; l120 < 2; l120 = l120 + 1) {
			fRec43[l120] = 0.0f;
		}
		for (int l121 = 0; l121 < 2; l121 = l121 + 1) {
			fVec84[l121] = 0.0f;
		}
		for (int l122 = 0; l122 < 3; l122 = l122 + 1) {
			fVec85[l122] = 0.0f;
		}
		for (int l123 = 0; l123 < 7; l123 = l123 + 1) {
			fVec86[l123] = 0.0f;
		}
		for (int l124 = 0; l124 < 15; l124 = l124 + 1) {
			fVec87[l124] = 0.0f;
		}
		for (int l125 = 0; l125 < 32; l125 = l125 + 1) {
			fVec88[l125] = 0.0f;
		}
		for (int l126 = 0; l126 < 64; l126 = l126 + 1) {
			fVec89[l126] = 0.0f;
		}
		for (int l127 = 0; l127 < 128; l127 = l127 + 1) {
			fVec90[l127] = 0.0f;
		}
		for (int l128 = 0; l128 < 256; l128 = l128 + 1) {
			fVec91[l128] = 0.0f;
		}
		for (int l129 = 0; l129 < 512; l129 = l129 + 1) {
			fVec92[l129] = 0.0f;
		}
		for (int l130 = 0; l130 < 1024; l130 = l130 + 1) {
			fVec93[l130] = 0.0f;
		}
		for (int l131 = 0; l131 < 2048; l131 = l131 + 1) {
			fVec94[l131] = 0.0f;
		}
		for (int l132 = 0; l132 < 4096; l132 = l132 + 1) {
			fVec95[l132] = 0.0f;
		}
		for (int l133 = 0; l133 < 8192; l133 = l133 + 1) {
			fVec96[l133] = 0.0f;
		}
		for (int l134 = 0; l134 < 16384; l134 = l134 + 1) {
			fVec97[l134] = 0.0f;
		}
		for (int l135 = 0; l135 < 32768; l135 = l135 + 1) {
			fVec98[l135] = 0.0f;
		}
		for (int l136 = 0; l136 < 65536; l136 = l136 + 1) {
			fVec99[l136] = 0.0f;
		}
		for (int l137 = 0; l137 < 131072; l137 = l137 + 1) {
			fVec100[l137] = 0.0f;
		}
		for (int l138 = 0; l138 < 262144; l138 = l138 + 1) {
			fVec101[l138] = 0.0f;
		}
		for (int l139 = 0; l139 < 3; l139 = l139 + 1) {
			fRec52[l139] = 0.0f;
		}
		for (int l140 = 0; l140 < 32768; l140 = l140 + 1) {
			fVec102[l140] = 0.0f;
		}
		for (int l141 = 0; l141 < 2; l141 = l141 + 1) {
			fVec103[l141] = 0.0f;
		}
		for (int l142 = 0; l142 < 2; l142 = l142 + 1) {
			fRec51[l142] = 0.0f;
		}
		for (int l143 = 0; l143 < 2; l143 = l143 + 1) {
			fRec50[l143] = 0.0f;
		}
		for (int l144 = 0; l144 < 2; l144 = l144 + 1) {
			fVec104[l144] = 0.0f;
		}
		for (int l145 = 0; l145 < 2; l145 = l145 + 1) {
			fRec49[l145] = 0.0f;
		}
		for (int l146 = 0; l146 < 2; l146 = l146 + 1) {
			fRec48[l146] = 0.0f;
		}
		for (int l147 = 0; l147 < 2; l147 = l147 + 1) {
			fVec105[l147] = 0.0f;
		}
		for (int l148 = 0; l148 < 3; l148 = l148 + 1) {
			fVec106[l148] = 0.0f;
		}
		for (int l149 = 0; l149 < 7; l149 = l149 + 1) {
			fVec107[l149] = 0.0f;
		}
		for (int l150 = 0; l150 < 15; l150 = l150 + 1) {
			fVec108[l150] = 0.0f;
		}
		for (int l151 = 0; l151 < 32; l151 = l151 + 1) {
			fVec109[l151] = 0.0f;
		}
		for (int l152 = 0; l152 < 64; l152 = l152 + 1) {
			fVec110[l152] = 0.0f;
		}
		for (int l153 = 0; l153 < 128; l153 = l153 + 1) {
			fVec111[l153] = 0.0f;
		}
		for (int l154 = 0; l154 < 256; l154 = l154 + 1) {
			fVec112[l154] = 0.0f;
		}
		for (int l155 = 0; l155 < 512; l155 = l155 + 1) {
			fVec113[l155] = 0.0f;
		}
		for (int l156 = 0; l156 < 1024; l156 = l156 + 1) {
			fVec114[l156] = 0.0f;
		}
		for (int l157 = 0; l157 < 2048; l157 = l157 + 1) {
			fVec115[l157] = 0.0f;
		}
		for (int l158 = 0; l158 < 4096; l158 = l158 + 1) {
			fVec116[l158] = 0.0f;
		}
		for (int l159 = 0; l159 < 8192; l159 = l159 + 1) {
			fVec117[l159] = 0.0f;
		}
		for (int l160 = 0; l160 < 16384; l160 = l160 + 1) {
			fVec118[l160] = 0.0f;
		}
		for (int l161 = 0; l161 < 32768; l161 = l161 + 1) {
			fVec119[l161] = 0.0f;
		}
		for (int l162 = 0; l162 < 65536; l162 = l162 + 1) {
			fVec120[l162] = 0.0f;
		}
		for (int l163 = 0; l163 < 131072; l163 = l163 + 1) {
			fVec121[l163] = 0.0f;
		}
		for (int l164 = 0; l164 < 262144; l164 = l164 + 1) {
			fVec122[l164] = 0.0f;
		}
		for (int l165 = 0; l165 < 3; l165 = l165 + 1) {
			fRec57[l165] = 0.0f;
		}
		for (int l166 = 0; l166 < 32768; l166 = l166 + 1) {
			fVec123[l166] = 0.0f;
		}
		for (int l167 = 0; l167 < 2; l167 = l167 + 1) {
			fVec124[l167] = 0.0f;
		}
		for (int l168 = 0; l168 < 2; l168 = l168 + 1) {
			fRec56[l168] = 0.0f;
		}
		for (int l169 = 0; l169 < 2; l169 = l169 + 1) {
			fRec55[l169] = 0.0f;
		}
		for (int l170 = 0; l170 < 2; l170 = l170 + 1) {
			fVec125[l170] = 0.0f;
		}
		for (int l171 = 0; l171 < 2; l171 = l171 + 1) {
			fRec54[l171] = 0.0f;
		}
		for (int l172 = 0; l172 < 2; l172 = l172 + 1) {
			fRec53[l172] = 0.0f;
		}
		for (int l173 = 0; l173 < 2; l173 = l173 + 1) {
			fVec126[l173] = 0.0f;
		}
		for (int l174 = 0; l174 < 3; l174 = l174 + 1) {
			fVec127[l174] = 0.0f;
		}
		for (int l175 = 0; l175 < 7; l175 = l175 + 1) {
			fVec128[l175] = 0.0f;
		}
		for (int l176 = 0; l176 < 15; l176 = l176 + 1) {
			fVec129[l176] = 0.0f;
		}
		for (int l177 = 0; l177 < 32; l177 = l177 + 1) {
			fVec130[l177] = 0.0f;
		}
		for (int l178 = 0; l178 < 64; l178 = l178 + 1) {
			fVec131[l178] = 0.0f;
		}
		for (int l179 = 0; l179 < 128; l179 = l179 + 1) {
			fVec132[l179] = 0.0f;
		}
		for (int l180 = 0; l180 < 256; l180 = l180 + 1) {
			fVec133[l180] = 0.0f;
		}
		for (int l181 = 0; l181 < 512; l181 = l181 + 1) {
			fVec134[l181] = 0.0f;
		}
		for (int l182 = 0; l182 < 1024; l182 = l182 + 1) {
			fVec135[l182] = 0.0f;
		}
		for (int l183 = 0; l183 < 2048; l183 = l183 + 1) {
			fVec136[l183] = 0.0f;
		}
		for (int l184 = 0; l184 < 4096; l184 = l184 + 1) {
			fVec137[l184] = 0.0f;
		}
		for (int l185 = 0; l185 < 8192; l185 = l185 + 1) {
			fVec138[l185] = 0.0f;
		}
		for (int l186 = 0; l186 < 16384; l186 = l186 + 1) {
			fVec139[l186] = 0.0f;
		}
		for (int l187 = 0; l187 < 32768; l187 = l187 + 1) {
			fVec140[l187] = 0.0f;
		}
		for (int l188 = 0; l188 < 65536; l188 = l188 + 1) {
			fVec141[l188] = 0.0f;
		}
		for (int l189 = 0; l189 < 131072; l189 = l189 + 1) {
			fVec142[l189] = 0.0f;
		}
		for (int l190 = 0; l190 < 262144; l190 = l190 + 1) {
			fVec143[l190] = 0.0f;
		}
		for (int l191 = 0; l191 < 3; l191 = l191 + 1) {
			fRec62[l191] = 0.0f;
		}
		for (int l192 = 0; l192 < 32768; l192 = l192 + 1) {
			fVec144[l192] = 0.0f;
		}
		for (int l193 = 0; l193 < 2; l193 = l193 + 1) {
			fVec145[l193] = 0.0f;
		}
		for (int l194 = 0; l194 < 2; l194 = l194 + 1) {
			fRec61[l194] = 0.0f;
		}
		for (int l195 = 0; l195 < 2; l195 = l195 + 1) {
			fRec60[l195] = 0.0f;
		}
		for (int l196 = 0; l196 < 2; l196 = l196 + 1) {
			fVec146[l196] = 0.0f;
		}
		for (int l197 = 0; l197 < 2; l197 = l197 + 1) {
			fRec59[l197] = 0.0f;
		}
		for (int l198 = 0; l198 < 2; l198 = l198 + 1) {
			fRec58[l198] = 0.0f;
		}
		for (int l199 = 0; l199 < 2; l199 = l199 + 1) {
			fVec147[l199] = 0.0f;
		}
		for (int l200 = 0; l200 < 3; l200 = l200 + 1) {
			fVec148[l200] = 0.0f;
		}
		for (int l201 = 0; l201 < 7; l201 = l201 + 1) {
			fVec149[l201] = 0.0f;
		}
		for (int l202 = 0; l202 < 15; l202 = l202 + 1) {
			fVec150[l202] = 0.0f;
		}
		for (int l203 = 0; l203 < 32; l203 = l203 + 1) {
			fVec151[l203] = 0.0f;
		}
		for (int l204 = 0; l204 < 64; l204 = l204 + 1) {
			fVec152[l204] = 0.0f;
		}
		for (int l205 = 0; l205 < 128; l205 = l205 + 1) {
			fVec153[l205] = 0.0f;
		}
		for (int l206 = 0; l206 < 256; l206 = l206 + 1) {
			fVec154[l206] = 0.0f;
		}
		for (int l207 = 0; l207 < 512; l207 = l207 + 1) {
			fVec155[l207] = 0.0f;
		}
		for (int l208 = 0; l208 < 1024; l208 = l208 + 1) {
			fVec156[l208] = 0.0f;
		}
		for (int l209 = 0; l209 < 2048; l209 = l209 + 1) {
			fVec157[l209] = 0.0f;
		}
		for (int l210 = 0; l210 < 4096; l210 = l210 + 1) {
			fVec158[l210] = 0.0f;
		}
		for (int l211 = 0; l211 < 8192; l211 = l211 + 1) {
			fVec159[l211] = 0.0f;
		}
		for (int l212 = 0; l212 < 16384; l212 = l212 + 1) {
			fVec160[l212] = 0.0f;
		}
		for (int l213 = 0; l213 < 32768; l213 = l213 + 1) {
			fVec161[l213] = 0.0f;
		}
		for (int l214 = 0; l214 < 65536; l214 = l214 + 1) {
			fVec162[l214] = 0.0f;
		}
		for (int l215 = 0; l215 < 131072; l215 = l215 + 1) {
			fVec163[l215] = 0.0f;
		}
		for (int l216 = 0; l216 < 262144; l216 = l216 + 1) {
			fVec164[l216] = 0.0f;
		}
		for (int l217 = 0; l217 < 3; l217 = l217 + 1) {
			fRec67[l217] = 0.0f;
		}
		for (int l218 = 0; l218 < 32768; l218 = l218 + 1) {
			fVec165[l218] = 0.0f;
		}
		for (int l219 = 0; l219 < 2; l219 = l219 + 1) {
			fVec166[l219] = 0.0f;
		}
		for (int l220 = 0; l220 < 2; l220 = l220 + 1) {
			fRec66[l220] = 0.0f;
		}
		for (int l221 = 0; l221 < 2; l221 = l221 + 1) {
			fRec65[l221] = 0.0f;
		}
		for (int l222 = 0; l222 < 2; l222 = l222 + 1) {
			fVec167[l222] = 0.0f;
		}
		for (int l223 = 0; l223 < 2; l223 = l223 + 1) {
			fRec64[l223] = 0.0f;
		}
		for (int l224 = 0; l224 < 2; l224 = l224 + 1) {
			fRec63[l224] = 0.0f;
		}
		for (int l225 = 0; l225 < 2; l225 = l225 + 1) {
			fVec168[l225] = 0.0f;
		}
		for (int l226 = 0; l226 < 3; l226 = l226 + 1) {
			fVec169[l226] = 0.0f;
		}
		for (int l227 = 0; l227 < 7; l227 = l227 + 1) {
			fVec170[l227] = 0.0f;
		}
		for (int l228 = 0; l228 < 15; l228 = l228 + 1) {
			fVec171[l228] = 0.0f;
		}
		for (int l229 = 0; l229 < 32; l229 = l229 + 1) {
			fVec172[l229] = 0.0f;
		}
		for (int l230 = 0; l230 < 64; l230 = l230 + 1) {
			fVec173[l230] = 0.0f;
		}
		for (int l231 = 0; l231 < 128; l231 = l231 + 1) {
			fVec174[l231] = 0.0f;
		}
		for (int l232 = 0; l232 < 256; l232 = l232 + 1) {
			fVec175[l232] = 0.0f;
		}
		for (int l233 = 0; l233 < 512; l233 = l233 + 1) {
			fVec176[l233] = 0.0f;
		}
		for (int l234 = 0; l234 < 1024; l234 = l234 + 1) {
			fVec177[l234] = 0.0f;
		}
		for (int l235 = 0; l235 < 2048; l235 = l235 + 1) {
			fVec178[l235] = 0.0f;
		}
		for (int l236 = 0; l236 < 4096; l236 = l236 + 1) {
			fVec179[l236] = 0.0f;
		}
		for (int l237 = 0; l237 < 8192; l237 = l237 + 1) {
			fVec180[l237] = 0.0f;
		}
		for (int l238 = 0; l238 < 16384; l238 = l238 + 1) {
			fVec181[l238] = 0.0f;
		}
		for (int l239 = 0; l239 < 32768; l239 = l239 + 1) {
			fVec182[l239] = 0.0f;
		}
		for (int l240 = 0; l240 < 65536; l240 = l240 + 1) {
			fVec183[l240] = 0.0f;
		}
		for (int l241 = 0; l241 < 131072; l241 = l241 + 1) {
			fVec184[l241] = 0.0f;
		}
		for (int l242 = 0; l242 < 262144; l242 = l242 + 1) {
			fVec185[l242] = 0.0f;
		}
		for (int l243 = 0; l243 < 3; l243 = l243 + 1) {
			fRec72[l243] = 0.0f;
		}
		for (int l244 = 0; l244 < 32768; l244 = l244 + 1) {
			fVec186[l244] = 0.0f;
		}
		for (int l245 = 0; l245 < 2; l245 = l245 + 1) {
			fVec187[l245] = 0.0f;
		}
		for (int l246 = 0; l246 < 2; l246 = l246 + 1) {
			fRec71[l246] = 0.0f;
		}
		for (int l247 = 0; l247 < 2; l247 = l247 + 1) {
			fRec70[l247] = 0.0f;
		}
		for (int l248 = 0; l248 < 2; l248 = l248 + 1) {
			fVec188[l248] = 0.0f;
		}
		for (int l249 = 0; l249 < 2; l249 = l249 + 1) {
			fRec69[l249] = 0.0f;
		}
		for (int l250 = 0; l250 < 2; l250 = l250 + 1) {
			fRec68[l250] = 0.0f;
		}
		for (int l251 = 0; l251 < 2; l251 = l251 + 1) {
			fVec189[l251] = 0.0f;
		}
		for (int l252 = 0; l252 < 3; l252 = l252 + 1) {
			fVec190[l252] = 0.0f;
		}
		for (int l253 = 0; l253 < 7; l253 = l253 + 1) {
			fVec191[l253] = 0.0f;
		}
		for (int l254 = 0; l254 < 15; l254 = l254 + 1) {
			fVec192[l254] = 0.0f;
		}
		for (int l255 = 0; l255 < 32; l255 = l255 + 1) {
			fVec193[l255] = 0.0f;
		}
		for (int l256 = 0; l256 < 64; l256 = l256 + 1) {
			fVec194[l256] = 0.0f;
		}
		for (int l257 = 0; l257 < 128; l257 = l257 + 1) {
			fVec195[l257] = 0.0f;
		}
		for (int l258 = 0; l258 < 256; l258 = l258 + 1) {
			fVec196[l258] = 0.0f;
		}
		for (int l259 = 0; l259 < 512; l259 = l259 + 1) {
			fVec197[l259] = 0.0f;
		}
		for (int l260 = 0; l260 < 1024; l260 = l260 + 1) {
			fVec198[l260] = 0.0f;
		}
		for (int l261 = 0; l261 < 2048; l261 = l261 + 1) {
			fVec199[l261] = 0.0f;
		}
		for (int l262 = 0; l262 < 4096; l262 = l262 + 1) {
			fVec200[l262] = 0.0f;
		}
		for (int l263 = 0; l263 < 8192; l263 = l263 + 1) {
			fVec201[l263] = 0.0f;
		}
		for (int l264 = 0; l264 < 16384; l264 = l264 + 1) {
			fVec202[l264] = 0.0f;
		}
		for (int l265 = 0; l265 < 32768; l265 = l265 + 1) {
			fVec203[l265] = 0.0f;
		}
		for (int l266 = 0; l266 < 65536; l266 = l266 + 1) {
			fVec204[l266] = 0.0f;
		}
		for (int l267 = 0; l267 < 131072; l267 = l267 + 1) {
			fVec205[l267] = 0.0f;
		}
		for (int l268 = 0; l268 < 262144; l268 = l268 + 1) {
			fVec206[l268] = 0.0f;
		}
		for (int l269 = 0; l269 < 3; l269 = l269 + 1) {
			fRec77[l269] = 0.0f;
		}
		for (int l270 = 0; l270 < 32768; l270 = l270 + 1) {
			fVec207[l270] = 0.0f;
		}
		for (int l271 = 0; l271 < 2; l271 = l271 + 1) {
			fVec208[l271] = 0.0f;
		}
		for (int l272 = 0; l272 < 2; l272 = l272 + 1) {
			fRec76[l272] = 0.0f;
		}
		for (int l273 = 0; l273 < 2; l273 = l273 + 1) {
			fRec75[l273] = 0.0f;
		}
		for (int l274 = 0; l274 < 2; l274 = l274 + 1) {
			fVec209[l274] = 0.0f;
		}
		for (int l275 = 0; l275 < 2; l275 = l275 + 1) {
			fRec74[l275] = 0.0f;
		}
		for (int l276 = 0; l276 < 2; l276 = l276 + 1) {
			fRec73[l276] = 0.0f;
		}
		for (int l277 = 0; l277 < 2; l277 = l277 + 1) {
			fVec210[l277] = 0.0f;
		}
		for (int l278 = 0; l278 < 3; l278 = l278 + 1) {
			fVec211[l278] = 0.0f;
		}
		for (int l279 = 0; l279 < 7; l279 = l279 + 1) {
			fVec212[l279] = 0.0f;
		}
		for (int l280 = 0; l280 < 15; l280 = l280 + 1) {
			fVec213[l280] = 0.0f;
		}
		for (int l281 = 0; l281 < 32; l281 = l281 + 1) {
			fVec214[l281] = 0.0f;
		}
		for (int l282 = 0; l282 < 64; l282 = l282 + 1) {
			fVec215[l282] = 0.0f;
		}
		for (int l283 = 0; l283 < 128; l283 = l283 + 1) {
			fVec216[l283] = 0.0f;
		}
		for (int l284 = 0; l284 < 256; l284 = l284 + 1) {
			fVec217[l284] = 0.0f;
		}
		for (int l285 = 0; l285 < 512; l285 = l285 + 1) {
			fVec218[l285] = 0.0f;
		}
		for (int l286 = 0; l286 < 1024; l286 = l286 + 1) {
			fVec219[l286] = 0.0f;
		}
		for (int l287 = 0; l287 < 2048; l287 = l287 + 1) {
			fVec220[l287] = 0.0f;
		}
		for (int l288 = 0; l288 < 4096; l288 = l288 + 1) {
			fVec221[l288] = 0.0f;
		}
		for (int l289 = 0; l289 < 8192; l289 = l289 + 1) {
			fVec222[l289] = 0.0f;
		}
		for (int l290 = 0; l290 < 16384; l290 = l290 + 1) {
			fVec223[l290] = 0.0f;
		}
		for (int l291 = 0; l291 < 32768; l291 = l291 + 1) {
			fVec224[l291] = 0.0f;
		}
		for (int l292 = 0; l292 < 65536; l292 = l292 + 1) {
			fVec225[l292] = 0.0f;
		}
		for (int l293 = 0; l293 < 131072; l293 = l293 + 1) {
			fVec226[l293] = 0.0f;
		}
		for (int l294 = 0; l294 < 262144; l294 = l294 + 1) {
			fVec227[l294] = 0.0f;
		}
		for (int l295 = 0; l295 < 3; l295 = l295 + 1) {
			fRec82[l295] = 0.0f;
		}
		for (int l296 = 0; l296 < 32768; l296 = l296 + 1) {
			fVec228[l296] = 0.0f;
		}
		for (int l297 = 0; l297 < 2; l297 = l297 + 1) {
			fVec229[l297] = 0.0f;
		}
		for (int l298 = 0; l298 < 2; l298 = l298 + 1) {
			fRec81[l298] = 0.0f;
		}
		for (int l299 = 0; l299 < 2; l299 = l299 + 1) {
			fRec80[l299] = 0.0f;
		}
		for (int l300 = 0; l300 < 2; l300 = l300 + 1) {
			fVec230[l300] = 0.0f;
		}
		for (int l301 = 0; l301 < 2; l301 = l301 + 1) {
			fRec79[l301] = 0.0f;
		}
		for (int l302 = 0; l302 < 2; l302 = l302 + 1) {
			fRec78[l302] = 0.0f;
		}
		for (int l303 = 0; l303 < 2; l303 = l303 + 1) {
			fVec231[l303] = 0.0f;
		}
		for (int l304 = 0; l304 < 3; l304 = l304 + 1) {
			fVec232[l304] = 0.0f;
		}
		for (int l305 = 0; l305 < 7; l305 = l305 + 1) {
			fVec233[l305] = 0.0f;
		}
		for (int l306 = 0; l306 < 15; l306 = l306 + 1) {
			fVec234[l306] = 0.0f;
		}
		for (int l307 = 0; l307 < 32; l307 = l307 + 1) {
			fVec235[l307] = 0.0f;
		}
		for (int l308 = 0; l308 < 64; l308 = l308 + 1) {
			fVec236[l308] = 0.0f;
		}
		for (int l309 = 0; l309 < 128; l309 = l309 + 1) {
			fVec237[l309] = 0.0f;
		}
		for (int l310 = 0; l310 < 256; l310 = l310 + 1) {
			fVec238[l310] = 0.0f;
		}
		for (int l311 = 0; l311 < 512; l311 = l311 + 1) {
			fVec239[l311] = 0.0f;
		}
		for (int l312 = 0; l312 < 1024; l312 = l312 + 1) {
			fVec240[l312] = 0.0f;
		}
		for (int l313 = 0; l313 < 2048; l313 = l313 + 1) {
			fVec241[l313] = 0.0f;
		}
		for (int l314 = 0; l314 < 4096; l314 = l314 + 1) {
			fVec242[l314] = 0.0f;
		}
		for (int l315 = 0; l315 < 8192; l315 = l315 + 1) {
			fVec243[l315] = 0.0f;
		}
		for (int l316 = 0; l316 < 16384; l316 = l316 + 1) {
			fVec244[l316] = 0.0f;
		}
		for (int l317 = 0; l317 < 32768; l317 = l317 + 1) {
			fVec245[l317] = 0.0f;
		}
		for (int l318 = 0; l318 < 65536; l318 = l318 + 1) {
			fVec246[l318] = 0.0f;
		}
		for (int l319 = 0; l319 < 131072; l319 = l319 + 1) {
			fVec247[l319] = 0.0f;
		}
		for (int l320 = 0; l320 < 262144; l320 = l320 + 1) {
			fVec248[l320] = 0.0f;
		}
		for (int l321 = 0; l321 < 3; l321 = l321 + 1) {
			fRec87[l321] = 0.0f;
		}
		for (int l322 = 0; l322 < 32768; l322 = l322 + 1) {
			fVec249[l322] = 0.0f;
		}
		for (int l323 = 0; l323 < 2; l323 = l323 + 1) {
			fVec250[l323] = 0.0f;
		}
		for (int l324 = 0; l324 < 2; l324 = l324 + 1) {
			fRec86[l324] = 0.0f;
		}
		for (int l325 = 0; l325 < 2; l325 = l325 + 1) {
			fRec85[l325] = 0.0f;
		}
		for (int l326 = 0; l326 < 2; l326 = l326 + 1) {
			fVec251[l326] = 0.0f;
		}
		for (int l327 = 0; l327 < 2; l327 = l327 + 1) {
			fRec84[l327] = 0.0f;
		}
		for (int l328 = 0; l328 < 2; l328 = l328 + 1) {
			fRec83[l328] = 0.0f;
		}
		for (int l329 = 0; l329 < 2; l329 = l329 + 1) {
			fVec252[l329] = 0.0f;
		}
		for (int l330 = 0; l330 < 3; l330 = l330 + 1) {
			fVec253[l330] = 0.0f;
		}
		for (int l331 = 0; l331 < 7; l331 = l331 + 1) {
			fVec254[l331] = 0.0f;
		}
		for (int l332 = 0; l332 < 15; l332 = l332 + 1) {
			fVec255[l332] = 0.0f;
		}
		for (int l333 = 0; l333 < 32; l333 = l333 + 1) {
			fVec256[l333] = 0.0f;
		}
		for (int l334 = 0; l334 < 64; l334 = l334 + 1) {
			fVec257[l334] = 0.0f;
		}
		for (int l335 = 0; l335 < 128; l335 = l335 + 1) {
			fVec258[l335] = 0.0f;
		}
		for (int l336 = 0; l336 < 256; l336 = l336 + 1) {
			fVec259[l336] = 0.0f;
		}
		for (int l337 = 0; l337 < 512; l337 = l337 + 1) {
			fVec260[l337] = 0.0f;
		}
		for (int l338 = 0; l338 < 1024; l338 = l338 + 1) {
			fVec261[l338] = 0.0f;
		}
		for (int l339 = 0; l339 < 2048; l339 = l339 + 1) {
			fVec262[l339] = 0.0f;
		}
		for (int l340 = 0; l340 < 4096; l340 = l340 + 1) {
			fVec263[l340] = 0.0f;
		}
		for (int l341 = 0; l341 < 8192; l341 = l341 + 1) {
			fVec264[l341] = 0.0f;
		}
		for (int l342 = 0; l342 < 16384; l342 = l342 + 1) {
			fVec265[l342] = 0.0f;
		}
		for (int l343 = 0; l343 < 32768; l343 = l343 + 1) {
			fVec266[l343] = 0.0f;
		}
		for (int l344 = 0; l344 < 65536; l344 = l344 + 1) {
			fVec267[l344] = 0.0f;
		}
		for (int l345 = 0; l345 < 131072; l345 = l345 + 1) {
			fVec268[l345] = 0.0f;
		}
		for (int l346 = 0; l346 < 262144; l346 = l346 + 1) {
			fVec269[l346] = 0.0f;
		}
		for (int l347 = 0; l347 < 3; l347 = l347 + 1) {
			fRec92[l347] = 0.0f;
		}
		for (int l348 = 0; l348 < 32768; l348 = l348 + 1) {
			fVec270[l348] = 0.0f;
		}
		for (int l349 = 0; l349 < 2; l349 = l349 + 1) {
			fVec271[l349] = 0.0f;
		}
		for (int l350 = 0; l350 < 2; l350 = l350 + 1) {
			fRec91[l350] = 0.0f;
		}
		for (int l351 = 0; l351 < 2; l351 = l351 + 1) {
			fRec90[l351] = 0.0f;
		}
		for (int l352 = 0; l352 < 2; l352 = l352 + 1) {
			fVec272[l352] = 0.0f;
		}
		for (int l353 = 0; l353 < 2; l353 = l353 + 1) {
			fRec89[l353] = 0.0f;
		}
		for (int l354 = 0; l354 < 2; l354 = l354 + 1) {
			fRec88[l354] = 0.0f;
		}
		for (int l355 = 0; l355 < 2; l355 = l355 + 1) {
			fVec273[l355] = 0.0f;
		}
		for (int l356 = 0; l356 < 3; l356 = l356 + 1) {
			fVec274[l356] = 0.0f;
		}
		for (int l357 = 0; l357 < 7; l357 = l357 + 1) {
			fVec275[l357] = 0.0f;
		}
		for (int l358 = 0; l358 < 15; l358 = l358 + 1) {
			fVec276[l358] = 0.0f;
		}
		for (int l359 = 0; l359 < 32; l359 = l359 + 1) {
			fVec277[l359] = 0.0f;
		}
		for (int l360 = 0; l360 < 64; l360 = l360 + 1) {
			fVec278[l360] = 0.0f;
		}
		for (int l361 = 0; l361 < 128; l361 = l361 + 1) {
			fVec279[l361] = 0.0f;
		}
		for (int l362 = 0; l362 < 256; l362 = l362 + 1) {
			fVec280[l362] = 0.0f;
		}
		for (int l363 = 0; l363 < 512; l363 = l363 + 1) {
			fVec281[l363] = 0.0f;
		}
		for (int l364 = 0; l364 < 1024; l364 = l364 + 1) {
			fVec282[l364] = 0.0f;
		}
		for (int l365 = 0; l365 < 2048; l365 = l365 + 1) {
			fVec283[l365] = 0.0f;
		}
		for (int l366 = 0; l366 < 4096; l366 = l366 + 1) {
			fVec284[l366] = 0.0f;
		}
		for (int l367 = 0; l367 < 8192; l367 = l367 + 1) {
			fVec285[l367] = 0.0f;
		}
		for (int l368 = 0; l368 < 16384; l368 = l368 + 1) {
			fVec286[l368] = 0.0f;
		}
		for (int l369 = 0; l369 < 32768; l369 = l369 + 1) {
			fVec287[l369] = 0.0f;
		}
		for (int l370 = 0; l370 < 65536; l370 = l370 + 1) {
			fVec288[l370] = 0.0f;
		}
		for (int l371 = 0; l371 < 131072; l371 = l371 + 1) {
			fVec289[l371] = 0.0f;
		}
		for (int l372 = 0; l372 < 262144; l372 = l372 + 1) {
			fVec290[l372] = 0.0f;
		}
		for (int l373 = 0; l373 < 3; l373 = l373 + 1) {
			fRec97[l373] = 0.0f;
		}
		for (int l374 = 0; l374 < 32768; l374 = l374 + 1) {
			fVec291[l374] = 0.0f;
		}
		for (int l375 = 0; l375 < 2; l375 = l375 + 1) {
			fVec292[l375] = 0.0f;
		}
		for (int l376 = 0; l376 < 2; l376 = l376 + 1) {
			fRec96[l376] = 0.0f;
		}
		for (int l377 = 0; l377 < 2; l377 = l377 + 1) {
			fRec95[l377] = 0.0f;
		}
		for (int l378 = 0; l378 < 2; l378 = l378 + 1) {
			fVec293[l378] = 0.0f;
		}
		for (int l379 = 0; l379 < 2; l379 = l379 + 1) {
			fRec94[l379] = 0.0f;
		}
		for (int l380 = 0; l380 < 2; l380 = l380 + 1) {
			fRec93[l380] = 0.0f;
		}
		for (int l381 = 0; l381 < 2; l381 = l381 + 1) {
			fVec294[l381] = 0.0f;
		}
		for (int l382 = 0; l382 < 3; l382 = l382 + 1) {
			fVec295[l382] = 0.0f;
		}
		for (int l383 = 0; l383 < 7; l383 = l383 + 1) {
			fVec296[l383] = 0.0f;
		}
		for (int l384 = 0; l384 < 15; l384 = l384 + 1) {
			fVec297[l384] = 0.0f;
		}
		for (int l385 = 0; l385 < 32; l385 = l385 + 1) {
			fVec298[l385] = 0.0f;
		}
		for (int l386 = 0; l386 < 64; l386 = l386 + 1) {
			fVec299[l386] = 0.0f;
		}
		for (int l387 = 0; l387 < 128; l387 = l387 + 1) {
			fVec300[l387] = 0.0f;
		}
		for (int l388 = 0; l388 < 256; l388 = l388 + 1) {
			fVec301[l388] = 0.0f;
		}
		for (int l389 = 0; l389 < 512; l389 = l389 + 1) {
			fVec302[l389] = 0.0f;
		}
		for (int l390 = 0; l390 < 1024; l390 = l390 + 1) {
			fVec303[l390] = 0.0f;
		}
		for (int l391 = 0; l391 < 2048; l391 = l391 + 1) {
			fVec304[l391] = 0.0f;
		}
		for (int l392 = 0; l392 < 4096; l392 = l392 + 1) {
			fVec305[l392] = 0.0f;
		}
		for (int l393 = 0; l393 < 8192; l393 = l393 + 1) {
			fVec306[l393] = 0.0f;
		}
		for (int l394 = 0; l394 < 16384; l394 = l394 + 1) {
			fVec307[l394] = 0.0f;
		}
		for (int l395 = 0; l395 < 32768; l395 = l395 + 1) {
			fVec308[l395] = 0.0f;
		}
		for (int l396 = 0; l396 < 65536; l396 = l396 + 1) {
			fVec309[l396] = 0.0f;
		}
		for (int l397 = 0; l397 < 131072; l397 = l397 + 1) {
			fVec310[l397] = 0.0f;
		}
		for (int l398 = 0; l398 < 262144; l398 = l398 + 1) {
			fVec311[l398] = 0.0f;
		}
		for (int l399 = 0; l399 < 3; l399 = l399 + 1) {
			fRec102[l399] = 0.0f;
		}
		for (int l400 = 0; l400 < 32768; l400 = l400 + 1) {
			fVec312[l400] = 0.0f;
		}
		for (int l401 = 0; l401 < 2; l401 = l401 + 1) {
			fVec313[l401] = 0.0f;
		}
		for (int l402 = 0; l402 < 2; l402 = l402 + 1) {
			fRec101[l402] = 0.0f;
		}
		for (int l403 = 0; l403 < 2; l403 = l403 + 1) {
			fRec100[l403] = 0.0f;
		}
		for (int l404 = 0; l404 < 2; l404 = l404 + 1) {
			fVec314[l404] = 0.0f;
		}
		for (int l405 = 0; l405 < 2; l405 = l405 + 1) {
			fRec99[l405] = 0.0f;
		}
		for (int l406 = 0; l406 < 2; l406 = l406 + 1) {
			fRec98[l406] = 0.0f;
		}
		for (int l407 = 0; l407 < 2; l407 = l407 + 1) {
			fVec315[l407] = 0.0f;
		}
		for (int l408 = 0; l408 < 3; l408 = l408 + 1) {
			fVec316[l408] = 0.0f;
		}
		for (int l409 = 0; l409 < 7; l409 = l409 + 1) {
			fVec317[l409] = 0.0f;
		}
		for (int l410 = 0; l410 < 15; l410 = l410 + 1) {
			fVec318[l410] = 0.0f;
		}
		for (int l411 = 0; l411 < 32; l411 = l411 + 1) {
			fVec319[l411] = 0.0f;
		}
		for (int l412 = 0; l412 < 64; l412 = l412 + 1) {
			fVec320[l412] = 0.0f;
		}
		for (int l413 = 0; l413 < 128; l413 = l413 + 1) {
			fVec321[l413] = 0.0f;
		}
		for (int l414 = 0; l414 < 256; l414 = l414 + 1) {
			fVec322[l414] = 0.0f;
		}
		for (int l415 = 0; l415 < 512; l415 = l415 + 1) {
			fVec323[l415] = 0.0f;
		}
		for (int l416 = 0; l416 < 1024; l416 = l416 + 1) {
			fVec324[l416] = 0.0f;
		}
		for (int l417 = 0; l417 < 2048; l417 = l417 + 1) {
			fVec325[l417] = 0.0f;
		}
		for (int l418 = 0; l418 < 4096; l418 = l418 + 1) {
			fVec326[l418] = 0.0f;
		}
		for (int l419 = 0; l419 < 8192; l419 = l419 + 1) {
			fVec327[l419] = 0.0f;
		}
		for (int l420 = 0; l420 < 16384; l420 = l420 + 1) {
			fVec328[l420] = 0.0f;
		}
		for (int l421 = 0; l421 < 32768; l421 = l421 + 1) {
			fVec329[l421] = 0.0f;
		}
		for (int l422 = 0; l422 < 65536; l422 = l422 + 1) {
			fVec330[l422] = 0.0f;
		}
		for (int l423 = 0; l423 < 131072; l423 = l423 + 1) {
			fVec331[l423] = 0.0f;
		}
		for (int l424 = 0; l424 < 262144; l424 = l424 + 1) {
			fVec332[l424] = 0.0f;
		}
		for (int l425 = 0; l425 < 3; l425 = l425 + 1) {
			fRec107[l425] = 0.0f;
		}
		for (int l426 = 0; l426 < 32768; l426 = l426 + 1) {
			fVec333[l426] = 0.0f;
		}
		for (int l427 = 0; l427 < 2; l427 = l427 + 1) {
			fVec334[l427] = 0.0f;
		}
		for (int l428 = 0; l428 < 2; l428 = l428 + 1) {
			fRec106[l428] = 0.0f;
		}
		for (int l429 = 0; l429 < 2; l429 = l429 + 1) {
			fRec105[l429] = 0.0f;
		}
		for (int l430 = 0; l430 < 2; l430 = l430 + 1) {
			fVec335[l430] = 0.0f;
		}
		for (int l431 = 0; l431 < 2; l431 = l431 + 1) {
			fRec104[l431] = 0.0f;
		}
		for (int l432 = 0; l432 < 2; l432 = l432 + 1) {
			fRec103[l432] = 0.0f;
		}
		for (int l433 = 0; l433 < 2; l433 = l433 + 1) {
			fVec336[l433] = 0.0f;
		}
		for (int l434 = 0; l434 < 3; l434 = l434 + 1) {
			fVec337[l434] = 0.0f;
		}
		for (int l435 = 0; l435 < 7; l435 = l435 + 1) {
			fVec338[l435] = 0.0f;
		}
		for (int l436 = 0; l436 < 15; l436 = l436 + 1) {
			fVec339[l436] = 0.0f;
		}
		for (int l437 = 0; l437 < 32; l437 = l437 + 1) {
			fVec340[l437] = 0.0f;
		}
		for (int l438 = 0; l438 < 64; l438 = l438 + 1) {
			fVec341[l438] = 0.0f;
		}
		for (int l439 = 0; l439 < 128; l439 = l439 + 1) {
			fVec342[l439] = 0.0f;
		}
		for (int l440 = 0; l440 < 256; l440 = l440 + 1) {
			fVec343[l440] = 0.0f;
		}
		for (int l441 = 0; l441 < 512; l441 = l441 + 1) {
			fVec344[l441] = 0.0f;
		}
		for (int l442 = 0; l442 < 1024; l442 = l442 + 1) {
			fVec345[l442] = 0.0f;
		}
		for (int l443 = 0; l443 < 2048; l443 = l443 + 1) {
			fVec346[l443] = 0.0f;
		}
		for (int l444 = 0; l444 < 4096; l444 = l444 + 1) {
			fVec347[l444] = 0.0f;
		}
		for (int l445 = 0; l445 < 8192; l445 = l445 + 1) {
			fVec348[l445] = 0.0f;
		}
		for (int l446 = 0; l446 < 16384; l446 = l446 + 1) {
			fVec349[l446] = 0.0f;
		}
		for (int l447 = 0; l447 < 32768; l447 = l447 + 1) {
			fVec350[l447] = 0.0f;
		}
		for (int l448 = 0; l448 < 65536; l448 = l448 + 1) {
			fVec351[l448] = 0.0f;
		}
		for (int l449 = 0; l449 < 131072; l449 = l449 + 1) {
			fVec352[l449] = 0.0f;
		}
		for (int l450 = 0; l450 < 262144; l450 = l450 + 1) {
			fVec353[l450] = 0.0f;
		}
		for (int l451 = 0; l451 < 3; l451 = l451 + 1) {
			fRec112[l451] = 0.0f;
		}
		for (int l452 = 0; l452 < 32768; l452 = l452 + 1) {
			fVec354[l452] = 0.0f;
		}
		for (int l453 = 0; l453 < 2; l453 = l453 + 1) {
			fVec355[l453] = 0.0f;
		}
		for (int l454 = 0; l454 < 2; l454 = l454 + 1) {
			fRec111[l454] = 0.0f;
		}
		for (int l455 = 0; l455 < 2; l455 = l455 + 1) {
			fRec110[l455] = 0.0f;
		}
		for (int l456 = 0; l456 < 2; l456 = l456 + 1) {
			fVec356[l456] = 0.0f;
		}
		for (int l457 = 0; l457 < 2; l457 = l457 + 1) {
			fRec109[l457] = 0.0f;
		}
		for (int l458 = 0; l458 < 2; l458 = l458 + 1) {
			fRec108[l458] = 0.0f;
		}
		for (int l459 = 0; l459 < 2; l459 = l459 + 1) {
			fVec357[l459] = 0.0f;
		}
		for (int l460 = 0; l460 < 3; l460 = l460 + 1) {
			fVec358[l460] = 0.0f;
		}
		for (int l461 = 0; l461 < 7; l461 = l461 + 1) {
			fVec359[l461] = 0.0f;
		}
		for (int l462 = 0; l462 < 15; l462 = l462 + 1) {
			fVec360[l462] = 0.0f;
		}
		for (int l463 = 0; l463 < 32; l463 = l463 + 1) {
			fVec361[l463] = 0.0f;
		}
		for (int l464 = 0; l464 < 64; l464 = l464 + 1) {
			fVec362[l464] = 0.0f;
		}
		for (int l465 = 0; l465 < 128; l465 = l465 + 1) {
			fVec363[l465] = 0.0f;
		}
		for (int l466 = 0; l466 < 256; l466 = l466 + 1) {
			fVec364[l466] = 0.0f;
		}
		for (int l467 = 0; l467 < 512; l467 = l467 + 1) {
			fVec365[l467] = 0.0f;
		}
		for (int l468 = 0; l468 < 1024; l468 = l468 + 1) {
			fVec366[l468] = 0.0f;
		}
		for (int l469 = 0; l469 < 2048; l469 = l469 + 1) {
			fVec367[l469] = 0.0f;
		}
		for (int l470 = 0; l470 < 4096; l470 = l470 + 1) {
			fVec368[l470] = 0.0f;
		}
		for (int l471 = 0; l471 < 8192; l471 = l471 + 1) {
			fVec369[l471] = 0.0f;
		}
		for (int l472 = 0; l472 < 16384; l472 = l472 + 1) {
			fVec370[l472] = 0.0f;
		}
		for (int l473 = 0; l473 < 32768; l473 = l473 + 1) {
			fVec371[l473] = 0.0f;
		}
		for (int l474 = 0; l474 < 65536; l474 = l474 + 1) {
			fVec372[l474] = 0.0f;
		}
		for (int l475 = 0; l475 < 131072; l475 = l475 + 1) {
			fVec373[l475] = 0.0f;
		}
		for (int l476 = 0; l476 < 262144; l476 = l476 + 1) {
			fVec374[l476] = 0.0f;
		}
		for (int l477 = 0; l477 < 3; l477 = l477 + 1) {
			fRec117[l477] = 0.0f;
		}
		for (int l478 = 0; l478 < 32768; l478 = l478 + 1) {
			fVec375[l478] = 0.0f;
		}
		for (int l479 = 0; l479 < 2; l479 = l479 + 1) {
			fVec376[l479] = 0.0f;
		}
		for (int l480 = 0; l480 < 2; l480 = l480 + 1) {
			fRec116[l480] = 0.0f;
		}
		for (int l481 = 0; l481 < 2; l481 = l481 + 1) {
			fRec115[l481] = 0.0f;
		}
		for (int l482 = 0; l482 < 2; l482 = l482 + 1) {
			fVec377[l482] = 0.0f;
		}
		for (int l483 = 0; l483 < 2; l483 = l483 + 1) {
			fRec114[l483] = 0.0f;
		}
		for (int l484 = 0; l484 < 2; l484 = l484 + 1) {
			fRec113[l484] = 0.0f;
		}
		for (int l485 = 0; l485 < 2; l485 = l485 + 1) {
			fVec378[l485] = 0.0f;
		}
		for (int l486 = 0; l486 < 3; l486 = l486 + 1) {
			fVec379[l486] = 0.0f;
		}
		for (int l487 = 0; l487 < 7; l487 = l487 + 1) {
			fVec380[l487] = 0.0f;
		}
		for (int l488 = 0; l488 < 15; l488 = l488 + 1) {
			fVec381[l488] = 0.0f;
		}
		for (int l489 = 0; l489 < 32; l489 = l489 + 1) {
			fVec382[l489] = 0.0f;
		}
		for (int l490 = 0; l490 < 64; l490 = l490 + 1) {
			fVec383[l490] = 0.0f;
		}
		for (int l491 = 0; l491 < 128; l491 = l491 + 1) {
			fVec384[l491] = 0.0f;
		}
		for (int l492 = 0; l492 < 256; l492 = l492 + 1) {
			fVec385[l492] = 0.0f;
		}
		for (int l493 = 0; l493 < 512; l493 = l493 + 1) {
			fVec386[l493] = 0.0f;
		}
		for (int l494 = 0; l494 < 1024; l494 = l494 + 1) {
			fVec387[l494] = 0.0f;
		}
		for (int l495 = 0; l495 < 2048; l495 = l495 + 1) {
			fVec388[l495] = 0.0f;
		}
		for (int l496 = 0; l496 < 4096; l496 = l496 + 1) {
			fVec389[l496] = 0.0f;
		}
		for (int l497 = 0; l497 < 8192; l497 = l497 + 1) {
			fVec390[l497] = 0.0f;
		}
		for (int l498 = 0; l498 < 16384; l498 = l498 + 1) {
			fVec391[l498] = 0.0f;
		}
		for (int l499 = 0; l499 < 32768; l499 = l499 + 1) {
			fVec392[l499] = 0.0f;
		}
		for (int l500 = 0; l500 < 65536; l500 = l500 + 1) {
			fVec393[l500] = 0.0f;
		}
		for (int l501 = 0; l501 < 131072; l501 = l501 + 1) {
			fVec394[l501] = 0.0f;
		}
		for (int l502 = 0; l502 < 262144; l502 = l502 + 1) {
			fVec395[l502] = 0.0f;
		}
		for (int l503 = 0; l503 < 3; l503 = l503 + 1) {
			fRec122[l503] = 0.0f;
		}
		for (int l504 = 0; l504 < 32768; l504 = l504 + 1) {
			fVec396[l504] = 0.0f;
		}
		for (int l505 = 0; l505 < 2; l505 = l505 + 1) {
			fVec397[l505] = 0.0f;
		}
		for (int l506 = 0; l506 < 2; l506 = l506 + 1) {
			fRec121[l506] = 0.0f;
		}
		for (int l507 = 0; l507 < 2; l507 = l507 + 1) {
			fRec120[l507] = 0.0f;
		}
		for (int l508 = 0; l508 < 2; l508 = l508 + 1) {
			fVec398[l508] = 0.0f;
		}
		for (int l509 = 0; l509 < 2; l509 = l509 + 1) {
			fRec119[l509] = 0.0f;
		}
		for (int l510 = 0; l510 < 2; l510 = l510 + 1) {
			fRec118[l510] = 0.0f;
		}
		for (int l511 = 0; l511 < 2; l511 = l511 + 1) {
			fVec399[l511] = 0.0f;
		}
		for (int l512 = 0; l512 < 3; l512 = l512 + 1) {
			fVec400[l512] = 0.0f;
		}
		for (int l513 = 0; l513 < 7; l513 = l513 + 1) {
			fVec401[l513] = 0.0f;
		}
		for (int l514 = 0; l514 < 15; l514 = l514 + 1) {
			fVec402[l514] = 0.0f;
		}
		for (int l515 = 0; l515 < 32; l515 = l515 + 1) {
			fVec403[l515] = 0.0f;
		}
		for (int l516 = 0; l516 < 64; l516 = l516 + 1) {
			fVec404[l516] = 0.0f;
		}
		for (int l517 = 0; l517 < 128; l517 = l517 + 1) {
			fVec405[l517] = 0.0f;
		}
		for (int l518 = 0; l518 < 256; l518 = l518 + 1) {
			fVec406[l518] = 0.0f;
		}
		for (int l519 = 0; l519 < 512; l519 = l519 + 1) {
			fVec407[l519] = 0.0f;
		}
		for (int l520 = 0; l520 < 1024; l520 = l520 + 1) {
			fVec408[l520] = 0.0f;
		}
		for (int l521 = 0; l521 < 2048; l521 = l521 + 1) {
			fVec409[l521] = 0.0f;
		}
		for (int l522 = 0; l522 < 4096; l522 = l522 + 1) {
			fVec410[l522] = 0.0f;
		}
		for (int l523 = 0; l523 < 8192; l523 = l523 + 1) {
			fVec411[l523] = 0.0f;
		}
		for (int l524 = 0; l524 < 16384; l524 = l524 + 1) {
			fVec412[l524] = 0.0f;
		}
		for (int l525 = 0; l525 < 32768; l525 = l525 + 1) {
			fVec413[l525] = 0.0f;
		}
		for (int l526 = 0; l526 < 65536; l526 = l526 + 1) {
			fVec414[l526] = 0.0f;
		}
		for (int l527 = 0; l527 < 131072; l527 = l527 + 1) {
			fVec415[l527] = 0.0f;
		}
		for (int l528 = 0; l528 < 262144; l528 = l528 + 1) {
			fVec416[l528] = 0.0f;
		}
		for (int l529 = 0; l529 < 3; l529 = l529 + 1) {
			fRec127[l529] = 0.0f;
		}
		for (int l530 = 0; l530 < 32768; l530 = l530 + 1) {
			fVec417[l530] = 0.0f;
		}
		for (int l531 = 0; l531 < 2; l531 = l531 + 1) {
			fVec418[l531] = 0.0f;
		}
		for (int l532 = 0; l532 < 2; l532 = l532 + 1) {
			fRec126[l532] = 0.0f;
		}
		for (int l533 = 0; l533 < 2; l533 = l533 + 1) {
			fRec125[l533] = 0.0f;
		}
		for (int l534 = 0; l534 < 2; l534 = l534 + 1) {
			fVec419[l534] = 0.0f;
		}
		for (int l535 = 0; l535 < 2; l535 = l535 + 1) {
			fRec124[l535] = 0.0f;
		}
		for (int l536 = 0; l536 < 2; l536 = l536 + 1) {
			fRec123[l536] = 0.0f;
		}
		for (int l537 = 0; l537 < 2; l537 = l537 + 1) {
			fVec420[l537] = 0.0f;
		}
		for (int l538 = 0; l538 < 3; l538 = l538 + 1) {
			fVec421[l538] = 0.0f;
		}
		for (int l539 = 0; l539 < 7; l539 = l539 + 1) {
			fVec422[l539] = 0.0f;
		}
		for (int l540 = 0; l540 < 15; l540 = l540 + 1) {
			fVec423[l540] = 0.0f;
		}
		for (int l541 = 0; l541 < 32; l541 = l541 + 1) {
			fVec424[l541] = 0.0f;
		}
		for (int l542 = 0; l542 < 64; l542 = l542 + 1) {
			fVec425[l542] = 0.0f;
		}
		for (int l543 = 0; l543 < 128; l543 = l543 + 1) {
			fVec426[l543] = 0.0f;
		}
		for (int l544 = 0; l544 < 256; l544 = l544 + 1) {
			fVec427[l544] = 0.0f;
		}
		for (int l545 = 0; l545 < 512; l545 = l545 + 1) {
			fVec428[l545] = 0.0f;
		}
		for (int l546 = 0; l546 < 1024; l546 = l546 + 1) {
			fVec429[l546] = 0.0f;
		}
		for (int l547 = 0; l547 < 2048; l547 = l547 + 1) {
			fVec430[l547] = 0.0f;
		}
		for (int l548 = 0; l548 < 4096; l548 = l548 + 1) {
			fVec431[l548] = 0.0f;
		}
		for (int l549 = 0; l549 < 8192; l549 = l549 + 1) {
			fVec432[l549] = 0.0f;
		}
		for (int l550 = 0; l550 < 16384; l550 = l550 + 1) {
			fVec433[l550] = 0.0f;
		}
		for (int l551 = 0; l551 < 32768; l551 = l551 + 1) {
			fVec434[l551] = 0.0f;
		}
		for (int l552 = 0; l552 < 65536; l552 = l552 + 1) {
			fVec435[l552] = 0.0f;
		}
		for (int l553 = 0; l553 < 131072; l553 = l553 + 1) {
			fVec436[l553] = 0.0f;
		}
		for (int l554 = 0; l554 < 262144; l554 = l554 + 1) {
			fVec437[l554] = 0.0f;
		}
		for (int l555 = 0; l555 < 3; l555 = l555 + 1) {
			fRec132[l555] = 0.0f;
		}
		for (int l556 = 0; l556 < 32768; l556 = l556 + 1) {
			fVec438[l556] = 0.0f;
		}
		for (int l557 = 0; l557 < 2; l557 = l557 + 1) {
			fVec439[l557] = 0.0f;
		}
		for (int l558 = 0; l558 < 2; l558 = l558 + 1) {
			fRec131[l558] = 0.0f;
		}
		for (int l559 = 0; l559 < 2; l559 = l559 + 1) {
			fRec130[l559] = 0.0f;
		}
		for (int l560 = 0; l560 < 2; l560 = l560 + 1) {
			fVec440[l560] = 0.0f;
		}
		for (int l561 = 0; l561 < 2; l561 = l561 + 1) {
			fRec129[l561] = 0.0f;
		}
		for (int l562 = 0; l562 < 2; l562 = l562 + 1) {
			fRec128[l562] = 0.0f;
		}
		for (int l563 = 0; l563 < 2; l563 = l563 + 1) {
			fVec441[l563] = 0.0f;
		}
		for (int l564 = 0; l564 < 3; l564 = l564 + 1) {
			fVec442[l564] = 0.0f;
		}
		for (int l565 = 0; l565 < 7; l565 = l565 + 1) {
			fVec443[l565] = 0.0f;
		}
		for (int l566 = 0; l566 < 15; l566 = l566 + 1) {
			fVec444[l566] = 0.0f;
		}
		for (int l567 = 0; l567 < 32; l567 = l567 + 1) {
			fVec445[l567] = 0.0f;
		}
		for (int l568 = 0; l568 < 64; l568 = l568 + 1) {
			fVec446[l568] = 0.0f;
		}
		for (int l569 = 0; l569 < 128; l569 = l569 + 1) {
			fVec447[l569] = 0.0f;
		}
		for (int l570 = 0; l570 < 256; l570 = l570 + 1) {
			fVec448[l570] = 0.0f;
		}
		for (int l571 = 0; l571 < 512; l571 = l571 + 1) {
			fVec449[l571] = 0.0f;
		}
		for (int l572 = 0; l572 < 1024; l572 = l572 + 1) {
			fVec450[l572] = 0.0f;
		}
		for (int l573 = 0; l573 < 2048; l573 = l573 + 1) {
			fVec451[l573] = 0.0f;
		}
		for (int l574 = 0; l574 < 4096; l574 = l574 + 1) {
			fVec452[l574] = 0.0f;
		}
		for (int l575 = 0; l575 < 8192; l575 = l575 + 1) {
			fVec453[l575] = 0.0f;
		}
		for (int l576 = 0; l576 < 16384; l576 = l576 + 1) {
			fVec454[l576] = 0.0f;
		}
		for (int l577 = 0; l577 < 32768; l577 = l577 + 1) {
			fVec455[l577] = 0.0f;
		}
		for (int l578 = 0; l578 < 65536; l578 = l578 + 1) {
			fVec456[l578] = 0.0f;
		}
		for (int l579 = 0; l579 < 131072; l579 = l579 + 1) {
			fVec457[l579] = 0.0f;
		}
		for (int l580 = 0; l580 < 262144; l580 = l580 + 1) {
			fVec458[l580] = 0.0f;
		}
		for (int l581 = 0; l581 < 3; l581 = l581 + 1) {
			fRec137[l581] = 0.0f;
		}
		for (int l582 = 0; l582 < 32768; l582 = l582 + 1) {
			fVec459[l582] = 0.0f;
		}
		for (int l583 = 0; l583 < 2; l583 = l583 + 1) {
			fVec460[l583] = 0.0f;
		}
		for (int l584 = 0; l584 < 2; l584 = l584 + 1) {
			fRec136[l584] = 0.0f;
		}
		for (int l585 = 0; l585 < 2; l585 = l585 + 1) {
			fRec135[l585] = 0.0f;
		}
		for (int l586 = 0; l586 < 2; l586 = l586 + 1) {
			fVec461[l586] = 0.0f;
		}
		for (int l587 = 0; l587 < 2; l587 = l587 + 1) {
			fRec134[l587] = 0.0f;
		}
		for (int l588 = 0; l588 < 2; l588 = l588 + 1) {
			fRec133[l588] = 0.0f;
		}
		for (int l589 = 0; l589 < 2; l589 = l589 + 1) {
			fVec462[l589] = 0.0f;
		}
		for (int l590 = 0; l590 < 3; l590 = l590 + 1) {
			fVec463[l590] = 0.0f;
		}
		for (int l591 = 0; l591 < 7; l591 = l591 + 1) {
			fVec464[l591] = 0.0f;
		}
		for (int l592 = 0; l592 < 15; l592 = l592 + 1) {
			fVec465[l592] = 0.0f;
		}
		for (int l593 = 0; l593 < 32; l593 = l593 + 1) {
			fVec466[l593] = 0.0f;
		}
		for (int l594 = 0; l594 < 64; l594 = l594 + 1) {
			fVec467[l594] = 0.0f;
		}
		for (int l595 = 0; l595 < 128; l595 = l595 + 1) {
			fVec468[l595] = 0.0f;
		}
		for (int l596 = 0; l596 < 256; l596 = l596 + 1) {
			fVec469[l596] = 0.0f;
		}
		for (int l597 = 0; l597 < 512; l597 = l597 + 1) {
			fVec470[l597] = 0.0f;
		}
		for (int l598 = 0; l598 < 1024; l598 = l598 + 1) {
			fVec471[l598] = 0.0f;
		}
		for (int l599 = 0; l599 < 2048; l599 = l599 + 1) {
			fVec472[l599] = 0.0f;
		}
		for (int l600 = 0; l600 < 4096; l600 = l600 + 1) {
			fVec473[l600] = 0.0f;
		}
		for (int l601 = 0; l601 < 8192; l601 = l601 + 1) {
			fVec474[l601] = 0.0f;
		}
		for (int l602 = 0; l602 < 16384; l602 = l602 + 1) {
			fVec475[l602] = 0.0f;
		}
		for (int l603 = 0; l603 < 32768; l603 = l603 + 1) {
			fVec476[l603] = 0.0f;
		}
		for (int l604 = 0; l604 < 65536; l604 = l604 + 1) {
			fVec477[l604] = 0.0f;
		}
		for (int l605 = 0; l605 < 131072; l605 = l605 + 1) {
			fVec478[l605] = 0.0f;
		}
		for (int l606 = 0; l606 < 262144; l606 = l606 + 1) {
			fVec479[l606] = 0.0f;
		}
		for (int l607 = 0; l607 < 3; l607 = l607 + 1) {
			fRec7[l607] = 0.0f;
		}
		for (int l608 = 0; l608 < 3; l608 = l608 + 1) {
			fRec8[l608] = 0.0f;
		}
		for (int l609 = 0; l609 < 2; l609 = l609 + 1) {
			fRec138[l609] = 0.0f;
		}
		for (int l610 = 0; l610 < 3; l610 = l610 + 1) {
			fRec142[l610] = 0.0f;
		}
		for (int l611 = 0; l611 < 3; l611 = l611 + 1) {
			fRec141[l611] = 0.0f;
		}
		for (int l612 = 0; l612 < 3; l612 = l612 + 1) {
			fRec140[l612] = 0.0f;
		}
		for (int l613 = 0; l613 < 2; l613 = l613 + 1) {
			fVec480[l613] = 0.0f;
		}
		for (int l614 = 0; l614 < 2; l614 = l614 + 1) {
			fRec139[l614] = 0.0f;
		}
		for (int l615 = 0; l615 < 3; l615 = l615 + 1) {
			fRec146[l615] = 0.0f;
		}
		for (int l616 = 0; l616 < 3; l616 = l616 + 1) {
			fRec145[l616] = 0.0f;
		}
		for (int l617 = 0; l617 < 3; l617 = l617 + 1) {
			fRec144[l617] = 0.0f;
		}
		for (int l618 = 0; l618 < 2; l618 = l618 + 1) {
			fVec481[l618] = 0.0f;
		}
		for (int l619 = 0; l619 < 2; l619 = l619 + 1) {
			fRec143[l619] = 0.0f;
		}
		for (int l620 = 0; l620 < 3; l620 = l620 + 1) {
			fVec482[l620] = 0.0f;
		}
		for (int l621 = 0; l621 < 7; l621 = l621 + 1) {
			fVec483[l621] = 0.0f;
		}
		for (int l622 = 0; l622 < 15; l622 = l622 + 1) {
			fVec484[l622] = 0.0f;
		}
		for (int l623 = 0; l623 < 32; l623 = l623 + 1) {
			fVec485[l623] = 0.0f;
		}
		for (int l624 = 0; l624 < 64; l624 = l624 + 1) {
			fVec486[l624] = 0.0f;
		}
		for (int l625 = 0; l625 < 128; l625 = l625 + 1) {
			fVec487[l625] = 0.0f;
		}
		for (int l626 = 0; l626 < 256; l626 = l626 + 1) {
			fVec488[l626] = 0.0f;
		}
		for (int l627 = 0; l627 < 512; l627 = l627 + 1) {
			fVec489[l627] = 0.0f;
		}
		for (int l628 = 0; l628 < 1024; l628 = l628 + 1) {
			fVec490[l628] = 0.0f;
		}
		for (int l629 = 0; l629 < 2048; l629 = l629 + 1) {
			fVec491[l629] = 0.0f;
		}
		for (int l630 = 0; l630 < 4096; l630 = l630 + 1) {
			fVec492[l630] = 0.0f;
		}
		for (int l631 = 0; l631 < 2; l631 = l631 + 1) {
			fRec147[l631] = 0.0f;
		}
		for (int l632 = 0; l632 < 3; l632 = l632 + 1) {
			fVec493[l632] = 0.0f;
		}
		for (int l633 = 0; l633 < 7; l633 = l633 + 1) {
			fVec494[l633] = 0.0f;
		}
		for (int l634 = 0; l634 < 15; l634 = l634 + 1) {
			fVec495[l634] = 0.0f;
		}
		for (int l635 = 0; l635 < 32; l635 = l635 + 1) {
			fVec496[l635] = 0.0f;
		}
		for (int l636 = 0; l636 < 64; l636 = l636 + 1) {
			fVec497[l636] = 0.0f;
		}
		for (int l637 = 0; l637 < 128; l637 = l637 + 1) {
			fVec498[l637] = 0.0f;
		}
		for (int l638 = 0; l638 < 256; l638 = l638 + 1) {
			fVec499[l638] = 0.0f;
		}
		for (int l639 = 0; l639 < 512; l639 = l639 + 1) {
			fVec500[l639] = 0.0f;
		}
		for (int l640 = 0; l640 < 1024; l640 = l640 + 1) {
			fVec501[l640] = 0.0f;
		}
		for (int l641 = 0; l641 < 2048; l641 = l641 + 1) {
			fVec502[l641] = 0.0f;
		}
		for (int l642 = 0; l642 < 4096; l642 = l642 + 1) {
			fVec503[l642] = 0.0f;
		}
		for (int l643 = 0; l643 < 2; l643 = l643 + 1) {
			fRec148[l643] = 0.0f;
		}
		for (int l644 = 0; l644 < 3; l644 = l644 + 1) {
			fRec154[l644] = 0.0f;
		}
		for (int l645 = 0; l645 < 3; l645 = l645 + 1) {
			fRec153[l645] = 0.0f;
		}
		for (int l646 = 0; l646 < 3; l646 = l646 + 1) {
			fRec152[l646] = 0.0f;
		}
		for (int l647 = 0; l647 < 3; l647 = l647 + 1) {
			fRec151[l647] = 0.0f;
		}
		for (int l648 = 0; l648 < 3; l648 = l648 + 1) {
			fRec150[l648] = 0.0f;
		}
		for (int l649 = 0; l649 < 2; l649 = l649 + 1) {
			fVec504[l649] = 0.0f;
		}
		for (int l650 = 0; l650 < 2; l650 = l650 + 1) {
			fRec149[l650] = 0.0f;
		}
		for (int l651 = 0; l651 < 3; l651 = l651 + 1) {
			fRec160[l651] = 0.0f;
		}
		for (int l652 = 0; l652 < 3; l652 = l652 + 1) {
			fRec159[l652] = 0.0f;
		}
		for (int l653 = 0; l653 < 3; l653 = l653 + 1) {
			fRec158[l653] = 0.0f;
		}
		for (int l654 = 0; l654 < 3; l654 = l654 + 1) {
			fRec157[l654] = 0.0f;
		}
		for (int l655 = 0; l655 < 3; l655 = l655 + 1) {
			fRec156[l655] = 0.0f;
		}
		for (int l656 = 0; l656 < 2; l656 = l656 + 1) {
			fVec505[l656] = 0.0f;
		}
		for (int l657 = 0; l657 < 2; l657 = l657 + 1) {
			fRec155[l657] = 0.0f;
		}
		for (int l658 = 0; l658 < 3; l658 = l658 + 1) {
			fVec506[l658] = 0.0f;
		}
		for (int l659 = 0; l659 < 7; l659 = l659 + 1) {
			fVec507[l659] = 0.0f;
		}
		for (int l660 = 0; l660 < 15; l660 = l660 + 1) {
			fVec508[l660] = 0.0f;
		}
		for (int l661 = 0; l661 < 32; l661 = l661 + 1) {
			fVec509[l661] = 0.0f;
		}
		for (int l662 = 0; l662 < 64; l662 = l662 + 1) {
			fVec510[l662] = 0.0f;
		}
		for (int l663 = 0; l663 < 128; l663 = l663 + 1) {
			fVec511[l663] = 0.0f;
		}
		for (int l664 = 0; l664 < 256; l664 = l664 + 1) {
			fVec512[l664] = 0.0f;
		}
		for (int l665 = 0; l665 < 512; l665 = l665 + 1) {
			fVec513[l665] = 0.0f;
		}
		for (int l666 = 0; l666 < 1024; l666 = l666 + 1) {
			fVec514[l666] = 0.0f;
		}
		for (int l667 = 0; l667 < 2048; l667 = l667 + 1) {
			fVec515[l667] = 0.0f;
		}
		for (int l668 = 0; l668 < 4096; l668 = l668 + 1) {
			fVec516[l668] = 0.0f;
		}
		for (int l669 = 0; l669 < 2; l669 = l669 + 1) {
			fRec161[l669] = 0.0f;
		}
		for (int l670 = 0; l670 < 3; l670 = l670 + 1) {
			fVec517[l670] = 0.0f;
		}
		for (int l671 = 0; l671 < 7; l671 = l671 + 1) {
			fVec518[l671] = 0.0f;
		}
		for (int l672 = 0; l672 < 15; l672 = l672 + 1) {
			fVec519[l672] = 0.0f;
		}
		for (int l673 = 0; l673 < 32; l673 = l673 + 1) {
			fVec520[l673] = 0.0f;
		}
		for (int l674 = 0; l674 < 64; l674 = l674 + 1) {
			fVec521[l674] = 0.0f;
		}
		for (int l675 = 0; l675 < 128; l675 = l675 + 1) {
			fVec522[l675] = 0.0f;
		}
		for (int l676 = 0; l676 < 256; l676 = l676 + 1) {
			fVec523[l676] = 0.0f;
		}
		for (int l677 = 0; l677 < 512; l677 = l677 + 1) {
			fVec524[l677] = 0.0f;
		}
		for (int l678 = 0; l678 < 1024; l678 = l678 + 1) {
			fVec525[l678] = 0.0f;
		}
		for (int l679 = 0; l679 < 2048; l679 = l679 + 1) {
			fVec526[l679] = 0.0f;
		}
		for (int l680 = 0; l680 < 4096; l680 = l680 + 1) {
			fVec527[l680] = 0.0f;
		}
		for (int l681 = 0; l681 < 2; l681 = l681 + 1) {
			fRec162[l681] = 0.0f;
		}
		for (int l682 = 0; l682 < 3; l682 = l682 + 1) {
			fRec184[l682] = 0.0f;
		}
		for (int l683 = 0; l683 < 3; l683 = l683 + 1) {
			fRec183[l683] = 0.0f;
		}
		for (int l684 = 0; l684 < 3; l684 = l684 + 1) {
			fRec182[l684] = 0.0f;
		}
		for (int l685 = 0; l685 < 3; l685 = l685 + 1) {
			fRec181[l685] = 0.0f;
		}
		for (int l686 = 0; l686 < 3; l686 = l686 + 1) {
			fRec180[l686] = 0.0f;
		}
		for (int l687 = 0; l687 < 2; l687 = l687 + 1) {
			fVec528[l687] = 0.0f;
		}
		for (int l688 = 0; l688 < 2; l688 = l688 + 1) {
			fRec179[l688] = 0.0f;
		}
		for (int l689 = 0; l689 < 3; l689 = l689 + 1) {
			fRec190[l689] = 0.0f;
		}
		for (int l690 = 0; l690 < 3; l690 = l690 + 1) {
			fRec189[l690] = 0.0f;
		}
		for (int l691 = 0; l691 < 3; l691 = l691 + 1) {
			fRec188[l691] = 0.0f;
		}
		for (int l692 = 0; l692 < 3; l692 = l692 + 1) {
			fRec187[l692] = 0.0f;
		}
		for (int l693 = 0; l693 < 3; l693 = l693 + 1) {
			fRec186[l693] = 0.0f;
		}
		for (int l694 = 0; l694 < 2; l694 = l694 + 1) {
			fVec529[l694] = 0.0f;
		}
		for (int l695 = 0; l695 < 2; l695 = l695 + 1) {
			fRec185[l695] = 0.0f;
		}
		for (int l696 = 0; l696 < 3; l696 = l696 + 1) {
			fVec530[l696] = 0.0f;
		}
		for (int l697 = 0; l697 < 7; l697 = l697 + 1) {
			fVec531[l697] = 0.0f;
		}
		for (int l698 = 0; l698 < 15; l698 = l698 + 1) {
			fVec532[l698] = 0.0f;
		}
		for (int l699 = 0; l699 < 32; l699 = l699 + 1) {
			fVec533[l699] = 0.0f;
		}
		for (int l700 = 0; l700 < 64; l700 = l700 + 1) {
			fVec534[l700] = 0.0f;
		}
		for (int l701 = 0; l701 < 128; l701 = l701 + 1) {
			fVec535[l701] = 0.0f;
		}
		for (int l702 = 0; l702 < 256; l702 = l702 + 1) {
			fVec536[l702] = 0.0f;
		}
		for (int l703 = 0; l703 < 512; l703 = l703 + 1) {
			fVec537[l703] = 0.0f;
		}
		for (int l704 = 0; l704 < 1024; l704 = l704 + 1) {
			fVec538[l704] = 0.0f;
		}
		for (int l705 = 0; l705 < 2048; l705 = l705 + 1) {
			fVec539[l705] = 0.0f;
		}
		for (int l706 = 0; l706 < 4096; l706 = l706 + 1) {
			fVec540[l706] = 0.0f;
		}
		for (int l707 = 0; l707 < 2; l707 = l707 + 1) {
			fRec191[l707] = 0.0f;
		}
		for (int l708 = 0; l708 < 3; l708 = l708 + 1) {
			fVec541[l708] = 0.0f;
		}
		for (int l709 = 0; l709 < 7; l709 = l709 + 1) {
			fVec542[l709] = 0.0f;
		}
		for (int l710 = 0; l710 < 15; l710 = l710 + 1) {
			fVec543[l710] = 0.0f;
		}
		for (int l711 = 0; l711 < 32; l711 = l711 + 1) {
			fVec544[l711] = 0.0f;
		}
		for (int l712 = 0; l712 < 64; l712 = l712 + 1) {
			fVec545[l712] = 0.0f;
		}
		for (int l713 = 0; l713 < 128; l713 = l713 + 1) {
			fVec546[l713] = 0.0f;
		}
		for (int l714 = 0; l714 < 256; l714 = l714 + 1) {
			fVec547[l714] = 0.0f;
		}
		for (int l715 = 0; l715 < 512; l715 = l715 + 1) {
			fVec548[l715] = 0.0f;
		}
		for (int l716 = 0; l716 < 1024; l716 = l716 + 1) {
			fVec549[l716] = 0.0f;
		}
		for (int l717 = 0; l717 < 2048; l717 = l717 + 1) {
			fVec550[l717] = 0.0f;
		}
		for (int l718 = 0; l718 < 4096; l718 = l718 + 1) {
			fVec551[l718] = 0.0f;
		}
		for (int l719 = 0; l719 < 2; l719 = l719 + 1) {
			fRec192[l719] = 0.0f;
		}
		for (int l720 = 0; l720 < 3; l720 = l720 + 1) {
			fRec214[l720] = 0.0f;
		}
		for (int l721 = 0; l721 < 3; l721 = l721 + 1) {
			fRec213[l721] = 0.0f;
		}
		for (int l722 = 0; l722 < 3; l722 = l722 + 1) {
			fRec212[l722] = 0.0f;
		}
		for (int l723 = 0; l723 < 3; l723 = l723 + 1) {
			fRec211[l723] = 0.0f;
		}
		for (int l724 = 0; l724 < 3; l724 = l724 + 1) {
			fRec210[l724] = 0.0f;
		}
		for (int l725 = 0; l725 < 2; l725 = l725 + 1) {
			fVec552[l725] = 0.0f;
		}
		for (int l726 = 0; l726 < 2; l726 = l726 + 1) {
			fRec209[l726] = 0.0f;
		}
		for (int l727 = 0; l727 < 3; l727 = l727 + 1) {
			fRec220[l727] = 0.0f;
		}
		for (int l728 = 0; l728 < 3; l728 = l728 + 1) {
			fRec219[l728] = 0.0f;
		}
		for (int l729 = 0; l729 < 3; l729 = l729 + 1) {
			fRec218[l729] = 0.0f;
		}
		for (int l730 = 0; l730 < 3; l730 = l730 + 1) {
			fRec217[l730] = 0.0f;
		}
		for (int l731 = 0; l731 < 3; l731 = l731 + 1) {
			fRec216[l731] = 0.0f;
		}
		for (int l732 = 0; l732 < 2; l732 = l732 + 1) {
			fVec553[l732] = 0.0f;
		}
		for (int l733 = 0; l733 < 2; l733 = l733 + 1) {
			fRec215[l733] = 0.0f;
		}
		for (int l734 = 0; l734 < 3; l734 = l734 + 1) {
			fVec554[l734] = 0.0f;
		}
		for (int l735 = 0; l735 < 7; l735 = l735 + 1) {
			fVec555[l735] = 0.0f;
		}
		for (int l736 = 0; l736 < 15; l736 = l736 + 1) {
			fVec556[l736] = 0.0f;
		}
		for (int l737 = 0; l737 < 32; l737 = l737 + 1) {
			fVec557[l737] = 0.0f;
		}
		for (int l738 = 0; l738 < 64; l738 = l738 + 1) {
			fVec558[l738] = 0.0f;
		}
		for (int l739 = 0; l739 < 128; l739 = l739 + 1) {
			fVec559[l739] = 0.0f;
		}
		for (int l740 = 0; l740 < 256; l740 = l740 + 1) {
			fVec560[l740] = 0.0f;
		}
		for (int l741 = 0; l741 < 512; l741 = l741 + 1) {
			fVec561[l741] = 0.0f;
		}
		for (int l742 = 0; l742 < 1024; l742 = l742 + 1) {
			fVec562[l742] = 0.0f;
		}
		for (int l743 = 0; l743 < 2048; l743 = l743 + 1) {
			fVec563[l743] = 0.0f;
		}
		for (int l744 = 0; l744 < 4096; l744 = l744 + 1) {
			fVec564[l744] = 0.0f;
		}
		for (int l745 = 0; l745 < 2; l745 = l745 + 1) {
			fRec221[l745] = 0.0f;
		}
		for (int l746 = 0; l746 < 3; l746 = l746 + 1) {
			fVec565[l746] = 0.0f;
		}
		for (int l747 = 0; l747 < 7; l747 = l747 + 1) {
			fVec566[l747] = 0.0f;
		}
		for (int l748 = 0; l748 < 15; l748 = l748 + 1) {
			fVec567[l748] = 0.0f;
		}
		for (int l749 = 0; l749 < 32; l749 = l749 + 1) {
			fVec568[l749] = 0.0f;
		}
		for (int l750 = 0; l750 < 64; l750 = l750 + 1) {
			fVec569[l750] = 0.0f;
		}
		for (int l751 = 0; l751 < 128; l751 = l751 + 1) {
			fVec570[l751] = 0.0f;
		}
		for (int l752 = 0; l752 < 256; l752 = l752 + 1) {
			fVec571[l752] = 0.0f;
		}
		for (int l753 = 0; l753 < 512; l753 = l753 + 1) {
			fVec572[l753] = 0.0f;
		}
		for (int l754 = 0; l754 < 1024; l754 = l754 + 1) {
			fVec573[l754] = 0.0f;
		}
		for (int l755 = 0; l755 < 2048; l755 = l755 + 1) {
			fVec574[l755] = 0.0f;
		}
		for (int l756 = 0; l756 < 4096; l756 = l756 + 1) {
			fVec575[l756] = 0.0f;
		}
		for (int l757 = 0; l757 < 2; l757 = l757 + 1) {
			fRec222[l757] = 0.0f;
		}
		for (int l758 = 0; l758 < 3; l758 = l758 + 1) {
			fRec241[l758] = 0.0f;
		}
		for (int l759 = 0; l759 < 3; l759 = l759 + 1) {
			fRec240[l759] = 0.0f;
		}
		for (int l760 = 0; l760 < 2; l760 = l760 + 1) {
			fVec576[l760] = 0.0f;
		}
		for (int l761 = 0; l761 < 2; l761 = l761 + 1) {
			fRec239[l761] = 0.0f;
		}
		for (int l762 = 0; l762 < 3; l762 = l762 + 1) {
			fRec244[l762] = 0.0f;
		}
		for (int l763 = 0; l763 < 3; l763 = l763 + 1) {
			fRec243[l763] = 0.0f;
		}
		for (int l764 = 0; l764 < 2; l764 = l764 + 1) {
			fVec577[l764] = 0.0f;
		}
		for (int l765 = 0; l765 < 2; l765 = l765 + 1) {
			fRec242[l765] = 0.0f;
		}
		for (int l766 = 0; l766 < 3; l766 = l766 + 1) {
			fVec578[l766] = 0.0f;
		}
		for (int l767 = 0; l767 < 7; l767 = l767 + 1) {
			fVec579[l767] = 0.0f;
		}
		for (int l768 = 0; l768 < 15; l768 = l768 + 1) {
			fVec580[l768] = 0.0f;
		}
		for (int l769 = 0; l769 < 32; l769 = l769 + 1) {
			fVec581[l769] = 0.0f;
		}
		for (int l770 = 0; l770 < 64; l770 = l770 + 1) {
			fVec582[l770] = 0.0f;
		}
		for (int l771 = 0; l771 < 128; l771 = l771 + 1) {
			fVec583[l771] = 0.0f;
		}
		for (int l772 = 0; l772 < 256; l772 = l772 + 1) {
			fVec584[l772] = 0.0f;
		}
		for (int l773 = 0; l773 < 512; l773 = l773 + 1) {
			fVec585[l773] = 0.0f;
		}
		for (int l774 = 0; l774 < 1024; l774 = l774 + 1) {
			fVec586[l774] = 0.0f;
		}
		for (int l775 = 0; l775 < 2048; l775 = l775 + 1) {
			fVec587[l775] = 0.0f;
		}
		for (int l776 = 0; l776 < 4096; l776 = l776 + 1) {
			fVec588[l776] = 0.0f;
		}
		for (int l777 = 0; l777 < 2; l777 = l777 + 1) {
			fRec245[l777] = 0.0f;
		}
		for (int l778 = 0; l778 < 3; l778 = l778 + 1) {
			fVec589[l778] = 0.0f;
		}
		for (int l779 = 0; l779 < 7; l779 = l779 + 1) {
			fVec590[l779] = 0.0f;
		}
		for (int l780 = 0; l780 < 15; l780 = l780 + 1) {
			fVec591[l780] = 0.0f;
		}
		for (int l781 = 0; l781 < 32; l781 = l781 + 1) {
			fVec592[l781] = 0.0f;
		}
		for (int l782 = 0; l782 < 64; l782 = l782 + 1) {
			fVec593[l782] = 0.0f;
		}
		for (int l783 = 0; l783 < 128; l783 = l783 + 1) {
			fVec594[l783] = 0.0f;
		}
		for (int l784 = 0; l784 < 256; l784 = l784 + 1) {
			fVec595[l784] = 0.0f;
		}
		for (int l785 = 0; l785 < 512; l785 = l785 + 1) {
			fVec596[l785] = 0.0f;
		}
		for (int l786 = 0; l786 < 1024; l786 = l786 + 1) {
			fVec597[l786] = 0.0f;
		}
		for (int l787 = 0; l787 < 2048; l787 = l787 + 1) {
			fVec598[l787] = 0.0f;
		}
		for (int l788 = 0; l788 < 4096; l788 = l788 + 1) {
			fVec599[l788] = 0.0f;
		}
		for (int l789 = 0; l789 < 2; l789 = l789 + 1) {
			fRec246[l789] = 0.0f;
		}
		for (int l790 = 0; l790 < 2; l790 = l790 + 1) {
			fRec251[l790] = 0.0f;
		}
		for (int l791 = 0; l791 < 2; l791 = l791 + 1) {
			fRec252[l791] = 0.0f;
		}
		for (int l792 = 0; l792 < 2; l792 = l792 + 1) {
			fRec255[l792] = 0.0f;
		}
		for (int l793 = 0; l793 < 2; l793 = l793 + 1) {
			fRec256[l793] = 0.0f;
		}
		for (int l794 = 0; l794 < 2; l794 = l794 + 1) {
			fRec247[l794] = 0.0f;
		}
		for (int l795 = 0; l795 < 2; l795 = l795 + 1) {
			fRec248[l795] = 0.0f;
		}
		for (int l796 = 0; l796 < 2; l796 = l796 + 1) {
			fRec235[l796] = 0.0f;
		}
		for (int l797 = 0; l797 < 2; l797 = l797 + 1) {
			fRec236[l797] = 0.0f;
		}
		for (int l798 = 0; l798 < 2; l798 = l798 + 1) {
			fRec259[l798] = 0.0f;
		}
		for (int l799 = 0; l799 < 2; l799 = l799 + 1) {
			fRec260[l799] = 0.0f;
		}
		for (int l800 = 0; l800 < 2; l800 = l800 + 1) {
			fRec231[l800] = 0.0f;
		}
		for (int l801 = 0; l801 < 2; l801 = l801 + 1) {
			fRec232[l801] = 0.0f;
		}
		for (int l802 = 0; l802 < 2; l802 = l802 + 1) {
			fRec227[l802] = 0.0f;
		}
		for (int l803 = 0; l803 < 2; l803 = l803 + 1) {
			fRec228[l803] = 0.0f;
		}
		for (int l804 = 0; l804 < 2; l804 = l804 + 1) {
			fRec263[l804] = 0.0f;
		}
		for (int l805 = 0; l805 < 2; l805 = l805 + 1) {
			fRec264[l805] = 0.0f;
		}
		for (int l806 = 0; l806 < 2; l806 = l806 + 1) {
			fRec223[l806] = 0.0f;
		}
		for (int l807 = 0; l807 < 2; l807 = l807 + 1) {
			fRec224[l807] = 0.0f;
		}
		for (int l808 = 0; l808 < 2; l808 = l808 + 1) {
			fRec205[l808] = 0.0f;
		}
		for (int l809 = 0; l809 < 2; l809 = l809 + 1) {
			fRec206[l809] = 0.0f;
		}
		for (int l810 = 0; l810 < 2; l810 = l810 + 1) {
			fRec267[l810] = 0.0f;
		}
		for (int l811 = 0; l811 < 2; l811 = l811 + 1) {
			fRec268[l811] = 0.0f;
		}
		for (int l812 = 0; l812 < 2; l812 = l812 + 1) {
			fRec201[l812] = 0.0f;
		}
		for (int l813 = 0; l813 < 2; l813 = l813 + 1) {
			fRec202[l813] = 0.0f;
		}
		for (int l814 = 0; l814 < 2; l814 = l814 + 1) {
			fRec197[l814] = 0.0f;
		}
		for (int l815 = 0; l815 < 2; l815 = l815 + 1) {
			fRec198[l815] = 0.0f;
		}
		for (int l816 = 0; l816 < 2; l816 = l816 + 1) {
			fRec271[l816] = 0.0f;
		}
		for (int l817 = 0; l817 < 2; l817 = l817 + 1) {
			fRec272[l817] = 0.0f;
		}
		for (int l818 = 0; l818 < 2; l818 = l818 + 1) {
			fRec193[l818] = 0.0f;
		}
		for (int l819 = 0; l819 < 2; l819 = l819 + 1) {
			fRec194[l819] = 0.0f;
		}
		for (int l820 = 0; l820 < 2; l820 = l820 + 1) {
			fRec175[l820] = 0.0f;
		}
		for (int l821 = 0; l821 < 2; l821 = l821 + 1) {
			fRec176[l821] = 0.0f;
		}
		for (int l822 = 0; l822 < 2; l822 = l822 + 1) {
			fRec275[l822] = 0.0f;
		}
		for (int l823 = 0; l823 < 2; l823 = l823 + 1) {
			fRec276[l823] = 0.0f;
		}
		for (int l824 = 0; l824 < 2; l824 = l824 + 1) {
			fRec171[l824] = 0.0f;
		}
		for (int l825 = 0; l825 < 2; l825 = l825 + 1) {
			fRec172[l825] = 0.0f;
		}
		for (int l826 = 0; l826 < 2; l826 = l826 + 1) {
			fRec167[l826] = 0.0f;
		}
		for (int l827 = 0; l827 < 2; l827 = l827 + 1) {
			fRec168[l827] = 0.0f;
		}
		for (int l828 = 0; l828 < 2; l828 = l828 + 1) {
			fRec279[l828] = 0.0f;
		}
		for (int l829 = 0; l829 < 2; l829 = l829 + 1) {
			fRec280[l829] = 0.0f;
		}
		for (int l830 = 0; l830 < 2; l830 = l830 + 1) {
			fRec163[l830] = 0.0f;
		}
		for (int l831 = 0; l831 < 2; l831 = l831 + 1) {
			fRec164[l831] = 0.0f;
		}
		for (int l832 = 0; l832 < 2; l832 = l832 + 1) {
			fRec283[l832] = 0.0f;
		}
		for (int l833 = 0; l833 < 2; l833 = l833 + 1) {
			fRec284[l833] = 0.0f;
		}
		for (int l834 = 0; l834 < 2; l834 = l834 + 1) {
			fRec287[l834] = 0.0f;
		}
		for (int l835 = 0; l835 < 2; l835 = l835 + 1) {
			fRec288[l835] = 0.0f;
		}
		for (int l836 = 0; l836 < 2; l836 = l836 + 1) {
			fRec291[l836] = 0.0f;
		}
		for (int l837 = 0; l837 < 2; l837 = l837 + 1) {
			fRec292[l837] = 0.0f;
		}
		for (int l838 = 0; l838 < 2048; l838 = l838 + 1) {
			fVec600[l838] = 0.0f;
		}
		for (int l839 = 0; l839 < 2; l839 = l839 + 1) {
			fRec347[l839] = 0.0f;
		}
		for (int l840 = 0; l840 < 2; l840 = l840 + 1) {
			fRec348[l840] = 0.0f;
		}
		for (int l841 = 0; l841 < 2; l841 = l841 + 1) {
			fRec351[l841] = 0.0f;
		}
		for (int l842 = 0; l842 < 2; l842 = l842 + 1) {
			fRec352[l842] = 0.0f;
		}
		for (int l843 = 0; l843 < 2; l843 = l843 + 1) {
			fRec343[l843] = 0.0f;
		}
		for (int l844 = 0; l844 < 2; l844 = l844 + 1) {
			fRec344[l844] = 0.0f;
		}
		for (int l845 = 0; l845 < 2; l845 = l845 + 1) {
			fRec339[l845] = 0.0f;
		}
		for (int l846 = 0; l846 < 2; l846 = l846 + 1) {
			fRec340[l846] = 0.0f;
		}
		for (int l847 = 0; l847 < 2; l847 = l847 + 1) {
			fRec355[l847] = 0.0f;
		}
		for (int l848 = 0; l848 < 2; l848 = l848 + 1) {
			fRec356[l848] = 0.0f;
		}
		for (int l849 = 0; l849 < 2; l849 = l849 + 1) {
			fRec335[l849] = 0.0f;
		}
		for (int l850 = 0; l850 < 2; l850 = l850 + 1) {
			fRec336[l850] = 0.0f;
		}
		for (int l851 = 0; l851 < 2; l851 = l851 + 1) {
			fRec331[l851] = 0.0f;
		}
		for (int l852 = 0; l852 < 2; l852 = l852 + 1) {
			fRec332[l852] = 0.0f;
		}
		for (int l853 = 0; l853 < 2; l853 = l853 + 1) {
			fRec359[l853] = 0.0f;
		}
		for (int l854 = 0; l854 < 2; l854 = l854 + 1) {
			fRec360[l854] = 0.0f;
		}
		for (int l855 = 0; l855 < 2; l855 = l855 + 1) {
			fRec327[l855] = 0.0f;
		}
		for (int l856 = 0; l856 < 2; l856 = l856 + 1) {
			fRec328[l856] = 0.0f;
		}
		for (int l857 = 0; l857 < 2; l857 = l857 + 1) {
			fRec323[l857] = 0.0f;
		}
		for (int l858 = 0; l858 < 2; l858 = l858 + 1) {
			fRec324[l858] = 0.0f;
		}
		for (int l859 = 0; l859 < 2; l859 = l859 + 1) {
			fRec363[l859] = 0.0f;
		}
		for (int l860 = 0; l860 < 2; l860 = l860 + 1) {
			fRec364[l860] = 0.0f;
		}
		for (int l861 = 0; l861 < 2; l861 = l861 + 1) {
			fRec319[l861] = 0.0f;
		}
		for (int l862 = 0; l862 < 2; l862 = l862 + 1) {
			fRec320[l862] = 0.0f;
		}
		for (int l863 = 0; l863 < 2; l863 = l863 + 1) {
			fRec315[l863] = 0.0f;
		}
		for (int l864 = 0; l864 < 2; l864 = l864 + 1) {
			fRec316[l864] = 0.0f;
		}
		for (int l865 = 0; l865 < 2; l865 = l865 + 1) {
			fRec367[l865] = 0.0f;
		}
		for (int l866 = 0; l866 < 2; l866 = l866 + 1) {
			fRec368[l866] = 0.0f;
		}
		for (int l867 = 0; l867 < 2; l867 = l867 + 1) {
			fRec311[l867] = 0.0f;
		}
		for (int l868 = 0; l868 < 2; l868 = l868 + 1) {
			fRec312[l868] = 0.0f;
		}
		for (int l869 = 0; l869 < 2; l869 = l869 + 1) {
			fRec307[l869] = 0.0f;
		}
		for (int l870 = 0; l870 < 2; l870 = l870 + 1) {
			fRec308[l870] = 0.0f;
		}
		for (int l871 = 0; l871 < 2; l871 = l871 + 1) {
			fRec371[l871] = 0.0f;
		}
		for (int l872 = 0; l872 < 2; l872 = l872 + 1) {
			fRec372[l872] = 0.0f;
		}
		for (int l873 = 0; l873 < 2; l873 = l873 + 1) {
			fRec303[l873] = 0.0f;
		}
		for (int l874 = 0; l874 < 2; l874 = l874 + 1) {
			fRec304[l874] = 0.0f;
		}
		for (int l875 = 0; l875 < 2; l875 = l875 + 1) {
			fRec299[l875] = 0.0f;
		}
		for (int l876 = 0; l876 < 2; l876 = l876 + 1) {
			fRec300[l876] = 0.0f;
		}
		for (int l877 = 0; l877 < 2; l877 = l877 + 1) {
			fRec375[l877] = 0.0f;
		}
		for (int l878 = 0; l878 < 2; l878 = l878 + 1) {
			fRec376[l878] = 0.0f;
		}
		for (int l879 = 0; l879 < 2; l879 = l879 + 1) {
			fRec295[l879] = 0.0f;
		}
		for (int l880 = 0; l880 < 2; l880 = l880 + 1) {
			fRec296[l880] = 0.0f;
		}
		for (int l881 = 0; l881 < 2; l881 = l881 + 1) {
			fRec379[l881] = 0.0f;
		}
		for (int l882 = 0; l882 < 2; l882 = l882 + 1) {
			fRec380[l882] = 0.0f;
		}
		for (int l883 = 0; l883 < 2; l883 = l883 + 1) {
			fRec383[l883] = 0.0f;
		}
		for (int l884 = 0; l884 < 2; l884 = l884 + 1) {
			fRec384[l884] = 0.0f;
		}
		for (int l885 = 0; l885 < 2; l885 = l885 + 1) {
			fRec387[l885] = 0.0f;
		}
		for (int l886 = 0; l886 < 2; l886 = l886 + 1) {
			fRec388[l886] = 0.0f;
		}
		for (int l887 = 0; l887 < 2048; l887 = l887 + 1) {
			fVec601[l887] = 0.0f;
		}
		for (int l888 = 0; l888 < 2; l888 = l888 + 1) {
			iRec5[l888] = 0;
		}
		for (int l889 = 0; l889 < 2; l889 = l889 + 1) {
			fRec6[l889] = 0.0f;
		}
		for (int l890 = 0; l890 < 2; l890 = l890 + 1) {
			fRec4[l890] = 0.0f;
		}
		for (int l891 = 0; l891 < 2; l891 = l891 + 1) {
			fRec3[l891] = 0.0f;
		}
		for (int l892 = 0; l892 < 2; l892 = l892 + 1) {
			fRec0[l892] = 0.0f;
		}
		for (int l893 = 0; l893 < 2; l893 = l893 + 1) {
			fVec602[l893] = 0.0f;
		}
		for (int l894 = 0; l894 < 2; l894 = l894 + 1) {
			fVec603[l894] = 0.0f;
		}
		for (int l895 = 0; l895 < 2; l895 = l895 + 1) {
			fRec394[l895] = 0.0f;
		}
		for (int l896 = 0; l896 < 2; l896 = l896 + 1) {
			fRec393[l896] = 0.0f;
		}
		for (int l897 = 0; l897 < 2; l897 = l897 + 1) {
			fVec604[l897] = 0.0f;
		}
		for (int l898 = 0; l898 < 2; l898 = l898 + 1) {
			fRec392[l898] = 0.0f;
		}
		for (int l899 = 0; l899 < 2; l899 = l899 + 1) {
			fRec391[l899] = 0.0f;
		}
		for (int l900 = 0; l900 < 2; l900 = l900 + 1) {
			fVec605[l900] = 0.0f;
		}
		for (int l901 = 0; l901 < 3; l901 = l901 + 1) {
			fVec606[l901] = 0.0f;
		}
		for (int l902 = 0; l902 < 7; l902 = l902 + 1) {
			fVec607[l902] = 0.0f;
		}
		for (int l903 = 0; l903 < 15; l903 = l903 + 1) {
			fVec608[l903] = 0.0f;
		}
		for (int l904 = 0; l904 < 32; l904 = l904 + 1) {
			fVec609[l904] = 0.0f;
		}
		for (int l905 = 0; l905 < 64; l905 = l905 + 1) {
			fVec610[l905] = 0.0f;
		}
		for (int l906 = 0; l906 < 128; l906 = l906 + 1) {
			fVec611[l906] = 0.0f;
		}
		for (int l907 = 0; l907 < 256; l907 = l907 + 1) {
			fVec612[l907] = 0.0f;
		}
		for (int l908 = 0; l908 < 512; l908 = l908 + 1) {
			fVec613[l908] = 0.0f;
		}
		for (int l909 = 0; l909 < 1024; l909 = l909 + 1) {
			fVec614[l909] = 0.0f;
		}
		for (int l910 = 0; l910 < 2048; l910 = l910 + 1) {
			fVec615[l910] = 0.0f;
		}
		for (int l911 = 0; l911 < 4096; l911 = l911 + 1) {
			fVec616[l911] = 0.0f;
		}
		for (int l912 = 0; l912 < 8192; l912 = l912 + 1) {
			fVec617[l912] = 0.0f;
		}
		for (int l913 = 0; l913 < 16384; l913 = l913 + 1) {
			fVec618[l913] = 0.0f;
		}
		for (int l914 = 0; l914 < 32768; l914 = l914 + 1) {
			fVec619[l914] = 0.0f;
		}
		for (int l915 = 0; l915 < 65536; l915 = l915 + 1) {
			fVec620[l915] = 0.0f;
		}
		for (int l916 = 0; l916 < 131072; l916 = l916 + 1) {
			fVec621[l916] = 0.0f;
		}
		for (int l917 = 0; l917 < 2; l917 = l917 + 1) {
			fRec399[l917] = 0.0f;
		}
		for (int l918 = 0; l918 < 2; l918 = l918 + 1) {
			fVec622[l918] = 0.0f;
		}
		for (int l919 = 0; l919 < 2; l919 = l919 + 1) {
			fVec623[l919] = 0.0f;
		}
		for (int l920 = 0; l920 < 2; l920 = l920 + 1) {
			fRec398[l920] = 0.0f;
		}
		for (int l921 = 0; l921 < 2; l921 = l921 + 1) {
			fRec397[l921] = 0.0f;
		}
		for (int l922 = 0; l922 < 2; l922 = l922 + 1) {
			fVec624[l922] = 0.0f;
		}
		for (int l923 = 0; l923 < 2; l923 = l923 + 1) {
			fRec396[l923] = 0.0f;
		}
		for (int l924 = 0; l924 < 2; l924 = l924 + 1) {
			fRec395[l924] = 0.0f;
		}
		for (int l925 = 0; l925 < 2; l925 = l925 + 1) {
			fVec625[l925] = 0.0f;
		}
		for (int l926 = 0; l926 < 3; l926 = l926 + 1) {
			fVec626[l926] = 0.0f;
		}
		for (int l927 = 0; l927 < 7; l927 = l927 + 1) {
			fVec627[l927] = 0.0f;
		}
		for (int l928 = 0; l928 < 15; l928 = l928 + 1) {
			fVec628[l928] = 0.0f;
		}
		for (int l929 = 0; l929 < 32; l929 = l929 + 1) {
			fVec629[l929] = 0.0f;
		}
		for (int l930 = 0; l930 < 64; l930 = l930 + 1) {
			fVec630[l930] = 0.0f;
		}
		for (int l931 = 0; l931 < 128; l931 = l931 + 1) {
			fVec631[l931] = 0.0f;
		}
		for (int l932 = 0; l932 < 256; l932 = l932 + 1) {
			fVec632[l932] = 0.0f;
		}
		for (int l933 = 0; l933 < 512; l933 = l933 + 1) {
			fVec633[l933] = 0.0f;
		}
		for (int l934 = 0; l934 < 1024; l934 = l934 + 1) {
			fVec634[l934] = 0.0f;
		}
		for (int l935 = 0; l935 < 2048; l935 = l935 + 1) {
			fVec635[l935] = 0.0f;
		}
		for (int l936 = 0; l936 < 4096; l936 = l936 + 1) {
			fVec636[l936] = 0.0f;
		}
		for (int l937 = 0; l937 < 8192; l937 = l937 + 1) {
			fVec637[l937] = 0.0f;
		}
		for (int l938 = 0; l938 < 16384; l938 = l938 + 1) {
			fVec638[l938] = 0.0f;
		}
		for (int l939 = 0; l939 < 32768; l939 = l939 + 1) {
			fVec639[l939] = 0.0f;
		}
		for (int l940 = 0; l940 < 65536; l940 = l940 + 1) {
			fVec640[l940] = 0.0f;
		}
		for (int l941 = 0; l941 < 131072; l941 = l941 + 1) {
			fVec641[l941] = 0.0f;
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
		ui_interface->declare(&fCheckbox1, "4", "");
		ui_interface->addCheckButton("comp", &fCheckbox1);
		ui_interface->closeBox();
		ui_interface->declare(0, "1", "");
		ui_interface->openVerticalBox("Spectral Ballancer");
		ui_interface->openHorizontalBox("Target Spectrum");
		ui_interface->openHorizontalBox("Parameters");
		ui_interface->declare(&fVslider2, "2", "");
		ui_interface->declare(&fVslider2, "symbol", "spectral_ballancer_timbre");
		ui_interface->addVerticalSlider("timbre", &fVslider2, FAUSTFLOAT(0.5f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
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
		ui_interface->addVerticalSlider("PreGain", &fVslider1, FAUSTFLOAT(0.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(2e+01f), FAUSTFLOAT(0.1f));
		ui_interface->declare(&fVbargraph0, "symbol", "input_peak_channel_0");
		ui_interface->addVerticalBargraph("In 0", &fVbargraph0, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph2, "symbol", "input_peak_channel_1");
		ui_interface->addVerticalBargraph("In 1", &fVbargraph2, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->closeBox();
		ui_interface->declare(0, "2", "");
		ui_interface->openHorizontalBox("Leveler");
		ui_interface->declare(&fVbargraph1, "1", "");
		ui_interface->declare(&fVbargraph1, "symbol", "leveler_gain");
		ui_interface->declare(&fVbargraph1, "unit", "dB");
		ui_interface->addVerticalBargraph("gain", &fVbargraph1, FAUSTFLOAT(-5e+01f), FAUSTFLOAT(5e+01f));
		ui_interface->declare(&fVslider0, "3", "");
		ui_interface->declare(&fVslider0, "symbol", "leveler_target");
		ui_interface->declare(&fVslider0, "unit", "dB");
		ui_interface->addVerticalSlider("target", &fVslider0, FAUSTFLOAT(-18.0f), FAUSTFLOAT(-5e+01f), FAUSTFLOAT(-2.0f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->declare(0, "3", "");
		ui_interface->openHorizontalBox("Multiband Conpressor");
		ui_interface->openHorizontalBox("Parameters");
		ui_interface->declare(&fVslider3, "2", "");
		ui_interface->declare(&fVslider3, "symbol", "multiband_compressor_style");
		ui_interface->addVerticalSlider("mb morph", &fVslider3, FAUSTFLOAT(0.5f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
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
		ui_interface->addVerticalBargraph("LimiterGR", &fVbargraph28, FAUSTFLOAT(-6e+01f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph32, "symbol", "lufs_out_meter");
		ui_interface->declare(&fVbargraph32, "unit", "dB");
		ui_interface->addVerticalBargraph("lufs", &fVbargraph32, FAUSTFLOAT(-1.2e+02f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph30, "symbol", "output_peak_channel_0");
		ui_interface->addVerticalBargraph("Out 0", &fVbargraph30, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph31, "symbol", "output_peak_channel_1");
		ui_interface->addVerticalBargraph("Out 1", &fVbargraph31, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
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
		float fSlow1 = float(fVslider0);
		float fSlow2 = fSlow1 + 1e+01f;
		float fSlow3 = fSlow1 + 1e+01f;
		float fSlow4 = fConst2 * std::pow(1e+01f, 0.05f * float(fVslider1));
		float fSlow5 = float(fVslider2);
		float fSlow6 = 2.0f * fSlow5;
		float fSlow7 = 3.0f * fSlow5;
		float fSlow8 = 4.0f * fSlow5;
		float fSlow9 = 5.0f * fSlow5;
		float fSlow10 = 6.0f * fSlow5;
		float fSlow11 = 9.0f * fSlow5;
		float fSlow12 = 13.0f * fSlow5;
		float fSlow13 = fConst2 * float(fCheckbox1);
		float fSlow14 = float(fVslider3);
		float fSlow15 = fSlow14 + 1.0f;
		float fSlow16 = 0.4f * fSlow15;
		float fSlow17 = 4.0f * fSlow14;
		float fSlow18 = fSlow1 + (-2.5f - fSlow17);
		float fSlow19 = fSlow1 + (6.5f - fSlow17);
		float fSlow20 = 0.005f - 0.003f * fSlow14;
		int iSlow21 = std::fabs(fSlow20) < 1.1920929e-07f;
		float fSlow22 = ((iSlow21) ? 0.0f : std::exp(0.0f - fConst300 / ((iSlow21) ? 1.0f : fSlow20)));
		float fSlow23 = 0.05f - 0.04f * fSlow14;
		int iSlow24 = std::fabs(fSlow23) < 1.1920929e-07f;
		float fSlow25 = ((iSlow24) ? 0.0f : std::exp(0.0f - fConst300 / ((iSlow24) ? 1.0f : fSlow23)));
		float fSlow26 = -1.0f - 9.0f * fSlow14;
		float fSlow27 = fSlow1 + -63.0f;
		float fSlow28 = fSlow1 + -57.0f;
		float fSlow29 = 0.4f * fSlow14;
		float fSlow30 = fSlow29 + 0.3f;
		float fSlow31 = 1.0f - fSlow14;
		float fSlow32 = 4.0f * (1.0f - fSlow31);
		float fSlow33 = fSlow1 - fSlow32;
		float fSlow34 = fSlow1 + 4.0f * (fSlow31 + 1.0f);
		float fSlow35 = fSlow1 + 4.0f * fSlow31;
		float fSlow36 = 0.004f * fSlow14;
		float fSlow37 = 0.008f - fSlow36;
		int iSlow38 = std::fabs(fSlow37) < 1.1920929e-07f;
		float fSlow39 = ((iSlow38) ? 0.0f : std::exp(0.0f - fConst300 / ((iSlow38) ? 1.0f : fSlow37)));
		float fSlow40 = fSlow1 + -43.0f;
		float fSlow41 = fSlow1 + -37.0f;
		float fSlow42 = fSlow29 + 0.2f;
		float fSlow43 = fSlow1 + (2.5f - fSlow17);
		float fSlow44 = fSlow1 + (9.5f - fSlow17);
		float fSlow45 = 0.01f - fSlow36;
		int iSlow46 = std::fabs(fSlow45) < 1.1920929e-07f;
		float fSlow47 = ((iSlow46) ? 0.0f : std::exp(0.0f - fConst300 / ((iSlow46) ? 1.0f : fSlow45)));
		float fSlow48 = 0.05f - 0.03f * fSlow14;
		int iSlow49 = std::fabs(fSlow48) < 1.1920929e-07f;
		float fSlow50 = ((iSlow49) ? 0.0f : std::exp(0.0f - fConst300 / ((iSlow49) ? 1.0f : fSlow48)));
		float fSlow51 = 0.3f * fSlow14 + 0.2f;
		float fSlow52 = fSlow1 + (5.0f - fSlow17);
		float fSlow53 = fSlow1 + (11.0f - fSlow17);
		float fSlow54 = 0.012f - fSlow36;
		int iSlow55 = std::fabs(fSlow54) < 1.1920929e-07f;
		float fSlow56 = ((iSlow55) ? 0.0f : std::exp(0.0f - fConst300 / ((iSlow55) ? 1.0f : fSlow54)));
		float fSlow57 = 0.05f - 0.02f * fSlow14;
		int iSlow58 = std::fabs(fSlow57) < 1.1920929e-07f;
		float fSlow59 = ((iSlow58) ? 0.0f : std::exp(0.0f - fConst300 / ((iSlow58) ? 1.0f : fSlow57)));
		float fSlow60 = fSlow1 + -33.0f;
		float fSlow61 = fSlow1 + -27.0f;
		float fSlow62 = 0.2f * fSlow15;
		float fSlow63 = 3.0f * fSlow14;
		float fSlow64 = fSlow1 + (-1.0f - fSlow63);
		float fSlow65 = fSlow1 + (5.0f - fSlow63);
		float fSlow66 = 0.015f - 0.005f * fSlow14;
		int iSlow67 = std::fabs(fSlow66) < 1.1920929e-07f;
		float fSlow68 = ((iSlow67) ? 0.0f : std::exp(0.0f - fConst300 / ((iSlow67) ? 1.0f : fSlow66)));
		fVbargraph29 = FAUSTFLOAT(0.11f);
		for (int i0 = 0; i0 < count; i0 = i0 + 1) {
			float fTemp0 = float(input0[i0]);
			fRec1[0] = std::max<float>(fRec1[1] - fConst1, std::min<float>(1e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(0.00031622776f, std::fabs(fTemp0))))));
			fVbargraph0 = FAUSTFLOAT(fRec1[0]);
			float fTemp1 = fTemp0;
			fRec2[0] = fSlow0 + fConst3 * fRec2[1];
			float fTemp2 = std::fabs(std::fabs(fRec7[1]) + std::fabs(fRec8[1]));
			fVec0[0] = fTemp2;
			float fTemp3 = std::max<float>(fTemp2, fVec0[1]);
			fVec1[0] = fTemp3;
			float fTemp4 = std::max<float>(fTemp3, fVec1[2]);
			fVec2[0] = fTemp4;
			float fTemp5 = std::max<float>(fTemp4, fVec2[4]);
			fVec3[0] = fTemp5;
			fVec4[IOTA0 & 31] = std::max<float>(fTemp5, fVec3[8]);
			float fTemp6 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst8) ? fTemp2 : -3.4028235e+38f), ((iConst9) ? fVec1[iConst8] : -3.4028235e+38f)), ((iConst10) ? fVec2[iConst11] : -3.4028235e+38f)), ((iConst12) ? fVec3[iConst13] : -3.4028235e+38f)), ((iConst14) ? fVec4[(IOTA0 - iConst15) & 31] : -3.4028235e+38f))));
			int iTemp7 = (fTemp6 > fSlow2) + (fTemp6 > fSlow3);
			float fTemp8 = std::max<float>(-3.4028235e+38f, ((iTemp7 == 0) ? fTemp6 + -1e+01f - fSlow1 : ((iTemp7 == 1) ? 0.0f - 4194304.0f * mydsp_faustpower2_f(fTemp6 + -1e+01f - fSlow1) : 0.0f)));
			float fTemp9 = ((fTemp8 > fRec17[1]) ? 0.0f : fConst16);
			fRec17[0] = fTemp8 * (1.0f - fTemp9) + fRec17[1] * fTemp9;
			float fTemp10 = std::min<float>(1.0f, std::max<float>(0.0f, std::pow(1e+01f, 0.05f * fRec17[0])));
			float fTemp11 = std::tan(fConst6 * std::min<float>(fConst7, fTemp10 * (fConst17 * std::fabs(fRec10[1]) + 0.1316f)));
			fVec5[0] = 0.0f - fConst30 * (fConst31 * fRec20[1] - fConst33 * fRec7[2]);
			fRec21[0] = fVec5[1] + fConst30 * (fConst34 * fRec7[1] - 2.0f * (fConst35 * fRec21[1] - fConst36 * fRec7[2]));
			fRec20[0] = fRec21[0];
			fVec6[0] = 0.50032705f * fRec20[1] - fConst38 * fRec18[1];
			fRec19[0] = fConst26 * fRec20[1] + fConst37 * (fVec6[1] - fConst39 * fRec19[1] + 0.50032705f * fRec20[0]);
			fRec18[0] = fRec19[0];
			float fTemp12 = mydsp_faustpower2_f(fRec18[0]);
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
			fVec18[0] = 0.0f - fConst30 * (fConst31 * fRec24[1] - fConst33 * fRec8[2]);
			fRec25[0] = fVec18[1] + fConst30 * (fConst34 * fRec8[1] - 2.0f * (fConst35 * fRec25[1] - fConst36 * fRec8[2]));
			fRec24[0] = fRec25[0];
			fVec19[0] = 0.50032705f * fRec24[1] - fConst38 * fRec22[1];
			fRec23[0] = fConst26 * fRec24[1] + fConst37 * (fVec19[1] - fConst39 * fRec23[1] + 0.50032705f * fRec24[0]);
			fRec22[0] = fRec23[0];
			float fTemp22 = mydsp_faustpower2_f(fRec22[0]);
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
			float fTemp32 = fTemp11 + 2.0f;
			float fTemp33 = fSlow1 + fRec9[1] + (0.691f - (4.3429446f * std::log(std::max<float>(1e-12f, fConst20 * (((iConst21) ? 0.86000985f * fVec17[(IOTA0 - iConst58) & 2047] : 0.0f) + ((iConst57) ? 0.86000985f * fVec16[(IOTA0 - iConst56) & 1023] : 0.0f) + ((iConst55) ? 0.86000985f * fVec15[(IOTA0 - iConst54) & 511] : 0.0f) + ((iConst53) ? 0.86000985f * fVec14[(IOTA0 - iConst52) & 255] : 0.0f) + ((iConst51) ? 0.86000985f * fVec13[(IOTA0 - iConst50) & 127] : 0.0f) + ((iConst49) ? 0.86000985f * fVec12[(IOTA0 - iConst48) & 63] : 0.0f) + ((iConst47) ? 0.86000985f * fVec11[(IOTA0 - iConst46) & 31] : 0.0f) + ((iConst45) ? 0.86000985f * fVec10[iConst44] : 0.0f) + ((iConst43) ? 0.86000985f * fVec9[iConst42] : 0.0f) + ((iConst40) ? 0.86000985f * fTemp12 : 0.0f) + ((iConst41) ? 0.86000985f * fVec8[iConst40] : 0.0f) + ((iConst21) ? 0.86000985f * fVec30[(IOTA0 - iConst58) & 2047] : 0.0f) + ((iConst57) ? 0.86000985f * fVec29[(IOTA0 - iConst56) & 1023] : 0.0f) + ((iConst55) ? 0.86000985f * fVec28[(IOTA0 - iConst54) & 511] : 0.0f) + ((iConst53) ? 0.86000985f * fVec27[(IOTA0 - iConst52) & 255] : 0.0f) + ((iConst51) ? 0.86000985f * fVec26[(IOTA0 - iConst50) & 127] : 0.0f) + ((iConst49) ? 0.86000985f * fVec25[(IOTA0 - iConst48) & 63] : 0.0f) + ((iConst47) ? 0.86000985f * fVec24[(IOTA0 - iConst46) & 31] : 0.0f) + ((iConst45) ? 0.86000985f * fVec23[iConst44] : 0.0f) + ((iConst43) ? 0.86000985f * fVec22[iConst42] : 0.0f) + ((iConst40) ? 0.86000985f * fTemp22 : 0.0f) + ((iConst41) ? 0.86000985f * fVec21[iConst40] : 0.0f)))) + fRec12[1] * fTemp32 + fRec13[1]));
			float fTemp34 = fTemp11 * fTemp32 + 1.0f;
			float fTemp35 = fTemp11 * fTemp33 / fTemp34;
			fRec12[0] = fRec12[1] + 2.0f * fTemp35;
			float fTemp36 = fRec12[1] + fTemp35;
			float fTemp37 = fTemp11 * fTemp36;
			fRec13[0] = fRec13[1] + 2.0f * fTemp37;
			float fRec14 = fTemp36;
			float fRec15 = fTemp33 / fTemp34;
			float fRec16 = fRec13[1] + fTemp37;
			fRec10[0] = fRec14;
			float fRec11 = fRec16;
			fVbargraph1 = FAUSTFLOAT(std::max<float>(-3e+01f, std::min<float>(3e+01f, fRec11)));
			fRec9[0] = fVbargraph1;
			float fTemp38 = std::pow(1e+01f, 0.05f * fRec9[0]);
			fRec26[0] = fConst3 * fRec26[1];
			fRec27[0] = fSlow4 + fConst3 * fRec27[1];
			float fTemp39 = fTemp1 * fRec27[0];
			float fTemp40 = 1.0f - fRec26[0];
			fRec29[0] = fTemp39 - fConst64 * (fConst67 * fRec29[2] + fConst68 * fRec29[1]);
			fRec28[0] = fConst64 * (fConst66 * fRec29[0] + fConst69 * fRec29[1] + fConst66 * fRec29[2]) - fConst61 * (fConst70 * fRec28[2] + fConst71 * fRec28[1]);
			float fTemp41 = fRec28[2] + fRec28[0] + 2.0f * fRec28[1];
			float fTemp42 = fRec27[0] * fRec26[0];
			float fTemp43 = float(input1[i0]);
			fRec35[0] = std::max<float>(fRec35[1] - fConst1, std::min<float>(1e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(0.00031622776f, std::fabs(fTemp43))))));
			fVbargraph2 = FAUSTFLOAT(fRec35[0]);
			float fTemp44 = fTemp43;
			fRec37[0] = fRec27[0] * fTemp44 - fConst64 * (fConst67 * fRec37[2] + fConst68 * fRec37[1]);
			fRec36[0] = fConst64 * (fConst66 * fRec37[0] + fConst69 * fRec37[1] + fConst66 * fRec37[2]) - fConst61 * (fConst70 * fRec36[2] + fConst71 * fRec36[1]);
			float fTemp45 = fRec36[2] + fRec36[0] + 2.0f * fRec36[1];
			float fTemp46 = fTemp42 * (fTemp1 + fTemp44) + fConst61 * fTemp40 * (fTemp41 + fTemp45);
			fVec31[0] = fTemp46;
			float fTemp47 = 0.5f * fTemp46;
			fRec34[0] = fTemp47 - fConst78 * (fConst79 * fRec34[2] + fConst68 * fRec34[1]);
			float fTemp48 = fConst77 * fRec34[0] + fConst80 * fRec34[2];
			fVec32[IOTA0 & 32767] = fTemp48;
			float fTemp49 = fVec32[(IOTA0 - 1) & 32767];
			fVec33[0] = fConst75 * fTemp49 - fConst31 * fRec32[1];
			fRec33[0] = fConst30 * (fVec33[1] - fConst81 * fRec33[1] + fConst82 * fTemp49 + fConst83 * fTemp48);
			fRec32[0] = fRec33[0];
			fVec34[0] = 0.50032705f * fRec32[1] - fConst38 * fRec30[1];
			fRec31[0] = fConst26 * fRec32[1] + fConst37 * (fVec34[1] - fConst39 * fRec31[1] + 0.50032705f * fRec32[0]);
			fRec30[0] = fRec31[0];
			float fTemp50 = mydsp_faustpower2_f(fRec30[0]);
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
			fVec53[0] = fConst117 * fVec31[1] - fConst31 * fRec40[1];
			fRec41[0] = fConst30 * (fVec53[1] - fConst81 * fRec41[1] + fConst36 * fVec31[1] + fConst118 * fTemp46);
			fRec40[0] = fRec41[0];
			fVec54[0] = 0.50032705f * fRec40[1] - fConst38 * fRec38[1];
			fRec39[0] = fConst26 * fRec40[1] + fConst37 * (fVec54[1] - fConst39 * fRec39[1] + 0.50032705f * fRec40[0]);
			fRec38[0] = fRec39[0];
			float fTemp67 = mydsp_faustpower2_f(fRec38[0]);
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
			float fTemp84 = std::log(std::max<float>(1e-12f, fConst73 * (((iConst74) ? 0.86000985f * fVec72[(IOTA0 - iConst116) & 262143] : 0.0f) + ((iConst115) ? 0.86000985f * fVec71[(IOTA0 - iConst114) & 131071] : 0.0f) + ((iConst113) ? 0.86000985f * fVec70[(IOTA0 - iConst112) & 65535] : 0.0f) + ((iConst111) ? 0.86000985f * fVec69[(IOTA0 - iConst110) & 32767] : 0.0f) + ((iConst109) ? 0.86000985f * fVec68[(IOTA0 - iConst108) & 16383] : 0.0f) + ((iConst107) ? 0.86000985f * fVec67[(IOTA0 - iConst106) & 8191] : 0.0f) + ((iConst105) ? 0.86000985f * fVec66[(IOTA0 - iConst104) & 4095] : 0.0f) + ((iConst103) ? 0.86000985f * fVec65[(IOTA0 - iConst102) & 2047] : 0.0f) + ((iConst101) ? 0.86000985f * fVec64[(IOTA0 - iConst100) & 1023] : 0.0f) + ((iConst99) ? 0.86000985f * fVec63[(IOTA0 - iConst98) & 511] : 0.0f) + ((iConst97) ? 0.86000985f * fVec62[(IOTA0 - iConst96) & 255] : 0.0f) + ((iConst95) ? 0.86000985f * fVec61[(IOTA0 - iConst94) & 127] : 0.0f) + ((iConst93) ? 0.86000985f * fVec60[(IOTA0 - iConst92) & 63] : 0.0f) + ((iConst91) ? 0.86000985f * fVec59[(IOTA0 - iConst90) & 31] : 0.0f) + ((iConst89) ? 0.86000985f * fVec58[iConst88] : 0.0f) + ((iConst87) ? 0.86000985f * fVec57[iConst86] : 0.0f) + ((iConst84) ? 0.86000985f * fTemp67 : 0.0f) + ((iConst85) ? 0.86000985f * fVec56[iConst84] : 0.0f))));
			float fTemp85 = std::fabs(fTemp47);
			fVec73[0] = fTemp85;
			float fTemp86 = std::max<float>(fTemp85, fVec73[1]);
			fVec74[0] = fTemp86;
			float fTemp87 = std::max<float>(fTemp86, fVec74[2]);
			fVec75[0] = fTemp87;
			float fTemp88 = std::max<float>(fTemp87, fVec75[4]);
			fVec76[0] = fTemp88;
			float fTemp89 = std::max<float>(fTemp88, fVec76[8]);
			fVec77[IOTA0 & 31] = fTemp89;
			float fTemp90 = std::max<float>(fTemp89, fVec77[(IOTA0 - 16) & 31]);
			fVec78[IOTA0 & 63] = fTemp90;
			float fTemp91 = std::max<float>(fTemp90, fVec78[(IOTA0 - 32) & 63]);
			fVec79[IOTA0 & 127] = fTemp91;
			fVec80[IOTA0 & 255] = std::max<float>(fTemp91, fVec79[(IOTA0 - 64) & 127]);
			float fTemp92 = std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst119) ? fTemp85 : -3.4028235e+38f), ((iConst120) ? fVec74[iConst119] : -3.4028235e+38f)), ((iConst121) ? fVec75[iConst122] : -3.4028235e+38f)), ((iConst123) ? fVec76[iConst124] : -3.4028235e+38f)), ((iConst125) ? fVec77[(IOTA0 - iConst126) & 31] : -3.4028235e+38f)), ((iConst127) ? fVec78[(IOTA0 - iConst128) & 63] : -3.4028235e+38f)), ((iConst129) ? fVec79[(IOTA0 - iConst130) & 127] : -3.4028235e+38f)), ((iConst131) ? fVec80[(IOTA0 - iConst132) & 255] : -3.4028235e+38f))));
			float fTemp93 = 2e+01f * fTemp92;
			int iTemp94 = (fTemp93 > -2e+01f) + (fTemp93 > -2e+01f);
			float fTemp95 = 2e+01f * (fTemp92 + 1.0f);
			float fTemp96 = std::max<float>(-3.4028235e+38f, 0.8f * ((iTemp94 == 0) ? fTemp95 : ((iTemp94 == 1) ? 0.0f - 4194304.0f * mydsp_faustpower2_f(fTemp95 + -5.9604645e-08f) : 0.0f)));
			float fTemp97 = ((fTemp96 > fRec42[1]) ? fConst134 : fConst133);
			fRec42[0] = fTemp96 * (1.0f - fTemp97) + fRec42[1] * fTemp97;
			float fTemp98 = std::min<float>(1.0f, std::max<float>(0.0f, std::pow(1e+01f, 0.05f * fRec42[0])));
			float fTemp99 = fTemp98;
			float fTemp100 = (-22.0f - 4.3429446f * (std::log(std::max<float>(1e-12f, fConst73 * (((iConst74) ? 0.86000985f * fVec52[(IOTA0 - iConst116) & 262143] : 0.0f) + ((iConst115) ? 0.86000985f * fVec51[(IOTA0 - iConst114) & 131071] : 0.0f) + ((iConst113) ? 0.86000985f * fVec50[(IOTA0 - iConst112) & 65535] : 0.0f) + ((iConst111) ? 0.86000985f * fVec49[(IOTA0 - iConst110) & 32767] : 0.0f) + ((iConst109) ? 0.86000985f * fVec48[(IOTA0 - iConst108) & 16383] : 0.0f) + ((iConst107) ? 0.86000985f * fVec47[(IOTA0 - iConst106) & 8191] : 0.0f) + ((iConst105) ? 0.86000985f * fVec46[(IOTA0 - iConst104) & 4095] : 0.0f) + ((iConst103) ? 0.86000985f * fVec45[(IOTA0 - iConst102) & 2047] : 0.0f) + ((iConst101) ? 0.86000985f * fVec44[(IOTA0 - iConst100) & 1023] : 0.0f) + ((iConst99) ? 0.86000985f * fVec43[(IOTA0 - iConst98) & 511] : 0.0f) + ((iConst97) ? 0.86000985f * fVec42[(IOTA0 - iConst96) & 255] : 0.0f) + ((iConst95) ? 0.86000985f * fVec41[(IOTA0 - iConst94) & 127] : 0.0f) + ((iConst93) ? 0.86000985f * fVec40[(IOTA0 - iConst92) & 63] : 0.0f) + ((iConst91) ? 0.86000985f * fVec39[(IOTA0 - iConst90) & 31] : 0.0f) + ((iConst89) ? 0.86000985f * fVec38[iConst88] : 0.0f) + ((iConst87) ? 0.86000985f * fVec37[iConst86] : 0.0f) + ((iConst84) ? 0.86000985f * fTemp50 : 0.0f) + ((iConst85) ? 0.86000985f * fVec36[iConst84] : 0.0f)))) - fTemp84) - fSlow6) * fTemp99;
			fVbargraph3 = FAUSTFLOAT(fTemp100);
			fRec47[0] = fTemp47 - fConst140 * (fConst141 * fRec47[2] + fConst142 * fRec47[1]);
			float fTemp101 = fConst139 * fRec47[0] + fConst143 * fRec47[2];
			fVec81[IOTA0 & 32767] = fTemp101;
			float fTemp102 = fVec81[(IOTA0 - 1) & 32767];
			fVec82[0] = fConst75 * fTemp102 - fConst31 * fRec45[1];
			fRec46[0] = fConst30 * (fVec82[1] - fConst81 * fRec46[1] + fConst82 * fTemp102 + fConst83 * fTemp101);
			fRec45[0] = fRec46[0];
			fVec83[0] = 0.50032705f * fRec45[1] - fConst38 * fRec43[1];
			fRec44[0] = fConst26 * fRec45[1] + fConst37 * (fVec83[1] - fConst39 * fRec44[1] + 0.50032705f * fRec45[0]);
			fRec43[0] = fRec44[0];
			float fTemp103 = mydsp_faustpower2_f(fRec43[0]);
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
			float fTemp120 = fTemp99 * (4.3429446f * (fTemp84 - std::log(std::max<float>(1e-12f, fConst73 * (((iConst74) ? 0.86000985f * fVec101[(IOTA0 - iConst116) & 262143] : 0.0f) + ((iConst115) ? 0.86000985f * fVec100[(IOTA0 - iConst114) & 131071] : 0.0f) + ((iConst113) ? 0.86000985f * fVec99[(IOTA0 - iConst112) & 65535] : 0.0f) + ((iConst111) ? 0.86000985f * fVec98[(IOTA0 - iConst110) & 32767] : 0.0f) + ((iConst109) ? 0.86000985f * fVec97[(IOTA0 - iConst108) & 16383] : 0.0f) + ((iConst107) ? 0.86000985f * fVec96[(IOTA0 - iConst106) & 8191] : 0.0f) + ((iConst105) ? 0.86000985f * fVec95[(IOTA0 - iConst104) & 4095] : 0.0f) + ((iConst103) ? 0.86000985f * fVec94[(IOTA0 - iConst102) & 2047] : 0.0f) + ((iConst101) ? 0.86000985f * fVec93[(IOTA0 - iConst100) & 1023] : 0.0f) + ((iConst99) ? 0.86000985f * fVec92[(IOTA0 - iConst98) & 511] : 0.0f) + ((iConst97) ? 0.86000985f * fVec91[(IOTA0 - iConst96) & 255] : 0.0f) + ((iConst95) ? 0.86000985f * fVec90[(IOTA0 - iConst94) & 127] : 0.0f) + ((iConst93) ? 0.86000985f * fVec89[(IOTA0 - iConst92) & 63] : 0.0f) + ((iConst91) ? 0.86000985f * fVec88[(IOTA0 - iConst90) & 31] : 0.0f) + ((iConst89) ? 0.86000985f * fVec87[iConst88] : 0.0f) + ((iConst87) ? 0.86000985f * fVec86[iConst86] : 0.0f) + ((iConst84) ? 0.86000985f * fTemp103 : 0.0f) + ((iConst85) ? 0.86000985f * fVec85[iConst84] : 0.0f))))) + -19.0f - fSlow7);
			fVbargraph4 = FAUSTFLOAT(fTemp120);
			fRec52[0] = fTemp47 - fConst148 * (fConst149 * fRec52[2] + fConst150 * fRec52[1]);
			float fTemp121 = fConst147 * fRec52[0] + fConst151 * fRec52[2];
			fVec102[IOTA0 & 32767] = fTemp121;
			float fTemp122 = fVec102[(IOTA0 - 1) & 32767];
			fVec103[0] = fConst75 * fTemp122 - fConst31 * fRec50[1];
			fRec51[0] = fConst30 * (fVec103[1] - fConst81 * fRec51[1] + fConst82 * fTemp122 + fConst83 * fTemp121);
			fRec50[0] = fRec51[0];
			fVec104[0] = 0.50032705f * fRec50[1] - fConst38 * fRec48[1];
			fRec49[0] = fConst26 * fRec50[1] + fConst37 * (fVec104[1] - fConst39 * fRec49[1] + 0.50032705f * fRec50[0]);
			fRec48[0] = fRec49[0];
			float fTemp123 = mydsp_faustpower2_f(fRec48[0]);
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
			float fTemp140 = fTemp99 * (4.3429446f * (fTemp84 - std::log(std::max<float>(1e-12f, fConst73 * (((iConst74) ? 0.86000985f * fVec122[(IOTA0 - iConst116) & 262143] : 0.0f) + ((iConst115) ? 0.86000985f * fVec121[(IOTA0 - iConst114) & 131071] : 0.0f) + ((iConst113) ? 0.86000985f * fVec120[(IOTA0 - iConst112) & 65535] : 0.0f) + ((iConst111) ? 0.86000985f * fVec119[(IOTA0 - iConst110) & 32767] : 0.0f) + ((iConst109) ? 0.86000985f * fVec118[(IOTA0 - iConst108) & 16383] : 0.0f) + ((iConst107) ? 0.86000985f * fVec117[(IOTA0 - iConst106) & 8191] : 0.0f) + ((iConst105) ? 0.86000985f * fVec116[(IOTA0 - iConst104) & 4095] : 0.0f) + ((iConst103) ? 0.86000985f * fVec115[(IOTA0 - iConst102) & 2047] : 0.0f) + ((iConst101) ? 0.86000985f * fVec114[(IOTA0 - iConst100) & 1023] : 0.0f) + ((iConst99) ? 0.86000985f * fVec113[(IOTA0 - iConst98) & 511] : 0.0f) + ((iConst97) ? 0.86000985f * fVec112[(IOTA0 - iConst96) & 255] : 0.0f) + ((iConst95) ? 0.86000985f * fVec111[(IOTA0 - iConst94) & 127] : 0.0f) + ((iConst93) ? 0.86000985f * fVec110[(IOTA0 - iConst92) & 63] : 0.0f) + ((iConst91) ? 0.86000985f * fVec109[(IOTA0 - iConst90) & 31] : 0.0f) + ((iConst89) ? 0.86000985f * fVec108[iConst88] : 0.0f) + ((iConst87) ? 0.86000985f * fVec107[iConst86] : 0.0f) + ((iConst84) ? 0.86000985f * fTemp123 : 0.0f) + ((iConst85) ? 0.86000985f * fVec106[iConst84] : 0.0f))))) + -18.0f - fSlow6);
			fVbargraph5 = FAUSTFLOAT(fTemp140);
			fRec57[0] = fTemp47 - fConst156 * (fConst157 * fRec57[2] + fConst158 * fRec57[1]);
			float fTemp141 = fConst155 * fRec57[0] + fConst159 * fRec57[2];
			fVec123[IOTA0 & 32767] = fTemp141;
			float fTemp142 = fVec123[(IOTA0 - 1) & 32767];
			fVec124[0] = fConst75 * fTemp142 - fConst31 * fRec55[1];
			fRec56[0] = fConst30 * (fVec124[1] - fConst81 * fRec56[1] + fConst82 * fTemp142 + fConst83 * fTemp141);
			fRec55[0] = fRec56[0];
			fVec125[0] = 0.50032705f * fRec55[1] - fConst38 * fRec53[1];
			fRec54[0] = fConst26 * fRec55[1] + fConst37 * (fVec125[1] - fConst39 * fRec54[1] + 0.50032705f * fRec55[0]);
			fRec53[0] = fRec54[0];
			float fTemp143 = mydsp_faustpower2_f(fRec53[0]);
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
			float fTemp160 = fTemp99 * (4.3429446f * (fTemp84 - std::log(std::max<float>(1e-12f, fConst73 * (((iConst74) ? 0.86000985f * fVec143[(IOTA0 - iConst116) & 262143] : 0.0f) + ((iConst115) ? 0.86000985f * fVec142[(IOTA0 - iConst114) & 131071] : 0.0f) + ((iConst113) ? 0.86000985f * fVec141[(IOTA0 - iConst112) & 65535] : 0.0f) + ((iConst111) ? 0.86000985f * fVec140[(IOTA0 - iConst110) & 32767] : 0.0f) + ((iConst109) ? 0.86000985f * fVec139[(IOTA0 - iConst108) & 16383] : 0.0f) + ((iConst107) ? 0.86000985f * fVec138[(IOTA0 - iConst106) & 8191] : 0.0f) + ((iConst105) ? 0.86000985f * fVec137[(IOTA0 - iConst104) & 4095] : 0.0f) + ((iConst103) ? 0.86000985f * fVec136[(IOTA0 - iConst102) & 2047] : 0.0f) + ((iConst101) ? 0.86000985f * fVec135[(IOTA0 - iConst100) & 1023] : 0.0f) + ((iConst99) ? 0.86000985f * fVec134[(IOTA0 - iConst98) & 511] : 0.0f) + ((iConst97) ? 0.86000985f * fVec133[(IOTA0 - iConst96) & 255] : 0.0f) + ((iConst95) ? 0.86000985f * fVec132[(IOTA0 - iConst94) & 127] : 0.0f) + ((iConst93) ? 0.86000985f * fVec131[(IOTA0 - iConst92) & 63] : 0.0f) + ((iConst91) ? 0.86000985f * fVec130[(IOTA0 - iConst90) & 31] : 0.0f) + ((iConst89) ? 0.86000985f * fVec129[iConst88] : 0.0f) + ((iConst87) ? 0.86000985f * fVec128[iConst86] : 0.0f) + ((iConst84) ? 0.86000985f * fTemp143 : 0.0f) + ((iConst85) ? 0.86000985f * fVec127[iConst84] : 0.0f))))) + -16.0f - fSlow7);
			fVbargraph6 = FAUSTFLOAT(fTemp160);
			fRec62[0] = fTemp47 - fConst164 * (fConst165 * fRec62[2] + fConst166 * fRec62[1]);
			float fTemp161 = fConst163 * fRec62[0] + fConst167 * fRec62[2];
			fVec144[IOTA0 & 32767] = fTemp161;
			float fTemp162 = fVec144[(IOTA0 - 1) & 32767];
			fVec145[0] = fConst75 * fTemp162 - fConst31 * fRec60[1];
			fRec61[0] = fConst30 * (fVec145[1] - fConst81 * fRec61[1] + fConst82 * fTemp162 + fConst83 * fTemp161);
			fRec60[0] = fRec61[0];
			fVec146[0] = 0.50032705f * fRec60[1] - fConst38 * fRec58[1];
			fRec59[0] = fConst26 * fRec60[1] + fConst37 * (fVec146[1] - fConst39 * fRec59[1] + 0.50032705f * fRec60[0]);
			fRec58[0] = fRec59[0];
			float fTemp163 = mydsp_faustpower2_f(fRec58[0]);
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
			float fTemp180 = fTemp99 * (4.3429446f * (fTemp84 - std::log(std::max<float>(1e-12f, fConst73 * (((iConst74) ? 0.86000985f * fVec164[(IOTA0 - iConst116) & 262143] : 0.0f) + ((iConst115) ? 0.86000985f * fVec163[(IOTA0 - iConst114) & 131071] : 0.0f) + ((iConst113) ? 0.86000985f * fVec162[(IOTA0 - iConst112) & 65535] : 0.0f) + ((iConst111) ? 0.86000985f * fVec161[(IOTA0 - iConst110) & 32767] : 0.0f) + ((iConst109) ? 0.86000985f * fVec160[(IOTA0 - iConst108) & 16383] : 0.0f) + ((iConst107) ? 0.86000985f * fVec159[(IOTA0 - iConst106) & 8191] : 0.0f) + ((iConst105) ? 0.86000985f * fVec158[(IOTA0 - iConst104) & 4095] : 0.0f) + ((iConst103) ? 0.86000985f * fVec157[(IOTA0 - iConst102) & 2047] : 0.0f) + ((iConst101) ? 0.86000985f * fVec156[(IOTA0 - iConst100) & 1023] : 0.0f) + ((iConst99) ? 0.86000985f * fVec155[(IOTA0 - iConst98) & 511] : 0.0f) + ((iConst97) ? 0.86000985f * fVec154[(IOTA0 - iConst96) & 255] : 0.0f) + ((iConst95) ? 0.86000985f * fVec153[(IOTA0 - iConst94) & 127] : 0.0f) + ((iConst93) ? 0.86000985f * fVec152[(IOTA0 - iConst92) & 63] : 0.0f) + ((iConst91) ? 0.86000985f * fVec151[(IOTA0 - iConst90) & 31] : 0.0f) + ((iConst89) ? 0.86000985f * fVec150[iConst88] : 0.0f) + ((iConst87) ? 0.86000985f * fVec149[iConst86] : 0.0f) + ((iConst84) ? 0.86000985f * fTemp163 : 0.0f) + ((iConst85) ? 0.86000985f * fVec148[iConst84] : 0.0f))))) + -17.0f - fSlow5);
			fVbargraph7 = FAUSTFLOAT(fTemp180);
			fRec67[0] = fTemp47 - fConst172 * (fConst173 * fRec67[2] + fConst174 * fRec67[1]);
			float fTemp181 = fConst171 * fRec67[0] + fConst175 * fRec67[2];
			fVec165[IOTA0 & 32767] = fTemp181;
			float fTemp182 = fVec165[(IOTA0 - 1) & 32767];
			fVec166[0] = fConst75 * fTemp182 - fConst31 * fRec65[1];
			fRec66[0] = fConst30 * (fVec166[1] - fConst81 * fRec66[1] + fConst82 * fTemp182 + fConst83 * fTemp181);
			fRec65[0] = fRec66[0];
			fVec167[0] = 0.50032705f * fRec65[1] - fConst38 * fRec63[1];
			fRec64[0] = fConst26 * fRec65[1] + fConst37 * (fVec167[1] - fConst39 * fRec64[1] + 0.50032705f * fRec65[0]);
			fRec63[0] = fRec64[0];
			float fTemp183 = mydsp_faustpower2_f(fRec63[0]);
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
			float fTemp200 = fTemp99 * (4.3429446f * (fTemp84 - std::log(std::max<float>(1e-12f, fConst73 * (((iConst74) ? 0.86000985f * fVec185[(IOTA0 - iConst116) & 262143] : 0.0f) + ((iConst115) ? 0.86000985f * fVec184[(IOTA0 - iConst114) & 131071] : 0.0f) + ((iConst113) ? 0.86000985f * fVec183[(IOTA0 - iConst112) & 65535] : 0.0f) + ((iConst111) ? 0.86000985f * fVec182[(IOTA0 - iConst110) & 32767] : 0.0f) + ((iConst109) ? 0.86000985f * fVec181[(IOTA0 - iConst108) & 16383] : 0.0f) + ((iConst107) ? 0.86000985f * fVec180[(IOTA0 - iConst106) & 8191] : 0.0f) + ((iConst105) ? 0.86000985f * fVec179[(IOTA0 - iConst104) & 4095] : 0.0f) + ((iConst103) ? 0.86000985f * fVec178[(IOTA0 - iConst102) & 2047] : 0.0f) + ((iConst101) ? 0.86000985f * fVec177[(IOTA0 - iConst100) & 1023] : 0.0f) + ((iConst99) ? 0.86000985f * fVec176[(IOTA0 - iConst98) & 511] : 0.0f) + ((iConst97) ? 0.86000985f * fVec175[(IOTA0 - iConst96) & 255] : 0.0f) + ((iConst95) ? 0.86000985f * fVec174[(IOTA0 - iConst94) & 127] : 0.0f) + ((iConst93) ? 0.86000985f * fVec173[(IOTA0 - iConst92) & 63] : 0.0f) + ((iConst91) ? 0.86000985f * fVec172[(IOTA0 - iConst90) & 31] : 0.0f) + ((iConst89) ? 0.86000985f * fVec171[iConst88] : 0.0f) + ((iConst87) ? 0.86000985f * fVec170[iConst86] : 0.0f) + ((iConst84) ? 0.86000985f * fTemp183 : 0.0f) + ((iConst85) ? 0.86000985f * fVec169[iConst84] : 0.0f))))) + -18.0f);
			fVbargraph8 = FAUSTFLOAT(fTemp200);
			fRec72[0] = fTemp47 - fConst180 * (fConst181 * fRec72[2] + fConst182 * fRec72[1]);
			float fTemp201 = fConst179 * fRec72[0] + fConst183 * fRec72[2];
			fVec186[IOTA0 & 32767] = fTemp201;
			float fTemp202 = fVec186[(IOTA0 - 1) & 32767];
			fVec187[0] = fConst75 * fTemp202 - fConst31 * fRec70[1];
			fRec71[0] = fConst30 * (fVec187[1] - fConst81 * fRec71[1] + fConst82 * fTemp202 + fConst83 * fTemp201);
			fRec70[0] = fRec71[0];
			fVec188[0] = 0.50032705f * fRec70[1] - fConst38 * fRec68[1];
			fRec69[0] = fConst26 * fRec70[1] + fConst37 * (fVec188[1] - fConst39 * fRec69[1] + 0.50032705f * fRec70[0]);
			fRec68[0] = fRec69[0];
			float fTemp203 = mydsp_faustpower2_f(fRec68[0]);
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
			float fTemp220 = fTemp99 * (4.3429446f * (fTemp84 - std::log(std::max<float>(1e-12f, fConst73 * (((iConst74) ? 0.86000985f * fVec206[(IOTA0 - iConst116) & 262143] : 0.0f) + ((iConst115) ? 0.86000985f * fVec205[(IOTA0 - iConst114) & 131071] : 0.0f) + ((iConst113) ? 0.86000985f * fVec204[(IOTA0 - iConst112) & 65535] : 0.0f) + ((iConst111) ? 0.86000985f * fVec203[(IOTA0 - iConst110) & 32767] : 0.0f) + ((iConst109) ? 0.86000985f * fVec202[(IOTA0 - iConst108) & 16383] : 0.0f) + ((iConst107) ? 0.86000985f * fVec201[(IOTA0 - iConst106) & 8191] : 0.0f) + ((iConst105) ? 0.86000985f * fVec200[(IOTA0 - iConst104) & 4095] : 0.0f) + ((iConst103) ? 0.86000985f * fVec199[(IOTA0 - iConst102) & 2047] : 0.0f) + ((iConst101) ? 0.86000985f * fVec198[(IOTA0 - iConst100) & 1023] : 0.0f) + ((iConst99) ? 0.86000985f * fVec197[(IOTA0 - iConst98) & 511] : 0.0f) + ((iConst97) ? 0.86000985f * fVec196[(IOTA0 - iConst96) & 255] : 0.0f) + ((iConst95) ? 0.86000985f * fVec195[(IOTA0 - iConst94) & 127] : 0.0f) + ((iConst93) ? 0.86000985f * fVec194[(IOTA0 - iConst92) & 63] : 0.0f) + ((iConst91) ? 0.86000985f * fVec193[(IOTA0 - iConst90) & 31] : 0.0f) + ((iConst89) ? 0.86000985f * fVec192[iConst88] : 0.0f) + ((iConst87) ? 0.86000985f * fVec191[iConst86] : 0.0f) + ((iConst84) ? 0.86000985f * fTemp203 : 0.0f) + ((iConst85) ? 0.86000985f * fVec190[iConst84] : 0.0f))))) + -18.0f);
			fVbargraph9 = FAUSTFLOAT(fTemp220);
			fRec77[0] = fTemp47 - fConst188 * (fConst189 * fRec77[2] + fConst190 * fRec77[1]);
			float fTemp221 = fConst187 * fRec77[0] + fConst191 * fRec77[2];
			fVec207[IOTA0 & 32767] = fTemp221;
			float fTemp222 = fVec207[(IOTA0 - 1) & 32767];
			fVec208[0] = fConst75 * fTemp222 - fConst31 * fRec75[1];
			fRec76[0] = fConst30 * (fVec208[1] - fConst81 * fRec76[1] + fConst82 * fTemp222 + fConst83 * fTemp221);
			fRec75[0] = fRec76[0];
			fVec209[0] = 0.50032705f * fRec75[1] - fConst38 * fRec73[1];
			fRec74[0] = fConst26 * fRec75[1] + fConst37 * (fVec209[1] - fConst39 * fRec74[1] + 0.50032705f * fRec75[0]);
			fRec73[0] = fRec74[0];
			float fTemp223 = mydsp_faustpower2_f(fRec73[0]);
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
			float fTemp240 = fTemp99 * (4.3429446f * (fTemp84 - std::log(std::max<float>(1e-12f, fConst73 * (((iConst74) ? 0.86000985f * fVec227[(IOTA0 - iConst116) & 262143] : 0.0f) + ((iConst115) ? 0.86000985f * fVec226[(IOTA0 - iConst114) & 131071] : 0.0f) + ((iConst113) ? 0.86000985f * fVec225[(IOTA0 - iConst112) & 65535] : 0.0f) + ((iConst111) ? 0.86000985f * fVec224[(IOTA0 - iConst110) & 32767] : 0.0f) + ((iConst109) ? 0.86000985f * fVec223[(IOTA0 - iConst108) & 16383] : 0.0f) + ((iConst107) ? 0.86000985f * fVec222[(IOTA0 - iConst106) & 8191] : 0.0f) + ((iConst105) ? 0.86000985f * fVec221[(IOTA0 - iConst104) & 4095] : 0.0f) + ((iConst103) ? 0.86000985f * fVec220[(IOTA0 - iConst102) & 2047] : 0.0f) + ((iConst101) ? 0.86000985f * fVec219[(IOTA0 - iConst100) & 1023] : 0.0f) + ((iConst99) ? 0.86000985f * fVec218[(IOTA0 - iConst98) & 511] : 0.0f) + ((iConst97) ? 0.86000985f * fVec217[(IOTA0 - iConst96) & 255] : 0.0f) + ((iConst95) ? 0.86000985f * fVec216[(IOTA0 - iConst94) & 127] : 0.0f) + ((iConst93) ? 0.86000985f * fVec215[(IOTA0 - iConst92) & 63] : 0.0f) + ((iConst91) ? 0.86000985f * fVec214[(IOTA0 - iConst90) & 31] : 0.0f) + ((iConst89) ? 0.86000985f * fVec213[iConst88] : 0.0f) + ((iConst87) ? 0.86000985f * fVec212[iConst86] : 0.0f) + ((iConst84) ? 0.86000985f * fTemp223 : 0.0f) + ((iConst85) ? 0.86000985f * fVec211[iConst84] : 0.0f))))) + -18.0f);
			fVbargraph10 = FAUSTFLOAT(fTemp240);
			fRec82[0] = fTemp47 - fConst196 * (fConst197 * fRec82[2] + fConst198 * fRec82[1]);
			float fTemp241 = fConst195 * fRec82[0] + fConst199 * fRec82[2];
			fVec228[IOTA0 & 32767] = fTemp241;
			float fTemp242 = fVec228[(IOTA0 - 1) & 32767];
			fVec229[0] = fConst75 * fTemp242 - fConst31 * fRec80[1];
			fRec81[0] = fConst30 * (fVec229[1] - fConst81 * fRec81[1] + fConst82 * fTemp242 + fConst83 * fTemp241);
			fRec80[0] = fRec81[0];
			fVec230[0] = 0.50032705f * fRec80[1] - fConst38 * fRec78[1];
			fRec79[0] = fConst26 * fRec80[1] + fConst37 * (fVec230[1] - fConst39 * fRec79[1] + 0.50032705f * fRec80[0]);
			fRec78[0] = fRec79[0];
			float fTemp243 = mydsp_faustpower2_f(fRec78[0]);
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
			float fTemp260 = fTemp99 * (4.3429446f * (fTemp84 - std::log(std::max<float>(1e-12f, fConst73 * (((iConst74) ? 0.86000985f * fVec248[(IOTA0 - iConst116) & 262143] : 0.0f) + ((iConst115) ? 0.86000985f * fVec247[(IOTA0 - iConst114) & 131071] : 0.0f) + ((iConst113) ? 0.86000985f * fVec246[(IOTA0 - iConst112) & 65535] : 0.0f) + ((iConst111) ? 0.86000985f * fVec245[(IOTA0 - iConst110) & 32767] : 0.0f) + ((iConst109) ? 0.86000985f * fVec244[(IOTA0 - iConst108) & 16383] : 0.0f) + ((iConst107) ? 0.86000985f * fVec243[(IOTA0 - iConst106) & 8191] : 0.0f) + ((iConst105) ? 0.86000985f * fVec242[(IOTA0 - iConst104) & 4095] : 0.0f) + ((iConst103) ? 0.86000985f * fVec241[(IOTA0 - iConst102) & 2047] : 0.0f) + ((iConst101) ? 0.86000985f * fVec240[(IOTA0 - iConst100) & 1023] : 0.0f) + ((iConst99) ? 0.86000985f * fVec239[(IOTA0 - iConst98) & 511] : 0.0f) + ((iConst97) ? 0.86000985f * fVec238[(IOTA0 - iConst96) & 255] : 0.0f) + ((iConst95) ? 0.86000985f * fVec237[(IOTA0 - iConst94) & 127] : 0.0f) + ((iConst93) ? 0.86000985f * fVec236[(IOTA0 - iConst92) & 63] : 0.0f) + ((iConst91) ? 0.86000985f * fVec235[(IOTA0 - iConst90) & 31] : 0.0f) + ((iConst89) ? 0.86000985f * fVec234[iConst88] : 0.0f) + ((iConst87) ? 0.86000985f * fVec233[iConst86] : 0.0f) + ((iConst84) ? 0.86000985f * fTemp243 : 0.0f) + ((iConst85) ? 0.86000985f * fVec232[iConst84] : 0.0f))))) + -18.0f - fSlow6);
			fVbargraph11 = FAUSTFLOAT(fTemp260);
			fRec87[0] = fTemp47 - fConst204 * (fConst205 * fRec87[2] + fConst206 * fRec87[1]);
			float fTemp261 = fConst203 * fRec87[0] + fConst207 * fRec87[2];
			fVec249[IOTA0 & 32767] = fTemp261;
			float fTemp262 = fVec249[(IOTA0 - 1) & 32767];
			fVec250[0] = fConst75 * fTemp262 - fConst31 * fRec85[1];
			fRec86[0] = fConst30 * (fVec250[1] - fConst81 * fRec86[1] + fConst82 * fTemp262 + fConst83 * fTemp261);
			fRec85[0] = fRec86[0];
			fVec251[0] = 0.50032705f * fRec85[1] - fConst38 * fRec83[1];
			fRec84[0] = fConst26 * fRec85[1] + fConst37 * (fVec251[1] - fConst39 * fRec84[1] + 0.50032705f * fRec85[0]);
			fRec83[0] = fRec84[0];
			float fTemp263 = mydsp_faustpower2_f(fRec83[0]);
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
			float fTemp280 = fTemp99 * (4.3429446f * (fTemp84 - std::log(std::max<float>(1e-12f, fConst73 * (((iConst74) ? 0.86000985f * fVec269[(IOTA0 - iConst116) & 262143] : 0.0f) + ((iConst115) ? 0.86000985f * fVec268[(IOTA0 - iConst114) & 131071] : 0.0f) + ((iConst113) ? 0.86000985f * fVec267[(IOTA0 - iConst112) & 65535] : 0.0f) + ((iConst111) ? 0.86000985f * fVec266[(IOTA0 - iConst110) & 32767] : 0.0f) + ((iConst109) ? 0.86000985f * fVec265[(IOTA0 - iConst108) & 16383] : 0.0f) + ((iConst107) ? 0.86000985f * fVec264[(IOTA0 - iConst106) & 8191] : 0.0f) + ((iConst105) ? 0.86000985f * fVec263[(IOTA0 - iConst104) & 4095] : 0.0f) + ((iConst103) ? 0.86000985f * fVec262[(IOTA0 - iConst102) & 2047] : 0.0f) + ((iConst101) ? 0.86000985f * fVec261[(IOTA0 - iConst100) & 1023] : 0.0f) + ((iConst99) ? 0.86000985f * fVec260[(IOTA0 - iConst98) & 511] : 0.0f) + ((iConst97) ? 0.86000985f * fVec259[(IOTA0 - iConst96) & 255] : 0.0f) + ((iConst95) ? 0.86000985f * fVec258[(IOTA0 - iConst94) & 127] : 0.0f) + ((iConst93) ? 0.86000985f * fVec257[(IOTA0 - iConst92) & 63] : 0.0f) + ((iConst91) ? 0.86000985f * fVec256[(IOTA0 - iConst90) & 31] : 0.0f) + ((iConst89) ? 0.86000985f * fVec255[iConst88] : 0.0f) + ((iConst87) ? 0.86000985f * fVec254[iConst86] : 0.0f) + ((iConst84) ? 0.86000985f * fTemp263 : 0.0f) + ((iConst85) ? 0.86000985f * fVec253[iConst84] : 0.0f))))) + -19.0f - fSlow7);
			fVbargraph12 = FAUSTFLOAT(fTemp280);
			fRec92[0] = fTemp47 - fConst212 * (fConst213 * fRec92[2] + fConst214 * fRec92[1]);
			float fTemp281 = fConst211 * fRec92[0] + fConst215 * fRec92[2];
			fVec270[IOTA0 & 32767] = fTemp281;
			float fTemp282 = fVec270[(IOTA0 - 1) & 32767];
			fVec271[0] = fConst75 * fTemp282 - fConst31 * fRec90[1];
			fRec91[0] = fConst30 * (fVec271[1] - fConst81 * fRec91[1] + fConst82 * fTemp282 + fConst83 * fTemp281);
			fRec90[0] = fRec91[0];
			fVec272[0] = 0.50032705f * fRec90[1] - fConst38 * fRec88[1];
			fRec89[0] = fConst26 * fRec90[1] + fConst37 * (fVec272[1] - fConst39 * fRec89[1] + 0.50032705f * fRec90[0]);
			fRec88[0] = fRec89[0];
			float fTemp283 = mydsp_faustpower2_f(fRec88[0]);
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
			float fTemp300 = fTemp99 * (4.3429446f * (fTemp84 - std::log(std::max<float>(1e-12f, fConst73 * (((iConst74) ? 0.86000985f * fVec290[(IOTA0 - iConst116) & 262143] : 0.0f) + ((iConst115) ? 0.86000985f * fVec289[(IOTA0 - iConst114) & 131071] : 0.0f) + ((iConst113) ? 0.86000985f * fVec288[(IOTA0 - iConst112) & 65535] : 0.0f) + ((iConst111) ? 0.86000985f * fVec287[(IOTA0 - iConst110) & 32767] : 0.0f) + ((iConst109) ? 0.86000985f * fVec286[(IOTA0 - iConst108) & 16383] : 0.0f) + ((iConst107) ? 0.86000985f * fVec285[(IOTA0 - iConst106) & 8191] : 0.0f) + ((iConst105) ? 0.86000985f * fVec284[(IOTA0 - iConst104) & 4095] : 0.0f) + ((iConst103) ? 0.86000985f * fVec283[(IOTA0 - iConst102) & 2047] : 0.0f) + ((iConst101) ? 0.86000985f * fVec282[(IOTA0 - iConst100) & 1023] : 0.0f) + ((iConst99) ? 0.86000985f * fVec281[(IOTA0 - iConst98) & 511] : 0.0f) + ((iConst97) ? 0.86000985f * fVec280[(IOTA0 - iConst96) & 255] : 0.0f) + ((iConst95) ? 0.86000985f * fVec279[(IOTA0 - iConst94) & 127] : 0.0f) + ((iConst93) ? 0.86000985f * fVec278[(IOTA0 - iConst92) & 63] : 0.0f) + ((iConst91) ? 0.86000985f * fVec277[(IOTA0 - iConst90) & 31] : 0.0f) + ((iConst89) ? 0.86000985f * fVec276[iConst88] : 0.0f) + ((iConst87) ? 0.86000985f * fVec275[iConst86] : 0.0f) + ((iConst84) ? 0.86000985f * fTemp283 : 0.0f) + ((iConst85) ? 0.86000985f * fVec274[iConst84] : 0.0f))))) + -2e+01f - fSlow8);
			fVbargraph13 = FAUSTFLOAT(fTemp300);
			fRec97[0] = fTemp47 - fConst220 * (fConst221 * fRec97[2] + fConst222 * fRec97[1]);
			float fTemp301 = fConst219 * fRec97[0] + fConst223 * fRec97[2];
			fVec291[IOTA0 & 32767] = fTemp301;
			float fTemp302 = fVec291[(IOTA0 - 1) & 32767];
			fVec292[0] = fConst75 * fTemp302 - fConst31 * fRec95[1];
			fRec96[0] = fConst30 * (fVec292[1] - fConst81 * fRec96[1] + fConst82 * fTemp302 + fConst83 * fTemp301);
			fRec95[0] = fRec96[0];
			fVec293[0] = 0.50032705f * fRec95[1] - fConst38 * fRec93[1];
			fRec94[0] = fConst26 * fRec95[1] + fConst37 * (fVec293[1] - fConst39 * fRec94[1] + 0.50032705f * fRec95[0]);
			fRec93[0] = fRec94[0];
			float fTemp303 = mydsp_faustpower2_f(fRec93[0]);
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
			float fTemp320 = fTemp99 * (4.3429446f * (fTemp84 - std::log(std::max<float>(1e-12f, fConst73 * (((iConst74) ? 0.86000985f * fVec311[(IOTA0 - iConst116) & 262143] : 0.0f) + ((iConst115) ? 0.86000985f * fVec310[(IOTA0 - iConst114) & 131071] : 0.0f) + ((iConst113) ? 0.86000985f * fVec309[(IOTA0 - iConst112) & 65535] : 0.0f) + ((iConst111) ? 0.86000985f * fVec308[(IOTA0 - iConst110) & 32767] : 0.0f) + ((iConst109) ? 0.86000985f * fVec307[(IOTA0 - iConst108) & 16383] : 0.0f) + ((iConst107) ? 0.86000985f * fVec306[(IOTA0 - iConst106) & 8191] : 0.0f) + ((iConst105) ? 0.86000985f * fVec305[(IOTA0 - iConst104) & 4095] : 0.0f) + ((iConst103) ? 0.86000985f * fVec304[(IOTA0 - iConst102) & 2047] : 0.0f) + ((iConst101) ? 0.86000985f * fVec303[(IOTA0 - iConst100) & 1023] : 0.0f) + ((iConst99) ? 0.86000985f * fVec302[(IOTA0 - iConst98) & 511] : 0.0f) + ((iConst97) ? 0.86000985f * fVec301[(IOTA0 - iConst96) & 255] : 0.0f) + ((iConst95) ? 0.86000985f * fVec300[(IOTA0 - iConst94) & 127] : 0.0f) + ((iConst93) ? 0.86000985f * fVec299[(IOTA0 - iConst92) & 63] : 0.0f) + ((iConst91) ? 0.86000985f * fVec298[(IOTA0 - iConst90) & 31] : 0.0f) + ((iConst89) ? 0.86000985f * fVec297[iConst88] : 0.0f) + ((iConst87) ? 0.86000985f * fVec296[iConst86] : 0.0f) + ((iConst84) ? 0.86000985f * fTemp303 : 0.0f) + ((iConst85) ? 0.86000985f * fVec295[iConst84] : 0.0f))))) + -22.0f - fSlow6);
			fVbargraph14 = FAUSTFLOAT(fTemp320);
			fRec102[0] = fTemp47 - fConst228 * (fConst229 * fRec102[2] + fConst230 * fRec102[1]);
			float fTemp321 = fConst227 * fRec102[0] + fConst231 * fRec102[2];
			fVec312[IOTA0 & 32767] = fTemp321;
			float fTemp322 = fVec312[(IOTA0 - 1) & 32767];
			fVec313[0] = fConst75 * fTemp322 - fConst31 * fRec100[1];
			fRec101[0] = fConst30 * (fVec313[1] - fConst81 * fRec101[1] + fConst82 * fTemp322 + fConst83 * fTemp321);
			fRec100[0] = fRec101[0];
			fVec314[0] = 0.50032705f * fRec100[1] - fConst38 * fRec98[1];
			fRec99[0] = fConst26 * fRec100[1] + fConst37 * (fVec314[1] - fConst39 * fRec99[1] + 0.50032705f * fRec100[0]);
			fRec98[0] = fRec99[0];
			float fTemp323 = mydsp_faustpower2_f(fRec98[0]);
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
			float fTemp340 = fTemp99 * (fSlow5 + 4.3429446f * (fTemp84 - std::log(std::max<float>(1e-12f, fConst73 * (((iConst74) ? 0.86000985f * fVec332[(IOTA0 - iConst116) & 262143] : 0.0f) + ((iConst115) ? 0.86000985f * fVec331[(IOTA0 - iConst114) & 131071] : 0.0f) + ((iConst113) ? 0.86000985f * fVec330[(IOTA0 - iConst112) & 65535] : 0.0f) + ((iConst111) ? 0.86000985f * fVec329[(IOTA0 - iConst110) & 32767] : 0.0f) + ((iConst109) ? 0.86000985f * fVec328[(IOTA0 - iConst108) & 16383] : 0.0f) + ((iConst107) ? 0.86000985f * fVec327[(IOTA0 - iConst106) & 8191] : 0.0f) + ((iConst105) ? 0.86000985f * fVec326[(IOTA0 - iConst104) & 4095] : 0.0f) + ((iConst103) ? 0.86000985f * fVec325[(IOTA0 - iConst102) & 2047] : 0.0f) + ((iConst101) ? 0.86000985f * fVec324[(IOTA0 - iConst100) & 1023] : 0.0f) + ((iConst99) ? 0.86000985f * fVec323[(IOTA0 - iConst98) & 511] : 0.0f) + ((iConst97) ? 0.86000985f * fVec322[(IOTA0 - iConst96) & 255] : 0.0f) + ((iConst95) ? 0.86000985f * fVec321[(IOTA0 - iConst94) & 127] : 0.0f) + ((iConst93) ? 0.86000985f * fVec320[(IOTA0 - iConst92) & 63] : 0.0f) + ((iConst91) ? 0.86000985f * fVec319[(IOTA0 - iConst90) & 31] : 0.0f) + ((iConst89) ? 0.86000985f * fVec318[iConst88] : 0.0f) + ((iConst87) ? 0.86000985f * fVec317[iConst86] : 0.0f) + ((iConst84) ? 0.86000985f * fTemp323 : 0.0f) + ((iConst85) ? 0.86000985f * fVec316[iConst84] : 0.0f))))) + -24.0f);
			fVbargraph15 = FAUSTFLOAT(fTemp340);
			fRec107[0] = fTemp47 - fConst236 * (fConst237 * fRec107[2] + fConst238 * fRec107[1]);
			float fTemp341 = fConst235 * fRec107[0] + fConst239 * fRec107[2];
			fVec333[IOTA0 & 32767] = fTemp341;
			float fTemp342 = fVec333[(IOTA0 - 1) & 32767];
			fVec334[0] = fConst75 * fTemp342 - fConst31 * fRec105[1];
			fRec106[0] = fConst30 * (fVec334[1] - fConst81 * fRec106[1] + fConst82 * fTemp342 + fConst83 * fTemp341);
			fRec105[0] = fRec106[0];
			fVec335[0] = 0.50032705f * fRec105[1] - fConst38 * fRec103[1];
			fRec104[0] = fConst26 * fRec105[1] + fConst37 * (fVec335[1] - fConst39 * fRec104[1] + 0.50032705f * fRec105[0]);
			fRec103[0] = fRec104[0];
			float fTemp343 = mydsp_faustpower2_f(fRec103[0]);
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
			float fTemp360 = fTemp99 * (fSlow7 + 4.3429446f * (fTemp84 - std::log(std::max<float>(1e-12f, fConst73 * (((iConst74) ? 0.86000985f * fVec353[(IOTA0 - iConst116) & 262143] : 0.0f) + ((iConst115) ? 0.86000985f * fVec352[(IOTA0 - iConst114) & 131071] : 0.0f) + ((iConst113) ? 0.86000985f * fVec351[(IOTA0 - iConst112) & 65535] : 0.0f) + ((iConst111) ? 0.86000985f * fVec350[(IOTA0 - iConst110) & 32767] : 0.0f) + ((iConst109) ? 0.86000985f * fVec349[(IOTA0 - iConst108) & 16383] : 0.0f) + ((iConst107) ? 0.86000985f * fVec348[(IOTA0 - iConst106) & 8191] : 0.0f) + ((iConst105) ? 0.86000985f * fVec347[(IOTA0 - iConst104) & 4095] : 0.0f) + ((iConst103) ? 0.86000985f * fVec346[(IOTA0 - iConst102) & 2047] : 0.0f) + ((iConst101) ? 0.86000985f * fVec345[(IOTA0 - iConst100) & 1023] : 0.0f) + ((iConst99) ? 0.86000985f * fVec344[(IOTA0 - iConst98) & 511] : 0.0f) + ((iConst97) ? 0.86000985f * fVec343[(IOTA0 - iConst96) & 255] : 0.0f) + ((iConst95) ? 0.86000985f * fVec342[(IOTA0 - iConst94) & 127] : 0.0f) + ((iConst93) ? 0.86000985f * fVec341[(IOTA0 - iConst92) & 63] : 0.0f) + ((iConst91) ? 0.86000985f * fVec340[(IOTA0 - iConst90) & 31] : 0.0f) + ((iConst89) ? 0.86000985f * fVec339[iConst88] : 0.0f) + ((iConst87) ? 0.86000985f * fVec338[iConst86] : 0.0f) + ((iConst84) ? 0.86000985f * fTemp343 : 0.0f) + ((iConst85) ? 0.86000985f * fVec337[iConst84] : 0.0f))))) + -27.0f);
			fVbargraph16 = FAUSTFLOAT(fTemp360);
			fRec112[0] = fTemp47 - fConst244 * (fConst245 * fRec112[2] + fConst246 * fRec112[1]);
			float fTemp361 = fConst243 * fRec112[0] + fConst247 * fRec112[2];
			fVec354[IOTA0 & 32767] = fTemp361;
			float fTemp362 = fVec354[(IOTA0 - 1) & 32767];
			fVec355[0] = fConst75 * fTemp362 - fConst31 * fRec110[1];
			fRec111[0] = fConst30 * (fVec355[1] - fConst81 * fRec111[1] + fConst82 * fTemp362 + fConst83 * fTemp361);
			fRec110[0] = fRec111[0];
			fVec356[0] = 0.50032705f * fRec110[1] - fConst38 * fRec108[1];
			fRec109[0] = fConst26 * fRec110[1] + fConst37 * (fVec356[1] - fConst39 * fRec109[1] + 0.50032705f * fRec110[0]);
			fRec108[0] = fRec109[0];
			float fTemp363 = mydsp_faustpower2_f(fRec108[0]);
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
			float fTemp380 = fTemp99 * (fSlow5 + 4.3429446f * (fTemp84 - std::log(std::max<float>(1e-12f, fConst73 * (((iConst74) ? 0.86000985f * fVec374[(IOTA0 - iConst116) & 262143] : 0.0f) + ((iConst115) ? 0.86000985f * fVec373[(IOTA0 - iConst114) & 131071] : 0.0f) + ((iConst113) ? 0.86000985f * fVec372[(IOTA0 - iConst112) & 65535] : 0.0f) + ((iConst111) ? 0.86000985f * fVec371[(IOTA0 - iConst110) & 32767] : 0.0f) + ((iConst109) ? 0.86000985f * fVec370[(IOTA0 - iConst108) & 16383] : 0.0f) + ((iConst107) ? 0.86000985f * fVec369[(IOTA0 - iConst106) & 8191] : 0.0f) + ((iConst105) ? 0.86000985f * fVec368[(IOTA0 - iConst104) & 4095] : 0.0f) + ((iConst103) ? 0.86000985f * fVec367[(IOTA0 - iConst102) & 2047] : 0.0f) + ((iConst101) ? 0.86000985f * fVec366[(IOTA0 - iConst100) & 1023] : 0.0f) + ((iConst99) ? 0.86000985f * fVec365[(IOTA0 - iConst98) & 511] : 0.0f) + ((iConst97) ? 0.86000985f * fVec364[(IOTA0 - iConst96) & 255] : 0.0f) + ((iConst95) ? 0.86000985f * fVec363[(IOTA0 - iConst94) & 127] : 0.0f) + ((iConst93) ? 0.86000985f * fVec362[(IOTA0 - iConst92) & 63] : 0.0f) + ((iConst91) ? 0.86000985f * fVec361[(IOTA0 - iConst90) & 31] : 0.0f) + ((iConst89) ? 0.86000985f * fVec360[iConst88] : 0.0f) + ((iConst87) ? 0.86000985f * fVec359[iConst86] : 0.0f) + ((iConst84) ? 0.86000985f * fTemp363 : 0.0f) + ((iConst85) ? 0.86000985f * fVec358[iConst84] : 0.0f))))) + -26.0f);
			fVbargraph17 = FAUSTFLOAT(fTemp380);
			fRec117[0] = fTemp47 - fConst252 * (fConst253 * fRec117[2] + fConst254 * fRec117[1]);
			float fTemp381 = fConst251 * fRec117[0] + fConst255 * fRec117[2];
			fVec375[IOTA0 & 32767] = fTemp381;
			float fTemp382 = fVec375[(IOTA0 - 1) & 32767];
			fVec376[0] = fConst75 * fTemp382 - fConst31 * fRec115[1];
			fRec116[0] = fConst30 * (fVec376[1] - fConst81 * fRec116[1] + fConst82 * fTemp382 + fConst83 * fTemp381);
			fRec115[0] = fRec116[0];
			fVec377[0] = 0.50032705f * fRec115[1] - fConst38 * fRec113[1];
			fRec114[0] = fConst26 * fRec115[1] + fConst37 * (fVec377[1] - fConst39 * fRec114[1] + 0.50032705f * fRec115[0]);
			fRec113[0] = fRec114[0];
			float fTemp383 = mydsp_faustpower2_f(fRec113[0]);
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
			float fTemp400 = fTemp99 * (fSlow7 + 4.3429446f * (fTemp84 - std::log(std::max<float>(1e-12f, fConst73 * (((iConst74) ? 0.86000985f * fVec395[(IOTA0 - iConst116) & 262143] : 0.0f) + ((iConst115) ? 0.86000985f * fVec394[(IOTA0 - iConst114) & 131071] : 0.0f) + ((iConst113) ? 0.86000985f * fVec393[(IOTA0 - iConst112) & 65535] : 0.0f) + ((iConst111) ? 0.86000985f * fVec392[(IOTA0 - iConst110) & 32767] : 0.0f) + ((iConst109) ? 0.86000985f * fVec391[(IOTA0 - iConst108) & 16383] : 0.0f) + ((iConst107) ? 0.86000985f * fVec390[(IOTA0 - iConst106) & 8191] : 0.0f) + ((iConst105) ? 0.86000985f * fVec389[(IOTA0 - iConst104) & 4095] : 0.0f) + ((iConst103) ? 0.86000985f * fVec388[(IOTA0 - iConst102) & 2047] : 0.0f) + ((iConst101) ? 0.86000985f * fVec387[(IOTA0 - iConst100) & 1023] : 0.0f) + ((iConst99) ? 0.86000985f * fVec386[(IOTA0 - iConst98) & 511] : 0.0f) + ((iConst97) ? 0.86000985f * fVec385[(IOTA0 - iConst96) & 255] : 0.0f) + ((iConst95) ? 0.86000985f * fVec384[(IOTA0 - iConst94) & 127] : 0.0f) + ((iConst93) ? 0.86000985f * fVec383[(IOTA0 - iConst92) & 63] : 0.0f) + ((iConst91) ? 0.86000985f * fVec382[(IOTA0 - iConst90) & 31] : 0.0f) + ((iConst89) ? 0.86000985f * fVec381[iConst88] : 0.0f) + ((iConst87) ? 0.86000985f * fVec380[iConst86] : 0.0f) + ((iConst84) ? 0.86000985f * fTemp383 : 0.0f) + ((iConst85) ? 0.86000985f * fVec379[iConst84] : 0.0f))))) + -28.0f);
			fVbargraph18 = FAUSTFLOAT(fTemp400);
			fRec122[0] = fTemp47 - fConst260 * (fConst261 * fRec122[2] + fConst262 * fRec122[1]);
			float fTemp401 = fConst259 * fRec122[0] + fConst263 * fRec122[2];
			fVec396[IOTA0 & 32767] = fTemp401;
			float fTemp402 = fVec396[(IOTA0 - 1) & 32767];
			fVec397[0] = fConst75 * fTemp402 - fConst31 * fRec120[1];
			fRec121[0] = fConst30 * (fVec397[1] - fConst81 * fRec121[1] + fConst82 * fTemp402 + fConst83 * fTemp401);
			fRec120[0] = fRec121[0];
			fVec398[0] = 0.50032705f * fRec120[1] - fConst38 * fRec118[1];
			fRec119[0] = fConst26 * fRec120[1] + fConst37 * (fVec398[1] - fConst39 * fRec119[1] + 0.50032705f * fRec120[0]);
			fRec118[0] = fRec119[0];
			float fTemp403 = mydsp_faustpower2_f(fRec118[0]);
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
			float fTemp420 = fTemp99 * (fSlow9 + 4.3429446f * (fTemp84 - std::log(std::max<float>(1e-12f, fConst73 * (((iConst74) ? 0.86000985f * fVec416[(IOTA0 - iConst116) & 262143] : 0.0f) + ((iConst115) ? 0.86000985f * fVec415[(IOTA0 - iConst114) & 131071] : 0.0f) + ((iConst113) ? 0.86000985f * fVec414[(IOTA0 - iConst112) & 65535] : 0.0f) + ((iConst111) ? 0.86000985f * fVec413[(IOTA0 - iConst110) & 32767] : 0.0f) + ((iConst109) ? 0.86000985f * fVec412[(IOTA0 - iConst108) & 16383] : 0.0f) + ((iConst107) ? 0.86000985f * fVec411[(IOTA0 - iConst106) & 8191] : 0.0f) + ((iConst105) ? 0.86000985f * fVec410[(IOTA0 - iConst104) & 4095] : 0.0f) + ((iConst103) ? 0.86000985f * fVec409[(IOTA0 - iConst102) & 2047] : 0.0f) + ((iConst101) ? 0.86000985f * fVec408[(IOTA0 - iConst100) & 1023] : 0.0f) + ((iConst99) ? 0.86000985f * fVec407[(IOTA0 - iConst98) & 511] : 0.0f) + ((iConst97) ? 0.86000985f * fVec406[(IOTA0 - iConst96) & 255] : 0.0f) + ((iConst95) ? 0.86000985f * fVec405[(IOTA0 - iConst94) & 127] : 0.0f) + ((iConst93) ? 0.86000985f * fVec404[(IOTA0 - iConst92) & 63] : 0.0f) + ((iConst91) ? 0.86000985f * fVec403[(IOTA0 - iConst90) & 31] : 0.0f) + ((iConst89) ? 0.86000985f * fVec402[iConst88] : 0.0f) + ((iConst87) ? 0.86000985f * fVec401[iConst86] : 0.0f) + ((iConst84) ? 0.86000985f * fTemp403 : 0.0f) + ((iConst85) ? 0.86000985f * fVec400[iConst84] : 0.0f))))) + -29.0f);
			fVbargraph19 = FAUSTFLOAT(fTemp420);
			fRec127[0] = fTemp47 - fConst268 * (fConst269 * fRec127[2] + fConst270 * fRec127[1]);
			float fTemp421 = fConst267 * fRec127[0] + fConst271 * fRec127[2];
			fVec417[IOTA0 & 32767] = fTemp421;
			float fTemp422 = fVec417[(IOTA0 - 1) & 32767];
			fVec418[0] = fConst75 * fTemp422 - fConst31 * fRec125[1];
			fRec126[0] = fConst30 * (fVec418[1] - fConst81 * fRec126[1] + fConst82 * fTemp422 + fConst83 * fTemp421);
			fRec125[0] = fRec126[0];
			fVec419[0] = 0.50032705f * fRec125[1] - fConst38 * fRec123[1];
			fRec124[0] = fConst26 * fRec125[1] + fConst37 * (fVec419[1] - fConst39 * fRec124[1] + 0.50032705f * fRec125[0]);
			fRec123[0] = fRec124[0];
			float fTemp423 = mydsp_faustpower2_f(fRec123[0]);
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
			float fTemp440 = fTemp99 * (fSlow10 + 4.3429446f * (fTemp84 - std::log(std::max<float>(1e-12f, fConst73 * (((iConst74) ? 0.86000985f * fVec437[(IOTA0 - iConst116) & 262143] : 0.0f) + ((iConst115) ? 0.86000985f * fVec436[(IOTA0 - iConst114) & 131071] : 0.0f) + ((iConst113) ? 0.86000985f * fVec435[(IOTA0 - iConst112) & 65535] : 0.0f) + ((iConst111) ? 0.86000985f * fVec434[(IOTA0 - iConst110) & 32767] : 0.0f) + ((iConst109) ? 0.86000985f * fVec433[(IOTA0 - iConst108) & 16383] : 0.0f) + ((iConst107) ? 0.86000985f * fVec432[(IOTA0 - iConst106) & 8191] : 0.0f) + ((iConst105) ? 0.86000985f * fVec431[(IOTA0 - iConst104) & 4095] : 0.0f) + ((iConst103) ? 0.86000985f * fVec430[(IOTA0 - iConst102) & 2047] : 0.0f) + ((iConst101) ? 0.86000985f * fVec429[(IOTA0 - iConst100) & 1023] : 0.0f) + ((iConst99) ? 0.86000985f * fVec428[(IOTA0 - iConst98) & 511] : 0.0f) + ((iConst97) ? 0.86000985f * fVec427[(IOTA0 - iConst96) & 255] : 0.0f) + ((iConst95) ? 0.86000985f * fVec426[(IOTA0 - iConst94) & 127] : 0.0f) + ((iConst93) ? 0.86000985f * fVec425[(IOTA0 - iConst92) & 63] : 0.0f) + ((iConst91) ? 0.86000985f * fVec424[(IOTA0 - iConst90) & 31] : 0.0f) + ((iConst89) ? 0.86000985f * fVec423[iConst88] : 0.0f) + ((iConst87) ? 0.86000985f * fVec422[iConst86] : 0.0f) + ((iConst84) ? 0.86000985f * fTemp423 : 0.0f) + ((iConst85) ? 0.86000985f * fVec421[iConst84] : 0.0f))))) + -29.0f);
			fVbargraph20 = FAUSTFLOAT(fTemp440);
			fRec132[0] = fTemp47 - fConst276 * (fConst277 * fRec132[2] + fConst278 * fRec132[1]);
			float fTemp441 = fConst275 * fRec132[0] + fConst279 * fRec132[2];
			fVec438[IOTA0 & 32767] = fTemp441;
			float fTemp442 = fVec438[(IOTA0 - 1) & 32767];
			fVec439[0] = fConst75 * fTemp442 - fConst31 * fRec130[1];
			fRec131[0] = fConst30 * (fVec439[1] - fConst81 * fRec131[1] + fConst82 * fTemp442 + fConst83 * fTemp441);
			fRec130[0] = fRec131[0];
			fVec440[0] = 0.50032705f * fRec130[1] - fConst38 * fRec128[1];
			fRec129[0] = fConst26 * fRec130[1] + fConst37 * (fVec440[1] - fConst39 * fRec129[1] + 0.50032705f * fRec130[0]);
			fRec128[0] = fRec129[0];
			float fTemp443 = mydsp_faustpower2_f(fRec128[0]);
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
			float fTemp460 = fTemp99 * (fSlow11 + 4.3429446f * (fTemp84 - std::log(std::max<float>(1e-12f, fConst73 * (((iConst74) ? 0.86000985f * fVec458[(IOTA0 - iConst116) & 262143] : 0.0f) + ((iConst115) ? 0.86000985f * fVec457[(IOTA0 - iConst114) & 131071] : 0.0f) + ((iConst113) ? 0.86000985f * fVec456[(IOTA0 - iConst112) & 65535] : 0.0f) + ((iConst111) ? 0.86000985f * fVec455[(IOTA0 - iConst110) & 32767] : 0.0f) + ((iConst109) ? 0.86000985f * fVec454[(IOTA0 - iConst108) & 16383] : 0.0f) + ((iConst107) ? 0.86000985f * fVec453[(IOTA0 - iConst106) & 8191] : 0.0f) + ((iConst105) ? 0.86000985f * fVec452[(IOTA0 - iConst104) & 4095] : 0.0f) + ((iConst103) ? 0.86000985f * fVec451[(IOTA0 - iConst102) & 2047] : 0.0f) + ((iConst101) ? 0.86000985f * fVec450[(IOTA0 - iConst100) & 1023] : 0.0f) + ((iConst99) ? 0.86000985f * fVec449[(IOTA0 - iConst98) & 511] : 0.0f) + ((iConst97) ? 0.86000985f * fVec448[(IOTA0 - iConst96) & 255] : 0.0f) + ((iConst95) ? 0.86000985f * fVec447[(IOTA0 - iConst94) & 127] : 0.0f) + ((iConst93) ? 0.86000985f * fVec446[(IOTA0 - iConst92) & 63] : 0.0f) + ((iConst91) ? 0.86000985f * fVec445[(IOTA0 - iConst90) & 31] : 0.0f) + ((iConst89) ? 0.86000985f * fVec444[iConst88] : 0.0f) + ((iConst87) ? 0.86000985f * fVec443[iConst86] : 0.0f) + ((iConst84) ? 0.86000985f * fTemp443 : 0.0f) + ((iConst85) ? 0.86000985f * fVec442[iConst84] : 0.0f))))) + -29.0f);
			fVbargraph21 = FAUSTFLOAT(fTemp460);
			fRec137[0] = fTemp47 - fConst284 * (fConst285 * fRec137[2] + fConst286 * fRec137[1]);
			float fTemp461 = fConst283 * fRec137[0] + fConst287 * fRec137[2];
			fVec459[IOTA0 & 32767] = fTemp461;
			float fTemp462 = fVec459[(IOTA0 - 1) & 32767];
			fVec460[0] = fConst75 * fTemp462 - fConst31 * fRec135[1];
			fRec136[0] = fConst30 * (fVec460[1] - fConst81 * fRec136[1] + fConst82 * fTemp462 + fConst83 * fTemp461);
			fRec135[0] = fRec136[0];
			fVec461[0] = 0.50032705f * fRec135[1] - fConst38 * fRec133[1];
			fRec134[0] = fConst26 * fRec135[1] + fConst37 * (fVec461[1] - fConst39 * fRec134[1] + 0.50032705f * fRec135[0]);
			fRec133[0] = fRec134[0];
			float fTemp463 = mydsp_faustpower2_f(fRec133[0]);
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
			float fTemp480 = fTemp99 * (fSlow12 + 4.3429446f * (fTemp84 - std::log(std::max<float>(1e-12f, fConst73 * (((iConst74) ? 0.86000985f * fVec479[(IOTA0 - iConst116) & 262143] : 0.0f) + ((iConst115) ? 0.86000985f * fVec478[(IOTA0 - iConst114) & 131071] : 0.0f) + ((iConst113) ? 0.86000985f * fVec477[(IOTA0 - iConst112) & 65535] : 0.0f) + ((iConst111) ? 0.86000985f * fVec476[(IOTA0 - iConst110) & 32767] : 0.0f) + ((iConst109) ? 0.86000985f * fVec475[(IOTA0 - iConst108) & 16383] : 0.0f) + ((iConst107) ? 0.86000985f * fVec474[(IOTA0 - iConst106) & 8191] : 0.0f) + ((iConst105) ? 0.86000985f * fVec473[(IOTA0 - iConst104) & 4095] : 0.0f) + ((iConst103) ? 0.86000985f * fVec472[(IOTA0 - iConst102) & 2047] : 0.0f) + ((iConst101) ? 0.86000985f * fVec471[(IOTA0 - iConst100) & 1023] : 0.0f) + ((iConst99) ? 0.86000985f * fVec470[(IOTA0 - iConst98) & 511] : 0.0f) + ((iConst97) ? 0.86000985f * fVec469[(IOTA0 - iConst96) & 255] : 0.0f) + ((iConst95) ? 0.86000985f * fVec468[(IOTA0 - iConst94) & 127] : 0.0f) + ((iConst93) ? 0.86000985f * fVec467[(IOTA0 - iConst92) & 63] : 0.0f) + ((iConst91) ? 0.86000985f * fVec466[(IOTA0 - iConst90) & 31] : 0.0f) + ((iConst89) ? 0.86000985f * fVec465[iConst88] : 0.0f) + ((iConst87) ? 0.86000985f * fVec464[iConst86] : 0.0f) + ((iConst84) ? 0.86000985f * fTemp463 : 0.0f) + ((iConst85) ? 0.86000985f * fVec463[iConst84] : 0.0f))))) + -29.0f);
			fVbargraph22 = FAUSTFLOAT(fTemp480);
			float fTemp481 = 0.2236068f * fTemp40 * (std::pow(1e+01f, 0.05f * fTemp100) * fVec32[(IOTA0 - iConst135) & 32767] + std::pow(1e+01f, 0.05f * fTemp120) * fVec81[(IOTA0 - iConst135) & 32767] + std::pow(1e+01f, 0.05f * fTemp140) * fVec102[(IOTA0 - iConst135) & 32767] + std::pow(1e+01f, 0.05f * fTemp160) * fVec123[(IOTA0 - iConst135) & 32767] + std::pow(1e+01f, 0.05f * fTemp180) * fVec144[(IOTA0 - iConst135) & 32767] + std::pow(1e+01f, 0.05f * fTemp200) * fVec165[(IOTA0 - iConst135) & 32767] + std::pow(1e+01f, 0.05f * fTemp220) * fVec186[(IOTA0 - iConst135) & 32767] + std::pow(1e+01f, 0.05f * fTemp240) * fVec207[(IOTA0 - iConst135) & 32767] + std::pow(1e+01f, 0.05f * fTemp260) * fVec228[(IOTA0 - iConst135) & 32767] + std::pow(1e+01f, 0.05f * fTemp280) * fVec249[(IOTA0 - iConst135) & 32767] + std::pow(1e+01f, 0.05f * fTemp300) * fVec270[(IOTA0 - iConst135) & 32767] + std::pow(1e+01f, 0.05f * fTemp320) * fVec291[(IOTA0 - iConst135) & 32767] + std::pow(1e+01f, 0.05f * fTemp340) * fVec312[(IOTA0 - iConst135) & 32767] + std::pow(1e+01f, 0.05f * fTemp360) * fVec333[(IOTA0 - iConst135) & 32767] + std::pow(1e+01f, 0.05f * fTemp380) * fVec354[(IOTA0 - iConst135) & 32767] + std::pow(1e+01f, 0.05f * fTemp400) * fVec375[(IOTA0 - iConst135) & 32767] + std::pow(1e+01f, 0.05f * fTemp420) * fVec396[(IOTA0 - iConst135) & 32767] + std::pow(1e+01f, 0.05f * fTemp440) * fVec417[(IOTA0 - iConst135) & 32767] + std::pow(1e+01f, 0.05f * fTemp460) * fVec438[(IOTA0 - iConst135) & 32767] + std::pow(1e+01f, 0.05f * fTemp480) * fVec459[(IOTA0 - iConst135) & 32767]);
			fRec7[0] = fTemp38 * (fRec26[0] * (fTemp39 * fRec26[0] + fConst61 * fTemp40 * fTemp41) + fTemp481);
			fRec8[0] = fTemp38 * (fTemp481 + fRec26[0] * (fTemp42 * fTemp44 + fConst61 * fTemp40 * fTemp45));
			fRec138[0] = fSlow13 + fConst3 * fRec138[1];
			float fTemp482 = 1.0f - fRec138[0];
			fRec142[0] = fRec7[0] - fConst294 * (fConst295 * fRec142[2] + fConst296 * fRec142[1]);
			fRec141[0] = fConst294 * (fConst292 * fRec142[0] + fConst297 * fRec142[1] + fConst292 * fRec142[2]) - fConst293 * (fConst298 * fRec141[2] + fConst296 * fRec141[1]);
			fRec140[0] = fConst293 * (fConst292 * fRec141[0] + fConst297 * fRec141[1] + fConst292 * fRec141[2]) - fConst290 * (fConst299 * fRec140[2] + fConst296 * fRec140[1]);
			float fTemp483 = std::fabs(fConst290 * (fConst292 * fRec140[0] + fConst297 * fRec140[1] + fConst292 * fRec140[2]));
			fVec480[0] = fTemp483;
			float fTemp484 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp483));
			int iTemp485 = (fTemp484 > fSlow18) + (fTemp484 > fSlow19);
			float fTemp486 = 0.0f - fSlow16 * std::max<float>(0.0f, ((iTemp485 == 0) ? 0.0f : ((iTemp485 == 1) ? 0.055555556f * mydsp_faustpower2_f(fSlow17 + (fTemp484 + 2.5f - fSlow1)) : fSlow17 + (fTemp484 + -2.0f - fSlow1))));
			float fTemp487 = ((fTemp486 > fRec139[1]) ? fSlow25 : fSlow22);
			fRec139[0] = fTemp486 * (1.0f - fTemp487) + fRec139[1] * fTemp487;
			fRec146[0] = fRec8[0] - fConst294 * (fConst295 * fRec146[2] + fConst296 * fRec146[1]);
			fRec145[0] = fConst294 * (fConst292 * fRec146[0] + fConst297 * fRec146[1] + fConst292 * fRec146[2]) - fConst293 * (fConst298 * fRec145[2] + fConst296 * fRec145[1]);
			fRec144[0] = fConst293 * (fConst292 * fRec145[0] + fConst297 * fRec145[1] + fConst292 * fRec145[2]) - fConst290 * (fConst299 * fRec144[2] + fConst296 * fRec144[1]);
			float fTemp488 = std::fabs(fConst290 * (fConst292 * fRec144[0] + fConst297 * fRec144[1] + fConst292 * fRec144[2]));
			fVec481[0] = fTemp488;
			float fTemp489 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp488));
			int iTemp490 = (fTemp489 > fSlow18) + (fTemp489 > fSlow19);
			float fTemp491 = 0.0f - fSlow16 * std::max<float>(0.0f, ((iTemp490 == 0) ? 0.0f : ((iTemp490 == 1) ? 0.055555556f * mydsp_faustpower2_f(fSlow17 + (fTemp489 + 2.5f - fSlow1)) : fSlow17 + (fTemp489 + -2.0f - fSlow1))));
			float fTemp492 = ((fTemp491 > fRec143[1]) ? fSlow25 : fSlow22);
			fRec143[0] = fTemp491 * (1.0f - fTemp492) + fRec143[1] * fTemp492;
			float fTemp493 = std::max<float>(fTemp483, fVec480[1]);
			fVec482[0] = fTemp493;
			float fTemp494 = std::max<float>(fTemp493, fVec482[2]);
			fVec483[0] = fTemp494;
			float fTemp495 = std::max<float>(fTemp494, fVec483[4]);
			fVec484[0] = fTemp495;
			float fTemp496 = std::max<float>(fTemp495, fVec484[8]);
			fVec485[IOTA0 & 31] = fTemp496;
			float fTemp497 = std::max<float>(fTemp496, fVec485[(IOTA0 - 16) & 31]);
			fVec486[IOTA0 & 63] = fTemp497;
			float fTemp498 = std::max<float>(fTemp497, fVec486[(IOTA0 - 32) & 63]);
			fVec487[IOTA0 & 127] = fTemp498;
			float fTemp499 = std::max<float>(fTemp498, fVec487[(IOTA0 - 64) & 127]);
			fVec488[IOTA0 & 255] = fTemp499;
			float fTemp500 = std::max<float>(fTemp499, fVec488[(IOTA0 - 128) & 255]);
			fVec489[IOTA0 & 511] = fTemp500;
			float fTemp501 = std::max<float>(fTemp500, fVec489[(IOTA0 - 256) & 511]);
			fVec490[IOTA0 & 1023] = fTemp501;
			float fTemp502 = std::max<float>(fTemp501, fVec490[(IOTA0 - 512) & 1023]);
			fVec491[IOTA0 & 2047] = fTemp502;
			fVec492[IOTA0 & 4095] = std::max<float>(fTemp502, fVec491[(IOTA0 - 1024) & 2047]);
			float fTemp503 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst301) ? fTemp483 : -3.4028235e+38f), ((iConst302) ? fVec482[iConst301] : -3.4028235e+38f)), ((iConst303) ? fVec483[iConst304] : -3.4028235e+38f)), ((iConst305) ? fVec484[iConst306] : -3.4028235e+38f)), ((iConst307) ? fVec485[(IOTA0 - iConst308) & 31] : -3.4028235e+38f)), ((iConst309) ? fVec486[(IOTA0 - iConst310) & 63] : -3.4028235e+38f)), ((iConst311) ? fVec487[(IOTA0 - iConst312) & 127] : -3.4028235e+38f)), ((iConst313) ? fVec488[(IOTA0 - iConst314) & 255] : -3.4028235e+38f)), ((iConst315) ? fVec489[(IOTA0 - iConst316) & 511] : -3.4028235e+38f)), ((iConst317) ? fVec490[(IOTA0 - iConst318) & 1023] : -3.4028235e+38f)), ((iConst319) ? fVec491[(IOTA0 - iConst320) & 2047] : -3.4028235e+38f)), ((iConst321) ? fVec492[(IOTA0 - iConst322) & 4095] : -3.4028235e+38f))));
			int iTemp504 = (fTemp503 > fSlow27) + (fTemp503 > fSlow28);
			float fTemp505 = std::max<float>(fSlow26, 5e+01f * ((iTemp504 == 0) ? fTemp503 + 6e+01f - fSlow1 : ((iTemp504 == 1) ? 0.0f - 0.083333336f * mydsp_faustpower2_f(fTemp503 + 57.0f - fSlow1) : 0.0f)));
			float fTemp506 = ((fTemp505 > fRec147[1]) ? fConst324 : fConst323);
			fRec147[0] = fTemp505 * (1.0f - fTemp506) + fRec147[1] * fTemp506;
			float fTemp507 = std::max<float>(fTemp488, fVec481[1]);
			fVec493[0] = fTemp507;
			float fTemp508 = std::max<float>(fTemp507, fVec493[2]);
			fVec494[0] = fTemp508;
			float fTemp509 = std::max<float>(fTemp508, fVec494[4]);
			fVec495[0] = fTemp509;
			float fTemp510 = std::max<float>(fTemp509, fVec495[8]);
			fVec496[IOTA0 & 31] = fTemp510;
			float fTemp511 = std::max<float>(fTemp510, fVec496[(IOTA0 - 16) & 31]);
			fVec497[IOTA0 & 63] = fTemp511;
			float fTemp512 = std::max<float>(fTemp511, fVec497[(IOTA0 - 32) & 63]);
			fVec498[IOTA0 & 127] = fTemp512;
			float fTemp513 = std::max<float>(fTemp512, fVec498[(IOTA0 - 64) & 127]);
			fVec499[IOTA0 & 255] = fTemp513;
			float fTemp514 = std::max<float>(fTemp513, fVec499[(IOTA0 - 128) & 255]);
			fVec500[IOTA0 & 511] = fTemp514;
			float fTemp515 = std::max<float>(fTemp514, fVec500[(IOTA0 - 256) & 511]);
			fVec501[IOTA0 & 1023] = fTemp515;
			float fTemp516 = std::max<float>(fTemp515, fVec501[(IOTA0 - 512) & 1023]);
			fVec502[IOTA0 & 2047] = fTemp516;
			fVec503[IOTA0 & 4095] = std::max<float>(fTemp516, fVec502[(IOTA0 - 1024) & 2047]);
			float fTemp517 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst301) ? fTemp488 : -3.4028235e+38f), ((iConst302) ? fVec493[iConst301] : -3.4028235e+38f)), ((iConst303) ? fVec494[iConst304] : -3.4028235e+38f)), ((iConst305) ? fVec495[iConst306] : -3.4028235e+38f)), ((iConst307) ? fVec496[(IOTA0 - iConst308) & 31] : -3.4028235e+38f)), ((iConst309) ? fVec497[(IOTA0 - iConst310) & 63] : -3.4028235e+38f)), ((iConst311) ? fVec498[(IOTA0 - iConst312) & 127] : -3.4028235e+38f)), ((iConst313) ? fVec499[(IOTA0 - iConst314) & 255] : -3.4028235e+38f)), ((iConst315) ? fVec500[(IOTA0 - iConst316) & 511] : -3.4028235e+38f)), ((iConst317) ? fVec501[(IOTA0 - iConst318) & 1023] : -3.4028235e+38f)), ((iConst319) ? fVec502[(IOTA0 - iConst320) & 2047] : -3.4028235e+38f)), ((iConst321) ? fVec503[(IOTA0 - iConst322) & 4095] : -3.4028235e+38f))));
			int iTemp518 = (fTemp517 > fSlow27) + (fTemp517 > fSlow28);
			float fTemp519 = std::max<float>(fSlow26, 5e+01f * ((iTemp518 == 0) ? fTemp517 + 6e+01f - fSlow1 : ((iTemp518 == 1) ? 0.0f - 0.083333336f * mydsp_faustpower2_f(fTemp517 + 57.0f - fSlow1) : 0.0f)));
			float fTemp520 = ((fTemp519 > fRec148[1]) ? fConst324 : fConst323);
			fRec148[0] = fTemp519 * (1.0f - fTemp520) + fRec148[1] * fTemp520;
			float fTemp521 = fSlow14 + std::min<float>(fRec139[0], fRec143[0]) + std::max<float>(fRec147[0], fRec148[0]);
			fVbargraph23 = FAUSTFLOAT(std::min<float>(12.0f, std::max<float>(-12.0f, fTemp521)));
			float fTemp522 = std::pow(1e+01f, 0.008333334f * fTemp521);
			fRec154[0] = fConst294 * (fRec142[2] + fRec142[0] + 2.0f * fRec142[1]) - fConst293 * (fConst298 * fRec154[2] + fConst296 * fRec154[1]);
			fRec153[0] = fConst293 * (fRec154[2] + fRec154[0] + 2.0f * fRec154[1]) - fConst290 * (fConst299 * fRec153[2] + fConst296 * fRec153[1]);
			fRec152[0] = fConst290 * (fRec153[2] + fRec153[0] + 2.0f * fRec153[1]) - fConst331 * (fConst332 * fRec152[2] + fConst333 * fRec152[1]);
			fRec151[0] = fConst331 * (fConst329 * fRec152[0] + fConst334 * fRec152[1] + fConst329 * fRec152[2]) - fConst330 * (fConst335 * fRec151[2] + fConst333 * fRec151[1]);
			fRec150[0] = fConst330 * (fConst329 * fRec151[0] + fConst334 * fRec151[1] + fConst329 * fRec151[2]) - fConst327 * (fConst336 * fRec150[2] + fConst333 * fRec150[1]);
			float fTemp523 = std::fabs(fConst327 * (fConst329 * fRec150[0] + fConst334 * fRec150[1] + fConst329 * fRec150[2]));
			fVec504[0] = fTemp523;
			float fTemp524 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp523));
			int iTemp525 = (fTemp524 > fSlow33) + (fTemp524 > fSlow34);
			float fTemp526 = 0.0f - fSlow30 * std::max<float>(0.0f, ((iTemp525 == 0) ? 0.0f : ((iTemp525 == 1) ? 0.0625f * mydsp_faustpower2_f(fSlow32 + (fTemp524 - fSlow1)) : fTemp524 - fSlow35)));
			float fTemp527 = ((fTemp526 > fRec149[1]) ? fSlow25 : fSlow39);
			fRec149[0] = fTemp526 * (1.0f - fTemp527) + fRec149[1] * fTemp527;
			fRec160[0] = fConst294 * (fRec146[2] + fRec146[0] + 2.0f * fRec146[1]) - fConst293 * (fConst298 * fRec160[2] + fConst296 * fRec160[1]);
			fRec159[0] = fConst293 * (fRec160[2] + fRec160[0] + 2.0f * fRec160[1]) - fConst290 * (fConst299 * fRec159[2] + fConst296 * fRec159[1]);
			fRec158[0] = fConst290 * (fRec159[2] + fRec159[0] + 2.0f * fRec159[1]) - fConst331 * (fConst332 * fRec158[2] + fConst333 * fRec158[1]);
			fRec157[0] = fConst331 * (fConst329 * fRec158[0] + fConst334 * fRec158[1] + fConst329 * fRec158[2]) - fConst330 * (fConst335 * fRec157[2] + fConst333 * fRec157[1]);
			fRec156[0] = fConst330 * (fConst329 * fRec157[0] + fConst334 * fRec157[1] + fConst329 * fRec157[2]) - fConst327 * (fConst336 * fRec156[2] + fConst333 * fRec156[1]);
			float fTemp528 = std::fabs(fConst327 * (fConst329 * fRec156[0] + fConst334 * fRec156[1] + fConst329 * fRec156[2]));
			fVec505[0] = fTemp528;
			float fTemp529 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp528));
			int iTemp530 = (fTemp529 > fSlow33) + (fTemp529 > fSlow34);
			float fTemp531 = 0.0f - fSlow30 * std::max<float>(0.0f, ((iTemp530 == 0) ? 0.0f : ((iTemp530 == 1) ? 0.0625f * mydsp_faustpower2_f(fSlow32 + (fTemp529 - fSlow1)) : fTemp529 - fSlow35)));
			float fTemp532 = ((fTemp531 > fRec155[1]) ? fSlow25 : fSlow39);
			fRec155[0] = fTemp531 * (1.0f - fTemp532) + fRec155[1] * fTemp532;
			float fTemp533 = std::max<float>(fTemp523, fVec504[1]);
			fVec506[0] = fTemp533;
			float fTemp534 = std::max<float>(fTemp533, fVec506[2]);
			fVec507[0] = fTemp534;
			float fTemp535 = std::max<float>(fTemp534, fVec507[4]);
			fVec508[0] = fTemp535;
			float fTemp536 = std::max<float>(fTemp535, fVec508[8]);
			fVec509[IOTA0 & 31] = fTemp536;
			float fTemp537 = std::max<float>(fTemp536, fVec509[(IOTA0 - 16) & 31]);
			fVec510[IOTA0 & 63] = fTemp537;
			float fTemp538 = std::max<float>(fTemp537, fVec510[(IOTA0 - 32) & 63]);
			fVec511[IOTA0 & 127] = fTemp538;
			float fTemp539 = std::max<float>(fTemp538, fVec511[(IOTA0 - 64) & 127]);
			fVec512[IOTA0 & 255] = fTemp539;
			float fTemp540 = std::max<float>(fTemp539, fVec512[(IOTA0 - 128) & 255]);
			fVec513[IOTA0 & 511] = fTemp540;
			float fTemp541 = std::max<float>(fTemp540, fVec513[(IOTA0 - 256) & 511]);
			fVec514[IOTA0 & 1023] = fTemp541;
			float fTemp542 = std::max<float>(fTemp541, fVec514[(IOTA0 - 512) & 1023]);
			fVec515[IOTA0 & 2047] = fTemp542;
			fVec516[IOTA0 & 4095] = std::max<float>(fTemp542, fVec515[(IOTA0 - 1024) & 2047]);
			float fTemp543 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst301) ? fTemp523 : -3.4028235e+38f), ((iConst302) ? fVec506[iConst301] : -3.4028235e+38f)), ((iConst303) ? fVec507[iConst304] : -3.4028235e+38f)), ((iConst305) ? fVec508[iConst306] : -3.4028235e+38f)), ((iConst307) ? fVec509[(IOTA0 - iConst308) & 31] : -3.4028235e+38f)), ((iConst309) ? fVec510[(IOTA0 - iConst310) & 63] : -3.4028235e+38f)), ((iConst311) ? fVec511[(IOTA0 - iConst312) & 127] : -3.4028235e+38f)), ((iConst313) ? fVec512[(IOTA0 - iConst314) & 255] : -3.4028235e+38f)), ((iConst315) ? fVec513[(IOTA0 - iConst316) & 511] : -3.4028235e+38f)), ((iConst317) ? fVec514[(IOTA0 - iConst318) & 1023] : -3.4028235e+38f)), ((iConst319) ? fVec515[(IOTA0 - iConst320) & 2047] : -3.4028235e+38f)), ((iConst321) ? fVec516[(IOTA0 - iConst322) & 4095] : -3.4028235e+38f))));
			int iTemp544 = (fTemp543 > fSlow40) + (fTemp543 > fSlow41);
			float fTemp545 = std::max<float>(fSlow26, 4e+01f * ((iTemp544 == 0) ? fTemp543 + 4e+01f - fSlow1 : ((iTemp544 == 1) ? 0.0f - 0.083333336f * mydsp_faustpower2_f(fTemp543 + 37.0f - fSlow1) : 0.0f)));
			float fTemp546 = ((fTemp545 > fRec161[1]) ? fConst337 : fConst16);
			fRec161[0] = fTemp545 * (1.0f - fTemp546) + fRec161[1] * fTemp546;
			float fTemp547 = std::max<float>(fTemp528, fVec505[1]);
			fVec517[0] = fTemp547;
			float fTemp548 = std::max<float>(fTemp547, fVec517[2]);
			fVec518[0] = fTemp548;
			float fTemp549 = std::max<float>(fTemp548, fVec518[4]);
			fVec519[0] = fTemp549;
			float fTemp550 = std::max<float>(fTemp549, fVec519[8]);
			fVec520[IOTA0 & 31] = fTemp550;
			float fTemp551 = std::max<float>(fTemp550, fVec520[(IOTA0 - 16) & 31]);
			fVec521[IOTA0 & 63] = fTemp551;
			float fTemp552 = std::max<float>(fTemp551, fVec521[(IOTA0 - 32) & 63]);
			fVec522[IOTA0 & 127] = fTemp552;
			float fTemp553 = std::max<float>(fTemp552, fVec522[(IOTA0 - 64) & 127]);
			fVec523[IOTA0 & 255] = fTemp553;
			float fTemp554 = std::max<float>(fTemp553, fVec523[(IOTA0 - 128) & 255]);
			fVec524[IOTA0 & 511] = fTemp554;
			float fTemp555 = std::max<float>(fTemp554, fVec524[(IOTA0 - 256) & 511]);
			fVec525[IOTA0 & 1023] = fTemp555;
			float fTemp556 = std::max<float>(fTemp555, fVec525[(IOTA0 - 512) & 1023]);
			fVec526[IOTA0 & 2047] = fTemp556;
			fVec527[IOTA0 & 4095] = std::max<float>(fTemp556, fVec526[(IOTA0 - 1024) & 2047]);
			float fTemp557 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst301) ? fTemp528 : -3.4028235e+38f), ((iConst302) ? fVec517[iConst301] : -3.4028235e+38f)), ((iConst303) ? fVec518[iConst304] : -3.4028235e+38f)), ((iConst305) ? fVec519[iConst306] : -3.4028235e+38f)), ((iConst307) ? fVec520[(IOTA0 - iConst308) & 31] : -3.4028235e+38f)), ((iConst309) ? fVec521[(IOTA0 - iConst310) & 63] : -3.4028235e+38f)), ((iConst311) ? fVec522[(IOTA0 - iConst312) & 127] : -3.4028235e+38f)), ((iConst313) ? fVec523[(IOTA0 - iConst314) & 255] : -3.4028235e+38f)), ((iConst315) ? fVec524[(IOTA0 - iConst316) & 511] : -3.4028235e+38f)), ((iConst317) ? fVec525[(IOTA0 - iConst318) & 1023] : -3.4028235e+38f)), ((iConst319) ? fVec526[(IOTA0 - iConst320) & 2047] : -3.4028235e+38f)), ((iConst321) ? fVec527[(IOTA0 - iConst322) & 4095] : -3.4028235e+38f))));
			int iTemp558 = (fTemp557 > fSlow40) + (fTemp557 > fSlow41);
			float fTemp559 = std::max<float>(fSlow26, 4e+01f * ((iTemp558 == 0) ? fTemp557 + 4e+01f - fSlow1 : ((iTemp558 == 1) ? 0.0f - 0.083333336f * mydsp_faustpower2_f(fTemp557 + 37.0f - fSlow1) : 0.0f)));
			float fTemp560 = ((fTemp559 > fRec162[1]) ? fConst337 : fConst16);
			fRec162[0] = fTemp559 * (1.0f - fTemp560) + fRec162[1] * fTemp560;
			float fTemp561 = fSlow14 + std::min<float>(fRec149[0], fRec155[0]) + std::max<float>(fRec161[0], fRec162[0]);
			fVbargraph24 = FAUSTFLOAT(std::min<float>(12.0f, std::max<float>(-12.0f, fTemp561)));
			float fTemp562 = fTemp561;
			float fTemp563 = std::pow(1e+01f, 0.008333334f * fTemp562);
			float fTemp564 = mydsp_faustpower2_f(fTemp563) + -1.0f;
			float fTemp565 = std::pow(1e+01f, 0.025f * (0.0f - 0.33333334f * fTemp562));
			float fTemp566 = mydsp_faustpower2_f(fTemp565) + -1.0f;
			fRec184[0] = fConst331 * (fRec152[2] + fRec152[0] + 2.0f * fRec152[1]) - fConst330 * (fConst335 * fRec184[2] + fConst333 * fRec184[1]);
			fRec183[0] = fConst330 * (fRec184[2] + fRec184[0] + 2.0f * fRec184[1]) - fConst327 * (fConst336 * fRec183[2] + fConst333 * fRec183[1]);
			fRec182[0] = fConst327 * (fRec183[2] + fRec183[0] + 2.0f * fRec183[1]) - fConst344 * (fConst345 * fRec182[2] + fConst346 * fRec182[1]);
			fRec181[0] = fConst344 * (fConst342 * fRec182[0] + fConst347 * fRec182[1] + fConst342 * fRec182[2]) - fConst343 * (fConst348 * fRec181[2] + fConst346 * fRec181[1]);
			fRec180[0] = fConst343 * (fConst342 * fRec181[0] + fConst347 * fRec181[1] + fConst342 * fRec181[2]) - fConst340 * (fConst349 * fRec180[2] + fConst346 * fRec180[1]);
			float fTemp567 = std::fabs(fConst340 * (fConst342 * fRec180[0] + fConst347 * fRec180[1] + fConst342 * fRec180[2]));
			fVec528[0] = fTemp567;
			float fTemp568 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp567));
			int iTemp569 = (fTemp568 > fSlow43) + (fTemp568 > fSlow44);
			float fTemp570 = 0.0f - fSlow42 * std::max<float>(0.0f, ((iTemp569 == 0) ? 0.0f : ((iTemp569 == 1) ? 0.071428575f * mydsp_faustpower2_f(fSlow17 + (fTemp568 + -2.5f - fSlow1)) : fSlow17 + (fTemp568 + -6.0f - fSlow1))));
			float fTemp571 = ((fTemp570 > fRec179[1]) ? fSlow50 : fSlow47);
			fRec179[0] = fTemp570 * (1.0f - fTemp571) + fRec179[1] * fTemp571;
			fRec190[0] = fConst331 * (fRec158[2] + fRec158[0] + 2.0f * fRec158[1]) - fConst330 * (fConst335 * fRec190[2] + fConst333 * fRec190[1]);
			fRec189[0] = fConst330 * (fRec190[2] + fRec190[0] + 2.0f * fRec190[1]) - fConst327 * (fConst336 * fRec189[2] + fConst333 * fRec189[1]);
			fRec188[0] = fConst327 * (fRec189[2] + fRec189[0] + 2.0f * fRec189[1]) - fConst344 * (fConst345 * fRec188[2] + fConst346 * fRec188[1]);
			fRec187[0] = fConst344 * (fConst342 * fRec188[0] + fConst347 * fRec188[1] + fConst342 * fRec188[2]) - fConst343 * (fConst348 * fRec187[2] + fConst346 * fRec187[1]);
			fRec186[0] = fConst343 * (fConst342 * fRec187[0] + fConst347 * fRec187[1] + fConst342 * fRec187[2]) - fConst340 * (fConst349 * fRec186[2] + fConst346 * fRec186[1]);
			float fTemp572 = std::fabs(fConst340 * (fConst342 * fRec186[0] + fConst347 * fRec186[1] + fConst342 * fRec186[2]));
			fVec529[0] = fTemp572;
			float fTemp573 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp572));
			int iTemp574 = (fTemp573 > fSlow43) + (fTemp573 > fSlow44);
			float fTemp575 = 0.0f - fSlow42 * std::max<float>(0.0f, ((iTemp574 == 0) ? 0.0f : ((iTemp574 == 1) ? 0.071428575f * mydsp_faustpower2_f(fSlow17 + (fTemp573 + -2.5f - fSlow1)) : fSlow17 + (fTemp573 + -6.0f - fSlow1))));
			float fTemp576 = ((fTemp575 > fRec185[1]) ? fSlow50 : fSlow47);
			fRec185[0] = fTemp575 * (1.0f - fTemp576) + fRec185[1] * fTemp576;
			float fTemp577 = std::max<float>(fTemp567, fVec528[1]);
			fVec530[0] = fTemp577;
			float fTemp578 = std::max<float>(fTemp577, fVec530[2]);
			fVec531[0] = fTemp578;
			float fTemp579 = std::max<float>(fTemp578, fVec531[4]);
			fVec532[0] = fTemp579;
			float fTemp580 = std::max<float>(fTemp579, fVec532[8]);
			fVec533[IOTA0 & 31] = fTemp580;
			float fTemp581 = std::max<float>(fTemp580, fVec533[(IOTA0 - 16) & 31]);
			fVec534[IOTA0 & 63] = fTemp581;
			float fTemp582 = std::max<float>(fTemp581, fVec534[(IOTA0 - 32) & 63]);
			fVec535[IOTA0 & 127] = fTemp582;
			float fTemp583 = std::max<float>(fTemp582, fVec535[(IOTA0 - 64) & 127]);
			fVec536[IOTA0 & 255] = fTemp583;
			float fTemp584 = std::max<float>(fTemp583, fVec536[(IOTA0 - 128) & 255]);
			fVec537[IOTA0 & 511] = fTemp584;
			float fTemp585 = std::max<float>(fTemp584, fVec537[(IOTA0 - 256) & 511]);
			fVec538[IOTA0 & 1023] = fTemp585;
			float fTemp586 = std::max<float>(fTemp585, fVec538[(IOTA0 - 512) & 1023]);
			fVec539[IOTA0 & 2047] = fTemp586;
			fVec540[IOTA0 & 4095] = std::max<float>(fTemp586, fVec539[(IOTA0 - 1024) & 2047]);
			float fTemp587 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst301) ? fTemp567 : -3.4028235e+38f), ((iConst302) ? fVec530[iConst301] : -3.4028235e+38f)), ((iConst303) ? fVec531[iConst304] : -3.4028235e+38f)), ((iConst305) ? fVec532[iConst306] : -3.4028235e+38f)), ((iConst307) ? fVec533[(IOTA0 - iConst308) & 31] : -3.4028235e+38f)), ((iConst309) ? fVec534[(IOTA0 - iConst310) & 63] : -3.4028235e+38f)), ((iConst311) ? fVec535[(IOTA0 - iConst312) & 127] : -3.4028235e+38f)), ((iConst313) ? fVec536[(IOTA0 - iConst314) & 255] : -3.4028235e+38f)), ((iConst315) ? fVec537[(IOTA0 - iConst316) & 511] : -3.4028235e+38f)), ((iConst317) ? fVec538[(IOTA0 - iConst318) & 1023] : -3.4028235e+38f)), ((iConst319) ? fVec539[(IOTA0 - iConst320) & 2047] : -3.4028235e+38f)), ((iConst321) ? fVec540[(IOTA0 - iConst322) & 4095] : -3.4028235e+38f))));
			int iTemp588 = (fTemp587 > fSlow40) + (fTemp587 > fSlow41);
			float fTemp589 = std::max<float>(fSlow26, 3e+01f * ((iTemp588 == 0) ? fTemp587 + 4e+01f - fSlow1 : ((iTemp588 == 1) ? 0.0f - 0.083333336f * mydsp_faustpower2_f(fTemp587 + 37.0f - fSlow1) : 0.0f)));
			float fTemp590 = ((fTemp589 > fRec191[1]) ? fConst351 : fConst350);
			fRec191[0] = fTemp589 * (1.0f - fTemp590) + fRec191[1] * fTemp590;
			float fTemp591 = std::max<float>(fTemp572, fVec529[1]);
			fVec541[0] = fTemp591;
			float fTemp592 = std::max<float>(fTemp591, fVec541[2]);
			fVec542[0] = fTemp592;
			float fTemp593 = std::max<float>(fTemp592, fVec542[4]);
			fVec543[0] = fTemp593;
			float fTemp594 = std::max<float>(fTemp593, fVec543[8]);
			fVec544[IOTA0 & 31] = fTemp594;
			float fTemp595 = std::max<float>(fTemp594, fVec544[(IOTA0 - 16) & 31]);
			fVec545[IOTA0 & 63] = fTemp595;
			float fTemp596 = std::max<float>(fTemp595, fVec545[(IOTA0 - 32) & 63]);
			fVec546[IOTA0 & 127] = fTemp596;
			float fTemp597 = std::max<float>(fTemp596, fVec546[(IOTA0 - 64) & 127]);
			fVec547[IOTA0 & 255] = fTemp597;
			float fTemp598 = std::max<float>(fTemp597, fVec547[(IOTA0 - 128) & 255]);
			fVec548[IOTA0 & 511] = fTemp598;
			float fTemp599 = std::max<float>(fTemp598, fVec548[(IOTA0 - 256) & 511]);
			fVec549[IOTA0 & 1023] = fTemp599;
			float fTemp600 = std::max<float>(fTemp599, fVec549[(IOTA0 - 512) & 1023]);
			fVec550[IOTA0 & 2047] = fTemp600;
			fVec551[IOTA0 & 4095] = std::max<float>(fTemp600, fVec550[(IOTA0 - 1024) & 2047]);
			float fTemp601 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst301) ? fTemp572 : -3.4028235e+38f), ((iConst302) ? fVec541[iConst301] : -3.4028235e+38f)), ((iConst303) ? fVec542[iConst304] : -3.4028235e+38f)), ((iConst305) ? fVec543[iConst306] : -3.4028235e+38f)), ((iConst307) ? fVec544[(IOTA0 - iConst308) & 31] : -3.4028235e+38f)), ((iConst309) ? fVec545[(IOTA0 - iConst310) & 63] : -3.4028235e+38f)), ((iConst311) ? fVec546[(IOTA0 - iConst312) & 127] : -3.4028235e+38f)), ((iConst313) ? fVec547[(IOTA0 - iConst314) & 255] : -3.4028235e+38f)), ((iConst315) ? fVec548[(IOTA0 - iConst316) & 511] : -3.4028235e+38f)), ((iConst317) ? fVec549[(IOTA0 - iConst318) & 1023] : -3.4028235e+38f)), ((iConst319) ? fVec550[(IOTA0 - iConst320) & 2047] : -3.4028235e+38f)), ((iConst321) ? fVec551[(IOTA0 - iConst322) & 4095] : -3.4028235e+38f))));
			int iTemp602 = (fTemp601 > fSlow40) + (fTemp601 > fSlow41);
			float fTemp603 = std::max<float>(fSlow26, 3e+01f * ((iTemp602 == 0) ? fTemp601 + 4e+01f - fSlow1 : ((iTemp602 == 1) ? 0.0f - 0.083333336f * mydsp_faustpower2_f(fTemp601 + 37.0f - fSlow1) : 0.0f)));
			float fTemp604 = ((fTemp603 > fRec192[1]) ? fConst351 : fConst350);
			fRec192[0] = fTemp603 * (1.0f - fTemp604) + fRec192[1] * fTemp604;
			float fTemp605 = fSlow14 + std::min<float>(fRec179[0], fRec185[0]) + std::max<float>(fRec191[0], fRec192[0]);
			fVbargraph25 = FAUSTFLOAT(std::min<float>(12.0f, std::max<float>(-12.0f, fTemp605)));
			float fTemp606 = fTemp605;
			float fTemp607 = std::pow(1e+01f, 0.008333334f * fTemp606);
			float fTemp608 = mydsp_faustpower2_f(fTemp607) + -1.0f;
			float fTemp609 = std::pow(1e+01f, 0.025f * (0.0f - 0.33333334f * fTemp606));
			float fTemp610 = mydsp_faustpower2_f(fTemp609) + -1.0f;
			fRec214[0] = fConst344 * (fRec182[2] + fRec182[0] + 2.0f * fRec182[1]) - fConst343 * (fConst348 * fRec214[2] + fConst346 * fRec214[1]);
			fRec213[0] = fConst343 * (fRec214[2] + fRec214[0] + 2.0f * fRec214[1]) - fConst340 * (fConst349 * fRec213[2] + fConst346 * fRec213[1]);
			fRec212[0] = fConst340 * (fRec213[2] + fRec213[0] + 2.0f * fRec213[1]) - fConst358 * (fConst359 * fRec212[2] + fConst360 * fRec212[1]);
			fRec211[0] = fConst358 * (fConst356 * fRec212[0] + fConst361 * fRec212[1] + fConst356 * fRec212[2]) - fConst357 * (fConst362 * fRec211[2] + fConst360 * fRec211[1]);
			fRec210[0] = fConst357 * (fConst356 * fRec211[0] + fConst361 * fRec211[1] + fConst356 * fRec211[2]) - fConst354 * (fConst363 * fRec210[2] + fConst360 * fRec210[1]);
			float fTemp611 = std::fabs(fConst354 * (fConst356 * fRec210[0] + fConst361 * fRec210[1] + fConst356 * fRec210[2]));
			fVec552[0] = fTemp611;
			float fTemp612 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp611));
			int iTemp613 = (fTemp612 > fSlow52) + (fTemp612 > fSlow53);
			float fTemp614 = 0.0f - fSlow51 * std::max<float>(0.0f, ((iTemp613 == 0) ? 0.0f : ((iTemp613 == 1) ? 0.083333336f * mydsp_faustpower2_f(fSlow17 + (fTemp612 + -5.0f - fSlow1)) : fSlow17 + (fTemp612 + -8.0f - fSlow1))));
			float fTemp615 = ((fTemp614 > fRec209[1]) ? fSlow59 : fSlow56);
			fRec209[0] = fTemp614 * (1.0f - fTemp615) + fRec209[1] * fTemp615;
			fRec220[0] = fConst344 * (fRec188[2] + fRec188[0] + 2.0f * fRec188[1]) - fConst343 * (fConst348 * fRec220[2] + fConst346 * fRec220[1]);
			fRec219[0] = fConst343 * (fRec220[2] + fRec220[0] + 2.0f * fRec220[1]) - fConst340 * (fConst349 * fRec219[2] + fConst346 * fRec219[1]);
			fRec218[0] = fConst340 * (fRec219[2] + fRec219[0] + 2.0f * fRec219[1]) - fConst358 * (fConst359 * fRec218[2] + fConst360 * fRec218[1]);
			fRec217[0] = fConst358 * (fConst356 * fRec218[0] + fConst361 * fRec218[1] + fConst356 * fRec218[2]) - fConst357 * (fConst362 * fRec217[2] + fConst360 * fRec217[1]);
			fRec216[0] = fConst357 * (fConst356 * fRec217[0] + fConst361 * fRec217[1] + fConst356 * fRec217[2]) - fConst354 * (fConst363 * fRec216[2] + fConst360 * fRec216[1]);
			float fTemp616 = std::fabs(fConst354 * (fConst356 * fRec216[0] + fConst361 * fRec216[1] + fConst356 * fRec216[2]));
			fVec553[0] = fTemp616;
			float fTemp617 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp616));
			int iTemp618 = (fTemp617 > fSlow52) + (fTemp617 > fSlow53);
			float fTemp619 = 0.0f - fSlow51 * std::max<float>(0.0f, ((iTemp618 == 0) ? 0.0f : ((iTemp618 == 1) ? 0.083333336f * mydsp_faustpower2_f(fSlow17 + (fTemp617 + -5.0f - fSlow1)) : fSlow17 + (fTemp617 + -8.0f - fSlow1))));
			float fTemp620 = ((fTemp619 > fRec215[1]) ? fSlow59 : fSlow56);
			fRec215[0] = fTemp619 * (1.0f - fTemp620) + fRec215[1] * fTemp620;
			float fTemp621 = std::max<float>(fTemp611, fVec552[1]);
			fVec554[0] = fTemp621;
			float fTemp622 = std::max<float>(fTemp621, fVec554[2]);
			fVec555[0] = fTemp622;
			float fTemp623 = std::max<float>(fTemp622, fVec555[4]);
			fVec556[0] = fTemp623;
			float fTemp624 = std::max<float>(fTemp623, fVec556[8]);
			fVec557[IOTA0 & 31] = fTemp624;
			float fTemp625 = std::max<float>(fTemp624, fVec557[(IOTA0 - 16) & 31]);
			fVec558[IOTA0 & 63] = fTemp625;
			float fTemp626 = std::max<float>(fTemp625, fVec558[(IOTA0 - 32) & 63]);
			fVec559[IOTA0 & 127] = fTemp626;
			float fTemp627 = std::max<float>(fTemp626, fVec559[(IOTA0 - 64) & 127]);
			fVec560[IOTA0 & 255] = fTemp627;
			float fTemp628 = std::max<float>(fTemp627, fVec560[(IOTA0 - 128) & 255]);
			fVec561[IOTA0 & 511] = fTemp628;
			float fTemp629 = std::max<float>(fTemp628, fVec561[(IOTA0 - 256) & 511]);
			fVec562[IOTA0 & 1023] = fTemp629;
			float fTemp630 = std::max<float>(fTemp629, fVec562[(IOTA0 - 512) & 1023]);
			fVec563[IOTA0 & 2047] = fTemp630;
			fVec564[IOTA0 & 4095] = std::max<float>(fTemp630, fVec563[(IOTA0 - 1024) & 2047]);
			float fTemp631 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst301) ? fTemp611 : -3.4028235e+38f), ((iConst302) ? fVec554[iConst301] : -3.4028235e+38f)), ((iConst303) ? fVec555[iConst304] : -3.4028235e+38f)), ((iConst305) ? fVec556[iConst306] : -3.4028235e+38f)), ((iConst307) ? fVec557[(IOTA0 - iConst308) & 31] : -3.4028235e+38f)), ((iConst309) ? fVec558[(IOTA0 - iConst310) & 63] : -3.4028235e+38f)), ((iConst311) ? fVec559[(IOTA0 - iConst312) & 127] : -3.4028235e+38f)), ((iConst313) ? fVec560[(IOTA0 - iConst314) & 255] : -3.4028235e+38f)), ((iConst315) ? fVec561[(IOTA0 - iConst316) & 511] : -3.4028235e+38f)), ((iConst317) ? fVec562[(IOTA0 - iConst318) & 1023] : -3.4028235e+38f)), ((iConst319) ? fVec563[(IOTA0 - iConst320) & 2047] : -3.4028235e+38f)), ((iConst321) ? fVec564[(IOTA0 - iConst322) & 4095] : -3.4028235e+38f))));
			int iTemp632 = (fTemp631 > fSlow60) + (fTemp631 > fSlow61);
			float fTemp633 = std::max<float>(fSlow26, 2e+01f * ((iTemp632 == 0) ? fTemp631 + 3e+01f - fSlow1 : ((iTemp632 == 1) ? 0.0f - 0.083333336f * mydsp_faustpower2_f(fTemp631 + 27.0f - fSlow1) : 0.0f)));
			float fTemp634 = ((fTemp633 > fRec221[1]) ? fConst134 : fConst364);
			fRec221[0] = fTemp633 * (1.0f - fTemp634) + fRec221[1] * fTemp634;
			float fTemp635 = std::max<float>(fTemp616, fVec553[1]);
			fVec565[0] = fTemp635;
			float fTemp636 = std::max<float>(fTemp635, fVec565[2]);
			fVec566[0] = fTemp636;
			float fTemp637 = std::max<float>(fTemp636, fVec566[4]);
			fVec567[0] = fTemp637;
			float fTemp638 = std::max<float>(fTemp637, fVec567[8]);
			fVec568[IOTA0 & 31] = fTemp638;
			float fTemp639 = std::max<float>(fTemp638, fVec568[(IOTA0 - 16) & 31]);
			fVec569[IOTA0 & 63] = fTemp639;
			float fTemp640 = std::max<float>(fTemp639, fVec569[(IOTA0 - 32) & 63]);
			fVec570[IOTA0 & 127] = fTemp640;
			float fTemp641 = std::max<float>(fTemp640, fVec570[(IOTA0 - 64) & 127]);
			fVec571[IOTA0 & 255] = fTemp641;
			float fTemp642 = std::max<float>(fTemp641, fVec571[(IOTA0 - 128) & 255]);
			fVec572[IOTA0 & 511] = fTemp642;
			float fTemp643 = std::max<float>(fTemp642, fVec572[(IOTA0 - 256) & 511]);
			fVec573[IOTA0 & 1023] = fTemp643;
			float fTemp644 = std::max<float>(fTemp643, fVec573[(IOTA0 - 512) & 1023]);
			fVec574[IOTA0 & 2047] = fTemp644;
			fVec575[IOTA0 & 4095] = std::max<float>(fTemp644, fVec574[(IOTA0 - 1024) & 2047]);
			float fTemp645 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst301) ? fTemp616 : -3.4028235e+38f), ((iConst302) ? fVec565[iConst301] : -3.4028235e+38f)), ((iConst303) ? fVec566[iConst304] : -3.4028235e+38f)), ((iConst305) ? fVec567[iConst306] : -3.4028235e+38f)), ((iConst307) ? fVec568[(IOTA0 - iConst308) & 31] : -3.4028235e+38f)), ((iConst309) ? fVec569[(IOTA0 - iConst310) & 63] : -3.4028235e+38f)), ((iConst311) ? fVec570[(IOTA0 - iConst312) & 127] : -3.4028235e+38f)), ((iConst313) ? fVec571[(IOTA0 - iConst314) & 255] : -3.4028235e+38f)), ((iConst315) ? fVec572[(IOTA0 - iConst316) & 511] : -3.4028235e+38f)), ((iConst317) ? fVec573[(IOTA0 - iConst318) & 1023] : -3.4028235e+38f)), ((iConst319) ? fVec574[(IOTA0 - iConst320) & 2047] : -3.4028235e+38f)), ((iConst321) ? fVec575[(IOTA0 - iConst322) & 4095] : -3.4028235e+38f))));
			int iTemp646 = (fTemp645 > fSlow60) + (fTemp645 > fSlow61);
			float fTemp647 = std::max<float>(fSlow26, 2e+01f * ((iTemp646 == 0) ? fTemp645 + 3e+01f - fSlow1 : ((iTemp646 == 1) ? 0.0f - 0.083333336f * mydsp_faustpower2_f(fTemp645 + 27.0f - fSlow1) : 0.0f)));
			float fTemp648 = ((fTemp647 > fRec222[1]) ? fConst134 : fConst364);
			fRec222[0] = fTemp647 * (1.0f - fTemp648) + fRec222[1] * fTemp648;
			float fTemp649 = fSlow14 + std::min<float>(fRec209[0], fRec215[0]) + std::max<float>(fRec221[0], fRec222[0]);
			fVbargraph26 = FAUSTFLOAT(std::min<float>(12.0f, std::max<float>(-12.0f, fTemp649)));
			float fTemp650 = fTemp649;
			float fTemp651 = std::pow(1e+01f, 0.008333334f * fTemp650);
			float fTemp652 = mydsp_faustpower2_f(fTemp651) + -1.0f;
			float fTemp653 = std::pow(1e+01f, 0.025f * (0.0f - 0.33333334f * fTemp650));
			float fTemp654 = mydsp_faustpower2_f(fTemp653) + -1.0f;
			fRec241[0] = fConst358 * (fRec212[2] + fRec212[0] + 2.0f * fRec212[1]) - fConst357 * (fConst362 * fRec241[2] + fConst360 * fRec241[1]);
			fRec240[0] = fConst357 * (fRec241[2] + fRec241[0] + 2.0f * fRec241[1]) - fConst354 * (fConst363 * fRec240[2] + fConst360 * fRec240[1]);
			float fTemp655 = std::fabs(fConst354 * (fRec240[2] + fRec240[0] + 2.0f * fRec240[1]));
			fVec576[0] = fTemp655;
			float fTemp656 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp655));
			int iTemp657 = (fTemp656 > fSlow64) + (fTemp656 > fSlow65);
			float fTemp658 = 0.0f - fSlow62 * std::max<float>(0.0f, ((iTemp657 == 0) ? 0.0f : ((iTemp657 == 1) ? 0.083333336f * mydsp_faustpower2_f(fSlow63 + (fTemp656 + 1.0f - fSlow1)) : fSlow63 + (fTemp656 + -2.0f - fSlow1))));
			float fTemp659 = ((fTemp658 > fRec239[1]) ? fSlow59 : fSlow68);
			fRec239[0] = fTemp658 * (1.0f - fTemp659) + fRec239[1] * fTemp659;
			fRec244[0] = fConst358 * (fRec218[2] + fRec218[0] + 2.0f * fRec218[1]) - fConst357 * (fConst362 * fRec244[2] + fConst360 * fRec244[1]);
			fRec243[0] = fConst357 * (fRec244[2] + fRec244[0] + 2.0f * fRec244[1]) - fConst354 * (fConst363 * fRec243[2] + fConst360 * fRec243[1]);
			float fTemp660 = std::fabs(fConst354 * (fRec243[2] + fRec243[0] + 2.0f * fRec243[1]));
			fVec577[0] = fTemp660;
			float fTemp661 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp660));
			int iTemp662 = (fTemp661 > fSlow64) + (fTemp661 > fSlow65);
			float fTemp663 = 0.0f - fSlow62 * std::max<float>(0.0f, ((iTemp662 == 0) ? 0.0f : ((iTemp662 == 1) ? 0.083333336f * mydsp_faustpower2_f(fSlow63 + (fTemp661 + 1.0f - fSlow1)) : fSlow63 + (fTemp661 + -2.0f - fSlow1))));
			float fTemp664 = ((fTemp663 > fRec242[1]) ? fSlow59 : fSlow68);
			fRec242[0] = fTemp663 * (1.0f - fTemp664) + fRec242[1] * fTemp664;
			float fTemp665 = std::max<float>(fTemp655, fVec576[1]);
			fVec578[0] = fTemp665;
			float fTemp666 = std::max<float>(fTemp665, fVec578[2]);
			fVec579[0] = fTemp666;
			float fTemp667 = std::max<float>(fTemp666, fVec579[4]);
			fVec580[0] = fTemp667;
			float fTemp668 = std::max<float>(fTemp667, fVec580[8]);
			fVec581[IOTA0 & 31] = fTemp668;
			float fTemp669 = std::max<float>(fTemp668, fVec581[(IOTA0 - 16) & 31]);
			fVec582[IOTA0 & 63] = fTemp669;
			float fTemp670 = std::max<float>(fTemp669, fVec582[(IOTA0 - 32) & 63]);
			fVec583[IOTA0 & 127] = fTemp670;
			float fTemp671 = std::max<float>(fTemp670, fVec583[(IOTA0 - 64) & 127]);
			fVec584[IOTA0 & 255] = fTemp671;
			float fTemp672 = std::max<float>(fTemp671, fVec584[(IOTA0 - 128) & 255]);
			fVec585[IOTA0 & 511] = fTemp672;
			float fTemp673 = std::max<float>(fTemp672, fVec585[(IOTA0 - 256) & 511]);
			fVec586[IOTA0 & 1023] = fTemp673;
			float fTemp674 = std::max<float>(fTemp673, fVec586[(IOTA0 - 512) & 1023]);
			fVec587[IOTA0 & 2047] = fTemp674;
			fVec588[IOTA0 & 4095] = std::max<float>(fTemp674, fVec587[(IOTA0 - 1024) & 2047]);
			float fTemp675 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst301) ? fTemp655 : -3.4028235e+38f), ((iConst302) ? fVec578[iConst301] : -3.4028235e+38f)), ((iConst303) ? fVec579[iConst304] : -3.4028235e+38f)), ((iConst305) ? fVec580[iConst306] : -3.4028235e+38f)), ((iConst307) ? fVec581[(IOTA0 - iConst308) & 31] : -3.4028235e+38f)), ((iConst309) ? fVec582[(IOTA0 - iConst310) & 63] : -3.4028235e+38f)), ((iConst311) ? fVec583[(IOTA0 - iConst312) & 127] : -3.4028235e+38f)), ((iConst313) ? fVec584[(IOTA0 - iConst314) & 255] : -3.4028235e+38f)), ((iConst315) ? fVec585[(IOTA0 - iConst316) & 511] : -3.4028235e+38f)), ((iConst317) ? fVec586[(IOTA0 - iConst318) & 1023] : -3.4028235e+38f)), ((iConst319) ? fVec587[(IOTA0 - iConst320) & 2047] : -3.4028235e+38f)), ((iConst321) ? fVec588[(IOTA0 - iConst322) & 4095] : -3.4028235e+38f))));
			int iTemp676 = (fTemp675 > fSlow60) + (fTemp675 > fSlow61);
			float fTemp677 = std::max<float>(fSlow26, 1e+01f * ((iTemp676 == 0) ? fTemp675 + 3e+01f - fSlow1 : ((iTemp676 == 1) ? 0.0f - 0.083333336f * mydsp_faustpower2_f(fTemp675 + 27.0f - fSlow1) : 0.0f)));
			float fTemp678 = ((fTemp677 > fRec245[1]) ? fConst134 : fConst133);
			fRec245[0] = fTemp677 * (1.0f - fTemp678) + fRec245[1] * fTemp678;
			float fTemp679 = std::max<float>(fTemp660, fVec577[1]);
			fVec589[0] = fTemp679;
			float fTemp680 = std::max<float>(fTemp679, fVec589[2]);
			fVec590[0] = fTemp680;
			float fTemp681 = std::max<float>(fTemp680, fVec590[4]);
			fVec591[0] = fTemp681;
			float fTemp682 = std::max<float>(fTemp681, fVec591[8]);
			fVec592[IOTA0 & 31] = fTemp682;
			float fTemp683 = std::max<float>(fTemp682, fVec592[(IOTA0 - 16) & 31]);
			fVec593[IOTA0 & 63] = fTemp683;
			float fTemp684 = std::max<float>(fTemp683, fVec593[(IOTA0 - 32) & 63]);
			fVec594[IOTA0 & 127] = fTemp684;
			float fTemp685 = std::max<float>(fTemp684, fVec594[(IOTA0 - 64) & 127]);
			fVec595[IOTA0 & 255] = fTemp685;
			float fTemp686 = std::max<float>(fTemp685, fVec595[(IOTA0 - 128) & 255]);
			fVec596[IOTA0 & 511] = fTemp686;
			float fTemp687 = std::max<float>(fTemp686, fVec596[(IOTA0 - 256) & 511]);
			fVec597[IOTA0 & 1023] = fTemp687;
			float fTemp688 = std::max<float>(fTemp687, fVec597[(IOTA0 - 512) & 1023]);
			fVec598[IOTA0 & 2047] = fTemp688;
			fVec599[IOTA0 & 4095] = std::max<float>(fTemp688, fVec598[(IOTA0 - 1024) & 2047]);
			float fTemp689 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst301) ? fTemp660 : -3.4028235e+38f), ((iConst302) ? fVec589[iConst301] : -3.4028235e+38f)), ((iConst303) ? fVec590[iConst304] : -3.4028235e+38f)), ((iConst305) ? fVec591[iConst306] : -3.4028235e+38f)), ((iConst307) ? fVec592[(IOTA0 - iConst308) & 31] : -3.4028235e+38f)), ((iConst309) ? fVec593[(IOTA0 - iConst310) & 63] : -3.4028235e+38f)), ((iConst311) ? fVec594[(IOTA0 - iConst312) & 127] : -3.4028235e+38f)), ((iConst313) ? fVec595[(IOTA0 - iConst314) & 255] : -3.4028235e+38f)), ((iConst315) ? fVec596[(IOTA0 - iConst316) & 511] : -3.4028235e+38f)), ((iConst317) ? fVec597[(IOTA0 - iConst318) & 1023] : -3.4028235e+38f)), ((iConst319) ? fVec598[(IOTA0 - iConst320) & 2047] : -3.4028235e+38f)), ((iConst321) ? fVec599[(IOTA0 - iConst322) & 4095] : -3.4028235e+38f))));
			int iTemp690 = (fTemp689 > fSlow60) + (fTemp689 > fSlow61);
			float fTemp691 = std::max<float>(fSlow26, 1e+01f * ((iTemp690 == 0) ? fTemp689 + 3e+01f - fSlow1 : ((iTemp690 == 1) ? 0.0f - 0.083333336f * mydsp_faustpower2_f(fTemp689 + 27.0f - fSlow1) : 0.0f)));
			float fTemp692 = ((fTemp691 > fRec246[1]) ? fConst134 : fConst133);
			fRec246[0] = fTemp691 * (1.0f - fTemp692) + fRec246[1] * fTemp692;
			float fTemp693 = fSlow14 + std::min<float>(fRec239[0], fRec242[0]) + std::max<float>(fRec245[0], fRec246[0]);
			fVbargraph27 = FAUSTFLOAT(std::min<float>(12.0f, std::max<float>(-12.0f, fTemp693)));
			float fTemp694 = std::pow(1e+01f, 0.008333334f * fTemp693);
			float fTemp695 = mydsp_faustpower2_f(fTemp694) + -1.0f;
			float fTemp696 = std::sqrt(fTemp694);
			float fTemp697 = fRec251[1] + fConst352 * ((fRec7[0] - fRec252[1]) / fTemp696);
			float fTemp698 = fConst352 / fTemp696;
			float fTemp699 = fConst352 * ((fTemp698 + 2.0f) / fTemp696) + 1.0f;
			float fTemp700 = fTemp697 / fTemp699;
			fRec251[0] = 2.0f * fTemp700 - fRec251[1];
			float fTemp701 = fTemp696 * fTemp699;
			float fTemp702 = fRec252[1] + fConst352 * (fTemp697 / fTemp701);
			fRec252[0] = 2.0f * fTemp702 - fRec252[1];
			float fRec253 = fTemp700;
			float fRec254 = fTemp702;
			float fTemp703 = fTemp694 + -1.0f;
			float fTemp704 = fRec7[0] + 2.0f * fRec253 * fTemp703 + fRec254 * fTemp695;
			float fTemp705 = fRec255[1] + fConst352 * ((fTemp704 - fRec256[1]) / fTemp696);
			float fTemp706 = fConst352 * ((fTemp698 + 1.4144272f) / fTemp696) + 1.0f;
			float fTemp707 = fTemp705 / fTemp706;
			fRec255[0] = 2.0f * fTemp707 - fRec255[1];
			float fTemp708 = fTemp696 * fTemp706;
			float fTemp709 = fRec256[1] + fConst352 * (fTemp705 / fTemp708);
			fRec256[0] = 2.0f * fTemp709 - fRec256[1];
			float fRec257 = fTemp707;
			float fRec258 = fTemp709;
			float fTemp710 = fRec254 + fRec258;
			float fTemp711 = 2.0f * fRec253 + 1.4144272f * fRec257;
			float fTemp712 = fTemp695 * fTemp710 + fRec7[0] + fTemp703 * fTemp711;
			float fTemp713 = fRec247[1] + fConst352 * ((fTemp712 - fRec248[1]) / fTemp696);
			float fTemp714 = fConst352 * ((fTemp698 + 0.5f) / fTemp696) + 1.0f;
			float fTemp715 = fTemp713 / fTemp714;
			fRec247[0] = 2.0f * fTemp715 - fRec247[1];
			float fTemp716 = fTemp696 * fTemp714;
			float fTemp717 = fRec248[1] + fConst352 * (fTemp713 / fTemp716);
			fRec248[0] = 2.0f * fTemp717 - fRec248[1];
			float fRec249 = fTemp715;
			float fRec250 = fTemp717;
			float fTemp718 = fTemp695 * (fRec250 + fTemp710) + fRec7[0] + fTemp703 * (fTemp711 + 0.5f * fRec249);
			float fTemp719 = std::sqrt(fTemp653);
			float fTemp720 = fRec235[1] + fConst352 * ((fTemp718 - fRec236[1]) / fTemp719);
			float fTemp721 = fConst352 / fTemp719;
			float fTemp722 = fConst352 * ((fTemp721 + 2.0f) / fTemp719) + 1.0f;
			float fTemp723 = fTemp720 / fTemp722;
			fRec235[0] = 2.0f * fTemp723 - fRec235[1];
			float fTemp724 = fTemp719 * fTemp722;
			float fTemp725 = fRec236[1] + fConst352 * (fTemp720 / fTemp724);
			fRec236[0] = 2.0f * fTemp725 - fRec236[1];
			float fRec237 = fTemp723;
			float fRec238 = fTemp725;
			float fTemp726 = fTemp653 + -1.0f;
			float fTemp727 = fTemp718 + 2.0f * fRec237 * fTemp726 + fRec238 * fTemp654;
			float fTemp728 = fRec259[1] + fConst352 * ((fTemp727 - fRec260[1]) / fTemp719);
			float fTemp729 = fConst352 * ((fTemp721 + 1.4144272f) / fTemp719) + 1.0f;
			float fTemp730 = fTemp728 / fTemp729;
			fRec259[0] = 2.0f * fTemp730 - fRec259[1];
			float fTemp731 = fTemp719 * fTemp729;
			float fTemp732 = fRec260[1] + fConst352 * (fTemp728 / fTemp731);
			fRec260[0] = 2.0f * fTemp732 - fRec260[1];
			float fRec261 = fTemp730;
			float fRec262 = fTemp732;
			float fTemp733 = fRec238 + fRec262;
			float fTemp734 = 2.0f * fRec237 + 1.4144272f * fRec261;
			float fTemp735 = fTemp654 * fTemp733 + fTemp718 + fTemp726 * fTemp734;
			float fTemp736 = fRec231[1] + fConst352 * ((fTemp735 - fRec232[1]) / fTemp719);
			float fTemp737 = fConst352 * ((fTemp721 + 0.5f) / fTemp719) + 1.0f;
			float fTemp738 = fTemp736 / fTemp737;
			fRec231[0] = 2.0f * fTemp738 - fRec231[1];
			float fTemp739 = fTemp719 * fTemp737;
			float fTemp740 = fRec232[1] + fConst352 * (fTemp736 / fTemp739);
			fRec232[0] = 2.0f * fTemp740 - fRec232[1];
			float fRec233 = fTemp738;
			float fRec234 = fTemp740;
			float fTemp741 = fTemp654 * (fRec234 + fTemp733) + fTemp718 + fTemp726 * (fTemp734 + 0.5f * fRec233);
			float fTemp742 = std::sqrt(fTemp651);
			float fTemp743 = fRec227[1] + fConst338 * ((fTemp741 - fRec228[1]) / fTemp742);
			float fTemp744 = fConst338 / fTemp742;
			float fTemp745 = fConst338 * ((fTemp744 + 2.0f) / fTemp742) + 1.0f;
			float fTemp746 = fTemp743 / fTemp745;
			fRec227[0] = 2.0f * fTemp746 - fRec227[1];
			float fTemp747 = fTemp742 * fTemp745;
			float fTemp748 = fRec228[1] + fConst338 * (fTemp743 / fTemp747);
			fRec228[0] = 2.0f * fTemp748 - fRec228[1];
			float fRec229 = fTemp746;
			float fRec230 = fTemp748;
			float fTemp749 = fTemp651 + -1.0f;
			float fTemp750 = fTemp741 + 2.0f * fRec229 * fTemp749 + fRec230 * fTemp652;
			float fTemp751 = fRec263[1] + fConst338 * ((fTemp750 - fRec264[1]) / fTemp742);
			float fTemp752 = fConst338 * ((fTemp744 + 1.4144272f) / fTemp742) + 1.0f;
			float fTemp753 = fTemp751 / fTemp752;
			fRec263[0] = 2.0f * fTemp753 - fRec263[1];
			float fTemp754 = fTemp742 * fTemp752;
			float fTemp755 = fRec264[1] + fConst338 * (fTemp751 / fTemp754);
			fRec264[0] = 2.0f * fTemp755 - fRec264[1];
			float fRec265 = fTemp753;
			float fRec266 = fTemp755;
			float fTemp756 = fRec230 + fRec266;
			float fTemp757 = 2.0f * fRec229 + 1.4144272f * fRec265;
			float fTemp758 = fTemp652 * fTemp756 + fTemp741 + fTemp749 * fTemp757;
			float fTemp759 = fRec223[1] + fConst338 * ((fTemp758 - fRec224[1]) / fTemp742);
			float fTemp760 = fConst338 * ((fTemp744 + 0.5f) / fTemp742) + 1.0f;
			float fTemp761 = fTemp759 / fTemp760;
			fRec223[0] = 2.0f * fTemp761 - fRec223[1];
			float fTemp762 = fTemp742 * fTemp760;
			float fTemp763 = fRec224[1] + fConst338 * (fTemp759 / fTemp762);
			fRec224[0] = 2.0f * fTemp763 - fRec224[1];
			float fRec225 = fTemp761;
			float fRec226 = fTemp763;
			float fTemp764 = fTemp652 * (fRec226 + fTemp756) + fTemp741 + fTemp749 * (fTemp757 + 0.5f * fRec225);
			float fTemp765 = std::sqrt(fTemp609);
			float fTemp766 = fRec205[1] + fConst338 * ((fTemp764 - fRec206[1]) / fTemp765);
			float fTemp767 = fConst338 / fTemp765;
			float fTemp768 = fConst338 * ((fTemp767 + 2.0f) / fTemp765) + 1.0f;
			float fTemp769 = fTemp766 / fTemp768;
			fRec205[0] = 2.0f * fTemp769 - fRec205[1];
			float fTemp770 = fTemp765 * fTemp768;
			float fTemp771 = fRec206[1] + fConst338 * (fTemp766 / fTemp770);
			fRec206[0] = 2.0f * fTemp771 - fRec206[1];
			float fRec207 = fTemp769;
			float fRec208 = fTemp771;
			float fTemp772 = fTemp609 + -1.0f;
			float fTemp773 = fTemp764 + 2.0f * fRec207 * fTemp772 + fRec208 * fTemp610;
			float fTemp774 = fRec267[1] + fConst338 * ((fTemp773 - fRec268[1]) / fTemp765);
			float fTemp775 = fConst338 * ((fTemp767 + 1.4144272f) / fTemp765) + 1.0f;
			float fTemp776 = fTemp774 / fTemp775;
			fRec267[0] = 2.0f * fTemp776 - fRec267[1];
			float fTemp777 = fTemp765 * fTemp775;
			float fTemp778 = fRec268[1] + fConst338 * (fTemp774 / fTemp777);
			fRec268[0] = 2.0f * fTemp778 - fRec268[1];
			float fRec269 = fTemp776;
			float fRec270 = fTemp778;
			float fTemp779 = fRec208 + fRec270;
			float fTemp780 = 2.0f * fRec207 + 1.4144272f * fRec269;
			float fTemp781 = fTemp610 * fTemp779 + fTemp764 + fTemp772 * fTemp780;
			float fTemp782 = fRec201[1] + fConst338 * ((fTemp781 - fRec202[1]) / fTemp765);
			float fTemp783 = fConst338 * ((fTemp767 + 0.5f) / fTemp765) + 1.0f;
			float fTemp784 = fTemp782 / fTemp783;
			fRec201[0] = 2.0f * fTemp784 - fRec201[1];
			float fTemp785 = fTemp765 * fTemp783;
			float fTemp786 = fRec202[1] + fConst338 * (fTemp782 / fTemp785);
			fRec202[0] = 2.0f * fTemp786 - fRec202[1];
			float fRec203 = fTemp784;
			float fRec204 = fTemp786;
			float fTemp787 = fTemp610 * (fRec204 + fTemp779) + fTemp764 + fTemp772 * (fTemp780 + 0.5f * fRec203);
			float fTemp788 = std::sqrt(fTemp607);
			float fTemp789 = fRec197[1] + fConst325 * ((fTemp787 - fRec198[1]) / fTemp788);
			float fTemp790 = fConst325 / fTemp788;
			float fTemp791 = fConst325 * ((fTemp790 + 2.0f) / fTemp788) + 1.0f;
			float fTemp792 = fTemp789 / fTemp791;
			fRec197[0] = 2.0f * fTemp792 - fRec197[1];
			float fTemp793 = fTemp788 * fTemp791;
			float fTemp794 = fRec198[1] + fConst325 * (fTemp789 / fTemp793);
			fRec198[0] = 2.0f * fTemp794 - fRec198[1];
			float fRec199 = fTemp792;
			float fRec200 = fTemp794;
			float fTemp795 = fTemp607 + -1.0f;
			float fTemp796 = fTemp787 + 2.0f * fRec199 * fTemp795 + fRec200 * fTemp608;
			float fTemp797 = fRec271[1] + fConst325 * ((fTemp796 - fRec272[1]) / fTemp788);
			float fTemp798 = fConst325 * ((fTemp790 + 1.4144272f) / fTemp788) + 1.0f;
			float fTemp799 = fTemp797 / fTemp798;
			fRec271[0] = 2.0f * fTemp799 - fRec271[1];
			float fTemp800 = fTemp788 * fTemp798;
			float fTemp801 = fRec272[1] + fConst325 * (fTemp797 / fTemp800);
			fRec272[0] = 2.0f * fTemp801 - fRec272[1];
			float fRec273 = fTemp799;
			float fRec274 = fTemp801;
			float fTemp802 = fRec200 + fRec274;
			float fTemp803 = 2.0f * fRec199 + 1.4144272f * fRec273;
			float fTemp804 = fTemp608 * fTemp802 + fTemp787 + fTemp795 * fTemp803;
			float fTemp805 = fRec193[1] + fConst325 * ((fTemp804 - fRec194[1]) / fTemp788);
			float fTemp806 = fConst325 * ((fTemp790 + 0.5f) / fTemp788) + 1.0f;
			float fTemp807 = fTemp805 / fTemp806;
			fRec193[0] = 2.0f * fTemp807 - fRec193[1];
			float fTemp808 = fTemp788 * fTemp806;
			float fTemp809 = fRec194[1] + fConst325 * (fTemp805 / fTemp808);
			fRec194[0] = 2.0f * fTemp809 - fRec194[1];
			float fRec195 = fTemp807;
			float fRec196 = fTemp809;
			float fTemp810 = fTemp608 * (fRec196 + fTemp802) + fTemp787 + fTemp795 * (fTemp803 + 0.5f * fRec195);
			float fTemp811 = std::sqrt(fTemp565);
			float fTemp812 = fRec175[1] + fConst325 * ((fTemp810 - fRec176[1]) / fTemp811);
			float fTemp813 = fConst325 / fTemp811;
			float fTemp814 = fConst325 * ((fTemp813 + 2.0f) / fTemp811) + 1.0f;
			float fTemp815 = fTemp812 / fTemp814;
			fRec175[0] = 2.0f * fTemp815 - fRec175[1];
			float fTemp816 = fTemp811 * fTemp814;
			float fTemp817 = fRec176[1] + fConst325 * (fTemp812 / fTemp816);
			fRec176[0] = 2.0f * fTemp817 - fRec176[1];
			float fRec177 = fTemp815;
			float fRec178 = fTemp817;
			float fTemp818 = fTemp565 + -1.0f;
			float fTemp819 = fTemp810 + 2.0f * fRec177 * fTemp818 + fRec178 * fTemp566;
			float fTemp820 = fRec275[1] + fConst325 * ((fTemp819 - fRec276[1]) / fTemp811);
			float fTemp821 = fConst325 * ((fTemp813 + 1.4144272f) / fTemp811) + 1.0f;
			float fTemp822 = fTemp820 / fTemp821;
			fRec275[0] = 2.0f * fTemp822 - fRec275[1];
			float fTemp823 = fTemp811 * fTemp821;
			float fTemp824 = fRec276[1] + fConst325 * (fTemp820 / fTemp823);
			fRec276[0] = 2.0f * fTemp824 - fRec276[1];
			float fRec277 = fTemp822;
			float fRec278 = fTemp824;
			float fTemp825 = fRec178 + fRec278;
			float fTemp826 = 2.0f * fRec177 + 1.4144272f * fRec277;
			float fTemp827 = fTemp566 * fTemp825 + fTemp810 + fTemp818 * fTemp826;
			float fTemp828 = fRec171[1] + fConst325 * ((fTemp827 - fRec172[1]) / fTemp811);
			float fTemp829 = fConst325 * ((fTemp813 + 0.5f) / fTemp811) + 1.0f;
			float fTemp830 = fTemp828 / fTemp829;
			fRec171[0] = 2.0f * fTemp830 - fRec171[1];
			float fTemp831 = fTemp811 * fTemp829;
			float fTemp832 = fRec172[1] + fConst325 * (fTemp828 / fTemp831);
			fRec172[0] = 2.0f * fTemp832 - fRec172[1];
			float fRec173 = fTemp830;
			float fRec174 = fTemp832;
			float fTemp833 = fTemp566 * (fRec174 + fTemp825) + fTemp810 + fTemp818 * (fTemp826 + 0.5f * fRec173);
			float fTemp834 = std::sqrt(fTemp563);
			float fTemp835 = fRec167[1] + fConst288 * ((fTemp833 - fRec168[1]) / fTemp834);
			float fTemp836 = fConst288 / fTemp834;
			float fTemp837 = fConst288 * ((fTemp836 + 2.0f) / fTemp834) + 1.0f;
			float fTemp838 = fTemp835 / fTemp837;
			fRec167[0] = 2.0f * fTemp838 - fRec167[1];
			float fTemp839 = fTemp834 * fTemp837;
			float fTemp840 = fRec168[1] + fConst288 * (fTemp835 / fTemp839);
			fRec168[0] = 2.0f * fTemp840 - fRec168[1];
			float fRec169 = fTemp838;
			float fRec170 = fTemp840;
			float fTemp841 = fTemp563 + -1.0f;
			float fTemp842 = fTemp833 + 2.0f * fRec169 * fTemp841 + fRec170 * fTemp564;
			float fTemp843 = fRec279[1] + fConst288 * ((fTemp842 - fRec280[1]) / fTemp834);
			float fTemp844 = fConst288 * ((fTemp836 + 1.4144272f) / fTemp834) + 1.0f;
			float fTemp845 = fTemp843 / fTemp844;
			fRec279[0] = 2.0f * fTemp845 - fRec279[1];
			float fTemp846 = fTemp834 * fTemp844;
			float fTemp847 = fRec280[1] + fConst288 * (fTemp843 / fTemp846);
			fRec280[0] = 2.0f * fTemp847 - fRec280[1];
			float fRec281 = fTemp845;
			float fRec282 = fTemp847;
			float fTemp848 = fRec170 + fRec282;
			float fTemp849 = 2.0f * fRec169 + 1.4144272f * fRec281;
			float fTemp850 = fTemp564 * fTemp848 + fTemp833 + fTemp841 * fTemp849;
			float fTemp851 = fRec163[1] + fConst288 * ((fTemp850 - fRec164[1]) / fTemp834);
			float fTemp852 = fConst288 * ((fTemp836 + 0.5f) / fTemp834) + 1.0f;
			float fTemp853 = fTemp851 / fTemp852;
			fRec163[0] = 2.0f * fTemp853 - fRec163[1];
			float fTemp854 = fTemp834 * fTemp852;
			float fTemp855 = fRec164[1] + fConst288 * (fTemp851 / fTemp854);
			fRec164[0] = 2.0f * fTemp855 - fRec164[1];
			float fRec165 = fTemp853;
			float fRec166 = fTemp855;
			float fTemp856 = fTemp564 * (fRec166 + fTemp848) + fTemp833 + fTemp841 * (fTemp849 + 0.5f * fRec165);
			float fTemp857 = std::sqrt(fTemp522);
			float fTemp858 = fRec283[1] + fConst288 * fTemp857 * (fTemp856 - fRec284[1]);
			float fTemp859 = fConst288 * fTemp857;
			float fTemp860 = fConst288 * fTemp857 * (fTemp859 + 2.0f) + 1.0f;
			float fTemp861 = fTemp858 / fTemp860;
			fRec283[0] = 2.0f * fTemp861 - fRec283[1];
			float fTemp862 = fRec284[1] + fConst288 * (fTemp857 * fTemp858 / fTemp860);
			fRec284[0] = 2.0f * fTemp862 - fRec284[1];
			float fRec285 = fTemp861;
			float fRec286 = fTemp862;
			float fTemp863 = 1.0f - fTemp522;
			float fTemp864 = 1.0f - mydsp_faustpower2_f(fTemp522);
			float fTemp865 = fTemp522 * (fTemp522 * fTemp856 + 2.0f * fRec285 * fTemp863) + fRec286 * fTemp864;
			float fTemp866 = fRec287[1] + fConst288 * fTemp857 * (fTemp865 - fRec288[1]);
			float fTemp867 = fConst288 * fTemp857 * (fTemp859 + 1.4144272f) + 1.0f;
			float fTemp868 = fTemp866 / fTemp867;
			fRec287[0] = 2.0f * fTemp868 - fRec287[1];
			float fTemp869 = fRec288[1] + fConst288 * (fTemp857 * fTemp866 / fTemp867);
			fRec288[0] = 2.0f * fTemp869 - fRec288[1];
			float fRec289 = fTemp868;
			float fRec290 = fTemp869;
			float fTemp870 = fTemp522 * (fTemp522 * fTemp865 + 1.4144272f * fRec289 * fTemp863) + fRec290 * fTemp864;
			float fTemp871 = fRec291[1] + fConst288 * fTemp857 * (fTemp870 - fRec292[1]);
			float fTemp872 = fConst288 * fTemp857 * (fTemp859 + 0.5f) + 1.0f;
			float fTemp873 = fTemp871 / fTemp872;
			fRec291[0] = 2.0f * fTemp873 - fRec291[1];
			float fTemp874 = fRec292[1] + fConst288 * (fTemp857 * fTemp871 / fTemp872);
			fRec292[0] = 2.0f * fTemp874 - fRec292[1];
			float fRec293 = fTemp873;
			float fRec294 = fTemp874;
			float fTemp875 = fRec7[0] * fRec138[0] + fTemp482 * (fTemp522 * (fTemp522 * fTemp870 + 0.5f * fRec293 * fTemp863) + fRec294 * fTemp864);
			fVec600[IOTA0 & 2047] = fTemp875;
			float fTemp876 = fRec347[1] + fConst352 * ((fRec8[0] - fRec348[1]) / fTemp696);
			float fTemp877 = fTemp876 / fTemp699;
			fRec347[0] = 2.0f * fTemp877 - fRec347[1];
			float fTemp878 = fRec348[1] + fConst352 * (fTemp876 / fTemp701);
			fRec348[0] = 2.0f * fTemp878 - fRec348[1];
			float fRec349 = fTemp877;
			float fRec350 = fTemp878;
			float fTemp879 = fRec8[0] + 2.0f * fRec349 * fTemp703 + fRec350 * fTemp695;
			float fTemp880 = fRec351[1] + fConst352 * ((fTemp879 - fRec352[1]) / fTemp696);
			float fTemp881 = fTemp880 / fTemp706;
			fRec351[0] = 2.0f * fTemp881 - fRec351[1];
			float fTemp882 = fRec352[1] + fConst352 * (fTemp880 / fTemp708);
			fRec352[0] = 2.0f * fTemp882 - fRec352[1];
			float fRec353 = fTemp881;
			float fRec354 = fTemp882;
			float fTemp883 = fRec350 + fRec354;
			float fTemp884 = 2.0f * fRec349 + 1.4144272f * fRec353;
			float fTemp885 = fTemp695 * fTemp883 + fRec8[0] + fTemp703 * fTemp884;
			float fTemp886 = fRec343[1] + fConst352 * ((fTemp885 - fRec344[1]) / fTemp696);
			float fTemp887 = fTemp886 / fTemp714;
			fRec343[0] = 2.0f * fTemp887 - fRec343[1];
			float fTemp888 = fRec344[1] + fConst352 * (fTemp886 / fTemp716);
			fRec344[0] = 2.0f * fTemp888 - fRec344[1];
			float fRec345 = fTemp887;
			float fRec346 = fTemp888;
			float fTemp889 = fTemp695 * (fRec346 + fTemp883) + fRec8[0] + fTemp703 * (fTemp884 + 0.5f * fRec345);
			float fTemp890 = fRec339[1] + fConst352 * ((fTemp889 - fRec340[1]) / fTemp719);
			float fTemp891 = fTemp890 / fTemp722;
			fRec339[0] = 2.0f * fTemp891 - fRec339[1];
			float fTemp892 = fRec340[1] + fConst352 * (fTemp890 / fTemp724);
			fRec340[0] = 2.0f * fTemp892 - fRec340[1];
			float fRec341 = fTemp891;
			float fRec342 = fTemp892;
			float fTemp893 = fTemp889 + 2.0f * fRec341 * fTemp726 + fRec342 * fTemp654;
			float fTemp894 = fRec355[1] + fConst352 * ((fTemp893 - fRec356[1]) / fTemp719);
			float fTemp895 = fTemp894 / fTemp729;
			fRec355[0] = 2.0f * fTemp895 - fRec355[1];
			float fTemp896 = fRec356[1] + fConst352 * (fTemp894 / fTemp731);
			fRec356[0] = 2.0f * fTemp896 - fRec356[1];
			float fRec357 = fTemp895;
			float fRec358 = fTemp896;
			float fTemp897 = fRec342 + fRec358;
			float fTemp898 = 2.0f * fRec341 + 1.4144272f * fRec357;
			float fTemp899 = fTemp654 * fTemp897 + fTemp889 + fTemp726 * fTemp898;
			float fTemp900 = fRec335[1] + fConst352 * ((fTemp899 - fRec336[1]) / fTemp719);
			float fTemp901 = fTemp900 / fTemp737;
			fRec335[0] = 2.0f * fTemp901 - fRec335[1];
			float fTemp902 = fRec336[1] + fConst352 * (fTemp900 / fTemp739);
			fRec336[0] = 2.0f * fTemp902 - fRec336[1];
			float fRec337 = fTemp901;
			float fRec338 = fTemp902;
			float fTemp903 = fTemp654 * (fRec338 + fTemp897) + fTemp889 + fTemp726 * (fTemp898 + 0.5f * fRec337);
			float fTemp904 = fRec331[1] + fConst338 * ((fTemp903 - fRec332[1]) / fTemp742);
			float fTemp905 = fTemp904 / fTemp745;
			fRec331[0] = 2.0f * fTemp905 - fRec331[1];
			float fTemp906 = fRec332[1] + fConst338 * (fTemp904 / fTemp747);
			fRec332[0] = 2.0f * fTemp906 - fRec332[1];
			float fRec333 = fTemp905;
			float fRec334 = fTemp906;
			float fTemp907 = fTemp903 + 2.0f * fRec333 * fTemp749 + fRec334 * fTemp652;
			float fTemp908 = fRec359[1] + fConst338 * ((fTemp907 - fRec360[1]) / fTemp742);
			float fTemp909 = fTemp908 / fTemp752;
			fRec359[0] = 2.0f * fTemp909 - fRec359[1];
			float fTemp910 = fRec360[1] + fConst338 * (fTemp908 / fTemp754);
			fRec360[0] = 2.0f * fTemp910 - fRec360[1];
			float fRec361 = fTemp909;
			float fRec362 = fTemp910;
			float fTemp911 = fRec334 + fRec362;
			float fTemp912 = 2.0f * fRec333 + 1.4144272f * fRec361;
			float fTemp913 = fTemp652 * fTemp911 + fTemp903 + fTemp749 * fTemp912;
			float fTemp914 = fRec327[1] + fConst338 * ((fTemp913 - fRec328[1]) / fTemp742);
			float fTemp915 = fTemp914 / fTemp760;
			fRec327[0] = 2.0f * fTemp915 - fRec327[1];
			float fTemp916 = fRec328[1] + fConst338 * (fTemp914 / fTemp762);
			fRec328[0] = 2.0f * fTemp916 - fRec328[1];
			float fRec329 = fTemp915;
			float fRec330 = fTemp916;
			float fTemp917 = fTemp652 * (fRec330 + fTemp911) + fTemp903 + fTemp749 * (fTemp912 + 0.5f * fRec329);
			float fTemp918 = fRec323[1] + fConst338 * ((fTemp917 - fRec324[1]) / fTemp765);
			float fTemp919 = fTemp918 / fTemp768;
			fRec323[0] = 2.0f * fTemp919 - fRec323[1];
			float fTemp920 = fRec324[1] + fConst338 * (fTemp918 / fTemp770);
			fRec324[0] = 2.0f * fTemp920 - fRec324[1];
			float fRec325 = fTemp919;
			float fRec326 = fTemp920;
			float fTemp921 = fTemp917 + 2.0f * fRec325 * fTemp772 + fRec326 * fTemp610;
			float fTemp922 = fRec363[1] + fConst338 * ((fTemp921 - fRec364[1]) / fTemp765);
			float fTemp923 = fTemp922 / fTemp775;
			fRec363[0] = 2.0f * fTemp923 - fRec363[1];
			float fTemp924 = fRec364[1] + fConst338 * (fTemp922 / fTemp777);
			fRec364[0] = 2.0f * fTemp924 - fRec364[1];
			float fRec365 = fTemp923;
			float fRec366 = fTemp924;
			float fTemp925 = fRec326 + fRec366;
			float fTemp926 = 2.0f * fRec325 + 1.4144272f * fRec365;
			float fTemp927 = fTemp610 * fTemp925 + fTemp917 + fTemp772 * fTemp926;
			float fTemp928 = fRec319[1] + fConst338 * ((fTemp927 - fRec320[1]) / fTemp765);
			float fTemp929 = fTemp928 / fTemp783;
			fRec319[0] = 2.0f * fTemp929 - fRec319[1];
			float fTemp930 = fRec320[1] + fConst338 * (fTemp928 / fTemp785);
			fRec320[0] = 2.0f * fTemp930 - fRec320[1];
			float fRec321 = fTemp929;
			float fRec322 = fTemp930;
			float fTemp931 = fTemp610 * (fRec322 + fTemp925) + fTemp917 + fTemp772 * (fTemp926 + 0.5f * fRec321);
			float fTemp932 = fRec315[1] + fConst325 * ((fTemp931 - fRec316[1]) / fTemp788);
			float fTemp933 = fTemp932 / fTemp791;
			fRec315[0] = 2.0f * fTemp933 - fRec315[1];
			float fTemp934 = fRec316[1] + fConst325 * (fTemp932 / fTemp793);
			fRec316[0] = 2.0f * fTemp934 - fRec316[1];
			float fRec317 = fTemp933;
			float fRec318 = fTemp934;
			float fTemp935 = fTemp931 + 2.0f * fRec317 * fTemp795 + fRec318 * fTemp608;
			float fTemp936 = fRec367[1] + fConst325 * ((fTemp935 - fRec368[1]) / fTemp788);
			float fTemp937 = fTemp936 / fTemp798;
			fRec367[0] = 2.0f * fTemp937 - fRec367[1];
			float fTemp938 = fRec368[1] + fConst325 * (fTemp936 / fTemp800);
			fRec368[0] = 2.0f * fTemp938 - fRec368[1];
			float fRec369 = fTemp937;
			float fRec370 = fTemp938;
			float fTemp939 = fRec318 + fRec370;
			float fTemp940 = 2.0f * fRec317 + 1.4144272f * fRec369;
			float fTemp941 = fTemp608 * fTemp939 + fTemp931 + fTemp795 * fTemp940;
			float fTemp942 = fRec311[1] + fConst325 * ((fTemp941 - fRec312[1]) / fTemp788);
			float fTemp943 = fTemp942 / fTemp806;
			fRec311[0] = 2.0f * fTemp943 - fRec311[1];
			float fTemp944 = fRec312[1] + fConst325 * (fTemp942 / fTemp808);
			fRec312[0] = 2.0f * fTemp944 - fRec312[1];
			float fRec313 = fTemp943;
			float fRec314 = fTemp944;
			float fTemp945 = fTemp608 * (fRec314 + fTemp939) + fTemp931 + fTemp795 * (fTemp940 + 0.5f * fRec313);
			float fTemp946 = fRec307[1] + fConst325 * ((fTemp945 - fRec308[1]) / fTemp811);
			float fTemp947 = fTemp946 / fTemp814;
			fRec307[0] = 2.0f * fTemp947 - fRec307[1];
			float fTemp948 = fRec308[1] + fConst325 * (fTemp946 / fTemp816);
			fRec308[0] = 2.0f * fTemp948 - fRec308[1];
			float fRec309 = fTemp947;
			float fRec310 = fTemp948;
			float fTemp949 = fTemp945 + 2.0f * fRec309 * fTemp818 + fRec310 * fTemp566;
			float fTemp950 = fRec371[1] + fConst325 * ((fTemp949 - fRec372[1]) / fTemp811);
			float fTemp951 = fTemp950 / fTemp821;
			fRec371[0] = 2.0f * fTemp951 - fRec371[1];
			float fTemp952 = fRec372[1] + fConst325 * (fTemp950 / fTemp823);
			fRec372[0] = 2.0f * fTemp952 - fRec372[1];
			float fRec373 = fTemp951;
			float fRec374 = fTemp952;
			float fTemp953 = fRec310 + fRec374;
			float fTemp954 = 2.0f * fRec309 + 1.4144272f * fRec373;
			float fTemp955 = fTemp566 * fTemp953 + fTemp945 + fTemp818 * fTemp954;
			float fTemp956 = fRec303[1] + fConst325 * ((fTemp955 - fRec304[1]) / fTemp811);
			float fTemp957 = fTemp956 / fTemp829;
			fRec303[0] = 2.0f * fTemp957 - fRec303[1];
			float fTemp958 = fRec304[1] + fConst325 * (fTemp956 / fTemp831);
			fRec304[0] = 2.0f * fTemp958 - fRec304[1];
			float fRec305 = fTemp957;
			float fRec306 = fTemp958;
			float fTemp959 = fTemp566 * (fRec306 + fTemp953) + fTemp945 + fTemp818 * (fTemp954 + 0.5f * fRec305);
			float fTemp960 = fRec299[1] + fConst288 * ((fTemp959 - fRec300[1]) / fTemp834);
			float fTemp961 = fTemp960 / fTemp837;
			fRec299[0] = 2.0f * fTemp961 - fRec299[1];
			float fTemp962 = fRec300[1] + fConst288 * (fTemp960 / fTemp839);
			fRec300[0] = 2.0f * fTemp962 - fRec300[1];
			float fRec301 = fTemp961;
			float fRec302 = fTemp962;
			float fTemp963 = fTemp959 + 2.0f * fRec301 * fTemp841 + fRec302 * fTemp564;
			float fTemp964 = fRec375[1] + fConst288 * ((fTemp963 - fRec376[1]) / fTemp834);
			float fTemp965 = fTemp964 / fTemp844;
			fRec375[0] = 2.0f * fTemp965 - fRec375[1];
			float fTemp966 = fRec376[1] + fConst288 * (fTemp964 / fTemp846);
			fRec376[0] = 2.0f * fTemp966 - fRec376[1];
			float fRec377 = fTemp965;
			float fRec378 = fTemp966;
			float fTemp967 = fRec302 + fRec378;
			float fTemp968 = 2.0f * fRec301 + 1.4144272f * fRec377;
			float fTemp969 = fTemp564 * fTemp967 + fTemp959 + fTemp841 * fTemp968;
			float fTemp970 = fRec295[1] + fConst288 * ((fTemp969 - fRec296[1]) / fTemp834);
			float fTemp971 = fTemp970 / fTemp852;
			fRec295[0] = 2.0f * fTemp971 - fRec295[1];
			float fTemp972 = fRec296[1] + fConst288 * (fTemp970 / fTemp854);
			fRec296[0] = 2.0f * fTemp972 - fRec296[1];
			float fRec297 = fTemp971;
			float fRec298 = fTemp972;
			float fTemp973 = fTemp564 * (fRec298 + fTemp967) + fTemp959 + fTemp841 * (fTemp968 + 0.5f * fRec297);
			float fTemp974 = fRec379[1] + fConst288 * fTemp857 * (fTemp973 - fRec380[1]);
			float fTemp975 = fTemp974 / fTemp860;
			fRec379[0] = 2.0f * fTemp975 - fRec379[1];
			float fTemp976 = fRec380[1] + fConst288 * (fTemp857 * fTemp974 / fTemp860);
			fRec380[0] = 2.0f * fTemp976 - fRec380[1];
			float fRec381 = fTemp975;
			float fRec382 = fTemp976;
			float fTemp977 = fTemp522 * (fTemp522 * fTemp973 + 2.0f * fRec381 * fTemp863) + fRec382 * fTemp864;
			float fTemp978 = fRec383[1] + fConst288 * fTemp857 * (fTemp977 - fRec384[1]);
			float fTemp979 = fTemp978 / fTemp867;
			fRec383[0] = 2.0f * fTemp979 - fRec383[1];
			float fTemp980 = fRec384[1] + fConst288 * (fTemp857 * fTemp978 / fTemp867);
			fRec384[0] = 2.0f * fTemp980 - fRec384[1];
			float fRec385 = fTemp979;
			float fRec386 = fTemp980;
			float fTemp981 = fTemp522 * (fTemp522 * fTemp977 + 1.4144272f * fRec385 * fTemp863) + fRec386 * fTemp864;
			float fTemp982 = fRec387[1] + fConst288 * fTemp857 * (fTemp981 - fRec388[1]);
			float fTemp983 = fTemp982 / fTemp872;
			fRec387[0] = 2.0f * fTemp983 - fRec387[1];
			float fTemp984 = fRec388[1] + fConst288 * (fTemp857 * fTemp982 / fTemp872);
			fRec388[0] = 2.0f * fTemp984 - fRec388[1];
			float fRec389 = fTemp983;
			float fRec390 = fTemp984;
			float fTemp985 = fRec138[0] * fRec8[0] + fTemp482 * (fTemp522 * (fTemp522 * fTemp981 + 0.5f * fRec389 * fTemp863) + fRec390 * fTemp864);
			fVec601[IOTA0 & 2047] = fTemp985;
			float fTemp986 = std::fabs(std::max<float>(std::fabs(fTemp875), std::fabs(fTemp985)));
			int iTemp987 = (fTemp986 >= fRec6[1]) | (float(iRec5[1]) >= fConst18);
			iRec5[0] = ((iTemp987) ? 0 : iRec5[1] + 1);
			fRec6[0] = ((iTemp987) ? fTemp986 : fRec6[1]);
			fRec4[0] = fConst5 * fRec6[0] + fConst4 * fRec4[1];
			float fTemp988 = std::fabs(fRec4[0]);
			fRec3[0] = std::max<float>(fTemp988, fConst16 * fRec3[1] + fConst365 * fTemp988);
			float fTemp989 = std::min<float>(1.0f, 0.8912509f / std::max<float>(fRec3[0], 1.1920929e-07f));
			fVbargraph28 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp989))));
			float fTemp990 = fTemp989 * (1.0f - fRec2[0]);
			float fTemp991 = fTemp1 * fRec2[0] + fTemp990 * fVec600[(IOTA0 - iConst366) & 2047];
			fRec0[0] = std::max<float>(fRec0[1] - fConst1, std::min<float>(1e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(0.00031622776f, std::fabs(fTemp991))))));
			fVbargraph30 = FAUSTFLOAT(fRec0[0]);
			float fTemp992 = fTemp991;
			fVec602[0] = fTemp992;
			output0[i0] = FAUSTFLOAT(fTemp992);
			fVec603[0] = 0.0f - fConst30 * (fConst31 * fRec393[1] - fConst33 * fVec602[1]);
			fRec394[0] = fVec603[1] + fConst30 * (fConst34 * fTemp992 - 2.0f * (fConst35 * fRec394[1] - fConst36 * fVec602[1]));
			fRec393[0] = fRec394[0];
			fVec604[0] = 0.50032705f * fRec393[1] - fConst38 * fRec391[1];
			fRec392[0] = fConst26 * fRec393[1] + fConst37 * (fVec604[1] - fConst39 * fRec392[1] + 0.50032705f * fRec393[0]);
			fRec391[0] = fRec392[0];
			float fTemp993 = mydsp_faustpower2_f(fRec391[0]);
			fVec605[0] = fTemp993;
			float fTemp994 = fTemp993 + fVec605[1];
			fVec606[0] = fTemp994;
			float fTemp995 = fTemp994 + fVec606[2];
			fVec607[0] = fTemp995;
			float fTemp996 = fTemp995 + fVec607[4];
			fVec608[0] = fTemp996;
			float fTemp997 = fTemp996 + fVec608[8];
			fVec609[IOTA0 & 31] = fTemp997;
			float fTemp998 = fTemp997 + fVec609[(IOTA0 - 16) & 31];
			fVec610[IOTA0 & 63] = fTemp998;
			float fTemp999 = fTemp998 + fVec610[(IOTA0 - 32) & 63];
			fVec611[IOTA0 & 127] = fTemp999;
			float fTemp1000 = fTemp999 + fVec611[(IOTA0 - 64) & 127];
			fVec612[IOTA0 & 255] = fTemp1000;
			float fTemp1001 = fTemp1000 + fVec612[(IOTA0 - 128) & 255];
			fVec613[IOTA0 & 511] = fTemp1001;
			float fTemp1002 = fTemp1001 + fVec613[(IOTA0 - 256) & 511];
			fVec614[IOTA0 & 1023] = fTemp1002;
			float fTemp1003 = fTemp1002 + fVec614[(IOTA0 - 512) & 1023];
			fVec615[IOTA0 & 2047] = fTemp1003;
			float fTemp1004 = fTemp1003 + fVec615[(IOTA0 - 1024) & 2047];
			fVec616[IOTA0 & 4095] = fTemp1004;
			float fTemp1005 = fTemp1004 + fVec616[(IOTA0 - 2048) & 4095];
			fVec617[IOTA0 & 8191] = fTemp1005;
			float fTemp1006 = fTemp1005 + fVec617[(IOTA0 - 4096) & 8191];
			fVec618[IOTA0 & 16383] = fTemp1006;
			float fTemp1007 = fTemp1006 + fVec618[(IOTA0 - 8192) & 16383];
			fVec619[IOTA0 & 32767] = fTemp1007;
			float fTemp1008 = fTemp1007 + fVec619[(IOTA0 - 16384) & 32767];
			fVec620[IOTA0 & 65535] = fTemp1008;
			fVec621[IOTA0 & 131071] = fTemp1008 + fVec620[(IOTA0 - 32768) & 65535];
			float fTemp1009 = fRec2[0] * fTemp44 + fTemp990 * fVec601[(IOTA0 - iConst366) & 2047];
			fRec399[0] = std::max<float>(fRec399[1] - fConst1, std::min<float>(1e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(0.00031622776f, std::fabs(fTemp1009))))));
			fVbargraph31 = FAUSTFLOAT(fRec399[0]);
			float fTemp1010 = fTemp1009;
			fVec622[0] = fTemp1010;
			fVec623[0] = 0.0f - fConst30 * (fConst31 * fRec397[1] - fConst33 * fVec622[1]);
			fRec398[0] = fVec623[1] + fConst30 * (fConst34 * fTemp1010 - 2.0f * (fConst35 * fRec398[1] - fConst36 * fVec622[1]));
			fRec397[0] = fRec398[0];
			fVec624[0] = 0.50032705f * fRec397[1] - fConst38 * fRec395[1];
			fRec396[0] = fConst26 * fRec397[1] + fConst37 * (fVec624[1] - fConst39 * fRec396[1] + 0.50032705f * fRec397[0]);
			fRec395[0] = fRec396[0];
			float fTemp1011 = mydsp_faustpower2_f(fRec395[0]);
			fVec625[0] = fTemp1011;
			float fTemp1012 = fTemp1011 + fVec625[1];
			fVec626[0] = fTemp1012;
			float fTemp1013 = fTemp1012 + fVec626[2];
			fVec627[0] = fTemp1013;
			float fTemp1014 = fTemp1013 + fVec627[4];
			fVec628[0] = fTemp1014;
			float fTemp1015 = fTemp1014 + fVec628[8];
			fVec629[IOTA0 & 31] = fTemp1015;
			float fTemp1016 = fTemp1015 + fVec629[(IOTA0 - 16) & 31];
			fVec630[IOTA0 & 63] = fTemp1016;
			float fTemp1017 = fTemp1016 + fVec630[(IOTA0 - 32) & 63];
			fVec631[IOTA0 & 127] = fTemp1017;
			float fTemp1018 = fTemp1017 + fVec631[(IOTA0 - 64) & 127];
			fVec632[IOTA0 & 255] = fTemp1018;
			float fTemp1019 = fTemp1018 + fVec632[(IOTA0 - 128) & 255];
			fVec633[IOTA0 & 511] = fTemp1019;
			float fTemp1020 = fTemp1019 + fVec633[(IOTA0 - 256) & 511];
			fVec634[IOTA0 & 1023] = fTemp1020;
			float fTemp1021 = fTemp1020 + fVec634[(IOTA0 - 512) & 1023];
			fVec635[IOTA0 & 2047] = fTemp1021;
			float fTemp1022 = fTemp1021 + fVec635[(IOTA0 - 1024) & 2047];
			fVec636[IOTA0 & 4095] = fTemp1022;
			float fTemp1023 = fTemp1022 + fVec636[(IOTA0 - 2048) & 4095];
			fVec637[IOTA0 & 8191] = fTemp1023;
			float fTemp1024 = fTemp1023 + fVec637[(IOTA0 - 4096) & 8191];
			fVec638[IOTA0 & 16383] = fTemp1024;
			float fTemp1025 = fTemp1024 + fVec638[(IOTA0 - 8192) & 16383];
			fVec639[IOTA0 & 32767] = fTemp1025;
			float fTemp1026 = fTemp1025 + fVec639[(IOTA0 - 16384) & 32767];
			fVec640[IOTA0 & 65535] = fTemp1026;
			fVec641[IOTA0 & 131071] = fTemp1026 + fVec640[(IOTA0 - 32768) & 65535];
			fVbargraph32 = FAUSTFLOAT(4.3429446f * std::log(std::max<float>(1e-12f, fConst368 * (((iConst369) ? 0.86000985f * fVec621[(IOTA0 - iConst400) & 131071] : 0.0f) + ((iConst399) ? 0.86000985f * fVec620[(IOTA0 - iConst398) & 65535] : 0.0f) + ((iConst397) ? 0.86000985f * fVec619[(IOTA0 - iConst396) & 32767] : 0.0f) + ((iConst395) ? 0.86000985f * fVec618[(IOTA0 - iConst394) & 16383] : 0.0f) + ((iConst393) ? 0.86000985f * fVec617[(IOTA0 - iConst392) & 8191] : 0.0f) + ((iConst391) ? 0.86000985f * fVec616[(IOTA0 - iConst390) & 4095] : 0.0f) + ((iConst389) ? 0.86000985f * fVec615[(IOTA0 - iConst388) & 2047] : 0.0f) + ((iConst387) ? 0.86000985f * fVec614[(IOTA0 - iConst386) & 1023] : 0.0f) + ((iConst385) ? 0.86000985f * fVec613[(IOTA0 - iConst384) & 511] : 0.0f) + ((iConst383) ? 0.86000985f * fVec612[(IOTA0 - iConst382) & 255] : 0.0f) + ((iConst381) ? 0.86000985f * fVec611[(IOTA0 - iConst380) & 127] : 0.0f) + ((iConst379) ? 0.86000985f * fVec610[(IOTA0 - iConst378) & 63] : 0.0f) + ((iConst377) ? 0.86000985f * fVec609[(IOTA0 - iConst376) & 31] : 0.0f) + ((iConst375) ? 0.86000985f * fVec608[iConst374] : 0.0f) + ((iConst373) ? 0.86000985f * fVec607[iConst372] : 0.0f) + ((iConst370) ? 0.86000985f * fTemp993 : 0.0f) + ((iConst371) ? 0.86000985f * fVec606[iConst370] : 0.0f) + ((iConst369) ? 0.86000985f * fVec641[(IOTA0 - iConst400) & 131071] : 0.0f) + ((iConst399) ? 0.86000985f * fVec640[(IOTA0 - iConst398) & 65535] : 0.0f) + ((iConst397) ? 0.86000985f * fVec639[(IOTA0 - iConst396) & 32767] : 0.0f) + ((iConst395) ? 0.86000985f * fVec638[(IOTA0 - iConst394) & 16383] : 0.0f) + ((iConst393) ? 0.86000985f * fVec637[(IOTA0 - iConst392) & 8191] : 0.0f) + ((iConst391) ? 0.86000985f * fVec636[(IOTA0 - iConst390) & 4095] : 0.0f) + ((iConst389) ? 0.86000985f * fVec635[(IOTA0 - iConst388) & 2047] : 0.0f) + ((iConst387) ? 0.86000985f * fVec634[(IOTA0 - iConst386) & 1023] : 0.0f) + ((iConst385) ? 0.86000985f * fVec633[(IOTA0 - iConst384) & 511] : 0.0f) + ((iConst383) ? 0.86000985f * fVec632[(IOTA0 - iConst382) & 255] : 0.0f) + ((iConst381) ? 0.86000985f * fVec631[(IOTA0 - iConst380) & 127] : 0.0f) + ((iConst379) ? 0.86000985f * fVec630[(IOTA0 - iConst378) & 63] : 0.0f) + ((iConst377) ? 0.86000985f * fVec629[(IOTA0 - iConst376) & 31] : 0.0f) + ((iConst375) ? 0.86000985f * fVec628[iConst374] : 0.0f) + ((iConst373) ? 0.86000985f * fVec627[iConst372] : 0.0f) + ((iConst370) ? 0.86000985f * fTemp1011 : 0.0f) + ((iConst371) ? 0.86000985f * fVec626[iConst370] : 0.0f)))) + -0.691f);
			output1[i0] = FAUSTFLOAT(fTemp1010);
			fRec1[1] = fRec1[0];
			fRec2[1] = fRec2[0];
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
			fRec17[1] = fRec17[0];
			fVec5[1] = fVec5[0];
			fRec21[1] = fRec21[0];
			fRec20[1] = fRec20[0];
			fVec6[1] = fVec6[0];
			fRec19[1] = fRec19[0];
			fRec18[1] = fRec18[0];
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
			fRec25[1] = fRec25[0];
			fRec24[1] = fRec24[0];
			fVec19[1] = fVec19[0];
			fRec23[1] = fRec23[0];
			fRec22[1] = fRec22[0];
			fVec20[1] = fVec20[0];
			fVec21[2] = fVec21[1];
			fVec21[1] = fVec21[0];
			for (int j4 = 6; j4 > 0; j4 = j4 - 1) {
				fVec22[j4] = fVec22[j4 - 1];
			}
			for (int j5 = 14; j5 > 0; j5 = j5 - 1) {
				fVec23[j5] = fVec23[j5 - 1];
			}
			fRec12[1] = fRec12[0];
			fRec13[1] = fRec13[0];
			fRec10[1] = fRec10[0];
			fRec9[1] = fRec9[0];
			fRec26[1] = fRec26[0];
			fRec27[1] = fRec27[0];
			fRec29[2] = fRec29[1];
			fRec29[1] = fRec29[0];
			fRec28[2] = fRec28[1];
			fRec28[1] = fRec28[0];
			fRec35[1] = fRec35[0];
			fRec37[2] = fRec37[1];
			fRec37[1] = fRec37[0];
			fRec36[2] = fRec36[1];
			fRec36[1] = fRec36[0];
			fVec31[1] = fVec31[0];
			fRec34[2] = fRec34[1];
			fRec34[1] = fRec34[0];
			fVec33[1] = fVec33[0];
			fRec33[1] = fRec33[0];
			fRec32[1] = fRec32[0];
			fVec34[1] = fVec34[0];
			fRec31[1] = fRec31[0];
			fRec30[1] = fRec30[0];
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
			fRec41[1] = fRec41[0];
			fRec40[1] = fRec40[0];
			fVec54[1] = fVec54[0];
			fRec39[1] = fRec39[0];
			fRec38[1] = fRec38[0];
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
			fRec42[1] = fRec42[0];
			fRec47[2] = fRec47[1];
			fRec47[1] = fRec47[0];
			fVec82[1] = fVec82[0];
			fRec46[1] = fRec46[0];
			fRec45[1] = fRec45[0];
			fVec83[1] = fVec83[0];
			fRec44[1] = fRec44[0];
			fRec43[1] = fRec43[0];
			fVec84[1] = fVec84[0];
			fVec85[2] = fVec85[1];
			fVec85[1] = fVec85[0];
			for (int j12 = 6; j12 > 0; j12 = j12 - 1) {
				fVec86[j12] = fVec86[j12 - 1];
			}
			for (int j13 = 14; j13 > 0; j13 = j13 - 1) {
				fVec87[j13] = fVec87[j13 - 1];
			}
			fRec52[2] = fRec52[1];
			fRec52[1] = fRec52[0];
			fVec103[1] = fVec103[0];
			fRec51[1] = fRec51[0];
			fRec50[1] = fRec50[0];
			fVec104[1] = fVec104[0];
			fRec49[1] = fRec49[0];
			fRec48[1] = fRec48[0];
			fVec105[1] = fVec105[0];
			fVec106[2] = fVec106[1];
			fVec106[1] = fVec106[0];
			for (int j14 = 6; j14 > 0; j14 = j14 - 1) {
				fVec107[j14] = fVec107[j14 - 1];
			}
			for (int j15 = 14; j15 > 0; j15 = j15 - 1) {
				fVec108[j15] = fVec108[j15 - 1];
			}
			fRec57[2] = fRec57[1];
			fRec57[1] = fRec57[0];
			fVec124[1] = fVec124[0];
			fRec56[1] = fRec56[0];
			fRec55[1] = fRec55[0];
			fVec125[1] = fVec125[0];
			fRec54[1] = fRec54[0];
			fRec53[1] = fRec53[0];
			fVec126[1] = fVec126[0];
			fVec127[2] = fVec127[1];
			fVec127[1] = fVec127[0];
			for (int j16 = 6; j16 > 0; j16 = j16 - 1) {
				fVec128[j16] = fVec128[j16 - 1];
			}
			for (int j17 = 14; j17 > 0; j17 = j17 - 1) {
				fVec129[j17] = fVec129[j17 - 1];
			}
			fRec62[2] = fRec62[1];
			fRec62[1] = fRec62[0];
			fVec145[1] = fVec145[0];
			fRec61[1] = fRec61[0];
			fRec60[1] = fRec60[0];
			fVec146[1] = fVec146[0];
			fRec59[1] = fRec59[0];
			fRec58[1] = fRec58[0];
			fVec147[1] = fVec147[0];
			fVec148[2] = fVec148[1];
			fVec148[1] = fVec148[0];
			for (int j18 = 6; j18 > 0; j18 = j18 - 1) {
				fVec149[j18] = fVec149[j18 - 1];
			}
			for (int j19 = 14; j19 > 0; j19 = j19 - 1) {
				fVec150[j19] = fVec150[j19 - 1];
			}
			fRec67[2] = fRec67[1];
			fRec67[1] = fRec67[0];
			fVec166[1] = fVec166[0];
			fRec66[1] = fRec66[0];
			fRec65[1] = fRec65[0];
			fVec167[1] = fVec167[0];
			fRec64[1] = fRec64[0];
			fRec63[1] = fRec63[0];
			fVec168[1] = fVec168[0];
			fVec169[2] = fVec169[1];
			fVec169[1] = fVec169[0];
			for (int j20 = 6; j20 > 0; j20 = j20 - 1) {
				fVec170[j20] = fVec170[j20 - 1];
			}
			for (int j21 = 14; j21 > 0; j21 = j21 - 1) {
				fVec171[j21] = fVec171[j21 - 1];
			}
			fRec72[2] = fRec72[1];
			fRec72[1] = fRec72[0];
			fVec187[1] = fVec187[0];
			fRec71[1] = fRec71[0];
			fRec70[1] = fRec70[0];
			fVec188[1] = fVec188[0];
			fRec69[1] = fRec69[0];
			fRec68[1] = fRec68[0];
			fVec189[1] = fVec189[0];
			fVec190[2] = fVec190[1];
			fVec190[1] = fVec190[0];
			for (int j22 = 6; j22 > 0; j22 = j22 - 1) {
				fVec191[j22] = fVec191[j22 - 1];
			}
			for (int j23 = 14; j23 > 0; j23 = j23 - 1) {
				fVec192[j23] = fVec192[j23 - 1];
			}
			fRec77[2] = fRec77[1];
			fRec77[1] = fRec77[0];
			fVec208[1] = fVec208[0];
			fRec76[1] = fRec76[0];
			fRec75[1] = fRec75[0];
			fVec209[1] = fVec209[0];
			fRec74[1] = fRec74[0];
			fRec73[1] = fRec73[0];
			fVec210[1] = fVec210[0];
			fVec211[2] = fVec211[1];
			fVec211[1] = fVec211[0];
			for (int j24 = 6; j24 > 0; j24 = j24 - 1) {
				fVec212[j24] = fVec212[j24 - 1];
			}
			for (int j25 = 14; j25 > 0; j25 = j25 - 1) {
				fVec213[j25] = fVec213[j25 - 1];
			}
			fRec82[2] = fRec82[1];
			fRec82[1] = fRec82[0];
			fVec229[1] = fVec229[0];
			fRec81[1] = fRec81[0];
			fRec80[1] = fRec80[0];
			fVec230[1] = fVec230[0];
			fRec79[1] = fRec79[0];
			fRec78[1] = fRec78[0];
			fVec231[1] = fVec231[0];
			fVec232[2] = fVec232[1];
			fVec232[1] = fVec232[0];
			for (int j26 = 6; j26 > 0; j26 = j26 - 1) {
				fVec233[j26] = fVec233[j26 - 1];
			}
			for (int j27 = 14; j27 > 0; j27 = j27 - 1) {
				fVec234[j27] = fVec234[j27 - 1];
			}
			fRec87[2] = fRec87[1];
			fRec87[1] = fRec87[0];
			fVec250[1] = fVec250[0];
			fRec86[1] = fRec86[0];
			fRec85[1] = fRec85[0];
			fVec251[1] = fVec251[0];
			fRec84[1] = fRec84[0];
			fRec83[1] = fRec83[0];
			fVec252[1] = fVec252[0];
			fVec253[2] = fVec253[1];
			fVec253[1] = fVec253[0];
			for (int j28 = 6; j28 > 0; j28 = j28 - 1) {
				fVec254[j28] = fVec254[j28 - 1];
			}
			for (int j29 = 14; j29 > 0; j29 = j29 - 1) {
				fVec255[j29] = fVec255[j29 - 1];
			}
			fRec92[2] = fRec92[1];
			fRec92[1] = fRec92[0];
			fVec271[1] = fVec271[0];
			fRec91[1] = fRec91[0];
			fRec90[1] = fRec90[0];
			fVec272[1] = fVec272[0];
			fRec89[1] = fRec89[0];
			fRec88[1] = fRec88[0];
			fVec273[1] = fVec273[0];
			fVec274[2] = fVec274[1];
			fVec274[1] = fVec274[0];
			for (int j30 = 6; j30 > 0; j30 = j30 - 1) {
				fVec275[j30] = fVec275[j30 - 1];
			}
			for (int j31 = 14; j31 > 0; j31 = j31 - 1) {
				fVec276[j31] = fVec276[j31 - 1];
			}
			fRec97[2] = fRec97[1];
			fRec97[1] = fRec97[0];
			fVec292[1] = fVec292[0];
			fRec96[1] = fRec96[0];
			fRec95[1] = fRec95[0];
			fVec293[1] = fVec293[0];
			fRec94[1] = fRec94[0];
			fRec93[1] = fRec93[0];
			fVec294[1] = fVec294[0];
			fVec295[2] = fVec295[1];
			fVec295[1] = fVec295[0];
			for (int j32 = 6; j32 > 0; j32 = j32 - 1) {
				fVec296[j32] = fVec296[j32 - 1];
			}
			for (int j33 = 14; j33 > 0; j33 = j33 - 1) {
				fVec297[j33] = fVec297[j33 - 1];
			}
			fRec102[2] = fRec102[1];
			fRec102[1] = fRec102[0];
			fVec313[1] = fVec313[0];
			fRec101[1] = fRec101[0];
			fRec100[1] = fRec100[0];
			fVec314[1] = fVec314[0];
			fRec99[1] = fRec99[0];
			fRec98[1] = fRec98[0];
			fVec315[1] = fVec315[0];
			fVec316[2] = fVec316[1];
			fVec316[1] = fVec316[0];
			for (int j34 = 6; j34 > 0; j34 = j34 - 1) {
				fVec317[j34] = fVec317[j34 - 1];
			}
			for (int j35 = 14; j35 > 0; j35 = j35 - 1) {
				fVec318[j35] = fVec318[j35 - 1];
			}
			fRec107[2] = fRec107[1];
			fRec107[1] = fRec107[0];
			fVec334[1] = fVec334[0];
			fRec106[1] = fRec106[0];
			fRec105[1] = fRec105[0];
			fVec335[1] = fVec335[0];
			fRec104[1] = fRec104[0];
			fRec103[1] = fRec103[0];
			fVec336[1] = fVec336[0];
			fVec337[2] = fVec337[1];
			fVec337[1] = fVec337[0];
			for (int j36 = 6; j36 > 0; j36 = j36 - 1) {
				fVec338[j36] = fVec338[j36 - 1];
			}
			for (int j37 = 14; j37 > 0; j37 = j37 - 1) {
				fVec339[j37] = fVec339[j37 - 1];
			}
			fRec112[2] = fRec112[1];
			fRec112[1] = fRec112[0];
			fVec355[1] = fVec355[0];
			fRec111[1] = fRec111[0];
			fRec110[1] = fRec110[0];
			fVec356[1] = fVec356[0];
			fRec109[1] = fRec109[0];
			fRec108[1] = fRec108[0];
			fVec357[1] = fVec357[0];
			fVec358[2] = fVec358[1];
			fVec358[1] = fVec358[0];
			for (int j38 = 6; j38 > 0; j38 = j38 - 1) {
				fVec359[j38] = fVec359[j38 - 1];
			}
			for (int j39 = 14; j39 > 0; j39 = j39 - 1) {
				fVec360[j39] = fVec360[j39 - 1];
			}
			fRec117[2] = fRec117[1];
			fRec117[1] = fRec117[0];
			fVec376[1] = fVec376[0];
			fRec116[1] = fRec116[0];
			fRec115[1] = fRec115[0];
			fVec377[1] = fVec377[0];
			fRec114[1] = fRec114[0];
			fRec113[1] = fRec113[0];
			fVec378[1] = fVec378[0];
			fVec379[2] = fVec379[1];
			fVec379[1] = fVec379[0];
			for (int j40 = 6; j40 > 0; j40 = j40 - 1) {
				fVec380[j40] = fVec380[j40 - 1];
			}
			for (int j41 = 14; j41 > 0; j41 = j41 - 1) {
				fVec381[j41] = fVec381[j41 - 1];
			}
			fRec122[2] = fRec122[1];
			fRec122[1] = fRec122[0];
			fVec397[1] = fVec397[0];
			fRec121[1] = fRec121[0];
			fRec120[1] = fRec120[0];
			fVec398[1] = fVec398[0];
			fRec119[1] = fRec119[0];
			fRec118[1] = fRec118[0];
			fVec399[1] = fVec399[0];
			fVec400[2] = fVec400[1];
			fVec400[1] = fVec400[0];
			for (int j42 = 6; j42 > 0; j42 = j42 - 1) {
				fVec401[j42] = fVec401[j42 - 1];
			}
			for (int j43 = 14; j43 > 0; j43 = j43 - 1) {
				fVec402[j43] = fVec402[j43 - 1];
			}
			fRec127[2] = fRec127[1];
			fRec127[1] = fRec127[0];
			fVec418[1] = fVec418[0];
			fRec126[1] = fRec126[0];
			fRec125[1] = fRec125[0];
			fVec419[1] = fVec419[0];
			fRec124[1] = fRec124[0];
			fRec123[1] = fRec123[0];
			fVec420[1] = fVec420[0];
			fVec421[2] = fVec421[1];
			fVec421[1] = fVec421[0];
			for (int j44 = 6; j44 > 0; j44 = j44 - 1) {
				fVec422[j44] = fVec422[j44 - 1];
			}
			for (int j45 = 14; j45 > 0; j45 = j45 - 1) {
				fVec423[j45] = fVec423[j45 - 1];
			}
			fRec132[2] = fRec132[1];
			fRec132[1] = fRec132[0];
			fVec439[1] = fVec439[0];
			fRec131[1] = fRec131[0];
			fRec130[1] = fRec130[0];
			fVec440[1] = fVec440[0];
			fRec129[1] = fRec129[0];
			fRec128[1] = fRec128[0];
			fVec441[1] = fVec441[0];
			fVec442[2] = fVec442[1];
			fVec442[1] = fVec442[0];
			for (int j46 = 6; j46 > 0; j46 = j46 - 1) {
				fVec443[j46] = fVec443[j46 - 1];
			}
			for (int j47 = 14; j47 > 0; j47 = j47 - 1) {
				fVec444[j47] = fVec444[j47 - 1];
			}
			fRec137[2] = fRec137[1];
			fRec137[1] = fRec137[0];
			fVec460[1] = fVec460[0];
			fRec136[1] = fRec136[0];
			fRec135[1] = fRec135[0];
			fVec461[1] = fVec461[0];
			fRec134[1] = fRec134[0];
			fRec133[1] = fRec133[0];
			fVec462[1] = fVec462[0];
			fVec463[2] = fVec463[1];
			fVec463[1] = fVec463[0];
			for (int j48 = 6; j48 > 0; j48 = j48 - 1) {
				fVec464[j48] = fVec464[j48 - 1];
			}
			for (int j49 = 14; j49 > 0; j49 = j49 - 1) {
				fVec465[j49] = fVec465[j49 - 1];
			}
			fRec7[2] = fRec7[1];
			fRec7[1] = fRec7[0];
			fRec8[2] = fRec8[1];
			fRec8[1] = fRec8[0];
			fRec138[1] = fRec138[0];
			fRec142[2] = fRec142[1];
			fRec142[1] = fRec142[0];
			fRec141[2] = fRec141[1];
			fRec141[1] = fRec141[0];
			fRec140[2] = fRec140[1];
			fRec140[1] = fRec140[0];
			fVec480[1] = fVec480[0];
			fRec139[1] = fRec139[0];
			fRec146[2] = fRec146[1];
			fRec146[1] = fRec146[0];
			fRec145[2] = fRec145[1];
			fRec145[1] = fRec145[0];
			fRec144[2] = fRec144[1];
			fRec144[1] = fRec144[0];
			fVec481[1] = fVec481[0];
			fRec143[1] = fRec143[0];
			fVec482[2] = fVec482[1];
			fVec482[1] = fVec482[0];
			for (int j50 = 6; j50 > 0; j50 = j50 - 1) {
				fVec483[j50] = fVec483[j50 - 1];
			}
			for (int j51 = 14; j51 > 0; j51 = j51 - 1) {
				fVec484[j51] = fVec484[j51 - 1];
			}
			fRec147[1] = fRec147[0];
			fVec493[2] = fVec493[1];
			fVec493[1] = fVec493[0];
			for (int j52 = 6; j52 > 0; j52 = j52 - 1) {
				fVec494[j52] = fVec494[j52 - 1];
			}
			for (int j53 = 14; j53 > 0; j53 = j53 - 1) {
				fVec495[j53] = fVec495[j53 - 1];
			}
			fRec148[1] = fRec148[0];
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
			fVec504[1] = fVec504[0];
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
			fVec505[1] = fVec505[0];
			fRec155[1] = fRec155[0];
			fVec506[2] = fVec506[1];
			fVec506[1] = fVec506[0];
			for (int j54 = 6; j54 > 0; j54 = j54 - 1) {
				fVec507[j54] = fVec507[j54 - 1];
			}
			for (int j55 = 14; j55 > 0; j55 = j55 - 1) {
				fVec508[j55] = fVec508[j55 - 1];
			}
			fRec161[1] = fRec161[0];
			fVec517[2] = fVec517[1];
			fVec517[1] = fVec517[0];
			for (int j56 = 6; j56 > 0; j56 = j56 - 1) {
				fVec518[j56] = fVec518[j56 - 1];
			}
			for (int j57 = 14; j57 > 0; j57 = j57 - 1) {
				fVec519[j57] = fVec519[j57 - 1];
			}
			fRec162[1] = fRec162[0];
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
			fVec528[1] = fVec528[0];
			fRec179[1] = fRec179[0];
			fRec190[2] = fRec190[1];
			fRec190[1] = fRec190[0];
			fRec189[2] = fRec189[1];
			fRec189[1] = fRec189[0];
			fRec188[2] = fRec188[1];
			fRec188[1] = fRec188[0];
			fRec187[2] = fRec187[1];
			fRec187[1] = fRec187[0];
			fRec186[2] = fRec186[1];
			fRec186[1] = fRec186[0];
			fVec529[1] = fVec529[0];
			fRec185[1] = fRec185[0];
			fVec530[2] = fVec530[1];
			fVec530[1] = fVec530[0];
			for (int j58 = 6; j58 > 0; j58 = j58 - 1) {
				fVec531[j58] = fVec531[j58 - 1];
			}
			for (int j59 = 14; j59 > 0; j59 = j59 - 1) {
				fVec532[j59] = fVec532[j59 - 1];
			}
			fRec191[1] = fRec191[0];
			fVec541[2] = fVec541[1];
			fVec541[1] = fVec541[0];
			for (int j60 = 6; j60 > 0; j60 = j60 - 1) {
				fVec542[j60] = fVec542[j60 - 1];
			}
			for (int j61 = 14; j61 > 0; j61 = j61 - 1) {
				fVec543[j61] = fVec543[j61 - 1];
			}
			fRec192[1] = fRec192[0];
			fRec214[2] = fRec214[1];
			fRec214[1] = fRec214[0];
			fRec213[2] = fRec213[1];
			fRec213[1] = fRec213[0];
			fRec212[2] = fRec212[1];
			fRec212[1] = fRec212[0];
			fRec211[2] = fRec211[1];
			fRec211[1] = fRec211[0];
			fRec210[2] = fRec210[1];
			fRec210[1] = fRec210[0];
			fVec552[1] = fVec552[0];
			fRec209[1] = fRec209[0];
			fRec220[2] = fRec220[1];
			fRec220[1] = fRec220[0];
			fRec219[2] = fRec219[1];
			fRec219[1] = fRec219[0];
			fRec218[2] = fRec218[1];
			fRec218[1] = fRec218[0];
			fRec217[2] = fRec217[1];
			fRec217[1] = fRec217[0];
			fRec216[2] = fRec216[1];
			fRec216[1] = fRec216[0];
			fVec553[1] = fVec553[0];
			fRec215[1] = fRec215[0];
			fVec554[2] = fVec554[1];
			fVec554[1] = fVec554[0];
			for (int j62 = 6; j62 > 0; j62 = j62 - 1) {
				fVec555[j62] = fVec555[j62 - 1];
			}
			for (int j63 = 14; j63 > 0; j63 = j63 - 1) {
				fVec556[j63] = fVec556[j63 - 1];
			}
			fRec221[1] = fRec221[0];
			fVec565[2] = fVec565[1];
			fVec565[1] = fVec565[0];
			for (int j64 = 6; j64 > 0; j64 = j64 - 1) {
				fVec566[j64] = fVec566[j64 - 1];
			}
			for (int j65 = 14; j65 > 0; j65 = j65 - 1) {
				fVec567[j65] = fVec567[j65 - 1];
			}
			fRec222[1] = fRec222[0];
			fRec241[2] = fRec241[1];
			fRec241[1] = fRec241[0];
			fRec240[2] = fRec240[1];
			fRec240[1] = fRec240[0];
			fVec576[1] = fVec576[0];
			fRec239[1] = fRec239[0];
			fRec244[2] = fRec244[1];
			fRec244[1] = fRec244[0];
			fRec243[2] = fRec243[1];
			fRec243[1] = fRec243[0];
			fVec577[1] = fVec577[0];
			fRec242[1] = fRec242[0];
			fVec578[2] = fVec578[1];
			fVec578[1] = fVec578[0];
			for (int j66 = 6; j66 > 0; j66 = j66 - 1) {
				fVec579[j66] = fVec579[j66 - 1];
			}
			for (int j67 = 14; j67 > 0; j67 = j67 - 1) {
				fVec580[j67] = fVec580[j67 - 1];
			}
			fRec245[1] = fRec245[0];
			fVec589[2] = fVec589[1];
			fVec589[1] = fVec589[0];
			for (int j68 = 6; j68 > 0; j68 = j68 - 1) {
				fVec590[j68] = fVec590[j68 - 1];
			}
			for (int j69 = 14; j69 > 0; j69 = j69 - 1) {
				fVec591[j69] = fVec591[j69 - 1];
			}
			fRec246[1] = fRec246[0];
			fRec251[1] = fRec251[0];
			fRec252[1] = fRec252[0];
			fRec255[1] = fRec255[0];
			fRec256[1] = fRec256[0];
			fRec247[1] = fRec247[0];
			fRec248[1] = fRec248[0];
			fRec235[1] = fRec235[0];
			fRec236[1] = fRec236[0];
			fRec259[1] = fRec259[0];
			fRec260[1] = fRec260[0];
			fRec231[1] = fRec231[0];
			fRec232[1] = fRec232[0];
			fRec227[1] = fRec227[0];
			fRec228[1] = fRec228[0];
			fRec263[1] = fRec263[0];
			fRec264[1] = fRec264[0];
			fRec223[1] = fRec223[0];
			fRec224[1] = fRec224[0];
			fRec205[1] = fRec205[0];
			fRec206[1] = fRec206[0];
			fRec267[1] = fRec267[0];
			fRec268[1] = fRec268[0];
			fRec201[1] = fRec201[0];
			fRec202[1] = fRec202[0];
			fRec197[1] = fRec197[0];
			fRec198[1] = fRec198[0];
			fRec271[1] = fRec271[0];
			fRec272[1] = fRec272[0];
			fRec193[1] = fRec193[0];
			fRec194[1] = fRec194[0];
			fRec175[1] = fRec175[0];
			fRec176[1] = fRec176[0];
			fRec275[1] = fRec275[0];
			fRec276[1] = fRec276[0];
			fRec171[1] = fRec171[0];
			fRec172[1] = fRec172[0];
			fRec167[1] = fRec167[0];
			fRec168[1] = fRec168[0];
			fRec279[1] = fRec279[0];
			fRec280[1] = fRec280[0];
			fRec163[1] = fRec163[0];
			fRec164[1] = fRec164[0];
			fRec283[1] = fRec283[0];
			fRec284[1] = fRec284[0];
			fRec287[1] = fRec287[0];
			fRec288[1] = fRec288[0];
			fRec291[1] = fRec291[0];
			fRec292[1] = fRec292[0];
			fRec347[1] = fRec347[0];
			fRec348[1] = fRec348[0];
			fRec351[1] = fRec351[0];
			fRec352[1] = fRec352[0];
			fRec343[1] = fRec343[0];
			fRec344[1] = fRec344[0];
			fRec339[1] = fRec339[0];
			fRec340[1] = fRec340[0];
			fRec355[1] = fRec355[0];
			fRec356[1] = fRec356[0];
			fRec335[1] = fRec335[0];
			fRec336[1] = fRec336[0];
			fRec331[1] = fRec331[0];
			fRec332[1] = fRec332[0];
			fRec359[1] = fRec359[0];
			fRec360[1] = fRec360[0];
			fRec327[1] = fRec327[0];
			fRec328[1] = fRec328[0];
			fRec323[1] = fRec323[0];
			fRec324[1] = fRec324[0];
			fRec363[1] = fRec363[0];
			fRec364[1] = fRec364[0];
			fRec319[1] = fRec319[0];
			fRec320[1] = fRec320[0];
			fRec315[1] = fRec315[0];
			fRec316[1] = fRec316[0];
			fRec367[1] = fRec367[0];
			fRec368[1] = fRec368[0];
			fRec311[1] = fRec311[0];
			fRec312[1] = fRec312[0];
			fRec307[1] = fRec307[0];
			fRec308[1] = fRec308[0];
			fRec371[1] = fRec371[0];
			fRec372[1] = fRec372[0];
			fRec303[1] = fRec303[0];
			fRec304[1] = fRec304[0];
			fRec299[1] = fRec299[0];
			fRec300[1] = fRec300[0];
			fRec375[1] = fRec375[0];
			fRec376[1] = fRec376[0];
			fRec295[1] = fRec295[0];
			fRec296[1] = fRec296[0];
			fRec379[1] = fRec379[0];
			fRec380[1] = fRec380[0];
			fRec383[1] = fRec383[0];
			fRec384[1] = fRec384[0];
			fRec387[1] = fRec387[0];
			fRec388[1] = fRec388[0];
			iRec5[1] = iRec5[0];
			fRec6[1] = fRec6[0];
			fRec4[1] = fRec4[0];
			fRec3[1] = fRec3[0];
			fRec0[1] = fRec0[0];
			fVec602[1] = fVec602[0];
			fVec603[1] = fVec603[0];
			fRec394[1] = fRec394[0];
			fRec393[1] = fRec393[0];
			fVec604[1] = fVec604[0];
			fRec392[1] = fRec392[0];
			fRec391[1] = fRec391[0];
			fVec605[1] = fVec605[0];
			fVec606[2] = fVec606[1];
			fVec606[1] = fVec606[0];
			for (int j70 = 6; j70 > 0; j70 = j70 - 1) {
				fVec607[j70] = fVec607[j70 - 1];
			}
			for (int j71 = 14; j71 > 0; j71 = j71 - 1) {
				fVec608[j71] = fVec608[j71 - 1];
			}
			fRec399[1] = fRec399[0];
			fVec622[1] = fVec622[0];
			fVec623[1] = fVec623[0];
			fRec398[1] = fRec398[0];
			fRec397[1] = fRec397[0];
			fVec624[1] = fVec624[0];
			fRec396[1] = fRec396[0];
			fRec395[1] = fRec395[0];
			fVec625[1] = fVec625[0];
			fVec626[2] = fVec626[1];
			fVec626[1] = fVec626[0];
			for (int j72 = 6; j72 > 0; j72 = j72 - 1) {
				fVec627[j72] = fVec627[j72 - 1];
			}
			for (int j73 = 14; j73 > 0; j73 = j73 - 1) {
				fVec628[j73] = fVec628[j73 - 1];
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
        case kParameter_spectral_ballancer_timbre:
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
        case kParameter_input_gain:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[3];
            param.unit = kParameterUnits[3];
            param.symbol = kParameterSymbols[3];
            param.shortName = "";
            param.ranges.def = kParameterRanges[3].def;
            param.ranges.min = kParameterRanges[3].min;
            param.ranges.max = kParameterRanges[3].max;
            break;
        case kParameter_leveler_target:
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
        case kParameter_multiband_compressor_style:
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
        
        case kParameter_latency_global:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[6];
            param.unit = kParameterUnits[6];
            param.symbol = kParameterSymbols[6];
            param.shortName = "";
            param.ranges.def = kParameterRanges[6].def;
            param.ranges.min = kParameterRanges[6].min;
            param.ranges.max = kParameterRanges[6].max;
            break;
        case kParameter_spectral_ballancer_gain_band__0:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[7];
            param.unit = kParameterUnits[7];
            param.symbol = kParameterSymbols[7];
            param.shortName = "";
            param.ranges.def = kParameterRanges[7].def;
            param.ranges.min = kParameterRanges[7].min;
            param.ranges.max = kParameterRanges[7].max;
            break;
        case kParameter_spectral_ballancer_gain_band__1:
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
        case kParameter_spectral_ballancer_gain_band__2:
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
        case kParameter_spectral_ballancer_gain_band__3:
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
        case kParameter_spectral_ballancer_gain_band__4:
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
        case kParameter_spectral_ballancer_gain_band__5:
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
        case kParameter_spectral_ballancer_gain_band__6:
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
        case kParameter_spectral_ballancer_gain_band__7:
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
        case kParameter_spectral_ballancer_gain_band__8:
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
        case kParameter_spectral_ballancer_gain_band__9:
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
        case kParameter_spectral_ballancer_gain_band_10:
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
        case kParameter_spectral_ballancer_gain_band_11:
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
        case kParameter_spectral_ballancer_gain_band_12:
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
        case kParameter_spectral_ballancer_gain_band_13:
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
        case kParameter_spectral_ballancer_gain_band_14:
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
        case kParameter_spectral_ballancer_gain_band_15:
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
        case kParameter_spectral_ballancer_gain_band_16:
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
        case kParameter_spectral_ballancer_gain_band_17:
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
        case kParameter_spectral_ballancer_gain_band_18:
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
        case kParameter_spectral_ballancer_gain_band_19:
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
        case kParameter_input_peak_channel_0:
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
        case kParameter_input_peak_channel_1:
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
        case kParameter_leveler_gain:
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
        case kParameter_multiband_compressor_gain_band_1:
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
        case kParameter_multiband_compressor_gain_band_2:
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
        case kParameter_multiband_compressor_gain_band_3:
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
        case kParameter_multiband_compressor_gain_band_4:
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
        case kParameter_multiband_compressor_gain_band_5:
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
        case kParameter_limiter_gain:
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
        case kParameter_output_peak_channel_0:
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
        case kParameter_output_peak_channel_1:
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
        case kParameter_bypass_global:
            return dsp->fCheckbox0;
        case kParameter__2:
            return dsp->fCheckbox1;
        case kParameter_spectral_ballancer_timbre:
            return dsp->fVslider2;
        case kParameter_input_gain:
            return dsp->fVslider1;
        case kParameter_leveler_target:
            return dsp->fVslider0;
        case kParameter_multiband_compressor_style:
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
        case kParameter_multiband_compressor_style:
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
        float params[6] = {
            dsp->fCheckbox0,
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
        dsp->fCheckbox1 = params[1];
        dsp->fVslider2 = params[2];
        dsp->fVslider1 = params[3];
        dsp->fVslider0 = params[4];
        dsp->fVslider3 = params[5];
        
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