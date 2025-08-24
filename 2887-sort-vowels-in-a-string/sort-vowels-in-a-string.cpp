class Solution {
public:
    string sortVowels(string s) {
        string vowel = "AEIOUaeiou";
        vector<char> res;

        for(int i = 0; i<s.size(); i++)
        {
            if(vowel.find(s[i]) != string::npos)
            {
                res.push_back(s[i]);
            }
        }
        sort(res.begin(), res.end());

        int i = 0;
        for(auto &it : s)
        {
            if(vowel.find(it) != string::npos)
            {
                it = res[i];
                i++;
            }
        }
        return s;
    }
};