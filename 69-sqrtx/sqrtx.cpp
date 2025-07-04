class Solution {
public:
    int mySqrt(int x) {
        if(x == 0) return 0;
        int low = 1, high = x;
        int ans = 1;

        while(low <= high)
        {
            long long mid = low + (high - low) / 2;
            long long var = mid * mid;
            if(var <= x)
            {
                ans = mid;
                low = mid + 1;
            }
            else if(var > x)
            {
                high = mid - 1;
            }
            
        }
        return ans;
    }
};