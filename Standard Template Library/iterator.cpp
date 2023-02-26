#include <bits/stdc++.h>
using namespace std;

void iterat()
{
    vector<int> a = {1, 2, 3, 4, 5, 6};

    // you can delete element using the .begin() function
    a.erase(a.begin() + 1);
    // insert a element at the begin so we have used insert function here
    a.insert(a.begin(), 20);
    vector<int>::iterator it = a.begin();

    it++;
    cout << *(it) << " ";
}

int main()
{

    iterat();
    return 0;
}
