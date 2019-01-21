#include <bits/stdc++.h>
using namespace std;

int main () {
  int rep, num;

  cin >> rep;
  for (size_t i = 0; i < rep; i++) {
    cin >> num;
    if (num % 2 == 0) {
      cout << "0" << endl;
    }
    else {
      cout << "1" << endl;
    }
  }
  return 0;
}
