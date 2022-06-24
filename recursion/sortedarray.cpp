//To check weather the array is sorted or not 

#include <iostream>
#include <vector>
using namespace std;
bool sorted(int A[], int n)
{
    // basse case
    if (n == 0 | n == 1)
    {
        return true;
    }

    // recursive case
    if (A[0] < A[1] & sorted(A + 1, n - 1))
    {
        return true;
    }
    return false;
}
int main()
{
    cout << "Enter the size of array : ";
    int n = 5 ;
    //cin >> n;
    int v[n] = {1,2,3,4,5,6,};
    if (sorted(v, n))
    {
        cout << "Yes the array is sorted " << endl;
    }
    else
    {
        cout << "The arrat is not sorted " << endl;
    }
    return 0;
}