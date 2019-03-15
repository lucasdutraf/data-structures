#include <bits/stdc++.h>
using namespace std;

int main () {

  string username;
  set<char> s;
  cin >> username;
  for (size_t i = 0; i < username.size(); i++) {
    s.insert(username[i]);
  }
  if (s.size() % 2 != 0) {
    cout << "IGNORE HIM!" << endl;
  }
  else {
    cout << "CHAT WITH HER!" << endl;
  }
}
