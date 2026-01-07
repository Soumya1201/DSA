class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        
        f = [0] * 256

        low = 0
        high = 0
        max_freq = 0
        res = 0

        for high in range(len(s)):
            idx = ord(s[high])
            f[idx] += 1 

            max_freq = max(max_freq, f[idx])

            length = high - low + 1

            diff = length - max_freq

            while diff > k:

                f[ord(s[low])] -= 1
                low = low + 1

                length = high - low + 1

                diff = length - max_freq


            length = high - low + 1
            res = max(res, length)

        return res                

