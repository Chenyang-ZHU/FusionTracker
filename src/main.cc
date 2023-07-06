

#include <iostream>

#include "fusion_tracker.h"
int main() {
  std::cout << " SimpleTrack C++ Version Implementation! ---By ChenyangZHU"
            << std::endl;
  fusion_tracker::FusionTracker tracker;
  std::vector<fusion_tracker::FrameData> data_set;
  data_set.emplace_back(fusion_tracker::FrameData());
  for (const auto &frame : data_set) {
    tracker.ProcessSingleFrame(frame);
    tracker.Visualize();
  }
}
