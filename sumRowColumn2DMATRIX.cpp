#include <iostream>
using namespace std;

int main(){
	double a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	double c[3];
	double sum[3];
	for (int j = 0; j <3; j++){
		c[j] = 0;
		for (int i = 0; i<3;i++){
			c[j] = c[j] + a[i][j];
		}						
	}

	for (int i = 0; i<3;i++){
		cout << c[i] << endl;
	}


}