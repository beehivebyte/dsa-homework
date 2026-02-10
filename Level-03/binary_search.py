#problem link: https://leetcode.com/problems/binary-search/
class Solution(object):
    def search(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """

        # Approach:
        # Since the array is sorted in ascending order,
        # we apply Binary Search to find the target efficiently.
        # At each step, compare the middle element with the target
        # and reduce the search space by half.

        left = 0
        right = len(nums) - 1

        while left <= right:
            mid = left + (right - left) // 2

            if nums[mid] == target:
                return mid
            elif nums[mid] < target:
                left = mid + 1
            else:
                right = mid - 1

        # Target not found in the array
        return -1


# Time Complexity:
# Best: O(1)
# Average: O(log n)
# Worst: O(log n)
# Space Complexity: O(1)
