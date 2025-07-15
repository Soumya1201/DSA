class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int n = arr.size();
        
        long long s = 0, s2 = 0;
        long long sn = (1LL * n * (n+1)) / 2;
        long long s2n = (1LL * n * (n + 1) * (2LL * n + 1)) / 6;
        
        for(int i = 0; i<n; i++)
        {
            s = s + arr[i];
            s2 += 1LL * arr[i] * arr[i];
        }
        
        long long var1 = s - sn;
        long long var2 = s2 - s2n;
        var2 = var2 / var1;
        
        long long x = (var1 + var2) / 2;
        long long y = x - var1;
        
        vector<int> ans;
        ans.push_back((int)x);
        ans.push_back((int)y);
        
        return ans;
        
    }
};