#include <bits/stdc++.h>
using namespace std;

int main () {

  int up = 0, low = 0;
  string input;
  cin >> input;
  for (size_t i = 0; i < input.size(); i++) {
    isupper(input[i]) ? up++ : low++;
  }
  if (up > low) {
    for (size_t i = 0; i < input.size(); i++) {
      input[i] = toupper(input[i]);
    }
    cout << input << endl;
  }
  else {
    for (size_t i = 0; i < input.size(); i++) {
      input[i] = tolower(input[i]);
    }
    cout << input << endl;
  }

  return 0;
}
