#include <bits/stdc++.h>
using namespace std;
using vec = vector<int>;
using si = pair<int, string>;

int main () {
  vector<si> funcionarios;
  string nome;
  int idade;
  int qtd;
  cin >> qtd;
  while (qtd != 0) {
    for (size_t i = 0; i < qtd; i++) {
      cin >> nome >> idade;
      funcionarios.push_back(make_pair(idade, nome));
    }
    sort(funcionarios.begin(), funcionarios.end());
    for(auto value : funcionarios) {
      cout << value.second << endl;
    }
    cin >> qtd;
    if (qtd != 0) { 
      cout << endl;
    }
    cout << endl;
    funcionarios.clear();
  }

  return 0;
}
