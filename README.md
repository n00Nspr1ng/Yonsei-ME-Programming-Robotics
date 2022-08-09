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


## 2nd week - 1: myrobot  
This package makes you move a robot arm in rviz as described in the urdf file.   
```
roslaunch myrobot 3dof_robot.launch  
```  

https://user-images.githubusercontent.com/97090402/183670753-77395bbb-a2d5-4a3e-849d-f6c791df8b4a.mp4

## 2nd week - 2: robot_arm_kinematics  
This folder contains MATLAB files.   
