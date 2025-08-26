class Solution {
  public:
    int firstOccurence(string& txt, string& pat) {
        // code here
        size_t pos = txt.find(pat);
        if(pos != string::npos) return pos;
        
        else return -1;
    }
};