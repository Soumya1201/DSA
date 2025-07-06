bool isPossible(vector<int> &arr, int day, int m, int k)
{
    int count = 0, noOfBucket = 0;
    for(int i = 0; i<arr.size(); i++)
    {
        if(arr[i] <= day)
        {
            count++;
        }
        else
        {
            noOfBucket += (count / k);
            count = 0;
        }
        
    }
    noOfBucket += (count / k);
    if(noOfBucket >= m) return true;
    else return false;
}
class Solution {
  public:
    int minDaysBloom(int m, int k, vector<int> &arr) {
        // Code here
        int n = arr.size();
        int low = INT_MAX, high = INT_MIN;
        for(int i = 0; i<n; i++)
        {
            low = min(low, arr[i]);
            high = max(high, arr[i]);
        }
        int ans = -1;
        while(low <= high)
        {
            int mid = low + (high - low) / 2;
            if(isPossible(arr, mid, m, k))
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return ans;
    }
};