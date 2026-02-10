//problem link:https://leetcode.com/problems/valid-parentheses/description/
#include <stack>
#include <string>
using namespace std;
class Solution {
public:
    // Approach:
    // Use a stack to keep track of opening brackets.
    // When we see a closing bracket:
    // - The stack must not be empty
    // - The top of the stack must match the closing bracket
    // If not, the string is invalid.
    // At the end, the stack must be empty for the string to be valid.

    bool isValid(string s) {
        stack<char> st;

        for (char c : s) {
            // If opening bracket, push to stack
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            }
            else {
                // If stack is empty, no matching opening bracket
                if (st.empty()) {
                    return false;
                }
                char top = st.top();
                st.pop();

                // Check for matching pair
                if ((c == ')' && top != '(') ||
                    (c == '}' && top != '{') ||
                    (c == ']' && top != '[')) {
                    return false;
                }
            }
        }

        // Stack should be empty if all brackets matched
        return st.empty();
    }
};

//Time Complexity:
//Best: O(n)
//Average: O(n)
//Worst: O(n)
//Space Complexity:O(n)
