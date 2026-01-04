class Solution:
    def threeSumClosest(self, nums: List[int], target: int) -> int:
        
        n = len(nums)

        res = 0
        minDiff = float('inf')

        nums.sort()

        for i in range(0, n-2):

            left = i + 1
            right = n - 1

            while(left < right):
                sum = nums[i] + nums[left] + nums[right]
                
                diff = abs(sum - target)

                if(diff < minDiff):
                    minDiff = diff
                    res = sum
                
                elif diff == minDiff:
                    res = max(res, sum)

                if(sum < target): left = left + 1
                elif sum > target: right = right - 1
                else: return sum
        return res

