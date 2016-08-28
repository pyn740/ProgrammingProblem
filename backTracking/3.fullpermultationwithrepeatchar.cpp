#include <iostream>
#include <cstring>

#define M  500
using namespace std;

char a[M]; 
int candidate[52];

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
		for(int i = 0; i < 52; i ++){
			if(candidate[i]){
				//cout << candidate[i] << endl;
				if(i < 26){
					a[whichchar] = i + 'A';
				}else{
					a[whichchar] = i + 'a' - 26;
				}
				
				candidate[i] --;
				backtrack(whichchar + 1);
				candidate[i] ++;
			}
			
		}
	}
}

int main(){
	
	cin >> a;
	char * p = a;
	
	for(int i = 0; i < 52; i ++){
		candidate[i] = 0;
	}
	
	while(*p != '\0'){
		if(*p >= 'A' && *p <= 'Z'){
			candidate[*p -'A'] ++;
		}else if(*p >= 'a' && *p <= 'z'){
			candidate[*p - 'a' + 26] ++;
		}
		p++;
	}
	
	backtrack(0);
	return 0;
}
