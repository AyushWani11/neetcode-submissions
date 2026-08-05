class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<int> row(9), col(9), sq(9);

        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(board[i][j]=='.') continue;
                int bit = 1 << (board[i][j]-'0');
                if((row[i] & bit)) return false;
                row[i] |= bit;

                int square = 3*(i/3) + (j/3);

                if(sq[square] & bit) return false;
                sq[square] |= bit;

                if((col[j] & bit)) return false;
                col[j] |= bit;

                
                 
            }
        }

        return true;

    }
};
