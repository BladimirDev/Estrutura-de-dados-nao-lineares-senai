#include <iostream>
using namespace std;

int somar (int n) { //função feita por mim
    int aux = n;
    for (int i = 0; i<aux ; i++) {
        n = n + i;
    };
    return n;
};


int soma_constante (int n) { // exemplo de soma constante
    return n * (n+1) / 2;
}

int soma_linear(int n) { // exemplo de soma linear
    int soma = 0;
    for (int i = 1; i <= n; i++) {
        soma += i;
    }
    return soma;
}

int main (){
    int n = 0;
    cout << "Digite o valor: ";
    cin >> n;
    cout << somar(n);
    cout << soma_constante(n);
    cout << soma_linear(n);
}