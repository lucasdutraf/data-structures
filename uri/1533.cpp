#include <bits/stdc++.h>
using namespace std;
using vec = vector<int>;

int main () {

  int susp, person, bigger, a = 0;
  vec real;
  vec temp;
  cin >> susp;
  while (susp != 0) {
    if (susp == 0) return 0;
    else {
      for (size_t i = 0; i < susp; i++) {
        cin >> person;
        real.push_back(person);
      }
      temp = real;
      sort(temp.begin(), temp.end());
      bigger = temp[(temp.size()-2)];
      auto it = find(real.begin(), real.end(), bigger);
      int index = distance(real.begin(), it) + 1;
      cout << index << endl;
    }
    real.clear();
    temp.clear();
    cin >> susp;
  }

  return 0;
}
