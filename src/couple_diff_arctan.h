#ifndef COUPLE_DIFF_ARCTAN_H
#define COUPLE_DIFF_ARCTAN_H

#include"couple.h"
using std::vector;

class CoupleDiffArctan : public Couple {
 CoupleDiffArctan();
 CoupleDiffArctan(CoupleDiffArctan&);
 protected:
  double nu_min, nu_max;
  double t_half_down, t_half_up;
  double delta; ///< Time interval [s] in which the function will go from 0.25 to 0.75 of nu_max.
  double time_tot;
  double diff_atan, diff_atan_min,  diff_atan_max;
  double time;
  double time_int;
  vector<double> deltanu;

 public:
   void init( Configf& configf );
   void step(void);
   void find(void);
  CoupleDiffArctan( int nodes, double deltat, int index,
          const Propag& prepropag, const Population& postpop, double tempf );
  virtual ~CoupleDiffArctan(void);
};

#endif
