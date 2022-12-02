#include <iostream>
using namespace std;

// forward declaration
class seconds;

class minutes
{

public:
    // constructor
    minutes(int d) : min(d) {}

private:
    int min;

    // friend function declaration
    friend void add(minutes, seconds);
};

class seconds
{

public:
    // constructor of the class
    seconds(int a) : sec(a) {}

private:
    int sec;

    // friend function declaration
    friend void add(minutes, seconds);
};

//  freinds function we can access the private members of the class
void add(minutes objectA, seconds objectB)
{
    int a = objectA.min * 60;
    int seconds = objectB.sec + a;
    int minutes = seconds / 60;
    int hours = minutes / 60;
    cout << int(hours) << " hours " << int(minutes % 60)
         << " minutes " << int(seconds % 60) << " seconds.";
}

int main()
{
    int a, b;
    cout << "Enter Total Minutes: ";
    cin >> a;
    cout << "Enter Total Seconds: ";
    cin >> b;
    minutes t1(a);
    seconds t2(b);
    add(t1, t2);
    return 0;
}