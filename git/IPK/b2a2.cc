#include <iostream>
#include <cmath>

using namespace std;
namespace power{

	int recursive(int q, int n){
		int a;
		int b;
		cout << "Enter q: " << flush;
		cin >> a;
		cout << "Enter n: " << flush;
		cin >> b;
		int result = 1;
		if(b >= 0){
			for (int i=0; i<b; i++){
				result *= a;
			}
			
		}else{
			result = 1;
		}
		cout << result << endl;
	}
	int iterative(int q, int n){
		int a;
		int b;
		cout << "Enter q: " << flush;
		cin >> a;
		cout << "Enter n: " << flush;
		cin >> b;
		int i=1;
		while(b > 0){
			i = i*a;
			b--;
		}
		cout << i << endl;
	}
		
			
}
using namespace power;

int main(){
	int a;
	int b;
	iterative(a,b);
//	recursive(a,b);
	return 0;

}
