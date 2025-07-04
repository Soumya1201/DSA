int firstOcc(vector<int>& arr, int target)
{
    int low = 0, high = arr.size()-1;
    int ans = -1;
    while(low <= high)
    {
        int mid = low + (high - low) / 2;
        if(arr[mid] == target)
        {
            ans = mid;
            high = mid - 1;
        }
        else if(arr[mid] > target)
        {
            high = mid -1;
        }
        else {
           low = mid + 1;
       }
    }
    return ans;
}

int lastOcc(vector<int>& arr, int target)
{
    int low = 0, n = arr.size(), high = n-1;
    int ans = -1;
    while(low <= high)
    {
        int mid = low + (high - low) / 2;
        if(arr[mid] == target)
        {
            ans = mid;
            low = mid + 1;
        }
        else if(arr[mid] > target)
        {
            high = mid -1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        int lb = firstOcc(arr, target);
        if(lb == -1) return 0;
        int ub = lastOcc(arr, target);
        return (ub-lb +1);;
    }
};
