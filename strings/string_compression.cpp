#include <iostream>
#include <vector>

using namespace std;

int compress(vector<char> a)
{
    string v;
    int n = a.size();
    for (int i = 0; i < a.size(); i++)
    {
        int count = 1;

        while (i < n - 1 && a[i + 1] == a[i])
        {
            count++;
            i++;
        }
        v += a[i];
        if (count > 1)
        {
          v += to_string(count);
        }
    }
   
    if (a.size() < v.size())
    {
        return a.size();
    }
    return v.size();
}

int main()
{

    char input;
    string v;

    cout << "Enter the values of the string here " << endl;
    getline(cin, v);

    vector<char> s(v.begin(), v.end());
    // for(auto x : s){
    //   cout << x << endl;
    // }
    int answer = compress(s);

    cout << "The value is " << answer;
    return 0;
}