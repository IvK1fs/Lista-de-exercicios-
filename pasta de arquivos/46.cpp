#include <iostream>

using namespace std;

const int size =10;

void generatematrix(int A[size][size]) {

for (int i = 0; i < size; i++) {
  for (int j = 0; j < size; j++) {
   if (i < j) {
A[i][j] = 2*i + 7*j;
   } else if (i == j) {
 A[i][j] = 3*i*i + 1;
 } else {
       A[i][j] = 4*i*i*i + 5*j*j + 1;
   }
  }
 }
 }


void printmatriz(int A[size][size]){
for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
}


int main(){

int A[size][size];

generatematrix(A);

    cout << "Matriz gerada:" << endl;
    printmatriz(A);



    
}

    
