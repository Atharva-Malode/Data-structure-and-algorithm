#include <iostream>
#include <vector>
using namespace std;
// Function to find the maximum element in a 2D array
int findMaxIn2DArray(const vector<vector<int>>& arr) {
    if (arr.empty() || arr[0].empty()) {
        throw invalid_argument("Array is empty");
    }
    
    int maxElement = arr[0][0];
    for (const auto& row : arr) {
        for (int element : row) {
            if (element > maxElement) {
                maxElement = element;
            }
        }
    }
    return maxElement;
}