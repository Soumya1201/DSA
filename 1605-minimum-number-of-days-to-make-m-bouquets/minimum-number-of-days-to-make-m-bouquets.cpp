class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        
        int low = INT_MAX, high = INT_MIN;
        int ans = -1;
        for(int i = 0; i<n; i++)
        {
            low = min(low, bloomDay[i]);
            high = max(high, bloomDay[i]);
        }
        
        while(low <= high)
        {
            int mid = low + (high - low) / 2;
            int count = 0, noOfBucket = 0;
            for(int i = 0; i<n; i++)
            {
                if(bloomDay[i] <= mid)
                {
                    count++;
                }
                else
                {
                    noOfBucket += (count / k);
                    count = 0;
                }
            }
            noOfBucket += (count / k);
            if(noOfBucket >= m)
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