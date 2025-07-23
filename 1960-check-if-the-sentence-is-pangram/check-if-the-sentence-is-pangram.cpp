class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<int> st;
        for(int i = 0; i<sentence.length(); i++)
        {
            char ch = tolower(sentence[i]);
            if(ch >= 'a' && ch <= 'z') st.insert(ch);
        }
        if(st.size() == 26) return true;
        return false;
    }
};