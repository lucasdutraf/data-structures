#include <bits/stdc++.h>
using namespace std;

int main () {
  vector <int> excluded;
  int cardsQtty;
  int i = 1;
  while (cin >> cardsQtty, cardsQtty) {
    queue<int> cards;
    for (size_t i = 1; i < cardsQtty + 1; i++) {
      cards.push(i);
    }
    while (cards.size() >= 2) {
      excluded.push_back(cards.front());
      cards.pop();
      cards.push(cards.front());
      cards.pop();
    }
    cout << "Discarded cards: ";
    if (excluded.size() == 0) {
      cout << endl;
    }
    else {
      for (size_t k = 0; k < excluded.size(); k++) {
        cout << excluded[k] << (k != excluded.size() - 1 ? ", " : "\n");
      }
    }
    cout << "Remaining card: " << cards.front() << endl;
    excluded.clear();
  }
  return 0;
}
