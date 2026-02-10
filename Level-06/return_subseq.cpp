// Problem Link: https://leetcode.com/problems/distinct-subsequences/description/

#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    int numDistinct(string s, string t) {

        // Approach:
        // Use Dynamic Programming.
        // dp[i][j] represents the number of distinct subsequences
        // of s[0..i-1] that form t[0..j-1].
        //
        // If s[i-1] == t[j-1]:
        //   dp[i][j] = dp[i-1][j-1] + dp[i-1][j]
        // Else:
        //   dp[i][j] = dp[i-1][j]
        //
        // Base Case:
        // dp[i][0] = 1 (empty t can always be formed)
        // dp[0][j] = 0 (non-empty t cannot be formed from empty s)

        int n = s.length();
        int m = t.length();

        vector<vector<long long>> dp(n + 1, vector<long long>(m + 1, 0));

        // Empty t can be formed from any prefix of s
        for (int i = 0; i <= n; i++) {
            dp[i][0] = 1;
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (s[i - 1] == t[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
                } else {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        return dp[n][m];
    }
};


// Time Complexity:
// Best: O(n * m)
// Average: O(n * m)
// Worst: O(n * m)
// Space Complexity: O(n * m)
