// User function template for C++
class Solution {
  public:
    bool commonSubseq(string a, string b) {
        // your code here
        vector<bool> seen(256, false);
        
        for(char c : a) 
        {
            seen[c] = true;
        }
        
        for(char c : b)
        {
            if(seen[c]) return true;
        }
        return false;
    }
};