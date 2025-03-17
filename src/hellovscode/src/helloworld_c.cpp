//1.包含ros头文件
#include "ros/ros.h"
int main(int argc, char *argv[])
{
    //解决乱码问题
    // setlocale(LC_ALL,"");
    setlocale(LC_CTYPE,"zh_CN.UTF-8");
    ros::init(argc,argv,"hello_c");
    ROS_INFO("haha,测试");
    return 0;
}
