#include <bits/stdc++.h>
using namespace std;

int main () {
  vector<int> v;
  int answ, attempt, a = 0;
  cin >> answ;
  for (size_t i = 0; i < 5; i++) {
    cin >> attempt;
    v.push_back(attempt);
  }

  for (size_t j = 0; j < 5; j++) {
    if (v[j] == answ) {
      a++;
    }
  }

  cout << a << endl;
  return 0;
}
