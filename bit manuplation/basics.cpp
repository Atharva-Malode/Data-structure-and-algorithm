/*
            Bit wise operator are fast as compared to normal operator regularly used bitwise operators are as follows

            Binary And (&)                 ||      1 & 1 = 1 rest all 0
            Binary Or  (|)                 ||      0 | 0 = 0 rest all 1
            Binary Xor (^)                 ||      0 ^ 0 = 0 and 1 ^ 1 = 0
            Binary one's compleent (~)     ||      opposite out put of all
            Binary left shift (<<)         ||      shift two binarry digits to left
            Binary right shift (>>)        ||      shift two binary digits to right

*/

#include <iostream>
using namespace std;

/*   identify i th no of bit in 5 = 0101
        5 = 0101
        i = 2      ans should be = 1(because 2 no of bit is 1 )
    Appraoch we will left shift 1(0001) by i (1 will shift left two places ) no's
        1 = 0001  after shifting binary digit 1 of no 1, 1 = 0100
        now just perform &  with n = 0100
                                     0101
                                    ------
                                    0100 this digit is greater than 0 so the ith bit is 1

*/
int getithBit(int n, int i)
{
    int mask = (1 << i);
    return (mask & n) > 0 ? 1 : 0;
}

/*      set ith no of bit and print the result no
       shift binary 1 of digit 1 and simple do or with the shifted binary digit of no 1

 */
void setithBit(int &n, int i)
{
    int mask = (1 << i);
    n = (n | mask);
}

/* clear ith bit
   we will shift the binary 1 of digit 1 and then will do neagtion of the obtained no
      13 = 1101
      i = 2
      1 = 0001 , 1 << i = 0100, ~0100 = 1011
         1101
      &  1011
      ---------
         1001  --> 9

*/
void clearithBit(int &n, int i)
{
    int mask = ~(1 << i);
    n = (n & mask);
}

/* two update the i no of bits from left and make them 0
        15 = 1111;
        i  = 2;  soln = 1100
        first clear ith bit then left shift v from i
        now do n or v left shift i
*/
void updateithBit(int &n, int i, int v)
{
    clearithBit(n, i);
    int mask = (v << i);
    n = (n | mask);
}

// clear bits between a given range
void clearBitsinRange(int &n, int i, int j)
{
    int a = (~-1) << (j + 1);
    int b = (1 << i) - 1;
    int mask = a | b;
    n = n | mask;
}

int main()
{
    int n = 5;
    int no;
    cin >> no;
    cout << "the i th no is " << getithBit(n, no) << endl;
    int i;
    cout << "Enter the bit you want to set :";
    cin >> i;
    setithBit(n, i);
    cout << "The no is : " << n << endl;
    int f;
    cin >> f;
    n = 13;
    clearithBit(n, f);
    cout << n;
    n = 15;
    int j;
    cin >> j;
    int k, l;
    cout << "Enter from :";
    cin >> k;
    cout << "To :";
    cin >> l;
    cout << endl;
    clearBitsinRange(n, i, j);
    cout << n;
    return 0;
}