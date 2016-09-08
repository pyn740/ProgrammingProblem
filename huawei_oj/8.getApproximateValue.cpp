#include <iostream>

using namespace std;

#define N 100

int main(){
	char a[N];
	while(cin >> a){
		char * p = a;
		while(*p != '\0' && *p != '.'){
			p++;
		}
		if(*p == '\0'){
			cout << 0 << endl;
		}else{
			char * t = p - 1;
			p ++;
			if(*p >= '5'){
				*t = *t + 1;
			}
			t ++;
			*t = '\0';
			cout << a << endl;
		}	
	}
	
	return 0;
}
