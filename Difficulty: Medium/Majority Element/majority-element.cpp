class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        int ele;
        int n = arr.size();
        int count = 0;
        for(int i = 0; i<n; i++)
        {
            if(count == 0)
            {
                count = 1;
                ele = arr[i];
            }
            else if(ele == arr[i]) count++;
            else count--;
        }
        int c = 0;
        for(int i = 0; i<n; i++)
        {
            if(ele == arr[i]) c++;
        }
        
        if(c > (n / 2)) return ele;
        return -1;
    }
};