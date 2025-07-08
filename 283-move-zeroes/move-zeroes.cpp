class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        vector<int>temp;
        for(int i = 0; i<n; i++)
        {
            if(nums[i] != 0)
            {
                count++;
                temp.push_back(nums[i]);
            }
        }
        for(int i = 0; i<count; i++)
        {
            nums[i] = temp[i];
        }
        for(int i = count; i<n;i++)
        {
            nums[i] = 0;
        }
        
    }
};