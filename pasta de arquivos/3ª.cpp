#include <iostream>

using namespace std;

const int tamanho = 10;

void calcularquadrado(int vetorog[], int vetorquadrado[]){

  for (int i =0; i < tamanho; i++){

    vetorquadrado[i] = vetorog[i] * vetorog[i];

  }

}
void imprimirvetor(int vetor[], int tamanho){

  cout << "[";

  for(int i =0; i < tamanho; i++){

    cout << vetor[i];

  if (i < tamanho -1){

    cout << ", ";  
      }

}

cout << "]";

}
int main() {

  int vetorog[tamanho];

  int vetorquadrado[tamanho];

  cout << "digite " << tamanho << " numeros: " << endl;

  for( int i = 0; i < tamanho ; i++){

    cout << "número " << i+ 1 << ": ";

    cin >> vetorog[i];

  }

calcularquadrado( vetorog, vetorquadrado);

  cout <<endl << "original: ";

  imprimirvetor( vetorog,  tamanho);

cout << endl << "vetor quadrado: ";
  
imprimirvetor( vetorquadrado,tamanho);


return 0;
  
}
