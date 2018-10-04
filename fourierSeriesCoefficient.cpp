#include <stdio.h>
#include <cmath>
#include <fstream>

//SOLVING f(x) = X series

int main(){
	FILE *outfile;
	outfile = fopen("fourierResultsCoefficient.txt","w");
	int nmax = 10;
	int nloop = nmax +1;
	int xrange = nloop;

	double x[nmax];
	double a[nmax];
	double pi = 4.0*atan(1.0);
	double b[nmax];
	double result[nmax];
	double dx = (pi/nmax);


	double sum = 0.0;

	for (int xcount = 1;xcount<xrange;xcount++){
			for (int n = 1; n<nloop;n++){
			x[xcount] = xcount*dx;
			a[n] = (4./pi)*(cos((2*n-1)*x[xcount]))/(pow((2*n-1),2));
			sum = (sum + a[n]);		
			result[n] = (pi/2.) - sum;
			}
		fprintf(outfile,"%f\t%f\n",x[xcount],result[xcount]);
	}	
}