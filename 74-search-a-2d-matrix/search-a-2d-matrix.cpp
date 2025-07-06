class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = (rows > 0) ? matrix[0].size() : 0;
        
        int low = 0, high = rows * cols - 1;
        while(low <= high)
        {
            int mid = low + (high - low) / 2;
            int row = mid / cols;
            int col = mid % cols;
            if(matrix[row][col] == target) return true;
            else if(matrix[row][col] > target) high = mid - 1;
            else low = mid + 1;

        }
        return false;
    }
};