#include <bits/stdc++.h>
using namespace std;

int diamond (string sand) {
  int qtd = 0;
  stack<char> beach;
  for (auto elem : sand) {
    if (elem == '<') {
        beach.push(elem);
    }
    else if (elem == '>' && beach.size() > 0) {
      beach.pop();
      qtd++;
    }
  }
  return qtd;
}



int main () {

  int cases;
  string sand;

  cin >> cases;
  for (size_t i = 0; i < cases; i++) {
    cin >> sand;
    int qtd = diamond(sand);
    cout << qtd << endl;
  }

  return 0;
}
