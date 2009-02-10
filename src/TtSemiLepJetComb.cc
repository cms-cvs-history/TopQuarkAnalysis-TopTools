#include "TopQuarkAnalysis/TopTools/interface/TtSemiLepJetComb.h"
#include "TopQuarkAnalysis/TopTools/interface/TtSemiLepEvtPartons.h"

TtSemiLepJetComb::TtSemiLepJetComb(){}

TtSemiLepJetComb::TtSemiLepJetComb(const std::vector<pat::Jet>& jets, const std::vector<int> cmb, const math::XYZTLorentzVector& lep, const pat::MET& neu)
{ 
  // receive right jet association
  // from jet parton matching
 
  hadQJet     = jets[cmb[TtSemiLepEvtPartons::LightQ   ]];
  hadQBarJet  = jets[cmb[TtSemiLepEvtPartons::LightQBar]];
  hadBJet     = jets[cmb[TtSemiLepEvtPartons::HadB     ]];
  lepBJet     = jets[cmb[TtSemiLepEvtPartons::LepB     ]]; 
  lepton     = lep;
  neutrino   = neu;
  deduceMothers();

}


TtSemiLepJetComb::~TtSemiLepJetComb() 
{
}

void 
TtSemiLepJetComb::deduceMothers()
{
  hadW   = hadQJet.p4() + hadQBarJet.p4();
  lepW   = lepton + neutrino.p4();
  hadTop = hadW + hadBJet.p4();
  lepTop = lepW + lepBJet.p4();
}
