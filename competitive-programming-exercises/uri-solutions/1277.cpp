#include <bits/stdc++.h>
using namespace std;
using vecs = vector<string>;

vector<array<char, 100>> frequency;

void clear_array() {
  for (size_t i = 0; i < frequency.size(); i++) {
    for (size_t j = 0; j < 100; j++) {
      frequency[i][j] = 0;
    }
  }
}

int main () {

  int cases;
  string name;
  string presence;
  vecs names;
  vector<char> aux;
  for (size_t i = 0; i < cases; i++) {
    int namesQtd;
    cin >> namesQtd;
    for (size_t j = 0; j < namesQtd; j++) {
      cin >> name;
      names.push_back(name);
    }
    for (size_t k = 0; k < namesQtd; k++) {
      getline(cin, presence, ' ');
      
    }

  }

  return 0;
}
