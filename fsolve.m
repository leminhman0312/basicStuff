f = @(x) x.^2 -2*x + 1;
x0 = 1;
[x,fval]=fsolve(f,x0)

