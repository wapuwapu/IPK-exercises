#include <iostream>
#include <cmath>

using namespace std;

void collatz(int number){
	int i = number;
	cout << "Number: " << i << endl;
	while (!(i == 1 || i == 0|| i == -1|| i == -5|| i == -17)){
		if(i % 2 == 0){
			i = i/2;
			cout << i <<endl;
		}else{
			i= i*3+1;
			cout << i << endl;
		}
	}
	cout << "Ergebnis: " << i << endl;
}

int main(){
	int number;
	cout << "Number: " << flush;
	cin >> number;
	collatz(number);
}
