#include <iostream>

#include <vector>

using namespace std;

vector<int> cvt (int number){

vector<int> v;

while(number > 0){

int digit = number % 10;

v.push_back(digit);

number /= 10;  
}
return v;
  
}

vector<int> sv (const vector<int>& v, const vector<int>& v2){

  int size = max(v.size(), v2.size());

vector<int> rest (size, 0);

int carry = 0;

for(int i = 0; i < size; i++){

int soma = carry;

if(i< v.size()){
soma += v[i];  
}
if(i < v2.size()){
soma += v2[i];  
}
  
if(soma>= 10){
carry = 1;
soma -=10;  
}
  else {
carry = 0;
  }
  rest[i] = soma;
}

  if(carry> 0){


    rest.push_back(carry);
  }
return rest;
}
int main() {

int a, b;

cout << "Digite dois numeros inteiros menores que 10000: ";

cin >> a >> b;

vector<int> va = cvt(a);

vector<int> vb = cvt(b);
  
vector<int> rest = sv(va,vb);


cout << "soma de " << a << " e " << b << " = ";

for(int i = rest.size()-1; i >= 0; i--){

  cout << rest[i];
}
  cout <<endl;
}
