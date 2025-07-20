class Solution {
  public:
    void rotateclockwise(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        k = k % n;
        vector<int>temp(n);
        for(int i = 0; i<n; i++)
        {
            temp[(i + k) % n] = arr[i];
        }
        for(int i = 0; i<n; i++)
        {
            arr[i] = temp[i];
        }
    }
};
