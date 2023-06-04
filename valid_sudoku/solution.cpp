class Solution
{
public:
    
    bool isValidSudoku(vector<vector<char> > &board)
    {
		//using a hashmap to check for repeated occurences
        int row[9][9] = {0}, col[9][9] = {0}, subgrid[9][9] = {0};
        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[i].size(); j++){
                if(board[i][j] == '.') continue;
                int num = board[i][j] - '1';
                int k = i/3*3+j/3;
                if(row[i][num] || col[j][num] || subgrid[k][num])
                    return false;
                row[i][num] = col[j][num] = subgrid[k][num] = 1;
            }
        }
        return true;
    }
};

//Runtime O(n) where n is the number of cells in the board
//Space complexity of O(n) as well as we are storing the values in a hashmap