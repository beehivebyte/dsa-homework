// problem link: https://leetcode.com/problems/fibonacci-number/description/
class Solution {
public:
    int fib(int n) {
        // Approach:
        // Use iteration to build Fibonacci numbers from 0 up to n.

        if (n == 0) return 0;
        if (n == 1) return 1;

        int prev2 = 0; // F(0)
        int prev1 = 1; // F(1)
        int curr;

        for (int i = 2; i <= n; i++) {
            curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
        }

        return prev1;
    }
};


//Time Complexity:
//Best: O(n)
//Average: O(n)
//Worst: O(n)
//Space Complexity:O(1)

