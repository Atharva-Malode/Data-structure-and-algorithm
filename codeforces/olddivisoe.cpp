// https://codeforces.com/contest/1475/problem/A
#include <iostream>
using namespace std;
 
bool isPowerOfTwo(long long n) {
    return (n & (n - 1)) == 0;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        if (isPowerOfTwo(n))
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}