#include <iostream>
using namespace std;

const int SIZE = 3;

void multiplicarMatrizes(int A[SIZE][SIZE], int B[SIZE][SIZE], int C[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            C[i][j] = 0;
            for (int k = 0; k < SIZE; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
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
    int A[SIZE][SIZE], B[SIZE][SIZE], C[SIZE][SIZE];

    lerMatriz(A, "A");
    lerMatriz(B, "B");

    multiplicarMatrizes(A, B, C);

    imprimirMatriz(A, "A");
    imprimirMatriz(B, "B");
    imprimirMatriz(C, "C");

    return 0;
}
