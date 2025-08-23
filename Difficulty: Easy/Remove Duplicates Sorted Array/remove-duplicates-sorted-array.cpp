class Solution {
  public:
    // Function to remove duplicates from the given array.
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        int n = arr.size();
        if(n == 0) return {};
        
        vector<int> temp;
        temp.push_back(arr[0]);
        for(int i = 1; i<n; i++)
        {
            if(arr[i] != arr[i-1])
            {
                temp.push_back(arr[i]);
            }
        }
        return temp;
    }
};