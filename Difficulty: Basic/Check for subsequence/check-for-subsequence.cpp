
class Solution {
  public:
    bool isSubSequence(string A, string B) {
        // code here
        int a = A.length();
        int b = B.length();
        int count = 0;
        
        int i = 0, j = 0;
        while(i < a && j < b)
        {
            if(A[i] != B[j]) j++;
            else if(A[i] == B[j])
            {
                count++;
                i++;
                j++;
            }
        }
        if(count == a) return true;
        else return false;
    }
};