class Solution {
public:
    bool wordPattern(string pattern, string s) {
        string word;
        vector<string> words;
        stringstream ss(s);

        while(ss >> word)
        {
            words.push_back(word);
        }

        if(pattern.length() != words.size()) return false;

        unordered_map<char, string> mcs;
        unordered_map<string, char> msc;

        for(int i = 0; i<pattern.length(); i++)
        {
            char c = pattern[i];
            string w = words[i];

            if(mcs.count(c) && mcs[c] != w) return false;
            if(msc.count(w) && msc[w] != c) return false;

            mcs[c] = w;
            msc[w] = c;
        }
        return true;
    }
};