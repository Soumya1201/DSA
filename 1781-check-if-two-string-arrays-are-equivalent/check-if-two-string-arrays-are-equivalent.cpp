class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int n1 = word1.size();
        int n2 = word2.size();

        string sum1 = "";
        string sum2 = "";
        for(int i = 0; i<n1; i++)
        {
            sum1 += word1[i];
        }
        for(int i = 0; i<n2; i++)
        {
            sum2 += word2[i];
        }
        if(sum1 == sum2) return true;
        else return false;
    }
};