#include <iostream>
#include <rosbag/bag.h>
#include <rosbag/query.h>
#include <rosbag/view.h>
#include <boost/stacktrace.hpp>

int main()
{
    rosbag::Bag bag;
    bag.open("/home/jimmy/bags/_2021-08-14-20-37-01.bag", rosbag::bagmode::Read);
    try
    {
        rosbag::View view(bag, rosbag::TopicQuery("/slam/map"));
    }
    catch (rosbag::BagIOException)
    {
        std::cout << boost::stacktrace::stacktrace();
    }
    bag.close();
    return 0;
}