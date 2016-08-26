#include<bits/stdc++.h>
using namespace std;

#define N 30

int str2int (const char * str){
	if(NULL == str){
		return 0;
	}
	
	int res = 0;
	bool signal = true;
	
	if(*str == '+' ){
		str ++;
	}else if(*str == '-'){
		signal = false;
		str ++;
	}
	
	while(*str != '\0'){
		if(*str >= '0' && *str <= '9'){
			res = res*10 + *str - '0';
			if(res > numeric_limits<int>::max()){
				res = 0;
				break;
			}
			str ++;
		}else{
			res = 0;
			break;
		}
	}
	
	if(*str == '\0'){
		if(!signal){
			res = res *(-1);
		}
	}
	
	return res;
}

int main(){
	char str[N];
	while(cin >> str){
		cout << str2int(str) << endl;
	}
	return 0;
}
