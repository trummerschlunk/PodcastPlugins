// -*-Faust-*-

declare name "PodcastPlugin Track";
declare version "0.1";
declare author "Klaus Scheuermann";
declare license "GPLv3";

// double precision -double needed!

//----------------------- Initial Values -----------------------
init_spectrum2 = -24,-22,-20,-19,  -18,-18,-18,-18,  -20,-22,-24,-24,  -23,-24,-25,-25,  -24,-23,-20,-16;
init_spectrum1 = -22,-19,-18,-16,  -17,-18,-18,-18,  -18,-19,-20,-22,  -24,-27,-26,-28,  -29,-29,-29,-29;
init_mb_outGain = 0;
init_leveler_target = -18;
init_leveler_maxboost = 30;
init_leveler_maxcut = 30;
init_leveler_brake_threshold = -22;
init_leveler_speed = 80;

/* //----------------------- GUI Elements -----------------------
preGainSlider = vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[1]PreStage/[1][unit:dB]PreGain", 0, -20, 20, 0.1);
spectrum_morph = vslider("v:Podcast Plugins/v:[1]Spectral Ballancer/h:Target Spectrum/h:Parameters/[2]spectrum morph",0.5,0,1,0.01);
sb_strength = vslider("v:Podcast Plugins/v:[1]Spectral Ballancer/h:Target Spectrum/h:Parameters/[1]strength", 1,0,1,0.1);
delay = vslider("v:Podcast Plugins/v:[1]Spectral Ballancer/h:Target Spectrum/h:Parameters/[2]delay", 100,0,1000,1) / 1000 * ma.SR;
ballancer_checkbox = checkbox("v:Podcast Plugins/h:[0]Modules/[2]ballancer");
prefilter_checkbox = checkbox("v:Podcast Plugins/h:[0]Modules/[1]prefilter");
spectrum1(n) = par(i, n, vslider("v:Podcast Plugins/v:[1]Spectral Ballancer/h:Target Spectrum/v:Target Curves/h:[6]spectrum1/%2i",(init_spectrum1:ba.selector(i,BANDS)),-50,0,1));
spectrum2(n) = par(i, n, vslider("v:Podcast Plugins/v:[1]Spectral Ballancer/h:Target Spectrum/v:Target Curves/h:[4]spectrum2/%2i",(init_spectrum2:ba.selector(i,BANDS)),-50,0,1));
spectrum_meter(i) = par(i,BANDS, (_ <: attach(_, vbargraph("v:Podcast Plugins/v:[1]Spectral Ballancer/h:Target Spectrum/v:Target Curves/h:[6]spectrum morph/[1][unit:dB]%2i",-50,0))));
meter_sb(i) = _ <: attach(_, vbargraph("v:Podcast Plugins/v:[1]Spectral Ballancer/h:[2]loudness normalized spectrum/[1][unit:dB]band%2i",-40,0));
gainmeter_sb(i) = _ <: attach(_, vbargraph("v:Podcast Plugins/v:[1]Spectral Ballancer/h:[3]resulting gain/[1]gr %2i",-20,20));
meter_expander_sb = vbargraph("v:Podcast Plugins/v:[1]Spectral Ballancer/h:Target Spectrum/h:Parameters/[3][integer]expander",0,1);
leveler_meter_gain = vbargraph("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[2]Leveler/[1][unit:dB]gain",-50,50);
bp = checkbox("v:Podcast Plugins/h:[0]Modules/[3]leveler"):si.smoo;
target = vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[2]Leveler/[3]target[unit:dB]", init_leveler_target,-50,-2,1);
leveler_speed = vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[2]Leveler/[4][unit:%][integer]speed", init_leveler_speed, 0, 100, 1) * 0.01;
leveler_brake_thresh = target + vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[2]Leveler/[5][unit:dB]brake threshold", init_leveler_brake_threshold,-90,0,1)+32;
meter_leveler_brake = _*100 : vbargraph("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[2]Leveler/[6][unit:%][integer]brake",0,100);
limit_pos = vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[2]Leveler/[7][unit:dB]max boost", init_leveler_maxboost, 0, 60, 1);
limit_neg = vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[2]Leveler/[8][unit:dB]max cut", init_leveler_maxcut, 0, 60, 1) : ma.neg;
threshLim = vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[4]Brickwall/[3]brickwall ceiling[unit:dB]",-1,-20,-0,0.1);
rel = vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[4]Brickwall/[4]release[unit:ms]",20,5,100,1) *0.001;
meter_brickwall = _<: _,( vbargraph("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[4]Brickwall/[2]gr[unit:dB]",-20,0)) : attach;
mbcomp_morph = vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[3]Multiband Conpressor/h:Parameters/[2]mb morph",0.5,0,1,0.01);
limiter_thresh = vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[4]Brickwall/[3]brickwall ceiling[unit:dB]",-1,-20,-0,0.1) : ba.db2linear;
meter_mb(b,c) =
    _<: attach(_, (max(-12):min(12):vbargraph("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[3]Multiband Conpressor/h:bands/[8]gr %b[unit:dB]", -6, 6)));
*/

