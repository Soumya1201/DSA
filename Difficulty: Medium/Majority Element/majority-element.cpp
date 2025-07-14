class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
   
        int n = arr.size();
        int ele;
        int count = 0;
        
        for(int i = 0; i<n; i++)
        {
            if(count == 0)
            {
                count = 1;
                ele = arr[i];
            }
            
            else if(arr[i] == ele) count++;
            else count--;
        }
        int cnt = 0;
        for(int i = 0; i<n; i++)
        {
            if(arr[i] == ele) cnt++;
        }
        
        if(cnt > (n / 2)) return ele;
        return -1;
    }

    
};