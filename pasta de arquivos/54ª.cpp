#include <iostream>
using namespace std;

const int NUM_ALUNOS = 5;
const int NUM_QUESTOES = 10;

void calcularPontuacao(char respostasAlunos[NUM_ALUNOS][NUM_QUESTOES], char gabarito[NUM_QUESTOES], int resultados[NUM_ALUNOS]) {
    for (int i = 0; i < NUM_ALUNOS; ++i) {
        int pontuacao = 0;
        for (int j = 0; j < NUM_QUESTOES; ++j) {
            if (respostasAlunos[i][j] == gabarito[j]) {
                pontuacao++;
            }
        }
        resultados[i] = pontuacao;
    }
}


void imprimirResultados(int resultados[NUM_ALUNOS]) {
    for (int i = 0; i < NUM_ALUNOS; ++i) {
        cout << "Aluno " << i + 1 << ": Pontuação = " << resultados[i] << endl;
    }
}

int main() {
    char respostasAlunos[NUM_ALUNOS][NUM_QUESTOES];
    char gabarito[NUM_QUESTOES];
    int resultados[NUM_ALUNOS];

  
    cout << "Digite as respostas dos alunos (a, b, c ou d):" << endl;
    for (int i = 0; i < NUM_ALUNOS; ++i) {
        cout << "Aluno " << i + 1 << ":" << endl;
        for (int j = 0; j < NUM_QUESTOES; ++j) {
            cout << "Questão " << j + 1 << ": ";
            cin >> respostasAlunos[i][j];
        }
    }

 
    cout << "Digite o gabarito (a, b, c ou d):" << endl;
    for (int j = 0; j < NUM_QUESTOES; ++j) {
        cout << "Questão " << j + 1 << ": ";
        cin >> gabarito[j];
    }

    
    calcularPontuacao(respostasAlunos, gabarito, resultados);

    
    cout << "\nResultados dos Alunos:" << endl;
    imprimirResultados(resultados);

    return 0;
}
