#include <vector>
#include <iostream>

using namespace std;

void Explain_Vector()
{
    vector<int> a;
    a.push_back(1);
    /*Emplace Back seems to be similar to push_back
    but is different from it and it is also faster */
    a.emplace_back(3);
}

int main()
{

    Explain_Vector();
    return 0;
}