# https://binarysearch.com/problems/Largest-Number-By-Two-Times
class Solution:
    def solve(self, nums):
        nums.sort()
        if nums[len(nums) - 1] > nums[len(nums) - 2] * 2:
            return True
        else:
            return False

