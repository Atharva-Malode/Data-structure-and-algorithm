#include <bits/stdc++.h>
using namespace std;

int BruteForceSum(vector<int> c)
{
    int largest_summ = 0;

    for (int i = 0; i < c.size(); i++)
    {

        for (int j = i+1 ; j < c.size(); j++)
        {

            int MaxSum = 0;
            for (int k = i; k < j; k++)
            {
                MaxSum += c[k];

            }
                largest_summ = max(MaxSum, largest_summ);
        }
    }

    return largest_summ;
}

int kadens_algorithm(vector<int> A)
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

int preffix_sum(vector<int> B)
{
    int preffix[100];
    preffix[0] = B[0];

    for (int i = 1; i < B.size(); i++)
    {
        preffix[i] = preffix[i - 1] + B[i];
    }

    int largest_sum = 0;
    for (int i = 1; i < B.size(); i++)
    {
        for (int j = i; j < B.size(); j++)
        {
            int maxSubarraySum = 0;
            maxSubarraySum = i > 0 ? preffix[j] - preffix[i - 1] : preffix[j];
            largest_sum = max(maxSubarraySum, largest_sum);
        }
    }
    return largest_sum;
}

int main()
{
    vector<int> v = {1, -2, 3, 4, 4, -2};
    int largestsum = kadens_algorithm(v);
    cout << " largest sum using Kadens Algorithm : " << largestsum << endl;
    int prefix_sum = preffix_sum(v);
    cout << " largest sum using Preffix approach : " << prefix_sum << endl;
    int brute_force_sum = BruteForceSum(v);
    cout << " largest sum using  BruteForce Approach  : " << brute_force_sum << endl;
    return 0;
}
