class Solution {
  public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
        // code here
        int n1 = a.size();
        int n2 = b.size();
        
        vector<int> arr;
        
        
        int i = 0, j = 0;
        while(i < n1 && j < n2)
        {
            if(a[i] < b[j]) arr.push_back(a[i++]);
            else arr.push_back(b[j++]);
        }
        while(i < n1) arr.push_back(a[i++]);
        while(j < n2) arr.push_back(b[j++]);
        int n = n1 + n2;
        
        return arr[k-1];
    } 
};