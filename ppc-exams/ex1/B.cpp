#include <bits/stdc++.h>
using namespace std;
using sc = stack<char>;

bool is_valid(const string& expression) {
  static map <char, char> open {{')', '('}, {']', '['}, {'}', '{'}};
  sc s;

  for (auto& c : expression) {
    switch (c) {
      case '(':
      case '[':
      case '{':
        s.push(c);
        break;
      case ')':
      case ']':
      case '}':
        if (s.empty() || s.top() != open[c]) {
          return false;
        }
        s.pop();

    }
  }
  return s.empty();
}

int main () {
  string expression;
  int cases;
  cin >> cases;
  for (size_t i = 0; i < cases + 1; i++) {
    getline(cin, expression, '\n');
    if (i != 0) {
      cout << (is_valid(expression) ? "Compilou" : "Erro de compilacao") << endl;
    }
  }

  return 0;
}
