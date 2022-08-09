clear all
close all

%% import robot
load('pandarobot.mat');

axes = show(robot);
axes.CameraPositionMode = 'auto';
title('Frank emika Panda Robot')

config1 = randomConfiguration(robot);

ik = inverseKinematics('RigidBodyTree',robot);
ik.SolverParameters.AllowRandomRestart = false;
weights = [1 1 1 1 1 1];

initialGuess = robot.homeConfiguration;

eef_position = [2.0 2.0 2.0]
trvec2tform(eef_position)
%% joint configuration 생성
joint_config = ik('panda_hand',trvec2tform(eef_position),weights,initialGuess)

figure(1);
show(robot,joint_config)
hold on
plot3(2.0, 2.0, 2.0, 'rx', 'MarkerSize', 24,'LineWidth', 3)
hold off

figure(2);
show(robot,joint_config)