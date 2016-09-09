#include <iostream>

using namespace std;

struct Link_Node{
	int data;
	Link_Node * next;
};

void reverseLink(Link_Node * head){
	Link_Node *pre = NULL;
	Link_Node *cur = head;
	Link_Node *temp;
	while(cur){
		temp = cur->next;
		cur->next = pre;
		pre = cur;
		cur = temp;
	}
	
	while(pre){
		cout << pre->data << endl;
		pre = pre->next;
	}
}

int main(){
	
	Link_Node a = {4,NULL};
	Link_Node b = {14,&a};
	Link_Node c = {3,&b};
	Link_Node d = {35,&c};
	reverseLink(&d);
	/*
	while(pt){
		cout << pt->data << endl;
		pt = pt->next;
	}
	*/
	
	return 0;
}
