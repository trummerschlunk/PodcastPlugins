// -*-Faust-*-

declare name "master_me";
declare version "1.0";
declare author "Klaus Scheuermann";
declare license "GPLv3";

// double precision -double needed!

ebu = library("ebur128.lib");
ex = library("expanders.lib");
import("stdfaust.lib");

// init values

Nch = 2; //number of channels




init_leveler_target = -18;
init_leveler_maxboost = 20;
init_leveler_maxcut = 20;
init_leveler_brake_threshold = -14;
init_leveler_speed = 20;

init_kneecomp_thresh = -6;
init_kneecomp_postgain = 0;

init_limiter_lad_ceil = -2;
init_limiter_postgain = 0;

init_brickwall_ceiling = -1;
init_brickwall_release = 75;


target = vslider("v:master_me/h:easy/[3]Target[unit:dB][symbol:target][integer]", init_leveler_target,-50,-2,1);


// main
process =
  bp2(checkbox("[symbol:global_bypass]global bypass"),(
       in_gain
       : peakmeter_in
       : lufs_meter_in
       : dc_blocker_bp

       : eq_bp

       : (
         leveler_sc(target)
         : ( sc_compressor
             //: mscomp_bp
             : limiter_rms_bp
             : brickwall_no_latency_bp
           )~(si.bus(2))
       )~(si.bus(2))
       ))

  : lufs_meter_out
  : peakmeter_out
;

// stereo bypass with si.smoo fading
bp2(sw,pr) =  _,_ <: _,_,pr : (_*sm,_*sm),(_*(1-sm),_*(1-sm)) :> _,_ with {
    sm = sw : si.smoo;
};

// DC FILTER
dc_blocker_bp = bp2(sw,dc_blocker(2)) with {
  sw = 1 - checkbox("v:master_me/t:expert/h:[1]pre-processing/[5][symbol:dc_blocker]dc blocker");
};

dc_blocker(N) = par(i,N,fi.dcblockerat(dc_filter_freq))
with {
  dc_filter_freq = 10.0;
};



// input gain
in_gain = par(i,2,(_*g)) with{
               g = vslider("v:master_me/t:expert/h:[1]pre-processing/[1][symbol:in_gain][unit:dB]input gain",0,-100,24,1) : ba.db2linear :si.smoo;
             };

// stereo to m/s encoder
ms_enc = _*0.5,_*0.5 <: +, -;

// m/s to stereo decoder
ms_dec = _,_ <: +, -;

// peak meters
peakmeter_in = in_meter_l,in_meter_r with {
envelop = abs : max(ba.db2linear(-70)) : ba.linear2db : min(10)  : max ~ -(80.0/ma.SR);
in_meter_l(x) = attach(x, envelop(x) : vbargraph("v:master_me/h:easy/[0][symbol:peakmeter_in_l]in L[unit:dB]", -70, 0));
in_meter_r(x) = attach(x, envelop(x) : vbargraph("v:master_me/h:easy/[1][symbol:peakmeter_in_r]in R[unit:dB]", -70, 0));
           };
peakmeter_out = out_meter_l,out_meter_r with {
  envelop = abs : max(ba.db2linear(-70)) : ba.linear2db : min(10)  : max ~ -(80.0/ma.SR);
  out_meter_l(x) = attach(x, envelop(x) : vbargraph("v:master_me/h:easy/[8][symbol:peakmeter_out_l]out L[unit:dB]", -70, 0));
  out_meter_r(x) = attach(x, envelop(x) : vbargraph("v:master_me/h:easy/[9][symbol:peakmeter_out_r]out R[unit:dB]", -70, 0));
};






// EQ with bypass
eq_bp = bp2(checkbox("v:master_me/t:expert/h:[3]eq/[1][symbol:eq_bypass]eq bypass"),eq);
eq = hp_eq : tilt_eq : side_eq_b with{
  // HIGHPASS
  hp_eq = par(i,2,fi.highpass(1,freq)) with {
  freq = vslider("v:master_me/t:expert/h:[3]eq/h:[1]highpass/[1]eq highpass freq [unit:Hz] [scale:log] [symbol:eq_highpass_freq]", 5, 5, 1000,1);
};

  // TILT EQ STEREO
  tilt_eq = par(i,2,_) : par(i,2, fi.lowshelf(N, -gain, freq) : fi.highshelf(N, gain, freq)) with{
    N = 1;
    gain = vslider("v:master_me/t:expert/h:[3]eq/h:[2]tilt eq/[1]eq tilt gain [unit:dB] [symbol:eq_tilt_gain]",0,-6,6,0.5):si.smoo;
    freq = 630; //vslider("v:master_me/t:expert/h:[3]eq/h:[2]tilt eq/[2]eq tilt freq [unit:Hz] [scale:log] [symbol:eq_tilt_freq]", 630, 200, 2000,1);
  };



  // SIDE EQ
  side_eq_b =  ms_enc : _,band_shelf(freq_low,freq_high,eq_side_gain) : ms_dec with{

    //band_shelf(freq1 ,freq2 ,gain) = fi.low_shelf(0-gain,freq1): fi.low_shelf(gain,freq2);
    band_shelf(freq1 ,freq2 ,gain) = fi.svf.ls(freq1,0.7,0-gain): fi.svf.ls(freq2,0.7,gain);

    freq_low = eq_side_freq - eq_side_freq*eq_side_width : max(50);
    freq_high = eq_side_freq + eq_side_freq*eq_side_width : min(8000);

    eq_side_gain = vslider("v:master_me/t:expert/h:[3]eq/h:[3]side eq/[1]eq side gain [unit:dB] [symbol:eq_side_gain]",0,0,12,0.5):si.smoo;
    eq_side_freq = vslider("v:master_me/t:expert/h:[3]eq/h:[3]side eq/[2]eq side freq [unit:Hz] [scale:log] [symbol:eq_side_freq]", 600,200,5000,1);
    eq_side_width = vslider("v:master_me/t:expert/h:[3]eq/h:[3]side eq/[3]eq side bandwidth [symbol:eq_side_bandwidth]", 1,0.5,4,0.5);

  };
};



