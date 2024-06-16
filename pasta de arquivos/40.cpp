#include <iostream>
using namespace std;

int main() {
    const int linhas = 4;
    const int colunas = 4;
    int matriz[linhas][colunas];
    int count = 0;

    
    cout << "Digite os elementos da matriz " << linhas << "x" << colunas << ":\n";
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (matriz[i][j] > 10) {
                count++;
            }
        }
    }

    
    cout << "A matriz possui " << count << " valor(es) maior(es) que 10.\n";

    return 0;
}
