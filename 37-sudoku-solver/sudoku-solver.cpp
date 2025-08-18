class Solution {
public:
    bool issafe(vector<vector<char>> &board, int row, int col, int dig)
    {
        for(int i=0;i<9;i++)
        {
            if(board[row][i]==dig) return false;
        }
        for(int i=0;i<9;i++)
        {
            if(board[i][col]==dig) return false;
        }
        int startRow = row - row % 3, startCol = col - col % 3;
        
        for(int i=0; i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(board[startRow+ i][startCol + j]==dig) return false;
            }
        }
        return true;
    }
    bool solve(vector<vector<char>> &board, int row, int col)
    {
        if(row==9) return true;
        if(col==9) return solve(board, row+1, 0);
        if(board[row][col]!='.') return solve(board, row, col+1);

        
        for(int i=1;i<10;i++)
        {
            if(issafe(board, row, col, (i + '0')))
            {
                board[row][col] = i + '0';
                if (solve(board, row, col + 1)) return true;
                board[row][col] = '.';
            }
        }

        return false;
        
    }

    void solveSudoku(vector<vector<char>>& board) {
        solve(board, 0, 0);
        
        
    }

};