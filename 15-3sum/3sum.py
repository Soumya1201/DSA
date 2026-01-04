class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        
        n = len(nums)

        lst = []

        # sort the array
        nums.sort()

        for i in range(0, n-2):

            if i> 0 and nums[i] == nums[i-1]:
                continue

            left = i + 1
            right = n - 1

            target = (-1) * nums[i]

            while(left < right):
                sum = nums[left] + nums[right]

                if(sum == target):
                    lst.append([nums[i], nums[left], nums[right]])

                    left = left + 1
                    right = right - 1

                    while(left < right and nums[left] == nums[left - 1]): left = left + 1
                    while(left < right and nums[right] == nums[right + 1]): right = right - 1

                elif(sum < target):
                    left = left + 1
                else:
                    right = right - 1
        return lst