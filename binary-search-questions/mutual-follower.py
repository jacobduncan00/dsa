# https://binarysearch.com/problems/Mutual-Followers
class Solution:
    def solve(self, relations_list):
        ans = set()
        seen = set()

        for a, b in relations_list:
            seen.add((a, b))

            if (b, a) in seen:
                ans.add(b)
                ans.add(a)

        k = list(ans)
        rtr = sorted(k)
        return rtr

