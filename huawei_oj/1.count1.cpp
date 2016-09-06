#include <iostream>

using namespace std;

int cout1(int n){
	int sum = 0;
	while(n){
		n &= (n - 1);
		sum ++;
	}
	return sum;
}

int main(){
	int n;
	
	while(cin >> n){
		cout << cout1(n) << endl;
	}
	return 0;
}
