int firstOcc(vector<int>& arr, int target)
{
    int low = 0, high = arr.size(), ans = -1;
    while(low <= high)
    {
        int mid = low + (high - low) / 2;
        if(arr[mid] == target) {
            ans = mid;
            high = mid - 1;
        }
        else if(arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }

    }
    return ans;
}
int lastOcc(vector<int>& arr, int target)
{
    int low = 0, high = arr.size(), ans = -1;
    while(low <= high)
    {
        int mid = low + (high - low) / 2;
        if(arr[mid] == target)
        {
            ans = mid;
            low = mid + 1;
        }
        else if(arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
    
}

class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        int a = firstOcc(arr, target);
        if(a == -1) return 0;
        
        int b = lastOcc(arr, target);
        
        return (b-a)+1;
    }
};
