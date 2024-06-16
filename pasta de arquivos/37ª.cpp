#include <iostream>

using namespace std;

void reverse(int v[], int begin, int end){

  if(begin < end) {
    
int tempt = v[begin];
    
  v[begin] = v[end];

  v[end] = tempt;

    begin++;
    end--;
  }
}
void sortv(int v[], int size){

  for (int i = 0; i < 5; ++i) {
    
    for (int j = 0; j < 5 - i; ++j) {
      
     if(v[j] > v[j+1]){

       int tempt = v[j];
      v[j] = v[j+1];
      v[j+1] = tempt;
    }
  }
}
reverse(v, 6, 10);
}

  
int main(){

int v[] = {1, 2, 3, 4, 5, 6, 20, 15, 10, 8, 7};
int size = 11;

cout << "Vetor original: "<< endl;
  for (int i = 0; i < size; ++i) {
    
      cout << v[i] << " ";
  }
cout << endl;

  sortv(v, size);

  cout << "\nVetor ordenado: "<<endl;
  for (int i = 0; i < size; ++i) {
      cout << v[i] << " ";
  }
  cout << endl;
  
}
