#include <iostream>

using namespace std;

int main() {
  
  const int size = 8;
  
  int vetor[size];

  int x , y;

  cout << "digite os valores do vetor: " << endl;

  for(int i = -0; i < size; i++){

    cout << "digite o valor para a posição " << i << ": " << endl;

    cin >> vetor[i];
    
  }

  cout << "Digite os valores de x e y (entre 0 e 7): " << endl;

  cin >> x >> y;
  
  if(x >= 0 && x < size && y >= 0 && y < size){

    int soma = vetor[x] + vetor [y];
    
    cout << "a soma das posições " << x << " é " <<  y << " igual a: " << soma << endl;
    
  }
     else{

       cout << "posições invalidas" << endl;
       
     }
  return 0;
  
}