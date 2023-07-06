#ifndef FUSION_TRACKER_INCLUDE_DETECTOR_RADAR_DETECTOR_H_
#define FUSION_TRACKER_INCLUDE_DETECTOR_RADAR_DETECTOR_H_
#include "perception/detector/detector.h"
namespace fusion_tracker {
class RadarDetector : public Detector<RadarData> {
 public:
  RadarDetector();
  virtual ~RadarDetector()=default;
  virtual void DetectObjects(std::vector<Detection> &detections);

 private:
};
}  // namespace fusion_tracker
#endif
