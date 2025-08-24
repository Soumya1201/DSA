void rotateClockWise(string& s)
{
    char c = s[s.size() - 1];
    int index = s.size() - 2;
    
    while(index >= 0)
    {
        s[index+1] = s[index];
        index--;
    }
    s[0] = c;
}

void rotateAntiClockWise(string& s)
{
    char c = s[0];
    int index = 1;
    while(index < s.size())
    {
        s[index - 1] = s[index];
        index++;
    }
    s[s.size() - 1] = c;
}

class Solution {
  public:
    bool isRotated(string& s1, string& s2) {
        // code here
        string clockWise = s1, antiClockWise = s1;
        
        rotateClockWise(clockWise);
        rotateClockWise(clockWise);
        
        if(clockWise == s2) return true;
        
        rotateAntiClockWise(antiClockWise);
        rotateAntiClockWise(antiClockWise);
        
        if(antiClockWise == s2) return true;
        
        return false;
    }
};
