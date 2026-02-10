// Problem Link: https://leetcode.com/problems/valid-anagram/description/

#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {

        // Approach:
        // If lengths are different, they cannot be anagrams.
        // Use a frequency array of size 26 for lowercase letters.
        // Increment count for characters in s and decrement for t.
        // If all counts are zero at the end, t is an anagram of s.

        if (s.length() != t.length()) {
            return false;
        }

        vector<int> freq(26, 0);

        for (int i = 0; i < s.length(); i++) {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }

        for (int count : freq) {
            if (count != 0) {
                return false;
            }
        }

        return true;
    }
};


// Time Complexity:
// Best: O(n)
// Average: O(n)
// Worst: O(n)
// Space Complexity: O(1)
