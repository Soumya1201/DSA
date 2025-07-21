// User function Template for C++

int findLength(string s) {
    // code
    int n = s.length();
    int count = 0;
    int i = n-1;
    while(i >= 0 && s[i] == ' ' ) i--;
    while(i >= 0 && s[i] != ' ')
    {
        count++;
        i--;
    }
    return count;
}