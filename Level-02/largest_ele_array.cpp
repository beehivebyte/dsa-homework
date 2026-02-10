// problem link: https://www.naukri.com/code360/problems/largest-element-in-the-array-largest-element-in-the-array_5026279
#include<vector>
using namespace std;
int largestElement(vector<int> &arr) {

    // Approach:
    // Traverse the array once and keep track of the maximum element.

    int largest = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    return largest;
}

// Time Complexity:
// Best: O(n)
// Average: O(n)
// Worst: O(n)
// Space Complexity: O(1)
