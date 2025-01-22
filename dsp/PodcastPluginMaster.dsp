// -*-Faust-*-

declare name "master_me";
declare version "1.0";
declare author "Klaus Scheuermann";
declare license "GPLv3";

// double precision -double needed!

ds = library("dynamicsmoothing.lib");
import("stdfaust.lib");

// init values

Nch = 2; //number of channels
maxSR = 192000; // maximum sample rate





init_leveler_target = -18;
init_leveler_maxboost = 20;
init_leveler_maxcut = 20;
init_leveler_brake_threshold = -22;
init_leveler_speed = 80;

init_kneecomp_thresh = -6;
init_kneecomp_postgain = 0;

init_limiter_lad_ceil = -2;
init_limiter_postgain = 0;

init_brickwall_ceiling = -1;
init_brickwall_release = 75;

bp = 0;

Latency_limiter = 0.01 <: attach(_,hbargraph("v:Podcast Plugins/h:[1]Global/[symbol:latency_global]latency",0,1));


target = vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[2]Leveler/[3]target[unit:dB][symbol:leveler_target]", init_leveler_target,-50,-2,1);
leveler_speed = init_leveler_speed *0.01; //vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[2]Leveler/[4][unit:%][integer]speed", init_leveler_speed, 0, 100, 1) * 0.01;
leveler_brake_thresh = target + init_leveler_brake_threshold +32; //target + vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[2]Leveler/[5][unit:dB]brake threshold", init_leveler_brake_threshold,-90,0,1)+32;
meter_leveler_brake = _; //_*100 : vbargraph("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[2]Leveler/[6][unit:%][integer]brake",0,100);
limit_pos = init_leveler_maxboost; //vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[2]Leveler/[7][unit:dB]max boost", init_leveler_maxboost, 0, 60, 1);
limit_neg = init_leveler_maxcut : ma.neg; //vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[2]Leveler/[8][unit:dB]max cut", init_leveler_maxcut, 0, 60, 1) : ma.neg;
leveler_meter_gain = vbargraph("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[2]Leveler/[1][unit:dB][symbol:leveler_gain]gain",-50,50);
preGainSlider = vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[1]PreStage/[1][symbol:input_gain][unit:dB]PreGain", 0, -20, 20, 0.1);



// main
process = 
        pregain(Nch)
        : peakmeter_in
        : lufs_in_meter
        : bp2(checkbox("v:Podcast Plugins/h:[1]Global/[symbol:global_bypass]global bypass"),(
            dc_blocker(Nch)
            : tilt_eq_bp
            : leveler
            //: sc_compressor
            //: mscomp_bp
            : limiter_rms_bp
            : leveler
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
    envelop = abs : max(ba.db2linear(-70)) : ba.linear2db : min(10)  : max ~ -(80.0/ma.SR);
    in_meter_l(x) = attach(x, envelop(x) : vbargraph("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[1]PreStage/[symbol:input_peak_channel_0]In 0", -70, 0));
    in_meter_r(x) = attach(x, envelop(x) : vbargraph("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[1]PreStage/[symbol:input_peak_channel_1]In 1", -70, 0));
};
peakmeter_out = out_meter_l,out_meter_r with {
    envelop = abs : max(ba.db2linear(-70)) : ba.linear2db : min(10)  : max ~ -(80.0/ma.SR);
    out_meter_l(x) = attach(x, envelop(x) : vbargraph("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[6]PostStage/[symbol:output_peak_channel_0]Out 0", -70, 0));
    out_meter_r(x) = attach(x, envelop(x) : vbargraph("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[6]PostStage/[symbol:output_peak_channel_1]Out 1", -70, 0));
};

lufs_in_meter(l,r) = l,r <: l, attach(r, (lk2_short : vbargraph("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[1]PreStage/[symbol:lufs_in_meter][unit:dB]lufs IN",-120,0))) : _,_;
lufs_out_meter(l,r) = l,r <: l, attach(r, (lk2_short : vbargraph("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[6]PostStage/[symbol:lufs_out_meter][unit:dB]lufs OUT",-120,0))) : _,_;





// EQ with bypass
tilt_eq_bp = bp2(checkbox("v:Podcast Plugins/h:[1]Global/[1][symbol:eq_bypass]eq bypass"),tilt_eq);


// TILT EQ STEREO
tilt_eq = par(i,2,_) : par(i,2, fi.lowshelf(N, -gain, freq) : fi.highshelf(N, gain, freq)) with{
    N = 1;
    gain = vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[3]Tilt EQ/[1]eq tilt gain [unit:dB] [symbol:eq_tilt_gain]",0,-6,6,0.5):si.smoo;
    freq = 630; 
};









// LEVELER (NEW with dynamic smoothing)

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

  kfilter = fi.itu_r_bs_1770_4_kfilter;
};

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

