
%Constants
tm = 300;   %[K]
fps = 0.881; 
sigma = 5.67e-8; %[W-m^2/K^4]
h = 5220; %[W/m^2_K] 
z = 2*(0.020)/(pi*0.015);
tp = 1000; %[K]
n = 500000; %[number of iterations] 
dt = 0.001; %[step size] 
tol = 1e-3; %[error] 
ts = zeros(1,n); %[K] 

part1 = zeros(1,n);
part2 = zeros(1,n);
part3 = zeros(1,n);
delta= zeros(1,n);
ts(1)=250;

%Calculations
for i = 1:n
   	part1(i) = ts(i)-tm;
	part2(i) = (fps.*sigma)./(h);
    part3(i) = part2(i).*z.*(tp.^4-ts(i).^4);
	delta(i) = abs(part1(i)-part3(i));
    ts(i+1)=ts(i) + dt;
    if delta(i) <= tol
        disp(i)
		disp(ts(i));
        break
    end 
end

    