// LEVELER


leveler_sc(target,fl,fr,l,r) =
  (calc(lk2_short(fl,fr))*(1-bp)+bp)
  <: (_*l,_*r)
with {

  lp1p(cf) = si.smooth(ba.tau2pole(1/(2*ma.PI*cf)));

  calc(lufs) = FB(lufs)~_: ba.db2linear;
  FB(lufs,prev_gain) =
    (target - lufs)
    +(prev_gain )
    :  limit(limit_neg,limit_pos)
    : lp1p(leveler_speed_brake(abs(l)+abs(r)))
    : leveler_meter_gain;

  bp = checkbox("v:master_me/t:expert/h:[3]leveler/[1]leveler bypass[symbol:leveler_bypass]") : si.smoo;
  leveler_meter_gain = vbargraph("v:master_me/h:easy/[4][unit:dB][symbol:leveler_gain]leveler gain",-50,50);
  meter_leveler_brake = _*100 : vbargraph("v:master_me/t:expert/h:[3]leveler/[6][unit:%][integer]leveler brake[symbol:leveler_brake]",0,100);

  leveler_speed = vslider("v:master_me/t:expert/h:[3]leveler/[4][unit:%][integer][symbol:leveler_speed]leveler speed", init_leveler_speed, 0, 100, 1) * 0.0015; //.005, 0.15, .005);
  leveler_brake_thresh = /*target + */vslider("v:master_me/t:expert/h:[3]leveler/[5][unit:dB][symbol:leveler_brake_threshold]leveler brake threshold", init_leveler_brake_threshold,-90,0,1);

  limit_pos = vslider("v:master_me/t:expert/h:[3]leveler/[7][symbol:leveler_max_plus][unit:dB]leveler max +", init_leveler_maxboost, 0, 60, 1);
  limit_neg = vslider("v:master_me/t:expert/h:[3]leveler/[8][symbol:leveler_max_minus][unit:dB]leveler max -", init_leveler_maxcut, 0, 60, 1) : ma.neg;
  limit(lo,hi) = min(hi) : max(lo);

  leveler_speed_brake(sc) = (expander(sc) <: attach(_, (1-_) : meter_leveler_brake)) : _ * leveler_speed;

  expander(x) = (ex.peak_expansion_gain_mono_db(maxHold,strength,leveler_brake_thresh,range,gate_att,hold,gate_rel,knee,prePost,x)
       : ba.db2linear
       :max(0)
       :min(1));

   maxHold = hold*192000;
   strength = 2;
   range = -120;
   gate_att = 0.05;
   hold = 0.1;
   gate_rel = 0.3;
   knee = 12;
   prePost = 1;

};

// SIDE CHAIN COMPRESSOR

sc_compressor(fl,fr,l,r) =
  (fl,fr,l,r)
  : feedforward_feedback
  : (ms_enc,ms_enc):
  (((RMS_compression_gain_N_chan_db(strength,thresh,att,rel,knee,0,link,N)),si.bus(N) )
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
  RMS_compression_gain_N_chan_db(strength,thresh,att,rel,knee,prePost,link,1) =
    RMS_compression_gain_mono_db(strength,thresh,att,rel,knee,prePost);

  RMS_compression_gain_N_chan_db(strength,thresh,att,rel,knee,prePost,link,N) =
    par(i,N,RMS_compression_gain_mono_db(strength,thresh,att,rel,knee,prePost))
    <: (si.bus(N),(ba.parallelMin(N) <: si.bus(N))) : ro.interleave(N,2) : par(i,N,(it.interpolate_linear(link)));

  RMS_compression_gain_mono_db(strength,thresh,att,rel,knee,prePost) =
    RMS(rel) : ba.bypass1(prePost,si.onePoleSwitching(att,0)) : ba.linear2db : gain_computer(strength,thresh,knee) : ba.bypass1((prePost!=1),si.onePoleSwitching(0,att))
  with {
    gain_computer(strength,thresh,knee,level) =
      select3((level>(thresh-(knee/2)))+(level>(thresh+(knee/2))),
              0,
              ((level-thresh+(knee/2)) : pow(2)/(2*max(ma.EPSILON,knee))),
              (level-thresh))
      : max(0)*-strength;
    RMS(time) = ba.slidingRMS(s) with {
      s = ba.sec2samp(time):int:max(1);
    };
  };
  //post_gain
  post_gain =
    _+
    (vslider("v:master_me/t:expert/h:[5]kneecomp/[8][unit:dB][symbol:kneecomp_makeup]kneecomp makeup", init_kneecomp_postgain,-10,+10,0.5) :si.smoo);



};



