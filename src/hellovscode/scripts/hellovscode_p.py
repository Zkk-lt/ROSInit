#! /usr/bin/env python
# encoding: utf-8
#导包
import rospy
#入口
if __name__ == "__main__":
    #初始化ROS 节点
    rospy.init_node("hellovscode_p")
    #输出日志
    rospy.loginfo("Hello VSCode 这是python")