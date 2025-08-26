// User function template for C++
class Solution {
  public:

    string removeVowels(string& s) {
        // Your code goes here
        string ans;
        for(char c : s)
        {
            
            if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
            {
                ans += c;
            }
        }
        return ans;
    }
};