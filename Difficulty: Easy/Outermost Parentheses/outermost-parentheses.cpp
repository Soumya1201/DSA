class Solution {
  public:
    string removeOuter(string& s) {
        // code here
        int n = s.length();
        int count = 0;
        string ans = "";
        for(int i = 0; i<n; i++)
        {
            if(s[i] == ')') count--;
            if(count != 0) ans = ans + s[i];
            if(s[i] == '(') count++;
        }
        return ans;
    }
};