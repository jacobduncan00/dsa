# https://binarysearch.com/problems/Parentheses-Grouping
class Solution:
    def solve(self, s):
        open_counter = 0
        old_open = 0
        close_counter = 0
        old_close = 0
        res = []
        for p in s:
            if p == "(":
                open_counter += 1
            elif p == ")":
                close_counter += 1
            if open_counter == close_counter:
                upto = open_counter + close_counter
                oldupto = old_open + old_close
                res.append(s[oldupto:upto])
                old_open = open_counter
                old_close = close_counter

        return res
