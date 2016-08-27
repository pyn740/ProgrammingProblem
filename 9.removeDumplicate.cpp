#include <iostream>

#define N 50

using namespace std;

char * removeDumplicate(char * str){
	if(str == NULL){
		return NULL;
	}
	
	int i = 0,j = 0,k = 0;
	while(str[j] != '\0'){
		for(k = 0; k < j; k ++){
			if(str[k] == str[j]){
				break;
			}
		}
		if(k == j){
			str[i] = str[j];
			i ++;
		}
		j++;
	}
	str[i] = '\0';
	return str;
}

int main(){
	char a[N];
	while(cin >> a){
		cout << removeDumplicate(a) << endl;
	}
	return 0;
}
