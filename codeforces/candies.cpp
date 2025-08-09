// https://codeforces.com/problemset/problem/1676/B
#include <iostream>
#include <algorithm>
using namespace std;

void solve(){
	int n ; 
	cin>>n;
	int arr[n];
	for(int i = 0;i <n ;i ++){
         cin>>arr[i];
	}
  sort(arr,arr+n);
  int ans=0;
  for(int i =0;i<n;i++){
  	ans+=arr[i]-arr[0];
  }
  cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}