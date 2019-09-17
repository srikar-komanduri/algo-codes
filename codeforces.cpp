#include <iostream>
using namespace std;

typedef struct node {
	int data;
	struct node * left;
	struct node * right;
}nd;

nd * newNode(int data) {
	nd * node = new nd;
	
	node->data = data;
	
	node->left = NULL;
	node->right = NULL;
	
	return node;
}

void inorder(nd * root) {
	if(root != NULL) {
		inorder(root->left);
		cout << root->data << " ";
		inorder(root->right);
	}
}

void insertNode(nd * root, int data) {
	if(data < root->data) {
		if(root->left == NULL) {
			nd * node = newNode(data);
			root->left = node;
		} else {
			insertNode(root->left, data);
		}
	} else {
		if(root->right == NULL) {
			nd * node = newNode(data);
			root->right = node;
		} else {
			insertNode(root->right, data);
		}
	}
}

int main() {
	int n,i=0,t;
	nd * root;
	cin >> n;
	while(i < n) {
		if(!i) {
			cin >> t;
			root = newNode(t);
		} else {
			cin >> t;
			insertNode(root, t);
		}
		i++;
	}
	inorder(root);
}
