/* given a long route containing N,S,E,W direction
   find the shortest path to reach the location

 sample input : S,N,N,N,E,W,E
 Sample Output : N,N,E

*/
#include <iostream>

using namespace std;

int main()
{
    char direction[1000];
    cout << "Enter the direction in caps without space " << endl;
    cin.getline(direction, 1000);

    int x = 0;
    int y = 0;

    for (int i = 0; direction[i] != '\0'; i++)
    {

        switch (direction[i])
        {

        case 'E':
            x++;
            break;
        case 'W':
            x--;
            break;
        case 'N':
            y++;
            break;
        case 'S':
            y--;
            break;
        }
    }

    if (x >= 0 && y >= 0)
    {
        while (y--)
        {
            cout << "N"
                 << " ";
        }
        while (x--)
        {
            cout << "E"
                 << " ";
        }
    }

    else if (x <= 0 && y <= 0)
    {
        while (x++)
        {
            cout << "E"
                 << " ";
        }
        while (y++)
        {
            cout << "S"
                 << " ";
        }
    }

    else if (x <= 0 && y >= 0)
    {
        while (x++)
        {
            cout << "w"
                 << " ";
        }
        while (y--)
        {
            cout << "N ";
        }
    }
    else
    { // if(x >= 0 && y <= 0){
        while (x--)
        {
            cout << "E ";
        }
        while (y++)
        {
            cout << "S ";
        }
    }

    return 0;
}