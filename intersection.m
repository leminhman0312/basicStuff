clc
clear
x = linspace(0,2);
y1 = x + 2;
y2 = exp(x);
tol = 0.05;

counter=1;
for i = 1:100
    if abs(y1(i) - y2(i)) <= tol
        y_intersect(counter) = y2(i);
        x_intercept(counter) = x(i);
        counter=counter+1;
    end

end

x_avg_intersect = mean(x_intercept);
y_avg_intersect = mean(y_intersect);

plot(x,y1)
hold on
plot(x,y2)
hold on
plot(x_avg_intersect, y_avg_intersect,'or');



