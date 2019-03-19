#include <bits/stdc++.h>
using namespace std;

int main () {
  int cases, total = 0, coelhos = 0, ratos = 0, sapos = 0;
  cin >> cases;

  for (size_t i = 0; i < cases; i++) {
    int numberOfAnimals;
    char animalType;
    cin >> numberOfAnimals >> animalType;
    if (animalType == 'C') {
      coelhos += numberOfAnimals;
    }
    else if (animalType == 'R') {
      ratos += numberOfAnimals;
    }
    else if (animalType == 'S') {
      sapos += numberOfAnimals;
    }
    total += numberOfAnimals;
  }

  cout << "Total: " << total << " cobaias" << endl;
  cout << "Total de coelhos: " << coelhos << endl;
  cout << "Total de ratos: " << ratos << endl;
  cout << "Total de sapos: " << sapos << endl;

  double perCoelhos, perRatos, perSapos;

  perCoelhos = (coelhos * 100.0)/total;
  perRatos = (ratos * 100.0)/total;
  perSapos = (sapos * 100.0)/total;

  printf("Percentual de coelhos: %.2lf %\n", perCoelhos);
  printf("Percentual de ratos: %.2lf %\n", perRatos);
  printf("Percentual de sapos: %.2lf %\n", perSapos);
  return 0;
}
