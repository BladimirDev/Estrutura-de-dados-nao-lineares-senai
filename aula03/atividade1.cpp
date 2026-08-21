#include <iostream>
using namespace std;


struct Node {
	char valor;
	Node* esquerdo;
	Node* direito;
};

int main(int agrc, char** argv){
	Node* raiz = new Node{'F', NULL, NULL};
	raiz->esquerdo = new Node{'D', NULL, NULL};
	raiz->direito = new Node{'K', NULL, NULL};
	
	raiz->esquerdo->esquerdo = new Node{'A', NULL, NULL};
	raiz->esquerdo->direito = new Node{'E', NULL, NULL};
	
	raiz->direito->direito = new Node{'O', NULL, NULL};
	raiz->direito->esquerdo = new Node{'I', NULL, NULL};
	
	char arvore[] = {raiz->valor,
					raiz->direito->valor,
					raiz->esquerdo->valor,
					raiz->direito->direito->valor,
					raiz->direito->esquerdo->valor,
					raiz->esquerdo->direito->valor,
					raiz->esquerdo->esquerdo->valor};
	
	for(int i = 0; i <= 6; i++){
		cout << arvore[i] << endl;
	}
	
	return 0;
}
