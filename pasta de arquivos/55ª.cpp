#include <iostream>
using namespace std;

const int NUM_ALUNOS = 3;
const int NUM_QUESTOES = 10;


void corrigirProva(char gabarito[NUM_QUESTOES], int matriculas[NUM_ALUNOS], char respostasAlunos[NUM_ALUNOS][NUM_QUESTOES], int notas[NUM_ALUNOS], double& percentualAprovacao) {
    percentualAprovacao = 0.0;
    for (int i = 0; i < NUM_ALUNOS; ++i) {
        int nota = 0;
        for (int j = 0; j < NUM_QUESTOES; ++j) {
            if (respostasAlunos[i][j] == gabarito[j]) {
                nota++;
            }
        }
        notas[i] = nota;
        cout << "Aluno " << matriculas[i] << ": Respostas = ";
        for (int j = 0; j < NUM_QUESTOES; ++j) {
            cout << respostasAlunos[i][j] << " ";
        }
        cout << ", Nota = " << nota << endl;
        if (nota >= 7) {
            percentualAprovacao += 1.0 / NUM_ALUNOS * 100;
        }
    }
}

int main() {
    char gabarito[NUM_QUESTOES];
    int matriculas[NUM_ALUNOS];
    char respostasAlunos[NUM_ALUNOS][NUM_QUESTOES];
    int notas[NUM_ALUNOS];
    double percentualAprovacao;

    
    cout << "Digite o gabarito (10 respostas a, b, c, d ou e):" << endl;
    for (int i = 0; i < NUM_QUESTOES; ++i) {
        cout << "Questão " << i + 1 << ": ";
        cin >> gabarito[i];
    }

    
    for (int i = 0; i < NUM_ALUNOS; ++i) {
        cout << "\nDigite a matrícula do aluno " << i + 1 << ": ";
        cin >> matriculas[i];
        cout << "Digite as respostas do aluno " << i + 1 << " (10 respostas a, b, c, d ou e):" << endl;
        for (int j = 0; j < NUM_QUESTOES; ++j) {
            cout << "Questão " << j + 1 << ": ";
            cin >> respostasAlunos[i][j];
        }
    }

    
    cout << "\nResultados da Turma:" << endl;
    corrigirProva(gabarito, matriculas, respostasAlunos, notas, percentualAprovacao);

    
    cout << "\nPercentual de Aprovação: " << percentualAprovacao << "%" << endl;

    return 0;
}

