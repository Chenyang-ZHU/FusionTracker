#ifndef FUSION_TRACKER_INCLUDE_DETECTOR_CAMERA_DETECTOR_H_
#define FUSION_TRACKER_INCLUDE_DETECTOR_CAMERA_DETECTOR_H_
#include "perception/detector/detector.h"
namespace fusion_tracker {
class CameraDetector : public Detector<CameraData> {
 public:
  CameraDetector();
  virtual ~CameraDetector()=default;
  virtual void DetectObjects(std::vector<Detection> &detections);
  void ImagePreprocess();

 private:
  Pose camera_extrinsics_;  // single camera perception
};
}  // namespace fusion_tracker
#endif
