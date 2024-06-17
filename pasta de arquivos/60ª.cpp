#include <iostream>
using namespace std;

const int LINHAS = 2;
const int COLUNAS = 2;

void lerMatriz(float matriz[LINHAS][COLUNAS], string nomeMatriz) {
    cout << "Digite os elementos da matriz " << nomeMatriz << ":\n";
    for (int i = 0; i < LINHAS; ++i) {
        for (int j = 0; j < COLUNAS; ++j) {
            cin >> matriz[i][j];
        }
    }
}

void somarMatrizes(float matriz1[LINHAS][COLUNAS], float matriz2[LINHAS][COLUNAS], float resultado[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; ++i) {
        for (int j = 0; j < COLUNAS; ++j) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

void subtrairMatrizes(float matriz1[LINHAS][COLUNAS], float matriz2[LINHAS][COLUNAS], float resultado[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; ++i) {
        for (int j = 0; j < COLUNAS; ++j) {
            resultado[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }
}

void adicionarConstante(float matriz[LINHAS][COLUNAS], float constante) {
    for (int i = 0; i < LINHAS; ++i) {
        for (int j = 0; j < COLUNAS; ++j) {
            matriz[i][j] += constante;
        }
    }
}

void imprimirMatriz(float matriz[LINHAS][COLUNAS], string nomeMatriz) {
    cout << "Matriz " << nomeMatriz << ":\n";
    for (int i = 0; i < LINHAS; ++i) {
        for (int j = 0; j < COLUNAS; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    float matriz1[LINHAS][COLUNAS], matriz2[LINHAS][COLUNAS], resultado[LINHAS][COLUNAS];
    char opcao;
    float constante;

    lerMatriz(matriz1, "A");
    lerMatriz(matriz2, "B");

    cout << "Escolha uma opção:\n";
    cout << "(a) Somar as duas matrizes\n";
    cout << "(b) Subtrair a matriz B da matriz A\n";
    cout << "(c) Adicionar uma constante às duas matrizes\n";
    cout << "(d) Imprimir as matrizes\n";
    cin >> opcao;

    switch (opcao) {
        case 'a':
            somarMatrizes(matriz1, matriz2, resultado);
            imprimirMatriz(resultado, "Soma");
            break;
        case 'b':
            subtrairMatrizes(matriz1, matriz2, resultado);
            imprimirMatriz(resultado, "Subtração");
            break;
        case 'c':
            cout << "Digite a constante: ";
            cin >> constante;
            adicionarConstante(matriz1, constante);
            adicionarConstante(matriz2, constante);
            imprimirMatriz(matriz1, "A com constante");
            imprimirMatriz(matriz2, "B com constante");
            break;
        case 'd':
            imprimirMatriz(matriz1, "A");
            imprimirMatriz(matriz2, "B");
            break;
        default:
            cout << "Opção inválida.\n";
    }

    return 0;
}
