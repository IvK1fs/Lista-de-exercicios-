#include <iostream>

#include <vector>

#include <string>

using namespace std;

int main() {

int numero = 1;
  
vector<int> numbers;

while(numbers.size() < 100){
  
  if(numero %7 != 0||to_string(numero).back() == 7){

    numbers.push_back(numero);
}
numero++;

}

cout << "os primeiros 100 numeros naturais que nao sao multiplos de 7 ou terminam com 7 sao:"<< endl;

for(int i =0; i < 100; i++){
  
  cout << numbers[i] << endl;

  
  cout << endl;
}

  
}
