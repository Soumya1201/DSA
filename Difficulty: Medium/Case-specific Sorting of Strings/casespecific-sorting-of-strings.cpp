class Solution {
  public:
    string caseSort(string& s) {
        // code here
        string upper, lower;
        
        string result = "";
        
        for(char c: s)
        {
            if(isupper(c)) upper.push_back(c);
            else lower.push_back(c);
        }
        
        sort(upper.begin(), upper.end());
        sort(lower.begin(), lower.end());
        
        int u= 0, l = 0;
        for(char c: s)
        {
            if(isupper(c)) result.push_back(upper[u++]);
            else result.push_back(lower[l++]);
        }
        return result;
    }
};