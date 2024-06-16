#include <iostream>

#include <algorithm>

#include <vector>

using namespace std;

vector<int> findintersec(const vector<int>& v1, const vector<int>& v2){

vector<int> intersec;

for(int i = 0; i < v1.size(); i++){

if(find(v2.begin(), v2.end(), v1[i]) != v2.end() && find(intersec.begin(), intersec.end(), v1[i]) == intersec.end()) {

intersec.push_back(v1[i]);

}
  
}


return intersec;

}

int main() {

const int sizevec = 10;

vector<int>v1(sizevec);

vector<int>v2(sizevec);

cout << "Digite os elementos do vetor 1: "<< endl;

for(int i =0; i < sizevec; i++ ){

cout << "Elemento " << i + 1 << ": ";

cin >> v1[i];
  
}

cout << "Digite os elementos do vetor 2: "<< endl;

for(int i = 0; i < sizevec; i++ ){

cout << "Elemento " << i + 1 << ": ";

cin>> v2[i];
  
}

vector<int> intersec = findintersec(v1, v2);


cout << "elemento na intersecção: "<< endl;
  
for(int num : intersec){

cout << num << " ";
  
}
cout << endl;

  
}
