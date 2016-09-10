#include <iostream>
#include <algorithm>

using namespace std;

#define Max 100

int a[Max];
int flag[Max]; 
int n;
int key;//目标和 
int sum;//当前和 

void backTrace(int idx){
	
	if(sum > key){
		return ;
	}
	if(idx > n){
		return;
	}
	if(sum == key){
		for(int i = 0; i < n; i ++){
			if(flag[i]){
				cout << a[i] << " ";
			}
		}
		cout << endl;
	}

	for(int i = idx; i < n; i ++){
		if(!flag[i]){
			sum += a[i];
			flag[i] = true;
			backTrace(idx + 1);
			sum -= a[i];
			flag[i] = false;
			while(i<n-1 && a[i]==a[i+1])//跳过相同的  
                i++;  
		}
		
	}
}


int main(){
	cin >> n >> key;
	sum = 0;
	
	int i;
	for(i = 0; i < n; i ++){
		cin >> a[i];
		flag[i] = false;
	}
	sort(a,a+n);
	backTrace(0);
	return 0;
}
