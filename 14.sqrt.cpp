#include <iostream>
#include <iomanip>
using namespace std;

#define E 0.00001

double fx(double n){
	double pre = 0,cur = 1;
	double dif = 0.0;
	do{
		pre = cur;
		cur = pre/2 + n/(2*pre);
		if((dif = pre - cur) < 0){
			dif  = - dif;
		}	
		cout << "cur = " << cur << ",pre = " << pre << endl;
	}while(dif > E);
	return pre;
}

int main(){
	double n;
	double res;
	while(cin >> n){
		res = fx(n);
		cout << setprecision(3) << fixed << res << endl;
	}
	return 0;
}
