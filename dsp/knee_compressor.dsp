// -*-Faust-*-

declare name "PodcastPlugin Master";
declare version "0.1";
declare author "Klaus Scheuermann";
declare license "GPLv3";


import("stdfaust.lib");
import("ebur128.lib");
import("dynamicsmoothing.lib");

Nch = 2; // Number of channels

target = -23; // LUFS target level
init_kneecomp_thresh = -6;
init_kneecomp_postgain = 0;

// main
process =
  bp2(checkbox("[symbol:global_bypass]global bypass"),(
       in_gain
       : peakmeter_in
       : lufs_meter_in
       : dc_blocker_bp


       
         : ( sc_compressor
             : mscomp_bp
             : limiter_rms_bp
             : brickwall_no_latency_bp
           )~(si.bus(2))
  ))

  : lufs_meter_out
  : peakmeter_out
;

in_gain = _,_;
peakmeter_in = _,_;
lufs_meter_in = _,_;
dc_blocker_bp = _,_;

lufs_meter_out = _,_;
peakmeter_out = _,_;

mscomp_bp = _,_;
limiter_rms_bp = _,_;
brickwall_no_latency_bp = _,_;


// stereo bypass with si.smoo fading
bp2(sw,pr) =  _,_ <: _,_,pr : (_*sm,_*sm),(_*(1-sm),_*(1-sm)) :> _,_ with {
    sm = sw : si.smoo;
};

// stereo to m/s encoder
ms_enc = _*0.5,_*0.5 <: +, -;

// m/s to stereo decoder
ms_dec = _,_ <: +, -;



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


