#include <iostream>
#include <cstring>

using namespace std;

#define N 50

char * deleteblank(char * str){
	int i = 0, j = 0;
	
	//while(*str == ' ') str ++;      //���ã�Ϊ�˺ͺ��汣��һ�� 
	while(str[j] == ' ') j ++;
	
	int len = strlen(str) - 1;
	while(str[len] == ' ') len --;
	str[len + 1] = '\0';
	
	while(str[j] != '\0'){           // ע��str[i] �� *str ���� 
		
		while(str[j] == ' '){
			j ++;
		}
		if(i != 0 && str[j-1] == ' '){   //����Ҫstr[j-2] == ' ' ,���������պű�Լ�� 
			str[i++] = ' ';
		}
		
		str[i++] = str[j++];
	}
	str[i] = '\0';
	
	return str;
}

int main(){
	char a[N];
	
	while(gets(a)){        //����������ո���ַ�������Ϊchar *����gets����Ϊstring������getline 
		cout << deleteblank(a) << endl;
	}
	return 0;
}
