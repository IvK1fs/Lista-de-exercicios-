#include <iostream>

using namespace std;

const int size = 15;

void cpactvec(int v[], int& actsize){

int j = 0;

for(int i =0; i< actsize; i++){

  if(v[i] != 0){

    v[j] = v[i];

    j++;

  }
}

actsize = j;
  
}

int main() {

int v[size];

cout << "digite " <<size << " numeros inteiros: " << endl;

  for(int i = 0; i < size; i++){

  cout << "numero " << i+1 << ": ";
  cin >> v[i];
  
}

int actsize = size;

cpactvec(v, actsize);


cout << "\nvetor sem zeros: " << endl;

for(int i = 0; i < actsize; i++){

cout << v[i]<< " ";

}
cout << endl;
  
}
