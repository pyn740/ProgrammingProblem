#include <iostream>
#include <cstring>

#define N 100

using namespace std;

int main(){
	char data[N];
	while(cin >> data){
		char temp;
		int i = 0;
		int j = strlen(data) - 1;

		while(i < j){
			temp = data[i];
			data[i] = data[j];
			data[j] = temp;
			
			i ++;
			j --;
		}
	
		cout << data << endl;
	}
	return 0;
}
