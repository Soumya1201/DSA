// User function template for C++

class Solution {
  public:
    string removeSpecialCharacter(string s) {
        // code here
        string ans;
        for(char c : s)
        {
            if(isalpha(c)) ans.push_back(c);
        }
        if(ans.empty()) return "-1";
        else return ans;
    }
};