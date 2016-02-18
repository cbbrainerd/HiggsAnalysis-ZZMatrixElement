#include <ZZMatrixElement/MELA/interface/RooSpinZero_7DComplex_withAccep_ggH.h>


RooSpinZero_7DComplex_withAccep_ggH::RooSpinZero_7DComplex_withAccep_ggH(
  const char *name, const char *title,
  modelMeasurables _measurables,
  modelParameters _parameters,
  accepParameters _accepParams
  ) : RooSpinZero(
  name, title,
  _measurables,
  _parameters
  ),
  aPhi("aPhi", "aPhi", this, (RooAbsReal&)*(_accepParams.aPhi)),
  bPhi("bPhi", "bPhi", this, (RooAbsReal&)*(_accepParams.bPhi)),
  cPhi("cPhi", "cPhi", this, (RooAbsReal&)*(_accepParams.cPhi)),
  dPhi("dPhi", "dPhi", this, (RooAbsReal&)*(_accepParams.dPhi)),
  ePhi("ePhi", "ePhi", this, (RooAbsReal&)*(_accepParams.ePhi)),
  aPhi1("aPhi1", "aPhi1", this, (RooAbsReal&)*(_accepParams.aPhi1)),
  bPhi1("bPhi1", "bPhi1", this, (RooAbsReal&)*(_accepParams.bPhi1)),
  cPhi1("cPhi1", "cPhi1", this, (RooAbsReal&)*(_accepParams.cPhi1)),
  dPhi1("dPhi1", "dPhi1", this, (RooAbsReal&)*(_accepParams.dPhi1)),
  ePhi1("ePhi1", "ePhi1", this, (RooAbsReal&)*(_accepParams.ePhi1)),
  aH1("aH1", "aH1", this, (RooAbsReal&)*(_accepParams.aH1)),
  bH1("bH1", "bH1", this, (RooAbsReal&)*(_accepParams.bH1)),
  cH1("cH1", "cH1", this, (RooAbsReal&)*(_accepParams.cH1)),
  dH1("dH1", "dH1", this, (RooAbsReal&)*(_accepParams.dH1)),
  eH1("eH1", "eH1", this, (RooAbsReal&)*(_accepParams.eH1)),
  aH2("aH2", "aH2", this, (RooAbsReal&)*(_accepParams.aH2)),
  bH2("bH2", "bH2", this, (RooAbsReal&)*(_accepParams.bH2)),
  cH2("cH2", "cH2", this, (RooAbsReal&)*(_accepParams.cH2)),
  dH2("dH2", "dH2", this, (RooAbsReal&)*(_accepParams.dH2)),
  eH2("eH2", "eH2", this, (RooAbsReal&)*(_accepParams.eH2)),
  aHs("aHs", "aHs", this, (RooAbsReal&)*(_accepParams.aHs)),
  bHs("bHs", "bHs", this, (RooAbsReal&)*(_accepParams.bHs)),
  cHs("cHs", "cHs", this, (RooAbsReal&)*(_accepParams.cHs)),
  dHs("dHs", "dHs", this, (RooAbsReal&)*(_accepParams.dHs)),
  eHs("eHs", "eHs", this, (RooAbsReal&)*(_accepParams.eHs)),
  aM1("aM1", "aM1", this, (RooAbsReal&)*(_accepParams.aM1)),
  bM1("bM1", "bM1", this, (RooAbsReal&)*(_accepParams.bM1)),
  cM1("cM1", "cM1", this, (RooAbsReal&)*(_accepParams.cM1)),
  dM1("dM1", "dM1", this, (RooAbsReal&)*(_accepParams.dM1)),
  aM2("aM2", "aM2", this, (RooAbsReal&)*(_accepParams.aM2)),
  bM2("bM2", "bM2", this, (RooAbsReal&)*(_accepParams.bM2)),
  cM2("cM2", "cM2", this, (RooAbsReal&)*(_accepParams.cM2)),
  dM2("dM2", "dM2", this, (RooAbsReal&)*(_accepParams.dM2))
{}


