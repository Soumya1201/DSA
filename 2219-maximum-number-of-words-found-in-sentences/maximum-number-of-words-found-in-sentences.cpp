class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        int maxi = INT_MIN;
        for(int i = 0; i<sentences.size(); i++)
        {
            int count = 1;
            for(char ch : sentences[i])
            {
                if(ch == ' ') count++;
            }
            maxi = max(maxi,count);
        }
        return maxi;
    }
};