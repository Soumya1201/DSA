int func(vector<int> &arr, int pages)
{
    int countStu = 1;
    long long pagesStu = 0; // Student holding 0 pages
    for(int i = 0; i<arr.size(); i++)
    {
        if(pagesStu + arr[i] <= pages)
        {
            pagesStu += arr[i];
        }
        else
        {
            countStu++;
            pagesStu = arr[i];
        }
    }
    return countStu;
}
class Solution {
  public:
    int findPages(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        if(k > n) return -1;
        int low = INT_MIN;
        for(int i = 0; i<n; i++)
        {
            low = max(low, arr[i]);
        }
        int high = 0;
        for(int i = 0; i<n; i++)
        {
            high += arr[i];
        }
        int ans = -1;
        
        while(low <= high)
        {
            int mid = low + (high - low) / 2;  //pages
            int countStudent = func(arr, mid);
            if(countStudent <= k) 
            {
                ans = mid;
            
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return ans;
        
    }
};