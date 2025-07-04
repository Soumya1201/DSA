long long calcHours(vector<int> piles, int mid) {
    long long sum = 0;
    for (int i = 0; i < piles.size(); i++) {
        sum += ceil((double)piles[i] / mid);
    }
    return sum;
}
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size(), high = INT_MIN, low = 1;
        for (int i = 0; i < n; i++) {
            high = max(high, piles[i]);
        }
        int ans = INT_MAX;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long total_hours = calcHours(piles, mid);

            if (total_hours <= h) {
                ans = min(ans, mid);
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};