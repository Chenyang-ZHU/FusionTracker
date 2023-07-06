PROJECT(fusion_track_cpp)
CMAKE_MINIMUM_REQUIRED(VERSION 3.10)
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Wall -O3")
set(CMAKE_CXX_STANDARD 17)

SET(LibName FusionTrackerLib)
SET(ExeName fusion_tracker)

find_package(Eigen3 REQUIRED)
find_package(OpenCV REQUIRED)

include_directories( include )
include_directories( ${OpenCV_INCLUDE_DIRS} )
include_directories(${EIGEN3_INCLUDE_DIR})

file(GLOB_RECURSE tracker_SRC "src/*.cc")
file(GLOB_RECURSE tracker_INC "include/*.h")
add_library(${LibName} ${tracker_SRC} ${tracker_INC})

add_executable(${ExeName} src/main.cc)
TARGET_LINK_LIBRARIES(${ExeName} ${LibName})
