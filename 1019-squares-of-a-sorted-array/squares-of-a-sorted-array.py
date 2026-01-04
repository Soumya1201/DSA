class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        n = len(nums)

        neg = []
        pos = []

        res = []

        for num in nums:
            if num < 0:
                neg.append(num * num)
            else:
                pos.append(num * num)

        neg.reverse()

        i = j = 0

        while(i < len(pos) and j < len(neg)):
            if pos[i] <= neg[j]:
                res.append(pos[i])
                i = i + 1
            else:
                res.append(neg[j])
                j = j + 1
        
        while i < len(pos):
            res.append(pos[i])
            i = i + 1
        
        while j < len(neg):
            res.append(neg[j])
            j = j + 1

        return res
