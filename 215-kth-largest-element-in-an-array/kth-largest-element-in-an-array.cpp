class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end(), greater<int>());
        vector<int>res;
        res.assign(nums.begin(), nums.begin() + k);
        return res.back();
    }
};