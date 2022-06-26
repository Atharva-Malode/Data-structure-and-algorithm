/*
 To search a  element in a binary element in a 2D array we can use 3 approaches as listed below
     Approcah 1 --> Bruteforce approach : We may transverse accrose complete array row by row or column by column (linear search).
     Approach 2 --> Binary search approach : we may apply binary search on each row or column to search the element.
     Approach 3 --> staircase approach : we will fix the corner elements of the array and check the less than element and in move in that direction.

                            

                      ROWS    ==>    1   2   3  [4]   

                                     5   6   7   8

                                     9   10  11  12
                                     
                                     13  14  15  16    <--  {(n-1),(m-1)}
 */ 

#include <iostream>
using namespace std;

pair<int, int> bruteforceApproach(int arr[][10], int n, int m, int key)
{
    pair<int, int> bruteForce;
    bruteForce.first = -1;
    bruteForce.second = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == key)
            {
                bruteForce.first = i;
                bruteForce.second = j;
                break;
            }
        }
    }
    return bruteForce;
}
pair<int, int> binarySearchApproach(int arr[][10], int n, int m, int key)
{
    pair<int, int> binarySearch;

    binarySearch.first = -1, binarySearch.second = -1;

    int s1 = 0;
    int s2 = 0;
    int e1 = n;
    int e2 = m;

    while (arr[s1][s2] <= arr[e1][e2])
    {

        int mid1 = (s1 + e1) / 2;
        int mid2 = (s2 + e2) / 2;

        if (arr[mid1][mid2] == key)
        {
            binarySearch.first = mid1;
            binarySearch.second = mid2;
            return binarySearch;
            break;
        }
        else if (arr[mid1][mid2] < key)
        {
            s1 = mid1 + 1;
            s2 = mid2 + 1;
        }
        else
        {
            e1 = mid1 - 1;
            e2 = mid2 - 1;
        }
    }
    return binarySearch;
}
pair<int, int> staircaseApproach(int arr[][10], int n, int m, int key)
{
    int i = 0;
    int j = m - 1;
    if (key < arr[0][0] || key > arr[n - 1][m - 1])
    {
        return {-1, -1};
    }
    while (i <= n - 1 && j >= 0)
    {
        if (arr[i][j] == key)
        {
            return {i, j};
        }
        else if (arr[i][j] < key)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return {-1, -1};
}

int main()
{

    int array[][10] = {{1,  2,  3,  4},
                       {5,  6,  7,  8},
                       {9,  10, 11, 12},
                       {13, 14, 15, 16}};

    int n = 4;
    int m = 4;
    int a = 11;

    // Approach 1
    pair<int, int> brute = bruteforceApproach(array, n, m, a);
    if (brute.first == -1 && brute.second == -1)
    {
        cout << "The element you searched is not found " << endl;
    }
    else
    {
        cout << "The element found at index [" << brute.first << "," << brute.second << "]" << endl;
    }

    // Approach 2
    pair<int, int> binary = binarySearchApproach(array, n, m, a);
    if (binary.first == -1 && binary.second == -1)
    {
        cout << "The element you searched is not found " << endl;
    }
    else
    {
        cout << "The element found at index [" << binary.first << "," << binary.second << "]" << endl;
    }

    // Approach 3
    pair<int, int> stair = staircaseApproach(array, n, m, a);
    if (stair.first == -1 && stair.second == -1)
    {
        cout << "The element you searched is not found " << endl;
    }
    else
    {
        cout << "The element found at index [" << stair.first << "," << stair.second << "]" << endl;
    }

    return 0;
}