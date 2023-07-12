

#include <iostream>

#include <torch/torch.h>

#include "fusion_tracker.h"


int main() {
  std::cout << " SimpleTrack C++ Version Implementation! ---By ChenyangZHU"
            << std::endl;
  std::cout << torch::cuda::is_available() << std::endl;
  std::cout << torch::cuda::cudnn_is_available() << std::endl;
  std::cout << torch::cuda::device_count() << std::endl;

  fusion_tracker::FusionTracker tracker;
  std::vector<fusion_tracker::FrameData> data_set;
  data_set.emplace_back(fusion_tracker::FrameData());
  for (const auto &frame : data_set) {
    tracker.ProcessSingleFrame(frame);
    tracker.Visualize();
  }
}
