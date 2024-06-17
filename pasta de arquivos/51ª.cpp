#include <iostream>

using namespace std;

int main() {
    int matriz[3][3];
    int transposta[3][3];

    cout << "Digite os elementos da matriz 3x3:\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            transposta[j][i] = matriz[i][j];
        }
    }

    cout << "\nMatriz original:\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
  
    cout << "\nTransposta da matriz:\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << transposta[i][j] << " ";
        }
        cout << endl;
    }
    
}

