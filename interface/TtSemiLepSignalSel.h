#ifndef TtSemiLepSignalSel_h
#define TtSemiLepSignalSel_h

#include <vector>
#include "TMath.h"
#include "Math/VectorUtil.h"

#include "DataFormats/PatCandidates/interface/Jet.h"
#include "DataFormats/PatCandidates/interface/MET.h"

class TtSemiLepSignalSel {
  // common calculator class for likelihood
  // variables in semi leptonic ttbar decays
public:

  TtSemiLepSignalSel();
  TtSemiLepSignalSel(const std::vector<pat::Jet>&, math::XYZTLorentzVector, const edm::View<pat::MET>&, unsigned int nJetsMax);
  ~TtSemiLepSignalSel();

  double dphiMETlepton() const { return var_dphiMETlepton; }
  //double dphiMETleadingjet() const { return var_dphiMETleadingjet; }
  //double ETratiojet5jet4() const { return var_ETratiojet5jet4; }
  //double spheric() const { return var_sphericity; }
  double aplanar() const { return var_aplanarity; }
  double circular() const { return var_circularity; }
  //double isotrop() const { return var_isotropy; }
  double sumEt() const { return var_sumEt; }
  double maxEta() const { return var_maxEta; }
  double Et1() const { return var_Et1/var_sumEt; }
  double Et2() const { return var_Et2/var_sumEt; }
  double Et3() const { return var_Et3/var_sumEt; }
  double Et4() const { return var_Et4/var_sumEt; }
  //double lepPt() const { return var_lepPt; }
  double lepeta() const { return fabs(var_lepeta); }
  double dRlepjet1() const { return var_dRlepjet1; }
  //double etajet1() const { return var_etajet1; }
  double dphilepjet1() const {return var_dphilepjet1; }
  //double Ht() const { return var_Ht; }


   
private:

  double var_dphiMETlepton;
  //double var_dphiMETleadingjet;
  //double var_ETratiojet5jet4;
  //double var_sphericity;
  double var_aplanarity;
  double var_circularity;
  //double var_isotropy;
  double var_sumEt;
  double var_maxEta;
  double var_Et1;
  double var_Et2;
  double var_Et3;
  double var_Et4;
  //double var_lepPt;
  double var_lepeta;
  double var_dRlepjet1;
  //double var_etajet1;
  double var_dphilepjet1;
  //double var_Ht;
};

#endif
