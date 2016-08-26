/**
*火车进站
*第K个数进栈时：
*（1）前面的 K-1 个数全部出去
*（2）前面的 K-1 个数都在栈里面
*（3）前面的 K-1 个数部分在栈里面，部分出去了
*则在第K个数入栈之前，依次从栈里面出去 0个、1个、2个……栈.size()个，然后把第K个入栈，
*再对于 K+1个同样实施这样的方法（递归）
*出去了的保存在一个队列里面，没出站的保存在栈里面，最后一辆车处理完了递归结束并输出
**/

#include<iostream>
#include<stack>
#include<vector>
#include<deque>
#include<string>
#include<sstream>
#include<algorithm>

using namespace std;

int n;
vector<int> inputTrain;//输入序列 
vector<string> outputTrain; 

void handle(int inTrainNum, stack<int> s, deque<int> d){
	for(int i = s.size(); i >= 0; i --){//新数据来时，出去多少个 
		
		stack<int> sTemp(s);
		deque<int> dTemp(d); 
		
		for(int j = 1; j <= i; j ++){//从栈中出去，进入队列 
			int a = sTemp.top();
			sTemp.pop();
			dTemp.push_back(a);
		} 
		
		sTemp.push(inputTrain[inTrainNum]);
		
		if(inTrainNum !=  n-1){
			handle(inTrainNum + 1,sTemp,dTemp);
		}else{
			while(!sTemp.empty()){
				int a = sTemp.top();
				sTemp.pop();
				dTemp.push_back(a);
			}
			
			stringstream ss; 
			while(!dTemp.empty()){
				int a = dTemp.front();
				dTemp.pop_front();
        	
        		if(!dTemp.empty()){
					ss<<a<<" ";  
				}else{
					ss<<a;  
				}
			}
			outputTrain.push_back(ss.str());

		}
	} 	
}

int main(){
	int data;
	cin >> n;
	
	for(int i = 0; i < n; i ++){
		cin >> data;
		inputTrain.push_back(data);
	}
	
	stack<int> s;
	deque<int> d;
	
	handle(0,s,d);
	
	sort(outputTrain.begin(),outputTrain.end());
	vector<string>::iterator it = outputTrain.begin();
	while(it != outputTrain.end()){
		cout << *it << endl;
		it ++;
	}

	return 0;
}
