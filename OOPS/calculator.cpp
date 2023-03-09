/*WAP to make a calculator in C++ using switch case*/


#include<iostream>
using namespace std;
int main()
{
    int a,b,c,choice,add,sub,mul,Division;
    while(1)
    {
    cout<<"Enter Numbers:";
    cin>>a>>b;
    cout<<"--------------------------"<<endl;
    cout<<"For Addition enter 1"<<endl<<"For Substraction enter 2"<<endl;
    cout<<"For Multiply enter 3"<<endl<<"For Division enter 4"<<endl;
    cout<<"Enter 5 to exit"<<endl;
    cout<<"--------------------------"<<endl;
    cout<<"Enter Operator:";
    cin>>choice;
    
    
    switch(choice){
        case 1 :
        cout<<"Addition:";
        c=a+b;
        cout<<c<<endl;
        cout<<"--------------------------"<<endl;
        break;
        case 2  :
        cout<<"Substraction:";
        c=a-b;
        cout<<c<<endl;
        cout<<"--------------------------"<<endl;
        break;
        case 3  : 
        cout<<"Multiply:";
        c=a*b;
        cout<<c<<endl;
        cout<<"--------------------------"<<endl;
        break;
        case 4 :
        cout<<"Division:";
        c=a/b;
        cout<<c<<endl;
        cout<<"--------------------------"<<endl;
        break;
        case 5:
        exit(0);
        break;
        default:
        cout<<"Enter Valide Choice.";
        break;
    }
    }
}

