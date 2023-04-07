#include <iostream>
#include <forward_list>
using namespace std;

int main()
{

    forward_list<int> a;

    // To push a element in the list on the front
    a.push_front(8);

    // To assign the elements to a list if more than one use curly braces {}
    a.assign({10, 12, 13, 14});

    // remove any particular element from the list
    a.remove(10);

    // used a iterator, to set the iterator used a.begin and insert to insert element after iterator
    auto it = a.insert_after(a.begin(), 10);

    // insert a range after the given iterator
    it = a.insert_after(it, {1, 2, 3, 4});

    // emplace and insert works the same emplace was used as a experiment to improve the complexity
    it = a.emplace_after(it, 40);

    // erase the elment after the iterator
    it = a.erase_after(it);

    // reverse the entiire list
    a.reverse();

    // is empty function to check if the list is empty or not
    if (a.empty())
    {
        cout << "Yes its Empty !" << endl;
    }
    else
    {
        cout << "its Not Empty !" << endl;
    }

    for (auto x : a)
    {
        cout << x << endl;
    }

    return 0;
}