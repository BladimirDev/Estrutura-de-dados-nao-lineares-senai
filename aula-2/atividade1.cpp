#include <iostream>
using namespace std;

int exemplo(int n) {
	int cont = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cont++;
		}
	} 
	return cont;
}

int main () {
	// Calculando a execução do algoritmo, chegamos á conclusão de que: O resultado da contagem sempre vai ser n^2 Ex. n=10, cont=100
	
	// Comparação de contagem real
	cout << "Contagem para n = 10, 100, 1000 respectivamente" << endl;
	cout << exemplo(10) << endl;
	cout << exemplo(100) << endl;
	cout << exemplo(1000) << endl;
	// Olhando a comparação, conseguimos afirmar que a função tem a complexidade assintótica de O(n^2)
	return 0;
}