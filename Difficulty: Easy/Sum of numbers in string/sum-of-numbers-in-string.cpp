class Solution {
  public:
    int findSum(string& s) {
        // code here
        int sum = 0;
        int num = 0;
        
        for(char c : s)
        {
            if(isdigit(c))
            {
                num = num * 10 + (c - '0');
            }
            else {
                sum += num;
                num = 0;
            }
        }
        sum += num;
        return sum;
    }
};