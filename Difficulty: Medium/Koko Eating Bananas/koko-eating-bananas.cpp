class Solution {
  public:
    int kokoEat(vector<int>& arr, int k) {
        // Code here
        int n = arr.size();
        int low = 1, high = INT_MIN;
        int ans = -1;
        for(int i = 0; i<n; i++)
        {
            high = max(high, arr[i]);
        }
        
        while(low <= high)
        {
            int mid = low + (high - low) / 2;
            int th = 0;
            for(int i = 0; i<n; i++)
            {
                th += ceil((double)(arr[i]) / (double)(mid));
            }
            
            if(th <= k)
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