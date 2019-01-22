#include <bits/stdc++.h>
using namespace std;
using vec = vector<int>;

int main () {
  int mar, a = 1, consult, entrada, consfeita;
  vec marmores;
  vec aux;
  cin >> mar >> consult;
  while (mar != 0 && consult != 0) {
    for (size_t i = 0; i < mar; i++) {
      cin >> entrada;
      marmores.push_back(entrada);
    }
    a++;
    aux = marmores;
    cout << "CASE# " << a << ":" << endl;
    sort(aux.begin(), aux.end());
    for (size_t j = 0; j < consult; j++) {
      cin >> consfeita;
      bool tem = binary_search(aux.begin(), aux.end(), consfeita);
      auto it = find(marmores.begin(), marmores.end(), consfeita);
      int index = distance(marmores.begin(), it) + 2;
      if (tem == true) {
        cout << consfeita << " found at " << index << endl;
      }
      else {
        cout << consfeita << " not found" << endl;
      }
    }
    marmores.clear();
    aux.clear();
    cin >> mar >> consult;
  }
  return 0;
}
