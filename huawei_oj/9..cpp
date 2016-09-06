//PS˼· 
#include <iostream>

using namespace std;


int main(){
	int data;
	while(cin >> data){
		for(int i = 2; i <= data; i ++){
			while(!(data%i) && data != 0){
				cout << i << " ";
				data /= i;
			}
		}
		cout << endl;
	}
	
	return 0;
}
