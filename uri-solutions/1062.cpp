#include <bits/stdc++.h>
using namespace std;
using si = stack<int>;
using vec = vector<int>;

int main () {

  si entradaA;
  si estacao;
  si saidaB;
  vec entry;
  int vagoes, vagaoNr, success = 0;

  cin >> vagoes;
  for (size_t k = vagoes; k >= 0; k--) {
    entradaA.push(k);
  }
  for (size_t i = 0; i < vagoes; i++) {
    cin >> vagaoNr;
    entry.push_back(vagaoNr);
  }
  for (size_t j = 0; j < entry.size(); j++) {

  }


  while (!entradaA.empty() && entradaA.top() != entry[j]) {
    estacao.push(entradaA.top());
    entradaA.pop();
    if (estacao.top() == entry[j]) {
      success++;
      estacao.pop();
    }
  }
  if (entry[j] == entradaA.top()) {
    success++;
    entradaA.pop();
  }
  else {

  }



  if (success == vagoes) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
  return 0;
}
