#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int weight[] = {0,1,2,3};
int value[] = {0,60,100,120};
int maxWeight = 5;

int maxValue[4][6];  //maxValue[a][b]表示在物品1~a中，背包总重量为b时，最大价值 

int main(){
	int i,j;
	for (i = 0;i < 4; i ++){
		maxValue[i][0] = 0;
	}
	
	for (i = 0;i < 6; i ++){
		maxValue[0][i] = 0;
	}
	
	for (i = 1;i < 4; i ++){
		for (j = 1;j < 6; j ++){
			if(j < weight[i]){
				maxValue[i][j] = maxValue[i-1][j];
			}else{
				maxValue[i][j] = max(maxValue[i-1][j],maxValue[i-1][j-weight[i]] + value[i]);
			}
		}
	}
	
	for (i = 1;i < 4; i ++){
		for (j = 1;j < 6; j ++){
			if(j != 5){
				cout << maxValue[i][j] << " ";   
			}else{
				cout << maxValue[i][j] << endl;   
			}
		}	
	}
	
	return 0;
}
