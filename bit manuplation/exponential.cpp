
// this is to find exponential of a no in log n time by using loop it takes O(n) time 

#include <iostream>

using namespace std;

int fastExpo(int a, int n)
{
    int ans = 1;
    while (n > 0)
    {
        int last_bit = (n & 1);
        if (last_bit)
        {
            ans = ans * a;
        }
        a = a * a;
        n = n >> 1;
    }
    return ans;
}
int main()
{
    int n ,m ;
    cin >> n;
    cin>>m;
    cout << fastExpo(n,m);

    return 0;
}