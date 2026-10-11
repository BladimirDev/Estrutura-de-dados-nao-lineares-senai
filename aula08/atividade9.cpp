#include <iostream>
using namespace std;

#define MAX 100

class Fila {
private:
    int arr[MAX];
    int tamanho;

public:
    Fila() {
        tamanho = 0;
    }

    void insert(int x) {
        if (tamanho == MAX) {
            cout << "Fila cheia!" << endl;
            return;
        }

        int i = tamanho;
        arr[i] = x;
        tamanho++;

        while (i > 0 && arr[i] > arr[(i - 1) / 2]) {
            int temp = arr[i];
            arr[i] = arr[(i - 1) / 2];
            arr[(i - 1) / 2] = temp;

            i = (i - 1) / 2;
        }
    }

    int getMax() {
        if (tamanho == 0) {
            cout << "Fila vazia!" << endl;
            return -1;
        }

        return arr[0];
    }

    void deleteMax() {
        if (tamanho == 0) {
            cout << "Fila vazia!" << endl;
            return;
        }

        arr[0] = arr[tamanho - 1];
        tamanho--;

        int i = 0;

        while (true) {
            int maior = i;
            int esquerda = 2 * i + 1;
            int direita = 2 * i + 2;

            if (esquerda < tamanho && arr[esquerda] > arr[maior]) {
                maior = esquerda;
            }

            if (direita < tamanho && arr[direita] > arr[maior]) {
                maior = direita;
            }

            if (maior == i) {
                break;
            }

            int temp = arr[i];
            arr[i] = arr[maior];
            arr[maior] = temp;

            i = maior;
        }
    }

    void showQueue() {
        if (tamanho == 0) {
            cout << "Fila vazia!" << endl;
            return;
        }

        cout << "Fila: ";

        for (int i = 0; i < tamanho; i++) {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
};

int main() {
    Fila queue;

    queue.insert(30);
    queue.insert(10);
    queue.insert(50);
    queue.insert(40);
    queue.insert(20);

    cout << "Fila atual:" << endl;
    queue.showQueue();

    cout << "Maior elemento: " << queue.getMax() << endl;

    queue.deleteMax();

    cout << "Fila depois de remover o maior:" << endl;
    queue.showQueue();

    cout << "Novo maior elemento: " << queue.getMax() << endl;

    return 0;
}
