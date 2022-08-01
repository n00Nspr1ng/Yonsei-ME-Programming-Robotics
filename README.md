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
