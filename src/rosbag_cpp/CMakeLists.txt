cmake_minimum_required(VERSION 3.0.2)
project(rosbag_cpp)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(catkin REQUIRED)
find_package(rosbag_storage REQUIRED)
catkin_package()

add_executable(rosbag_cpp src/rosbag_cpp.cpp)

message("-----------> ${rosbag_storage_INCLUDE_DIRS}")

target_link_libraries(rosbag_cpp rosbag_storage)
target_include_directories(rosbag_cpp PUBLIC "/home/jimmy/rosbag-cpp/src/rosbag_storage/include")