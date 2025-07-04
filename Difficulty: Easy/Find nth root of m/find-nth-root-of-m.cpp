class Solution {
  public:
    int nthRoot(int n, int m) {
        // Code here.
        if(m==0) return 0;
        if(m == 1) return 1;
        
        int low = 1, high = m;
        while(low <= high)
        {
            long long mid = low + (high-low) / 2;
            long long var = pow(mid, n);
            if(var == m)
            {
                return mid;
            }
            else if(var > m)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return -1;
    }
};