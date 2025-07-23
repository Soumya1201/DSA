class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size();
        int m  = board[0].size();

        unordered_set<char> rows[9], cols[9], box[9];
        
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                char ch = board[i][j];
                if(ch == '.') continue; 

                if(rows[i].count(ch)) return false;
                rows[i].insert(ch);

                if(cols[j].count(ch)) return false;
                cols[j].insert(ch);

                int boxIndex = (i/3) * 3 + (j/3);
                if(box[boxIndex].count(ch)) return false;
                box[boxIndex].insert(ch); 
            }

        }
        return true;
    }
};