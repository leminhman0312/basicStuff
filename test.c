#include <stdio.h>
#include <math.h>
#include <fstream>

//TO USE POW, SIN, COS, TAN ... in C.  REMEMBER TO LINK ADD -lm 
// so gcc test.c -o test -lm





double y_vector(double y[], int ny, double dy){
	for (int j = 0; j<ny; j++){
		y[j+1] = y[j] + dy;
		printf("%f\n", y[j]);
	}
}



int main(){
	
	FILE *outfile;
	outfile = fopen("test.txt","w");
	int ny = 5;
	double y[ny];
    y[0] = 1;

	double dy = 2.0;
	//y_vector(y,dy,dy);



	y_vector(y,ny,dy);

	fprintf(outfile,"Hello");

	fclose(outfile);

	


}
