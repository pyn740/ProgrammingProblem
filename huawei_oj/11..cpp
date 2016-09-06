#include <iostream>
#include <cstring>
#include <string> 
#include <vector>
using namespace std;

#define N 100

void partitionStr(char a[]){
	int i;
	char *aptr = a;
	
	int alen = strlen(a);
	int temp = alen;
	/*
	while(temp >= 8){
		temp = temp - 8;
		vector<char> c(aptr,aptr + 8);
		for(int j = 0 ; j < 8; j ++){
			cout << c[j];
		}
		cout << endl;
		aptr = aptr + 8;
	}
	
	for(int i= 0 ; i < 8; i ++){
		if(i < temp){
			cout << aptr[i];
		}else{
			cout << 0;
		}	
	}
	cout << endl;
	*/

	int s = temp/8;
	int t = temp%8;
	for(i = 0; i < s; i ++){
		for(int j = 0; j < 8; j ++){
			cout << a[8*i+j];
		}
		cout << endl;
	}
	if(t != 0){
		for(int j = 0; j < 8; j ++){
			if(j < t){
				cout << a[8*i+j];
			}else{
				cout << 0;
			}	
		}
		cout << endl;
	}
}

int main(){
	
	int n;
	char a[N][N]; 
	while(cin >> n){
		for(int i = 0; i < n; i ++){
			cin >> a[i];
		}
		for(int i = 0; i < n; i ++){
			partitionStr(a[i]);
		}
	}

	return 0;
}
