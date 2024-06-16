#include <iostream>
using namespace std;

int main() {

const int size =5;

int mt[5][5];

for(int i =0; i< size; i++){

for(int j =0; j< size; j++) {

      
     if(i ==j) {

       mt[i][j] = 1;
     } else{

         mt[i][j] =0;
}
}   
}

cout << "Matriz resultante:" << endl;
for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
        cout << mt[i][j] << " ";
    }
    cout << endl;
}



    
}
