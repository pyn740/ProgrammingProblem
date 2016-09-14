#include <iostream>

using namespace std;

#define M 3
#define N 5

void clockwisePrintMatrix(int a[][N],int rows,int colmns, int start){
	if(a == NULL) return;
	int endX = colmns - 1 - start;
	int endY = rows - 1 - start;
	int i,j;
	for(i = start; i <= endX; i ++){
		cout << a[start][i] << " ";
	}
	if(endY > start){
		for(i = start + 1; i <= endY; i ++){
			cout << a[i][endX] << " ";
		}	
	}
	
	if(endY > start && endX > start){
		for(i = endX - 1; i >= start; i --){
			cout << a[endY][i] << " ";
		}	
	}
	if(endY - 1 > start && endX > start){
		for(i = endY - 1; i > start; i --){
			cout << a[i][start] << " ";
		}	
	}
}

void printMatrixClockwisely(int a[][N],int rows,int colmns){
	if(a == NULL)  return;
	if(rows < 0 || colmns < 0) return;
	int start = 0;
	while(start * 2 < rows && start * 2 < colmns){
		clockwisePrintMatrix(a,rows,colmns,start);
		start ++;
	}
}


int main(){
	int a[M][N] = {{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
	printMatrixClockwisely(a,M,N);
	return 0;
}

