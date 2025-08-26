
class Solution {
  public:
    char nonRepeatingChar(string &s) {
        //  code here
        map<char, int> mpp;
        char ans;
        for(char c : s)
        {
            mpp[c]++;
        }
        
        for(char c : s)
        {
            if(mpp[c] == 1) return c;
        }
        return '$';
    }
};