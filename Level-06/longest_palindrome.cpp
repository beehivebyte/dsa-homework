// Problem Link: https://leetcode.com/problems/longest-palindromic-substring/description/

#include <string>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {

        // Approach:
        // A palindrome can expand from its center.
        // For each index, consider two cases:
        // 1. Odd length palindrome (center at i)
        // 2. Even length palindrome (center between i and i+1)
        // Expand outward while characters match.
        // Keep track of the longest palindrome found.

        int start = 0;
        int maxLen = 1;

        for (int i = 0; i < s.length(); i++) {

            // Odd length palindrome
            expandFromCenter(s, i, i, start, maxLen);

            // Even length palindrome
            expandFromCenter(s, i, i + 1, start, maxLen);
        }

        return s.substr(start, maxLen);
    }

private:
    void expandFromCenter(string &s, int left, int right, int &start, int &maxLen) {
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            int currLen = right - left + 1;
            if (currLen > maxLen) {
                start = left;
                maxLen = currLen;
            }
            left--;
            right++;
        }
    }
};


// Time Complexity:
// Best: O(n)
// Average: O(n^2)
// Worst: O(n^2)
// Space Complexity: O(1)
