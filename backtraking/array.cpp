//need to fix 
// NOTE : the case will be same for a vector but it need to be passed by re frence using & vector <int> &ans;

#include <iostream>
using namespace std;

void print(int array[], int n ){
       for (int j = 0; j < n ; j++){
        cout << array[j]<<" ";
       }
}
void Backtrack(int *arr, int n,int i, int value)
{ 

  //base case
  if(i == n){
     print(arr,n);
      return;
     }
  
  //recursive case
    arr[i] = value;
     Backtrack(arr,n, i + 1 ,value + 1);
  // backtrack case
  arr[i] = -1 * arr[i];
}

int main()
{
  int arr[100] ;
  //int size = sizeof(arr) / sizeof(int);
  int n;
  cin>>n;

  Backtrack(arr,n, 0, 1);
  cout <<endl;
  print(arr,n);
}
