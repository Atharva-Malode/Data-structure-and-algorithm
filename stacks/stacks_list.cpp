#include <bits/stdc++.h>
#include "stacksLL.h"

using namespace std;

int main()
{

    std::stack<char> s;
    s.push('a');
    s.push('v');
    s.push('r');
    s.push('a');
    s.push('h');
    s.push('t');
    s.push('A');

    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}