#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main(){
	
	float c1 = 3.742e8;
	float c2 = 1.439e4;
	float sigma = 5.67e-8;
	float tsurr = 1500;
	float e_surr = 0.8;
	float lamda = 6;
	float e1 = 0.8;
	float e2 = 0.3;
	int niter = 5;
	float ts[niter];
	float eb[niter];
	
	float tmin = 1.;
	float tmax = 10.;
	float spacing = 1.;
	float length = (tmax-tmin+1)/(spacing);
	printf("length is %4.1f\n",length);
	
	for (int n = 0; n<=length; n++){
		ts[0] = tmin;
		ts[n+1] = ts[n] + spacing;
		printf("%4.2f\n", ts[n]);
			
		
	}
	
	
	return 0;
	
	
	
	
}


/*
float function_e(float c1, c2, tsurrounding, lambda){
	
	float e;
	
	e = (c1)/((lambda**5)*(exp(c2./(lambda*tsurrounding))-1))
	
	return e;
		
}
*/ 
