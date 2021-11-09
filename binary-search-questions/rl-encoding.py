# https://binarysearch.com/problems/Run-Length-Encoding
class Solution:
    def solve(self, s):
        encoded = []
        counter = 1
        for i in range(len(s) - 1):
            if s[i] != s[i+1]:
                encoded.append(f'{counter}{s[i]}')
                counter = 1
            else:
                counter += 1
        encoded.append(f'{counter}{s[-1]}')
        return ''.join(encoded)

