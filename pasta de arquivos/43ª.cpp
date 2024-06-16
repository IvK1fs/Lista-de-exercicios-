#include <iostream>
using namespace std;

const int size =4;

void findbiggest(int mt[size][size]) {

int biggest = mt[0][0];

int bigline ,bigcol;

for(int i =0; i<size; i++){

for(int j =0; j<size; j++){

if(mt[i][j]> biggest) {

biggest = mt[i][j];

bigline = i;

bigcol = j;


    
}

}
}

cout<<"localização do maior valor: linha " <<bigline +1 <<" coluna" <<bigcol +1 <<endl;
    
}



int main() {


int mt[size][size];

cout << "digite os valores da matriz 4x4 : " << endl;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size ; j++) {
           cin >> mt[i][j];
}
 }

    cout << "\nMatriz digitada:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << mt[i][j] << " ";
        }
        cout << endl;
    }



    findbiggest(mt);

    
    }
