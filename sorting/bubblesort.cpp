#include <iostream>
#include <vector>
using namespace std;

void bubble_sort(vector<int> v)
{

    int n = v.size();
    // loop using times for iteartion from first digit to n-1 place
    for (int times = 0; times < n - 1; times++)
    {
        // loop for swapping of first digit to its correct  position in the array by reapeated swapping
        for (int i = 0; i < n - times - 1; i++)
        {
            if (v[i] > v[i + 1])
            {

                swap(v[i], v[i + 1]);
            }
        }
    }
    for (auto x : v)
    {
        cout << x << " ";
    }
}
int main()
{
    int size;
    cout << "enter the size of array " << endl;
    cin >> size;
    vector<int> arr;
    cout << "enter the value of array you want to sort" << endl;
    int element;
    for (int i = 0; i < size; i++)
    {
        cin >> element;
        arr.push_back(element);
    }
    for (auto x : arr)
    {
        cout << x << " ";
    }

    cout << " the sorted array is " << endl;
    bubble_sort(arr);

    return 0;
}