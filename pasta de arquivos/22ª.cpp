#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int tamanho = 10;
    vector<int> vetorA(tamanho);
    vector<int> vetorB(tamanho);
    vector<int> vetorC(tamanho * 2); // Vetor C terá tamanho 20 (10 pares + 10 ímpares)

    // Leitura dos vetores A e B
    cout << "Digite os " << tamanho << " números inteiros do vetor A:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << "Número " << (i + 1) << ": ";
        cin >> vetorA[i];
    }

    cout << "\nDigite os " << tamanho << " números inteiros do vetor B:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << "Número " << (i + 1) << ": ";
        cin >> vetorB[i];
    }

    // Preenchimento do vetor C
    for (int i = 0; i < tamanho; ++i) {
        vetorC[2 * i] = vetorA[i];       // Posições pares de C recebem elementos de A
        vetorC[2 * i + 1] = vetorB[i];   // Posições ímpares de C recebem elementos de B
    }

    // Impressão do vetor C na tela
    cout << "\nVetor C (Posições pares de A e ímpares de B):" << endl;
    for (int i = 0; i < tamanho * 2; ++i) {
        cout << vetorC[i] << " ";
    }
    cout << endl;

    return 0;
}
