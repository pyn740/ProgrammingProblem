#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main(){
	int n;
	int i,j,k;
	int temp;
	
	while(cin >> n){

		vector<int> rise(n,1);
		vector<int> down(n,1);
		vector<int> res(n);
		
		vector<int> stu(n);
		for(i = 0; i < n; i ++){
			cin >> stu[i];
		}
		
		for(i = 1; i < n; i ++){
			for(j = 0; j < i; j ++){
				if(stu[j] < stu[i] && rise[j] + 1 > rise[i]){
					rise[i] = rise[j] + 1;
				}
			}
		}
		
		for(i = n-2; i >= 0; i --){
			for(j = n-1; j > i; j --){
				if(stu[j] < stu[i] && down[j] + 1 > down[i]){
					down[i] = down[j] + 1;
				}
			}
		}
		
		int temp = numeric_limits<int>::min();
		for(i = 0; i < n; i ++){
			res[i] = rise[i] + down[i] - 1;
			if(res[i] > temp){
				temp = res[i];
			}
		}
		
		cout << n - temp << endl;
	}
	return 0;
}
