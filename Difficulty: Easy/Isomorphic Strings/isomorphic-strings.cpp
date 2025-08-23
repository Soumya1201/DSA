class Solution {
  public:
    bool areIsomorphic(string &s1, string &s2) {
        // code here
        if(s1.length() != s2.length()) return false;
        
        unordered_map<char, char> mppST;
        unordered_map<char, char> mppTS;
        
        for(int i = 0; i<s1.length(); i++)
        {
            char c1 = s1[i];
            char c2 = s2[i];
        
            if(mppST.count(c1) && mppST[c1] != c2) return false;
            
            if(mppTS.count(c2) && mppTS[c2] != c1) return false;
            
            mppST[c1] = c2;
            mppTS[c2] = c1;
        }
        return true;
    }
};