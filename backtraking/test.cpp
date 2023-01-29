#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a;
    a.push_back(5);
    a.push_back(6);
    a.push_back(5);
    cout << a.size() << " ";
    return 0;
}