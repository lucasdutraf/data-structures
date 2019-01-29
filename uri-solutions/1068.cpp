#include <iostream>
#include <stack>
#include <map>

using namespace std;

bool is_valid(const string& expression)
{
    static map<char, char> open { {')', '('}, {']', '['}, {'}', '{'}, };
    stack<char> s;

    for (const auto& c : expression)
    {
        switch (c) {
        case '(':
        case '[':
        case '{':
            s.push(c);
            break;

        case ')':
        case ']':
        case '}':
            if (s.empty() || s.top() != open[c])
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
