#ifndef FUSION_TRACKER_INCLUDE_GENERAL_DATA_STRUCT_H_
#define FUSION_TRACKER_INCLUDE_GENERAL_DATA_STRUCT_H_
#include <queue>
#include <vector>

#include "eigen3/Eigen/Dense"
#include "stdint.h"
namespace fusion_tracker {

enum class SensorType { LIDAR = 0, CAMERA, RADAR };
enum class ObjectType { CAR = 0, TRUCK, PEDSTRAIN };
struct Pose {
  Eigen::Matrix3d R;
  Eigen::Vector3d t;
};

struct CameraData {
  int64_t timestamp;
};
struct LidarData {
  int64_t timestamp;
};
struct RadarData {
  int64_t timestamp;
};
// single frame data
struct FrameData {
  int64_t timestamp;  // united timestamp
  bool receive_camera = false;
  CameraData camera_Data;
  bool receive_lidar = false;
  LidarData lidar_Data;
  bool receive_radar = false;
  RadarData radar_Data;
};

struct Detection {
  SensorType sensor_type;
  ObjectType object_type;
  double x;  // center x
  double y;  // center y
  double z;  // center z
  double w;  // object width
  double h;  // object height
  double l;  // object length
  double orientation;
  double probability;
};
struct FrameDetection {
  int64_t timestamp;
  Pose ego_pose;
  std::vector<Detection> detections;
};

}  // namespace fusion_tracker
#endif