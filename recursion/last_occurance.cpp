#include <iostream>
using namespace std;

int last_search(int arr[], int n, int key)
{
    // base case
    if (n == 0)
    {
        return -1;
    }
    // recursive case
    int index = last_search(arr + 1, n - 1, key);
    if (index == -1)
    {
        if (arr[0] == key)
        {
            return 0;
        }
        else
        {
            return -1;
        }
    }
    else
    {
        return index + 1;
    }
}
int main()
{

    int A[] = {2, 3, 4, 1, 5, 6, 10, 56, 37};
    int n = sizeof(A) / sizeof(int);
    int key;
    cin >> key;
    int ans = last_search(A, n, key);
    if (ans == -1)
    {
        cout << "Element you are trying to search is missing from the given array ";
    }
    else
    {
        cout << "yes ! the element found at index " << ans;
    }
    return 0;
}