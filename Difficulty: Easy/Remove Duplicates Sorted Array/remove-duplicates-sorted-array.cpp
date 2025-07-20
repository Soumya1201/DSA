class Solution {
  public:
    // Function to remove duplicates from the given array.
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        int n = arr.size();
        set<int>st;
        vector<int>ans;
        for(int i = 0; i<n; i++)
        {
            st.insert(arr[i]);
        }
        for(auto it : st)
        {
            ans.push_back(it);
        }
        return ans;
    }
};