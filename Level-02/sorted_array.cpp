//problem link: https://www.geeksforgeeks.org/dsa/check-if-an-array-is-sorted-and-rotated/
#include <iostream>
#include <vector>
using namespace std;

// Function to check if arr[] is rotated and sorted
bool check(vector<int>& arr, int n)
{
 int count = 0;
      for (int i = 0; i < n; i++) {
        if (arr[i] > arr[(i + 1) % n]) {
            count++;
        }
    }

    return count <= 1;
}

int main()
{
    vector<int> arr = {3, 4, 5, 1, 2};
    int n = arr.size();

    if (check(arr, n))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
