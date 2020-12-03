#include <iostream>
#include <cmath>
#include <vector>

int main(){
	std::vector<double> v1;
	std::vector<double> v2(10);
	std::vector<double> v3 = {{3,8,7,5,9,2}};
	
	for(int i=0; i<v3.size(); i++){
		std::cout << v3[i] << endl;
	}
}
