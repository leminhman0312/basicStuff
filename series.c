#include <stdio.h>
#include <math.h>
#include <fstream>




int main(){
	FILE *outfile;
	outfile = fopen("results.txt","w");
	double pi = 4.*atan(1.0);
	double nmax = 3.*pi;
	double nmin = -pi;
	double numb = 100.00;
	double diff = (nmax -nmin)/(numb-1);
	

	int length = 100;
	double n_array[length];
	double x_array[length];
	double y_array[length];
	double nk[length];
	nk[1] = 1.00;
	n_array[1] = nmin;

	//Generate X and Y, Y = X from 0 to 2pi
	for (int i = 1; i<=length;i++){

		n_array[i+1] = n_array[i] + diff;
		x_array[i] = n_array[i];
		nk[i+1] = nk[i] + 1;
		//generate Y = X
		y_array[i] = x_array[i]; 
		//printf("%f\t\t%f\n",x_array[i],y_array[i] );
	}


	
	//Generate B as vector

	double sum[length];
	sum[1] = 0.00;
	double b_vector;
	int bignumber = 500;
	

	
	for (int n = 1; n<=bignumber; n++){

		for (int x = 1; x<=length;x++){
			//generate 

			//b_vector = (2./n)*(sin(n*x_array[x]))*pow(-1,n+1);

			b_vector = (cos(1.*n*pi)-1.)*(2./(pow(n,2.)*pi))*(cos(1.*n*x_array[x]));

			//adding 

			sum[x] = sum[x] + b_vector;					
		}
	}

	for (int shit = 1; shit<=length; shit++){
		sum[shit] = sum[shit] + (pi/2.);
	}

	for (int k = 1;k<=length;k++){
		printf("%f\t\t%f\t\t%2.7f\n", x_array[k],y_array[k],sum[k]);
		fprintf(outfile,"%f\t\t%f\t\t%2.7f\n", x_array[k],y_array[k],sum[k]);	
	}

	fclose(outfile);
	return 0;


}



	

	