// LIMITER
limiter_rms_bp = bp2(checkbox("v:master_me/t:expert/h:[7]limiter/[0]limiter bypass[symbol:limiter_bypass]"),limiter_rms);
limiter_rms = co.RMS_FBFFcompressor_N_chan(strength,thresh,att,rel,knee,0,1,fffb,limiter_meter,2) : post_gain with{
  strength = vslider("v:master_me/t:expert/h:[7]limiter/[1][unit:%][integer][symbol:limiter_strength]limiter strength", 80, 0, 100, 1) *0.01;
  thresh = target + vslider("v:master_me/t:expert/h:[7]limiter/[2][symbol:limiter_threshold][unit:dB]limiter tar-thresh",6,-12,12,1);
  att = vslider("v:master_me/t:expert/h:[7]limiter/[3][unit:ms][symbol:limiter_attack]limiter attack",1,0,100,1)*0.001;
  rel = vslider("v:master_me/t:expert/h:[7]limiter/[4][unit:ms][symbol:limiter_release]limiter release",40,1,400,1)*0.001;
  knee = vslider("v:master_me/t:expert/h:[7]limiter/[5][symbol:limiter_knee][unit:dB]limiter knee",8,0,12,1);

  fffb = vslider ("v:master_me/t:expert/h:[7]limiter/[6][unit:%][integer][symbol:limiter_fffb]limiter ff-fb",50,0,100,1)*0.01;
  // post_gain
  post_gain = par(i,Nch,_ * limiter_postgain) with {

  };

  limiter_postgain = vslider("v:master_me/t:expert/h:[7]limiter/[8][unit:dB][symbol:limiter_makeup]limiter makeup", init_limiter_postgain,-10,+10,0.5) : ba.db2linear:si.smoo;
  limiter_meter = _ <: attach(ba.linear2db : vbargraph("v:master_me/t:expert/h:[7]limiter/[9][unit:dB][symbol:limiter_gain_reduction]limiter gain reduction",-12,0));
};

// LIMITER NO LATENCY
brickwall_no_latency_bp = bp2(checkbox("v:master_me/t:expert/h:[8]brickwall/[1][symbol:brickwall_bypass]brickwall bypass"),brickwall_no_latency);
brickwall_no_latency =
  co.FFcompressor_N_chan(1,threshLim,att,rel,knee,0,link,meter_brickwall,2)
with {

  threshLim = vslider("v:master_me/t:expert/h:[8]brickwall/[3]brickwall ceiling[unit:dB][symbol:brickwall_ceiling]",init_brickwall_ceiling,-6,-0,0.1);
  att = 0;
  rel = vslider("v:master_me/t:expert/h:[8]brickwall/[4]brickwall release[unit:ms][symbol:brickwall_release]",init_brickwall_release,5,100,1) *0.001;
  knee = 0;
  link = 1;
  meter_brickwall =
    _<: _,( ba.linear2db:vbargraph("v:master_me/t:expert/h:[8]brickwall/lim[unit:dB][symbol:brickwall_limit]",-20,0)) : attach;

  // The following code is in the libraries in the dev version of faust, but not yet in the latest release:
  // TODO: use co.FFcompressor_N_chan
  FFcompressor_N_chan(strength,thresh,att,rel,knee,prePost,link,meter,N) =
    si.bus(N) <: (peak_compression_gain_N_chan_db(strength,thresh,att,rel,knee,prePost,link,N),si.bus(N)) : ro.interleave(N,2) : par(i,N,(meter: ba.db2linear)*_);

};

// +++++++++++++++++++++++++ LUFS METER +++++++++++++++++++++++++

lk2_var(Tg)= par(i,2,kfilter : zi) :> 4.342944819 * log(max(1e-12)) : -(0.691) with {
  // maximum assumed sample rate is 192k
  maxSR = 192000;
  sump(n) = ba.slidingSump(n, Tg*maxSR)/max(n,ma.EPSILON);
  envelope(period, x) = x * x :  sump(rint(period * ma.SR));
  zi = envelope(Tg); // mean square: average power = energy/Tg = integral of squared signal / Tg

  kfilter = ebu.prefilter;
};


lk2 = lk2_var(3);
lk2_short = lk2_var(0.4);

lufs_meter_in(l,r) = l,r <: l, attach(r, (lk2 : vbargraph("v:master_me/h:easy/[2][unit:dB][symbol:lufs_in]in lufs-s",-70,0))) : _,_;
lufs_meter_out(l,r) = l,r <: l, attach(r, (lk2 : vbargraph("v:master_me/h:easy/[7][unit:dB][symbol:lufs_out]out lufs-s",-70,0))) : _,_;

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

/* ******* >8 *******/