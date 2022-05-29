#include <bits/stdc++.h>
using namespace std;
int maxSumSubarray(vector<int> A)
{

    int cs = 0;
    int largestsum = 0;
    for (int i = 0; i < A.size(); i++)
    {
        cs = cs + A[i];
        if (cs < 0)
        {
            cs = 0;
        }
        largestsum = max(largestsum, cs);
    }
    return largestsum;
}
int main()
{
    vector<int> v = { 1,-2,3,4,4,-2};
    int largestsum = maxSumSubarray(v);
    cout << " the largest sum is " << largestsum << endl;
    return 0;
}
