#include <bits/stdc++.h>
using namespace std;
using vec = vector <int>;

int main () {

  vector<vec> coordinates;
  int cases, positions, sumx = 0, sumy = 0, sumz = 0;
  cin >> cases;
  for (size_t i = 0; i < cases; i++) {
    coordinates.resize(cases);
    for (size_t j = 0; j < 3; j++) {
      cin >> positions;
      coordinates.push_back(positions);
    }
  }
  for (size_t k = 0; k < coordinates.size(); k++) {
    sumx += coordinates[k][1];
    sumy += coordinates[k][2];
    sumz += coordinates[k][3];
  }
  if ((sumx && sumy && sumz) == 0) {
    cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }

  return 0;
}

//vector auxiliar e dar push_back nesse vector, apos isso dar clear
