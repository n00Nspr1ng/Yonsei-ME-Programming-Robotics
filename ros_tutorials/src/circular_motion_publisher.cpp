#include <ros/ros.h>
#include <geometry_msgs/Twist.h>
/* Your code here*/
//생성한 메세지 파일 import
#include <ros_tutorials/CircularMotion.h>
/* Your code here*/


class CircularMotionPublisher
{
public:
    
    CircularMotionPublisher():loop_rate(10) //loop_rate 10Hz로 설정 
    {
        /*     Your code here       */
        /* Publisher, Subscriber 정의*/
        pub = nh.advertise<geometry_msgs::Twist>("/turtle1/cmd_vel", 100);
        sub = nh.subscribe("/circular_motion", 100, &CircularMotionPublisher::msgCallback, this);
        /*     Your code here       */ 
    }
    
    /*     Your code here       */ 
    /*Subscriber의 callback 함수 설정 */       
    void msgCallback(const ros_tutorials::CircularMotion::ConstPtr& msg)
    {
        velocity.linear.x = msg->velocity;
        velocity.angular.z = (msg->velocity)/(msg->radius);
    }
    /*     Your code here       */ 
    

    // loop_rate에 맞게 저장된 Twist 메시지를 Publish하도록 spin 설정 
    void spin()
    {
        while(ros::ok())
        {
            pub.publish(velocity);
            ros::spinOnce();
            loop_rate.sleep();
        }
    }

private:
    //nodehandle과 Publisher, Subscriber, 속도 정보를 저장할 Twist 메시지 객체 생성 
    ros::NodeHandle nh;
    ros::Publisher pub;
    ros::Subscriber sub;
    ros::Rate loop_rate;
    geometry_msgs::Twist velocity;
};


int main(int argc, char **argv)
{
    //ROS 시작 후 객체 생성 및 spin
    ros::init(argc, argv, "cm_publisher");
    CircularMotionPublisher cm_publisher;
    cm_publisher.spin();
    return 0;
}
