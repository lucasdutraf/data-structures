#include <bits/stdc++.h>
using namespace std;

bool is_valid(string expression)
{
    stack<char> s;

    for (auto c : expression)
    {
        switch (c) {
        case '(':
            s.push(c);
            break;

        case ')':
            if (s.empty())
                return false;

            s.pop();
        }
    }

    return s.empty();
}

int main()
{
    string expression;
    while (cin >> expression) {
      cout << (is_valid(expression) ? "correct" : "incorrect") << '\n';
    }

    return 0;
}
