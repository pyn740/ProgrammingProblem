#include <iostream>
#include <stack>

using namespace std;

class MyQueue{
	stack<int> s1;
	stack<int> s2;
	public:
		MyQueue(){};
		int size(){
			return s1.size()+s2.size();
		}
		
		void push(int a){
			s1.push(a);
		}
		
		int front(){
			if(!s2.empty()){
				return s2.top();
			}else{
				while(!s1.empty()) {
					int a = s1.top();
					s1.pop();
					s2.push(a);
				}
				return s2.top();
			}
		}
		
		int pop(){
			if(s2.empty()){
				int a = s1.top();
					s1.pop();
					s2.push(a);
			}
			s2.pop();
		}
};


