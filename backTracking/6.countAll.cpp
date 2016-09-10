#include <iostream>
#include <algorithm>

using namespace std;

#define Max 100
int x,y;
int can[2];
int res[Max];

bool is_a_solution(int k){
	return k >= x+y;
}

void process_solution(){
	for(int i = 0; i < x+y; i ++){
		if(res[i] == 0){
			cout << "x" << " ";
		}else{
			cout << "y" << " ";
		}
	}
	cout << endl;	
}

void backtrack(int idx){
	if(is_a_solution(idx)){
		process_solution();
		return; 
	}
	for(int i = 0; i < 2; i ++){
		if(can[i]){
			res[idx] = i;
			can[i] --;
			backtrack(idx + 1);
			can[i] ++;
		}
	}
}

int main(){

	cin >> x >> y;
	can[0] = x;
	can[1] = y;
	
	for(int i = 0; i < x+y; i ++){
		res[i] = -1;
	}
	
	backtrack(0);
	return 0;
}
