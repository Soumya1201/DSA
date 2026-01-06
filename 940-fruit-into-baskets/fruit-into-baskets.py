class Solution:
    def totalFruit(self, fruits: List[int]) -> int:
        
        n = len(fruits)

        low  = high = 0
        res = float('-inf')
        
        freq = {}

        for high in range(n):

            freq[fruits[high]] = freq.get(fruits[high], 0) + 1

            while len(freq) > 2:

                freq[fruits[low]] -= 1

                if(freq[fruits[low]] == 0):
                    del freq[fruits[low]]
                
                low = low + 1

            if len(freq) <= 2:
                length = high - low + 1
                res = max(res, length)   # 2,3 

        if res == float('-inf'): return 1
        else: return res