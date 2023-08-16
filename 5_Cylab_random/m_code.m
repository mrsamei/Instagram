clc
clear
start = 5.1;
stop = 13.4;

% rand(10, 1) : a 10-by-1 column vector of uniformly distributed numbers in (0,1)
% rand(10, 1)*(stop - start) + start : (5.1, 13.4) (10-by-1)
x = round( rand(10, 1)*(stop - start) + start , 1);
disp(x);