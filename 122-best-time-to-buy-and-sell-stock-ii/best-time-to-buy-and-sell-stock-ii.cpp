class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;

        for(int i = 1; i<n; i++)
        {
            int cost = prices[i] - prices[i-1];
            if(cost > 0)
            {
                profit = profit + cost; 
            } 
        }
        return profit;
    }
};