// -*-Faust-*-

declare name "PodcastPlugin Master";
declare version "0.1";
declare author "Klaus Scheuermann";
declare license "GPLv3";

// double precision -double needed!

ds = library("dynamicsmoothing.lib");
import("stdfaust.lib");

// init values

Nch = 2; //number of channels
Nba = 5; // number of bands in the mbcomp
maxSR = 192000; // maximum sample rate

/* SYMBOLS

Sliders, Knobs, Switches
[symbol:input_gain]                             input gain knob, centered, +20/-20 dB
[symbol:timbre]                                 timbre knob -5/+5, centered at 0
[symbol:style]                                  style knob -5/+5, centered at 0
[symbol:leveler_target]                         leveler target knob -50/-2 (LUFS)


Meters
[symbol:input_peak_channel_0]                   left input peak meter -60/0
[symbol:input_peak_channel_1]                   right input peak meter -60/0
[symbol:leveler1_gain]                          leveler1 gain meter -50/+50
[symbol:leveler2_gain]                          leveler1 gain meter -50/+50
[symbol:multiband_compressor_gain_band_%b]      5 multiband compressor gain meters -12/+12
[symbol:output_peak_channel_0]                  left output peak meter -60/0
[symbol:output_peak_channel_1]                  right output peak meter -60/0
[symbol:lufs_out_meter]                         lufs out meter -120/0
[symbol:limiter_gain]                           limiter gain meter -20/0
[symbol:latency_global]                         global latency in seconds


*/

init_leveler_target = -18;
init_leveler_maxboost = 20;
init_leveler_maxcut = 20;
init_leveler1_brake_threshold = -18;
init_leveler2_brake_threshold = -18;
init_leveler1_speed = 20;
init_leveler2_speed = 10;


init_kneecomp_thresh = -6;
init_kneecomp_postgain = 0;

init_limiter_lad_ceil = -2;
init_limiter_postgain = 0;

init_mb_outGain = 0;


bp = checkbox("v:Podcast Plugins/h:[1]Global/[4][symbol:bypass_leveler]bypass leveler");

Latency_limiter = 0.01 <: attach(_,hbargraph("v:Podcast Plugins/h:[1]Global/[symbol:latency_global]latency",0,1));


target = vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[2]Leveler1/[3]target[unit:dB][symbol:leveler_target]", init_leveler_target,-50,-2,1);
leveler1_speed = init_leveler1_speed *0.01; //vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[2]Leveler/[4][unit:%][integer]speed", init_leveler_speed, 0, 100, 1) * 0.01;
leveler2_speed = init_leveler1_speed *0.01; //vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[2]Leveler/[4][unit:%][integer]speed", init_leveler_speed, 0, 100, 1) * 0.01;
leveler1_brake_thresh = target + init_leveler1_brake_threshold +32; //target + vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[2]Leveler/[5][unit:dB]brake threshold", init_leveler_brake_threshold,-90,0,1)+32;
leveler2_brake_thresh = target + init_leveler2_brake_threshold +32; //target + vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[2]Leveler/[5][unit:dB]brake threshold", init_leveler_brake_threshold,-90,0,1)+32;

meter_leveler_brake = _; //_*100 : vbargraph("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[2]Leveler/[6][unit:%][integer]brake",0,100);
limit_pos = init_leveler_maxboost; //vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[2]Leveler/[7][unit:dB]max boost", init_leveler_maxboost, 0, 60, 1);
limit_neg = init_leveler_maxcut : ma.neg; //vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[2]Leveler/[8][unit:dB]max cut", init_leveler_maxcut, 0, 60, 1) : ma.neg;
leveler1_meter_gain = vbargraph("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[2]Leveler1/[1][unit:dB][symbol:leveler_gain1]gain 1",-50,50);
leveler2_meter_gain = vbargraph("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[4]Leveler2/[1][unit:dB][symbol:leveler_gain2]gain 2",-50,50);

