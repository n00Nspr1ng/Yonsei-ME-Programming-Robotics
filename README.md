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

![ezgif com-gif-maker](https://user-images.githubusercontent.com/97090402/183676157-b78d0049-e8ce-4b52-97d1-cd04493f14d3.gif)


<img src="https://user-images.githubusercontent.com/97090402/183676157-b78d0049-e8ce-4b52-97d1-cd04493f14d3.gif" width="300" height="200" />
  
## 2nd week - 2: robot_arm_kinematics  
This folder contains MATLAB files that solves the problem enlisted in the pdf file.  
  
[homogeneous_matrix.m](https://github.com/n00Nspr1ng/Yonsei-ME-Programming-Robotics/blob/main/robot_arm_kinematics/homogeneous_matrix.m) : a function for getting homogeneous transformation matrix in D-H notation.  
[prob1.m](https://github.com/n00Nspr1ng/Yonsei-ME-Programming-Robotics/blob/main/robot_arm_kinematics/prob1.m) : This script uses the homogeneous_matrix function to get the end-effector position for the first problem.  
[prob2.m](https://github.com/n00Nspr1ng/Yonsei-ME-Programming-Robotics/blob/main/robot_arm_kinematics/prob2.m) : This script uses MATLAB add-on "Robotics System Toolbox" to solve the ik for the robot arm.  
