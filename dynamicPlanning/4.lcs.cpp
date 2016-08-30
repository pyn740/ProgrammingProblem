//不需要子序列是连续的 

#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int c[100][100];

int lcs(char * str1,char *str2){
 	int m = strlen(str1);
 	int n = strlen(str2);
 	
 	int i,j;
 	for(i = 0; i < m; i ++){
 		c[i][0] = 0;
	 }
	 
	 for(i = 0; i < n; i ++){
 		c[0][i] = 0;
	 }
	 
	 for(i = 1; i < m; i ++){
	 	for(j = 1; j < n; j ++){
	 		if(str1[i] == str2[j]){
	 			c[i][j] = c[i-1][j-1]+1;
			 }else{
			 	c[i][j] = max(c[i-1][j],c[i][j-1]);
			 }
	 		
		 }
	 }
	 return c[m-1][n-1];
	 
 }

int main(){
	char str1[] = "abcdef";
	char str2[] = "bcadef";
	cout << lcs(str1,str2) << endl;
	return 0;
}
