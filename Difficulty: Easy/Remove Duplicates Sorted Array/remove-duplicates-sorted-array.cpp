class Solution {
  public:
    // Function to remove duplicates from the given array.
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        int n = arr.size();
        vector<int> ans;
        ans.push_back(arr[0]);
        for(int j = 1; j<n; j++)
        {
            if(arr[j-1] != arr[j])
            {
                ans.push_back(arr[j]);
            }
        }
        return ans;
    }
};