#include <iostream>
#include <algorithm>

using namespace std;

struct Link_Node{
	int data;
	Link_Node * next;
};

bool isLoop(Link_Node * head){
	Link_Node * p1 = head;
	Link_Node * p2 = head;
	while(p2){
		p1 = p1->next;
		p2 = p2->next->next;
		if(p1 == p2) return true;
	}
	if(!p2){
		return false;
	}
}

int main(){
	
	Link_Node a = {4,NULL};
	Link_Node b = {14,&a};
/*
	a.data = 4;
	a.next = &b;
	b.data = 12;
	b.next = &a;
	*/
	Link_Node *pt = &b;
	cout << isLoop(pt) << endl;
	/*
	while(pt){
		cout << pt->data << endl;
		pt = pt->next;
	}
	*/
	
	return 0;
}
