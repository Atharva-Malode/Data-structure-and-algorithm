#include<iostream>

using namespace std;

int main(){
      
     int n;
     cin>>n;
    
    //allocating a dynamic array

     int *arr = new int[n];
    
     for(int i = 0; i <= n; i++){
        arr[i] = i ;
        cout <<arr[i]<<" ";
     }
     cout <<endl;

    // adress of the array before deletion 
 cout <<arr<<endl; 
    delete[] arr;

   // adress of the array after deletion {may be the address before deletion and after deletion same in some cases}
 cout <<arr<<endl;

return 0;
}