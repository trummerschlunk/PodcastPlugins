// -*-Faust-*-

declare name "PodcastPlugin Track";
declare version "0.1";
declare author "Klaus Scheuermann";
declare license "GPLv3";

ds = library("dynamicsmoothing.lib");
ebu = library("ebur128.lib");

import("stdfaust.lib");


//----------------------- Initial Values -----------------------
init_spectrum2 = -24,-22,-20,-19,  -18,-18,-18,-18,  -20,-22,-24,-24,  -23,-24,-25,-25,  -24,-23,-20,-16;
init_spectrum1 = -22,-19,-18,-16,  -17,-18,-18,-18,  -18,-19,-20,-22,  -24,-27,-26,-28,  -29,-29,-29,-29;
init_mb_outGain = 0;
init_leveler_target = -18;
init_leveler_maxboost = 30;
init_leveler_maxcut = 30;
init_leveler_brake_threshold = -22;
init_leveler_speed = 80;

//------------------------ GUI Symbols for DPF ----------------
// METERS:
// [symbol:input_peak_channel_0]                   left input peak meter -60/0
// [symbol:input_peak_channel_1]                   right input peak meter -60/0
// [symbol:spectral_ballancer_gain_band_%2i]     20 spectral ballancer  gain meters -12/+12
// [symbol:leveler_gain]                         1 leveler gain meter -50/+50
// [symbol:multiband_compressor_gain_band_%b]    5 multiband compressor gain meters -12/+12
// [symbol:output_peak_channel_0]                  left output peak meter -60/0
// [symbol:output_peak_channel_1]                  right output peak meter -60/0
// [symbol:lufs_out_meter]                       1 lufs out meter -120/0
// [symbol:limiter_gain]                         1 limiter gain meter -20/0
// [symbol:latency_global]                       1 global latency in seconds

// KNOBS, BUTTONS, SWITCHES:
// [symbol:input_gain]                           1 pre-gain knob -20/-20, centered at 0
// [symbol:leveler_target]                       leveler target knob -50/-2
// [symbol:timbre]                               1 spectral ballancer timbre knob -5/+5, centered at 0
// [symbol:style]                                style knob -5/+5, centered at 0
// [symbol:bypass_global]                        1 global bypass switch 0/1 
// [symbol:bypass_leveler]                       bypass leveler
// [symbol:bypass_style]                         bypass style

 //----------------------- GUI Elements -----------------------
