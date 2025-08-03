class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        // code here
        vector<int>temp;
        for(int i = 0; i<a.size();i++) temp.push_back(a[i]);
        for(int i = 0; i<b.size(); i++) temp.push_back(b[i]);
        
        sort(temp.begin(), temp.end());
        
        for(int i = 0; i<a.size(); i++)
        {
            a[i] = temp[i];
        }
        for(int i = 0; i<b.size(); i++)
        {
            b[i] = temp[i + a.size()];
        }
    }
};