#include <iostream>

using namespace std;

int main() {

const int size = 6;

int number[size];

int numeven[size];

int sumeven=0;

int numodd[size];

int cam = 0 ;

cout << "Digite "<< size << " números" << endl;

for(int i = 0; i < size; i++){

cout << "Número: " << i+1 << endl;

cin >> number[i];

}
  int impird= 0;
int parind = 0;

for(int i =0; i < size; i++){

if(number[i] % 2 == 0){

  numeven[parind++] = number[i];

  sumeven += number[i];
}
  else{
numodd[impird++] = number[i];
  
    cam++;
  }
}

cout << "Números pares inseridos: " << endl;

for(int i = 0;i < parind; i++){
  cout<< numeven[i] << " ";
  
}

cout << endl;

cout << "Soma dos numeros pares: " << sumeven << endl;

cout<<endl;
  
cout << "Numeros impares inseridos" << endl;
  for(int i=0; i < impird; i++){
    
  cout << numodd[i] << " ";
}

  cout<< endl;
  
cout << "quantidade de numeros impares inseridos: " << cam << endl;
  
}
