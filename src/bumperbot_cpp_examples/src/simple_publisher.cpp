#include<rclcpp/rclcpp.hpp>

#include<std_msgs/msg/string.hpp>
#include<chrono>

using namespace std::chrono_literals;

class simple_publisher:public rclcpp::Node
{
public:
    simple_publisher():Node("simple publisher"),counter_(0)
    {
        pub_ = create_publisher<std_msgs::msg::String>("chatterd",10);
        // the finction og the timer is to repeatedly execute the task at a cetian frequency
        timer_ =create_wall_timer(1s,std::bind(&simple_publisher::timer_Callback ,  this));
        RCLCPP_INFO(get_logger(),"Publishing at 1hz");    
        
    }
    private:
        unsigned int counter_;
        rclcpp::Publisher<std_msgs::msg::String>::SharedPtr pub_;
        rclcpp::TimerBase::SharedPtr timer_;   // pointer which stored the output of timer 

        void timer_Callback()
        {
            auto message = std_msgs::msg::String();
            message.data="Hello ros2 counter : "+std::to_string(counter_++);
            pub_->publish(message);
        }
};  


int main(int argc , char* argv[])
{
    rclcpp::init(argc,argv);
    auto node = std::make_shared<simple_publisher>();
    rclcpp::spin(node);
    rclcpp::shutdown();


    return 0;
}