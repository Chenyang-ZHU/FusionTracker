#ifndef FUSION_TRACKER_INCLUDE_PERCEPTION_FUSE_DETECTOR_H_
#define FUSION_TRACKER_INCLUDE_PERCEPTION_FUSE_DETECTOR_H_
#include <memory>

#include "general_data_struct.h"
#include "perception/camera_detector/camera_detector.h"
#include "perception/detector/detector.h"
#include "perception/lidar_detector/lidar_detector.h"
#include "perception/radar_detector/radar_detector.h"
namespace fusion_tracker {
class FuseDetector {
 public:
  FuseDetector();
  ~FuseDetector() = default;
  void Detect(const FrameData &data, std::vector<Detection> &detections);

 private:
  void CamereDetect(const CameraData &data);
  void LidarDetect(const LidarData &data);
  void RadarDetect(const RadarData &data);
  void Associate(std::vector<Detection> &detections);

  std::unique_ptr<Detector<CameraData>> camera_detector_ ;
  std::unique_ptr<Detector<LidarData>> lidar_detector_ ;
  std::unique_ptr<Detector<RadarData>> radar_detector_ ;
  std::vector<Detection> camera_detections_;
  std::vector<Detection> lidar_detections_;
  std::vector<Detection> radar_detections_;
};
}  // namespace fusion_tracker
#endif
