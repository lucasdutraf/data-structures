#include <bits/stdc++.h>
using namespace std;

int main() {

    int dinner, alumni, person;
    vector<vector<int>> groups;

    cin >> alumni >> dinner;

    groups.resize(dinner);
    vector<int> temp;
    temp.resize(alumni);

    cout << "começa" << endl;

    for (size_t i = 0; i < dinner; i++) {
        for (size_t j = 0; j < alumni; j++) {
            cin >> person;
            temp.push_back(person);
        }
        groups.push_back(temp);
        temp.clear();
    }
    cout << "tamanho" << endl;
    cout << groups[0].size() << endl;

    for (size_t k = 0; k < groups.size(); k++) {
        for (size_t l = 0; l < groups[k].size(); l++) {
            cout << "aqui" << groups[k][l];
        }
        cout << endl;
    }

    return 0;
}
