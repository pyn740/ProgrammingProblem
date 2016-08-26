#include <iostream>
#include <cstring>

using namespace std;

#define N 50

char * deleteblank(char * str){
	int i = 0, j = 0;
	
	//while(*str == ' ') str ++;      //可用，为了和后面保持一致 
	while(str[j] == ' ') j ++;
	
	int len = strlen(str) - 1;
	while(str[len] == ' ') len --;
	str[len + 1] = '\0';
	
	while(str[j] != '\0'){           // 注意str[i] 和 *str 区别 
		
		while(str[j] == ' '){
			j ++;
		}
		if(i != 0 && str[j-1] == ' '){   //不需要str[j-2] == ' ' ,这样单个空号被约简 
			str[i++] = ' ';
		}
		
		str[i++] = str[j++];
	}
	str[i] = '\0';
	
	return str;
}

int main(){
	char a[N];
	
	while(gets(a)){        //键盘输入带空格的字符串，若为char *则用gets，若为string，则用getline 
		cout << deleteblank(a) << endl;
	}
	return 0;
}
