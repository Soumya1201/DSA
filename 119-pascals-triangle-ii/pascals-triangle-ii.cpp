class Solution {
public:
    vector<int> getRow(int rowIndex) {
        long long ans = 1;
        vector<int>res;
        res.push_back(ans);

        for(int i = 1; i<rowIndex+1; i++)
        {
            ans = ans * (rowIndex + 1 - i);
            ans = ans / i;
            res.push_back(ans);
        }
        return res;
    }
};