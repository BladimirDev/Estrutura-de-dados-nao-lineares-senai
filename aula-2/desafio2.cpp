#include <iostream>
//eU sOU bLADIMIR
using namespace std;

long long f1(int n) {
    long long passes = 0;

    for (int i = 0; i < n; i++) {
        passes++;
    }

    return passes;
}

long long f2(int n) {
    long long passes = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            passes++;
        }
    }

    return passes;
}

long long f3(int n) {
    long long passes = 0;

    for (int i = 0; i < n; i++) {
        int inicio = 0;
        int fim = n - 1;

        while (inicio <= fim) {
            passes++;

            int meio = (inicio + fim) / 2;

            if (meio == i) {
                break;
            }
            else if (meio < i) {
                inicio = meio + 1;
            }
            else {
                fim = meio - 1;
            }
        }
    }

    return passes;
}

int main() {
    int valores[] = {1000, 10000, 100000};

    cout << "n        f1        f2        f3" << endl;
    cout << "----------------------------------------" << endl;

    for (int n : valores) {
        cout << n << "        "
             << f1(n) << "        "
             << f2(n) << "        "
             << f3(n) << endl;
    }

    return 0;
}