function [A] = homogeneous_matrix(theta, alpha, d, a)
    theta = deg2rad(theta);
    alpha = deg2rad(alpha);

    A = [cos(theta), -sin(theta)*cos(alpha), sin(theta)*sin(alpha), a*cos(theta);
        sin(theta), cos(theta)*cos(alpha), -cos(theta)*sin(alpha), a*sin(theta);
        0, sin(alpha), cos(alpha), d;
        0, 0, 0, 1];
end

