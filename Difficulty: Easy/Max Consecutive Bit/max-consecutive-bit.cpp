class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        // code here
        int n = arr.size();
        int c1 = 0, c2 = 0;
        int maxi = -1;
        int max1 = -1, max2 = -1;
        
        for(int i = 0; i<n; i++)
        {
            if(arr[i] == 1){
                c1++;
                c2 = 0;
            }
            if(arr[i] == 0) 
            {
                c2++;
                c1 = 0;
            }
            max1 = max(max1, c1);
            max2 = max(max2, c2);
            maxi = max(max1, max2);
        }
        return maxi;
    }
};