#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int tamanho = 5;
    vector<double> vetorX(tamanho);
    vector<double> vetorY(tamanho);

    
    cout << "Digite os " << tamanho << " números reais do vetor X:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << "Número " << (i + 1) << ": ";
        cin >> vetorX[i];
    }

    cout << "\nDigite os " << tamanho << " números reais do vetor Y:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << "Número " << (i + 1) << ": ";
        cin >> vetorY[i];
    }

    
    double produtoEscalar = 0.0;
    for (int i = 0; i < tamanho; ++i) {
        produtoEscalar += vetorX[i] * vetorY[i];
    }

    
    cout << "\nVetor X:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << vetorX[i] << " ";
    }
    cout << endl;

    cout << "\nVetor Y:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << vetorY[i] << " ";
    }
    cout << endl;

    
    cout << "\nProduto Escalar (X.Y): " << produtoEscalar << endl;

    return 0;
}
