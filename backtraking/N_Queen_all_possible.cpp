#include <iostream>
using namespace std;

bool CanPlace(int board[][20], int n, int x, int y)
{
    //case one handleing column by changing rows as column will be constat
     for (int k = 0 ; k < x; k++)
     {
       if(board [k][y] == 1)
       {
        return false;
       }
     }


     //left Diagonal 
     int i = x;
     int j = y;

     while(i <= 0 and j <=0)
     {
          if(board[i][j] == 1)
          {
            return false;
          }
          i--;
          j--;
     }

     //right diagonal 
     i = x;
     j = y;

     while(i >= 0 and j <= n)
     {
        if(board [i][j] == 1)
        {
           return false;
        }

        i--;
        j--;
     }

     return true;
}
void PrintBoard(int board[][20], int n)
{
     for (int i =0 ; i < n ; i++)
     {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j]<<" ";
        }
        cout << endl;
     }
}
int SolveNqueen(int board[][20], int n, int i)
{
      // base case
      if(i == n)
      {
        //PrintBoard(board,n);
        return 1;
      }

    int ways = 0;
    for ( int j = 0 ;j < n ; j++)
    {
     if(CanPlace(board,n,i,j))
     {
        board[i][j] = 1;
        ways += SolveNqueen(board, n, i+1);
       
        //BackTrack
        board[i][j] = 0;
     }  
    }
   return ways;
}
int main ()
{
    int n;
    int board[20][20] = {0};
    cout <<"Enter no of queens and grid you want to take : ";
    cin >> n;
    
    int a ;
    a = SolveNqueen(board,n,0);
    cout<<"no of ways are :"<<a<<" ";

    return 0;
}