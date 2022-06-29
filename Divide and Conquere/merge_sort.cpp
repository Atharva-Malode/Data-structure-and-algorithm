#include <iostream>
#include <vector>
using namespace std;

void conquere(vector<int> &array, int s, int e)
{
    int mid = (s + e) / 2;
    int indx1 = s;
    int indx2 = mid + 1;

    vector<int> merged;
    // first operation  is to push the element which  si smaller from 1 and 2nd array
    while (indx1 <= mid && indx2 <= e)
    {
        if (array[indx1] < array[indx2])
        {
            merged.push_back(array[indx1]);
            indx1++;
        }
        else
        {
            merged.push_back(array[indx2]);
            indx2++;
        }
    }

    // waht if our one of the array is bigger than the other one
    while (indx1 <= mid)
    {
        merged.push_back(array[indx1]);
        indx1++;
    }

    while (indx2 <= e)
    {
        merged.push_back(array[indx2]);
        indx2++;
    }

    // now we have to copy this array merged to our orignal array
    int k = 0;
    for (int run = s; run <= e; run++)
    {
        array[run] = merged[k];
        k++;
    }
    return;
}
void divide(vector<int> &array, int s, int e)
{
    

    // base case
    if (s >= e)
    {
        return;
    }
    int mid = (s + e) / 2;
    divide(array, s, mid);
    divide(array, mid + 1, e);
    return conquere(array, s, e);
}

int main()
{
    vector<int> array ;//= {4, 3, 1, 5, 6};
    //int n = sizeof(array) / sizeof(int);
    int no;
    int k ;
    cout <<"Enter the size of array : ";
    cin >> no;
    cout << "Enter the values of array : ";
    for (int i = 0 ; i < no ; i++){
        cin >>k;
        array.push_back(k);
    }
    cout << "The sorted array is : ";
    divide(array, 0, no - 1);
    for (auto x : array)
    {
        cout << x << " ";
    }
    return 0;
}