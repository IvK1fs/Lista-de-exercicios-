#include <iostream>

#include <vector>

using namespace std;

int main() {

const int numeros = 10;
  
vector<int> number(numeros);

int x;

int mult = 0;


cout << "digite " << numeros << " numeros reais " << endl;

for(int i = 0; i < numeros; i++){

  cout << "numero:" << i +1 << ":";
  
  cin >> number[i];

}

cout << "Digite o numero pra X: " << endl;

cin >> x;

for(int i = 0; i < numeros; i++){
  
  if(number[i] %  x== 0){

    mult++;
  }
  }
cout << "mutiplos de " << x << " encotrados no vetor: "<< endl;

for(int i =0; i < numeros; i++){
  if(number[i] % x==0){
    
    cout << number[i]<< " ";

}
 }

cout << endl; 
cout << "Total de multiplos de " << x << ": "<<  mult << endl;
  
}
