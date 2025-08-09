// https://codeforces.com/problemset/problem/898/B
#include <iostream>
using namespace std;

#define ll long long

int main(){
    ll t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        int odd = 0;

        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i] % 2 != 0) odd++;
        }

        int ans = INT_MAX;

        // If number of odd elements is even, no operation needed
        if(odd % 2 == 0){
            cout << "0" << endl;
        } else {
            // Need to make odd count even by changing parity of one element
            for(int i = 0; i < n; i++){
                int count = 0;
                int val = arr[i];

                // Count how many times you need to divide by 2
                // to flip parity
                while((val % 2) == (arr[i] % 2)){
                    val /= 2;
                    count++;
                }

                ans = min(ans, count);
            }
            cout << ans << endl;
        }
    }
    return 0;
}