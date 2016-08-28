#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	string str;
	int n;
	int i;
	
	while(cin>>str){
		n = str.length();
		vector<int> sta(n,1);
		
		for(i = 0; i < n; i ++){
			if(i != 0 && str[i] > str[i-1]){
				//cout << str[i]<<","<<str[i-1]<<endl;
				  sta[i] = sta[i-1] + 1;
			}
			cout << sta[i] << endl;
		}
		
		int tem = 0;
		for(i = 1; i < n+1; i ++){
			//if(sta[i] > tem){
			//	tem = sta[i];
			//}
			//cout << sta[i] << endl;
		}
		
		//cout << tem << endl;
		
	}
	return 0;
}
