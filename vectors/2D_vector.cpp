#include <iostream>
#include <vector>

using namespace std;
int main()
{

    // how to intialize a 2D vector

    vector<vector<int>> dynamic_vector{{1, 2, 3, 4, 5},
                                       {6, 7, 8, 9, 10},
                                       {11, 12, 13, 14},
                                       {15, 16, 17}};

    for (int i = 0; i < dynamic_vector.size(); i++)
    {
        for (auto x : dynamic_vector[i])
        {
            cout << x << " ";
        }
        cout << endl;
    }
}
