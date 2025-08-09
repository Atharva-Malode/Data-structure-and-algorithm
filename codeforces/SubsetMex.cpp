// https://codeforces.com/contest/1406/problem/A

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[101] = {0};
        
        for (int i = 0; i < n; i++) {
            int y;
            cin >> y;
            a[y]++;
        }
        
        int mexA = 0, mexB = 0;
        
        for (int i = 0; i <= 100; i++) {
            if (a[i] == 0) {
                mexA = i;
                break;
            }
        }
        
        for (int i = 0; i <= 100; i++) {
            if (a[i] <= 1) {
                mexB = i;
                break;
            }
        }
        
        cout << (mexA + mexB) << endl;
    }
    
    return 0;
}