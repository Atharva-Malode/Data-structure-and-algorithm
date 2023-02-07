#include <bits/stdc++.h>
using namespace std;

// It is a Top down Appraoch
int top(vector<int> &dp, int n)
{
    if (dp[n] != -1)
    {
        return dp[n];
    }
    if (n <= 1)
    {
        dp[n] = n;
        return dp[n];
    }
    dp[n] = top(dp, n - 1) + top(dp, n - 2);
    return dp[n];
}

// Bottom down approach
int bottom(vector<int> &Dp, int n)
{
}
int main()
{
    int no;
    cout << "Enter a number: ";
    cin >> no;
    vector<int> dp(no + 1, -1);
    cout << "The " << no << "th Fibonacci number is: " << top(dp, no) << endl;
    return 0;
}
