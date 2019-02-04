#include <bits/stdc++.h>
using namespace std;

bool busca(int e, vector<int> v, int ini, int fim) {
  if (ini > fim) {
    return false;
  }
  int meio = (ini + fim)/2;
  if (e == v[meio]) {
    return true;
  }
  if (e > v[meio]) {
    return busca(e, v, meio + 1, fim);
  }
  else if (e < v[meio]) {
    return busca(e, v, ini, meio - 1);
  }
}
int main() {

  vector<int> v{1, 2, 3, 4, 7, 8, 11};
  cout << busca(10, v, 0, v.size()) << endl;
  return 0;
}
