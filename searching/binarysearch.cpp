#include<iostream>

using namespace std;
int Binary_search(int aray[],int n,int key){

  int s = 0;
  int e = n-1;

  while (s<=e){
 
    int mid = (s+e)/2; 
      if(aray[mid]==key){
          return mid;
      }
       else if(aray[mid] > key){

          e=mid-1;
          
      }
      else{
          s=mid+1;
      }
  }return -1;
}
int main(){
         
         int a;
         cout << "enter the no of elemrnts in array "<<endl;
         cin>>a;
         int aray [a];
    cout << "enter the values of array " << endl;
    for (int  i = 0; i < a; i++)
    {
        cin >> aray[i];
    }

    int n = sizeof(aray)/sizeof(int);
int key;
    cout <<" enter the element to find "<<endl;
    cin>>key;  
    int index =  Binary_search(aray,n,key);
  if(index != -1){
  cout << "the element "<< key <<" founf at index "<<index <<" of the aray "<<endl;
  }
  else{
      cout << " elemnt not found "<<endl;
  }
return 0;
}