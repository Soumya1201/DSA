class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        int n1 = a.size();
        int n2 = b.size();
        int i = 0, j = 0;
        vector<int>union_arr;
        while(i <n1 && j <n2)
        {
            if(a[i] <= b[j])
            {
                if(union_arr.size() == 0 || union_arr.back() != a[i])
                {
                    union_arr.push_back(a[i]);
                }
                i++;
            }
            else
            {
            
                if(union_arr.size() == 0 || union_arr.back() != b[j])
                {
                    union_arr.push_back(b[j]);
                }
                j++;
            }
        }
        while( i < n1)
        {
            if(union_arr.size() == 0 || union_arr.back() != a[i])
            {
                union_arr.push_back(a[i]);
            }
            i++;
        }
        while(j < n2)
        {
            if(union_arr.size() == 0 || union_arr.back() != b[j])
            {
                union_arr.push_back(b[j]);
            }
            j++;
        }
        return union_arr;
        // return vector with correct order of elements
    }
};