# https://binarysearch.com/problems/Common-Words
class Solution:
    def solve(self, s0, s1):
        s0 = set(s0.lower().split())
        s1 = set(s1.lower().split())
        return len(s0.intersection(s1))

