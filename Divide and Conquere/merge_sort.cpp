#include <iostream>
#include <vector>
using namespace std;

void merge_sort(vector<int> &arr, int s, int e)
{

    int mid = (s + e) / 2;
    int j = mid + 1;

    vector<int> temp;

    while (s <= mid & j <= e)
    {
        if (arr[s] < arr[j])
        {
            temp.push_back(arr[s]);
            s++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }
    while (s <= mid)
    {
        temp.push_back(arr[s++]);
    }
    while (j <= e)
    {
        temp.push_back(arr[j++]);
    }
    
}
void Merge_recursion(vector<int> &arr, int s, int e)
{
    int mid = (s + e) / 2;
    // base case
    if (s <= e)
    {
        return;
    }

    // recursive case
    Merge_recursion(arr, s, mid - 1);
    Merge_recursion(arr, mid + 1, e);

    merge_sort(arr, s, e);
}

int main()
{
    int no;
    cout << "Enter the size of array : ";
    cin >> no;
    cout << endl;

    vector<int> arr;
    cout << "Enter the values of the array : ";
    int a;
    for (int i = 0; i < no; i++)
    {
        cin >> a;
        arr.push_back(a);
    }
    cout << "The unsorted array is : ";
    for (int x : arr)
    {
        cout << x << " ";
    }
    cout << "The sorted array is : ";
    return 0;
}