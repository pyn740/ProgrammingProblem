#include <iostream>
#include <vector>
#include <limits>

using namespace std;

double averageWaitTime(int req[], int dur[], int n){
	int i,j;
	double waitTimeSum = 0;    //PS1
	int cur = 0;
	int nextStartTime = req[cur];
	bool flag[4];
	int readyStatusTask[4];
	
	for(i = 0; i < n; i ++){
		flag[i] = false;
		readyStatusTask[i] = 0;
	}
	
	for(i = 0; i < n; i ++){
		cout << cur << endl;
		cout << nextStartTime << "," << req[cur] << endl;
		waitTimeSum += (nextStartTime - req[cur]);
		nextStartTime += dur[cur];
		flag[cur]  = true;
		
		int num = 0;
		for(j = 0; j < n; j ++){
			if(!flag[j] && req[j] < nextStartTime){
				readyStatusTask[num] = j;
				num ++;
			}
		}
		//cout << "num = " << num << endl;
		
		if(num > 0){
			int minDurTime = numeric_limits<int>::max();
			for(j = 0; j < num; j ++){
				//cout << "dur[readyStatusTask[j]] = " << dur[readyStatusTask[j]] << ",minDurTime = " << minDurTime << endl;
				if(dur[readyStatusTask[j]] < minDurTime){
					minDurTime = dur[readyStatusTask[j]];
					cur = readyStatusTask[j];
				}
			}
		}else{
			int minReqTime = numeric_limits<int>::max();
			for(j = 0; j < n; j ++){
				if(!flag[j] && req[j] < minReqTime){
					minReqTime = req[j];
					cur = j;
				}	
			}
		}
	}
	return waitTimeSum/n;
}

int main(){
//	int a[] = {0,2,4,5};
//	int b[] = {7,4,1,4};
//	int n = 4;
	int a[] = {0,5};
	int b[] = {4,6};
	int n = 2;
//	int a[] = {0,1,3,9};
//	int b[] = {2,1,7,5};
//	int n = 4;
	cout << averageWaitTime(a,b,n) << endl;
	return 0;
}
