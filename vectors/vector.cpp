// this is  created to know working of vectors

#include <iostream>
using namespace std;

class vector
{
    // we have created a dynmaic array
    int *arr;
    int cs;
    int ms;

public:
    vector()
    {
        cs = 0;
        ms = 1;
        arr = new int[ms];
    }
    void push_back(int d)
    {
        // two cases to hanadle
        if (cs == ms)
        {
            int *oldarray = arr;
            ms = 2 * ms;
            arr = new int[ms];

            // copy the old array to new array location
            for (int i = 0; i < cs; i++)
            {
                arr[i] = oldarray[i];
            }
            delete[] oldarray;
        }
        arr[cs] = d;
        cs++;
    }
    void pop_back()
    {
        if (cs >= 0)
        {
            cs--;
        }
    }
    int front()
    {
        return arr[0];
    }
    int back()
    {
        return arr[cs];
    }
    int at(int d)
    {
        return arr[d];
    }
    int size()
    {
        return cs;
    }
    int capacity()
    {
        return ms;
    }
};

int main()
{
    vector v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    cout <<v.at(0);
    return 0;
}