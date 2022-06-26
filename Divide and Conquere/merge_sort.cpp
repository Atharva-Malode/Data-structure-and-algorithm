#include <iostream>
#include <vector>
using namespace std;

void merge_sort(vector<int> &arr, int s, int e)
{
}
void Merge_recursion(vector<int> &arr, int s, int e)
{
}

int main()
{
    int no;
    cout << "Enter the size of array : ";
    cin >> no;
    vector<int> arr;
    cout << "Enter the values of the array : ";
    int a;
  //  for (int i = 0 ; i < no ; i++)
  //  {
  //      cin >> a;
  //      arr.push_back(a);
  //  }
    for (auto x : arr){
        cin >> x;
        arr.push_back(x);
    }
    for (int x : arr){
        cout << x <<" ";
    }
    return 0;
}