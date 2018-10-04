
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "engine.h"



#define  BUFSIZE 256

int main()

{
	Engine *ep;
	mxArray *X = NULL;
	mxArray *Y = NULL, *result = NULL;
	char buffer[BUFSIZE+1];
	double x[2][5] = {{1.0, 2.0, 3.0, 4.0, 5.0},{-1.0,-2.0,-3.0,-4.0,-5.0}};
	double y[5] = {1.0,2.0,3.0,4.0,5.0};


	
	if (!(ep = engOpen(""))) {
		fprintf(stderr, "\nCan't start MATLAB engine\n");
		return EXIT_FAILURE;
	}


	X = mxCreateDoubleMatrix(2, 5, mxREAL);
	memcpy((void *)mxGetPr(X), (void *)x, sizeof(x));
	

	Y = mxCreateDoubleMatrix(1, 5, mxREAL);
	memcpy((void *)mxGetPr(Y), (void *)y, sizeof(y));

	engPutVariable(ep, "X", X);
	engPutVariable(ep, "Y", Y);


	 
	
	//engEvalString(ep,"set(gcf, 'Visible', 'off');");
	engEvalString(ep, "h = plot(X,Y);");
	engEvalString(ep, "title('Position vs. Time for a falling object');");
	engEvalString(ep, "xlabel('Time (seconds)');");
	engEvalString(ep,"grid on;");
	engEvalString(ep, "ylabel('Position (meters)');");
	
	printf("Hit return to continue\n\n");
	fgetc(stdin);
	

	mxDestroyArray(X);
	mxDestroyArray(Y);
	engEvalString(ep, "close;");
	
	return EXIT_SUCCESS;
}
