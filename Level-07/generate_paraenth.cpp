// Problem Link:https://leetcode.com/problems/generate-parentheses/description/
#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    // Approach:
    // Use backtracking to build valid parentheses strings.
    // We keep track of:
    // 1. Number of opening brackets used
    // 2. Number of closing brackets used
    // Rules:
    // - We can add '(' if open < n
    // - We can add ')' if close < open
    // When the string length becomes 2*n, it is a valid combination.

    void backtrack(int open, int close, int n, string curr, vector<string>& result) {
        // If the current string is complete
        if (curr.length() == 2 * n) {
            result.push_back(curr);
            return;
        }

        // Add '(' if we still can
        if (open < n) {
            backtrack(open + 1, close, n, curr + "(", result);
        }

        // Add ')' if it keeps the string valid
        if (close < open) {
            backtrack(open, close + 1, n, curr + ")", result);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> result;
        backtrack(0, 0, n, "", result);
        return result;
    }
};

//Time Complexity:
//Best: O(4^n / sqrt(n))
//Average: O(4^n / sqrt(n))
//Worst: O(4^n / sqrt(n))
//Space Complexity:O(n)  // recursion stack (excluding output storage)

