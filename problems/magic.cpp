//Harshad Nichat 

#include <iostream>
using namespace std;
float result;
float average( float arr[],int n){
    float sum =0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    result = sum / n ;
    return result;
}
int main(){
    
    float arr[5];
    int n =5;
    for(int i =0;i<n;i++){
        cout<<"Enter the marks"<<endl;
        cin>>arr[i];
    }
    
    float index = average(arr, n);
    cout<<endl;
    cout<<" the average is "<< index <<endl;
    
    
    return 0;
    
}