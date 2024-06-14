#include <iostream>

#include <climits>


using namespace std;


const int tam_max = 10;

int main() {

  int arr[tam_max];

  int maior = INT_MIN;

  int menor = INT_MAX;
  

  cout << "insira 10 numeros inteiros: " << endl;


  for(int i = 0; i < tam_max; i++){
    
    cout << "numero: " << i + 1 << endl;
    
    cin >> arr[i];

if(arr[i] > maior){

maior = arr[i];
  
}
    
 if(arr[i] < menor){

 menor = arr[i];
    }
    
  }

  cout << "o menor numero é: " << menor << endl;
    
  cout << "o maior numero é: " << maior << endl;




}
