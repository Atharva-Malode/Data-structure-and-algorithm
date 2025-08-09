// https://codeforces.com/contest/1328/problem/A
#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
	int a,b;
	cin>>a>>b;
	if(a%b==0){
	cout<<0<<endl;
	}
	else{
	cout<<b-(a%b)<<endl;
	}
  }
}
