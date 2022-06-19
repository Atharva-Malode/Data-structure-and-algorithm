// this is  created to know working of vectors

#include <iostream>
using namespace std;

template <typename T>
class vector
{
    // we have created a dynmaic array
    T *arr;
    int cs;
    int ms;

public:
    vector()
    {
        cs = 0;
        ms = 1;
        arr = new T[ms];
    }
    void push_back(T d)
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
    T front()
    {
        return arr[0];
    }
    T back()
    {
        return arr[cs];
    }
    T at(int d)
    {
        return arr[d];
    }
    T size()
    {
        return cs;
    }
    T capacity()
    {
        return ms;
    }
};

int main()
{
    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    cout <<v.at(0);
    return 0;
}