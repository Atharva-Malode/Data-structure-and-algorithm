// https://codeforces.com/problemset/problem/1033/B
#include <iostream>
#include <cmath>
using namespace std;

// Efficient prime checker up to sqrt(n)
bool isPrime(long long n) {
    if (n <= 1) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long a, b;
        cin >> a >> b;
        
        // Check special case where area might be prime
        if (a - b == 1 && isPrime(a + b)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}