/*
单词逆转 （循环移位） 
*/
#include <bits/stdc++.h>

using namespace std;

#define N 50

string reverseSentence1(string str1){
 	
 	stringstream strstream;
 	strstream << str1;
 	string a;
 	
 	vector<string> aVec;
 	
 	while (strstream >> a){
		aVec.push_back(a);
		//cout << aVec.front() << "," << aVec.back() << endl;
	 }
 
	strstream.clear();
	strstream.str("");
	
	 
	vector<string>::reverse_iterator start = aVec.rbegin();
 	vector<string>::reverse_iterator last = aVec.rend();
 
 //方法一 
 /*
 	while(start != last){

 		strstream << *start;
 		strstream << " ";
 		start ++;
	 }
	 
	 //strstream >> a;  //只能输出一个单词 
	 a = strstream.str();
*/	 
	 
 //方法二
 	a = ""; 
 	while(start != last){
		if(start != last -1){
			a = a + *start + " ";
		}else{
			a = a + *start;
		}
 		start ++;
	 }
	 
	 return a;
	 	 
/*
	for(int i = 0; i < aVec.size(); i ++){
		cout << aVec[i] << endl;
	}
*/	 
	 
}

void reverse(char * start, char *end){
	char tem;
	while(start < end){
		tem = *start;
		*start = *end;
		*end = tem;
		start ++;    //PS2
		end --;
	}
}

char * reverseSentence2(char * str1){
	
	char * pStart = str1;
	char * pEnd = str1;
	
	while(*pEnd != '\0'){
		pEnd ++;
	}
	 
	pEnd --;
	reverse(pStart,pEnd);

	pEnd = pStart;
	while(*pStart != '\0'){
		if(*pStart == ' '){
			pStart ++;
			pEnd ++;
		}else if(*pEnd == ' ' || *pEnd == '\0'){
			reverse(pStart,-- pEnd);       //PS2
			pStart = ++ pEnd;
		}else{
			pEnd ++;
		}
	}
	return str1;
}

int main(){
	
	string a = "Today is Friday!";
	cout << reverseSentence1(a) << endl;
	
	char b[N] = "Today is Friday!";
	cout << reverseSentence2(b) << endl;
		
	return 0;
}