preGainSlider = vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[1]PreStage/[1][symbol:input_gain][unit:dB]PreGain", 0, -20, 20, 0.1);
mbcomp_morph = vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[3]Multiband Conpressor/h:Parameters/[2][symbol:style]mb morph",0,-5,5,0.1) : _+5 : _/ 10;
meter_mb(b,c) = _<: attach(_, (max(-12):min(12): vbargraph("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[3]Multiband Conpressor/h:bands/[8][symbol:multiband_compressor_gain_band_%b]gr %b[unit:dB]", -12, 12)));
envelop_mb = si.smooth(ba.tau2pole(0.1)); //fi.lowpass(1,3);



// main
process = 
        pregain(Nch)
        : peakmeter_in
        : lufs_in_meter
        : bp2(checkbox("v:Podcast Plugins/h:[1]Global/[symbol:bypass_global]bypass global"),(
            dc_blocker(Nch)
            : tilt_eq_bp
            : leveler1
            //: sc_compressor
            : mbcomp_bp
            //: limiter_rms_bp
            : leveler2
            : limiter_lookahead
            /*: (
                leveler_sc(target)
                : ( sc_compressor
                    //: mscomp_bp
                    : tilt_eq_bp
                    : limiter_rms_bp
                    : limiter_lookahead
                )~(si.bus(2))
            )~(si.bus(2))
            */
       ))

  : lufs_out_meter
  : peakmeter_out
;

// stereo bypass with si.smoo fading
bp2(sw,pr) =  _,_ <: _,_,pr : (_*sm,_*sm),(_*(1-sm),_*(1-sm)) :> _,_ with {
    sm = sw : si.smoo;
};

// PREGAIN
pregain(n) = par(i,n,gain) with {
    gain = _ * (preGainSlider : ba.db2linear : si.smoo);
};

// DC FILTER
dc_blocker_bp = bp2(sw,dc_blocker(2)) with {
  sw = 1 - checkbox("v:master_me/t:expert/h:[1]pre-processing/[5][symbol:dc_blocker]dc blocker");
};

dc_blocker(N) = par(i,N,fi.dcblockerat(dc_filter_freq))
with {
  dc_filter_freq = 10.0;
};



// stereo to m/s encoder
ms_enc = _*0.5,_*0.5 <: +, -;

// m/s to stereo decoder
ms_dec = _,_ <: +, -;

// peak meters
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

lufs_in_meter(l,r) = l,r <: l, attach(r, (lk2_short : vbargraph("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[1]PreStage/[symbol:lufs_in_meter][unit:dB]lufs IN",-120,0))) : _,_;
lufs_out_meter(l,r) = l,r <: l, attach(r, (lk2_short : vbargraph("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[6]PostStage/[symbol:lufs_out_meter][unit:dB]lufs OUT",-120,0))) : _,_;





// EQ with bypass
tilt_eq_bp = bp2(checkbox("v:Podcast Plugins/h:[1]Global/[1][symbol:bypass_timbre]bypass timbre"),tilt_eq);


// TILT EQ STEREO
tilt_eq = par(i,2,_) : par(i,2, fi.lowshelf(N, -gain, freq) : fi.highshelf(N, gain, freq)) with{
    N = 1;
    gain = vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[3]Tilt EQ/[1]timbre[symbol:timbre]",0,-5,5,0.1):si.smoo;
    freq = 630; 
};









// LEVELER (NEW with dynamic smoothing)

leveler1(l,r) =

  ( ((l,r):leveler1_sc(target)~(_,_)
                              :(
       (_*(1-bp))
      ,(_*(1-bp))
     ))
  , (l*bp,r*bp)
  ):>(_,_);

leveler2(l,r) =

  ( ((l,r):leveler2_sc(target)~(_,_)
                              :(
       (_*(1-bp))
      ,(_*(1-bp))
     ))
  , (l*bp,r*bp)
  ):>(_,_);

basefreq1 =
  it.interpolate_linear(leveler1_speed
                        :pow(
                          2 // hslider("base freq power", 2, 0.1, 10, 0.1)
                        )
                       , 0.01
                       , 0.2 // hslider("base freq fast", 0.2, 0.1, 0.3, 0.001)
                       );

