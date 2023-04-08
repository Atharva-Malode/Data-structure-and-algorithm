#include <iostream>
#include <set>

using namespace std;

int main()
{

    /*
       it is similar to sets but allows it to have two occurance of the no in a given array
       for example : in sets        10 12 13 14 15 10   => here second 10 is not considerd
                     in multisets   10 12 13 14 15 10   => here both the 10 is considered
    */

    multiset<int> a;

    a.insert(10);
    a.insert(16);
    a.insert(14);
    a.insert(12);

    // similar function as of sets in this to but with a new oone that is equal range which gives upper and lower bound

    for (auto it = a.begin(); it != a.end(); it++)
    {

        cout << (*it) << " ";
    }

    auto it = a.equal_range(16);

    // facing issue with a.equal_range it is not returning a pair
}