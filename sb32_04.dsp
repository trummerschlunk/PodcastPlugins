import("stdfaust.lib");

BANDS=16;
maxSR = 192000;


process(l) = l <: (measure<:par(i,BANDS,_)),(_ : (myfilterbank:par(i,BANDS,(_<: ((measure),_)) ) : ro.interleave(2,BANDS))) : faders(BANDS),par(i,BANDS*3,_) : ro.interleave(BANDS,4) : par(i,BANDS,(_,(ro.cross(2):(_-_):meter(i)),_)) : par(i,BANDS,((((_-_)*expander(l)):gainmeter(i)),_)) : par(i,BANDS,gainchange(l)) :> _ <: _,_; 

// : par(i,BANDS,gainchange) :> _ <: _,_;

sliders(x) = par(i, x, (_ * (hslider("%2i",0, -12, 12,1 ) : ba.db2linear)));

myfilterbank = fi.mth_octave_filterbank(O,M,ftop,BANDS) : ro.cross(BANDS) : par(i,BANDS,_) with {
    M=3;
    O=1;
    ftop=10000;
};





delay = hslider("[1]delay", 100,0,1000,1) / 1000 * ma.SR;

gainchange(in) = (_:ba.db2linear)*(_:de.delay(48000,delay));

lk_fixed(Tg)= (kfilter : zi) :> 4.342944819 * log(max(1e-12)) : -(0.691) with {
  // maximum assumed sample rate is 192k
  sump(n) = ba.slidingSump(n, Tg*maxSR)/max(n,ma.EPSILON);
  envelope(period, x) = x * x :  sump(rint(period * ma.SR));
  zi = envelope(Tg); // mean square: average power = energy/Tg = integral of squared signal / Tg

  kfilter = _;
};

measure = lk_fixed(0.8);

meter(i) = _ <: attach(_, hgroup("[2]normalized spectrum",vbargraph("%2i[unit:dB]",-40,0)));
gainmeter(i) = _ <: attach(_, hgroup("[3]gain",vbargraph("%2i[unit:dB]",-20,20)));

faders(n) = par(i, n, hgroup("target",vslider("%2i",-20,-50,0,1)));


// EXPANDER
meter_expander = hbargraph("v:/[6][integer]expander",0,1);
expander(x) = (peak_expansion_gain_mono_db(maxHold,strength,thresh,range,att,hold,gate_rel,knee,prePost,x)
                 : ba.db2linear
                 :max(0)
                 :min(1))
                <: attach(_: meter_expander) with{
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