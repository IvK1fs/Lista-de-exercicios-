#include <iostream>
using namespace std;
int main() {
  int x;
 int A[6] = {1, 0, 5, -2, -5, 7};
  x = A[0] + A[1] + A[5];
  cout <<"soma é igual a: " << x <<  endl;
  A[4] = 100;

  for(int i = 0; i < 6; i++){
    cout<<"{"<<  A[i] <<"}" << endl;
  }
  
 return 0;
  
}
