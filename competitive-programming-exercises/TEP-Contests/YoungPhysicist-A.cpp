#include <bits/stdc++.h>
using namespace std;
using vec = vector <int>;

int main () {

  vector<vec> coordinates;
  vec aux;
  int cases, positions, sumx = 0, sumy = 0, sumz = 0;
  cin >> cases;
  for (size_t i = 0; i < cases; i++) {
    for (size_t j = 0; j < 3; j++) {
      cin >> positions;
      aux.push_back(positions);
    }
    coordinates.push_back(aux);
    aux.clear();
  }
  for (size_t k = 0; k < coordinates.size(); k++) {
    sumx += coordinates[k][0];
    sumy += coordinates[k][1];
    sumz += coordinates[k][2];
  }

  if ((sumx == 0) && (sumy == 0) && (sumz == 0)) {
    cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }

  return 0;
}

//vector auxiliar e dar push_back nesse vector, apos isso dar clear
