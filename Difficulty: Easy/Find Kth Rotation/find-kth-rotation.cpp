// User function template for C++
class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int index = -1, ans = INT_MAX, low = 0, high = arr.size() -1;
        while(low <= high)
        {
            int mid = low+(high - low) / 2;
            
            if(arr[mid] >= arr[low])
            {
                if(ans > arr[low])
                {
                    index = low;
                    ans = arr[low];
                }
                low = mid + 1;
            }
            else
            {
                if(ans > arr[mid])
                {
                    index = mid;
                    ans = arr[mid];
                }
                high = mid - 1;
            }
        }
        return index;
    }
};
