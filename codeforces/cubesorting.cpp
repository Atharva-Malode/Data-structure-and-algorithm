// https://codeforces.com/contest/1420/problem/A
#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
	int n;
	cin >> n;
	vector<int> a(n);
	for( int i = 0; i < n; i++)
	cin >> a[i];

	bool flag = true;
	for (int i = 0; i < n - 1; i++)
    {
         if(a[i] <= a[i + 1])
         flag = false;

    }
    if(flag)
    cout << "NO" << endl;
    else
    cout << "YES" << endl;
	}
    return 0;
}