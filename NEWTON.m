clear all

x=1;
nmax=25;
eps=1;
n=0;

while eps>=1e-5&n<=nmax
    y=x-((x.^2)-5)/(2.*x);
    eps=abs(y-x);
    x=y;n=n+1;
end 