#include<bits/stdc++.h>
using namespace std;

int pairSticks(vector<int> length, int D)
{
    sort(length.begin(), length.end());
    int res = 0;

    for(int i=0; i<length.size()-1; i++)
    {
        if (length[i + 1] - length[i] <= D) { res++; i++;}
    }

    return res;
}

int main(){

    int n, d;
	cin >> n >> d;
	//n is size of array and d is max difference
	vector<int> length(n);
	for(int i=0; i<n; i++)
	{
		cin >> length[i];
	}
	cout << pairSticks(length, d) << endl;
	return 0;
}