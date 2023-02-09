#include <iostream>
#include <rosbag/bag.h>
#include <rosbag/query.h>

int main() {
    rosbag::Bag bag;
    bag.open("/root/bags/example-3.bag", rosbag::bagmode::Read);
    rosbag::View view(bag, rosbag::TopicQuery("numbers"));
    bag.close();
    return 0;
}