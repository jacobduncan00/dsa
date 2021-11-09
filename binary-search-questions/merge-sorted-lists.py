# https://binarysearch.com/problems/Merging-Two-Sorted-Lists
class Solution:
    # very bad solution
    def solve(self, a, b):
        res = []
        a_ptr = 0
        b_ptr = 0
        for _ in range(len(a) + len(b)):
            if a_ptr == len(a):
                res.append(b[b_ptr])
                b_ptr += 1
            elif b_ptr == len(b):
                res.append(a[a_ptr])
                a_ptr += 1

            if a_ptr != len(a) and b_ptr != len(b):
                if a[a_ptr] <= b[b_ptr]:
                    res.append(a[a_ptr])
                    a_ptr += 1
                elif b[b_ptr] < a[a_ptr]:
                    res.append(b[b_ptr])
                    b_ptr += 1

        return res
