#include <iostream>
#include <string>

using namespace std;

#define N 100

int getResult1(int a, int b){
	int temp;
	if(a < b){
		temp = a;
		a = b;
		b = temp;
	}
	
	while(b){
		temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}

int main(){
	int a,b;
	while(cin >> a >> b){
		cout << "���Լ����"<< endl; 
		cout << getResult1(a,b) << endl;
		cout << "��С��������"<< endl; 
		cout << (a*b)/getResult1(a,b) << endl;
	}
	return 0;
}
