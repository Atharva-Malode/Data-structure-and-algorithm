#include <bits/stdc++.h>
using namespace std;
int largestElement(vector<int> arr)
{

    int max = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    vector<int> v;

    int size;

    cout << "enter the size of your array " << endl;
    cin >> size;
    cout << " enter the elements of the array " << endl;
    int elements;

    for (int i = 0; i < size; i++)
    {
        cin >> elements;
        v.push_back(elements);
    }

    int index = largestElement(v);
    cout << " the largest element is " << index << endl;
    return 0;
}