#include "fusion_tracker.h"
namespace fusion_tracker {
FusionTracker::FusionTracker() {}

void FusionTracker::ProcessSingleFrame(const FrameData &frame_data) {
  std::vector<Detection> fused_detections;
  std::vector<Detection> objects;
  fuse_detector_.Detect(frame_data, fused_detections);
  tracker_.ProcessNewObservations(fused_detections, objects_);
}
void FusionTracker::Visualize() {
  printf("[visualize] visualize fusion-perception objects\n!");
}

void FusionTracker::DetectObjects(const FrameData &frame_data,
                                  FrameDetection &detections) {}
void FusionTracker::Track(const FrameDetection &detections) {}
void FusionTracker::GetTracklets(std::vector<Tracklet> &tracklets) {}
}  // namespace fusion_tracker