//preGainSlider = vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[1]PreStage/[1][unit:dB]PreGain", 0, -20, 20, 0.1);
//spectrum_morph = vslider("v:Podcast Plugins/v:[1]Spectral Ballancer/h:Target Spectrum/h:Parameters/[2]spectrum morph",0.5,0,1,0.01);
//sb_strength = vslider("v:Podcast Plugins/v:[1]Spectral Ballancer/h:Target Spectrum/h:Parameters/[1]strength", 1,0,1,0.1);
//delay = vslider("v:Podcast Plugins/v:[1]Spectral Ballancer/h:Target Spectrum/h:Parameters/[2]delay", 100,0,1000,1) / 1000 * ma.SR;
//ballancer_checkbox = checkbox("v:Podcast Plugins/h:[0]Modules/[2]ballancer");
//prefilter_checkbox = checkbox("v:Podcast Plugins/h:[0]Modules/[1]prefilter");
//spectrum1(n) = par(i, n, vslider("v:Podcast Plugins/v:[1]Spectral Ballancer/h:Target Spectrum/v:Target Curves/h:[6]spectrum1/%2i",(init_spectrum1:ba.selector(i,BANDS)),-50,0,1));
//spectrum2(n) = par(i, n, vslider("v:Podcast Plugins/v:[1]Spectral Ballancer/h:Target Spectrum/v:Target Curves/h:[4]spectrum2/%2i",(init_spectrum2:ba.selector(i,BANDS)),-50,0,1));
//spectrum_meter(i) = par(i,BANDS, (_ <: attach(_, vbargraph("v:Podcast Plugins/v:[1]Spectral Ballancer/h:Target Spectrum/v:Target Curves/h:[6]spectrum morph/[1][unit:dB]%2i",-50,0))));
//meter_sb(i) = _ <: attach(_, vbargraph("v:Podcast Plugins/v:[1]Spectral Ballancer/h:[2]loudness normalized spectrum/[1][unit:dB]band%2i",-40,0));
gainmeter_sb(i) = _ <: attach(_, vbargraph("v:Podcast Plugins/v:[1]Spectral Ballancer/h:[3]resulting gain/[1][symbol:spectral_ballancer_gain_band_%2i]gr %2i",-12,12));
//meter_expander_sb = vbargraph("v:Podcast Plugins/v:[1]Spectral Ballancer/h:Target Spectrum/h:Parameters/[3][integer]expander",0,1);
leveler_meter_gain = vbargraph("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[2]Leveler/[1][unit:dB][symbol:leveler_gain]gain",-50,50);
//bp = checkbox("v:Podcast Plugins/h:[0]Modules/[3]leveler"):si.smoo;
//target = vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[2]Leveler/[3]target[unit:dB]", init_leveler_target,-50,-2,1);
//leveler_speed = vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[2]Leveler/[4][unit:%][integer]speed", init_leveler_speed, 0, 100, 1) * 0.01;
//leveler_brake_thresh = target + vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[2]Leveler/[5][unit:dB]brake threshold", init_leveler_brake_threshold,-90,0,1)+32;
//meter_leveler_brake = _*100 : vbargraph("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[2]Leveler/[6][unit:%][integer]brake",0,100);
//limit_pos = vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[2]Leveler/[7][unit:dB]max boost", init_leveler_maxboost, 0, 60, 1);
//limit_neg = vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[2]Leveler/[8][unit:dB]max cut", init_leveler_maxcut, 0, 60, 1) : ma.neg;
//threshLim = vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[4]Brickwall/[3]brickwall ceiling[unit:dB]",-1,-20,-0,0.1);
//rel = vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[4]Brickwall/[4]release[unit:ms]",20,5,100,1) *0.001;
//mbcomp_morph = vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[3]Multiband Conpressor/h:Parameters/[2]mb morph",0.5,0,1,0.01);
//limiter_thresh = vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[4]Brickwall/[3]brickwall ceiling[unit:dB]",-1,-20,-0,0.1) : ba.db2linear;
meter_mb(b,c) = _<: attach(_, (max(-12):min(12): envelop_mb : vbargraph("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[3]Multiband Conpressor/h:bands/[8][symbol:multiband_compressor_gain_band_%b]gr %b[unit:dB]", -12, 12)));
envelop_mb = si.smooth(ba.tau2pole(0.1)); //fi.lowpass(1,3);


