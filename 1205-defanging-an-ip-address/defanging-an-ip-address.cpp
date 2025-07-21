class Solution {
public:
    string defangIPaddr(string address) {
        string ans = "";
        int n = address.size();
    
        for(char ch : address)    
        {
            if(ch == '.')
            {
                ans += "[.]";
            }
            else
            {
                ans += ch;
            }
        }
        return ans;
    }
};