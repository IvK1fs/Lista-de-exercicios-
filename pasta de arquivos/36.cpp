#include <iostream>

using namespace std;

void bbsort(double v[], int size){

  for (int i = 0; i < size - 1; ++i) {

    for (int j = 0; j < size - 1; ++j) {

    if(v[j] > v[j+1]){

    double tempt= v[j];

    v[j] = v[j+1];
      v[j+ 1] = tempt;  
}
}
}
}


int main(){

const int size = 10;

double v[size];

cout << "Digite 10 numeros reais"<<endl;

for(int i =0; i < size; i++){

cout << "numero "<< i+1 << ": ";  
  
cin >> v[i];

}

bbsort(v, size);
  
cout << "Vetor ordenado: " <<endl;

for(int i =0; i < size; i++){

cout << v[i] << " ";

}

cout << endl;
  
}