sensitivity1 =
  it.interpolate_linear(leveler1_speed
                        :pow(
                          0.5 // hslider("sens power", 0.5, 0.1, 10, 0.1)
                        )
                       , 0.00000025
                       , 0.0000025 // hslider("sens fast", 0.0000025, 0.0000025, 0.000005, 0.0000001)
                       );

basefreq2 =
  it.interpolate_linear(leveler2_speed
                        :pow(
                          2 // hslider("base freq power", 2, 0.1, 10, 0.1)
                        )
                       , 0.01
                       , 0.2 // hslider("base freq fast", 0.2, 0.1, 0.3, 0.001)
                       );

sensitivity2 =
  it.interpolate_linear(leveler2_speed
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
  kfilter = fi.itu_r_bs_1770_4_kfilter;
};


leveler1_sc(target,fl,fr,l,r) =
  calc(lk2_fixed(0.01,fl,fr))
  <: (_*l,_*r)
                with {
  calc(lufs) = FB(lufs)~_: ba.db2linear;
  FB(lufs,prev_gain) =
    (target - lufs)
    +(prev_gain )
    : ds.dynamicSmoothing(
      sensitivity1 * expander(abs(fl)+abs(fr))
    ,  basefreq1 * expander(abs(fl)+abs(fr))
    )
    :  limit(limit_neg,limit_pos)
    : leveler1_meter_gain;

  limit(lo,hi) = min(hi) : max(lo);


  expander(x) = (co.peak_expansion_gain_mono_db(maxHold,strength,leveler1_brake_thresh,range,gate_att,hold,gate_rel,knee,prePost,x)
                 : ba.db2linear
                 :max(0)
                 :min(1))
                <: attach(_, (1-_) : meter_leveler_brake) with{
                    maxHold = hold*maxSR;
                    strength = 1;
                    range = 0-(ma.MAX);
                    gate_att = 0;
                    hold = 0.0001;
                    gate_rel = 0.1;
                    knee = ma.EPSILON;
                    prePost = 1;
                };
};

leveler2_sc(target,fl,fr,l,r) =
  calc(lk2_fixed(0.01,fl,fr))
  <: (_*l,_*r)
                with {
  calc(lufs) = FB(lufs)~_: ba.db2linear;
  FB(lufs,prev_gain) =
    (target - lufs)
    +(prev_gain )
    : ds.dynamicSmoothing(
      sensitivity2 * expander(abs(fl)+abs(fr))
    ,  basefreq2 * expander(abs(fl)+abs(fr))
    )
    :  limit(limit_neg,limit_pos)
    : leveler2_meter_gain;

  limit(lo,hi) = min(hi) : max(lo);


  expander(x) = (co.peak_expansion_gain_mono_db(maxHold,strength,leveler2_brake_thresh,range,gate_att,hold,gate_rel,knee,prePost,x)
                 : ba.db2linear
                 :max(0)
                 :min(1))
                <: attach(_, (1-_) : meter_leveler_brake) with{
                    maxHold = hold*maxSR;
                    strength = 1;
                    range = 0-(ma.MAX);
                    gate_att = 0;
                    hold = 0.0001;
                    gate_rel = 0.1;
                    knee = ma.EPSILON;
                    prePost = 1;
                };
};



//----------------------- Multiband Compressor & Expander Section -----------------------