// SIDE CHAIN COMPRESSOR

sc_compressor(fl,fr,l,r) =
  (fl,fr,l,r)
  : feedforward_feedback
  : (ms_enc,ms_enc):
  (((co.RMS_compression_gain_N_chan_db(strength,thresh,att,rel,knee,0,link,N)),si.bus(N) )
   : ro.interleave(N,2) : par(i,N,(meter(i) : post_gain : ba.db2linear*(1-bypass)+bypass)*_))
  : ms_dec
  : ((l,_,r,_):par(i, 2, it.interpolate_linear(dw)))

with {
  N = 2;
  B = si.bus(2);
  bypass = checkbox("v:master_me/t:expert/h:[5]kneecomp/[0][symbol:kneecomp_bypass]kneecomp bypass"):si.smoo;
  strength = vslider("v:master_me/t:expert/h:[5]kneecomp/[1][unit:%][integer][symbol:kneecomp_strength]kneecomp strength", 20, 0, 100, 1) * 0.01;
  thresh = target + vslider("v:master_me/t:expert/h:[5]kneecomp/[2][symbol:kneecomp_threshold][unit:dB]kneecomp tar-thresh",init_kneecomp_thresh,-12,6,1);
  att = vslider("v:master_me/t:expert/h:[5]kneecomp/[3][symbol:kneecomp_attack][unit:ms]kneecomp attack",20,1,100,1)*0.001;
  rel = vslider("v:master_me/t:expert/h:[5]kneecomp/[4][symbol:kneecomp_release][unit:ms]kneecomp release",200,1,1000,1)*0.001;
  knee = vslider("v:master_me/t:expert/h:[5]kneecomp/[5][unit:dB][symbol:kneecomp_knee]kneecomp knee",6,0,30,1);
  link = vslider("v:master_me/t:expert/h:[5]kneecomp/[6][unit:%][integer][symbol:kneecomp_link]kneecomp link", 60, 0, 100, 1) *0.01;
  fffb = vslider ("v:master_me/t:expert/h:[5]kneecomp/[7][unit:%][integer][symbol:kneecomp_fffb]kneecomp ff-fb",50,0,100,1) *0.01;
  dw = vslider ("v:master_me/t:expert/h:[5]kneecomp/[9][unit:%][integer][symbol:kneecomp_drywet]kneecomp dry/wet",100,0,100,1) * 0.01:si.smoo;

  meter(i) =
    _<: attach(_, (max(-6):min(0):vbargraph(
                     "v:master_me/t:expert/h:[5]kneecomp/[symbol:kneecomp_meter_%i][unit:dB]kneecomp meter %i", -6, 0)
                  ));

  feedforward_feedback = B,(B<:B,B) : par(i,2,_*fffb), par(i,2,_* (1-fffb)),B : (_,_,_,_:>_,_),_,_;


  // dev version of faust has this in the libs, TODO, use co.RMS_compression_gain_N_chan_db
  
  //post_gain
  post_gain =
    _+
    (vslider("v:master_me/t:expert/h:[5]kneecomp/[8][unit:dB][symbol:kneecomp_makeup]kneecomp makeup", init_kneecomp_postgain,-10,+10,0.5) :si.smoo);



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
  limiter_meter = _ <: attach(ba.linear2db : vbargraph("v:Podcast Plugins/h:[7]limiter RMS/[9][unit:dB][symbol:limiter_gain_reduction]limiter gain reduction",-12,0));
};




// LIMITER with LOOKAHEAD
limiter_thresh = -1 : ba.db2linear; 


limiter_lookahead = limiter_lad_stereo(Latency_limiter,limiter_thresh,0.008,0.01,0.1);

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

