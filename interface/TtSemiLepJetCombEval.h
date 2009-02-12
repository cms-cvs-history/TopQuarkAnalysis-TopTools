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
  
  values.push_back( PhysicsTools::Variable::Value("deltaThetaHadQHadQBar",   jetComb.deltaThetaHadQHadQBar()   ) );
  values.push_back( PhysicsTools::Variable::Value("deltaThetaHadWHadB",   jetComb.deltaThetaHadWHadB()   ) );
  values.push_back( PhysicsTools::Variable::Value("deltaRLepBLepton",   jetComb.deltaRLepBLepton()   ) );
  values.push_back( PhysicsTools::Variable::Value("deltaThetaHadTopLepTop",   jetComb.deltaThetaHadTopLepTop()   ) );
  values.push_back( PhysicsTools::Variable::Value("massHadW",   jetComb.massHadW()   ) );
  values.push_back( PhysicsTools::Variable::Value("massHadTop",   jetComb.massHadTop()   ) );
  values.push_back( PhysicsTools::Variable::Value("massLepW",   jetComb.massLepW()   ) );
  values.push_back( PhysicsTools::Variable::Value("massLepTop",   jetComb.massLepTop()   ) );
  values.push_back( PhysicsTools::Variable::Value("deltaMassHadTopLepTop",   jetComb.deltaMassHadTopLepTop()   ) );

  values.push_back( PhysicsTools::Variable::Value("relPtHadTop",   jetComb.relPtHadTop()   ) );
  values.push_back( PhysicsTools::Variable::Value("relPtBJets",   jetComb.relPtBJets()   ) );
  values.push_back( PhysicsTools::Variable::Value("sumBTag1HadBLepB",   jetComb.sumBTag1HadBLepB()   ) );


  return mvaComputer->eval( values );
}

#endif
