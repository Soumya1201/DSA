class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int n) {
        // code here
        int ans = 1;
        vector<int>res;
        res.push_back(ans);
        for(int col = 1; col<n; col++)
        {
            ans = ans * (n - col);
            ans = ans / col;
            res.push_back(ans);
        }
        return res;
    }
};
