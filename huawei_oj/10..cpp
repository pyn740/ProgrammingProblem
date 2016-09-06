#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

#define N 100

int main(){
	char a[N];
	while(cin >> a){
		char * pt = a;
		while(*pt != 'x') pt++;
		pt ++;
		int len = strlen(pt);
		int i,j,sum = 0;
		for(i = len - 1,j = 0; i >= 0; i --,j ++){
			if(pt[i] >= 'A' && pt[i] <= 'F'){
				sum += ((pt[i] - 'A' + 10) * pow(16,j)) ;
			}else if(pt[i] >= 'a' && pt[i] <= 'f'){
				sum += ((pt[i] - 'a' + 10) * pow(16,j)) ;
			}else{
				sum += ((pt[i] - '0') * pow(16,j));
			}
		}
		cout << sum << endl;		
	}
	
	return 0;
}
