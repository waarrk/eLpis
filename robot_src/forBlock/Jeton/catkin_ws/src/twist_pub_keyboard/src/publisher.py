#! /usr/bin/env python
import rospy
from geometry_msgs.msg import Twist

def talker():
    vel_x = rospy.get_param('~vel_x', 0.5)
    vel_rot = rospy.get_param('~vel_rot', 1.0)

    pub = rospy.Publisher('cmd_vel', Twist, queue_size=10)
    rospy.init_node('twist_pub_keyboard', anonymous=True)
    rate = rospy.Rate(10)
    while not rospy.is_shutdown():
        vel = Twist()
        
        direction = raw_input('f: forward, b: backward, l: left, r:right s:stop > ')
        if 'f' in direction:
            vel.linear.x = vel_x
        if 'b' in direction:
            vel.linear.x = -vel_x
        if 'l' in direction:
            vel.angular.z = vel_rot
        if 'r' in direction:
            vel.angular.z = -vel_rot
        if 's' in direction:
            vel.linear.x = 0.0
            vel.angular.z = 0.0
        if 'q' in direction:
            break
        print(vel)
        for i in range(10):
            pub.publish(vel)
            rate.sleep()

if __name__ == '__main__':
    try:
        talker()
    except rospy.ROSInterruptException:
        pass
