import rclpy
import numpy as np
from rclpy.node import Node
from geometry_msgs.msg import Twist
from geometry_msgs.msg import Quaternion
from nav_msgs.msg import Odometry
from rclpy.qos import ReliabilityPolicy, QoSProfile

class Topics_quiz_node(Node):

    def __init__(self):
    
        super().__init__('topics_quiz_node')
        #publisher
        self.publisher_ = self.create_publisher(Twist, 'cmd_vel', 10)
        #subscriber 
        self.subscriber = self.create_subscription(Odometry,'/odom',self.listener_callback, QoSProfile(depth=10, reliability=ReliabilityPolicy.RELIABLE))
        #variables
        self.timer_period = 0.05
        #data i want to read is x position  
        self.data_x = 0 
        self.data_y = 0 #edit
        self.quaternion_data = Quaternion()
        self.cmd = Twist()
        self.timer = self.create_timer(self.timer_period, self.timer_callback)
    
    def listener_callback(self,msg) :
        self.data_x = msg.pose.pose.position.x
        self.data_y = msg.pose.pose.position.y
        self.quaternion_data = msg.pose.pose.orientation
        #self.get_logger().info('I receive: "%s"' % str(self.quaternion_data))
    
    def timer_callback(self) :
    
        if self.data_x >= 0.86 and self.quaternion_data.z < 0.66 :
            self.cmd.linear.x = 0.0
            self.cmd.angular.z = 0.2
                
        elif self.data_y < 1 :
            self.cmd.linear.x = 0.7
            self.cmd.angular.z = 0.0
        else :
            self.cmd.linear.x = 0.0
        self.publisher_.publish(self.cmd) 
        self.get_logger().info('y: "%s"' % self.data_y)
        self.get_logger().info('orientation: "%s"' % self.quaternion_data)


def main(args=None):
    # initialize the ROS communication
    rclpy.init(args=args)
    # declare the node constructor
    topics_quiz = Topics_quiz_node()
    # pause the program execution, waits for a request to kill the node (ctrl+c)
    rclpy.spin(topics_quiz)
    # Explicity destroys the node
    topics_quiz.destroy_node()
    # shutdown the ROS communication
    rclpy.shutdown()

if __name__ == '__main__':
    main()