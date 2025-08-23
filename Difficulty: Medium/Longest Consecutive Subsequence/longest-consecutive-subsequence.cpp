class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        unordered_set<int> st;
        for(int i = 0; i<arr.size(); i++)
        {
            st.insert(arr[i]);
        }
        
        int longStreak = 0;
        
        for(auto it : st)
        {
            if(st.find(it - 1) == st.end())
            {
                int cur = it;
                int streak = 1;
                
                while(st.find(cur + 1) != st.end())
                {
                    cur++;
                    streak++;
                }
                
                longStreak = max(longStreak, streak);
            }
        }
        return longStreak;
    }
};