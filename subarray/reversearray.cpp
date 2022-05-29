#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int> arr, int value)
{
    int n = arr.size();
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
    }

    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
}

int main()
{
    int size;

    cout << " enter the size of array " << endl;
    cin >> size;
    if (size == 1)
    {

        cout << " arry elements should be more than 1 " << endl;
        return 0;
    }
    vector<int> A;
    cout << " enter the value of array " << endl;
    int element;

    for (int i = 0; i < size; i++)
    {
        cin >> element;
        A.push_back(element);
    }
    for (int i = 0; i < size; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    int rep;

    cout << " enter the no of elements you want to reverse " << endl;
    cin >> rep;
    reverse(A, rep);

    return 0;
}