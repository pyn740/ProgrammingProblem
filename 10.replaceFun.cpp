#include <iostream>
#include <cstring>

#define N 50
using namespace std;

void replaceFun(char str[], int length){

	int i, j;
	char * ptr = str;
	int blankNum = 0;
	
	while(*ptr != '\0'){
		if(*ptr == ' '){
			blankNum ++;
		}
		ptr ++;             //why i always forget?!!!?
	}
	
	int newLength = length + blankNum * 2;
	str[newLength] = '\0';
	
	i = length -1;
	j = newLength - 1;
	
	while(i >= 0){
		if(str[i] != ' '){
			str[j--] = str[i];
		}else{
			str[j--] = '0';
			str[j--] = '2';
			str[j--] = '%';
			
		}
		i--;
	}
	
	cout<< str << endl;
	
}

int main(){
	char a[N];
	while(gets(a)){
		int len = strlen(a);
		replaceFun(a,len);
	}
	return 0;
}
