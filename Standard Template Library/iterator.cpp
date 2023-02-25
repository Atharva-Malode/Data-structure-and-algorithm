#include <bits/stdc++.h>
using namespace std;

void iterat()
{
    vector<int> a = {1, 2, 3, 4, 5, 6};

    a.erase(a.begin() + 1);
    vector<int>::iterator it = a.begin();

    it++;
    cout << *(it) << " ";
}

int main()
{

    iterat();
    return 0;
}