//----------------------- Almost no GUI Elements -----------------------
preGainSlider = vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[1]PreStage/[1][unit:dB]PreGain", 0, -20, 20, 0.1);
spectrum_morph = vslider("v:Podcast Plugins/v:[1]Spectral Ballancer/h:Target Spectrum/h:Parameters/[2]spectrum morph",0.5,0,1,0.01);
sb_strength = 1; //vslider("v:Podcast Plugins/v:[1]Spectral Ballancer/h:Target Spectrum/h:Parameters/[1]strength", 1,0,1,0.1);
delay = 100 / 1000 * ma.SR; //vslider("v:Podcast Plugins/v:[1]Spectral Ballancer/h:Target Spectrum/h:Parameters/[2]delay", 100,0,1000,1) / 1000 * ma.SR;
ballancer_checkbox = checkbox("v:Podcast Plugins/h:[0]Modules/[2]ballancer");
prefilter_checkbox = checkbox("v:Podcast Plugins/h:[0]Modules/[1]prefilter");
spectrum1(n) = init_spectrum1; //par(i, n, vslider("v:Podcast Plugins/v:[1]Spectral Ballancer/h:Target Spectrum/v:Target Curves/h:[6]spectrum1/%2i",(init_spectrum1:ba.selector(i,BANDS)),-50,0,1));
spectrum2(n) = init_spectrum2;//par(i, n, vslider("v:Podcast Plugins/v:[1]Spectral Ballancer/h:Target Spectrum/v:Target Curves/h:[4]spectrum2/%2i",(init_spectrum2:ba.selector(i,BANDS)),-50,0,1));
spectrum_meter(i) = par(i,BANDS,_);//par(i,BANDS, (_ <: attach(_, vbargraph("v:Podcast Plugins/v:[1]Spectral Ballancer/h:Target Spectrum/v:Target Curves/h:[6]spectrum morph/[1][unit:dB]%2i",-50,0))));
meter_sb(i) = _; //_ <: attach(_, vbargraph("v:Podcast Plugins/v:[1]Spectral Ballancer/h:[2]loudness normalized spectrum/[1][unit:dB]band%2i",-40,0));
gainmeter_sb(i) = _; //_ <: attach(_, vbargraph("v:Podcast Plugins/v:[1]Spectral Ballancer/h:[3]resulting gain/[1]gr %2i",-20,20));
meter_expander_sb = _; //vbargraph("v:Podcast Plugins/v:[1]Spectral Ballancer/h:Target Spectrum/h:Parameters/[3][integer]expander",0,1);
leveler_meter_gain = _; //vbargraph("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[2]Leveler/[1][unit:dB]gain",-50,50);
bp = checkbox("v:Podcast Plugins/h:[0]Modules/[3]leveler"):si.smoo;
target = vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[2]Leveler/[3]target[unit:dB][symbol:target]", init_leveler_target,-50,-2,1);
leveler_speed = init_leveler_speed *0.01; //vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[2]Leveler/[4][unit:%][integer]speed", init_leveler_speed, 0, 100, 1) * 0.01;
leveler_brake_thresh = target + init_leveler_brake_threshold +32; //target + vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[2]Leveler/[5][unit:dB]brake threshold", init_leveler_brake_threshold,-90,0,1)+32;
meter_leveler_brake = _; //_*100 : vbargraph("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[2]Leveler/[6][unit:%][integer]brake",0,100);
limit_pos = init_leveler_maxboost; //vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[2]Leveler/[7][unit:dB]max boost", init_leveler_maxboost, 0, 60, 1);
limit_neg = init_leveler_maxcut : ma.neg; //vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[2]Leveler/[8][unit:dB]max cut", init_leveler_maxcut, 0, 60, 1) : ma.neg;
threshLim = -1; //vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[4]Brickwall/[3]brickwall ceiling[unit:dB]",-1,-20,-0,0.1);
rel = 20*0.001; //vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[4]Brickwall/[4]release[unit:ms]",20,5,100,1) *0.001;
meter_brickwall = _; //_<: _,( vbargraph("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[4]Brickwall/[2]gr[unit:dB]",-20,0)) : attach;
mbcomp_morph = vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[3]Multiband Conpressor/h:Parameters/[2]mb morph",0.5,0,1,0.01);
limiter_thresh = -1 : ba.db2linear; //vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[4]Brickwall/[3]brickwall ceiling[unit:dB]",-1,-20,-0,0.1) : ba.db2linear;
meter_mb(b,c) = _; //_<: attach(_, (max(-12):min(12):vbargraph("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[3]Multiband Conpressor/h:bands/[8]gr %b[unit:dB]", -6, 6)));



