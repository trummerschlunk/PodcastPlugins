import("stdfaust.lib");

process = mbcomp_bp;


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
//mbcomp_morph = vslider("v:Podcast Plugins/h:[2]Leveler, MBcomp, Limiter/h:[3]Multiband Conpressor/h:Parameters/[2]mb morph",0.5,0,1,0.01);

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

