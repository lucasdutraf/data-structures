#include <bits/stdc++.h>
using namespace std;
using vec = vector<int>;

int main () {
  int casos, alunos, nota, a = 0;
  vec notas;
  vec aux;
  cin >> casos;
  for (size_t i = 0; i < casos; i++) {
    cin >> alunos;
    for (size_t j = 0; j < alunos; j++) {
      cin >> nota;
      notas.push_back(nota);
    }
    aux = notas;
    sort(aux.begin(), aux.end(), greater<int>());
    a = 0;
    for (size_t h = 0; h < notas.size(); h++) {
      if (notas[h] != aux[h]) {
        ++a;
      }
    }
    if (notas == aux) {
      a = 0;
    }
    cout << notas.size() - a << endl;
    notas.clear();
    aux.clear();
    a = 0;
  }

  return 0;
}
