#include <iostream>
#include <algorithm>

using namespace std;

int partition(int a[], int start, int end){
	int i = start;
	int j = end;
	while(i < j){
		while(i < j && a[i] <= a[j]) j--;
		if(i < j){
			swap(a[i], a[j]);
			i ++;
		}
		while(i < j && a[i] <= a[j]) i++;
		if(i < j){
			swap(a[i], a[j]);
			j --;
		}
	}
	return i;
}

void quickSort(int a[],int start, int end){
	if(start < end){
		int pivot = partition(a,start,end);
		quickSort(a,start,pivot - 1);
		quickSort(a,pivot+1,end);	
	}
}

int main(){
	int a[] = {15,12,5,3,1,8};
	quickSort(a,0,5);
	for(int i = 0; i < 6; i ++){
		cout << a[i] << endl;
	}
	return 0;
}
