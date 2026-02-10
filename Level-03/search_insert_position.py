# problem link: https://leetcode.com/problems/search-insert-position/

class Solution(object):
    def searchInsert(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """

        # Approach:
        # Use Binary Search on the sorted array.
        # If the target is found, return its index.
        # If not found, the left pointer will indicate
        # the correct position where the target should be inserted
        # to maintain sorted order.

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

        # Target not found, left is the insertion position
        return left


# Time Complexity:
# Best: O(1)
# Average: O(log n)
# Worst: O(log n)
# Space Complexity: O(1)
