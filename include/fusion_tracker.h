#ifndef FUSION_TRACKER_INCLUDE_SIMPLETRACKER_H_
#define FUSION_TRACKER_INCLUDE_SIMPLETRACKER_H_
#include "general_data_struct.h"
#include "perception/fuse_dector.h"
#include "tracker/tracker.h"
namespace fusion_tracker {
class FusionTracker {
 public:
  FusionTracker();
  ~FusionTracker() = default;
  void ProcessSingleFrame(const FrameData &frame_data);
  void Visualize();

 private:
  // multi-sensor percetion
  void DetectObjects(const FrameData &frame_data, FrameDetection &detections);
  // multi-object-tracking
  void Track(const FrameDetection &detections);
  void GetTracklets(std::vector<Tracklet> &tracklets);
  FuseDetector fuse_detector_;
  Tracker tracker_;
  std::vector<Detection> objects_;
  // todo: we may also need to have tracklets here to track single-sensor output objects. The tracked objects will be used in fusion;
};

}  // namespace fusion_tracker
#endif
