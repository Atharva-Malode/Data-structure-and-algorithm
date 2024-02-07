#include <bits/stdc++.h>
using namespace std;

string substring( string name)
{



    int i = 0;
    int j = 0;
    int window_len = 0;
    int max_window_len = 0;
    int start_window = -1;

     unordered_map<char,int> m;
    //sliding window
    while(j < name.length())
    {
        char ch = name[j];

        //if it is inside hashmap 7 its idx >= start of the current window
        if(m.count(ch) and m[ch] >= i)
        {
            i = m[ch] + 1;
            window_len  = j - i;
        }

        //update the last occ
        m[ch] = j;
        window_len++;
        j++;

        //update max_window_len at every step
        if(window_len > max_window_len)
        {
            max_window_len = window_len;
            start_window = i;
        }
    }
   return name.substr(start_window,max_window_len);
}

int main() {
    string name = "abcabeb";
    cout << substring(name);

}
