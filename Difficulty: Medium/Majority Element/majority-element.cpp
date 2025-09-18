class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        int count = 0;
        int n = arr.size();
        int ele;
        
        for(int i = 0; i<n; i++)
        {
            if(count == 0)
            {
                ele = arr[i];
                count = 1;
            }
            else if(ele == arr[i]) count++;
            else count--;
        }
        
        int cnt = 0;
        for(int i = 0; i<n; i++)
        {
            if(ele == arr[i]) cnt++;
        }
        if(cnt > (n/ 2)) return ele;
        else return -1;
    }
};