RooSpinZero_7DComplex_withAccep_ggH::RooSpinZero_7DComplex_withAccep_ggH(
  const RooSpinZero_7DComplex_withAccep_ggH& other, const char* name
  ) : RooSpinZero(other, name),
  aPhi("aPhi", this, other.aPhi),
  bPhi("bPhi", this, other.bPhi),
  cPhi("cPhi", this, other.cPhi),
  dPhi("dPhi", this, other.dPhi),
  ePhi("ePhi", this, other.ePhi),
  aPhi1("aPhi1", this, other.aPhi1),
  bPhi1("bPhi1", this, other.bPhi1),
  cPhi1("cPhi1", this, other.cPhi1),
  dPhi1("dPhi1", this, other.dPhi1),
  ePhi1("ePhi1", this, other.ePhi1),
  aH1("aH1", this, other.aH1),
  bH1("bH1", this, other.bH1),
  cH1("cH1", this, other.cH1),
  dH1("dH1", this, other.dH1),
  eH1("eH1", this, other.eH1),
  aH2("aH2", this, other.aH2),
  bH2("bH2", this, other.bH2),
  cH2("cH2", this, other.cH2),
  dH2("dH2", this, other.dH2),
  eH2("eH2", this, other.eH2),
  aHs("aHs", this, other.aHs),
  bHs("bHs", this, other.bHs),
  cHs("cHs", this, other.cHs),
  dHs("dHs", this, other.dHs),
  eHs("eHs", this, other.eHs),
  aM1("aM1", this, other.aM1),
  bM1("bM1", this, other.bM1),
  cM1("cM1", this, other.cM1),
  dM1("dM1", this, other.dM1),
  aM2("aM2", this, other.aM2),
  bM2("bM2", this, other.bM2),
  cM2("cM2", this, other.cM2),
  dM2("dM2", this, other.dM2)
{}



