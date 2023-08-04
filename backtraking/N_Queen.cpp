/*
     The N queen problem is only for the 1 possible solution 
     All ways N - queen problem is in the next cpp file
*/
#include <iostream>
using namespace std;

//to check weather the Queen can be placed here or not
bool CanPlace(int board[][20],int n, int x, int y)
{
    //there will be only one queen in the row as per our code no need to check for that 

    //for column i
    for (int k = 0; k < x; k++)
    {
          if(board[k][y] == 1)
          {
            return false;
          }
    }

    // for diagonal on left
    int i = x;
    int j = y;

    while (i >= 0 and j >= 0)
    {
      if (board[i][j] == 1)
      {
        return false;
      }
      i--,j--;
    }

    //for diagonal on right

     i = x;
     j = y;
   while (i >= 0 and j < n)
   {
     if(board[i][j] == 1)
     {
      return false;
     }
    i--, j++;
   }

   return true;

}

// the given function will print the matric with the queen as one and rest as 0
void printBoard(int board [][20], int n)
{
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
          cout << board[i][j]<<" ";
      }
      cout << endl;
    }
}
//the given function is to solve n queen problem it will return true if the solution is possible
bool SolveNqueen(int board[][20],int n , int i)
{
 //base case
 if(i == n)
 {
    //Print the Board
    printBoard(board,n);
     return true;
 }
 
 
 //recursive case
 for (int j=0; j<n; j++)
 {
      if(CanPlace(board,n,i,j))
      {
        board[i][j] = 1;
        bool Succese = SolveNqueen(board,n,i+1);
        if(Succese)
        {
          return true;
        }
        //Backtrack
        board[i][j] = 0;
      }

 }
      return false;

}
int main ()
{

   int n;
   int board [20][20] = {0};
   cin >> n;
   SolveNqueen(board,n, 0);

  return 0;
}