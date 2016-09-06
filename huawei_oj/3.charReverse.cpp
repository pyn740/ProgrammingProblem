#include <iostream>
#include <cstring>

#define N 100

using namespace std;

int main(){
	char str[N];
	while(gets(str)){
		int i,j;
		int m = strlen(str);
		char *start = str;
		char *last = str + m - 1;
		char temp;
		while(start < last){
			temp = *start;
			*start = *last;
			*last = temp;
			start ++;
			last --;
		}
		
		cout << str << endl;
	}
	return 0;
}
