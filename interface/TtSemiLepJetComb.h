#ifndef TtSemiLepJetComb_h
#define TtSemiLepJetComb_h

#include <vector>
#include "TMath.h"
#include "Math/VectorUtil.h"

#include "DataFormats/PatCandidates/interface/Jet.h"
#include "DataFormats/PatCandidates/interface/MET.h"
#include "DataFormats/PatCandidates/interface/Muon.h"
#include "DataFormats/PatCandidates/interface/Electron.h"
#include <DataFormats/Candidate/interface/Candidate.h>

class TtSemiLepJetComb {
  // common calculator class for likelihood
  // variables in semi leptonic ttbar decays
public:

  TtSemiLepJetComb();
 
  TtSemiLepJetComb(const std::vector<pat::Jet>&, const std::vector<int>, const math::XYZTLorentzVector&, const pat::MET&);

  ~TtSemiLepJetComb();
  
   
  //1-particle kinematics
  double massHadW() const { return hadW.M(); }
  double massHadTop() const { return hadTop.M(); }
  double massLepW() const { return lepW.M(); }
  double massLepTop() const { return lepTop.M(); }

  double ptHadTop() const { return hadTop.Pt();}
  double etaHadTop() const { return hadTop.Eta();}
  double phiHadTop() const { return hadTop.Phi();}
  double thetaHadTop() const { return hadTop.Theta();}

  double ptLepTop() const { return lepTop.Pt();}
  double etaLepTop() const { return lepTop.Eta();}
  double phiLepTop() const { return lepTop.Phi();}
  double thetaLepTop() const { return lepTop.Theta();}

  double ptHadW() const { return hadW.Pt();}
  double etaHadW() const { return hadW.Eta();}
  double phiHadW() const { return hadW.Phi();}
  double thetaHadW() const { return hadW.Theta();}

  double ptLepW() const { return lepW.Pt();}
  double etaLepW() const { return lepW.Eta();}
  double phiLepW() const { return lepW.Phi();}
  double thetaLepW() const { return lepW.Theta();}

  double ptHadb() const { return hadBJet.p4().Pt();}
  double etaHadb() const { return hadBJet.p4().Eta();}
  double phiHadb() const { return hadBJet.p4().Phi();}
  double thetaHadb() const { return hadBJet.p4().Theta();}

  double ptLepb() const { return lepBJet.p4().Pt();}
  double etaLepb() const { return lepBJet.p4().Eta();}
  double phiLepb() const { return lepBJet.p4().Phi();}
  double thetaLepb() const { return lepBJet.p4().Theta();}

  double pthadq() const { return hadQJet.p4().Pt();}
  double etahadq() const { return hadQJet.p4().Eta();}
  double phihadq() const { return hadQJet.p4().Phi();}
  double thetahadq() const { return hadQJet.p4().Theta();}

  double pthadqBar() const { return hadQBarJet.p4().Pt();}
  double etahadqBar() const { return hadQBarJet.p4().Eta();}
  double phihadqBar() const { return hadQBarJet.p4().Phi();}
  double thetahadqBar() const { return hadQBarJet.p4().Theta();}

  double ptlepton() const { return lepton.Pt();}
  double etalepton() const { return lepton.Eta();}
  double philepton() const { return lepton.Phi();}
  double thetalepton() const { return lepton.Theta();}

  double ptneutrino() const { return neutrino.p4().Pt();}
  double etaneutrino() const { return neutrino.p4().Eta();}
  double phineutrino() const { return neutrino.p4().Phi();}
  double thetaneutrino() const { return neutrino.p4().Theta();}

  //2-particle kinematics  
  double deltaRHadTopLepTop() const { return ROOT::Math::VectorUtil::DeltaR(hadTop, lepTop); }
  double deltaPhiHadTopLepTop() const { return ROOT::Math::VectorUtil::DeltaPhi(hadTop, lepTop); }
  double deltaThetaHadTopLepTop() const { return ROOT::Math::VectorUtil::Angle(hadTop, lepTop); }
  double deltaMassHadTopLepTop() const { return hadTop.M() - lepTop.M(); }

  double deltaRHadTopHadW() const { return ROOT::Math::VectorUtil::DeltaR(hadTop, hadW); }
  double deltaPhiHadTopHadW() const { return ROOT::Math::VectorUtil::DeltaPhi(hadTop, hadW); }
  double deltaThetaHadTopHadW() const { return ROOT::Math::VectorUtil::Angle(hadTop, hadW); }

  double deltaRLepTopLepW() const { return ROOT::Math::VectorUtil::DeltaR(lepTop, lepW); }
  double deltaPhiLepTopLepW() const { return ROOT::Math::VectorUtil::DeltaPhi(lepTop, lepW); }
  double deltaThetaLepTopLepW() const { return ROOT::Math::VectorUtil::Angle(lepTop, lepW); }

  double deltaRHadTopHadb() const { return ROOT::Math::VectorUtil::DeltaR(hadTop, hadBJet.p4()); }
  double deltaPhiHadTopHadb() const { return ROOT::Math::VectorUtil::DeltaPhi(hadTop, hadBJet.p4()); }
  double deltaThetaHadTopHadb() const { return ROOT::Math::VectorUtil::Angle(hadTop, hadBJet.p4()); }

