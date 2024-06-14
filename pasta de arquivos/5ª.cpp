#include <iostream>

using namespace std;


const int tam_max = 10;

int main() {

  int arr[tam_max];

  int par = 0;

  cout << "insira 10 numeros inteiros: " << endl;


  for(int i = 0; i < tam_max; i++){
    cout << "numero: " << i + 1 << endl;

    
cin >> arr[i];

    
  }

  for(int i = 0; i < tam_max; i++) {

if(arr[i] % 2 == 0 ) {

  par++;
  
}
    
  }

cout << par << " numeros pares" << endl;


    
  }
  
