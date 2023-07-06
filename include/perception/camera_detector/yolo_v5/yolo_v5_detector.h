#ifndef FUSION_TRACKER_INCLUDE_PERCEPTION_CAMERA_DETECTOR_YOLO_V5_DETECTOR_H_
#define FUSION_TRACKER_INCLUDE_PERCEPTION_CAMERA_DETECTOR_YOLO_V5_DETECTOR_H_
#include "opencv2/core/hal/interface.h"
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc.hpp>
#include <fstream>
#include <sstream>

#include "general_data_struct.h"

namespace fusion_tracker {

class CameraDetectResult
{
public:
    uint64_t timestamp;
    ObjectType type;
    float confidence;
    cv::Rect_<float> box;
};


class YOLOv5Detector
{
public:
    void init(std::string onnxpath);
    void detect(cv::Mat & frame, std::vector<CameraDetectResult> &result);
     std::vector<std::string> classes_;
     void draw_frame(cv::Mat & frame, std::vector<CameraDetectResult> &results);
private:

    cv::dnn::Net net;

    const float confidence_threshold_ =0.25f;
    const float nms_threshold_ = 0.4f;

    const int model_input_width_ = 640;
    const int model_input_height_ = 640;

};
}
#endif