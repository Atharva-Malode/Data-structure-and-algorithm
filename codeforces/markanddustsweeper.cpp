// https://codeforces.com/contest/1705/problem/B #include <iostream>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i]; 
        }

        long long an = 0;

        for (int i = 0; i < n - 1; i++) {
            if (a[i] != 0) {
              an += a[i];
            }
        }

        int i = n - 2;
        while (i >= 0 && a[i] == 0) {
            --i;
            --an;
        }

        cout << an << endl;
    }

    return 0;
}