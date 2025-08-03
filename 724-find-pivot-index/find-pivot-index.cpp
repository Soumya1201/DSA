class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int total = 0, leftSum = 0;
        for(int i = 0; i<n; i++) total += nums[i];
        for(int i = 0; i<n; i++)
        {
            if(leftSum == total - leftSum - nums[i]) return i;
            leftSum += nums[i];
        }
        return -1;
    }
};