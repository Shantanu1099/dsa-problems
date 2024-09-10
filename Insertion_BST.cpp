#include <bits/stdc++.h>
using namespace std;

struct BstNode
{
	int data;
	BstNode* left;
	BstNode* right;
};

BstNode* GetNewNode(int data) {
	BstNode* newNode = new BstNode();
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

// ALways return the rootPtr coz we need to store it in root->left/right when doing recursion & also in int main fn
BstNode* InsertNode(BstNode* rootPtr, int data) {
	if (rootPtr == NULL) {
		rootPtr = GetNewNode(data);
	} 
	else if(data <= rootPtr->data) {
		rootPtr->left = InsertNode(rootPtr->left, data);
	}
	else {
		rootPtr->right = InsertNode(rootPtr->right, data);
	}
	return rootPtr;
}

int main() {
	BstNode* rootPtr = NULL;
	int data;
	cout << "Give node data : " << endl;
	cin >> data;
	rootPtr = InsertNode(rootPtr, data);
}
