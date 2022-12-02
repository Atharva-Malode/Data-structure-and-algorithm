#include <iostream>

using namespace std;

void print()
{
    cout << "1" << endl;
    print();
}

int main()
{

    print();

    return 0;
}