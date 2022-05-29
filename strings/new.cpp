#include <iostream>
using namespace std;
int main()
{
    char o,ch;
    float a,b;
    do
    {
    cout << "Enter operator either + or - or * or /: ";
    cin >> o;
    cout << "Enter two operands: ";
    cin >> a >> b;
    switch(o)
    {
        case '+':
            cout << a+b;
            break;
        case '-':
            cout << a-b;
            break;
        case '*':
            cout << a*b;
            break;
        case '/':
            cout << a/b;
            break;
        default:
            cout << "Error! operator is not correct";
            break;
    }
    cout<<"\n\n do you want to Continue? enter the operator if yes and N if no";
    cin>>ch;
    }while(ch!='n' && ch!='N');
    return 0;
}