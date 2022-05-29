#include <iostream>

using namespace std;

void selection_sort(int arr[], int n)
{

    for (int pos = 0; pos < n; pos++)
    {
        int current = arr[pos];
        int min_position = pos;
        for (int i = pos; i < n; i++)
        {
            if (arr[i] < arr[min_position])
            {
                min_position = i;
            }
        }
        // swaping out side the loop
        swap(arr[min_position], arr[pos]);
    }
}

int main()
{
    int size;
    cout << " enter the size of the array " << endl;
    cin >> size;
    cout << " enter the values of array " << endl;
    int arr[size];
    for (int i = 0; i < size; i++)
    {

        cin >> arr[i];
    }
    int n = sizeof(arr) / sizeof(int);
    cout << " the geiven array is " << endl;
    for (int j = 0; j < size; j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;
    selection_sort(arr, n);
cout << "the sorted array is "<<endl;
for (auto x : arr){
    cout << x <<" ";
}
    return 0;
}