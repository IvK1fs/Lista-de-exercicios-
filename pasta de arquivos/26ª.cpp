#include <iostream>

#include <vector>

#include <cmath>

using namespace std;

double calcmed(const vector<int>& v) {

  int soma = 0;
  for(int numb: v) {
    soma += numb;
  }
return static_cast<double>(soma) / v.size();
}

double calcdp(const vector<int>& v){

  double media = calcmed(v);
  
  double somadiff = 0.0;

  for(int numb: v) {

    double diff = numb - media;

    somadiff += diff * diff;
  }

  double DP = sqrt(somadiff / v.size());

  return DP;
}
int main() {

vector<int> v = {50,60,70,65,55,80,90,100,75,85};

double DP = calcdp(v);

double med = calcmed(v);

cout << "\n o vetor tem os seguintes numeros: " << endl;

for(int numb: v) {

  cout << numb << " ";
}
cout << endl;
  
cout << "Desvio padrão: " << DP << endl;

cout << med;
  
}