// bypass
mbcomp_bp = bp2(checkbox("v:Podcast Plugins/h:[1]Global/[4][symbol:bypass_style]bypass style"),
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
            strength_array2 = 0.5,0.6,0.7,0.8,0.9;

            strength_array = par(i,Nba, (
                ((strength_array1:ba.selector(i,Nba)), (strength_array2:ba.selector(i,Nba))) :
                si.interpolate(mbcomp_morph)));

            thresh_array1 = 0,6,4,2,0 : par(i,Nba,(_+target)); 
            thresh_array2 = -9,-8,-10,-14,-16 : par(i,Nba,(_+target));
                
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
            knee_array2 = 12,12,12,12,12;
                
            knee_array = par(i,Nba, (
                ((knee_array1:ba.selector(i,Nba)), (knee_array2:ba.selector(i,Nba))) :
                si.interpolate(mbcomp_morph)));

            gain_array1 = 0,0,0,0,0;
            gain_array2 = 2,2,2,2,2;
                
            gain_array = par(i,Nba, (
                ((gain_array1:ba.selector(i,Nba)), (gain_array2:ba.selector(i,Nba))) :
                si.interpolate(mbcomp_morph)));

            link_array = (1,1,1,1,1);
            crossoverFreqs = LogArray(B-1,fl,fh);

            // parameter arrays for the multiband expander
            expander_thresh_array1 = -40,-40,-40,-40,-40 : par(i,Nba,(_+target));
            expander_thresh_array2 = -40,-40,-40,-40,-40 : par(i,Nba,(_+target));

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


// LIMITER
limiter_rms_bp = bp2(checkbox("v:Podcast Plugins/h:[1]Global/[7]limiter bypass[symbol:limiter_bypass]"),limiter_rms);
limiter_rms = co.RMS_FBFFcompressor_N_chan(strength,thresh,att,rel,knee,0,1,fffb,limiter_meter,2) : post_gain with{
  strength = vslider("v:Podcast Plugins/h:[7]limiter RMS/[1][unit:%][integer][symbol:limiter_strength]limiter strength", 80, 0, 100, 1) *0.01;
  thresh = target + vslider("v:Podcast Plugins/h:[7]limiter RMS/[2][symbol:limiter_threshold][unit:dB]limiter tar-thresh",6,-12,12,1);
  att = vslider("v:Podcast Plugins/h:[7]limiter RMS/[3][unit:ms][symbol:limiter_attack]limiter attack",1,0,100,1)*0.001;
  rel = vslider("v:Podcast Plugins/h:[7]limiter RMS/[4][unit:ms][symbol:limiter_release]limiter release",40,1,400,1)*0.001;
  knee = vslider("v:Podcast Plugins/h:[7]limiter RMS/[5][symbol:limiter_knee][unit:dB]limiter knee",8,0,12,1);

  fffb = vslider ("v:Podcast Plugins/h:[7]limiter RMS/[6][unit:%][integer][symbol:limiter_fffb]limiter ff-fb",50,0,100,1)*0.01;
  // post_gain
  post_gain = par(i,Nch,_ * limiter_postgain) with {

  };

  limiter_postgain = vslider("v:Podcast Plugins/h:[7]limiter RMS/[8][unit:dB][symbol:limiter_makeup]limiter makeup", init_limiter_postgain,-10,+10,0.5) : ba.db2linear:si.smoo;
  limiter_meter = _ <: attach( vbargraph("v:Podcast Plugins/h:[7]limiter RMS/[9][unit:dB][symbol:limiter_gain_reduction]limiter gain reduction",-12,0));
};




// LIMITER with LOOKAHEAD
limiter_thresh = -1 : ba.db2linear; 


limiter_lookahead = limiter_lad_stereo(Latency_limiter,limiter_thresh, 0.01/twopi, .1, 1/twopi)
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


// +++++++++++++++++++++++++ LUFS METER +++++++++++++++++++++++++

lk2_var(Tg)= par(i,2,kfilter : zi) :> 4.342944819 * log(max(1e-12)) : -(0.691) with {
  // maximum assumed sample rate is 192k
  maxSR = 192000;
  sump(n) = ba.slidingSump(n, Tg*maxSR)/max(n,ma.EPSILON);
  envelope(period, x) = x * x :  sump(rint(period * ma.SR));
  zi = envelope(Tg); // mean square: average power = energy/Tg = integral of squared signal / Tg

  kfilter = fi.itu_r_bs_1770_4_kfilter;
};


lk2 = lk2_var(3);
lk2_short = lk2_var(0.4);

lufs_meter_in(l,r) = l,r <: l, attach(r, (lk2 : vbargraph("v:master_me/h:easy/[2][unit:dB][symbol:lufs_in]in lufs-s",-70,0))) : _,_;
lufs_meter_out(l,r) = l,r <: l, attach(r, (lk2 : vbargraph("v:master_me/h:easy/[7][unit:dB][symbol:lufs_out]out lufs-s",-70,0))) : _,_;

