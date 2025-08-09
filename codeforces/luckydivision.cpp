// https://codeforces.com/problemset/problem/122/A
#include <iostream>
using namespace std;

bool isLucky(int n) {
    while (n > 0) {
        if (n % 10 != 7 && n % 10 != 4) {
            return false;
        }
        n /= 10;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    bool ans = false;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0 && isLucky(i)) {
            ans = true;
            break; // No need to check further once a lucky divisor is found
        }
    }

    if (ans)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
