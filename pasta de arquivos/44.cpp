#include <iostream>
using namespace std;

const int size =5;

void searchvalue(int mt[size][size], int value){

bool found = false;
int line,col;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
          if(mt[i][j] == value){
          found = true;

            line =i;
              col= j;
            break;
          }
          }
        if(found){
            break;
        }
          }
    if(found) {

cout << "valor " << value <<" encontrado na matriz: na linha " << line << " e coluna " << col << endl;
        
    } else {

        cout << "valor " << value << " não encontrado na matriz" << endl;
    }

    
}


int main() {
int mt[size][size];
int valuex;


    cout << "Digite os elementos da matriz " << size << "x" << size << ":" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> mt[i][j];
        }
    }
    cout << "Digite o valor que deseja buscar na matriz: ";
    cin >> valuex;

searchvalue(mt, valuex);
    }

