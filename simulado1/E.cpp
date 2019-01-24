#include <bits/stdc++.h>
using namespace std;
using vec = vector<int>;
using si = pair<int, string>;

int main () {
  vector<si> funcionarios;
  string nome;
  int idade, flagNewLine = 0;
  int qtd;
  cin >> qtd;
  while (qtd != 0) {
    if (flagNewLine) {
      cout << endl;
    }
    for (size_t i = 0; i < qtd; i++) {
      cin >> nome >> idade;
      funcionarios.push_back(make_pair(idade, nome));
    }
    sort(funcionarios.begin(), funcionarios.end());
    for(auto value : funcionarios) {
      cout << value.second << endl;
    }
    cin >> qtd;
    flagNewLine = 1;
    funcionarios.clear();
  }

  return 0;
}
