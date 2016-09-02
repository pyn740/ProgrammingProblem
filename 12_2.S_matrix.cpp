#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n;
	
	while(cin >> n){
		
		vector<vector<int> > mat(n,vector<int>(n,0));
		
		int k = 0;
		int i = 0,j = 0;
		int di = 0, dj = 1;
		int temp;
		
		while(k < n*n){
			mat[i][j] = ++ k;
			if(mat[(i+di)%n][(j+dj)%n]){
				temp = di;
				di = dj;
				dj = - temp;
			}
			i += di;
			j += dj;
		}
		
		for(i = 0; i < n; i ++){
			for(j = 0; j < n; j ++){
				if(i == n - 1 && j == n -1){
					cout << mat[i][j] << endl;
				}else{
					cout << mat[i][j] << " ";
				}
			
			}
		}
	}
	return 0;
}
