#include <iostream>
#include <map>

using namespace std;

int main()
{

    map<int, string> a;

    a.insert({1, "hello"});
    a.insert({2, "people"});
    a.insert({3, "how"});
    a.insert({4, "are"});
    a.insert({5, "you"});

    // Note : You can never insert more than one value to a key in maps similar to sets
    for (auto x : a)
    {
        cout << x.first << " " << x.second << endl;
    }

    // find function of maps is as follows

    if (a.find(3) == a.end())
    {
        cout << "Not found " << endl;
    }
    else
    {
        cout << "Elmeent found " << endl;
    }
    return 0;
}
