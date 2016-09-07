#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	int n;
	while(cin >> n){
		vector<int> ss(n);
		int i;
		for(i = 0; i < n; i ++){
			cin >> ss[i];
		}
		sort(ss.begin(),ss.end());
		auto end_unique = unique(ss.begin(),ss.end());
		ss.erase(end_unique,ss.end());
		
		for(i = 0; i < ss.size(); i ++){
			cout << ss[i] << endl;
		}
	}
	return 0;
}


