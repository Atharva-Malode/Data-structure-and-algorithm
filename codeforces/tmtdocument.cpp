// https://codeforces.com/contest/1509/problem/B
#include <iostream>
#include <string>
using namespace std;

bool isValidTMT(string s) {
    int n = s.size();
    int countT = 0, countM = 0;

    // Total T must be 2 times M
    for (char c : s) {
        if (c == 'T') countT++;
        else countM++;
    }
    if (countT != 2 * countM) return false;

    // Check from left to right
    countT = 0, countM = 0;
    for (char c : s) {
        if (c == 'T') countT++;
        else countM++;
        if (countM > countT) return false;
    }

    // Check from right to left
    countT = 0, countM = 0;
    for (int i = n - 1; i >= 0; --i) {
        if (s[i] == 'T') countT++;
        else countM++;
        if (countM > countT) return false;
    }

    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        if (isValidTMT(s)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
