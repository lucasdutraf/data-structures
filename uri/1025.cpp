#include <bits/stdc++.h>
using namespace std;
using vec = vector<int>;

int main () {
  int mar, a = 1, consult, entrada, consfeita;
  vec marmores;
  //vec aux;
  cin >> mar >> consult;
  while (mar != 0 && consult != 0) {
    cout << "CASE# " << a << ":\n";
    a++;
    for (size_t i = 0; i < mar; i++) {
      cin >> entrada;
      marmores.push_back(entrada);
    }
    //aux = marmores;
    sort(marmores.begin(), marmores.end());
    for (size_t j = 0; j < consult; j++) {
      cin >> consfeita;
      auto it = find(marmores.begin(), marmores.end(), consfeita);
      if (it != marmores.end()) {
        cout << consfeita << " found at " << it - marmores.begin() + 1 << endl;
      }
      else {
        cout << consfeita << " not found" << endl;
      }
    }
    marmores.clear();
    //aux.clear();
    cin >> mar >> consult;
  }
  return 0;
}
