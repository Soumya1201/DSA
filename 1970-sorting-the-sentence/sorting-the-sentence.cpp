class Solution {
public:
    string sortSentence(string s) {
        vector<string> ans(10); // since numbers in between syring are 1-9
        int count = 0, index = 0;
        string temp;
        while(index < s.size())
        {
            if(s[index] == ' ')
            {
                int pos = temp[temp.size() - 1] - '0'; // select the number in the temp
                temp.pop_back();
                ans[pos] = temp;
                temp.clear();
                count++;
            }
            else
            {
                temp += s[index];
            }
            index++;
        }
        // there is no blank space the last of sentence
        int pos = temp[temp.size() - 1] - '0'; // select the number in the temp
        temp.pop_back();
        ans[pos] = temp;
        temp.clear();
        count++;

        for(int i = 1; i<=count; i++)
        {
            temp += ans[i];
            temp += ' ';
        }

        temp.pop_back(); // pop the last blabk space
        return temp;
    }
};