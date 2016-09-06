#include <iostream>
#include <cstring>
#include <vector>
#define N 100

using namespace std;

int main(){
	char data[N];
	
	while(gets(data)){
		char finalOut[N];
		int m = strlen(data) - 1;
		int i,k = 0;
		bool flag[10];
		
		for(i = 0; i < 10; i ++){
			flag[i] = false;
		}
		for(i = m; i >= 0; i --){
			if(!flag[data[i] - '0']){
				flag[data[i] - '0'] = true;
				finalOut[k++] = data[i];
			}
		}
		
		finalOut[k] = '\0';
		if(finalOut[0] == '0'){
			if(strlen(finalOut) == 1){
				cout << 0 << endl;
			}else{
				cout << finalOut + 1 << endl;
			}
			
		}else{
			cout << finalOut << endl;
		}
		
	}
	return 0;
}
