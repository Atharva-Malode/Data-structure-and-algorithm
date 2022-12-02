#include <iostream>

using namespace std;

int linear_search(int aray[], int n, int key)
{

    for (int i = 0; i < n; i++)
    {
        if (aray[i] == key)
        {

            return i;
        }
    }
    return -1;
}

int main()
{

    int a;
    cout << " enter the no elements " << endl;
    cin >> a;
    int aray[a];
    cout << " enter the elements of array " << endl;

    for (int i = 0; i < a; i++)
    {
        cin >> aray[i];
    }
    int n = sizeof(aray) / sizeof(int);
    int key;
    cout << " enter the element you want to search " << endl;
    cin >> key;
    int index = linear_search(aray, n, key);

    if (index == -1)
    {
        cout << " the key not found " << endl;
    }
    else
    {
        cout << " the key " << key << " found at index  " << index << " of the array " << endl;
    }

    return 0;
}