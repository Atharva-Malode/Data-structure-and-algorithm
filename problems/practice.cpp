#include <bits/stdc++.h>

using namespace std;
int findUnique(int *arr, int n) {
    
    
    
    sort (arr, arr + n);
    
    for (int i = 0; i < n; i++) {
        if (arr[i] != arr[i + 1]) {
            return arr[i];
        }
        i++;
    }
    
}

int main(){


    int size;
        cin >> size;
        int *input = new int[size];

        for (int i = 0; i < size; ++i) {
            cin >> input[i];
        }

   //  findUnique(input, size);
        cout << findUnique(input, size) << endl;


  return 0;
}