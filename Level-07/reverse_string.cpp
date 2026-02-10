// Problem Link:https://leetcode.com/problems/reverse-string/description/

#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    // Approach:
    // Use two pointers:
    // - One starting from the beginning
    // - One starting from the end
    // Swap characters and move pointers inward until they meet.

    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
};


//Time Complexity:
//Best: O(n)
//Average: O(n)
//Worst: O(n)
//Space Complexity:O(1)