//----------------------- Global Parameters -----------------------
BANDS = 20; // number of bands of the spectral ballancer
maxSR = 192000; // maximum sample rate

Nch = 2; //number of channels
Nba = 5; //number of bands of the multiband compressor

ds = library("dynamicsmoothing.lib");
ebu = library("ebur128.lib");
ex = library("expanders.lib");
import("stdfaust.lib");

process = _,_ : (pregain(Nch) : lufs_meter : prefilter_bp : ballancer_bp : leveler : mbcomp_bp : limiter_lookahead);

//----------------------- Utility Functions -----------------------
// Stereo bypass with smooth fading
bp2(sw,pr) = _,_ <: _,_,pr : (_*sm,_*sm),(_*(1-sm),_*(1-sm)) :> _,_ with {
    sm = sw : si.smoo;
};

//------------------------ PRE-GAIN Section ------------------------

pregain(n) = par(i,n,gain) with {
    gain = _ * (preGainSlider : ba.db2linear : si.smoo);
};

//----------------------- Pre-Filter Section -----------------------
prefilter_bp = bp2(prefilter_checkbox, (prefilter,prefilter));

prefilter = lowcut : highcut with {
    lowcut = fi.highpass(2,60);
    highcut = fi.lowpass(2,16000);
};

//----------------------- Ballancer Section -----------------------
// Target spectrum curves (in dB) for the spectral ballancer

// Create interpolated spectrum array using si.interpolate
spectrum = par(i,BANDS, (
    ((spectrum1(BANDS):ba.selector(i,BANDS)), (spectrum2(BANDS):ba.selector(i,BANDS))) :
    si.interpolate(spectrum_morph)));// : spectrum_meter(BANDS);

ballancer_bp = bp2(ballancer_checkbox, ballancer_st);
ballancer_st = _,_ :> _ *0.5 : ballancer <: _,_;

ballancer(l) = l <: 
    (measure <: par(i,BANDS,_)),
    (_ : (bpbank(BANDS) : par(i,BANDS,(_<: ((measure),_)))) : ro.interleave(2,BANDS)) 
    : spectrum, par(i,BANDS*3,_) 
    : ro.interleave(BANDS,4) 
    : par(i,BANDS,(_,(ro.cross(2):(_-_):meter_sb(i)),_)) 
    : par(i,BANDS,((((_-_)*sb_strength*expander_sb(l)):gainmeter_sb(i)),_)) 
    : par(i,BANDS,gainchange(l)) 
    :> _ <: _,_;

