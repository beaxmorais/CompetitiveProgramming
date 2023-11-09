//https://leetcode.com/problems/valid-sudoku/
// Hash Table
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector <bool> check (10, false);

        for(int i =0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j] != '.'){
                    int t = board[i][j] - '0';
                    
                    if(check[t])
                        return false;

                    check[t] = true;
                }
            }
            fill(check.begin(), check.end(), false);
        }

        for(int i =0; i<9; i++){
            for(int j =0; j<9; j++){
                if(board[j][i] != '.'){
                    int t = board[j][i] - '0';
                    
                    if(check[t])
                        return false;

                    check[t] = true;
                }
            }
            fill(check.begin(), check.end(), false);
        }

        for(int i=0; i<9; i+=3){
            for(int j=0; j<9; j+=3){
                for(int x=i; x<i+3; x++){
                    for(int y=j; y<j+3; y++){
                        if(board[x][y] != '.'){
                            int t = board[x][y] - '0';

                            if(check[t])
                                return false;
                            
                            check[t] = true;
                        }
                    }
                }
                fill(check.begin(), check.end(), false);
            }
        }
        return true;
    }
};