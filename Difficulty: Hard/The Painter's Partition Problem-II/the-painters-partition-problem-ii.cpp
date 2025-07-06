// User function template for C++
int func(vector<int>& arr, int mid)
{
    int count = 1, load = 0;
    for(int i = 0; i<arr.size(); i++)
    {
        if(load + arr[i] <= mid) load += arr[i];
        else
        {
            count = count + 1;
            load = arr[i];
        }
    }
    return count;
}
class Solution {
  public:
    int minTime(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        int ans = -1;
        int low = INT_MIN, high = 0;
        for(int i = 0; i<n; i++)
        {
            low = max(low, arr[i]);
            high += arr[i];
        }
        while(low <= high)
        {
            int mid = low + (high - low) / 2;
            int count = func(arr, mid);
            if(count <= k)
            {
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        // return minimum time
        return ans;
    }
};