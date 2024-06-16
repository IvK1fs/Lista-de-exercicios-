#include <iostream>

#include <vector>

using namespace std;

int main() {

const int size = 10; 

vector<int> V(size);

vector<int> v1;

vector<int> v2;

cout << "Digite " << size << "numeros inteiros: "<< endl;

for(int i =0; i < size; i++) {
cout << "numero " << i+1 << ": ";
  cin >> V[i];

}
 for(int i =0; i < size; i++) {
  if(V[i] % 2 != 0){
    v1.push_back(V[i]);
 }
   else{
     v2.push_back(V[i]);
  
}
 } 

cout << "valores impares: " << endl;

for(int num : v1){

  cout << num << " ";
}

cout << endl;

cout << "valores pares: " << endl;

for(int num : v2){

  cout << num << " ";
}



  
}
