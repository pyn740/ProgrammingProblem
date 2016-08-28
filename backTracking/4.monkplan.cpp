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

int plan[N];//下标为和尚 值为星期几 

int place(int idx){  //第idx个和尚排在plan【idx】是否合理，即判断之前有没有相同日值日的 
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
		for(int i = 0; i < 7; i ++){  //遍历每天 
			if(a[monk][i] == 1){      //该和尚可在第i天值日 
					plan[monk] = i;   //设置该和尚的值日天 
					if(place(monk)){  //判断当天时候有人已值日 
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
