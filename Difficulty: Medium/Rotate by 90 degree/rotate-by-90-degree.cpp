class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        // code here
        int m = mat.size();
        
        for(int i = 0; i<m - 1; i++)
        {
            for(int j = i + 1; j<m; j++)
            {
                swap(mat[i][j], mat[j][i]);
            }
        }
        
        for(int i = 0; i<m; i++)
        {
            int top = 0, bottom = m-1;
            while(top < bottom)
            {
                swap(mat[top][i],mat[bottom][i]);
                top++;
                bottom--;
            }
        }
    }
};
