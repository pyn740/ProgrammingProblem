#include <iostream>
#include <cstring>
#include <sstream>
#include <vector>
#include <stack>

#define N 200
using namespace std;


void changeWord(char *str) {
	char * ptr;
	stack<string> ss;
	ptr = strtok(str," ");
	while(ptr != NULL){
		//cout << ptr << endl;
		string s(ptr);
		ss.push(s);
		ptr = strtok(NULL," ");
	}
	/*
	for(int i = 0; i < ss.size(); i ++){
		if(i < ss.size() - 1){
			cout << ss+i << " ";
		}else{
			cout << ss+i <<endl;
		}
	}
	*/
	while(!ss.empty()){
		cout << ss.top() << " ";
		ss.pop();
	}	

}

int main(){
	char str[N];
	gets(str);
	changeWord(str);
	//cout << changeWord(str) << endl;
	
	return 0;
}



/*
int changeWord(string str) {
	stringstream stream(str);
	vector<string> ss;
	
	string a;
	
	while(stream >> a){
		cout << a << endl;
		ss.push_back(a);
	}
	
	for(int i = 0; i < ss.size(); i ++){
		cout << ss[i] << endl;
	}
	return 0;
}

int main(){
	string str;
	
	getline(cin,str);

	cout << changeWord(str) << endl;
	
	return 0;
}
*/
