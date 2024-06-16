#include <iostream>
#include <vector>
using namespace std;


void trianguloDePascal(int n) {
    
    vector<vector<int>> triangulo(n);

   
    for (int linha = 0; linha < n; linha++) {
        

        
        for (int coluna = 0; coluna <= linha; coluna++) {
            
            if (coluna == 0 || coluna == linha) {
                triangulo[linha][coluna] = 1;
            } else {
                triangulo[linha][coluna] = triangulo[linha - 1][coluna - 1] + triangulo[linha - 1][coluna];
            }
        }
    }

    
    for (int linha = 0; linha < n; linha++) {
        for (int coluna = 0; coluna <= linha; coluna++) {
            cout << triangulo[linha][coluna] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;

    
    cout << "Digite o numero de linhas do Triangulo de Pascal: ";
    cin >> n;

   
    trianguloDePascal(n);

    return 0;
}