// Bandpass filterbank
bpbank(nbands) = _ <: par(i, nbands, bandpass(freq(i),i) * norm) with {
    freq_min = 60;
    freq_max = 12000;
    
    // Calculate center frequency for each band (exponential spacing)
    freq(i) = freq_min * pow(freq_max/freq_min, i/(nbands-1));
    
    // Q factor for the bandpass filters
    Q = 3;
    
    // Normalization factor - using square root for less aggressive scaling
    norm = 1/sqrt(nbands);
    
    // Gain control for each band (-12dB to +12dB)
    gain(i) = 1;//hgroup("sliders", vslider("Band %02i Gain", 0, -12, 12, 0.1)) : ba.db2linear;
    
    // Single bandpass filter with gain control
    bandpass(f,i) = fi.resonbp(f,Q,1) * gain(i);
};

gainchange(in) = (_:ba.db2linear)*(_:de.delay(48000,delay));

lk_fixed_sb(Tg)= (kfilter : zi) :> 4.342944819 * log(max(1e-12)) : -(0.691) with {
    sump(n) = ba.slidingSump(n, Tg*maxSR)/max(n,ma.EPSILON);
    envelope(period, x) = x * x :  sump(rint(period * ma.SR));
    zi = envelope(Tg); // mean square: average power = energy/Tg = integral of squared signal / Tg
    kfilter = ebu.ebur128;
};

measure = lk_fixed_sb(0.8);

// EXPANDER
expander_sb(x) = (peak_expansion_gain_mono_db(maxHold,strength,thresh,range,att,hold,gate_rel,knee,prePost,x)
                 : ba.db2linear
                 :max(0)
                 :min(1))
                <: attach(_: meter_expander_sb) with{
                    maxHold = hold*maxSR;
                    strength = 0.8;
                    thresh = -20;      
                    range = 0-(ma.MAX);
                    att = 0.01;
                    hold = 0.001;
                    gate_rel = 0.5;
                    knee = ma.EPSILON;
                    prePost = 1;
};

peak_expansion_gain_mono_db(maxHold,strength,thresh,range,attack,hold,release,knee,prePost) =
  level(hold,maxHold):ba.bypass1(prePost,si.lag_ud(attack,release)) :ba.linear2db : gain_computer(strength,thresh,range,knee) : ba.bypass1((prePost !=1),si.lag_ud(att,rel))
with {
  gain_computer(strength,thresh,range,knee,level) =
    ( select3((level>(thresh-(knee/2)))+(level>(thresh+(knee/2)))
             , (level-thresh)
             , ((level-thresh-(knee/2)):pow(2) /(min(ma.EPSILON,knee*-2)))
             , 0
             )  *abs(strength):max(range)
                               * (-1+(2*(strength>0)))
    );
  att = select2((strength>0),release,attack);
  rel = select2((strength>0),attack,release);
  level(hold,maxHold,x) =
    x:abs:ba.slidingMax(hold*ma.SR,maxHold);
};

// LEVELER

leveler(l,r) =

  ( ((l,r):leveler_sc(target)~(_,_)
                              :(
       (_*(1-bp))
      ,(_*(1-bp))
     ))
  , (l*bp,r*bp)
  ):>(_,_);

basefreq =
  it.interpolate_linear(leveler_speed
                        :pow(
                          2 // hslider("base freq power", 2, 0.1, 10, 0.1)
                        )
                       , 0.01
                       , 0.2 // hslider("base freq fast", 0.2, 0.1, 0.3, 0.001)
                       );

sensitivity =
  it.interpolate_linear(leveler_speed
                        :pow(
                          0.5 // hslider("sens power", 0.5, 0.1, 10, 0.1)
                        )
                       , 0.00000025
                       , 0.0000025 // hslider("sens fast", 0.0000025, 0.0000025, 0.000005, 0.0000001)
                       );

