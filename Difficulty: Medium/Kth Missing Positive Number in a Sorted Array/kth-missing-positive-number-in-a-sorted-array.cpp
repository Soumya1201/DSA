// User function template for C++

class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        // Your code goes here
        int n = arr.size();
        for(int i = 0; i<n; i++)
        {
            if(arr[i] <= k) k= k + 1;
            else break;
        }
        return k;
    }
};