import rclpy
# import the ROS2 python libraries
from rclpy.node import Node
# import the Twist interface from the geometry_msgs package
from geometry_msgs.msg import Twist
# import the LaserScan module from sensor_msgs interface
from sensor_msgs.msg import LaserScan
# import Quality of Service library, to set the correct profile and reliability to read sensor data.
from rclpy.qos import ReliabilityPolicy, QoSProfile

class Exercise31(Node):

    def __init__(self):
    
        super().__init__('exercise31')
        #publisher 
        self.publisher_ = self.create_publisher(Twist, 'cmd_vel', 10)
        #subscriber
        self.subscriber = self.create_subscription(LaserScan,'/scan',self.listener_callback, QoSProfile(depth=10, reliability=ReliabilityPolicy.RELIABLE)) 
        #variables 
        self.cmd = Twist() 
        self.laser_forward = 0 
        self.timer_period = 0.5
        #loop
        self.timer = self.create_timer(self.timer_period, self.timer_callback)

    def listener_callback(self, msg):
        # print the log info in the terminal
        self.get_logger().info('I receive: "%s"' % str(msg))
        self.laser_forward = msg.ranges[359]

    def timer_callback(self):
        # Logic of move
        if self.laser_forward > 5:
            self.cmd.linear.x = 0.5
            self.cmd.angular.z = 0.5
        elif self.laser_forward < 5 and self.laser_forward >= 0.5:
            self.cmd.linear.x = 0.2
            self.cmd.angular.z = 0.0         
        else:
            self.cmd.linear.x = 0.0
            self.cmd.angular.z = 0.0
            
        # Publishing the cmd_vel values to a Topic
        self.publisher_.publish(self.cmd)
            
def main(args=None):
    # initialize the ROS communication
    rclpy.init(args=args)
    # declare the node constructor
    exercise31 = Exercise31()
    # pause the program execution, waits for a request to kill the node (ctrl+c)
    rclpy.spin(exercise31)
    # Explicity destroys the node
    exercise31.destroy_node()
    # shutdown the ROS communication
    rclpy.shutdown()

if __name__ == '__main__':
    main()