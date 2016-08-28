#include <iostream>
#include <limits>

using namespace std;

#define N 11

int main(){
	int coins[3] = {1,3,5};
	int min[N+1], pos[N+1];
	int i, j;
	
	for(i = 0; i < N+1; i ++){
		min[i] = 0;
		pos[i] = 0;
	}
	
	int temp;
	for(i = 1; i < N+1; i ++){
		
		temp = numeric_limits<int>::max();
		
		for(j = 0; j < 3; j ++){
			if(i >= coins[j]){
				if(min[i-coins[j]] + 1 < temp){
					temp = min[i-coins[j]] + 1;
					pos[i] = i-coins[j];
				}
			}	
		}
		
		min[i] = temp;
	}
	
	for(i = 0; i < N+1; i ++){
		cout <<"min["<<i<<"]="<<min[i] << endl;
	}
	
	for(i = 0; i < N+1; i ++){
		cout <<"pos["<<i<<"]="<<pos[i] << endl;
	}
	return 0;
}
