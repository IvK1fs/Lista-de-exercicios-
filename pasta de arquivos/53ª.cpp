#include <iostream>
#include <cstdlib>   
#include <ctime>     
using namespace std;

const int NUM_ROWS = 5;
const int NUM_COLS = 5;


void preencherCartela(int cartela[NUM_ROWS][NUM_COLS]) {
    bool numerosUtilizados[100] = {false};  
    int numerosRestantes = 99; 

    
    for (int i = 0; i < NUM_ROWS; ++i) {
        for (int j = 0; j < NUM_COLS; ++j) {
            int numeroAleatorio;
            do {
                numeroAleatorio = rand() % 99 + 1; 
            } while (numerosUtilizados[numeroAleatorio]); 

            cartela[i][j] = numeroAleatorio; 
            numerosUtilizados[numeroAleatorio] = true;
            numerosRestantes--;

            if (numerosRestantes == 0) 
                break;
        }
        if (numerosRestantes == 0) 
            break;
    }
}


void imprimirCartela(int cartela[NUM_ROWS][NUM_COLS]) {
    for (int i = 0; i < NUM_ROWS; ++i) {
        for (int j = 0; j < NUM_COLS; ++j) {
            cout << cartela[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int cartela[NUM_ROWS][NUM_COLS];

 
    srand(time(nullptr));

 
    preencherCartela(cartela);


    cout << "Cartela de Bingo Gerada:" << endl;
    imprimirCartela(cartela);

    return 0;
}
