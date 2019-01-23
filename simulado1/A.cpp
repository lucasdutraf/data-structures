#include <bits/stdc++.h>
using namespace std;
using vec = vector<int>;

int main () {

  int A, B, C, D, aux = 0, temp, temp2 = 0;
  vec primeiralinha;
  vec segundalinha;

  cin >> A >> B >> C >> D;

  while (A != 0 && B != 0 && C != 0 && D != 0) {
    if (A > B) {
      swap(A, B);
    }
    if (C > D) {
      swap(C, D);
    }

    for (size_t i = A; i < B + 1; i++) {
      primeiralinha.push_back(i);
    }
    for (size_t j = C; j < D + 1; j++) {
      segundalinha.push_back(j);
    }

    if (primeiralinha.size() > segundalinha.size()) {
      for (size_t k = 0; k < primeiralinha.size(); k++) {
        for (size_t t = 0; t < segundalinha.size(); t++) {
          if (primeiralinha[k] == segundalinha[t]) {
            ++aux;
          }
        }
      }
    }
    else if (segundalinha.size() > primeiralinha.size()) {
      for (size_t k = 0; k < segundalinha.size(); k++) {
        for (size_t t = 0; t < primeiralinha.size(); t++) {
          if (primeiralinha[t] == segundalinha[k]) {
            ++aux;
          }
        }
      }
    }
    else {
      for (size_t k = 0; k < primeiralinha.size(); k++) {
        for (size_t t = 0; t < segundalinha.size(); t++) {
          if (primeiralinha[k] == segundalinha[t]) {
            ++aux;
          }
        }
      }
    }
    if (aux > 0) {
      cout << "Precisamos de novas linhas!" << endl;
    }
    else {
      cout << "Linhas autorizadas" << endl;
    }

    aux = 0;
    primeiralinha.clear();
    segundalinha.clear();
    cin >> A >> B >> C >> D;
  }

  return 0;
}
