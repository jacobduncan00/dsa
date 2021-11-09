# https://binarysearch.com/problems/Strictly-Alternating-List
class Solution:
    def solve(self, nums):
        prev_num = 0
        if nums[1] < nums[0]:
            return False
        for i in range(1, len(nums)):
            if nums[i] == nums[i-1]:
                return False

        return True

