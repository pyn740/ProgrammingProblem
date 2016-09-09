#include <iostream>
#include <algorithm>

#define N 6

using namespace std;

void sift(int a[],int top, int last){
	int i = top;
	int j = 2*top;
	while(j <= last){
		if(j < last && a[j] < a[j+1]) j++;
		if(a[i] > a[j]) break;
		else{
			swap(a[i],a[j]);
			i = j;
			j = 2*i;
		}
	}
}

void heapSort(int a[],int n){
	int i;
	//从最后一个非叶子结点开始建堆
	for(i = n/2; i >= 1; i --){
		sift(a,i,n);
	}
	//重复移走堆顶元素 
	for(i = 1;i < n; i ++){
		swap(a[1],a[n-i+1]);
		sift(a,1,n-i);
	} 
}

int main(){
	int a[N];
	int i;
	for(i = 1; i < N; i ++){
		cin >> a[i];
	}
	
	heapSort(a,N-1);
	
	for(int i = 1; i < N; i ++){
		cout << a[i] << endl;
	}
	return 0;
}
