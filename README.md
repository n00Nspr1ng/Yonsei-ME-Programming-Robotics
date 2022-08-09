# Yonsei-ME-Programming-Robotics
Assignments of Yonsei ME Programming: Robotics

## 1st week: ros_tutorials  
This package makes turtlesim move in a circular motion.  
Launch the package then manually publish the topic.
```
roslaunch ros_tutorials tutorial.launch  
rostopic pub circular_motion ros_tutorials/CircularMotion "radius: 0.0 velocity: 0.0" 
```
Change the radius and velocity as you please and the turtle will move with the assigned radius and velocity.


## 2nd week: myrobot  
This package makes you move a robot arm in rviz as described in the urdf file.   
```
roslaunch myrobot 3dof_robot.launch  
```  

https://user-images.githubusercontent.com/97090402/183670499-d2c66d71-fa2f-441e-a1fe-6e09baa95164.mp4


