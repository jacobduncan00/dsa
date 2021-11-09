# https://binarysearch.com/problems/Count-Next-Element
class Solution:
    def solve(self, nums):
        uniq = set(nums)
        count = 0
        for n in nums:
            if n+1 in uniq:
                count += 1
        return count
