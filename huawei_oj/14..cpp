#include <iostream>
#include <string>

using namespace std;

#define N 100

int main(){
	int a,b;
	
	while(cin >> a >> b){
		int i;
	int minValue = a > b ? b : a;
	int sum = 1;
	for(i = 2; i <= minValue; i ++){
		while(!(a % i) && !(b % i)){
			sum *= i;
			a = a / i;
			b = b / i;
		}
	}
	if(a != 0){
		sum *= a;
	}
	if(b != 0){
		sum *= b;
	}
	cout << sum << endl;
	}
	
	return 0;
}
