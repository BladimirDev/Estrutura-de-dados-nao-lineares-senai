#include <iostream>
using namespace std;


struct Node {
	int valor;
	Node* esquerdo;
	Node* direito;
};

int main(int agrc, char** argv){
	Node* raiz = new Node{10, nullptr, nullptr};
	raiz->esquerdo = new Node{5, nullptr, nullptr};
	raiz->direito = new Node{15, nullptr, nullptr};
	
	raiz->esquerdo->esquerdo = new Node{6, nullptr, nullptr};
	raiz->direito->direito = new Node{7, nullptr, nullptr};

	cout << *direito.direito;
	
	return 0;
}
