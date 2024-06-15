#include <iostream>

#include <vector>

using namespace std;

int main() {

const int numeros = 5;
  
vector<double> number(numeros);



cout << "digite " << numeros << " numeros reais " << endl;

for(int i = 0; i < numeros; i++){

  cout << "numero:" << i +1 << ":";
  
  cin >> number[i];

}

int codigo;

cout << "\ndigite um codigo(1 para ordem normal, 2 para ordem inversa, e 0 para sair):";

cin >> codigo;

switch(codigo){

  case 0:
  cout << "programa finalizado" << endl; 
   break;
    case 1:
    cout << "ordem normal: " << endl;
    for(int i = 0; i < numeros; i++)
    {
      cout << number[i] << " ";
    }
  break;
  case 2:
    cout << "ordem inversa: " << endl;

    for(int i = numeros - 1; i >= 0; i--){

      cout << number[i] << " "; 
    }
  break;
  default:

  cout << "Código inválido. Por favor, digite 1 para ordem normal, 2 para ordem inversa, ou 0 para sair." << endl;
  break;
}

  
}
