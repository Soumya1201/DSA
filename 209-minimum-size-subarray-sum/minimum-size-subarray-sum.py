class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        
        n = len(nums)
        low = high = 0
        win_sum = 0
        res = float('inf')

        while high != n:
            win_sum += nums[high]

            while win_sum >= target:
                length = high - low + 1
                res = min(res, length)
                win_sum = win_sum - nums[low]
                low = low + 1

            high = high + 1
        
        if res == float('inf'): return 0
        else: return res