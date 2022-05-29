#include <bits/stdc++.h>

using namespace std;

vector<int> kRotate(vector<int> a, int k){
    // your code  goes here

    //taken a new vector
 
 vector<int> v;
 
     //size of vector from arguments
    
    
    int n = a.size(); 
    
        //get remainder from no of rotation divided by size of vecotor in arguments
    
    
    k = k % n;    
 
     //loops goes on until the size of array in arguments 
    for(int i = 0; i < n; i++)  
    {
       if(i < k)
       {
           v.push_back(a[n + i - k]);    
       }
       else
       {
           v.push_back(a[i - k]);
       }
    }
    return v;
}



int main(){
vector <int> a;
int n;
cout << " enter the size of array "<< endl;
cin >> n;
int elemnts;

cout << "enter the elements of array " << endl;
for (int  i = 0; i < n; i++)
{
    cin >> elemnts;
    a.push_back(elemnts);
}
cout << "your given array is as follows "<< endl;
for(auto x : a){
    cout << x << " ";
}
int x;
cout << "enter the value of x "<< endl;
cin>>x;
kRotate(a,x);
return 0;
}