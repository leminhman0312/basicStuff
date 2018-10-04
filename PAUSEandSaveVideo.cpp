#include <stdio.h>
#include <math.h>
#include <string.h>
#include "engine.h"

#define BUFSIZE 256

int main(){

	//Open MATLAB
	Engine *ep = engOpen(NULL);

	//declare variable
	const int arraysize = 50;
	double x[arraysize];
	double y[arraysize];

	mxArray *size_pointer = NULL;
	mxArray *x_pointer = NULL;
	mxArray *y_pointer = NULL, *result = NULL;
	char buffer[BUFSIZE+1];

	//CREATE A FIGURE HANDLE for IF STATEMENT, CLOSE
	//engEvalString(ep,"h.fig = figure;");

	//looping for values 



	//FOR VIDEO

	engEvalString(ep,"v = VideoWriter('test.avi');");
	engEvalString(ep,"open(v)");

	for (int iii = 0; iii<arraysize;iii++){
		x[iii] = iii;
		y[iii] = pow(x[iii],2);
		//X VECTOR
		x_pointer = mxCreateDoubleMatrix(1,arraysize,mxREAL);
		memcpy((void *)mxGetPr(x_pointer), (void *)x, sizeof(x));
		engPutVariable(ep,"X_MATLAB", x_pointer);
		//Y VECTOR
		y_pointer = mxCreateDoubleMatrix(1,arraysize,mxREAL);
		memcpy((void *)mxGetPr(y_pointer), (void *)y, sizeof(y));
		engPutVariable(ep,"Y_MATLAB", y_pointer);

		engEvalString(ep,"plot(Y_MATLAB);");

		//for VIDEOS
		engEvalString(ep,"M = getframe(gcf);");
		engEvalString(ep,"writeVideo(v,M)");

	}

	engEvalString(ep,"close(v)");

		return 0;

}

		/*
		//THE IF STATEMENT TO CLOSE THE 'PAUSE' THE PLOT WHEN CLOSE
		engEvalString(ep,"if ~isvalid(h.fig);\
								pause;\
						   end;"
						   );
		*/ 
						   
	
	
	

