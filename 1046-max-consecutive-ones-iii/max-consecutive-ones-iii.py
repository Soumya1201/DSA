class Solution:
    def longestOnes(self, nums: List[int], k: int) -> int:
        


        f = [0] * 256
        low = 0
        res = 0
        max_freq = 0

        for high in range(len(nums)):

            idx = nums[high]
            f[idx] += 1

            

            while f[0] > k:
                f[nums[low]] -= 1
                low = low + 1
            
            length = high - low + 1
            res = max(res, length)
        
        return res