// /*Write a program in C++ to create a Number class. The class should contain function  to increment and decrement the number.*/

#include <iostream>
using namespace std;

class Number

{
private:
    int num;

public:
    void getData()
    {
        cout << "Enter Number: ";
        cin >> num;
    }
    void increment()
    {
        num++;
    }
    void decrement()
    {
        num--;
    }
    void Display()
    {
        cout << "Value: " << num << endl;
    }
};

int main()
{
    Number n1;
    n1.getData();
    cout << "Initial ";
    n1.Display();

    cout << "Incremented ";
    n1.increment();
    n1.Display();

    cout << "Decremented ";
    n1.decrement();
    n1.Display();
}