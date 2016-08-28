#include <iostream>
#include <cstring>
#include <algorithm>

#define M  500
using namespace std;

char a[M]; 

int is_a_solution(int k){
	return k >= strlen(a);
}

void process_solution(){
	
	for(int i = 0; i < strlen(a); i ++){
		cout << a[i];
	}	
	cout << endl;
}

void backtrack(int whichchar){
	if(is_a_solution(whichchar)){
		process_solution();
	}else{
		for(int i = whichchar; i < strlen(a); i ++){
			swap(a[whichchar],a[i]);
			backtrack(whichchar + 1);
			swap(a[whichchar],a[i]);
		}
	}
}

int main(){
	
	cin >> a;
	
	backtrack(0);
	return 0;
}
