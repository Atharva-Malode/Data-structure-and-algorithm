
// thsi is a simple programe to check weather the no is a power of two (2) or not
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter any one no " << endl;
    cin >> n;

    if ((n & (n - 1)) == 0)
    {
        cout << "Yes the no is power of two";
    }
    else
    {
        cout << "no the no is not power of two";
    }
    return 0;
}