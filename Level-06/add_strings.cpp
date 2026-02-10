// Problem Link: https://leetcode.com/problems/add-strings/
#include <string>
#include <algorithm>
using namespace std;
class Solution {
public:
    string addStrings(string num1, string num2) {

        // Approach:
        // We simulate manual addition just like we do on paper.
        // Start adding digits from the end of both strings.
        // Keep track of carry for sums greater than 9.
        // Continue until all digits and carry are processed.
        // We never convert the strings to integers.

        int i = num1.length() - 1;
        int j = num2.length() - 1;
        int carry = 0;

        string result = "";

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;

            if (i >= 0) {
                sum += num1[i] - '0';
                i--;
            }

            if (j >= 0) {
                sum += num2[j] - '0';
                j--;
            }

            carry = sum / 10;
            result.push_back((sum % 10) + '0');
        }

        // The result is built in reverse order
        reverse(result.begin(), result.end());
        return result;
    }
};


// Time Complexity:
// Best: O(max(n, m))
// Average: O(max(n, m))
// Worst: O(max(n, m))
// Space Complexity: O(max(n, m))
