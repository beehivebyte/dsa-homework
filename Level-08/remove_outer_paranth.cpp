// problem link:https://leetcode.com/problems/remove-outermost-parentheses/description/
#include <string>
using namespace std;
class Solution {
public:
    // Approach:
    // Use a counter to track current depth of parentheses.
    // - When we see '(':
    //     if depth > 0, include it in result
    //     then increase depth
    // - When we see ')':
    //     decrease depth first
    //     if depth > 0, include it in result
    // This way, the outermost parentheses of each primitive
    // (depth == 0 -> 1 and 1 -> 0) are skipped.

    string removeOuterParentheses(string s) {
        string result;
        int depth = 0;

        for (char c : s) {
            if (c == '(') {
                if (depth > 0) {
                    result += c;
                }
                depth++;
            } else { // c == ')'
                depth--;
                if (depth > 0) {
                    result += c;
                }
            }
        }

        return result;
    }
};

//Time Complexity:
//Best: O(n)
//Average: O(n)
//Worst:O(n)
//Space Complexity:O(n)
