#include <bits/stdc++.h>
using namespace std;


int main () {

  stack<string> sequence;
  int cases, winners = 0;
  string inputSequence;
  cin >> cases;
  for(int i = 0; i < cases + 1; i++) {
    getline(cin, inputSequence, '\n');
    if (sequence.empty()) {
      string initial = "F A C E";
      sequence.push(initial);
    }
    if (i != 0) {
      string aux = sequence.top();
      reverse(aux.begin(), aux.end());
      if (inputSequence == aux) {
        sequence.pop();
        winners++;
      }
      else {
        sequence.push(inputSequence);
      }
    }
  }

  cout << winners << endl;

  return 0;
}
