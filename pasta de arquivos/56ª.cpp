#include <iostream>
using namespace std;

const int NUM_ALUNOS = 10;
const int NUM_PROVAS = 3;

int piorNota(int notasAlunos[NUM_ALUNOS][NUM_PROVAS], int aluno) {
    int pior = notasAlunos[aluno][0];
    for (int i = 1; i < NUM_PROVAS; ++i) {
        if (notasAlunos[aluno][i] < pior) {
            pior = notasAlunos[aluno][i];
        }
    }
    return pior;
}

int main() {
    int notasAlunos[NUM_ALUNOS][NUM_PROVAS];
    int contPiorProva1 = 0, contPiorProva2 = 0, contPiorProva3 = 0;

    for (int i = 0; i < NUM_ALUNOS; ++i) {
        for (int j = 0; j < NUM_PROVAS; ++j) {
            cin >> notasAlunos[i][j];
        }
    }

    for (int i = 0; i < NUM_ALUNOS; ++i) {
        int pior = piorNota(notasAlunos, i);
        if (notasAlunos[i][0] == pior) {
            contPiorProva1++;
        } else if (notasAlunos[i][1] == pior) {
            contPiorProva2++;
        } else if (notasAlunos[i][2] == pior) {
            contPiorProva3++;
        }
    }

    cout << contPiorProva1 << " " << contPiorProva2 << " " << contPiorProva3 << endl;

    return 0;
}
