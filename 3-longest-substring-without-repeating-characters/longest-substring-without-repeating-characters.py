class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        
        n = len(s)

        f = {}

        low = 0
        high = 0
        res = float('-inf')

        for high in range(n):

            f[s[high]] = f.get(s[high], 0) + 1  

            while f[s[high]] != 1:
                f[s[low]] -= 1

                if(f[s[low]] == 0):
                    del f[s[low]]
                
                low = low + 1

            length = high - low + 1
            res = max(res, length)  # 2, 3

        if res == float('-inf'): return 0
        else: return res