lk2_fixed(Tg)= par(i,2,kfilter : zi) :> 4.342944819 * log(max(1e-12)) : -(0.691) with {
  // maximum assumed sample rate is 192k
  sump(n) = ba.slidingSump(n, Tg*maxSR)/max(n,ma.EPSILON);
  envelope(period, x) = x * x :  sump(rint(period * ma.SR));
  zi = envelope(Tg); // mean square: average power = energy/Tg = integral of squared signal / Tg

  kfilter = ebu.ebur128;
};

lk2_var(Tg)= par(i,2,kfilter : zi) :> 4.342944819 * log(max(1e-12)) : -(0.691) with {
  // maximum assumed sample rate is 192k
  sump(n) = ba.slidingSump(n, 0.4 * maxSR)/max(n,ma.EPSILON);
  envelope(period, x) = x * x :  sump(rint(period * ma.SR));
  zi = envelope(Tg); // mean square: average power = energy/Tg = integral of squared signal / Tg

  kfilter = ebu.ebur128;
};
lk2 = lk2_fixed(3);
lk2_short = lk2_fixed(0.4);
lufs_meter(l,r) = l,r <: l, attach(r, (lk2_short : vbargraph("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[1]PreStage/[unit:dB]lufs",-120,0))) : _,_;

lk2_time =
  // 0.4;
  hslider("lk2 time", 0.01, 0.001, 3, 0.001);
// it.interpolate_linear(leveler_speed :pow(hslider("lk2 power", 2, 0.1, 10, 0.1))
//                      ,0.4 // hslider("lk2 time", 0.4, 0.001, 3, 0.001)
//                      , 0.04):max(0);
leveler_sc(target,fl,fr,l,r) =
  calc(lk2_fixed(0.01,fl,fr))
  // (calc(lk2_var(lk2_time,fl,fr))*(1-bp)+bp)
  <: (_*l,_*r)
with {
  // lp1p(cf) = si.smooth(ba.tau2pole(1/(2*ma.PI*cf)));
  calc(lufs) = FB(lufs)~_: ba.db2linear;
  FB(lufs,prev_gain) =
    (target - lufs)
    +(prev_gain )
    : ds.dynamicSmoothing(
      sensitivity * expander(abs(fl)+abs(fr))
    ,  basefreq * expander(abs(fl)+abs(fr))
    )
    :  limit(limit_neg,limit_pos)
    : leveler_meter_gain;

  limit(lo,hi) = min(hi) : max(lo);

  leveler_speed_brake(sc) = expander(sc) * leveler_speed;

  expander(x) = (peak_expansion_gain_mono_db(maxHold,strength,leveler_brake_thresh,range,gate_att,hold,gate_rel,knee,prePost,x)
                 : ba.db2linear
                 :max(0)
                 :min(1))
                <: attach(_, (1-_) : meter_leveler_brake) with{
                    maxHold = hold*maxSR;
                    strength = 1;
                    // hslider("gate strength", 1, 0.1, 10, 0.1);
                    range = 0-(ma.MAX);
                    gate_att =
                        0;
                    // hslider("gate att", 0.0, 0.0, 1, 0.001);
                    hold = 0.0001;
                    gate_rel =
                        0.1;
                    // hslider("gate rel", 0.1, 0.0, 1, 0.001);
                    knee =
                        ma.EPSILON;
                    // hslider("gate knee", 0, 0, 90, 1);
                    prePost = 1;
                };

  
};

//----------------------- Multiband Compressor Section -----------------------

// MSCOMP Interpolated (Bart Brouns)
mbcomp_bp = bp2(checkbox("v:Podcast Plugins/h:[0]Modules/[4]comp"),
                B_band_Compressor_N_chan(Nba,Nch)
               ) ;

B_band_Compressor_N_chan(B,N) =
  si.bus (N) <: si.bus (2 * N)
  : ( (crossover:gain_calc), si.bus(N) )
  : apply_gain
  //: outputGain
