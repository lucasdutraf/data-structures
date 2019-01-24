#include <bits/stdc++.h>
using namespace std;
using vecs = vector<string>;

int main () {

  int casos, qtdNomes, qtdTentativas, flag = 0;
  vecs nomes;
  string nome, tentativa;

  cin >> casos;
  for (size_t i = 0; i < casos; i++) {
    if (flag == 1) {
      cout << endl;
    }
    cin >> qtdNomes;
    for (size_t j = 0; j < qtdNomes; j++) {
      cin >> nome;
      nomes.push_back(nome);
    }
    cin >> qtdTentativas;
    for (size_t l = 0; l < qtdTentativas; l++) {
      cin >> tentativa;
      bool tem = binary_search(nomes.begin(), nomes.end(), tentativa);
      if (tem == true) {
        cout << "Estou Rico!" << endl;
      }
      else {
        cout << "Tentarei de novo" << endl;
      }
    }
    if (i != casos - 1) {
      flag = 1;
    }
    nomes.clear();
  }

  return 0;
}
