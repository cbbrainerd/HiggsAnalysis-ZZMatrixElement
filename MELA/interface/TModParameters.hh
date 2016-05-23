#ifndef _TMODPARAMETERS_HH_
#define _TMODPARAMETERS_HH_

extern "C" {
  // From PDG ids to JHU ids
  int __modparameters_MOD_convertlhereverse(int* part);
#ifndef convertLHEreverse
#define convertLHEreverse __modparameters_MOD_convertlhereverse
#endif
  // From JHU ids to PDG ids
  int __modparameters_MOD_convertlhe(int* part);
#ifndef convertLHE
#define convertLHE __modparameters_MOD_convertlhe
#endif

  double __modparameters_MOD_ckm(int* id1in, int* id2in); // |VCKM|*ScaleFactor
  double __modparameters_MOD_scalefactor(int* id1in, int* id2in); // ScaleFactor
}

#endif

