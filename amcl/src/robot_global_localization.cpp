#include "ros/ros.h"  
#include "std_msgs/Int16.h"  
#include <move_base_msgs/MoveBaseAction.h>  
#include <actionlib/client/simple_action_client.h>  
#include "std_srvs/Empty.h"  
#include <cstdlib>  
int main(int argc, char **argv)  
{  
  ros::init(argc, argv, "robot_global_localization");  
 
  ros::NodeHandle n;  
  ros::ServiceClient client = n.serviceClient<std_srvs::Empty>("global_localization");  
  std_srvs::Empty srv;  
    
   
 if (client.call(srv))//服务调用  
 {  
     ROS_INFO("  Successful call");  
  }  
  else  
 {  
   ROS_ERROR("Failed to call service global_location");  
    return 1;  
 }  
 
  return 0;  
}  