Double_t RooSpinZero_7DComplex_withAccep_ggH::evaluate() const{
  bool isZZ = true;
  if (mV < 90.) isZZ = false;
  //if ((m1+m2) > m12 || fabs(m2-mV)<fabs(m1-mV) || m2 <= 0.0 || m1 <= 0.0) return 1e-15;
  if (isZZ) {
    if ((m1+m2) > m12 || fabs(m2-mV)<fabs(m1-mV) || m2 <= 0.0 || m1 <= 0.0) return 1e-15;
  }
  else if ((m1+m2) > m12 || m2 <= 0.0 || m1 <= 0.0) return 1e-15;

  Double_t betaValSq = (1.-(pow(m1-m2, 2)/pow(m12, 2)))*(1.-(pow(m1+m2, 2)/pow(m12, 2)));
  if (betaValSq<0) return 1e-15;
  Double_t betaVal = sqrt(betaValSq);

  Double_t A00Re, A00Im, AppRe, AppIm, AmmRe, AmmIm;
  calculateAmplitudes(A00Re, A00Im, AppRe, AppIm, AmmRe, AmmIm);

  Double_t A00 = A00Im*A00Im + A00Re*A00Re;
  Double_t App = AppIm*AppIm + AppRe*AppRe;
  Double_t Amm = AmmIm*AmmIm + AmmRe*AmmRe;

  Double_t phi00=atan2(A00Im, A00Re);
  Double_t phipp=atan2(AppIm, AppRe)-phi00;
  Double_t phimm=atan2(AmmIm, AmmRe)-phi00;

  Double_t term1Coeff = pow(m1, 3)/(pow(pow(m1, 2)-pow(mV, 2), 2)+pow(mV*gamV, 2));
  Double_t term2Coeff = pow(m2, 3)/(pow(pow(m2, 2)-pow(mV, 2), 2)+pow(mV*gamV, 2));

  double value = 0;

  value+=(A00*(-1 + pow(h1, 2))*(aH1 + bH1*pow(h1, 2) + cH1*pow(h1, 4) +dH1*pow(h1, 6) + eH1*pow(h1, 8))*(-1 + pow(h2, 2))*(aH2 + bH2*pow(h2, 2) + cH2*pow(h2, 4) + dH2*pow(h2, 6) +eH2*pow(h2, 8))*(aHs + bHs*pow(hs, 2) + cHs*pow(hs, 4) +dHs*pow(hs, 6) + eHs*pow(hs, 8))*(aPhi + bPhi*cos(Phi) + cPhi*cos(2*Phi) + dPhi*cos(3*Phi) +ePhi*cos(4*Phi))*(aPhi1 + bPhi1*cos(Phi1) + cPhi1*cos(2*Phi1) +dPhi1*cos(3*Phi1) + ePhi1*cos(4*Phi1)))/4.;
  value+=(Amm*(aH1 + bH1*pow(h1, 2) + cH1*pow(h1, 4) + dH1*pow(h1, 6) +eH1*pow(h1, 8))*(aH2 + bH2*pow(h2, 2) + cH2*pow(h2, 4) +dH2*pow(h2, 6) + eH2*pow(h2, 8))*(aHs + bHs*pow(hs, 2) + cHs*pow(hs, 4) + dHs*pow(hs, 6) +eHs*pow(hs, 8))*(1 + pow(h1, 2) - 2*h1*R1Val)*(1 + pow(h2, 2) - 2*h2*R2Val)*(aPhi + bPhi*cos(Phi) + cPhi*cos(2*Phi) + dPhi*cos(3*Phi) +ePhi*cos(4*Phi))*(aPhi1 + bPhi1*cos(Phi1) + cPhi1*cos(2*Phi1) +dPhi1*cos(3*Phi1) + ePhi1*cos(4*Phi1)))/16.;
  value+=(App*(aH1 + bH1*pow(h1, 2) + cH1*pow(h1, 4) + dH1*pow(h1, 6) +eH1*pow(h1, 8))*(aH2 + bH2*pow(h2, 2) + cH2*pow(h2, 4) +dH2*pow(h2, 6) + eH2*pow(h2, 8))*(aHs + bHs*pow(hs, 2) + cHs*pow(hs, 4) + dHs*pow(hs, 6) +eHs*pow(hs, 8))*(1 + pow(h1, 2) + 2*h1*R1Val)*(1 + pow(h2, 2) + 2*h2*R2Val)*(aPhi + bPhi*cos(Phi) + cPhi*cos(2*Phi) + dPhi*cos(3*Phi) +ePhi*cos(4*Phi))*(aPhi1 + bPhi1*cos(Phi1) + cPhi1*cos(2*Phi1) +dPhi1*cos(3*Phi1) + ePhi1*cos(4*Phi1)))/16.;

  value+=(sqrt(A00)*sqrt(Amm)*sqrt(1 - pow(h1, 2))*(aH1 + bH1*pow(h1, 2) + cH1*pow(h1, 4) + dH1*pow(h1, 6) +eH1*pow(h1, 8))*sqrt(1 - pow(h2, 2))*(aH2 + bH2*pow(h2, 2) + cH2*pow(h2, 4) + dH2*pow(h2, 6) +eH2*pow(h2, 8))*(aHs + bHs*pow(hs, 2) + cHs*pow(hs, 4) +dHs*pow(hs, 6) + eHs*pow(hs, 8))*(h1 - R1Val)*(h2 - R2Val)*(aPhi + bPhi*cos(Phi) + cPhi*cos(2*Phi) + dPhi*cos(3*Phi) +ePhi*cos(4*Phi))*(aPhi1 + bPhi1*cos(Phi1) + cPhi1*cos(2*Phi1) +dPhi1*cos(3*Phi1) + ePhi1*cos(4*Phi1))*cos(Phi - phimm))/4.;
  value+=(sqrt(A00)*sqrt(App)*sqrt(1 - pow(h1, 2))*(aH1 + bH1*pow(h1, 2) + cH1*pow(h1, 4) + dH1*pow(h1, 6) +eH1*pow(h1, 8))*sqrt(1 - pow(h2, 2))*(aH2 + bH2*pow(h2, 2) + cH2*pow(h2, 4) + dH2*pow(h2, 6) +eH2*pow(h2, 8))*(aHs + bHs*pow(hs, 2) + cHs*pow(hs, 4) +dHs*pow(hs, 6) + eHs*pow(hs, 8))*(h1 + R1Val)*(h2 + R2Val)*(aPhi + bPhi*cos(Phi) + cPhi*cos(2*Phi) + dPhi*cos(3*Phi) +ePhi*cos(4*Phi))*(aPhi1 + bPhi1*cos(Phi1) + cPhi1*cos(2*Phi1) +dPhi1*cos(3*Phi1) + ePhi1*cos(4*Phi1))*cos(Phi + phipp))/4.;
  value+=(sqrt(Amm)*sqrt(App)*(-1 + pow(h1, 2))*(aH1 + bH1*pow(h1, 2) + cH1*pow(h1, 4) + dH1*pow(h1, 6) +eH1*pow(h1, 8))*(-1 + pow(h2, 2))*(aH2 + bH2*pow(h2, 2) + cH2*pow(h2, 4) + dH2*pow(h2, 6) +eH2*pow(h2, 8))*(aHs + bHs*pow(hs, 2) + cHs*pow(hs, 4) +dHs*pow(hs, 6) + eHs*pow(hs, 8))*(aPhi + bPhi*cos(Phi) + cPhi*cos(2*Phi) + dPhi*cos(3*Phi) +ePhi*cos(4*Phi))*(aPhi1 + bPhi1*cos(Phi1) + cPhi1*cos(2*Phi1) +dPhi1*cos(3*Phi1) + ePhi1*cos(4*Phi1))*cos(2*Phi - phimm + phipp))/8.;

  value = betaVal*term1Coeff*term2Coeff*value
    *(1+aM1*m1+bM1*m1*m1+cM1*m1*m1*m1+dM1*m1*m1*m1*m1)
    *(1+aM2*m1+bM2*m2*m2+cM2*m2*m2*m2+dM2*m2*m2*m2*m2);

  if (!(value==value)) cout << "Evaluate NaN=" << value << endl;
  return value;
}


