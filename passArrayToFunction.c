#include <stdio.h>
#include <math.h>


double y_vector(double y[], int ny, double dy){
	for (int j = 0; j<ny; j++){
		y[j] = pow(y[j],2.0);
		printf("%f\n", y[j]);
	}
}



int main(){
	
	int ny = 5;
	double y[ny];

	double dy = 2.0;
	//y_vector(y,dy,dy);


	printf("first\n");

	for (int i = 0; i<ny; i++){
		y[i] = i*dy;
		printf("%f\n", y[i]);
	}
	
	printf("second\n");

	y_vector(y,ny,dy);

	


}