class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int largest = -1, second_max = -1;
        
        for(int i = 0; i<arr.size(); i++)
        {
            if(largest < arr[i])
            {
                largest = arr[i];
            }
        }
        
        for(int i = 0; i<arr.size(); i++)
        {
            if(arr[i] != largest)
            {
                second_max = max(second_max, arr[i]);
            }
        }
        
        
        return second_max;
    }
};