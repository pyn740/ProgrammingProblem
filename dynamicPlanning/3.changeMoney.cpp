#include <iostream>

using namespace std;

int coins[7] = {1,2,5,10,20,50,100};

int changeMoney(int n, int index){
	if(index == 0 || n == 1 || n == 0) return 1;
	if(n < 0 || index < 0)  return 0;
	 
	return changeMoney(n - coins[index],index) + changeMoney(n, index - 1);
}

int main(){
	
	int n;
	while(cin >> n){
		if(n == 0) break;
		int i = 6;
		while(n < coins[i]) i--;
		cout <<	changeMoney(n,i) << endl;
	
	}	
	return 0;
}