Int_t RooSpinZero_7DComplex_withAccep_ggH::getAnalyticalIntegral(RooArgSet& allVars, RooArgSet& analVars, const char* /*rangeName*/) const{
  if (matchArgs(allVars, analVars, RooArgSet(*hs.absArg(), *h1.absArg(), *h2.absArg(), *Phi.absArg(), *Phi1.absArg()))) return 6; // No m1,m2
  if (matchArgs(allVars, analVars, hs, h1, h2, Phi)) return 2; // No Phi1
  if (matchArgs(allVars, analVars, hs, h1, h2, Phi1)) return 5; // No Phi
  if (matchArgs(allVars, analVars, hs, h1, Phi, Phi1)) return 3; // No h2
  if (matchArgs(allVars, analVars, hs, h2, Phi, Phi1)) return 4; // No h1
  if (matchArgs(allVars, analVars, h1, h2, Phi, Phi1)) return 1; // No hs
  return 0;
}
Double_t RooSpinZero_7DComplex_withAccep_ggH::analyticalIntegral(Int_t code, const char* /*rangeName*/) const{
  bool isZZ = true;
  if (mV < 90.) isZZ = false;
  //if ((m1+m2) > m12 || fabs(m2-mV)<fabs(m1-mV) || m2 <= 0.0 || m1 <= 0.0) return 1e-10;
  if (isZZ) {
    if ((m1+m2) > m12 || fabs(m2-mV)<fabs(m1-mV) || m2 <= 0.0 || m1 <= 0.0) return 1e-10;
  }
  else if ((m1+m2) > m12 || m2 <= 0.0 || m1 <= 0.0) return 1e-10;

  Double_t betaValSq = (1.-(pow(m1-m2, 2)/pow(m12, 2)))*(1.-(pow(m1+m2, 2)/pow(m12, 2)));
  if (betaValSq<0) return 1e-15;
  Double_t betaVal = sqrt(betaValSq);
  Double_t Pi = TMath::Pi();

  Double_t A00Re, A00Im, AppRe, AppIm, AmmRe, AmmIm;
  calculateAmplitudes(A00Re, A00Im, AppRe, AppIm, AmmRe, AmmIm);

  Double_t A00 = A00Im*A00Im + A00Re*A00Re;
  Double_t App = AppIm*AppIm + AppRe*AppRe;
  Double_t Amm = AmmIm*AmmIm + AmmRe*AmmRe;

  Double_t phi00=atan2(A00Im, A00Re);
  Double_t phipp=atan2(AppIm, AppRe)-phi00;
  Double_t phimm=atan2(AmmIm, AmmRe)-phi00;

  Double_t term1Coeff = pow(m1, 3)/(pow(pow(m1, 2)-pow(mV, 2), 2)+pow(mV*gamV, 2));
  Double_t term2Coeff = pow(m2, 3)/(pow(pow(m2, 2)-pow(mV, 2), 2)+pow(mV*gamV, 2));

  double value = 0;
  if (code==1){ // projections to hs
    // test_InteNoHs.txt

    value+=(16*aPhi*aPhi1*(1155*aH1 + 231*bH1 + 99*cH1 + 55*dH1 + 35*eH1)*(1155*aH2 + 231*bH2 + 99*cH2 + 55*dH2 + 35*eH2)*A00*(aHs + bHs*pow(hs, 2) + cHs*pow(hs, 4) + dHs*pow(hs, 6) +eHs*pow(hs, 8))*pow(Pi, 2))/1.2006225e7;
    value+=(16*aPhi*aPhi1*(1155*aH1 + 462*bH1 + 297*cH1 + 220*dH1 + 175*eH1)*(1155*aH2 + 462*bH2 + 297*cH2 + 220*dH2 + 175*eH2)*Amm*(aHs + bHs*pow(hs, 2) + cHs*pow(hs, 4) + dHs*pow(hs, 6) +eHs*pow(hs, 8))*pow(Pi, 2))/1.2006225e7;
    value+=(16*aPhi*aPhi1*(1155*aH1 + 462*bH1 + 297*cH1 + 220*dH1 + 175*eH1)*(1155*aH2 + 462*bH2 + 297*cH2 + 220*dH2 + 175*eH2)*App*(aHs + bHs*pow(hs, 2) + cHs*pow(hs, 4) + dHs*pow(hs, 6) +eHs*pow(hs, 8))*pow(Pi, 2))/1.2006225e7;

    value+=(aPhi1*bPhi*(128*aH1 + 32*bH1 + 16*cH1 + 10*dH1 + 7*eH1)*(128*aH2 + 32*bH2 + 16*cH2 + 10*dH2 + 7*eH2)*sqrt(A00)*sqrt(Amm)*(aHs + bHs*pow(hs, 2) + cHs*pow(hs, 4) + dHs*pow(hs, 6) +eHs*pow(hs, 8))*pow(Pi, 4)*R1Val*R2Val*cos(phimm))/131072.;
    value+=(aPhi1*bPhi*(128*aH1 + 32*bH1 + 16*cH1 + 10*dH1 + 7*eH1)*(128*aH2 + 32*bH2 + 16*cH2 + 10*dH2 + 7*eH2)*sqrt(A00)*sqrt(App)*(aHs + bHs*pow(hs, 2) + cHs*pow(hs, 4) + dHs*pow(hs, 6) +eHs*pow(hs, 8))*pow(Pi, 4)*R1Val*R2Val*cos(phipp))/131072.;

    value+=(4*aPhi1*cPhi*(1155*aH1 + 231*bH1 + 99*cH1 + 55*dH1 + 35*eH1)*(1155*aH2 + 231*bH2 + 99*cH2 + 55*dH2 + 35*eH2)*sqrt(Amm)*sqrt(App)*(aHs + bHs*pow(hs, 2) + cHs*pow(hs, 4) + dHs*pow(hs, 6) +eHs*pow(hs, 8))*pow(Pi, 2)*cos(phimm - phipp))/1.2006225e7;
  }
  else if (code==2){ // projections to Phi1
    // from test_IntNoPhi1.txt

    value+=(16*aPhi*(1155*aH1 + 231*bH1 + 99*cH1 + 55*dH1 + 35*eH1)*(1155*aH2 + 231*bH2 + 99*cH2 + 55*dH2 + 35*eH2)*(315*aHs + 105*bHs + 63*cHs + 45*dHs + 35*eHs)*A00*Pi*(aPhi1 + bPhi1*cos(Phi1) + cPhi1*cos(2*Phi1) + dPhi1*cos(3*Phi1) +ePhi1*cos(4*Phi1)))/3.781960875e9;
    value+=(16*aPhi*(1155*aH1 + 462*bH1 + 297*cH1 + 220*dH1 + 175*eH1)*(1155*aH2 + 462*bH2 + 297*cH2 + 220*dH2 + 175*eH2)*(315*aHs + 105*bHs + 63*cHs + 45*dHs + 35*eHs)*Amm*Pi*(aPhi1 + bPhi1*cos(Phi1) + cPhi1*cos(2*Phi1) + dPhi1*cos(3*Phi1) +ePhi1*cos(4*Phi1)))/3.781960875e9;
    value+=(16*aPhi*(1155*aH1 + 462*bH1 + 297*cH1 + 220*dH1 + 175*eH1)*(1155*aH2 + 462*bH2 + 297*cH2 + 220*dH2 + 175*eH2)*(315*aHs + 105*bHs + 63*cHs + 45*dHs + 35*eHs)*App*Pi*(aPhi1 + bPhi1*cos(Phi1) + cPhi1*cos(2*Phi1) + dPhi1*cos(3*Phi1) +ePhi1*cos(4*Phi1)))/3.781960875e9;

    value+=(bPhi*(128*aH1 + 32*bH1 + 16*cH1 + 10*dH1 + 7*eH1)*(128*aH2 + 32*bH2 + 16*cH2 + 10*dH2 + 7*eH2)*(2*aHs + (2*bHs)/3. + (2*cHs)/5. + (2*dHs)/7. + (2*eHs)/9.)*sqrt(A00)*sqrt(Amm)*pow(Pi, 3)*R1Val*R2Val*(aPhi1 + bPhi1*cos(Phi1) + cPhi1*cos(2*Phi1) + dPhi1*cos(3*Phi1) +ePhi1*cos(4*Phi1))*cos(phimm))/262144.;
    value+=(bPhi*(128*aH1 + 32*bH1 + 16*cH1 + 10*dH1 + 7*eH1)*(128*aH2 + 32*bH2 + 16*cH2 + 10*dH2 + 7*eH2)*(2*aHs + (2*bHs)/3. + (2*cHs)/5. + (2*dHs)/7. + (2*eHs)/9.)*sqrt(A00)*sqrt(App)*pow(Pi, 3)*R1Val*R2Val*(aPhi1 + bPhi1*cos(Phi1) + cPhi1*cos(2*Phi1) + dPhi1*cos(3*Phi1) +ePhi1*cos(4*Phi1))*cos(phipp))/262144.;

    value+=(4*cPhi*(1155*aH1 + 231*bH1 + 99*cH1 + 55*dH1 + 35*eH1)*(1155*aH2 + 231*bH2 + 99*cH2 + 55*dH2 + 35*eH2)*(315*aHs + 105*bHs + 63*cHs + 45*dHs + 35*eHs)*sqrt(Amm)*sqrt(App)*Pi*(aPhi1 + bPhi1*cos(Phi1) + cPhi1*cos(2*Phi1) + dPhi1*cos(3*Phi1) +ePhi1*cos(4*Phi1))*cos(phimm - phipp))/3.781960875e9;
  }
  else if (code==3){ // projections to h2
    // from test_IntNoH2.txt

    value+=(-4*aPhi*aPhi1*(1155*aH1 + 231*bH1 + 99*cH1 + 55*dH1 + 35*eH1)*(2*aHs + (2*bHs)/3. + (2*cHs)/5. + (2*dHs)/7. + (2*eHs)/9.)*A00*(-1 + pow(h2, 2))*(aH2 + bH2*pow(h2, 2) + cH2*pow(h2, 4) +dH2*pow(h2, 6) + eH2*pow(h2, 8))*pow(Pi, 2))/3465.;
    value+=(2*aPhi*aPhi1*(1155*aH1 + 462*bH1 + 297*cH1 + 220*dH1 + 175*eH1)*(2*aHs + (2*bHs)/3. + (2*cHs)/5. + (2*dHs)/7. + (2*eHs)/9.)*Amm*(aH2 + bH2*pow(h2, 2) + cH2*pow(h2, 4) + dH2*pow(h2, 6) +eH2*pow(h2, 8))*pow(Pi, 2)*(1 + pow(h2, 2) - 2*h2*R2Val))/3465.;
    value+=(2*aPhi*aPhi1*(1155*aH1 + 462*bH1 + 297*cH1 + 220*dH1 + 175*eH1)*(2*aHs + (2*bHs)/3. + (2*cHs)/5. + (2*dHs)/7. + (2*eHs)/9.)*App*(aH2 + bH2*pow(h2, 2) + cH2*pow(h2, 4) + dH2*pow(h2, 6) +eH2*pow(h2, 8))*pow(Pi, 2)*(1 + pow(h2, 2) + 2*h2*R2Val))/3465.;

    value+=-(aPhi1*bPhi*(128*aH1 + 32*bH1 + 16*cH1 + 10*dH1 + 7*eH1)*(2*aHs + (2*bHs)/3. + (2*cHs)/5. + (2*dHs)/7. + (2*eHs)/9.)*sqrt(A00)*sqrt(Amm)*sqrt(1 - pow(h2, 2))*(aH2 + bH2*pow(h2, 2) + cH2*pow(h2, 4) + dH2*pow(h2, 6) +eH2*pow(h2, 8))*pow(Pi, 3)*R1Val*(h2 - R2Val)*cos(phimm))/512.;
    value+=(aPhi1*bPhi*(128*aH1 + 32*bH1 + 16*cH1 + 10*dH1 + 7*eH1)*(2*aHs + (2*bHs)/3. + (2*cHs)/5. + (2*dHs)/7. + (2*eHs)/9.)*sqrt(A00)*sqrt(App)*sqrt(1 - pow(h2, 2))*(aH2 + bH2*pow(h2, 2) + cH2*pow(h2, 4) + dH2*pow(h2, 6) +eH2*pow(h2, 8))*pow(Pi, 3)*R1Val*(h2 + R2Val)*cos(phipp))/512.;

    value+=-(aPhi1*cPhi*(1155*aH1 + 231*bH1 + 99*cH1 + 55*dH1 + 35*eH1)*(2*aHs + (2*bHs)/3. + (2*cHs)/5. + (2*dHs)/7. + (2*eHs)/9.)*sqrt(Amm)*sqrt(App)*(-1 + pow(h2, 2))*(aH2 + bH2*pow(h2, 2) + cH2*pow(h2, 4) + dH2*pow(h2, 6) +eH2*pow(h2, 8))*pow(Pi, 2)*cos(phimm - phipp))/3465.;
  }
  else if (code==4){ // projections to h1
    // from test_IntNoH1.txt

    value+=(-4*aPhi*aPhi1*(1155*aH2 + 231*bH2 + 99*cH2 + 55*dH2 + 35*eH2)*(2*aHs + (2*bHs)/3. + (2*cHs)/5. + (2*dHs)/7. + (2*eHs)/9.)*A00*(-1 + pow(h1, 2))*(aH1 + bH1*pow(h1, 2) + cH1*pow(h1, 4) +dH1*pow(h1, 6) + eH1*pow(h1, 8))*pow(Pi, 2))/3465.;
    value+=(2*aPhi*aPhi1*(1155*aH2 + 462*bH2 + 297*cH2 + 220*dH2 + 175*eH2)*(2*aHs + (2*bHs)/3. + (2*cHs)/5. + (2*dHs)/7. + (2*eHs)/9.)*Amm*(aH1 + bH1*pow(h1, 2) + cH1*pow(h1, 4) + dH1*pow(h1, 6) +eH1*pow(h1, 8))*pow(Pi, 2)*(1 + pow(h1, 2) - 2*h1*R1Val))/3465.;
    value+=(2*aPhi*aPhi1*(1155*aH2 + 462*bH2 + 297*cH2 + 220*dH2 + 175*eH2)*(2*aHs + (2*bHs)/3. + (2*cHs)/5. + (2*dHs)/7. + (2*eHs)/9.)*App*(aH1 + bH1*pow(h1, 2) + cH1*pow(h1, 4) + dH1*pow(h1, 6) +eH1*pow(h1, 8))*pow(Pi, 2)*(1 + pow(h1, 2) + 2*h1*R1Val))/3465.;

    value+=-(aPhi1*bPhi*(128*aH2 + 32*bH2 + 16*cH2 + 10*dH2 + 7*eH2)*(2*aHs + (2*bHs)/3. + (2*cHs)/5. + (2*dHs)/7. + (2*eHs)/9.)*sqrt(A00)*sqrt(Amm)*sqrt(1 - pow(h1, 2))*(aH1 + bH1*pow(h1, 2) + cH1*pow(h1, 4) + dH1*pow(h1, 6) +eH1*pow(h1, 8))*pow(Pi, 3)*(h1 - R1Val)*R2Val*cos(phimm))/512.;
    value+=(aPhi1*bPhi*(128*aH2 + 32*bH2 + 16*cH2 + 10*dH2 + 7*eH2)*(2*aHs + (2*bHs)/3. + (2*cHs)/5. + (2*dHs)/7. + (2*eHs)/9.)*sqrt(A00)*sqrt(App)*sqrt(1 - pow(h1, 2))*(aH1 + bH1*pow(h1, 2) + cH1*pow(h1, 4) + dH1*pow(h1, 6) +eH1*pow(h1, 8))*pow(Pi, 3)*(h1 + R1Val)*R2Val*cos(phipp))/512.;

    value+=-(aPhi1*cPhi*(1155*aH2 + 231*bH2 + 99*cH2 + 55*dH2 + 35*eH2)*(2*aHs + (2*bHs)/3. + (2*cHs)/5. + (2*dHs)/7. + (2*eHs)/9.)*sqrt(Amm)*sqrt(App)*(-1 + pow(h1, 2))*(aH1 + bH1*pow(h1, 2) + cH1*pow(h1, 4) + dH1*pow(h1, 6) +eH1*pow(h1, 8))*pow(Pi, 2)*cos(phimm - phipp))/3465.;
  }
  else if (code==5){ // projections to Phi
    // from test_IntNoPhi.txt

    value+=(16*aPhi1*(1155*aH1 + 231*bH1 + 99*cH1 + 55*dH1 + 35*eH1)*(1155*aH2 + 231*bH2 + 99*cH2 + 55*dH2 + 35*eH2)*(315*aHs + 105*bHs + 63*cHs + 45*dHs + 35*eHs)*A00*Pi*(aPhi + bPhi*cos(Phi) + cPhi*cos(2*Phi) + dPhi*cos(3*Phi) +ePhi*cos(4*Phi)))/3.781960875e9;
    value+=(16*aPhi1*(1155*aH1 + 462*bH1 + 297*cH1 + 220*dH1 + 175*eH1)*(1155*aH2 + 462*bH2 + 297*cH2 + 220*dH2 + 175*eH2)*(315*aHs + 105*bHs + 63*cHs + 45*dHs + 35*eHs)*Amm*Pi*(aPhi + bPhi*cos(Phi) + cPhi*cos(2*Phi) + dPhi*cos(3*Phi) +ePhi*cos(4*Phi)))/3.781960875e9;
    value+=(16*aPhi1*(1155*aH1 + 462*bH1 + 297*cH1 + 220*dH1 + 175*eH1)*(1155*aH2 + 462*bH2 + 297*cH2 + 220*dH2 + 175*eH2)*(315*aHs + 105*bHs + 63*cHs + 45*dHs + 35*eHs)*App*Pi*(aPhi + bPhi*cos(Phi) + cPhi*cos(2*Phi) + dPhi*cos(3*Phi) +ePhi*cos(4*Phi)))/3.781960875e9;

    value+=(aPhi1*(128*aH1 + 32*bH1 + 16*cH1 + 10*dH1 + 7*eH1)*(128*aH2 + 32*bH2 + 16*cH2 + 10*dH2 + 7*eH2)*(2*aHs + (2*bHs)/3. + (2*cHs)/5. + (2*dHs)/7. + (2*eHs)/9.)*sqrt(A00)*sqrt(Amm)*pow(Pi, 3)*R1Val*R2Val*(aPhi + bPhi*cos(Phi) + cPhi*cos(2*Phi) + dPhi*cos(3*Phi) +ePhi*cos(4*Phi))*cos(Phi - phimm))/131072.;
    value+=(aPhi1*(128*aH1 + 32*bH1 + 16*cH1 + 10*dH1 + 7*eH1)*(128*aH2 + 32*bH2 + 16*cH2 + 10*dH2 + 7*eH2)*(2*aHs + (2*bHs)/3. + (2*cHs)/5. + (2*dHs)/7. + (2*eHs)/9.)*sqrt(A00)*sqrt(App)*pow(Pi, 3)*R1Val*R2Val*(aPhi + bPhi*cos(Phi) + cPhi*cos(2*Phi) + dPhi*cos(3*Phi) +ePhi*cos(4*Phi))*cos(Phi + phipp))/131072.;

    value+=(8*aPhi1*(1155*aH1 + 231*bH1 + 99*cH1 + 55*dH1 + 35*eH1)*(1155*aH2 + 231*bH2 + 99*cH2 + 55*dH2 + 35*eH2)*(315*aHs + 105*bHs + 63*cHs + 45*dHs + 35*eHs)*sqrt(Amm)*sqrt(App)*Pi*(aPhi + bPhi*cos(Phi) + cPhi*cos(2*Phi) + dPhi*cos(3*Phi) +ePhi*cos(4*Phi))*cos(2*Phi - phimm + phipp))/3.781960875e9;
  }
  else if (code==6){ // projections to mz1/mz2
    // from test_IntAll.txt

    value+=(32*aPhi*aPhi1*(1155*aH1 + 231*bH1 + 99*cH1 + 55*dH1 + 35*eH1)*(1155*aH2 + 231*bH2 + 99*cH2 + 55*dH2 + 35*eH2)*(315*aHs + 105*bHs + 63*cHs + 45*dHs + 35*eHs)*A00*pow(Pi, 2))/3.781960875e9;
    value+=(32*aPhi*aPhi1*(1155*aH1 + 462*bH1 + 297*cH1 + 220*dH1 + 175*eH1)*(1155*aH2 + 462*bH2 + 297*cH2 + 220*dH2 + 175*eH2)*(315*aHs + 105*bHs + 63*cHs + 45*dHs + 35*eHs)*Amm*pow(Pi, 2))/3.781960875e9;
    value+=(32*aPhi*aPhi1*(1155*aH1 + 462*bH1 + 297*cH1 + 220*dH1 + 175*eH1)*(1155*aH2 + 462*bH2 + 297*cH2 + 220*dH2 + 175*eH2)*(315*aHs + 105*bHs + 63*cHs + 45*dHs + 35*eHs)*App*pow(Pi, 2))/3.781960875e9;

    value+=(aPhi1*bPhi*(128*aH1 + 32*bH1 + 16*cH1 + 10*dH1 + 7*eH1)*(128*aH2 + 32*bH2 + 16*cH2 + 10*dH2 + 7*eH2)*(315*aHs + 105*bHs + 63*cHs + 45*dHs + 35*eHs)*sqrt(A00)*sqrt(Amm)*pow(Pi, 4)*R1Val*R2Val*cos(phimm))/2.064384e7;
    value+=(aPhi1*bPhi*(128*aH1 + 32*bH1 + 16*cH1 + 10*dH1 + 7*eH1)*(128*aH2 + 32*bH2 + 16*cH2 + 10*dH2 + 7*eH2)*(315*aHs + 105*bHs + 63*cHs + 45*dHs + 35*eHs)*sqrt(A00)*sqrt(App)*pow(Pi, 4)*R1Val*R2Val*cos(phipp))/2.064384e7;

    value+=(8*aPhi1*cPhi*(1155*aH1 + 231*bH1 + 99*cH1 + 55*dH1 + 35*eH1)*(1155*aH2 + 231*bH2 + 99*cH2 + 55*dH2 + 35*eH2)*(315*aHs + 105*bHs + 63*cHs + 45*dHs + 35*eHs)*sqrt(Amm)*sqrt(App)*pow(Pi, 2)*cos(phimm - phipp))/3.781960875e9;
  }
  else{
    assert(0);
    return 1e-10;
  }

  value = betaVal*term1Coeff*term2Coeff*value
    *(1+aM1*m1+bM1*m1*m1+cM1*m1*m1*m1+dM1*m1*m1*m1*m1)
    *(1+aM2*m1+bM2*m2*m2+cM2*m2*m2*m2+dM2*m2*m2*m2*m2);

  if (!(value==value)){
    cout << "Integral NaN=" << value << " at "
      << "h1=" << h1 << '\t'
      << "h2=" << h2 << '\t'
      << "hs=" << hs << '\t'
      << "Phi1=" << Phi1 << '\t'
      << "Phi=" << Phi << '\t'
      << "m1=" << m1 << '\t'
      << "m2=" << m2 << '\t'
      << "m12=" << m12 << '\t'
      << endl;
    cout << "Possible sources:\n"
      << "betaVal=" << betaVal << '\t'
      << "term1Coeff=" << term1Coeff << '\t'
      << "term2Coeff=" << term2Coeff << '\t'
      << "A00=" << A00 << '\t'
      << "App=" << App << '\t'
      << "Amm=" << Amm << '\t'
      << "phi00=" << phi00 << '\t'
      << "phipp=" << phipp << '\t'
      << "phimm=" << phimm << '\t'
      << endl;
  }
  return value;
}

