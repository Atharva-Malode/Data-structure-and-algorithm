#include <iostream>

using namespace std;

void print(int array[][100], int n, int m)
{

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{

    cout << "Enter size of array - ";
    int n, m;
    cout << " Your no of column are : ";
    cin >> m;
    cout << " Your no of rows are : ";
    cin >> n;

    int array[1000][100];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> array[i][j];
        }
    }
    print(array, n, m);

    return 0;
}