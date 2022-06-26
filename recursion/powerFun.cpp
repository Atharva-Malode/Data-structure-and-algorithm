/*
     this is to compute the power of any no using recursion
     there are two approaches for computing the solution they are as follows
*/
#include <iostream>
using namespace std;

// Approach 1 : This is the simple approach to the power function using recursion with time complexity O(N)
int pow(int a, int n)
{
    if (n == 0)
    {
        return 1;
    }
    return a * pow(a, n - 1);
}

// Approach 2 : this is optimized solution to solve the same problem in O(log n ) time

int optPow(int a, int n)
{
    if (n == 0)
    {
        return 1;
    }
    int ans = optPow(a, n / 2);
    int anssqr = ans * ans;
    if (n & 1)
    {
        return a * anssqr;
    }
    else{
        return anssqr;
    }
}
int main()
{
    int no;
    cout << "Enter the element : ";
    cin >> no;
    int power;
    cout << "Enter the power : ";
    cin >> power;
    cout << "The no is : " << pow(no, power)<<endl;;
    cout <<"The no in optimised way is : "<<optPow(no,power);
    return 0;
}