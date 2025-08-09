// https://codeforces.com/contest/1367/problem/B

#include <iostream>
using namespace std;

int main(){
int t;
cin >> t;

while(t -- ){
	int n;
	cin >> n;
	int a[n];

for(int i=0; i < n; i ++ ){
	cin >> a[i];
}

int paradict_even = 0;
int paradict_odd = 0;

for(int i=0; i < n; i ++){
	if (i % 2 != a[i] % 2){
		if(i % 2 == 0)
			paradict_even ++;
		else 
		    paradict_odd ++;
	}

}

if (paradict_even == paradict_odd)
            cout << paradict_even << endl;
        else
            cout << -1 << endl;
    
 }
    return 0;

}