// User function Template for C++
int func(int arr[], int n, int capacity)
{
    int count = 1, load = 0;
    for(int i = 0; i<n; i++)
    {
        if(load + arr[i] <= capacity)
        {
            
            load += arr[i];
        }
        else
        {
            load = arr[i];
            count = count + 1;
        }
    }
    return count;
}
class Solution {
  public:
    int leastWeightCapacity(int arr[], int n, int d) {
        // code here
        
        int low = INT_MIN, high = 0, ans = -1;
        for(int i = 0; i<n; i++)
        {
            low = max(low, arr[i]);
            high += arr[i];
        }
        while(low <= high)
        {
            int mid = low + (high - low) / 2;
            int day = func(arr, n, mid);
            if(day <= d)
            {
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return ans;
    }
};