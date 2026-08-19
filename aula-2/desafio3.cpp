#include <iostream>

using namespace std;

long long bubbleSortPasses(int n) {
    long long passes = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            passes++;
        }
    }

    return passes;
}

long long mergeSortPasses(int v[], int inicio, int fim) {
    if (inicio >= fim) {
        return 0;
    }

    int meio = (inicio + fim) / 2;

    long long passes = 0;

    passes += mergeSortPasses(v, inicio, meio);
    passes += mergeSortPasses(v, meio + 1, fim);

    int i = inicio;
    int j = meio + 1;

    while (i <= meio && j <= fim) {
        passes++;

        if (v[i] <= v[j]) {
            i++;
        }
        else {
            j++;
        }
    }

    return passes;
}

int main() {

    int n = 1000000;

    int* vetor = new int[n];

    for (int i = 0; i < n; i++) {
        vetor[i] = n - i;
    }

    long long bubble = bubbleSortPasses(n);

    long long merge = mergeSortPasses(vetor, 0, n - 1);

    cout << "Quantidade de elementos: " << n << endl;
    cout << endl;

    cout << "Bubble Sort: " << bubble << " comparacoes" << endl;
    cout << "Merge Sort: " << merge << " comparacoes" << endl;

    delete[] vetor;

    return 0;
}