#include<iostream>
#include<string.h>

using namespace std;

bool palindrome(string hello){

    int s = 0;
    int e = hello.length()- 1;
    while(s < e){

        if(hello[s++] != hello[e--]){
            return false;
        }
    }  
 return true;

}



int main(){


char savage[1000];
cout << "Enter the string "<<endl;
cin.getline(savage,1000);

bool answer = palindrome(savage);

if(answer == true ){
    cout<<"Yes the given string is palindrome "<<endl;
}
else{
    cout <<"The given string is not palindrome "<<endl;
}

return 0;
}