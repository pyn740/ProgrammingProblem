//#include <bits/stdc++.h>
#include <iostream>
#include <cassert>
#include <cmath>
//#include <map>
#include <tr1/unordered_map>
 
using namespace std;
using namespace std::tr1;    //PS!!!

#define N 50

char * func1(char * str, char * tem, char * res){
	assert(str != NULL);
	
	int i = 0;
	char *ptem;
	
	while(*str != '\0'){
		ptem  = tem;          //PS1
		while(*ptem != '\0'){
			if(*str == *ptem){
				break;
			}
			ptem ++;         //PS2
		}	
		if(*ptem == '\0'){
			res[i] = *str;
			i ++;            //PS3
		}	
		str ++;	
	}
	
	res[i] = '\0';           //PS4
	return res;
}

int get_prime(){
	
	static int data = 1;
	data ++;

	if(data == 2 || data == 3){           //PS5
		return data;
	}
	
	int i;
	while(true){
		i = 2;
		while(i <= sqrt(data)){
			if(!(data % i)){
				break;
			}
			i ++;
		}
		
		if(i > sqrt(data)){
			break;
		}else{
			data ++;
		}
	}
	
	return data;	
}

char * func2(char * str, char * tem, char * res, unordered_map<char,int> prime){
	char * ptem = tem;
	long long temSum = 1;
	while(*ptem != '\0'){		
		temSum *= prime[(*ptem)];
		ptem ++;
	}
	
	int i = 0;
	while(*str != '\0'){
		if(*str == ' ' || temSum % prime[(*str)]){    //PS6
			res[i] = *str;
			i ++;
		}
		str ++;
	}
	
	res[i] = '\0';            //PS7
	
	return res;
}


int main(){
	
	char a[N] = "welcome to asted";
	char b[N] = "aeiouw";
	char res[N];
	
	cout << func1(a,b,res) << endl;
	
	unordered_map<char,int> prime;

	for(char i = 'a'; i <= 'z'; i ++){
		prime[i] = get_prime();	
	}
	
	cout << func2(a,b,res,prime) << endl;
	
	return 0;
}
