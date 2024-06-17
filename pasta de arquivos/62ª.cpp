#include <iostream>
using namespace std;

const int SIZE = 3;

void calcularQuadradoMatriz(int A[SIZE][SIZE], int B[SIZE][SIZE]) {
    int temp[SIZE][SIZE];

    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            B[i][j] = 0;
        }
    }

    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            temp[i][j] = 0;
            for (int k = 0; k < SIZE; ++k) {
                temp[i][j] += A[i][k] * A[k][j];
            }
        }
    }

    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            B[i][j] = temp[i][j];
        }
    }
}

void lerMatriz(int matriz[SIZE][SIZE], string nomeMatriz) {
    cout << "Digite os elementos da matriz " << nomeMatriz << ":\n";
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cin >> matriz[i][j];
        }
    }
}

void imprimirMatriz(int matriz[SIZE][SIZE], string nomeMatriz) {
    cout << "Matriz " << nomeMatriz << ":\n";
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int A[SIZE][SIZE], B[SIZE][SIZE];

    lerMatriz(A, "A");

    calcularQuadradoMatriz(A, B);

    imprimirMatriz(A, "A");
    imprimirMatriz(B, "B");

    return 0;
}
