class Solution {
  public:
    int smallestDivisor(vector<int>& arr, int k) {
        // Code here
        int n = arr.size();
        int low = 1, high = INT_MIN;
        for(int i = 0; i<n; i++)
        {
            high = max(high, arr[i]);
        }
        int ans = -1;
        while(low <= high)
        {
            int mid = low + (high - low) / 2;
            int sum = 0;
            for(int i = 0; i<n; i++)
            {
                sum += ceil((double)(arr[i]) / (double)(mid));
            }
            if(sum <= k)
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
