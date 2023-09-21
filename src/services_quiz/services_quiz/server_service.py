# import the Twist module from geometry_msgs messages interface
from geometry_msgs.msg import Twist
# import the MyCustomServiceMessage module from custom_interfaces package
from services_quiz_srv.srv import Turn
# import the ROS2 Python client libraries
import rclpy
from rclpy.node import Node
import time

class Service(Node):

    def __init__(self):
        # Here you have the class constructor

        # call the class constructor to initialize the node as service_stop
        super().__init__('turn_server')
        # create the Service Server object
        # defines the type, name, and callback function
        self.srv = self.create_service(Turn, 'turn', self.custom_service_callback)
        # create the Publisher object
        # in this case, the Publisher will publish on /cmd_vel topic with a queue size of 10 messages.
        # use the Twist module
        self.publisher_ = self.create_publisher(Twist, 'cmd_vel', 10)
        

    def custom_service_callback(self, request, response):
    
        msg = Twist()
        
        if request.direction == "right":
            self.get_logger().info('Turning to right direction!!')
            
            msg.angular.z = request.angular_velocity

        elif request.direction == "left":
            self.get_logger().info('Turning to left direction!!')
            msg.angular.z = request.angular_velocity*-1
           
        else:
            # response state
            response.success = False
        
        i = 0
        while (i <= request.time):
            self.publisher_.publish(self.twist)
            i += 0.1
            time.sleep(0.1)
            response.success = True

        # return the response parameter
        return response


def main(args=None):
    # initialize the ROS communication
    rclpy.init(args=args)
    # declare the node constructor  
    service = Service()
    # pause the program execution, waits for a request to kill the node (ctrl+c)
    rclpy.spin(service)
    # shutdown the ROS communication
    rclpy.shutdown()


if __name__ == '__main__':
    main()