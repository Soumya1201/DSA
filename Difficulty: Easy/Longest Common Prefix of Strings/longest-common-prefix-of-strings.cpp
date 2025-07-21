// User function template for C++
class Solution {
  public:
    string longestCommonPrefix(vector<string> arr) {
        // your code here
        int n = arr.size();
        if(arr.empty()) return ""; 
        
        sort(arr.begin(), arr.end());
        
        string first = arr.front();
        string last = arr.back();
        
        int i = 0;
        while(i < first.size() && first[i] == last[i])
        {
            i++;
        }
        return first.substr(0, i);
    }
};