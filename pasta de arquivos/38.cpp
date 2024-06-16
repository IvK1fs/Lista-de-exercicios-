#include <iostream>
using namespace std;


void insertAndSort(int sortedArray[], int& size, int value) {
  
    int pos = size;
    while (pos > 0 && sortedArray[pos - 1] > value) {
        sortedArray[pos] = sortedArray[pos - 1];
        pos--;
    }
    sortedArray[pos] = value;
    size++;
}

int main() {
    const int sizeOfArray = 10;
    int sortedArray[sizeOfArray];
    int currentSize = 0;

    cout << "Digite 10 valores numericos:\n";

    
    for (int i = 0; i < sizeOfArray; ++i) {
        int value;
        cout << "Valor " << i + 1 << ": ";
        cin >> value;
        insertAndSort(sortedArray, currentSize, value);

        
        cout << "Valores ordenados até o momento:";
        for (int j = 0; j < currentSize; ++j) {
            cout << " " << sortedArray[j];
        }
        cout << endl;
    }

  
    cout << "\nValores ordenados:\n";
    for (int i = 0; i < currentSize; ++i) {
        cout << sortedArray[i] << " ";
    }
    cout << endl;

    return 0;
}
