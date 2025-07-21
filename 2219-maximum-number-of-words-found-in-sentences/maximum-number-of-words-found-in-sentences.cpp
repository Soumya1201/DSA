class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size();
        int maxi = -1;
        for(string s : sentences)
        {
            int count = 1;
            for(char ch : s)
            {
                if(ch == ' ') count++;
            }
            maxi = max(maxi, count);
        }
        return maxi;
    }
};