#include <iostream>

#include <vector>

using namespace std;

int main() {

vector<int> arr;
  
 cout << "insira 6 numeros inteiros: " << endl;

for (int i = 0; i < 6; i++) {

  int number;
  
  cout << "digite o " << i + 1 << " numero: ";
  
  cin >> number;
  
  arr.push_back(number);

}

cout << "ordem inversa dos numeros digitados: " << endl;

for (int i = arr.size() -1;i >= 0; i--){

  cout << "{"<<arr[i]<< "}" << endl;
}
  

}

  
