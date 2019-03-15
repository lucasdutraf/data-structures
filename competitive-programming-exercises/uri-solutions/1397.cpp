#include <bits/stdc++.h>
using namespace std;
using vec = vector<int>;
using ii = pair<int, int>;

int main () {

  int rounds, fir, sec, firpt = 0, secpt = 0;
  cin >> rounds;
  ii play;
  while (rounds != 0) {
    for (size_t i = 0; i < rounds; i++) {
      cin >> fir >> sec;
      play = make_pair(fir, sec);
      if (play.first > play.second) {
        ++firpt;
      }
      else if (play.second > play.first) {
        ++secpt;
      }
      else {
        firpt = firpt;
        secpt = secpt;
      }
    }
    cout << firpt << " " << secpt << endl;

    firpt = 0;
    secpt = 0;
    cin >> rounds;
  }
  return 0;
}
