#include <iostream>
using namespace std;

const int NUM_ALUNOS = 5;
const int NUM_COLUNAS = 4;

void lerMatriz(int matriz[NUM_ALUNOS][NUM_COLUNAS]) {
    for (int i = 0; i < NUM_ALUNOS; ++i) {
        for (int j = 0; j < NUM_COLUNAS - 1; ++j) {
            cin >> matriz[i][j];
        }
        matriz[i][NUM_COLUNAS - 1] = matriz[i][1] + matriz[i][2];
    }
}

int encontrarMaiorNotaFinal(int matriz[NUM_ALUNOS][NUM_COLUNAS]) {
    int maiorNotaFinal = matriz[0][NUM_COLUNAS - 1];
    int matriculaMaiorNota = matriz[0][0];

    for (int i = 1; i < NUM_ALUNOS; ++i) {
        if (matriz[i][NUM_COLUNAS - 1] > maiorNotaFinal) {
            maiorNotaFinal = matriz[i][NUM_COLUNAS - 1];
            matriculaMaiorNota = matriz[i][0];
        }
    }

    return matriculaMaiorNota;
}

double calcularMediaNotasFinais(int matriz[NUM_ALUNOS][NUM_COLUNAS]) {
    double somaNotasFinais = 0.0;

    for (int i = 0; i < NUM_ALUNOS; ++i) {
        somaNotasFinais += matriz[i][NUM_COLUNAS - 1];
    }

    return somaNotasFinais / NUM_ALUNOS;
}

int main() {
    int matrizAlunos[NUM_ALUNOS][NUM_COLUNAS];

    lerMatriz(matrizAlunos);

    int matriculaMaiorNota = encontrarMaiorNotaFinal(matrizAlunos);
    cout << matriculaMaiorNota << endl;

    double mediaNotasFinais = calcularMediaNotasFinais(matrizAlunos);
    cout << mediaNotasFinais << endl;

    return 0;
}
