int findDay(vector<int>& weights, int capacity)
{
    int day = 1, load = 0;
    int n = weights.size();
    for(int i = 0; i<n; i++)
    {
        if(load + weights[i] > capacity)
        {
            day = day + 1;
            load = weights[i];
        }
        else
        {
            load += weights[i];
        }
    }
    return day;
}
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        //int ans = -1;
        int low = INT_MIN;
        for(int i = 0; i<n; i++)
        {
            low = max(low, weights[i]);
        }
        int high = 0;
        for(int i = 0; i<n; i++)
        {
            high += weights[i];
        }

        while(low <= high)
        {
            int mid = low + (high - low) / 2;    //capacity
            int day = findDay(weights, mid);

            if(day <= days)
            {
                //ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return low;
    }
};