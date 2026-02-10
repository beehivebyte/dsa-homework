//problem link: https://leetcode.com/problems/two-sum/

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Hash map to store value -> index
        unordered_map<int, int> mp;

        // Traverse the array
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            // Check if the required complement already exists
            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }

            // Store current number with its index
            mp[nums[i]] = i;
        }

        // Problem guarantees exactly one solution
        return {};
    }
};


//Time Complexity:
//Best: O(n)
//Average: O(n)
//Worst: O(n)

//Space Complexity :O(n)

