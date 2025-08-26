int Count(string S) {
    // complete the function here
    int count = 0;
    for(char c : S)
    {
        if(isalpha(c))
        {
            count++;
        }
    }
    return count;
}