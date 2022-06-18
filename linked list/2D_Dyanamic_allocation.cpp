#include <iostream>
using namespace std;

int **create_2d_array(int rows, int cols)
{

    int **arr = new int *[rows];

    // allocaiting dynamic memory to each row
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }
    int value = 0;

    for (int i = 0; i < rows ; i++){
        for (int j = 0 ; j < cols ; j++){
            arr[i][j] = value;
            value ++;
        }
    }
    return arr;
}

int main()
{

    int rows, cols;
    cout << "Enter row : ";
    cin >> rows;
    cout << "Enter cols : ";
    cin >>cols;

    int **array = create_2d_array(rows, cols);
     cout << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << array[i][j] << " ";
        }
        cout <<endl;
    }

    return 0;
}