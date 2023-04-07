#include <iostream>
#include <queue>

using namespace std;

int main()
{
    /*
    What is a queue ?
    simple ! somthing similar to a normal queue where you can insert a element from the last
    but the element at the first postion can only be accesed or used it is a adapter container
    */

    queue<int> a;
    a.push(4);
    a.push(1);
    a.push(6);
    a.push(3);
    while (a.empty() == false)
    {
        cout << a.front() << " ";
        a.pop();
    }
    return 0;
}