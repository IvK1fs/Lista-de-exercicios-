#include <iostream>

using namespace std;

const int size = 10;


int main() {

int numeros[size];

int counter = 0 ;

cout << "Digite 10 numeros: " << endl;

while(counter < size){

int number;

bool found = false;

cout << "Digite o numero: "<< counter +1<< ": ";
  
cin >> number;

for(int i =0; i < counter; i++){

if(numeros[i] == number){

  found = true;

  break;
}
}

if(found) {


  cout << "numero repetido. Digite outro numero." << endl;
  
} else {

numeros[counter] = number;

  counter++;

  
}
}

cout << "numeros digitados: " << endl;

for(int i =0; i < size; i++){

cout << numeros[i] << " ";
  
}
cout << endl;
  
}
