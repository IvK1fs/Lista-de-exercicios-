#include <iostream>
using namespace std;

const int LINHAS = 3;
const int COLUNAS = 6;

void imprimirMatriz(float matriz[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; ++i) {
        for (int j = 0; j < COLUNAS; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

float somaColunasImpares(float matriz[LINHAS][COLUNAS]) {
    float soma = 0.0;
    for (int j = 0; j < COLUNAS; j += 2) {
        for (int i = 0; i < LINHAS; ++i) {
            soma += matriz[i][j];
        }
    }
    return soma;
}

float mediaSegundaQuartaColuna(float matriz[LINHAS][COLUNAS]) {
    float soma = 0.0;
    for (int i = 0; i < LINHAS; ++i) {
        soma += matriz[i][1];
        soma += matriz[i][3];
    }
    return soma / (2 * LINHAS);
}

void substituirSextaColuna(float matriz[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; ++i) {
        matriz[i][5] = matriz[i][0] + matriz[i][1];
    }
}

int main() {
    float matriz[LINHAS][COLUNAS];

    for (int i = 0; i < LINHAS; ++i) {
        for (int j = 0; j < COLUNAS; ++j) {
            cin >> matriz[i][j];
        }
    }

    float somaImpares = somaColunasImpares(matriz);
    cout << somaImpares << endl;

    float media = mediaSegundaQuartaColuna(matriz);
    cout << media << endl;

    substituirSextaColuna(matriz);

    imprimirMatriz(matriz);

    return 0;
}
