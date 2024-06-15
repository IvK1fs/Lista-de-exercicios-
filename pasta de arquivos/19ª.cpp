#include <iostream>

#include <vector>

using namespace std;

int main() {

  
vector<int> number(50);




for(int i = 0; i < 50; i++){

  number[i] = (i + 5 * i) % (i + 1);

}

cout << "vetor preeenchido" << endl;

for(int i = 0; i < 50; i++) {

  cout << number[i] << " ";
  
}

cout << endl;

}
