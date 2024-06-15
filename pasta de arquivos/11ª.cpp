#include <iostream>

#include <vector>

using namespace std;



int main() {

const int tamanho_vetor = 10;
  
vector<double> number;

int numNegativos = 0;

double somapositivo = 0.0;

cout << "digite " << tamanho_vetor << " numeros reais: " << endl;
  
for(int i = 0; i < tamanho_vetor; i++){
  
  double num;

  cout << "numero " << i + 1 << ": ";

  cin >> num;
  
  number.push_back(num);

  if(num < 0) {

     numNegativos++;
    
  }
    
  else{

    somapositivo += num;
    
  }
    
}

cout << "quantidade de numeros negativos: " << numNegativos << endl;

cout<< "soma dos positivos: " << somapositivo << endl;
  
return 0;
  
}

  
