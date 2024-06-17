#include <iostream>
using namespace std;

const int DIMENSAO = 3;

void somaColunas(int matriz[DIMENSAO][DIMENSAO], int vetorSoma[DIMENSAO]) {
    for (int col = 0; col < DIMENSAO; ++col) {
        int soma = 0;
        for (int lin = 0; lin < DIMENSAO; ++lin) {
            soma += matriz[lin][col];
        }
        vetorSoma[col] = soma;
    }
}

int main() {
    int matriz[DIMENSAO][DIMENSAO];
    int vetorSoma[DIMENSAO];

    for (int lin = 0; lin < DIMENSAO; ++lin) {
        for (int col = 0; col < DIMENSAO; ++col) {
            cin >> matriz[lin][col];
        }
    }

    somaColunas(matriz, vetorSoma);

    for (int i = 0; i < DIMENSAO; ++i) {
        cout << vetorSoma[i] << " ";
    }
    cout << endl;

    return 0;
}
