#include <bits/stdc++.h>

using namespace std;
void STL_Pair()
{
    pair<int, int> a = {4, 6};
    cout << a.first << " " << a.second << endl;

    pair<int, int> arr[] = {{1, 2},
                            {4, 5},
                            {3, 8}};
    cout << arr[1].first << endl;
}
int main()
{

    STL_Pair();
    return 0;
}