#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main () {

  int casos = 0, qtd;
  int people[3000000];
  scanf("%d", &casos);
  for (int i = 0; i < casos; i++) {
    scanf("%d", &qtd);
    for (int j = 0; j < qtd; j++) {
      scanf("%d", &people[j]);
    }
    sort(people, people + qtd);
    for (int k = 0; k < qtd - 1; k++) {
      cout << people[k] << " ";
    }
    cout << people[qtd - 1];
    printf("\n");
  }
  return 0;
}
