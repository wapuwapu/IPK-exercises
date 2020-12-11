#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

std::vector<double> swapVector(std::vector<double>& v){
	double a;
	double b;
	for(int i=0; i<(v.size()/2); i++){
		a = v[i];
		b = v[v.size()-i-1];
		std::swap(a,b);
		v[i] = a;
		v[v.size()-i-1]=b;
	} for (int k=0; k<v.size(); k++){
		std::cout << v[k] << std::endl;
	}
}

std::vector<double> reversed(const std::vector<double>& v){
	std::vector<double> f(v.size()-1);
	int k=v.size();
	std::cout << v.size() << std::endl;
	std::cout << f.size() << std::endl;
	std::cout << k << std::endl;
	for(int i=0; i<v.size(); i++){
		f[i] = v[k-1];
		k--;
		std::cout << f[i] << "    " << v[i] << std::endl;
	}
}
int main(){
	std::vector<double> v1;
	std::vector<double> v2(10);
	std::vector<double> v3={3,8,7,5,9,2};
	std::vector<double> v={1,5,7,5,3,6,8,9,2};
	
	for(int i=0; i<v3.size(); ++i){
		std::cout << v3[i] << std::endl;
	}
	std::cout << "" << std::endl;
	
	int kleinste=v3[0];
	int groesste=v3[0];
	for(int k=0; k<v3.size();k++){
		if(kleinste > v3[k]){
			kleinste = v3[k];
		}
		if (groesste < v3[k]){
			groesste = v3[k];
		}
	}
	std::pair<int,int> p1;
	p1.first = kleinste;
	p1.second = groesste;

	std::cout << "Kleinste Zahl: " << p1.first << std::endl;
	std::cout << "Groesste Zahl: " << p1.second << std::endl;

//	reversed(v);
	double z;
	std::vector<double> vv={{3.5,2.3,5.6,1.9,8.4,2.7}};

	for(int i=0; i<vv.size();i++){
		z = vv[i];
		z = std::round(z);
		vv[i] = z; 
		std::cout << vv[i] << std::endl;
	}
	std::cout << std::endl;
	swapVector(v);

}
