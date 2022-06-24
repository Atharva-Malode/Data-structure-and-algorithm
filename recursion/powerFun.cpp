/*
     this is to compute the power of any no using recursion
     there are two approaches for computing the solution they are as follows
*/
#include <iostream>
using namespace std;

int pow(int a, int n)
{
    if (n == 0)
    {
        return 1;
    }
    return a * pow(a,n-1);
}
int optPow(int a, int n)
{
}
int main()
{
    int no;
    cout << "Enter the element : ";
    cin >> no;
    int power;
    cout <<"Enter the power : ";
    cin>>power;
    cout <<"The no is : "<< pow(no,power);
    return 0;
}