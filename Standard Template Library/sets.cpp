#include <iostream>
#include <set>

using namespace std;

int main()
{

  /*
      Set is a data structure where we can store the values in a sorted way
      the set also avoids duplicate value and it used red/black tree or self balancing tree
  */

  set<int> a;
  a.insert(21);
  a.insert(54);
  a.insert(15);
  a.insert(6);
  a.insert(6);

  for (auto it = a.begin(); it != a.end(); it++)
  {
    cout << (*it) << " ";
  }

  auto it = a.lower_bound(16);
  cout << (*it) << " ";

  return 0;
}