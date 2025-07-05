int func(vector<int>& nums, int mid)
{
    int count = 1, sumOfSub_array = 0;
    for(int i = 0; i<nums.size(); i++)
    {
        if(sumOfSub_array + nums[i] <= mid)
        {
            sumOfSub_array += nums[i];
        }
        else
        {
            count++;
            sumOfSub_array = nums[i];
        }
    }
    return count;
}
class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        int low = INT_MIN;
        for(int i = 0; i<n; i++)
        {
            low = max(low, nums[i]);
        }
        int high = 0;
        for(int i = 0; i<n; i++)
        {
            high += nums[i];
        }
        int ans = -1;
        while(low <= high)
        {
            int mid = low + (high - low) / 2;
            int count = func(nums, mid);
            if(count <= k)
            {
                ans = mid;
                high = mid -1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return ans;
    }
};