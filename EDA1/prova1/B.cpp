#include <bits/stdc++.h>
using namespace std;
using vec = vector<int>;

int main () {
  int casos, pessoas, alturaMin, alturaIndiv, flag = 0;
  vec alturaPessoas;

  cin >> casos;
  for (size_t i = 0; i < casos; i++) {
    if (flag == 1) {
      cout << endl;
    }
    cin >> pessoas >> alturaMin;
    for (size_t j = 0; j < pessoas; j++) {
      cin >> alturaIndiv;
      if (alturaIndiv >= alturaMin) {
        alturaPessoas.push_back(alturaIndiv);
      }
    }
    stable_sort(alturaPessoas.begin(), alturaPessoas.end());
    cout << "Ordem da fila: ";
    for (size_t k = 0; k < alturaPessoas.pessoas(); k++) {
      cout << alturaPessoas[k];
      if ((k+1) == alturaPessoas.size()) {
        cout << "\n";
      }
      else {
        cout << " ";
      }
    }
    alturaPessoas.clear();
    if (i != casos -1) {
      flag = 1;
    }
  }
  return 0;
}
