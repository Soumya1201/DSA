class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();

        vector<int> nums;
        for(int i = 0; i<n1; i++)
        {
            nums.push_back(nums1[i]);
        }
        for(int i = 0; i<n2; i++)
        {
            nums.push_back(nums2[i]);
        }
        

        sort(nums.begin(), nums.end());

        int n = nums.size();
        if(n % 2 == 1) return (double)((double)(nums[n/2]));
        else return (double)((double)(nums[n/2]) + (double)(nums[n/2 - 1])) / 2.0;
    }
};