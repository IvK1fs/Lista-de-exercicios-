#include <iostream>

#include <algorithm>

#include <vector>

using namespace std;

vector<int> uniaoSemRepeticoes(const vector<int>& vetor1, const vector<int>& vetor2) {
  vector<int> uniao;

  for (int i = 0; i < vetor1.size(); ++i) {
    if (find(uniao.begin(), uniao.end(), vetor1[i]) == uniao.end()) {
      uniao.push_back(vetor1[i]);
  }
}
  for (int i = 0; i < vetor2.size(); ++i) {
          if (find(uniao.begin(), uniao.end(), vetor2[i]) == uniao.end()) {
              uniao.push_back(vetor2[i]);
          }
      }

      return uniao;
  }
int main() {

  const int tamanho_vetor = 10;
      vector<int> vetor1(tamanho_vetor);
      vector<int> vetor2(tamanho_vetor);

      
      cout << "Digite os elementos do primeiro vetor (10 elementos):" << endl;
      for (int i = 0; i < tamanho_vetor; ++i) {
          cin >> vetor1[i];
      }

      
      cout << "Digite os elementos do segundo vetor (10 elementos):" << endl;
      for (int i = 0; i < tamanho_vetor; ++i) {
          cin >> vetor2[i];
      }

      
      vector<int> uniao = uniaoSemRepeticoes(vetor1, vetor2);

  
      cout << "Elementos na união dos vetores:" << endl;
      for (int num : uniao) {
          cout << num << " ";
      }
      cout << endl;

      return 0;
  }
