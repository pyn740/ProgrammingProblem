#include<bits/stdc++.h>

using namespace std;

#define N 100

void multiply(const char * str1, const char * str2){
	
	assert(str1 != NULL && str2 != NULL);    //PS1
	
	int len1,len2,i,j;
	
	len1 = strlen(str1);
	len2 = strlen(str2);
	
	int * res1 = (int *)malloc(sizeof(int)*(len1+len2));
	
	for(i = 0; i < len1 + len2; i ++){    //PS2
		res1[i] = 0;
	}
	
	for(i = 0; i < len1; i ++){
		for(j = 0; j < len2; j ++){
			res1[i+j+1] += (str1[i] - '0') *(str2[j] - '0'); //PS3
		}
	}
	
	int flag = 0;
	int currentInt;
	
	for(i = len1 + len2 - 1; i > 0; i --){
		currentInt = (flag + res1[i]);
		flag = currentInt / 10;
		res1[i] = currentInt % 10;
	}
	res1[0] = flag;
	
	char * res2 = (char *)malloc(len1+len2);
	
	i = 0;
	while(res1[i] == 0) i++;  //PS4
	  
	for(j = 0; i < len1 + len2; i ++, j ++){
		res2[j] = res1[i] + '0';
	}
	res2[j] = '\0';        //PS5
	
	cout << res2 << endl;
	
	free(res1);   //PS6
	free(res2);
}

int main(){
	
	char a[N], b[N];
	
	while(cin>>a>>b){
		multiply(a,b);
	}

	return 0;
}
