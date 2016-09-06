#include <iostream>
#include <limits>
#include <vector>

using namespace std;

int lis(int a[], int n){
	vector<int> len(n,1);
	vector<int> pre(n);
	
	int i,j;
	for(i = 0; i < n; i ++){
		pre[i] = i;
	}
	
	for(i = 1; i < n; i ++){
		for(j = 0; j < i; j ++){
			if(a[j] < a[i] && len[j] + 1 > len[i]){
				len[i] = len[j] + 1;
				pre[i] = j;
			}
		}
	}
	
	int temp = numeric_limits<int>::min();
	for(i = 0; i < n; i ++){
		cout << len[i] << endl;
		if(len[i] > temp){
			temp = len[i];
		}
	}
	
	return temp;
}

int main(){

	int n = 8;
	int a[] = {35, 36, 39, 3, 15, 27, 6, 42};
	
	cout << lis(a,n) << endl;
	return 0;
}