//----------------------- Almost no GUI Elements -----------------------
preGainSlider = vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[1]PreStage/[1][symbol:input_gain][unit:dB]PreGain", 0, -20, 20, 0.1);
spectrum_morph = vslider("v:Podcast Plugins/v:[1]Spectral Ballancer/h:Target Spectrum/h:Parameters/[2][symbol:timbre]timbre",0,-5,5,0.1) : _+5 : _/ 10;
sb_strength = 1; //vslider("v:Podcast Plugins/v:[1]Spectral Ballancer/h:Target Spectrum/h:Parameters/[1]strength", 1,0,1,0.1);
delay = Latency_spectral_ballancer * ma.SR; //vslider("v:Podcast Plugins/v:[1]Spectral Ballancer/h:Target Spectrum/h:Parameters/[2]delay", 100,0,1000,1) / 1000 * ma.SR;
ballancer_checkbox = checkbox("v:Podcast Plugins/h:[0]Modules/[2][symbol:bypass_timbre]bypass timbre");
prefilter_checkbox = 0; //checkbox("v:Podcast Plugins/h:[0]Modules/[1]prefilter");
spectrum1(n) = init_spectrum1; //par(i, n, vslider("v:Podcast Plugins/v:[1]Spectral Ballancer/h:Target Spectrum/v:Target Curves/h:[6]spectrum1/%2i",(init_spectrum1:ba.selector(i,BANDS)),-50,0,1));
spectrum2(n) = init_spectrum2;//par(i, n, vslider("v:Podcast Plugins/v:[1]Spectral Ballancer/h:Target Spectrum/v:Target Curves/h:[4]spectrum2/%2i",(init_spectrum2:ba.selector(i,BANDS)),-50,0,1));
spectrum_meter(i) = par(i,BANDS,_);//par(i,BANDS, (_ <: attach(_, vbargraph("v:Podcast Plugins/v:[1]Spectral Ballancer/h:Target Spectrum/v:Target Curves/h:[6]spectrum morph/[1][unit:dB]%2i",-50,0))));
meter_sb(i) = _; //_ <: attach(_, vbargraph("v:Podcast Plugins/v:[1]Spectral Ballancer/h:[2]loudness normalized spectrum/[1][unit:dB]band%2i",-40,0));
//gainmeter_sb(i) = _; //_ <: attach(_, vbargraph("v:Podcast Plugins/v:[1]Spectral Ballancer/h:[3]resulting gain/[1]gr %2i",-20,20));
meter_expander_sb = _; //vbargraph("v:Podcast Plugins/v:[1]Spectral Ballancer/h:Target Spectrum/h:Parameters/[3][integer]expander",0,1);
//leveler_meter_gain = _; //vbargraph("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[2]Leveler/[1][unit:dB]gain",-50,50);
bp = checkbox("v:Podcast Plugins/h:[0]Modules/[3][symbol:bypass_leveler]bypass_leveler"):si.smoo;
target = vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[2]Leveler/[3]target[unit:dB][symbol:leveler_target]", init_leveler_target,-50,-2,1);
leveler_speed = init_leveler_speed *0.01; //vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[2]Leveler/[4][unit:%][integer]speed", init_leveler_speed, 0, 100, 1) * 0.01;
leveler_brake_thresh = target + init_leveler_brake_threshold +32; //target + vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[2]Leveler/[5][unit:dB]brake threshold", init_leveler_brake_threshold,-90,0,1)+32;
meter_leveler_brake = _; //_*100 : vbargraph("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[2]Leveler/[6][unit:%][integer]brake",0,100);
limit_pos = init_leveler_maxboost; //vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[2]Leveler/[7][unit:dB]max boost", init_leveler_maxboost, 0, 60, 1);
limit_neg = init_leveler_maxcut : ma.neg; //vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[2]Leveler/[8][unit:dB]max cut", init_leveler_maxcut, 0, 60, 1) : ma.neg;
threshLim = -1; //vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[4]Brickwall/[3]brickwall ceiling[unit:dB]",-1,-20,-0,0.1);
// rel = 20*0.001; //vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[4]Brickwall/[4]release[unit:ms]",20,5,100,1) *0.001;
mbcomp_morph = vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[3]Multiband Conpressor/h:Parameters/[2][symbol:style]style",0,-5,5,0.1) : _+5 : _/ 10;
limiter_thresh = -1 : ba.db2linear; //vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[4]Brickwall/[3]brickwall ceiling[unit:dB]",-1,-20,-0,0.1) : ba.db2linear;
//meter_mb(b,c) = _; //_<: attach(_, (max(-12):min(12):vbargraph("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[3]Multiband Conpressor/h:bands/[8]gr %b[unit:dB]", -6, 6)));
bypass_global = checkbox("v:Podcast Plugins/h:[0]Modules/[9][symbol:bypass_global]bypass global");


//----------------------- Global Parameters -----------------------
BANDS = 20; // number of bands of the spectral ballancer
maxSR = 192000; // maximum sample rate

Nch = 2; //number of channels
Nba = 5; //number of bands of the multiband compressor

Latency_limiter = 0.01; // in ms
Latency_spectral_ballancer = 0.1; // in ms
Latency_global = Latency_spectral_ballancer + Latency_limiter <: attach(_, vbargraph("v:Podcast Plugins/v:[1]Spectral Ballancer/h:Target Spectrum/h:Parameters/[symbol:latency_global]latency_global",0,1));
Lufs_measurement_window = 0.8;

//----------------------- MAIN Section -----------------------

process = _,_ 
        : bp2(bypass_global, 
                (pregain(Nch)
                : peakmeter_in
                : prefilter_bp 
                : ballancer_bp 
                : leveler 
                : mbcomp_bp 
                : limiter_lookahead))        
          : peakmeter_out
          : lufs_out_meter
          ;

//----------------------- Utility Functions -----------------------
// Stereo bypass with smooth fading
bp2(sw,pr) = _,_ <: _,_,pr : (_*sm,_*sm),(_*(1-sm),_*(1-sm)) :> _,_ with {
    sm = sw : si.smoo;
};

//------------------------ PRE-GAIN Section ------------------------

pregain(n) = par(i,n,gain) with {
    gain = _ * (preGainSlider : ba.db2linear : si.smoo);
};

// ----------------------- peak meters -----------------------
peakmeter_in = in_meter_l,in_meter_r with {
envelop = abs : max(ba.db2linear(-70)) : ba.linear2db : min(10)  : max ~ -(8.0/ma.SR);
in_meter_l(x) = attach(x, envelop(x) : vbargraph("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[1]PreStage/[symbol:input_peak_channel_0]In 0", -70, 0));
in_meter_r(x) = attach(x, envelop(x) : vbargraph("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[1]PreStage/[symbol:input_peak_channel_1]In 1", -70, 0));
           };
