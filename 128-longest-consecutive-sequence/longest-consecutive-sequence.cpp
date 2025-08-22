class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for(int i = 0; i<nums.size(); i++)
        {
            st.insert(nums[i]);
        }

        int longStreak = 0;

        for(auto it : st)
        {
            if(st.find(it - 1) == st.end())
            {
                int curr = it;
                int streak = 1;

                while(st.find(curr + 1) != st.end())
                {
                    curr++;
                    streak++;
                }
                longStreak = max(longStreak, streak);
            }  
        }
        return longStreak;
    }
};