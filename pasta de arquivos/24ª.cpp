#include <iostream>
#include <limits> 

using namespace std;

int main() {
    const int total_alunos = 10;
    int numero_aluno;
    double altura;
    int aluno_mais_baixo, aluno_mais_alto;
    double altura_mais_baixa = numeric_limits<double>::max();
    double altura_mais_alta = numeric_limits<double>::min();

    for (int i = 0; i < total_alunos; ++i) {
        cout << "Digite o número do aluno e sua altura (em metros), separados por espaço:" << endl;
        cin >> numero_aluno >> altura;

        if (altura < altura_mais_baixa) {
            altura_mais_baixa = altura;
            aluno_mais_baixo = numero_aluno;
        }

        if (altura > altura_mais_alta) {
            altura_mais_alta = altura;
            aluno_mais_alto = numero_aluno;
        }
    }

    cout << "\nAluno mais baixo:" << endl;
    cout << "Número do aluno: " << aluno_mais_baixo << endl;
    cout << "Altura: " << altura_mais_baixa << " metros" << endl;

    cout << "\nAluno mais alto:" << endl;
    cout << "Número do aluno: " << aluno_mais_alto << endl;
    cout << "Altura: " << altura_mais_alta << " metros" << endl;

    return 0;
}
