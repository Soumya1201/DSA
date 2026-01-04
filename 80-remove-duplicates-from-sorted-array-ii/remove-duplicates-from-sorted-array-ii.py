class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        n = len(nums)
        index = 0

        for i in range(0, n):
            if(index < 2 or nums[index-2] != nums[i]):
                nums[index] = nums[i]
                index = index + 1

        return index