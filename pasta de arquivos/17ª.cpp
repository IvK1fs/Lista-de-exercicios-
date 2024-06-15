#include <iostream>

#include <vector>

using namespace std;

int main() {

const int numeros = 10;
  
vector<double> number(numeros);



cout << "digite " << numeros << " numeros reais " << endl;

for(int i = 0; i < numeros; i++){

  cout << "numero:" << i +1 << ":";
  
  cin >> number[i];

}

for(int i = 0; i < numeros; i++){

  if(number[i] < 0){

    number[i] = 0;

  }
}

cout << "\nvetor de numeros modificados: " << endl;

for(int i = 0; i <numeros; i++) {

  cout << number[i] << endl;

}
cout<<endl;
}
