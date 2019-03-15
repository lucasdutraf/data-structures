#include <bits/stdc++.h>
using namespace std;

int main () {
  int casos, num;
  vector<int> pares;
  vector<int> impares;

  cin >> casos;
  for (size_t i = 0; i < casos; i++) {
    cin >> num;
    if (num % 2 == 0) {
      pares.push_back(num);
    }
    else {
      impares.push_back(num);
    }
  }
  sort(pares.begin(), pares.end());
  sort(impares.begin(), impares.end(), greater<int>());

  for (size_t j = 0; j < pares.size(); j++) {
    cout << pares[j] << endl;
  }
  for (size_t k = 0; k < impares.size(); k++) {
    cout << impares[k] << endl;
  }

  return 0;
}
