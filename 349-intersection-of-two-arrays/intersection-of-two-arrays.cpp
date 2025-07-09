class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size(), n2 = nums2.size();
        int i = 0, j = 0;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int>interSection;
        while(i < n1 && j < n2)
        {
            if(nums1[i] < nums2[j])
            {
                i++;
            }
            else if(nums2[j] < nums1[i])
            {
                j++;
            }
            else 
            {

                if(interSection.size() == 0 || interSection.back() != nums1[i])
                {
                    interSection.push_back(nums1[i]);
                    
                }
                i++;
                j++;
            }
        }
        return interSection;
    }
};