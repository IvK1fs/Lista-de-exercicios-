#include <iostream>

#include <vector>

#include <set>

using namespace std;

int main() {

const int numeros = 20;
  
vector<double> number(numeros);

set<int> uniquevalue;

cout << "digite " << numeros << " numeros " << endl;

for(int i = 0; i < numeros; i++){

  cout << "numero:" << i +1 << ":";
  
  cin >> number[i];

}

for(int i = 0; i < numeros; i++){

  uniquevalue.insert(number[i]);

}

cout << "\nvalores unicos:\n" <<endl;

for(auto it = uniquevalue.begin(); it != uniquevalue.end(); it++){

  cout<< *it << " ";
}

cout<< endl;
  
}
