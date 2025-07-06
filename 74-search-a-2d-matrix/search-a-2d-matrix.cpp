class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = (rows > 0) ? matrix[0].size() : 0;
        for(int i = 0; i<rows; i++)
        {
            int low = 0, high = cols-1;
            while(low <= high)
            {
                int mid = low + (high - low) / 2;
                if(matrix[i][mid] == target) return true;
                else if(matrix[i][mid] > target) high = mid - 1;
                else low = mid + 1;

            }
        }
        return false;
    }
};