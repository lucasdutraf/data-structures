#include <bits/stdc++.h>
using namespace std;

int main () {

  int numerosQtd;
  string base;
  int economizados = 0;
  string numeros;
  vector <string> listaNumeros;

  while (cin >> numerosQtd) {
    for (size_t i = 0; i < numerosQtd; i++) {
      cin >> numeros;
      listaNumeros.push_back(numeros);
    }
    for (size_t j = 1; j < listaNumeros.size(); j++) {
      base = listaNumeros[j - 1];
      cout << "base " << base << endl;
      for (size_t k = 0; k < base.size(); k++) {
        if (listaNumeros[j][k] == base[k]) {
          economizados++;
        }
        else if (listaNumeros[j][k] != base[k]) {
          break;
        }
      }
    }
    cout << economizados << endl;
    listaNumeros.clear();
    economizados = 0;
  }


  return 0;
}
