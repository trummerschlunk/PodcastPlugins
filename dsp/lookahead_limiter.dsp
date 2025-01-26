import("stdfaust.lib");

process = par(i,2,noise*g);

g = hslider("Gain", 0, -60, 12, 0.1) : ba.db2linear;


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
