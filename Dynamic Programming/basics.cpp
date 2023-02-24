#include <bits/stdc++.h>
using namespace std;

// It is a Top down Appraoch
int top(vector<int> &dp, int n)
{
    // base case
    if (dp[n] != -1)
    {
        return dp[n];
    }
    // check weathere the step is already computed or not
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
    // base case
    Dp[0] = 0;
    Dp[1] = 1;

    // bottom approach using loop
    for (int i = 2; i <= n; i++)
    {
        Dp[i] = Dp[i - 1] + Dp[i - 2];
    }
    return Dp[n];
}
int main()
{
    int no;
    cout << "Enter a number: ";
    cin >> no;
    vector<int> dp(no + 1, -1);
    cout << "The " << no << "th Fibonacci number is: " << top(dp, no) << endl;
    vector<int> Dp(no + 1, -1);
    cout << "The " << no << "th Fibonacci number is: " << bottom(Dp, no) << endl;

    return 0;
}
