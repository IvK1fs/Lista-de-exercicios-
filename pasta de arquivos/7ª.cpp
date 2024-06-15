#include <iostream>

#include <vector>

using namespace std;

int main() {

vector<int> arr;
  
 cout << "insira 10 numeros inteiros: " << endl;

for (int i = 0; i < 10; i++) {

  int number;
  
  cout << "digite o " << i + 1 << " numero: ";
  
  cin >> number;
  
  arr.push_back(number);

}
  
int maiornumero = arr[0]; 

int maiorposi = 0;

for(int i =0; i < arr.size(); i++){

  if(arr[i] > maiornumero){
    
    maiornumero = arr[i];
    
  maiorposi = i;
      
  }
}

cout<< endl;
  
cout << "array inserido: ";
  

for(int i =0 ; i < arr.size(); i++){

cout << "" << arr[i];
  
}

  cout << endl;



cout << "maior numero: " << maiornumero << endl;

cout<< "posição do maior numero: " << maiorposi + 1 << endl;

}

  
