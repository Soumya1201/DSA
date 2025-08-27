// User function template for C++
class Solution {
  public:
    int search(string &pat, string &txt) {
        // code here
        vector<int> freqWin(26, 0), freqPat(26, 0);
        int i = 0, j = 0;
        int count = 0;
        int k = pat.size();
        
        for(char c: pat) freqPat[c - 'a']++;
        
        while(j < txt.size())
        {
            freqWin[txt[j] - 'a']++;
            
            if(j - i + 1 < k) j++;
            
            else if(j - i + 1 == k)
            {
                if(freqPat == freqWin) count++;
                freqWin[txt[i] - 'a']--;
                i++;
                j++;
            }
        }
        return count;
    }
};