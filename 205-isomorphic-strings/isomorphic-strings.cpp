class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mppST;
        unordered_map<char, char> mppTS;
        
        if(s.size() != t.size()) return false;

        for(int i = 0; i<s.size(); i++)
        {
            char c1 = s[i];
            char c2 = t[i];

            if(mppST.count(c1) && mppST[c1] != c2) return false;
            if(mppTS.count(c2) && mppTS[c2] != c1) return false;

            mppST[c1] = c2;
            mppTS[c2] = c1;
        }
        return true;
    }
};