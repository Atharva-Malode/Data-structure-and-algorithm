#include <iostream>
#include <Stack>

using namespace std;

/*
        solve a problem : given a string of Parathesis {},(),[] we need
        to check if the string is balanced or not

         Input  : "([])"
         output : yes

         Input  : "[{]}"
         output : No

         Input  : "{}[()]"
         Output :yes
   */
bool matching(char a, char b)
{
    return ((a == '(' && b == ')' || a == '{' && b == '}' || a == '[' && b == ']'));
}

bool check(string str)
{
    stack<int> a;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '[' || str[i] == '(' || str[i] == '{')
        {
            a.push(str[i]);
        }
        else
        {
            if (str.empty() == true)
            {
                return false;
            }
            else if (matching(a.top(), str[i]) == false)
            {
                return false;
            }
            else
            {
                a.pop();
            }
        }
    }
    return (a.empty() == true);
}
int main()
{

    string a = {'{', '}', '[', '(', ')', ']'};

    cout << (check(a)) << endl;

    return 0;
}