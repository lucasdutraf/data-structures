#include <bits/stdc++.h>
using namespace std;
using si = pair<string, int>;


int main () {

  int cases;
  int magicNumber;
  string name;
  cin >> cases;
  vector<si> children;

  while (cases != 0) {
    for (size_t i = 0; i < cases; i++) {
      cin >> name >> magicNumber;
      children.push_back(make_pair(name, magicNumber));
    }


    cin >> cases;
  }

  return 0;
}
