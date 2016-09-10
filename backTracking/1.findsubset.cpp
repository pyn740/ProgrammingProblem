#include <iostream>
#include <cstring>

#define M  500

using namespace std;

char a[M];  //原问题 
bool b[M];	//其中的一个解 
int candidate[2] = {0,1};   //每个字符的候选集 

int is_a_solution(int k){
	return k >= strlen(a);
}

void process_solution(){
	cout << "{";
	for(int i = 0; i < strlen(a); i ++){
		if(b[i]){
			cout << a[i];
		}
	}
	cout << "}" << endl;
}

void backtrack(int whichchar){
	if(is_a_solution(whichchar)){
		process_solution();
	}else{
		for(int i = 0; i < 2; i ++){
			b[whichchar] = candidate[i];
			backtrack(whichchar + 1);
		}
	}
}

int main(){
	
	cin >> a;
	
	backtrack(0);
	return 0;
}
