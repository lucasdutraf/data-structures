#include <bits/stdc++.h>
using namespace std;

int main () {

  int letters;
  string colors;
  int equal = 0;

  cin >> letters;
  cin >> colors;

  for (size_t i = 0; i < letters - 1; i++) {
    if (colors[i] == colors[i + 1]) {
      equal++;
    }
  }

  cout << equal<< endl;
  equal = 0;
  return 0;
}
