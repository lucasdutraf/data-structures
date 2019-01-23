#include <bits/stdc++.h>
using namespace std;
using vec = vector<int>;

int main () {
  int particip, voto;
  set<int> cand;

  cin >> particip;
  while (particip != 0) {
    for (size_t i = 0; i < particip; i++) {
      cin >> voto;
      cand.insert(voto);
    }
    cout << cand.size() << endl;
    cin >> particip;
  }
  return 0;
}
