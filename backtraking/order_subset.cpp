/*

till now we have seen how to find subset of a givenn string now we will sort  the same string on following basis
  1) on the basis of there length
  2)  if the length is same then we will sort in lexicographic amnner

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// compare function is used to sort the given array on the basis of its length and if length is 
// is equal then on the basis of Lexicographic order
bool compare(string a, string b){
     if (a.length() == b.length()){
      return a < b;
     }
     return a.length() < b.length();
}
void subset(char *input, char *output, int i, int j, vector<string> &list)
{

    // base case
    if (input[i] == '\0')
    {
        output[j] = '\0';
        string temp(output);
        list.push_back(temp);

        return;
    }

    // recursive case

    output[j] = input[i];
    // case 1
    subset(input, output, i + 1, j + 1, list);

    // case 2
    subset(input, output, i + 1, j, list);
}
int main()
{
    char input[100];
    char output[100];
    vector<string> list;
    cin >> input;
    subset(input, output, 0, 0, list);
    for (auto x : list)
    {
        cout << x << " ";
    }
  cout << " The list after sorting is : ";
  sort(list.begin(),list.end(),compare);
  for (auto x : list)
    {
        cout << x << " ";
    }
    return 0;
}