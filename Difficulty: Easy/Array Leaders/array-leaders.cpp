

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        int maxi = INT_MIN;
        vector<int> res;
        for(int i = arr.size() - 1; i>=0; i--)
        {
            if(arr[i] >= maxi)
            {
                maxi = arr[i];
                res.push_back(arr[i]);
            }
        }
        reverse(res.begin(), res.end());
        return res;
    }
};