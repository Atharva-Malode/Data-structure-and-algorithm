// https://codeforces.com/contest/271/problem/A
		#include <iostream>
		using namespace std;
		int main() {
		    int y;
		    cin >> y;
		    while (true) {
		        y++;
		        int d1 = y / 1000;             
		        int d2 = (y / 100) % 10;       
		        int d3 = (y / 10) % 10;       
		        int d4 = y % 10;             
		        if (d1 != d2 && d1 != d3 && d1 != d4 && d2 != d3 && d2 != d4 && d3 != d4) {
		            cout << y << endl;
		            break;
		        }
		    }
		    return 0;
		}