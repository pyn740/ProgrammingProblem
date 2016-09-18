#include <iostream>

using namespace std;

int countZero(int N){

    int ret = 0;
    int j;
    for(int i=1; i<=N; i++){
     	 j = i;
      	while(0==j%5){
            ret++;
            j /= 5;
    	}
    }
    return ret;
}


int main(){
	int n;
	cin >> n;

	cout << countZero(n) << endl;
	return 0;
}
