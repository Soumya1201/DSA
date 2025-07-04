class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int index = -1, ans = INT_MAX, low = 0, high = n-1;
        while(low <= high)
        {
            int mid = low + (high - low) / 2;
            if(nums[low] <= nums[high])
            {
                if(ans > nums[low])
                {
                    index = low;
                    ans = nums[low];
                }
            }
            if(nums[mid] >= nums[low])
            {
                if(ans > nums[low])
                {
                    index = low;
                    ans = nums[low];
                }
                low = mid + 1;
            }
            else
            {
                if(ans > nums[mid])
                {
                    index = mid;
                    ans = nums[mid];
                }
                high = mid - 1;
            }
        }
        return ans;
    }
};