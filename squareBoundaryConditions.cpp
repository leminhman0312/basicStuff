#include <iostream>
using namespace std;


int main(){
	int nx = 5;
	int ny = 5;
	double dx = 2/(nx-1);
	double dy = 2/(ny-1);
	double u[nx][ny];
	double x[nx];
	double y[ny];

	//INTIAL MATRIX
	for (int i = 0; i<nx;i++){
		for (int j = 0; j<ny;j++){
			u[i][j] = 0;
		}
	}


	/*
	//BOUNDARY CONDITIONS
	for (int j = 0; j<ny;j++){
		u[j][0] = 1;  //This is for left
	}

	for (int i = 0; i<nx;i++){
		u[0][i] = 1;  //This is for top
	}

	for (int j = 0;j<ny;j++){
		u[nx-1][j] = 1; //This is for bottom
	}

	for (int i = 0; i<nx;i++){
		u[i][ny-1] = 1; //This is for right
	}

	*/ 


	for (int uiterx = 0; uiterx <nx;uiterx++){
			u[0][uiterx] = 1; //TOP 
			u[ny-1][uiterx] = 1; //RIGHT
	}

	for (int uitery = 0;uitery<ny;uitery++){
			u[uitery][0] = 1; //LEFT
			u[uitery][nx-1] =1; //BOTTOM
	}



		

	//TEST PRINTING
	for (int i = 0; i<nx;i++){
		for (int j = 0; j<ny;j++){
			cout << u[i][j] << "\t";
		}
		cout << "\n";

	}

	return 0;


}