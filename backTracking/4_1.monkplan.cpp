#include <iostream>

#define N 7
using namespace std;


int a[N][7] = {{0,1,0,1,0,0,0},
				{1,0,0,0,0,1,0},
				{0,0,1,0,0,0,1},
				{0,0,0,0,1,0,0},
				{1,0,0,1,0,1,0},
				{0,1,0,0,1,0,0},
				{0,0,1,0,0,1,1}};

int plan[N];//�±�Ϊ���� ֵΪ���ڼ� 

int place(int idx){  //��idx����������plan��idx���Ƿ�������ж�֮ǰ��û����ͬ��ֵ�յ� 
	for(int i = 0; i < idx ; i ++){
		if(plan[i] == plan[idx]) return 0;
	}
	return 1;
}

void fun1(int monk){
	if(monk >= N){
		for(int i = 0; i < N; i ++){
			if(i != N-1){
				cout << plan[i] << " ";
			}else{
				cout << plan[i] << endl;
			}
			
		}
	}else{
		for(int i = 0; i < 7; i ++){  //����ÿ�� 
			if(a[monk][i] == 1){      //�ú��п��ڵ�i��ֵ�� 
					plan[monk] = i;   //���øú��е�ֵ���� 
					if(place(monk)){  //�жϵ���ʱ��������ֵ�� 
						fun1(monk+1);
				}
				
			}
		}
	}
}

int main(){
	 
	fun1(0);

	return 0;
}
