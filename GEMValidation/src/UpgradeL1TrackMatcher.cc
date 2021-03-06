#include "GEMCode/GEMValidation/interface/UpgradeL1TrackMatcher.h"
#include "DataFormats/Math/interface/deltaR.h"
#include "DataFormats/Math/interface/deltaPhi.h"

#include "TLorentzVector.h"
#include <map>

using namespace std;

UpgradeL1TrackMatcher::UpgradeL1TrackMatcher(
    UpgradeL1MuMatcher& matcher) :
    //edm::EDGetTokenT<L1TTTrackCollectionType>& trackInputLabel,
    //edm::EDGetTokenT<l1t::L1TkMuonParticleCollection>& trackMuonInputLabel) :
  BaseMatcher(matcher.trk(),
              matcher.vtx(),
              matcher.conf(),
              matcher.event(),
              matcher.eventSetup())
  , matcher_(&matcher)
{

  /*
  clear();

  // tracks produced by L1Tracker
  edm::Handle<L1TTTrackCollectionType> hl1Tracks;
  if (gemvalidation::getByToken(trackInputLabel,hl1Tracks, event()))
    matchL1TrackToSimTrack(*hl1Tracks.product());
  else
    std::cout  <<"failed readout L1Tracks " << std::endl;

  edm::Handle<l1t::L1TkMuonParticleCollection> hl1TrackMuons;
  if (gemvalidation::getByToken(trackMuonInputLabel,hl1TrackMuons, event()))
    matchTrackMuonToSimTrack(*hl1TrackMuons.product());
  else
    std::cout  <<"failed readout L1Tracks " << std::endl;
    */
}


UpgradeL1TrackMatcher::~UpgradeL1TrackMatcher()
{
}
/*
void
UpgradeL1TrackMatcher::clear()
{
  bestTrackMuon_ = nullptr;
  bestTrack_ = nullptr;
}

void
UpgradeL1TrackMatcher::matchL1TrackToSimTrack(const L1TTTrackCollectionType& tracks)
{
  // match the closest track in dR space

  const double sim_eta = trk().momentum().eta();
  const double sim_phi = trk().momentum().phi();
  // cout<<"sim_eta "<<sim_eta<<endl;
  // cout<<"sim_phi "<<sim_phi<<endl;

  double bestdR  = 999;
  int bestTrackIndex = -1;

  for (unsigned int j=0; j<tracks.size(); ++j) {
    const auto& l1Tk = tracks[j];
    const double l1Tk_eta = l1Tk.getMomentum().eta();
    const double l1Tk_phi = l1Tk.getMomentum().barePhi();
    const double dR_l1Tk = reco::deltaR(l1Tk_eta, l1Tk_phi,
                                        sim_eta, sim_phi);
    // cout<<"Track "<<j<<endl;
    // cout<<"l1Tk_eta "<<l1Tk_eta<<endl;
    // cout<<"l1Tk_phi "<<l1Tk_phi<<endl;

    if (dR_l1Tk < bestdR) {
      bestdR = dR_l1Tk;
      bestTrackIndex = j;
    }
  }
  if (bestTrackIndex != -1) {
    bestTrack_ = const_cast<L1TTTrackType*>(&tracks[bestTrackIndex]);
    // cout<<"Best Track "<<bestTrackIndex<<endl;
    // cout<<"Best l1Tk_eta "<<bestTrack_->getMomentum().eta()<<endl;
    // cout<<"Best l1Tk_phi "<<bestTrack_->getMomentum().barePhi()<<endl;
  }
}

void
UpgradeL1TrackMatcher::matchTrackMuonToSimTrack(const l1t::L1TkMuonParticleCollection& trackmuons)
{
  if (matcher_->bestGMTCand()) {
    const double best_eta = matcher_->bestGMTCand()->eta();
    const double best_phi = matcher_->bestGMTCand()->phi();
    std::cout << "Best matching L1Mu eta " << best_eta << std::endl;
    std::cout << "Best matching L1Mu phi " << best_phi << std::endl;

    // matching depends on the matched track and the matched muon
    for (const auto& trackmuon : trackmuons) {
      const double muon_eta = trackmuon.getMuRef()->eta();
      const double muon_phi = trackmuon.getMuRef()->phi();
      std::cout << "\tcandidate L1TkMu eta " << muon_eta << std::endl;
      std::cout << "\tcandidate L1TkMu phi " << muon_phi << std::endl;


      if (std::abs(best_eta - muon_eta)<0.01 and std::abs(best_phi - muon_phi)<0.01) {
        bestTrackMuon_ = const_cast<l1t::L1TkMuonParticle*>(&trackmuon);
        const double l1Tk_eta = trackmuon.getTrkPtr()->getMomentum().eta();
        const double l1Tk_phi = trackmuon.getTrkPtr()->getMomentum().barePhi();

        cout<<"\tBest l1Tk_eta "<<l1Tk_eta<<endl;
        cout<<"\tBest l1Tk_phi "<<l1Tk_phi<<endl;
        cout<<"\tBest muon_eta "<<bestTrackMuon_->getMuRef()->eta()<<endl;
        cout<<"\tBest muon_phi "<<bestTrackMuon_->getMuRef()->phi()<<endl;
        const double dR_True = reco::deltaR(bestTrackMuon_->getMuRef()->eta(),
                                            (float)bestTrackMuon_->getMuRef()->phi(),
                                            propagatedPositionSt2().eta(),
                                            (float)propagatedPositionSt2().phi());
        cout<<"\tTrue muon_eta "<<propagatedPositionSt2().eta()<<endl;
        cout<<"\tTrue muon_phi "<<propagatedPositionSt2().phi()<<endl;
        cout<<"\tDeltaR " << dR_True << endl;
        //      break;
      }
    }
  }
  else{
    std::cout << "No Best matching L1Mu" << std::endl;
  }
}
*/
