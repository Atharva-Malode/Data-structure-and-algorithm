
/*
   given a no like 2021 convert it into a string like "Two zero Two one"
*/
#include <iostream>
using namespace std;

string ans[] = {"zero", "one", "two", "three", "foour", "five", "six", "seven", "eight", "nine", "ten"};
void spell(int n)
{
    if (n == 0)
    {
        return;
    }
    int last_digit = n % 10;
    spell(n / 10);
    cout << ans[last_digit] << " ";
}
int main()
{
    int no;
    cout << "Enter any no : ";

    cin >> no;
    spell(no);
    return 0;
}