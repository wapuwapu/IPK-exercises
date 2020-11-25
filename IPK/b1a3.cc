#include <iostream>
#include <cmath>

using namespace std;

int fibonacci(int number){
	int i= number;
	cout << "Anzahl Schritte: "  << endl;
	cin >> i;
	double a = 0;
	double b = 1;
	double c = 0;
	for(int k=0; k<i-1; k++){
		c = b+a;
		a = b;
		b = c;
		cout << "aktueller Wert: " << c <<" Fibonacci-Zahl: "<< k+2 << endl;
	}
	cout << "Ergebnis: " << c << endl;
}
int main(){
	fibonacci(4);
}
