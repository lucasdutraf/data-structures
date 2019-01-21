#include <bits/stdc++.h>
using namespace std;
using s = string;

int main () {

  int ent;
  s pr, seg;
  int a = 0;
  cin >> ent;

  for (size_t i = 0; i < ent; i++) {
    cin >> pr >> seg;
    int prlen = pr.size(), seglen = seg.size();
    s prtemp = pr.substr(pr.size()-seg.size(), seg.size());
    if (prtemp == seg) {
      cout << "encaixa" << endl;
    }
    else {
      cout << "nao encaixa" << endl;
    }
  }

 return 0;
}
