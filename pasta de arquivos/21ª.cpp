#include <iostream>

#include <vector>

using namespace std;

int main() {

const int valr = 10;
  
vector<int> A(valr);

vector<int> B(valr);

vector<int> C(valr);

cout << "Digite " << valr << " valores do vetor A" << endl;

for(int i =0; i < valr; i++){

  cout << "Digite o valor " << i+1 << " do vetor A: "<< endl;
  
  cin >> A[i];
}
  
cout << "digite " << valr << " valores do vetor B" << endl;

for(int i =0; i < valr; i++){
cout<<endl;
  cout << "digite o valor " << i+1 << " do vetor B: "<< endl;

  cin >> B[i];
}
  for(int i =0; i < valr; i++){

C[i] = A[i] - B[i];
  }    
  

  cout << "\nVetor C (C = A - B):" << endl;
      for (int i = 0; i < valr; ++i) {
          cout << C[i] << " ";
      }
      cout << endl;

      
  }
