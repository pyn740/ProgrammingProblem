#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct Node{
	int index;
	int value;
} Node;

bool cmp(Node a,Node b){
	return a.index < b.index;
}

int main(){
	int n;
	while(cin >> n){
		int i;
		vector<Node> recordVec;
		for(i = 0; i < n; i ++){
			Node a;
			cin >> a.index >> a.value;
			recordVec.push_back(a);
		}
		sort(recordVec.begin(),recordVec.end(),cmp);
		for(i = 0; i < n - 1; i ++){
			if((recordVec[i]).index == (recordVec[i+1]).index){
				(recordVec[i+1]).value += (recordVec[i]).value;
			}else{
				cout << (recordVec[i]).index <<endl;
                cout <<(recordVec[i]).value << endl;
			}
		}
		cout << (recordVec[i]).index <<endl;
        cout << (recordVec[i]).value <<endl;
	}
	return 0;
}
