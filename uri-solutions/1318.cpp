#include <bits/stdc++.h>
using namespace std;
using vec = vector<int>;

int MAX_N = 10000;
int bilhetes[10000];

void clear_bilhetes() {
  for (size_t i = 0; i < MAX_N; i++) {
    bilhetes[i] = 0;
  }
}

int main () {

  int nrBilhetes, convidados, bilhete, excedente = 0;

  while (cin >> nrBilhetes >> convidados, nrBilhetes, convidados) {
    for (size_t i = 0; i < convidados; i++) {
      cin >> bilhete;
      bilhetes[bilhete]++;
    }
    for (size_t j = 0; j < MAX_N; j++) {
      if (bilhetes[j] > 1) {
        excedente++;
      }
    }
    cout <<  excedente << endl;
    clear_bilhetes();
    excedente = 0;
  }
  return 0;
}
