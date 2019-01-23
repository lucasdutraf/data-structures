#include <bits/stdc++.h>
using namespace std;
using vec = vector<int>;

int MAX_N = 10000;
int counting[10000];

void erase_counting() {
    for (size_t i = 0; i < MAX_N; i++) {
      counting[i] = 0;
    }
}


int main () {
  int particip, voto, idVencedor = 0, qtdVotosVencedor = 0;
  set<int> cand;

  cin >> particip;
  while (particip != 0) {
    for (size_t i = 0; i < particip; i++) {
      cin >> voto;
      counting[voto]++;
      cand.insert(voto);
    }
    for (size_t j = 0; j < MAX_N; j++) {
      if (counting[j] > qtdVotosVencedor) {
        qtdVotosVencedor = counting[j];
        idVencedor = j;
      }
    }
    cout << "Mais votado foi " << idVencedor << " com " << qtdVotosVencedor << " votos" << endl;
    cout << "No total foram " << cand.size() << " candidatos" << endl;
    erase_counting();
    idVencedor = 0;
    qtdVotosVencedor = 0;
    cin >> particip;
  }
  return 0;
}
