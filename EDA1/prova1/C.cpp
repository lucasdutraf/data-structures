#include <bits/stdc++.h>
using namespace std;

int main () {

  int casos;
  cin >> casos;

  while (casos--) {
    vector<int> vagoes;
    int qt;

    cin >> qt;
    int vagao;
    int soma = 0;

    while (qt--) {
      cin >> vagao;
      vagoes.push_back(vagao);
      soma += vagao;
    }
    int ataques;
    cin >> ataques;
    while (ataques--) {
      cin >> vagao;
      while (1) {
        int moedas_detruidas = vagoes.back();
      }
    }
  }


  return 0;
}
