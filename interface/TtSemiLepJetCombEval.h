#ifndef TtSemiLepJetCombEval_h
#define TtSemiLepJetCombEval_h

#include "Math/VectorUtil.h"
#include "TMath.h"

#include "PhysicsTools/MVAComputer/interface/MVAComputerCache.h"
#include "PhysicsTools/MVATrainer/interface/MVATrainer.h"

#include "DataFormats/PatCandidates/interface/Jet.h"
#include "TopQuarkAnalysis/TopTools/interface/TtSemiLepJetComb.h"

inline double evaluateTtSemiLepJetComb(PhysicsTools::MVAComputerCache& mvaComputer,
				       const TtSemiLepJetComb& jetComb,
				       const bool training = false, const bool trueCombi = false)
{
  std::vector<PhysicsTools::Variable::Value> values;
  
  if(training) values.push_back( PhysicsTools::Variable::Value(PhysicsTools::MVATrainer::kTargetId, trueCombi) );
  
  values.push_back( PhysicsTools::Variable::Value("massHadW",   jetComb.massHadW()   ) );
  values.push_back( PhysicsTools::Variable::Value("massHadTop",   jetComb.massHadTop()   ) );
  values.push_back( PhysicsTools::Variable::Value("massLepW",   jetComb.massLepW()   ) );
  values.push_back( PhysicsTools::Variable::Value("massLepTop",   jetComb.massLepTop()   ) );
  values.push_back( PhysicsTools::Variable::Value("PtHadTop",   jetComb.PtHadTop()   ) );
  values.push_back( PhysicsTools::Variable::Value("EtaHadTop",   jetComb.EtaHadTop()   ) );
  values.push_back( PhysicsTools::Variable::Value("PhiHadTop",   jetComb.PhiHadTop()   ) );
  values.push_back( PhysicsTools::Variable::Value("ThetaHadTop",   jetComb.ThetaHadTop()   ) );
  values.push_back( PhysicsTools::Variable::Value("PtLepTop",   jetComb.PtLepTop()   ) );
  values.push_back( PhysicsTools::Variable::Value("EtaLepTop",   jetComb.EtaLepTop()   ) );
  values.push_back( PhysicsTools::Variable::Value("PhiLepTop",   jetComb.PhiLepTop()   ) );
  values.push_back( PhysicsTools::Variable::Value("ThetaLepTop",   jetComb.ThetaLepTop()   ) );
  values.push_back( PhysicsTools::Variable::Value("PtHadW",   jetComb.PtHadW()   ) );
  values.push_back( PhysicsTools::Variable::Value("EtaHadW",   jetComb.EtaHadW()   ) );
  values.push_back( PhysicsTools::Variable::Value("PhiHadW",   jetComb.PhiHadW()   ) );
  values.push_back( PhysicsTools::Variable::Value("ThetaHadW",   jetComb.ThetaHadW()   ) );
  values.push_back( PhysicsTools::Variable::Value("PtLepW",   jetComb.PtLepW()   ) );
  values.push_back( PhysicsTools::Variable::Value("EtaLepW",   jetComb.EtaLepW()   ) );
  values.push_back( PhysicsTools::Variable::Value("PhiLepW",   jetComb.PhiLepW()   ) );
  values.push_back( PhysicsTools::Variable::Value("ThetaLepW",   jetComb.ThetaLepW()   ) );
  values.push_back( PhysicsTools::Variable::Value("PtHadb",   jetComb.PtHadb()   ) );
  values.push_back( PhysicsTools::Variable::Value("EtaHadb",   jetComb.EtaHadb()   ) );
  values.push_back( PhysicsTools::Variable::Value("PhiHadb",   jetComb.PhiHadb()   ) );
  values.push_back( PhysicsTools::Variable::Value("ThetaHadb",   jetComb.ThetaHadb()   ) );
  values.push_back( PhysicsTools::Variable::Value("PtLepb",   jetComb.PtLepb()   ) );
  values.push_back( PhysicsTools::Variable::Value("EtaLepb",   jetComb.EtaLepb()   ) );
  values.push_back( PhysicsTools::Variable::Value("PhiLepb",   jetComb.PhiLepb()   ) );
  values.push_back( PhysicsTools::Variable::Value("ThetaLepb",   jetComb.ThetaLepb()   ) );
  values.push_back( PhysicsTools::Variable::Value("Pthadq",   jetComb.Pthadq()   ) );
  values.push_back( PhysicsTools::Variable::Value("Etahadq",   jetComb.Etahadq()   ) );
  values.push_back( PhysicsTools::Variable::Value("Phihadq",   jetComb.Phihadq()   ) );
  values.push_back( PhysicsTools::Variable::Value("Thetahadq",   jetComb.Thetahadq()   ) );
  values.push_back( PhysicsTools::Variable::Value("PthadqBar",   jetComb.PthadqBar()   ) );
  values.push_back( PhysicsTools::Variable::Value("EtahadqBar",   jetComb.EtahadqBar()   ) );
  values.push_back( PhysicsTools::Variable::Value("PhihadqBar",   jetComb.PhihadqBar()   ) );
  values.push_back( PhysicsTools::Variable::Value("ThetahadqBar",   jetComb.ThetahadqBar()   ) );
  values.push_back( PhysicsTools::Variable::Value("Ptlepton",   jetComb.Ptlepton()   ) );
  values.push_back( PhysicsTools::Variable::Value("Etalepton",   jetComb.Etalepton()   ) );
  values.push_back( PhysicsTools::Variable::Value("Philepton",   jetComb.Philepton()   ) );
  values.push_back( PhysicsTools::Variable::Value("Thetalepton",   jetComb.Thetalepton()   ) );
  values.push_back( PhysicsTools::Variable::Value("Ptneutrino",   jetComb.Ptneutrino()   ) );
  values.push_back( PhysicsTools::Variable::Value("Etaneutrino",   jetComb.Etaneutrino()   ) );
  values.push_back( PhysicsTools::Variable::Value("Phineutrino",   jetComb.Phineutrino()   ) );
  values.push_back( PhysicsTools::Variable::Value("Thetaneutrino",   jetComb.Thetaneutrino()   ) );
  values.push_back( PhysicsTools::Variable::Value("DeltaRHadTopLepTop",   jetComb.DeltaRHadTopLepTop()   ) );
  values.push_back( PhysicsTools::Variable::Value("DeltaPhiHadTopLepTop",   jetComb.DeltaPhiHadTopLepTop()   ) );
  values.push_back( PhysicsTools::Variable::Value("DeltaThetaHadTopLepTop",   jetComb.DeltaThetaHadTopLepTop()   ) );
  values.push_back( PhysicsTools::Variable::Value("DeltaMassHadTopLepTop",   jetComb.DeltaMassHadTopLepTop()   ) );
  values.push_back( PhysicsTools::Variable::Value("DeltaRHadTopHadW",   jetComb.DeltaRHadTopHadW()   ) );
  values.push_back( PhysicsTools::Variable::Value("DeltaPhiHadTopHadW",   jetComb.DeltaPhiHadTopHadW()   ) );
  values.push_back( PhysicsTools::Variable::Value("DeltaThetaHadTopHadW",   jetComb.DeltaThetaHadTopHadW()   ) );
  values.push_back( PhysicsTools::Variable::Value("DeltaRLepTopLepW",   jetComb.DeltaRLepTopLepW()   ) );
  values.push_back( PhysicsTools::Variable::Value("DeltaPhiLepTopLepW",   jetComb.DeltaPhiLepTopLepW()   ) );
  values.push_back( PhysicsTools::Variable::Value("DeltaThetaLepTopLepW",   jetComb.DeltaThetaLepTopLepW()   ) );
  values.push_back( PhysicsTools::Variable::Value("DeltaRHadTopHadb",   jetComb.DeltaRHadTopHadb()   ) );
  values.push_back( PhysicsTools::Variable::Value("DeltaPhiHadTopHadb",   jetComb.DeltaPhiHadTopHadb()   ) );
  values.push_back( PhysicsTools::Variable::Value("DeltaThetaHadTopHadb",   jetComb.DeltaThetaHadTopHadb()   ) );
  values.push_back( PhysicsTools::Variable::Value("DeltaRLepTopLepb",   jetComb.DeltaRLepTopLepb()   ) );
  values.push_back( PhysicsTools::Variable::Value("DeltaPhiLepTopLepb",   jetComb.DeltaPhiLepTopLepb()   ) );
  values.push_back( PhysicsTools::Variable::Value("DeltaThetaLepTopLepb",   jetComb.DeltaThetaLepTopLepb()   ) );
  values.push_back( PhysicsTools::Variable::Value("DeltaRHadWHadb",   jetComb.DeltaRHadWHadb()   ) );
  values.push_back( PhysicsTools::Variable::Value("DeltaPhiHadWHadb",   jetComb.DeltaPhiHadWHadb()   ) );
  values.push_back( PhysicsTools::Variable::Value("DeltaThetaHadWHadb",   jetComb.DeltaThetaHadWHadb()   ) );
  values.push_back( PhysicsTools::Variable::Value("DeltaRLepWLepb",   jetComb.DeltaRLepWLepb()   ) );
  values.push_back( PhysicsTools::Variable::Value("DeltaPhiLepWLepb",   jetComb.DeltaPhiLepWLepb()   ) );
  values.push_back( PhysicsTools::Variable::Value("DeltaThetaLepWLepb",   jetComb.DeltaThetaLepWLepb()   ) );
  values.push_back( PhysicsTools::Variable::Value("DeltaRHadQHadQBar",   jetComb.DeltaRHadQHadQBar()   ) );
  values.push_back( PhysicsTools::Variable::Value("DeltaPhiHadQHadQBar",   jetComb.DeltaPhiHadQHadQBar()   ) );
  values.push_back( PhysicsTools::Variable::Value("DeltaThetaHadQHadQBar",   jetComb.DeltaThetaHadQHadQBar()   ) );
  values.push_back( PhysicsTools::Variable::Value("DeltaRLepToplepton",   jetComb.DeltaRLepToplepton()   ) );
  values.push_back( PhysicsTools::Variable::Value("DeltaPhiLepToplepton",   jetComb.DeltaPhiLepToplepton()   ) );
  values.push_back( PhysicsTools::Variable::Value("DeltaThetaLepToplepton",   jetComb.DeltaThetaLepToplepton()   ) );
  values.push_back( PhysicsTools::Variable::Value("DeltaRLepTopneutrino",   jetComb.DeltaRLepTopneutrino()   ) );
  values.push_back( PhysicsTools::Variable::Value("DeltaPhiLepTopneutrino",   jetComb.DeltaPhiLepTopneutrino()   ) );
  values.push_back( PhysicsTools::Variable::Value("DeltaThetaLepTopneutrino",   jetComb.DeltaThetaLepTopneutrino()   ) );
  values.push_back( PhysicsTools::Variable::Value("DeltaRLepblepton",   jetComb.DeltaRLepblepton()   ) );
  values.push_back( PhysicsTools::Variable::Value("DeltaPhiLepblepton",   jetComb.DeltaPhiLepblepton()   ) );
  values.push_back( PhysicsTools::Variable::Value("DeltaThetaLepblepton",   jetComb.DeltaThetaLepblepton()   ) );
  values.push_back( PhysicsTools::Variable::Value("DeltaRLepbneutrino",   jetComb.DeltaRLepbneutrino()   ) );
  values.push_back( PhysicsTools::Variable::Value("DeltaPhiLepbneutrino",   jetComb.DeltaPhiLepbneutrino()   ) );
  values.push_back( PhysicsTools::Variable::Value("DeltaThetaLepbneutrino",   jetComb.DeltaThetaLepbneutrino()   ) );
  values.push_back( PhysicsTools::Variable::Value("DeltaRleptonneutrino",   jetComb.DeltaRleptonneutrino()   ) );
  values.push_back( PhysicsTools::Variable::Value("DeltaPhileptonneutrino",   jetComb.DeltaPhileptonneutrino()   ) );
  values.push_back( PhysicsTools::Variable::Value("DeltaThetaleptonneutrino",   jetComb.DeltaThetaleptonneutrino()   ) );
  values.push_back( PhysicsTools::Variable::Value("DeltaBtag1hadBlepB",   jetComb.DeltaBtag1hadBlepB()   ) );
  values.push_back( PhysicsTools::Variable::Value("DeltaBtag2hadBlepB",   jetComb.DeltaBtag2hadBlepB()   ) );
  values.push_back( PhysicsTools::Variable::Value("DeltaBtag3hadBlepB",   jetComb.DeltaBtag3hadBlepB()   ) );
  values.push_back( PhysicsTools::Variable::Value("DeltaBtag4hadBlepB",   jetComb.DeltaBtag4hadBlepB()   ) );
  values.push_back( PhysicsTools::Variable::Value("DeltaBtag5hadBlepB",   jetComb.DeltaBtag5hadBlepB()   ) );
  values.push_back( PhysicsTools::Variable::Value("DeltaBtag6hadBlepB",   jetComb.DeltaBtag6hadBlepB()   ) );

  return mvaComputer->eval( values );
}

#endif
