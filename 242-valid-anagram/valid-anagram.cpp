class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <int, int> mpp;

        if(s.length() != t.length()) return false;

        for(char c : s)
        {
            mpp[c]++;
        }
        for(char c : t)
        {
            mpp[c]--;
            if(mpp[c] < 0) return false;
        }
        return true;
    }
};