cmake_minimum_required(VERSION 3.0.2)
project(rosbag_cpp)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_BUILD_TYPE DEBUG)

find_package(catkin REQUIRED)
find_package(rosbag_storage REQUIRED)
catkin_package()

add_executable(rosbag_cpp src/rosbag_cpp.cpp)

# Revert these files after finishing with this shit
# /opt/ros/noetic/lib/librosbag_storage.so-old
# /opt/ros/noetic/lib/rosbag-old
# /opt/ros/noetic/include/rosbag-old
# /opt/ros/noetic/share/rosbag-old

target_link_libraries(rosbag_cpp ${rosbag_storage_LIBRARIES})
target_include_directories(rosbag_cpp PUBLIC ${rosbag_storage_INCLUDE_DIRS})
