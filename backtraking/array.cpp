#include <iostream>
#include <vector>
using namespace std;

void backtrack(int n, vector<int> v, int i)
{

  if (i == n)
  {

    // return case
    for (int j = 0; j <= n; j++)
    {
      cout << v[j] << " ";
    }
    return;
  }
  // recursive case
  v[i] = i;
  backtrack(n, v, i + 1);
}

int main()
{
  vector<int> v;
  int n;
  cin >> n;
  backtrack(n, v, 0);
  return 0;
}