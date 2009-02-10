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

  double PtHadTop() const { return hadTop.Pt();}
  double EtaHadTop() const { return hadTop.Eta();}
  double PhiHadTop() const { return hadTop.Phi();}
  double ThetaHadTop() const { return hadTop.Theta();}

  double PtLepTop() const { return lepTop.Pt();}
  double EtaLepTop() const { return lepTop.Eta();}
  double PhiLepTop() const { return lepTop.Phi();}
  double ThetaLepTop() const { return lepTop.Theta();}

  double PtHadW() const { return hadW.Pt();}
  double EtaHadW() const { return hadW.Eta();}
  double PhiHadW() const { return hadW.Phi();}
  double ThetaHadW() const { return hadW.Theta();}

  double PtLepW() const { return lepW.Pt();}
  double EtaLepW() const { return lepW.Eta();}
  double PhiLepW() const { return lepW.Phi();}
  double ThetaLepW() const { return lepW.Theta();}

  double PtHadb() const { return hadBJet.p4().Pt();}
  double EtaHadb() const { return hadBJet.p4().Eta();}
  double PhiHadb() const { return hadBJet.p4().Phi();}
  double ThetaHadb() const { return hadBJet.p4().Theta();}

  double PtLepb() const { return lepBJet.p4().Pt();}
  double EtaLepb() const { return lepBJet.p4().Eta();}
  double PhiLepb() const { return lepBJet.p4().Phi();}
  double ThetaLepb() const { return lepBJet.p4().Theta();}

  double Pthadq() const { return hadQJet.p4().Pt();}
  double Etahadq() const { return hadQJet.p4().Eta();}
  double Phihadq() const { return hadQJet.p4().Phi();}
  double Thetahadq() const { return hadQJet.p4().Theta();}

  double PthadqBar() const { return hadQBarJet.p4().Pt();}
  double EtahadqBar() const { return hadQBarJet.p4().Eta();}
  double PhihadqBar() const { return hadQBarJet.p4().Phi();}
  double ThetahadqBar() const { return hadQBarJet.p4().Theta();}

  double Ptlepton() const { return lepton.Pt();}
  double Etalepton() const { return lepton.Eta();}
  double Philepton() const { return lepton.Phi();}
  double Thetalepton() const { return lepton.Theta();}

  double Ptneutrino() const { return neutrino.p4().Pt();}
  double Etaneutrino() const { return neutrino.p4().Eta();}
  double Phineutrino() const { return neutrino.p4().Phi();}
  double Thetaneutrino() const { return neutrino.p4().Theta();}

  //2-particle kinematics
  
  double DeltaRHadTopLepTop() const { return ROOT::Math::VectorUtil::DeltaR(hadTop, lepTop); }
  double DeltaPhiHadTopLepTop() const { return ROOT::Math::VectorUtil::DeltaPhi(hadTop, lepTop); }
  double DeltaThetaHadTopLepTop() const { return ROOT::Math::VectorUtil::Angle(hadTop, lepTop); }
  double DeltaMassHadTopLepTop() const { return hadTop.M() - lepTop.M(); }

  double DeltaRHadTopHadW() const { return ROOT::Math::VectorUtil::DeltaR(hadTop, hadW); }
  double DeltaPhiHadTopHadW() const { return ROOT::Math::VectorUtil::DeltaPhi(hadTop, hadW); }
  double DeltaThetaHadTopHadW() const { return ROOT::Math::VectorUtil::Angle(hadTop, hadW); }

  double DeltaRLepTopLepW() const { return ROOT::Math::VectorUtil::DeltaR(lepTop, lepW); }
  double DeltaPhiLepTopLepW() const { return ROOT::Math::VectorUtil::DeltaPhi(lepTop, lepW); }
  double DeltaThetaLepTopLepW() const { return ROOT::Math::VectorUtil::Angle(lepTop, lepW); }

  double DeltaRHadTopHadb() const { return ROOT::Math::VectorUtil::DeltaR(hadTop, hadBJet.p4()); }
  double DeltaPhiHadTopHadb() const { return ROOT::Math::VectorUtil::DeltaPhi(hadTop, hadBJet.p4()); }
  double DeltaThetaHadTopHadb() const { return ROOT::Math::VectorUtil::Angle(hadTop, hadBJet.p4()); }

  double DeltaRLepTopLepb() const { return ROOT::Math::VectorUtil::DeltaR(lepTop, lepBJet.p4()); }
  double DeltaPhiLepTopLepb() const { return ROOT::Math::VectorUtil::DeltaPhi(lepTop, lepBJet.p4()); }
  double DeltaThetaLepTopLepb() const { return ROOT::Math::VectorUtil::Angle(lepTop, lepBJet.p4()); }
 
  double DeltaRHadWHadb() const { return ROOT::Math::VectorUtil::DeltaR(hadW, hadBJet.p4()); }
  double DeltaPhiHadWHadb() const { return ROOT::Math::VectorUtil::DeltaPhi(hadW, hadBJet.p4()); }
  double DeltaThetaHadWHadb() const { return ROOT::Math::VectorUtil::Angle(hadW, hadBJet.p4()); }

  double DeltaRLepWLepb() const { return ROOT::Math::VectorUtil::DeltaR(lepW, lepBJet.p4()); }
  double DeltaPhiLepWLepb() const { return ROOT::Math::VectorUtil::DeltaPhi(lepW, lepBJet.p4()); }
  double DeltaThetaLepWLepb() const { return ROOT::Math::VectorUtil::Angle(lepW, lepBJet.p4()); }
  
  double DeltaRHadQHadQBar() const { return ROOT::Math::VectorUtil::DeltaR(hadQJet.p4(), hadQBarJet.p4()); }
  double DeltaPhiHadQHadQBar() const { return ROOT::Math::VectorUtil::DeltaPhi(hadQJet.p4(), hadQBarJet.p4()); }
  double DeltaThetaHadQHadQBar() const { return ROOT::Math::VectorUtil::Angle(hadQJet.p4(), hadQBarJet.p4()); }

  double DeltaRLepToplepton() const { return ROOT::Math::VectorUtil::DeltaR(lepTop, lepton); }
  double DeltaPhiLepToplepton() const { return ROOT::Math::VectorUtil::DeltaPhi(lepTop, lepton); }
  double DeltaThetaLepToplepton() const { return ROOT::Math::VectorUtil::Angle(lepTop, lepton); }
 
  double DeltaRLepTopneutrino() const { return ROOT::Math::VectorUtil::DeltaR(lepTop, neutrino.p4()); }
  double DeltaPhiLepTopneutrino() const { 

    //std::cout << "DeltaPhi(lepTop, neutrino.p4()" << ROOT::Math::VectorUtil::DeltaPhi(lepTop, neutrino.p4()) << std::endl;
    //std::cout << "neutrino.p4().Phi()" << neutrino.p4().Phi() << std::endl;
    return ROOT::Math::VectorUtil::DeltaPhi(lepTop, neutrino.p4()); 
  }
  double DeltaThetaLepTopneutrino() const { 
    return ROOT::Math::VectorUtil::Angle(lepTop, neutrino.p4()); 
  }
 
  double DeltaRLepblepton() const { return ROOT::Math::VectorUtil::DeltaR(lepBJet.p4(), lepton); }
  double DeltaPhiLepblepton() const { return ROOT::Math::VectorUtil::DeltaPhi(lepBJet.p4(), lepton); }
  double DeltaThetaLepblepton() const { return ROOT::Math::VectorUtil::Angle(lepBJet.p4(), lepton); }
 
  double DeltaRLepbneutrino() const { return ROOT::Math::VectorUtil::DeltaR(lepBJet.p4(), neutrino.p4()); }
  double DeltaPhiLepbneutrino() const { return ROOT::Math::VectorUtil::DeltaPhi(lepBJet.p4(), neutrino.p4()); }
  double DeltaThetaLepbneutrino() const { return ROOT::Math::VectorUtil::Angle(lepBJet.p4(), neutrino.p4()); }
 
  double DeltaRleptonneutrino() const { return ROOT::Math::VectorUtil::DeltaR(lepton, neutrino.p4()); }
  double DeltaPhileptonneutrino() const { return ROOT::Math::VectorUtil::DeltaPhi(lepton, neutrino.p4()); }
  double DeltaThetaleptonneutrino() const { return ROOT::Math::VectorUtil::Angle(lepton, neutrino.p4()); }
 
  //b-tag information
  double DeltaBtag1hadBlepB() const { return hadBJet.bDiscriminator("trackCountingHighEffBJetTags")+lepBJet.bDiscriminator("trackCountingHighEffBJetTags"); }
  double DeltaBtag2hadBlepB() const { return hadBJet.bDiscriminator("trackCountingHighPurBJetTags")+lepBJet.bDiscriminator("trackCountingHighPurBJetTags"); }
  double DeltaBtag3hadBlepB() const { return hadBJet.bDiscriminator("softMuonBJetTags")+lepBJet.bDiscriminator("softMuonBJetTags"); }
  double DeltaBtag4hadBlepB() const { return hadBJet.bDiscriminator("simpleSecondaryVertexBJetTags")+lepBJet.bDiscriminator("simpleSecondaryVertexBJetTags"); }
  double DeltaBtag5hadBlepB() const { return hadBJet.bDiscriminator("combinedSecondaryVertexBJetTags")+lepBJet.bDiscriminator("combinedSecondaryVertexBJetTags"); }
  double DeltaBtag6hadBlepB() const { return hadBJet.bDiscriminator("impactParameterMVABJetTags")+lepBJet.bDiscriminator("impactParameterMVABJetTags"); }

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
