// https://codeforces.com/problemset/problem/898/B
#include <iostream>
using namespace std;

typedef long long ll;

int main(){
	ll n, a, b;
	cin>>n >> a>> b;

	ll X = -1, Y;
	for( Y = 0; Y<=1e7; Y++){
	if( (n - Y * b) % a ==0 && n - Y * b >= 0){
	       X = (n - Y * b)/a;
	       break;
	}
	}
	if( X == -1){
	cout<<"NO\n";
	}else {
	  cout<< "YES\n"<< X << ' '<< Y << '\n';
	}
	return 0;
}
