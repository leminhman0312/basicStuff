#include <stdio.h>
#include <vector>
#include <cmath>
#include <algorithm>
int main(){

	//create vector
	std::vector<double> v(10);


	//fill in values
	for (int i = 1;i<v.size();i++){
		v.at(i) = pow(i,2.);
		printf("%f\n", v.at(i));
	}

	printf("\n");


	// // delete values
	// // delete beginning value
	// printf("delete 1st value\n\n");
	// v.erase(v.begin());
	// for (int i = 0;i<v.size();i++){
	// 	printf("%f\n", v.at(i));
	// }



	// printf("\n");


	// // //delete end value
	// printf("delete 2nd value value\n");
	// v.erase(v.begin()+ 2);
	// for (int i = 0;i<v.size();i++){
	// 	printf("%f\n", v.at(i));
	// }


	//Remove value from vector using #include <algorithm>

	// v.erase(remove(v.begin(),v.end(),36),v.end());
	
	
	// for (int i = 0;i<v.size();i++){
	// 	printf("%f\n", v.at(i));
	// }


	//To erase all, clear the vector

	 // v.clear();
	//Test if vector is empty or not 

	//printf("%d\n",v.empty()); //zero means not empty




	//Erase every odd index values: 1,3,7
	for (int k = 1; k<10;k=(2*k)+1){
		printf("%d\n", k);
		v.erase(v.begin()+k);
		for (int i = 1;i<v.size();i++){
			printf("%f\n",v.at(i));
		}
	}

	printf("\n");

	




}
