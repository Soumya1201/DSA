class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int low = 1, high = INT_MIN, ans = -1;
        for(int i = 0; i<n; i++)
        {
            high = max(high, nums[i]);
        }
        while(low <= high)
        {
            int mid = low + (high - low) / 2;
            int total_count = 0;
            for(int i = 0; i<n; i++)
            {
                total_count += ceil((double)(nums[i]) / (double)(mid));
            }
            if(total_count <= threshold)
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return ans;
    }
};