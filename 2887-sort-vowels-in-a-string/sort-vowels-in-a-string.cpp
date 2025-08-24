class Solution {
public:
    string sortVowels(string s) {
        string vowel = "AEIOUaeiou";
        vector<char> res;

        for(int i = 0; i<s.size(); i++)
        {
            if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || 
            s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
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