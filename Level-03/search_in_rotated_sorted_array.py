# Problem Link: https://leetcode.com/problems/search-in-rotated-sorted-array/

class Solution(object):
    def search(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """

        # Approach:
        # Use a modified Binary Search.
        # At every step, one half of the array is guaranteed to be sorted.
        # 1. Find the middle element.
        # 2. Check which half (left or right) is sorted.
        # 3. Decide whether the target lies in the sorted half.
        # 4. Discard the other half and continue searching.
        # This keeps the time complexity O(log n).

        left = 0
        right = len(nums) - 1

        while left <= right:
            mid = left + (right - left) // 2

            # Target found
            if nums[mid] == target:
                return mid

            # Left half is sorted
            if nums[left] <= nums[mid]:
                if nums[left] <= target < nums[mid]:
                    right = mid - 1
                else:
                    left = mid + 1

            # Right half is sorted
            else:
                if nums[mid] < target <= nums[right]:
                    left = mid + 1
                else:
                    right = mid - 1

        # Target not found
        return -1


# Time Complexity:
# Best: O(1)
# Average: O(log n)
# Worst: O(log n)
# Space Complexity: O(1)
