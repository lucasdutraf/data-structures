#include <bits/stdc++.h>
using namespace std;
using s = string;

int main () {

  long long entry;
  s luckyNum;
  int qtty = 0;
  cin >> entry;
  luckyNum = to_string(entry);
  for (size_t i = 0; i < luckyNum.size(); i++) {
    if ((luckyNum[i] == '4') || (luckyNum[i] == '7')) {
      qtty++;
    }
  }
  if (qtty == 4 || qtty == 7) {
    cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }

  return 0;
}
