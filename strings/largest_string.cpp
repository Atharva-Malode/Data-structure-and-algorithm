#include<iostream>
#include <string.h>
using namespace std;

int main(){
     
    char sentence[1000];
    char line[1000];
 int n ;
   cout << "Enter the no of sentences you want to compare "<<endl;
   cin >>n;
   cout <<"Enter your lines now "<<endl;
int largest = 0 ;
  while(n--){
    
     cin.getline(sentence,1000);
     int len = strlen(sentence);
    if(len > largest){     

        largest = len;
        strcpy(line,sentence);
    }    

  }

cout << "The largest length is "<<line;

return 0;
}