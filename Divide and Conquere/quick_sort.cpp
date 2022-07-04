#include <iostream>
#include <vector>
using namespace std;


// you may also call this as partition block of code which make the partition and return the pivote index 
int divide(vector<int> &a, int s, int e)
{
    // our pivote element
    int pivote = a[e];
    int  i = s-1;
    for ( int j  = s; j < e; j++)
    {
        if (a[j] < pivote)
        {
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[e]);
    // returning pivote element 
    return i + 1;
}
void conquere(vector<int> &a, int s, int e)
{
    //base case 
    if (s >= e){
        return ;
    }
    int p = divide(a, s, e);
    // recursive case 
    conquere(a, s, p - 1);
    conquere(a, p + 1, e);
}
int main()
{
    vector<int> arr{3, 2, 1, 3, 4};
    int n = arr.size();
    conquere(arr, 0, n - 1);
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}