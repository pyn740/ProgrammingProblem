#include <iostream>
#include <cstring>
#include <set>

#define N 100

using namespace std;

int main(){
	char str[N];
	while(gets(str)){
		set<char> strCount;
		char *ptr = str;
		while(*ptr != '\0'){
			//cout << *ptr << endl;
			
			if(*ptr >= 0 && *ptr <= 127){
				strCount.insert(*ptr);
			}
			
			ptr++;
		}
		
		cout << strCount.size() << endl;
	}	
	
	
	return 0;
}
