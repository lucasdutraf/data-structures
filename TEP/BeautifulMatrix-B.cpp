#include <bits/stdc++.h>
using namespace std;
using vec = vector<vector<unsigned int>>;
using ii = pair<int,int>;


int main () {

  unsigned int member;
  int moves = 0;
  vec matrix;
  ii position;
  vector<unsigned int> aux;
  for (size_t j = 0; j < 5; j++) {
    for (size_t i = 0; i < 5; i++) {
      cin >> member;
      aux.push_back(member);
    }
    matrix.push_back(aux);
    aux.clear();
  }
  for (size_t k = 0; k < 5; k++) {
    for (size_t l = 0; l < 5; l++) {
      if (matrix[k][l] == 1) {
        position = make_pair(k, l);
      }
    }
  }
  if ((position.first == 2) && (position.second == 2)) {
    cout << "0" << endl;
  }
  else {
    while (position.first != 2) {
      if (position.first > 2) {
        position.first--;
        moves++;
      }
      else {
        position.first++;
        moves++;
      }
    }
    while (position.second != 2) {
      if (position.second > 2) {
        position.second--;
        moves++;
      }
      else {
        position.second++;
        moves++;
      }
    }
    cout << moves << endl;
  }

  return 0;
}
