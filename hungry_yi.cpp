/*
289869954  结果 99999
125000000  结果 1 
*/

# include<iostream>
# include <tr1/unordered_map>
# include<queue>
 
using namespace std;
using namespace std::tr1;

#define MOD 1000000007LL
#define MAX 100001

int main(){
	long long x;
	while(cin >> x){
		
		queue<long long> x_que;
		x_que.push(x);
		unordered_map<long long, int> xNode_map;
		xNode_map[x] = 1;
		long long xx;
		
		while(x_que.size()){
			xx = x_que.front();
			x_que.pop();
			//cout<<xx<<endl;
			if((xx % MOD) == 0) break;
			if(xNode_map[xx] > MAX) break;	
			
			long long xp = ((xx << 2) + 3);
			cout<<xp<<endl;
			if(xNode_map.find(xp) == xNode_map.end()){
				x_que.push(xp);
				xNode_map[xp] = xNode_map[xx] + 1; 
			}
				
			xp = ((xx << 3)+ 7);
			cout<<xp<<endl;
			if(xNode_map.find(xp) == xNode_map.end()){
				x_que.push(xp);
				xNode_map[xp] = xNode_map[xx] + 1; 
			}	
		}
		cout<<"final:"<<xx<<endl;
		int a = ((xx % MOD != 0)? -1 : (xNode_map[xx]-1));
		cout << a << endl;
	}
	return 0;
}
