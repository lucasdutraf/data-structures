#include <bits/stdc++.h>
using namespace std;

int main () {

  int ent;
  int pri, segi;
  string pr, seg;
  int a = 0;
  cin >> ent;

  for (size_t i = 0; i < ent; i++) {
    cin >> pri >> segi;
    pr = to_string(pri);
    seg = to_string(segi);
    if (seg.size() > pr.size()) {
      cout << "nao encaixa" << endl;
    }
    else {
      long long prlen = pr.size(), seglen = seg.size();
      long long diff = pr.size()-seg.size();
      string prtemp = pr.substr(diff, seg.size());

      cout << (prtemp == seg ? "encaixa" : "nao encaixa") << endl;
    }
  }

 return 0;
}
