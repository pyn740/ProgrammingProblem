#include <iostream> 
#include <map>
#include <vector>
 
#define N 7 
using namespace std; 

int a[7][7];
vector<vector<int> > finalRes;
int plan[N]; 
int sum;
 
int place(int idx){ 
 	for(int i = 0; i < idx ; i ++){ 
 		if(plan[i] == plan[idx]) return 0; 
 	} 
 	return 1; 
 } 
 
 
void changeIndexAndValue(int a[]){
 	int i;
 	map<int,int> res;
 	for(i = 0; i < N; i++){
 		res[a[i]] = i;
	 }
	vector<int> fRes;
	for(i = 0; i < N; i++){
		fRes.push_back(res[i]+1);

	}
	finalRes.push_back(fRes);
 }
 
 void fun1(int monk){ 
 	if(monk >= N){
 		sum ++;
 		changeIndexAndValue(plan);
 	}else{ 
 		for(int i = 0; i < 7; i ++){ 
 			if(a[monk][i] == 1){      
 				plan[monk] = i;   
 				if(place(monk)){   
 						
 					fun1(monk+1); 
 				}	 
 			} 
 		} 
 	} 
 } 
 
 
 int main(){ 
 	  
 	int i,j;
 	
 	for(i = 0; i < N; i ++){
 		for(j = 0; j < N; j ++){
 			cin >> a[i][j];
	 	}
	}
	
	sum = 0;
 	fun1(0); 
 	
 	cout << sum << endl;
 	
 	for(i = 0; i < sum; i ++){
 		for(j = 0; j < N; j ++){
 			if(j != N-1){
 				cout << finalRes[i][j] << " ";
			 }else{
			 	cout << finalRes[i][j];
			 }
 			
	 	}
	 	cout << endl;
	}

 	return 0; 
 } 

