# https://binarysearch.com/problems/Detect-Voter-Fraud
class Solution:
    def solve(self, votes):
        seen = []
        for (_, vid) in votes:
            seen.append(vid)
        if len(seen) == len(set(seen)):
            return False
        else:
            return True
