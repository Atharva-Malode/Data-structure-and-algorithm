#include <iostream>

using namespace std;

int search(int arr[], int n, int key)
{
    // base case
    if (n == 0)
    {
        return -1;
    }
    // recursive case
    if (arr[0] == key)
    {
        return 0;
    }
    int index = search(arr + 1, n - 1, key);
    if (index != -1)
    {
        return index + 1;
    }
    return -1;
}
int main()
{
    int A[] = {2, 3, 4, 5, 6, 1, 42, 52};
    int n = sizeof(A) / sizeof(int);
    int key;
    cout << "Enter the kye you want to search : ";
    cin >> key;
    int ans = search(A, n, key);
    if (ans == -1)
    {
        cout << "The value you are looking for is not found";
    }
    else
    {
        cout << "The key found at index " << ans;
    }

    return 0;
}