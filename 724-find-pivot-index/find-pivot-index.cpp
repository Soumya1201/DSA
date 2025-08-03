class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();

        int suml = 0, sumr = 0;
        vector<int>l(n);
        vector<int>r(n);

        for(int i = 1; i<n; i++)
        {
            suml += nums[i-1];
            l[i] = suml;
        }

        for(int i = n-2; i>=0; i--)
        {
            sumr += nums[i+1];
            r[i] = sumr;
        }

        for(int i = 0; i<n; i++)
        {
            if(l[i] == r[i]) return i;
        }
        
        return -1;
    }
};