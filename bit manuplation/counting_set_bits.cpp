// to count set bit  ex : 9 = 1001 --> no of set bit 1 is 2
#include <iostream>

using namespace std;

int counting_bits_hack(int n)
{
    int ans = 0;
    while (n > 0)
    {
        n = n & (n - 1);
        ans++;
    }
    return ans;
}

int setbit(int n)
{
    int count = 0;
    while (n > 0)
    {
        int last_bit = (n & 1);
        count += last_bit;
        n = n >> 1;
    }
    return count;
}
int main()
{
    int j;
    cout << "Enter a no : ";
    cin >> j;
    cout << endl;
    int a = setbit(j);
    cout << "The no of set bit is  " << a<<endl;
    int b = counting_bits_hack(j);
    cout << "The no of bits in hack is : "<<b;
    return 0;
}