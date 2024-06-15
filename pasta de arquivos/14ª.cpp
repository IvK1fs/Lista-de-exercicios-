#include <iostream>

#include <vector>

#include <set>

using namespace std;

int main() {

const int numeros = 10;
  
vector<double> number(numeros);

set<int> valoresrep;




cout << "digite " << numeros << " numeros " << endl;

for(int i = 0; i < numeros; i++){

  cout << "numero:" << i +1 << ":";
  
  cin >> number[i];

}

bool repencounter = false;


for(int i = 0; i < numeros; i++) {
  
  if(valoresrep.count(number[i]) > 0 ){
    
     repencounter = true;

    cout << "valor repetido " << number[i] << endl;
    
  }
  else {
    
    valoresrep.insert(number[i]);
    
  }
}
if(!repencounter){

  cout << "nenhum valor repetido encontrado" << endl;
}

}
