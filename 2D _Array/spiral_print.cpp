/*
write a function that takes in n *m 2D array and prints
all array elements in spiral order start from top left
corner goes to right, proceedes in a spiral pattern
until every element is visitd


Sample input :
               sc          (ec)end column
                1   2   3    4    <-- Start row+1
                12  13  14   5
     ER-1 -->   11  16  15   6
                10   9   8   7    <-- End row
                ^            ^
                sc          ec-1

output :1  2  3  4  5  6  7  8  9  10  11 12  13  14  15  16          */

#include <iostream>

using namespace std;

void spiral_print(int arr[][10], int n, int m)
{

    int start_row = 0;
    int start_column = 0;
    int end_row = n - 1;
    int end_column = m - 1;

    while (start_column <= end_column && start_row <= end_row)
    {

        for (int col = start_column; col <= end_column; col++)
        {
            cout << arr[start_row][col] << " ";
        }
        for (int row = start_row + 1; row <= end_row; row++)
        {
            cout << arr[row][end_column] << " ";
        }
        for (int col = end_column - 1; col >= start_column; col--)
        {
            if (start_row == end_row)
            {
                break;
            }
            cout << arr[end_row][col] << " ";
        }
        for (int row = end_row - 1; row >= start_row + 1; row--)
        {
            if (start_column == end_column)
            {
                break;
            }
            cout << arr[row][start_column] << " ";
        }
        start_row++;
        end_row--;
        start_column++;
        end_column--;
    }
}

int main()
{

    int array[][10] = {
        {1, 2, 3, 4},
        {12, 13, 14, 5},
        {11, 16, 15, 6},
        {10, 9, 8, 7}};
    int n = 4;
    int m = 4;
    cout << " Enter no of rows and columns : ";
    // cin >> n, m;
    cout << " Enter the 2D Array now : " << endl;

    /*for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> array[i][j];
        }
    } */
    spiral_print(array, n, m);
    return 0;
}