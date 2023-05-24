class Solution {
public:


    bool containsDuplicate(std::vector<int>& board){
        std::sort(board.begin(),board.end());
        bool flag = true;
        int n = board.size();
        for(int i = 0; i < n; i++ ){
            if (board[i]==-2)
            {
                continue;
            }else{
                if (board[i]==board[i+1]) return flag;
            }
        }
        flag = false;
        return flag;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        // Input: board = 
        // [["8","3",".",".","7",".",".",".","."]
        // ,["6",".",".","1","9","5",".",".","."]
        // ,[".","9","8",".",".",".",".","6","."]
        // ,["8",".",".",".","6",".",".",".","3"]
        // ,["4",".",".","8",".","3",".",".","1"]
        // ,["7",".",".",".","2",".",".",".","6"]
        // ,[".","6",".",".",".",".","2","8","."]
        // ,[".",".",".","4","1","9",".",".","5"]
        // ,[".",".",".",".","8",".",".","7","9"]]
        // Output: false
        // Explanation: Same as Example 1, except with the 5 in the top left corner being modified to 8. Since there are two 8's in the top left 3x3 sub-box, it is invalid.
        
        std::vector<int> checkingArr;

        bool duplicateflag = false;

        int n = board.size();
        // Cheacking Horizontal line of the sudoku 9x9 grid
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                checkingArr.push_back(board[i][j]-'0');
            }
            duplicateflag = containsDuplicate(checkingArr);
            if (duplicateflag == true)
            {
                return false;
            }
            checkingArr.erase(checkingArr.begin(),checkingArr.end());

        }


        // Cheacking Vertical line of the sudoku 9x9 grid
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                checkingArr.push_back(board[j][i]-'0');
            }
            duplicateflag = containsDuplicate(checkingArr);
            if (duplicateflag == true)
            {
                return false;
            }
            checkingArr.erase(checkingArr.begin(),checkingArr.end());
        }

        int nextStartGrid = 0;
        int nextEndGrid = 3;
        // Cheacking 9 grid in the sudoku 9x9 grid
        for(int k = 0; k < 3; k++){
            for(int i = 0; i < n; i++){
                for(int j = nextStartGrid; j < nextEndGrid; j++){
                    checkingArr.push_back(board[i][j]-'0');
                    if(checkingArr.size() == 9){
                        duplicateflag = containsDuplicate(checkingArr);
                        if (duplicateflag == true)
                        {
                            return false;
                        }
                        checkingArr.erase(checkingArr.begin(),checkingArr.end());
                    }
                }
                }
                nextStartGrid += 3;
                nextEndGrid += 3;
        }
        return true;
    }
};
