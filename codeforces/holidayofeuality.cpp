// https://codeforces.com/contest/758/problem/A
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i<n;i++){
	cin>>arr[i];
	}
	int num= *max_element(arr,arr+n);
	int ans=0;
	for(int i=0;i<n;i++){
	ans+=(num-arr[i]);
	}
    cout << ans << endl;
    }