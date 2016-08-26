#include <bits/stdc++.h>

using namespace std;

int m_strlen(const char * str){
	assert(str != NULL);
	
	int count = 0;
	while(*str++ != '\0'){
		count ++;
	}
	return count;
}

int m_strcmp(const char *str1, const char *str2){
	assert(str1 != NULL && str2 != NULL);
	int ref = 0;
	while(!(ref = *str1 - *str2) && *str1) {
		str1 ++;
		str2 ++;
	}
	
	if(ref > 0){
		ref = 1;
	}else if(ref < 0){
		ref = -1;
	}
		return ref;
} 

char * m_strcat1(char *str1,const char *str2){
	
	assert(str1 != NULL && str2 != NULL);
	
	char * address = str1;
	
	while(*str1++ != '\0');
	str1 --;
	while(*str2 != '\0'){
		*str1++ = *str2 ++;
	}
	*str1 = '\0';
	
	return address;
}

char * m_strcat2(char *str1,const char *str2){
	
	assert(str1 != NULL && str2 != NULL);
	
	char * address = str1;
	
	while(*str1){
		str1 ++;
	}
	
	while(*str1 ++ = *str2 ++);
	
	return address;
}

char * m_strcpy(char * str1, const char * str2){
	assert(str1 != NULL && str2 != NULL);
	
	char * address = str1;
	while((*str1 ++ = *str2 ++ ) != '\0');
	return address;
}


int main(){
	char a[20] = "addddggg";
	char b[] = "cdefg";
	int len = m_strlen(a);
	cout<<"len="<<len<<endl;
	
	cout<< m_strcmp(a,b)<<endl;
	
	//cout<< m_strcat1(a,b)<<endl; 
	
	cout<< m_strcat2(a,b)<<endl;
	
	cout<< m_strcpy(a,b)<<endl;
	
	return 0;
}
