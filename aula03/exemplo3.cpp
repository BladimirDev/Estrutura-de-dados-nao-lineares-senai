#include <iostream>
using namespace std;

struct Produto {
	string nome;
	double preco;
	
	void mostrar(){
		cout << "Produto: " << nome
			 << " - R$" << preco << endl;
	};
};

int main(){
	Produto p1 = {"Notebook", 3500.00};
	p1.mostrar();
	
	Produto p2 = {"Monitor", 750.00};
	p2.mostrar();
	
	
}
