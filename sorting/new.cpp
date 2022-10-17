#include<iostream>

using namespace std;

int main(){
    int b = 0;
    char array[]={'a','b','c','d','e','f','g','h'};
   // int b = sizeof(array) / sizeof(array[0]);
  int i = 0;
  while(array[i] != '\0'){
  //  cout<<array[i]<<endl;
    b++;
    i++;
  }
  
  cout <<b<<endl;
return 0;
}