#include <iostream>

using namespace std;

struct BinaryTreeNode{
	int value;
	BinaryTreeNode* left;
	BinaryTreeNode* right;
};

void mirrorTree(BinaryTreeNode * pNode){
	if(pNode == NULL) return;
	if(pNode->left == NULL && pNode->right == NULL){
		return;
	}
	BinaryTreeNode * temp = pNode->left;
	pNode->left = pNode->right;
	pNode->right = temp;
	
	if(pNode->left != NULL){
		mirrorTree(pNode->left);
	}
	if(pNode->right != NULL){
		mirrorTree(pNode->right);
	}
}

int main(){
	return 0;
}

