#include <iostream>

#include <vector>

#include <climits>

using namespace std;

int main() {

const int numeros = 5;
  
vector<double> number;

int valores;

int maior = INT_MIN;

int menor = INT_MAX;

double soma =0.0;

double media;

cout << "digite " << numeros << " numeros " << endl;

for(int i = 0; i < numeros; i++){

  cout << "numero:" << i +1 << ":";
  
  cin >> valores;

  number.push_back(valores);

  if(valores > maior){

    maior = valores;
    
  }
  
  if(valores < menor){

    menor = valores;
    
  }

soma += valores;
  
}

media = (soma) / (numeros);

cout << "\nvalores lidos: " << endl;

for(int i =0; i < numeros; i++) {
  
  cout << number[i] << " ";

}

cout << endl;


cout << "maior valor: " << maior << endl;
  
cout << "menor valor: " << menor << endl;
  
cout <<  "media: " << media << endl;
  
}

  
