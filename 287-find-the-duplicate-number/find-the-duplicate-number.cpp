class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> count(nums.size());
        for(int i = 0; i<nums.size(); i++)
        {
            count[nums[i]]++;
        }
        for(int i = 0; i<nums.size(); i++)
        {
            if(count[nums[i]] > 1)
            {
                return nums[i];
            }
        }
        return -1;
    }
};