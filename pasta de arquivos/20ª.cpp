#include <iostream>

#include <vector>

using namespace std;

int main() {

const int valr = 10;
  
vector<int> number(valr);

vector<int> impares;

cout << "digite " << valr << " numeros inteiros no intervalo[0 a 50]" << endl;

for( int i = 0; i < valr; i++){
   
  do {
    cout << "digite o " << i+1 << " numero: ";
    cin >> number[i];


    
  
  }  while (number[i] < 0 || number[i] > 50);
 }

for(int i = 0; i < valr; i++){

  if(number[i] % 2 != 0){
    impares.push_back(number[i]);
} 
  
}

cout << "\nvetor originial: "<<endl;

for(int i =0; i < valr; i++) {
  
  cout << number[i] << " ";
  
   if((i +1 ) % 2 == 0) {
     cout<<endl;  
   }
}
  
cout<<endl;

cout<< "\nvetor impares: "<< endl;

for(int i =0; i < impares.size(); i++){

cout<<impares[i] << " ";

  if((i +1 ) % 2 == 0) {
     cout<<endl;  
   }  
}
}
