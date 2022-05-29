#include <bits/stdc++.h>
using namespace std;

int insertion_sort(vector <int>  V)
{

    int n = V.size();
    for (int i = 1; i < n; i++)
    {
        int current = V[i];
        int previous = i - 1;
        while (previous >= 0 && V[previous] > current)
        {
            V[previous + 1] = V[previous];
            previous = previous - 1;
        }
    }
}

int main()
{
    vector<int> A;
    int element;
    cout << " enter the size the array " << endl;
    int size;
    cin >> size;
    cout << " enter the value of the array " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> element;
        A.push_back(element);
    }

    insertion_sort(A);
    for (auto x : A)
    {

        cout << x << " ";
    }

    return 0;
}