#include <iostream>
#include <utility>
using namespace std;

int main()
{
    // pair is a type of STL container which can store two values as shown below
    pair<int, int> p1(4, 5);
    // p1 = {4, 5};

    // old way to intialize the pair (older version of c++)
    pair<int, int> p2;
    p2 = make_pair(10, 20);

    cout << (p1 == p2) << " " << endl;
    cout << (p1 != p2) << " " << endl;
    cout << (p1 > p2) << " " << endl;
    cout << (p1 < p2) << " " << endl;
    cout << p1.first << endl;
    cout << p1.second << endl;

    pair<int, int> arr[] = {{1, 2},
                            {4, 5},
                            {3, 8}};
    cout << arr[1].first << endl;
    return 0;
}