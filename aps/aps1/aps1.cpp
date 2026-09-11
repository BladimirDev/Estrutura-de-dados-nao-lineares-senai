#include <iostream>
#include <string>
using namespace std;

struct Node {
    string name;
    Node* left;
    Node* right;
};

void preOrder(Node* root){
	if (root) {
		cout << root->name << " \n";
		preOrder(root->left);
		preOrder(root->right);
	}
}

int main () {
    Node* vovo =  new Node {"Trina Ramirez", nullptr, nullptr};

    // Filho 1
    vovo->left = new Node {"Anaiz Ramirez", nullptr, nullptr};
    
    //filho 2
    vovo->left->right = new Node {"Bladimir Ramirez", nullptr, nullptr};
    
    //filho 3
    vovo->left->right->right = new Node {"Angel Ramirez", nullptr, nullptr};

    //filho 1 1
    vovo->left->left = new Node {"Anna Estaba", nullptr, nullptr};
    
    //filho 1 2
    vovo->left->left->right = new Node {"Isaac Estaba", nullptr, nullptr};

    //filho 2 1
    vovo->left->right->left = new Node {"Laurins Villarroel", nullptr, nullptr};
    
    //filho 2 2
    vovo->left->right->left->right = new Node {"Loreinins Villarroel", nullptr, nullptr};
    
    //filho 2 3
    vovo->left->right->left->right->right = new Node {"Bladimir Villarroel", nullptr, nullptr};

    //filho 2 4
    vovo->left->right->left->right->right->right = new Node {"Valeria Villarroel", nullptr, nullptr};

    //filho 3 1
    vovo->left->right->right->left = new Node {"Zuriangel Osuna", nullptr, nullptr};
    //filho 3 2
    vovo->left->right->right->left->right = new Node {"Abraham Osuna", nullptr, nullptr};

    preOrder(vovo);

    return 0;
}