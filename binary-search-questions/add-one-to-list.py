# https://binarysearch.com/problems/Add-One-to-List
class Solution:
    def solve(self, nums):
        num = int(''.join(map(str,nums)))
        return list(map(int, str((int(num) + 1))))
        

