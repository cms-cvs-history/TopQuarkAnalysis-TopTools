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

  double ptHadB() const { return hadBJet.p4().Pt();}
  double etaHadB() const { return hadBJet.p4().Eta();}
  double phiHadB() const { return hadBJet.p4().Phi();}
  double thetaHadB() const { return hadBJet.p4().Theta();}

  double ptLepB() const { return lepBJet.p4().Pt();}
  double etaLepB() const { return lepBJet.p4().Eta();}
  double phiLepB() const { return lepBJet.p4().Phi();}
  double thetaLepB() const { return lepBJet.p4().Theta();}

  double ptHhadQ() const { return hadQJet.p4().Pt();}
  double etaHadQ() const { return hadQJet.p4().Eta();}
  double phiHadQ() const { return hadQJet.p4().Phi();}
  double thetaHadQ() const { return hadQJet.p4().Theta();}

  double ptHadQBar() const { return hadQBarJet.p4().Pt();}
  double etaHadQBar() const { return hadQBarJet.p4().Eta();}
  double phiHadQBar() const { return hadQBarJet.p4().Phi();}
  double thetaHadQBar() const { return hadQBarJet.p4().Theta();}

  double ptLepton() const { return lepton.Pt();}
  double etaLepton() const { return lepton.Eta();}
  double phiLepton() const { return lepton.Phi();}
  double thetaLepton() const { return lepton.Theta();}

  double ptNeutrino() const { return neutrino.p4().Pt();}
  double etaNeutrino() const { return neutrino.p4().Eta();}
  double phiNeutrino() const { return neutrino.p4().Phi();}
  double thetaNeutrino() const { return neutrino.p4().Theta();}

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

  double deltaRHadTopHadB() const { return ROOT::Math::VectorUtil::DeltaR(hadTop, hadBJet.p4()); }
  double deltaPhiHadTopHadB() const { return ROOT::Math::VectorUtil::DeltaPhi(hadTop, hadBJet.p4()); }
  double deltaThetaHadTopHadB() const { return ROOT::Math::VectorUtil::Angle(hadTop, hadBJet.p4()); }

  double deltaRLepTopLepB() const { return ROOT::Math::VectorUtil::DeltaR(lepTop, lepBJet.p4()); }
  double deltaPhiLepTopLepB() const { return ROOT::Math::VectorUtil::DeltaPhi(lepTop, lepBJet.p4()); }
  double deltaThetaLepTopLepB() const { return ROOT::Math::VectorUtil::Angle(lepTop, lepBJet.p4()); }
 
  double deltaRHadWHadB() const { return ROOT::Math::VectorUtil::DeltaR(hadW, hadBJet.p4()); }
  double deltaPhiHadWHadB() const { return ROOT::Math::VectorUtil::DeltaPhi(hadW, hadBJet.p4()); }
  double deltaThetaHadWHadB() const { return ROOT::Math::VectorUtil::Angle(hadW, hadBJet.p4()); }

  double deltaRLepWLepB() const { return ROOT::Math::VectorUtil::DeltaR(lepW, lepBJet.p4()); }
  double deltaPhiLepWLepB() const { return ROOT::Math::VectorUtil::DeltaPhi(lepW, lepBJet.p4()); }
  double deltaThetaLepWLepB() const { return ROOT::Math::VectorUtil::Angle(lepW, lepBJet.p4()); }
  
  double deltaRHadQHadQBar() const { return ROOT::Math::VectorUtil::DeltaR(hadQJet.p4(), hadQBarJet.p4()); }
  double deltaPhiHadQHadQBar() const { return ROOT::Math::VectorUtil::DeltaPhi(hadQJet.p4(), hadQBarJet.p4()); }
  double deltaThetaHadQHadQBar() const { return ROOT::Math::VectorUtil::Angle(hadQJet.p4(), hadQBarJet.p4()); }

  double deltaRLepTopLepton() const { return ROOT::Math::VectorUtil::DeltaR(lepTop, lepton); }
  double deltaPhiLepTopLepton() const { return ROOT::Math::VectorUtil::DeltaPhi(lepTop, lepton); }
  double deltaThetaLepTopLepton() const { return ROOT::Math::VectorUtil::Angle(lepTop, lepton); }
 
  double deltaRLepTopNeutrino() const { return ROOT::Math::VectorUtil::DeltaR(lepTop, neutrino.p4()); }
  double deltaPhiLepTopNeutrino() const { return ROOT::Math::VectorUtil::DeltaPhi(lepTop, neutrino.p4()); }
  double deltaThetaLepTopNeutrino() const { return ROOT::Math::VectorUtil::Angle(lepTop, neutrino.p4()); }
 
  double deltaRLepBLepton() const { return ROOT::Math::VectorUtil::DeltaR(lepBJet.p4(), lepton); }
  double deltaPhiLepBLepton() const { return ROOT::Math::VectorUtil::DeltaPhi(lepBJet.p4(), lepton); }
  double deltaThetaLepBLepton() const { return ROOT::Math::VectorUtil::Angle(lepBJet.p4(), lepton); }
 
  double deltaRLepBNneutrino() const { return ROOT::Math::VectorUtil::DeltaR(lepBJet.p4(), neutrino.p4()); }
  double deltaPhiLepBNeutrino() const { return ROOT::Math::VectorUtil::DeltaPhi(lepBJet.p4(), neutrino.p4()); }
  double deltaThetaLepBNeutrino() const { return ROOT::Math::VectorUtil::Angle(lepBJet.p4(), neutrino.p4()); }
 
  double deltaRLeptonNeutrino() const { return ROOT::Math::VectorUtil::DeltaR(lepton, neutrino.p4()); }
  double deltaPhiLeptonNeutrino() const { return ROOT::Math::VectorUtil::DeltaPhi(lepton, neutrino.p4()); }
  double deltaThetaLeptonNeutrino() const { return ROOT::Math::VectorUtil::Angle(lepton, neutrino.p4()); }
 
  //Extra variables
  double relPtHadTop() const { 
    std::cout << hadTop.Pt()/(hadTop.Pt()+(hadQJet.p4()+hadQBarJet.p4()+lepBJet.p4()).Pt()+(hadQJet.p4()+hadBJet.p4()+lepBJet.p4()).Pt()+(hadBJet.p4()+hadQBarJet.p4()+lepBJet.p4()).Pt()) <<  std::endl;
    return  hadTop.Pt()/(hadTop.Pt()+(hadQJet.p4()+hadQBarJet.p4()+lepBJet.p4()).Pt()+(hadQJet.p4()+hadBJet.p4()+lepBJet.p4()).Pt()+(hadBJet.p4()+hadQBarJet.p4()+lepBJet.p4()).Pt()); }
  double relPtBJets() const { 
    std::cout << (hadBJet.p4().Pt()+lepBJet.p4().Pt())/(hadQBarJet.p4().Pt()+hadQJet.p4().Pt()) <<  std::endl;;
    return (hadBJet.p4().Pt()+lepBJet.p4().Pt())/(hadQBarJet.p4().Pt()+hadQJet.p4().Pt());
  } 


  //b-tag information
  double sumBTag1HadBLepB() const { return hadBJet.bDiscriminator("trackCountingHighEffBJetTags")+lepBJet.bDiscriminator("trackCountingHighEffBJetTags"); }
  double sumBTag2HadBLepB() const { return hadBJet.bDiscriminator("trackCountingHighPurBJetTags")+lepBJet.bDiscriminator("trackCountingHighPurBJetTags"); }
  double sumBTag3HadBLepB() const { return hadBJet.bDiscriminator("softMuonBJetTags")+lepBJet.bDiscriminator("softMuonBJetTags"); }
  double sumBTag4HadBLepB() const { return hadBJet.bDiscriminator("simpleSecondaryVertexBJetTags")+lepBJet.bDiscriminator("simpleSecondaryVertexBJetTags"); }
  double sumBTag5HadBLepB() const { return hadBJet.bDiscriminator("combinedSecondaryVertexBJetTags")+lepBJet.bDiscriminator("combinedSecondaryVertexBJetTags"); }
  double sumBTag6HadBLepB() const { return hadBJet.bDiscriminator("impactParameterMVABJetTags")+lepBJet.bDiscriminator("impactParameterMVABJetTags"); }

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
