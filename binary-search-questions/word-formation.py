# https://binarysearch.com/problems/Word-Formation

class Solution:
    def solve(self, words, letters):
        lc = Counter(letters)
        maxL = 0
        for w in words:
            wc = Counter(w)
            print(wc & lc)
            if wc == (wc & lc):
                maxL = max(maxL, len(w))
        return max
