#include <iostream>

using namespace std;

const int tamanho = 4;

void preencherMatrizMaior(int matriz1[tamanho][tamanho], int matriz2[tamanho][tamanho], int matrizMaior[tamanho][tamanho]) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            matrizMaior[i][j] = max(matriz1[i][j], matriz2[i][j]);
        }
    }
}


void imprimirMatriz(int matriz[tamanho][tamanho]) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matriz1[tamanho][tamanho];
    int matriz2[tamanho][tamanho];
    int matrizMaior[tamanho][tamanho];

   
    cout << "Digite os elementos da primeira matriz " << tamanho << "x" << tamanho << ":" << endl;
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            cin >> matriz1[i][j];
        }
    }

    
    cout << "Digite os elementos da segunda matriz " << tamanho << "x" << tamanho << ":" << endl;
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            cin >> matriz2[i][j];
        }
    }

   
    preencherMatrizMaior(matriz1, matriz2, matrizMaior);

    
    cout << "\nMatriz com os maiores valores:" << endl;
    imprimirMatriz(matrizMaior);

    return 0;
}



    

