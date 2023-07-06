#ifndef FUSION_TRACKER_INCLUDE_DETECTOR_H_
#define FUSION_TRACKER_INCLUDE_DETECTOR_H_
#include "general_data_struct.h"
namespace fusion_tracker {
template <class T>
class Detector {
 public:
  Detector()=default;
  virtual ~Detector()=default;
  void GetSensorData(const T &data){}
  virtual void DetectObjects(std::vector<Detection> &detections){}

 private:
  std::queue<T> sensor_data_;  // data waiting to be processed
};
}  // namespace fusion_tracker
#endif
