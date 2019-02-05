#include <bits/stdc++.h>
using namespace std;
using si = stack<int>;
using qi = queue<int>;

bool trilhos (qi entrada, qi saida) {
  si estacao;
  estacao.push(entrada.front());
  entrada.pop();

  while (true) {
    if (saida.empty()) return true;

    if (estacao.top() == saida.front()) {
      estacao.pop();
      saida.pop();
    }
    else if (estacao.top() < saida.front()) {
      estacao.push(entrada.front());
      entrada.pop();
    }
    else return false;

    if (estacao.empty() && !entrada.empty()) {
      estacao.push(entrada.front());
      entrada.pop();
    }
  }
}

int main () {
  ios::sync_with_stdio(0);
  int train, aux;
  while (cin >> train, train) {
    while (true) {
      qi entrada, saida;
      si estacao;
      for (size_t i = 1; i < train + 1; i++) entrada.push(i);

      for (size_t j = 0; j < train; j++) {
        cin >> aux;
        if(!aux) break;
        saida.push(aux);
      }
      if(!aux) break;
      cout << (trilhos(entrada, saida) ? "Yes" : "No") << endl;
    }
    cout << endl;
  }

  return 0;
}
