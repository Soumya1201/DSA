class Solution {
  public:
    int floorSqrt(int n) {
        // code here
        int low = 1, high = n, ans = 1;
        while(low <= high)
        {
            long long mid = low + (high - low) / 2;
            long long var = mid * mid;
            
            if(var <= n)
            {
                ans = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return ans;
    }
};