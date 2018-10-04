#include <iostream>
#include <cmath>
using namespace std;
const int nrow = 3;
const int ncol = 3;
void myFunc(int a[][ncol]);




int main(){

	int a[nrow][ncol] = {{1,2,3},{4,5,6},{7,8,9}};
	double norm = 0.0;
	//counting column
	for (int j = 0; j<ncol;j++){
		double current = 0.0;
		for (int i = 0; i<nrow; i++){
			current = current + a[i][j];
			if(current > norm){
				norm = current; 
			}
		}

	}

	myFunc(a);

	for (int i = 1; i<5-1;i++){
		cout << i << endl;
	}





}

void myFunc(int a[][ncol]){
	cout << "it works " << endl;
}

