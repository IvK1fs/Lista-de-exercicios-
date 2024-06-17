
#include <iostream>
using namespace std;



int main() {
    int matriz[3][3];
    int soma_diagonal_secundaria = 0;
       

   
        cout << "Digite os elementos da matriz 3x3:\n";
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                cout << "Elemento [" << i << "][" << j << "]: ";
                cin >> matriz[i][j];
            }
        }
    for (int i = 0; i < 3; ++i) {
        soma_diagonal_secundaria += matriz[i][2 - i];
    }


    cout << "\nMatriz inserida:\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    
    }
cout << "\nA soma dos elementos da diagonal secundária é: " << soma_diagonal_secundaria << endl;

        
    
}



    
