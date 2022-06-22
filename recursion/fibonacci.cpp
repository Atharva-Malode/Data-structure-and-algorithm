// A prgramme to find fibonacci no at user entered place
// For Prime no using recursion 
#include <iostream>
using namespace std;

bool prime(int n, int i = 2)
{
    // base case
    if (i >= n)
    {
        (n == 2) ? true : false;
    }
    if (n % i == 0)
    {
        return false;
    }
    if (i * i > n)
    {
        return true;
    }

    //for prime
    return (n , i + 1);
}
int fib(int n)
{
    if (n == 1 | n == 0)
    {
        return n;
    }
    int f1 = n - 1;
    int f2 = n - 2;
    return (fib(f1) + fib(f2));
}

int main()
{
    int n;
    cout << "Ente a no : ";
    cin >> n;
    cout << fib(n);
    cout << endl;
    cout << "Enter a no to check it is a prime or not : ";
    int a;
    cin >> a;
    int b = prime(a);
    if (b == true)
    {
        cout << "Yes the no is prime !";
    }
    else
    {
        cout << "Opps no is not prime ";
    }

    return 0;
}