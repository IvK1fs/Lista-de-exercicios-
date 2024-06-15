#include <iostream>

#include <vector>


using namespace std;

int main() {

const int numeros = 5;
  
vector<double> number;

int valores;

int posimaior = 0;

int posimenor = 0;


cout << "digite " << numeros << " numeros " << endl;

for(int i = 0; i < numeros; i++){

  cout << "numero:" << i +1 << ":";
  
  cin >> valores;

  number.push_back(valores);

  if(number[i] > number[posimaior]){

    posimaior = i;
    
  }
  
  if(number[i] < number[posimenor]){

    posimenor = i;
    
  }


  
}



cout << "\nvalores lidos: " << endl;

for(int i =0; i < numeros; i++) {
  
  cout << number[i] << " ";

}

cout << endl;
  
cout<< "maior posição: " << posimaior+1 << endl;
  
cout << "menor valor: " << posimenor+1 << endl;
  

  
}
