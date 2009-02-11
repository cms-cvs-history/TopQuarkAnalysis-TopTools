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
  values.push_back( PhysicsTools::Variable::Value("deltaThetaHadWHadb",   jetComb.deltaThetaHadWHadb()   ) );
  values.push_back( PhysicsTools::Variable::Value("deltaRLepblepton",   jetComb.deltaRLepblepton()   ) );
  values.push_back( PhysicsTools::Variable::Value("deltaThetaHadTopLepTop",   jetComb.deltaThetaHadTopLepTop()   ) );
  values.push_back( PhysicsTools::Variable::Value("massHadW",   jetComb.massHadW()   ) );
  values.push_back( PhysicsTools::Variable::Value("massHadTop",   jetComb.massHadTop()   ) );
  values.push_back( PhysicsTools::Variable::Value("massLepW",   jetComb.massLepW()   ) );
  values.push_back( PhysicsTools::Variable::Value("massLepTop",   jetComb.massLepTop()   ) );
  values.push_back( PhysicsTools::Variable::Value("deltaMassHadTopLepTop",   jetComb.deltaMassHadTopLepTop()   ) );
  values.push_back( PhysicsTools::Variable::Value("sumBtag1hadBlepB",   jetComb.sumBtag1hadBlepB()   ) );


  return mvaComputer->eval( values );
}

#endif
