import FWCore.ParameterSet.Config as cms

candidateAssociation = cms.EDFilter("CandViewAssociator",
  ## target collection
  src     =  cms.InputTag("selectedLayer1Jets"),
  ## collection to be matched to the target collection
  matched = cms.InputTag("selectedLayer1Jets"),
  ## maximal delta value for match
  maxDeltaR = cms.double(0.1),
  ## switch to determine whether match ambiguities should be resolved or not
  resolveAmbiguities    = cms.bool(True),
  ## switch to determine whether ambiguities should be resolved by deltaR (match quality) or by pt ordering
  resolveByMatchQuality = cms.bool(True)
)
