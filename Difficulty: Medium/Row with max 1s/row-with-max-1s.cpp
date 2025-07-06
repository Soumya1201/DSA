// User function template for C++
int lowerBound(vector<int>& arr, int n, int k)
{
    int low = 0, high = n - 1;
    int ans = n;
    while(low <= high)
    {
        int mid = low + (high - low) / 2;
        if(arr[mid] >= k)
        {
            ans = mid;
            high = mid - 1;
        }
        else low = mid + 1;
    }
    return ans;
}
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int rows = arr.size();
        int cols = (rows > 0) ? arr[0].size() : 0;
        
        int index = -1, max_count = -1;
        for(int i = 0; i<rows; i++)
        {
            int count = cols - lowerBound(arr[i], cols, 1);
            if(count > max_count)
            {
                max_count = count;
                index = i;
            }
        }
        return index;
    }
};