#include <bits/stdc++.h>
using namespace std;

int main () {
  string firstWord, secWord;
  vector<char> result;
  int _size, reps;
  cin >> reps;
  for (size_t j = 0; j < reps; j++) {
    cin >> firstWord >> secWord;
    firstWord.size() > secWord.size() ? _size = firstWord.size() : _size = secWord.size();
    for (size_t i = 0; i < _size; i++) {
      if (firstWord.size() > secWord.size()) {
        if (i >= secWord.size()) {
          result.push_back(firstWord[i]);
        }
        else {
          result.push_back(firstWord[i]);
          result.push_back(secWord[i]);
        }
      }
      else if (firstWord.size() < secWord.size()) {
        if (i >= firstWord.size()) {
          result.push_back(secWord[i]);
        }
        else {
          result.push_back(firstWord[i]);
          result.push_back(secWord[i]);
        }
      }
      else {
        result.push_back(firstWord[i]);
        result.push_back(secWord[i]);
      }
    }
    for (size_t k = 0; k < result.size(); k++) {
      cout << result[k] << (k == result.size() - 1 ? "\n" : "");
    }
    result.clear();
  }
}
