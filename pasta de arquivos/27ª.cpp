#include <iostream>

#include <vector>

#include <cmath>

using namespace std;

bool cuh(int num){

if(num <=1) 
  return false;

int lim = sqrt(num);

for(int i = 2; i <= lim; i++) {

  if(num % i == 0 ){
    return false;
  }
}
return true;
}
int main() {

const int size = 10; 

vector<int> numeros(size);

cout << "Digite " << size << " numeros inteiros: " << endl;

for(int i = 0; i < size; i++){

cin >> numeros[i];
}  
  cout<< endl;

cout << "numeros primos: " << endl;

for(int i = 0; i < size; i++){

if(cuh(numeros[i])){

  cout << "Número primo: " << numeros[i] << ", Posição: " << i +1 << endl;
 }
}
}
  
