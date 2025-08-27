class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int i = 0, j = 0;
        int n = arr.size();
        
        int sum = 0;
        int ans = INT_MIN;
        
        
        while(j < n)
        {
            sum += arr[j];
            
            if(j - i + 1 < k) j++;
            
            else if(j - i + 1 == k)
            {
                ans = max(ans, sum);
                sum = sum - arr[i];
                i++;
                j++;
            }
        }
        return ans;
    }
};