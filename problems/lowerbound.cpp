#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> A, int Val)
{

    int size = A.size();

    int s = 0, e = (size - 1);

    int value = -1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (A[mid] > Val)
        {
            e = mid - 1;
        }
        else
        {
            value = A[mid];
            s = mid + 1;
        }
    }

    return value;
}

int main()
{
    int key;
    vector<int> A = {2, 3, 4, 5};
    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] << " " << endl;
    }
    cout << " enter the low bound value you want to search " << endl;
    cin >> key;
    int value = lowerBound(A, key);
    cout << " the lowerbound is " << value << endl;

    return 0;
}