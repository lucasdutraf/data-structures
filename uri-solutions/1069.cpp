#include <bits/stdc++.h>
using namespace std;

int diamond (string sand) {
  int qtd = 0;
  stack<char> beach;
  for (auto elem : sand) {
    switch (elem) {
      case '<':
        beach.push(elem);
        break;

      case '>':
        if (beach.empty()) {
          return false;
        }
        qtd++;
        beach.pop();
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
