#include <iostream>

#include <algorithm>

#include <vector>

using namespace std;

void pvector(const vector<int>& v1){

cout << "[";

for(size_t i=0; i < v1.size(); i++){

if(i >0) cout << ", ";

cout << v1[i];
}

cout << "]" << endl;
    
}


int main() {

vector<int> x(5), y(5); 

cout<< "Digite 5 valores para o vetor x: " << endl;

for(int i = 0; i < 5; i++){

cout << "valor " << i+1 << ": ";    

cin >> x[i];
}

cout<< "\nDigite 5 valores para o vetor y: " << endl;

for(int i = 0; i < 5; i++){

cout<< "valor "<< i + 1 <<": ";
    
cin >> y[i];
    
}

vector<int> soma(5);

for(int i = 0; i < 5; i++){

    soma[i] = x[i] + y[i];
}

vector<int> multiply(5);

for(int i = 0; i < 5; i++){

    multiply[i] = x[i] * y[i];

}

vector<int> diff;

set_difference(x.begin(), x.end(), y.begin(), y.end(), back_inserter(diff));

vector<int> intersec;
    
set_intersection(x.begin(), x.end(), y.begin(), y.end(),back_inserter(intersec));

vector<int> uni = x;

for(int i = 0; i < 5; i++){

    if(find(uni.begin(), uni.end(), y[i]) == uni.end()){
        
uni.push_back(y[i]);
}
}

cout<<"\nresultado das operações: " << endl; 

cout<<" soma de x + y: ";

pvector(soma);

cout<< "multiplicação de x e y:";

pvector(multiply);

cout<< "diferença de x e y: ";

pvector(diff);

cout<< "intersecção de x e y: ";

pvector(intersec);

cout << "união de x e y: ";

pvector(uni);
}
