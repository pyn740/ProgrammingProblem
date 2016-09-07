#include <iostream>
#include <string>

using namespace std;

#define N 100

bool isOneCharacter(char a,char b){
 	if(b >= 'A' && b <= 'Z' || b >= 'a' && b <= 'z'){
 		if(a == b || (a + 32) == b || (a - 32) == b){
 			return true;
		 }
	 }
	 return false;
}

int main(){
	char str[N];
	while(gets(str)){
		char temple;
		cin >> temple;
		char *ptr = str;
		int sum = 0;
		while(*ptr != '\0'){
			if(*ptr == temple || isOneCharacter(*ptr,temple)){
				sum ++;
			}
			ptr ++;
		}
		cout << sum << endl;
	}
	return 0;
}
