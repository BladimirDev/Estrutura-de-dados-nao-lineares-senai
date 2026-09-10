#include <iostream>
using namespace std;

struct Node {
	int key;
	Node* left;
	Node* right;
};

void inOrder(Node* root){
	if (root) {
		inOrder(root->left);
		cout << root->key << " ";
		inOrder(root->right);
	}
}

void preOrder(Node* root){
	if (root) {
		cout << root->key << " ";
		preOrder(root->left);
		preOrder(root->right);
	}
}

void postOrder(Node* root){
	if (root) {
		postOrder(root->left);
		postOrder(root->right);
		cout << root->key << " ";
	}
}


int main (){
	Node* raiz = new Node{10, nullptr, nullptr};
	raiz->left = new Node{5, nullptr, nullptr};
	raiz->right = new Node{15, nullptr, nullptr};
	
	raiz->left->left = new Node{2, nullptr, nullptr};
	raiz->left->right = new Node{7, nullptr, nullptr};
	
	raiz->right->right = new Node{20, nullptr, nullptr};

	inOrder(raiz);
	cout << '\n';
	preOrder(raiz);
	cout << '\n';
	postOrder(raiz);
	return 0;
}
