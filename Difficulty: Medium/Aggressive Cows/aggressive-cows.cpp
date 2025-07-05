// User function Template for C++
bool canBePlace(vector<int> &stalls, int dist, int k)
{
    int lastPos = stalls[0], count = 1;
    int n = stalls.size();
    for(int i = 1; i<n; i++)
    {
        if(stalls[i] - lastPos >= dist)
        {
            count = count + 1;
            lastPos = stalls[i];
        }
    }
    if(count >= k) return true;
    else return false;
}
class Solution {
  public:

    int aggressiveCows(vector<int> &stalls, int k) {

        // Write your code here
        int n = stalls.size();
        sort(stalls.begin(), stalls.end());
        
        int low = 1, high = stalls[n-1] - stalls[0];
        int ans = -1;
        while(low <= high)
        {
            int mid = low + (high - low) / 2;
            if(canBePlace(stalls, mid, k))
            {
                ans = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return ans;
    }
};