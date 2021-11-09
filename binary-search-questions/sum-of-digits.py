# https://binarysearch.com/problems/Sum-of-the-Digits

class Solution:
    def solve(self, num):
        x = [int(digit) for digit in str(num)]
        return sum(x)

