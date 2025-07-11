// User function template for C++
class Solution {
  public:
    vector<int> findSubarray(vector<int>& arr) {
        // code here
        int n = arr.size();
        long long sum = 0, largest = -1;
        int ansStart = -1, ansEnd = -1;
        vector<int> res;
        int start = 0;
        for(int i = 0; i<n; i++)
        {
           // if(sum == 0) start = i;
            if(arr[i] >= 0)
            {
                sum += arr[i];
           
            if(sum > largest || (sum == largest && (i - start > ansEnd - ansStart))){
                largest = sum;
                ansStart = start;
                ansEnd = i;
                
                
            }
            }
            
            else
            {
                sum = 0;
                start = i+ 1;
            }
            
            
        }
        if(largest == -1) return {-1};
        for(int i = ansStart; i<=ansEnd; i++)
        {
            res.push_back(arr[i]);
        }
        return res;
    }
};