with {
  crossover =
    par(i, N, an.analyzer (6, crossoverFreqs)
              : ro.cross (B)
       );

  apply_gain =
    (ro.interleave(N, B+1))
    : par(i, N, ro.cross(B),_)
    : par(i, N, shelfcascade ((crossoverFreqs)))
  ;

  // TODO: use co.peak_compression_gain_N_chan_db when it arrives in the current faust version
  compressor(N,prePost,strength,thresh,att,rel,knee,link) = peak_compression_gain_N_chan_db (strength,thresh,att,rel,knee,prePost,link,N);

  mb_expander(N) = co.peak_expansion_gain_N_chan_db(strength,thresh,range,att,hold,rel,knee,prePost,link,maxHold,N) with {
    strength = 50;
    thresh = -30;
    range = 10;
    att = 0.001;
    hold = 0.01;
    rel = 0.1;
    knee = 6;
    prePost = 1;
    link = 1;
    maxHold = 2048;
  
  };

  gain_calc = (strength_array, thresh_array, att_array, rel_array, knee_array, link_array, si.bus(N*B))
              : ro.interleave(B,6+N)
              
              : par(i, B, compressor(N,prePost)) // : si.bus (N * Nr_bands)
              : par(i, B, (   (_+(gain_array : ba.selector(i,B)))  , (_+(gain_array : ba.selector(i,B)))))    
             
              
              : par(b, B, par(c, N, meter_mb(b+1, c+1)));


  outputGain = par(i, N, _*mscomp_outGain);

  /* TODO: separate %b%c in symbol name so that it is a valid C/C++ variable-name (ideally an underscore) %b_%c
   * meanwhile this is safe since there are only 8 bands (1..9) and 2 channels.
   */
  //meter_mb(b,c) = _<: attach(_, (max(-12):min(12):vbargraph("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[3]Multiband Conpressor/h:bands/[8]gr %b[unit:dB]", -6, 6)));

  /* higher order low, band and hi shelf filter primitives */
  ls3(f,g) = fi.svf.ls (f, .5, g3) : fi.svf.ls (f, .707, g3) : fi.svf.ls (f, 2, g3) with {g3 = g/3;};
  bs3(f1,f2,g) = ls3(f1,-g) : ls3(f2,g);
  hs3(f,g) = fi.svf.hs (f, .5, g3) : fi.svf.hs (f, .707, g3) : fi.svf.hs (f, 2, g3) with {g3 = g/3;};

  /* Cascade of shelving filters to apply gain per band.
   *
   * `lf` : list of frequencies
   * followed by (count(lf) +1) gain parameters
   */
  shelfcascade(lf) = fbus(lf), ls3(first(lf)) : sc(lf)
  with {
    sc((f1, f2, lf)) = fbus((f2,lf)), bs3(f1,f2) : sc((f2,lf)); // recursive pattern
    sc((f1, f2))     = _, bs3(f1,f2) : hs3(f2);                // halting pattern
    fbus(l)          = par(i, outputs(l), _);                  // a bus of the size of a list
    first((x,xs))    = x;                                      // first element of a list
  };

  /* Cross over frequency range */
  fl = 100;//vslider("v:Podcast Plugins/h:[3]Multiband Conpressor/h:[1]low band/[7][scale:log][unit:Hz]low crossover", 80, 20, 4000, 1);
  fh = 7000; //vslider("v:Podcast Plugins/h:[3]Multiband Conpressor/h:[2]high band/[7][scale:log][unit:Hz]high crossover", 8000, 5000, 20000, 1);

  /* Compressor settings */

// Add interpolation slider for mb_comp parameters
mbcomp_morph = vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[3]Multiband Conpressor/h:Parameters/[2]mb morph",0.5,0,1,0.01);

strength_array1 = 0.2,0.2,0.2,0.3,0.4;
strength_array2 = 0.4,0.5,0.6,0.7,0.8;

strength_array = par(i,Nba, (
    ((strength_array1:ba.selector(i,Nba)), (strength_array2:ba.selector(i,Nba))) :
    si.interpolate(mbcomp_morph)));

thresh_array1 = 2,8,6,4,2 : par(i,5,(_+target)); //target + 2, target + 8 , target + 6, target + 4, target + 2;  //-16,-10,-12,-14,-16;
thresh_array2 = -1,4,2,0,-2 : par(i,5,(_+target)); //-19,-14,-16,-18,-20;
    
thresh_array = par(i,Nba, (
    ((thresh_array1:ba.selector(i,Nba)), (thresh_array2:ba.selector(i,Nba))) :
    si.interpolate(mbcomp_morph)));

att_array1 = 15,12,10,8,5       : par(i,5,_*0.001);
att_array2 = 10,8,6,4,2         : par(i,5,_*0.001);
    
att_array = par(i,Nba, (
    ((att_array1:ba.selector(i,Nba)), (att_array2:ba.selector(i,Nba))) :
    si.interpolate(mbcomp_morph)));

rel_array1 = 50,50,50,50,50     : par(i,5,_*0.001);
rel_array2 = 30,30,20,10,10     : par(i,5,_*0.001);
    
rel_array = par(i,Nba, (
    ((rel_array1:ba.selector(i,Nba)), (rel_array2:ba.selector(i,Nba))) :
    si.interpolate(mbcomp_morph)));

knee_array1 = 6,6,7,8,9;
knee_array2 = 6,6,7,8,9;
    
knee_array = par(i,Nba, (
    ((knee_array1:ba.selector(i,Nba)), (knee_array2:ba.selector(i,Nba))) :
    si.interpolate(mbcomp_morph)));

gain_array1 = 0,0,0,0,0;
gain_array2 = 1,1,1,1,1;
    
gain_array = par(i,Nba, (
    ((gain_array1:ba.selector(i,Nba)), (gain_array2:ba.selector(i,Nba))) :
    si.interpolate(mbcomp_morph)));


link_array = (1,1,1,1,1);
crossoverFreqs = LogArray(B-1,fl,fh);
//mscomp_outGain = vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[3]Multiband Conpressor/h:[6]out/[1][unit:dB]makeup", init_mb_outGain, -6, 6, 0.5):ba.db2linear:si.smoo;

// make a linear array of values, from bottom to top
LinArray(N,bottom,top) = par(i,N,   ((top-bottom)*(i/(N-1)))+bottom);
// make a log array of values, from bottom to top
LogArray(N,bottom,top) = par(i,N,   pow((pow((t/b),1/(N-1))),i)*b)
with {
b = bottom:max(ma.EPSILON);
t = top:max(ma.EPSILON);
};


  prePost = 1;
};

