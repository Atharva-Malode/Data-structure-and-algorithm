#include<iostream>
#include<string.h>

using namespace std;

int main(){

    char x[1000];
    cin.getline(x,1000);
    char y[1000];


    //string length
    cout << strlen(x) <<endl;

    
    
    //string copy
    strcpy(y,x);
    cout <<y<<endl;

    
    //string compare
    cout << strcmp(x,y)<<endl;

    
    
    //string concatinate
    char web[1000];
    cin.getline(web,1000);
    char domain[1000];
    cin.getline(domain,1000);
    cout << strcat(web,domain)<<endl;

return 0;
}