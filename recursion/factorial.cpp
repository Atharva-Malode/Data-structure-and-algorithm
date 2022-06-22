#include <iostream>

using namespace std;

int factorial(int n)
{
    // case to stop
    if (n == 0){
        return 1;
    }
    
    //for factorial
    n = n * factorial(n-1);
    return (n);
}
int main()
{
    int n;
    cout << "Enter any no : ";
    cin >> n;
    cout <<endl;
    cout << factorial(n);

    return 0;
}