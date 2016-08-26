/**
*�𳵽�վ
*��K������ջʱ��
*��1��ǰ��� K-1 ����ȫ����ȥ
*��2��ǰ��� K-1 ��������ջ����
*��3��ǰ��� K-1 ����������ջ���棬���ֳ�ȥ��
*���ڵ�K������ջ֮ǰ�����δ�ջ�����ȥ 0����1����2������ջ.size()����Ȼ��ѵ�K����ջ��
*�ٶ��� K+1��ͬ��ʵʩ�����ķ������ݹ飩
*��ȥ�˵ı�����һ���������棬û��վ�ı�����ջ���棬���һ�����������˵ݹ���������
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
vector<int> inputTrain;//�������� 
vector<string> outputTrain; 

void handle(int inTrainNum, stack<int> s, deque<int> d){
	for(int i = s.size(); i >= 0; i --){//��������ʱ����ȥ���ٸ� 
		
		stack<int> sTemp(s);
		deque<int> dTemp(d); 
		
		for(int j = 1; j <= i; j ++){//��ջ�г�ȥ��������� 
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
