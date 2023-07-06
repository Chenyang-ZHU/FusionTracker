#ifndef FUSION_TRACKER_INCLUDE_TRACKER_H_
#define FUSION_TRACKER_INCLUDE_TRACKER_H_
#include "general_data_struct.h"
#include "tracklet.h"
namespace fusion_tracker {
class Tracker {
 public:
  Tracker();
  ~Tracker() = default;
  // use new observations and tracklets to generate tracked objects
  void ProcessNewObservations(const std::vector<Detection> &observations,
                              std::vector<Detection> &objects);

 private:
  void Predict();
  void Update(const std::vector<Detection> &observations);
};
}  // namespace fusion_tracker
#endif
