#include <bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int> &b){
       
          for(int i = 0 ; i < b.size() ; i++){
                   
                   for(int j = i+1; j <b.size() ; j++){

                    if(b[i] > b[j]){
                        swap(b[i],b[j]);
                    }

                   }
          }
        //  cout <<"The sorted array is : ";
         // for(auto x : a){
           //   cout << x <<" ";
          //}
}


void insertion_sort(vector<int> &c){



   for(int i = 0; i < c.size(); i++ ){
        int current = c[i];
        int prev = i - 1;


        while( prev >= 0   &&   c[prev] < current){
                   c[prev + 1] = c[prev];
                    prev = prev - 1;

        } 
        c[prev + 1] = current;

   }


}
int main(){
     

     vector<int> b;
     int a;
     cout<<"Enter the size of array :";
     cin >> a;
     cout <<"Enter the elements of the array : ";
     
     int c;
     for (int i = 0; i < a; i++)
     {  
         cin>>c;
         cout <<endl;
         b.push_back(c);
     }
     cout <<"The unsorted array is as follows : ";
     for(auto x : b){
         cout <<x<<" ";
     }
     cout <<endl;
     bubble_sort(b);
    cout <<"The sorted array for bubble sort is : ";
     for(auto x : b){
         cout <<x<<" ";
     }
     cout <<endl;
    insertion_sort(b);
    cout << "The sorted array for insertion sort is : ";
    for (auto x : b){
        cout <<x<<" ";
    }
    return 0;
}