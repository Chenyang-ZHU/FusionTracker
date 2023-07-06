#include "perception/fuse_dector.h"

namespace fusion_tracker {
FuseDetector::FuseDetector() {
  camera_detector_ =
      std::make_unique<CameraDetector>();
  lidar_detector_ =
      std::make_unique<LidarDetector>();
  radar_detector_ =
      std::make_unique<RadarDetector>();
}

void FuseDetector::Detect(const FrameData &data,
                          std::vector<Detection> &detections) {
  printf("[Detector] generate fusion-perception objects!\n");
}

void FuseDetector::CamereDetect(const CameraData &data) {}
void FuseDetector::LidarDetect(const LidarData &data) {}
void FuseDetector::RadarDetect(const RadarData &data) {}
void FuseDetector::Associate(std::vector<Detection> &detections) {}
}  // namespace fusion_tracker