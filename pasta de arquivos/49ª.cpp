
#include <iostream>
using namespace std;

const int SIZE = 3; 

int main() {
     int matriz[SIZE][SIZE];
       

    cout << "Digite os elementos da matriz " << SIZE << "x" << SIZE << ":" << endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
        
    int soma = 0;
    for (int i = 0; i < SIZE; ++i) {
        soma += matriz[i][i];
        
    }
     cout << "A soma dos elementos da diagonal principal da matriz é: " << soma << endl;

        
    }