  double deltaRLepTopLepb() const { return ROOT::Math::VectorUtil::DeltaR(lepTop, lepBJet.p4()); }
  double deltaPhiLepTopLepb() const { return ROOT::Math::VectorUtil::DeltaPhi(lepTop, lepBJet.p4()); }
  double deltaThetaLepTopLepb() const { return ROOT::Math::VectorUtil::Angle(lepTop, lepBJet.p4()); }
 
  double deltaRHadWHadb() const { return ROOT::Math::VectorUtil::DeltaR(hadW, hadBJet.p4()); }
  double deltaPhiHadWHadb() const { return ROOT::Math::VectorUtil::DeltaPhi(hadW, hadBJet.p4()); }
  double deltaThetaHadWHadb() const { return ROOT::Math::VectorUtil::Angle(hadW, hadBJet.p4()); }

  double deltaRLepWLepb() const { return ROOT::Math::VectorUtil::DeltaR(lepW, lepBJet.p4()); }
  double deltaPhiLepWLepb() const { return ROOT::Math::VectorUtil::DeltaPhi(lepW, lepBJet.p4()); }
  double deltaThetaLepWLepb() const { return ROOT::Math::VectorUtil::Angle(lepW, lepBJet.p4()); }
  
  double deltaRHadQHadQBar() const { return ROOT::Math::VectorUtil::DeltaR(hadQJet.p4(), hadQBarJet.p4()); }
  double deltaPhiHadQHadQBar() const { return ROOT::Math::VectorUtil::DeltaPhi(hadQJet.p4(), hadQBarJet.p4()); }
  double deltaThetaHadQHadQBar() const { return ROOT::Math::VectorUtil::Angle(hadQJet.p4(), hadQBarJet.p4()); }

  double deltaRLepToplepton() const { return ROOT::Math::VectorUtil::DeltaR(lepTop, lepton); }
  double deltaPhiLepToplepton() const { return ROOT::Math::VectorUtil::DeltaPhi(lepTop, lepton); }
  double deltaThetaLepToplepton() const { return ROOT::Math::VectorUtil::Angle(lepTop, lepton); }
 
  double deltaRLepTopneutrino() const { return ROOT::Math::VectorUtil::DeltaR(lepTop, neutrino.p4()); }
  double deltaPhiLepTopneutrino() const { return ROOT::Math::VectorUtil::DeltaPhi(lepTop, neutrino.p4()); }
  double deltaThetaLepTopneutrino() const { return ROOT::Math::VectorUtil::Angle(lepTop, neutrino.p4()); }
 
  double deltaRLepblepton() const { return ROOT::Math::VectorUtil::DeltaR(lepBJet.p4(), lepton); }
  double deltaPhiLepblepton() const { return ROOT::Math::VectorUtil::DeltaPhi(lepBJet.p4(), lepton); }
  double deltaThetaLepblepton() const { return ROOT::Math::VectorUtil::Angle(lepBJet.p4(), lepton); }
 
  double deltaRLepbneutrino() const { return ROOT::Math::VectorUtil::DeltaR(lepBJet.p4(), neutrino.p4()); }
  double deltaPhiLepbneutrino() const { return ROOT::Math::VectorUtil::DeltaPhi(lepBJet.p4(), neutrino.p4()); }
  double deltaThetaLepbneutrino() const { return ROOT::Math::VectorUtil::Angle(lepBJet.p4(), neutrino.p4()); }
 
  double deltaRleptonneutrino() const { return ROOT::Math::VectorUtil::DeltaR(lepton, neutrino.p4()); }
  double deltaPhileptonneutrino() const { return ROOT::Math::VectorUtil::DeltaPhi(lepton, neutrino.p4()); }
  double deltaThetaleptonneutrino() const { return ROOT::Math::VectorUtil::Angle(lepton, neutrino.p4()); }
 
  //b-tag information
  double sumBtag1hadBlepB() const { return hadBJet.bDiscriminator("trackCountingHighEffBJetTags")+lepBJet.bDiscriminator("trackCountingHighEffBJetTags"); }
  double sumBtag2hadBlepB() const { return hadBJet.bDiscriminator("trackCountingHighPurBJetTags")+lepBJet.bDiscriminator("trackCountingHighPurBJetTags"); }
  double sumBtag3hadBlepB() const { return hadBJet.bDiscriminator("softMuonBJetTags")+lepBJet.bDiscriminator("softMuonBJetTags"); }
  double sumBtag4hadBlepB() const { return hadBJet.bDiscriminator("simpleSecondaryVertexBJetTags")+lepBJet.bDiscriminator("simpleSecondaryVertexBJetTags"); }
  double sumBtag5hadBlepB() const { return hadBJet.bDiscriminator("combinedSecondaryVertexBJetTags")+lepBJet.bDiscriminator("combinedSecondaryVertexBJetTags"); }
  double sumBtag6hadBlepB() const { return hadBJet.bDiscriminator("impactParameterMVABJetTags")+lepBJet.bDiscriminator("impactParameterMVABJetTags"); }

private:

  pat::Jet hadQJet;
  pat::Jet hadQBarJet;
  pat::Jet hadBJet;
  pat::Jet lepBJet;
  pat::MET neutrino;

  math::XYZTLorentzVector lepton;

  math::XYZTLorentzVector hadTop;
  math::XYZTLorentzVector hadW;
  math::XYZTLorentzVector lepTop;
  math::XYZTLorentzVector lepW;

  void deduceMothers();

};

#endif
