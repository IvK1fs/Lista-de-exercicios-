#include <iostream>

#include <vector>

using namespace std;

bool pares(int n) {
    return n % 2 == 0;
}

int main() {

const int alunos = 15;
  
vector<double> notas;

double soma = 0.0;

for (int i = 0; i < alunos; i++){

  double nota;

  cout<< "insira a nota do aluno " << i + 1 << ": ";

  cin >> nota;

  notas.push_back(nota);

  soma += nota;

}

double mediageral = (soma) / (alunos);

cout << "a media geral da turma é: " << mediageral << endl;

}
