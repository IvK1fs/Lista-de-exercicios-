#include <iostream>

#include <vector>

using namespace std;

bool pares(int n) {
    return n % 2 == 0;
}

int main() {

vector<int> arr;
  
 cout << "insira 6 numeros pares inteiros: " << endl;

for (int i = 0; i < 6; i++) {

  int number;
  
  cout << "digite o " << i + 1 << " numero par: ";
  
  cin >> number;
  
  if(pares(number)){
    
  arr.push_back(number);
    
    i++;}
    
   else{
   
     cout << "numero invalido. digite um numero par." << endl;
     return 0;
    
  }
  }


cout << "ordem inversa dos numeros digitados: " << endl;

for (int i = arr.size() -1;i >= 0; i--){

  cout << "{"<<arr[i]<< "}" << endl;
}

