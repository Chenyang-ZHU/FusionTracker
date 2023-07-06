#include "tracker/tracker.h"
namespace fusion_tracker {
Tracker::Tracker() {}
void Tracker::ProcessNewObservations(const std::vector<Detection> &observations,
                                     std::vector<Detection> &objects) {
  Predict();
  Update(observations);
  printf("[Tracker] generate fusion-perception objects!\n");
}

void Tracker::Predict() { printf("[Tracker] predict on last-frame result!\n"); }
void Tracker::Update(const std::vector<Detection> &observations) {
  printf("[Tracker] tracking current frame detection!\n");
}

}  // namespace fusion_tracker