// stereo bypass with si.smoo fading
bp2(sw,pr) =  _,_ <: _,_,pr : (_*sm,_*sm),(_*(1-sm),_*(1-sm)) :> _,_ with {
    sm = sw : si.smoo;
};

/* ******* 8< *******/
// TODO: use co.peak_compression_gain_N_chan_db when it arrives in the current faust version
peak_compression_gain_mono_db(strength,thresh,att,rel,knee,prePost) =
  abs : ba.bypass1(prePost,si.onePoleSwitching(att,rel)) : ba.linear2db : gain_computer(strength,thresh,knee) : ba.bypass1((prePost !=1),si.onePoleSwitching(rel,att))
with {
  gain_computer(strength,thresh,knee,level) =
    select3((level>(thresh-(knee/2)))+(level>(thresh+(knee/2))),
            0,
            ((level-thresh+(knee/2)) : pow(2)/(2*max(ma.EPSILON,knee))),
            (level-thresh))
    : max(0)*-strength;
};
peak_compression_gain_N_chan_db(strength,thresh,att,rel,knee,prePost,link,1) =
  peak_compression_gain_mono_db(strength,thresh,att,rel,knee,prePost);

peak_compression_gain_N_chan_db(strength,thresh,att,rel,knee,prePost,link,N) =
  par(i, N, peak_compression_gain_mono_db(strength,thresh,att,rel,knee,prePost))
  <: (si.bus(N),(ba.parallelMin(N) <: si.bus(N))) : ro.interleave(N,2) : par(i,N,(it.interpolate_linear(link)));



// LIMITER with LOOKAHEAD

limiter_lookahead = co.limiter_lad_stereo(0.01,limiter_thresh,0.008,0.01,0.1);