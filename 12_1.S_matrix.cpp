#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	while(cin >> n){
		int k,i,j,p = 0;
		vector<vector<int> > mat(n,vector<int>(n,0));
		for(k = 0; k < n; k ++){
			for(i = k; i >= 0; i --){
				mat[i][k-i] = ++p;
			}
		}
		
		for(i = 0; i < n; i ++){
			for(j = 0; j < n - i; j ++){
				cout << mat[i][j] << endl;
			}
		}
	}
	return 0;
}
