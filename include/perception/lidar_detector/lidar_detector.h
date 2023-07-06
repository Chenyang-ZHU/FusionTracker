#ifndef FUSION_TRACKER_INCLUDE_DETECTOR_LIDAR_DETECTOR_H_
#define FUSION_TRACKER_INCLUDE_DETECTOR_LIDAR_DETECTOR_H_
#include "perception/detector/detector.h"
namespace fusion_tracker {
class LidarDetector : public Detector<LidarData> {
 public:
  LidarDetector();
  virtual ~LidarDetector() = default;
  virtual void DetectObjects(std::vector<Detection> &detections);

 private:
};
}  // namespace fusion_tracker
#endif
