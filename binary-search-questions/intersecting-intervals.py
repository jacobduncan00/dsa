# https://binarysearch.com/problems/Intervals-Intersecting-at-Point
class Solution:
    def solve(self, intervals, point):
        intersect_count = 0
        for (start, end) in intervals:
            if start <= point <= end:
                intersect_count += 1

        return intersect_count
