#include <vector>
#include <iostream>

using namespace std;

int main()
{

    vector<int> a = {1, 2, 3, 4};
    a.push_back(1);

    /*Emplace Back seems to be similar to push_back
    but is different from it and it is also faster */
    a.emplace_back(3);

    //  gives the size of the vector
    a.size();
    cout << a.empty() << endl;
    a.pop_back();

    for (auto x : a)
    {
        cout << x << endl;
    }
    return 0;
}