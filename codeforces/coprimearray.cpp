// https://codeforces.com/problemset/problem/660/A

#include <iostream>
using namespace std;
typedef long long ll;

ll gcd( ll num1, ll num2){
	if( num1 == 0)
	return num2;
	return gcd( num2 % num1, num1);
}

int main(){
	ll n; cin>>n;
	ll arr[n], post[n], cnt = 0;

	for(ll i = 0; i<n; i++){
	cin>> arr[i];
	post[i] = 0;  
	}
	for( ll i = 0; i < n-1; i++){
	if( gcd ( arr[i], arr[ i + 1]) != 1){
        post[i] = 1;
        cnt++;
	}
	}
	cout << cnt << '\n';
	for(ll i = 0; i<n; i++){
	cout << arr[i] << ' ';
	if(post[i]) cout<< 1 << ' ';
	}

    cout << '\n';
    return 0;
}