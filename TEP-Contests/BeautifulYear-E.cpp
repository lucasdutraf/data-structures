//divir por 1000 para achar a casa do milhar
//pega o resto divide por 100
//pega o resto divide por 10
// segue a mesma lógica e salva isso em um vetor e compara.
#include <bits/stdc++.h>
using namespace std;

int main () {

  int year;
  vector<int> yearArray;
  cin >> year;

  yearArray.resize(4);

  yearArray[0] = (year/1000);
  yearArray[1] = ((year%1000)/100);
  yearArray[2] = (((year%1000)%100)/10);
  yearArray[3] = (((year%1000)%100)%10);

  for (size_t i = 0; i < yearArray.size(); i++) {
    for (size_t j = 0; j < yearArray.size(); j++) {
      if (yearArray[i] == yearArray[j]) {
        /* code */
      }
    }
  }

  for(auto element : yearArray) {
    cout << element << endl;
  }

  return 0;
}
