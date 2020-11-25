#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double a;
	cout << "a = " << flush;
	cin >> a;
	double b;
	cout << "b = " << flush;
	cin >> b;
	double c;
	cout << "c = " << flush;
	cin >> c;
	if(a == 0 && b == 0){
		cerr << "invalid numbers" << endl;
	}
	double sum1 = (-b+(sqrt(b*b)-(4*a*c)))/(2*a);
	double sum2 = (-b-(sqrt(b*b)-(4*a*c)))/(2*a);
	cout << sum1 << endl;
	cout << sum2 << endl;
	return 0;
}
