#include <iostream>
#include <algorithm>
using namespace std;

/*herr the bool compare used is known as a comparator used to decide the
order of the inbuild sort in c++ directory of algorithm library
Time complexity = O (n log n)
*/

bool compare(int a, int b)
{

    // use for  descending order and reverse for ascending order
    return a > b;
}

int main()
{
    cout << " enter the size of the array " << endl;
    int size;
    cin >> size;
    cout << " enter the elements of the array " << endl;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int n = size;
    // use of sinbuild sort
    sort(arr, arr + n, compare);
    for (auto x : arr)
    {

        cout << x << " ";
    }
    return 0;
}