peakmeter_out = out_meter_l,out_meter_r with {
  envelop = abs : max(ba.db2linear(-70)) : ba.linear2db : min(10)  : max ~ -(8.0/ma.SR);
  out_meter_l(x) = attach(x, envelop(x) : vbargraph("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[6]PostStage/[symbol:output_peak_channel_0]Out 0", -70, 0));
  out_meter_r(x) = attach(x, envelop(x) : vbargraph("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[6]PostStage/[symbol:output_peak_channel_1]Out 1", -70, 0));
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

measure = lk_fixed_sb(Lufs_measurement_window);

// EXPANDER
expander_sb(x) = (co.peak_expansion_gain_mono_db(maxHold,strength,thresh,range,att,hold,gate_rel,knee,prePost,x)
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
lufs_out_meter(l,r) = l,r <: l, attach(r, (lk2_short : vbargraph("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[6]PostStage/[symbol:lufs_out_meter][unit:dB]lufs",-120,0))) : _,_;

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

  expander(x) = (co.peak_expansion_gain_mono_db(maxHold,strength,leveler_brake_thresh,range,gate_att,hold,gate_rel,knee,prePost,x)
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

//----------------------- Multiband Compressor & Expander Section -----------------------

// bypass
mbcomp_bp = bp2(checkbox("v:Podcast Plugins/h:[0]Modules/[4][symbol:bypass_style]bypass style"),
                B_band_Compressor_N_chan(Nba,Nch)
               ) ;

// compressor & expander
B_band_Compressor_N_chan(B,N) =
    si.bus (N) <: si.bus (2 * N)
    : ( (crossover:gain_calc), si.bus(N) )
    : apply_gain
  
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

            compressor(N,prePost,strength,thresh,att,rel,knee,link) = co.peak_compression_gain_N_chan_db (strength,thresh,att,rel,knee,prePost,link,N);

            expander(N,strength,thresh,range,att,rel,knee) = co.peak_expansion_gain_N_chan_db(strength,thresh,range,att,hold,rel,knee,prePost,link,maxHold,N) with {
                hold = 0.01;
                prePost = 1;
                link = 1;
                maxHold = 2048;
            };
        
            gain_calc = si.bus(Nba*2) <: gain_calc_comp, gain_calc_exp : ro.interleave(10,2) : par (i,Nba*2,min) : par(b, Nba, par(c, Nch, meter_mb(b+1, c+1)));

            
        


            gain_calc_exp = 
                    (expander_strength_array, expander_thresh_array, expander_range_array, expander_att_array, expander_rel_array, expander_knee_array, si.bus(N*B))
                    : ro.interleave(B,6+N)
                    : par(i, B, expander(N)) // : si.bus (N * Nr_bands)
                ;


        

            gain_calc_comp = (strength_array, thresh_array, att_array, rel_array, knee_array, link_array, si.bus(N*B))
                    : ro.interleave(B,6+N)
                    : par(i, B, compressor(N,prePost))
                    : par(i, B, (   (_+(gain_array : ba.selector(i,B)))  , (_+(gain_array : ba.selector(i,B)))))    
                ;


                outputGain = par(i, N, _*mscomp_outGain);

        

            /* 3rd order low, band and hi shelf filter primitives */
            // ls3(f,g) = fi.svf.ls (f, .5, g3) : fi.svf.ls (f, .707, g3) : fi.svf.ls (f, 2, g3) with {g3 = g/3;};
            // bs3(f1,f2,g) = ls3(f1,-g) : ls3(f2,g);
            // hs3(f,g) = fi.svf.hs (f, .5, g3) : fi.svf.hs (f, .707, g3) : fi.svf.hs (f, 2, g3) with {g3 = g/3;};
            
            /* 1st order low, band and hi shelf filter primitives */
            ls3(f,g) = fi.svf.ls (f, .7, g);
            bs3(f1,f2,g) = ls3(f1,-g) : ls3(f2,g);
            hs3(f,g) = fi.svf.hs (f, .7, g);

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
            fl = 100;
            fh = 7000;


            // parameter arrays for the multiband compressor

            strength_array1 = 0.2,0.2,0.2,0.3,0.4;
            strength_array2 = 0.4,0.5,0.6,0.7,0.8;

            strength_array = par(i,Nba, (
                ((strength_array1:ba.selector(i,Nba)), (strength_array2:ba.selector(i,Nba))) :
                si.interpolate(mbcomp_morph)));

            thresh_array1 = 0,6,4,2,0 : par(i,Nba,(_+target)); 
            thresh_array2 = -1,4,2,0,-2 : par(i,Nba,(_+target));
                
            thresh_array = par(i,Nba, (
                ((thresh_array1:ba.selector(i,Nba)), (thresh_array2:ba.selector(i,Nba))) :
                si.interpolate(mbcomp_morph)));

            att_array1 = 15,12,10,8,5       : par(i,Nba,_*0.001);
            att_array2 = 10,8,6,4,2         : par(i,Nba,_*0.001);
                
            att_array = par(i,Nba, (
                ((att_array1:ba.selector(i,Nba)), (att_array2:ba.selector(i,Nba))) :
                si.interpolate(mbcomp_morph)));

            rel_array1 = 80,70,60,50,40     : par(i,Nba,_*0.001);
            rel_array2 = 30,30,20,10,10     : par(i,Nba,_*0.001);
                
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

            // parameter arrays for the multiband expander
            expander_thresh_array1 = -40,-40,-40,-40,-40 : par(i,Nba,(_+target));
            expander_thresh_array2 = -40,-38,-35,-35,-35 : par(i,Nba,(_+target));

            expander_thresh_array = par(i,Nba, (
                ((expander_thresh_array1:ba.selector(i,Nba)), (expander_thresh_array2:ba.selector(i,Nba))) :
                si.interpolate(mbcomp_morph)));

            expander_strength_array1 = 10,10,10,10,10;
            expander_strength_array2 = 20,20,30,35,40;

            expander_strength_array = par(i,Nba, (
                ((expander_strength_array1:ba.selector(i,Nba)), (expander_strength_array2:ba.selector(i,Nba))) :
                si.interpolate(mbcomp_morph)));

            expander_range_array1 = -3,-3,-3,-3,-3;
            expander_range_array2 = -30,-30,-30,-30,-30;

            expander_range_array = par(i,Nba, (
                ((expander_range_array1:ba.selector(i,Nba)), (expander_range_array2:ba.selector(i,Nba))) :
                si.interpolate(mbcomp_morph)));

            expander_att_array1 = 0.005,0.005,0.002,0.002,0.001;
            expander_att_array2 = 0.01,0.01,0.005,0.002,0.001;

            expander_att_array = par(i,Nba, (
                ((expander_att_array1:ba.selector(i,Nba)), (expander_att_array2:ba.selector(i,Nba))) :
                si.interpolate(mbcomp_morph)));

            expander_rel_array1 = 1,0.8,0.6,0.4,0.3;
            expander_rel_array2 = 0.5,0.4,0.2,0.1,0.05;

            expander_rel_array = par(i,Nba, (
                ((expander_rel_array1:ba.selector(i,Nba)), (expander_rel_array2:ba.selector(i,Nba))) :
                si.interpolate(mbcomp_morph)));

            expander_knee_array1 = 12,12,12,12,12;
            expander_knee_array2 = 6,6,6,6,6;

            expander_knee_array = par(i,Nba, (
                ((expander_knee_array1:ba.selector(i,Nba)), (expander_knee_array2:ba.selector(i,Nba))) :
                si.interpolate(mbcomp_morph)));



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


// LIMITER with LOOKAHEAD

limiter_lookahead = limiter_lad_stereo(Latency_global - Latency_spectral_ballancer,limiter_thresh, Latency_limiter/twopi, .1, 1/twopi)
with {
    twopi = 2 * ma.PI;
};

limiter_lad_stereo(LD) = limiter_lad_N(2, LD);

limiter_lad_N(N, LD, ceiling, attack, hold, release) = 
      si.bus(N) <: par(i, N, @(LD * ma.SR)), 
                   (scaling <: si.bus(N)) : ro.interleave(N, 2) : par(i, N, *)
      with {
           scaling = ceiling / max(amp_profile, ma.EPSILON) : min(1) : limiter_meter;
           amp_profile = par(i, N, abs) : maxN(N) : ba.peakholder(hold * ma.SR) :
               att_smooth(attack) : rel_smooth(release);
           att_smooth(time, in) = si.smooth(ba.tau2pole(time), in);
           rel_smooth(time, in) = an.peak_envelope(time, in);
           maxN(1) = _;
           maxN(2) = max;
           maxN(N) = max(maxN(N - 1));
           limiter_meter = _ <: attach(_,abs : ba.linear2db : vbargraph("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[6]PostStage/[symbol:limiter_gain][0]LimiterGR",-60,0));
      };

