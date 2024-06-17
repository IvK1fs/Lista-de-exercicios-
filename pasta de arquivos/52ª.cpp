#include <iostream>

#include <cstdlib>  

#include <ctime>

using namespace std;

const int SIZE = 4;

void gerarMatriz(int matriz[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            matriz[i][j] = rand() % 20 + 1;

              }
                }
            }


            void matrizTriangularInferior(int matriz[SIZE][SIZE]) {
                for (int i = 0; i < SIZE; ++i) {
                        for (int j = i + 1; j < SIZE; ++j) {
                            matriz[i][j] = 0;
                        }
                    }
                }

void imprimirMatriz(int matriz[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    }
int main() {

 int matrizOriginal[SIZE][SIZE];

srand(time(nullptr));

gerarMatriz(matrizOriginal);


    cout << "Matriz Original:" << endl;
    imprimirMatriz(matrizOriginal);

    
    matrizTriangularInferior(matrizOriginal);

    
    cout << "Matriz Transformada (Triangular Inferior):" << endl;
    imprimirMatriz(matrizOriginal);

    
}
