/* 
    You are given a rectangular board of M × N squares. 

    Also you are given an unlimited number of standard domino pieces of 2 × 1 squares

     You are asked to place as many dominoes as possible on the board 

     1. Each domino completely covers two squares.

    2. No two dominoes overlap.

    3. Each domino lies entirely inside the board. It is allowed to touch the edges of the board.
*/
#include <iostream>
using namespace std;

int main()  {
    int m, n;
    cin>>m>>n;

    int board[m][n];
    int domino = 0;
    int qtdDomino = 0;

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            board[i][j] = 0;
        }
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j+=2){
            if ( j + 1 < n && board[i][j] != 1){
                board[i][j] = 1;
                board[i][j+1] = 1;
                qtdDomino++;
            }
        }
    }

    for (int i = 0; i < m; i+=2){
        for (int j = 0; j < n; j++){
            if ( i + 1 < m && board[i][j] != 1 && board[i+1][j] != 1){
                board[i][j] = 1;
                board[i+1][j] = 1;
                qtdDomino++;
            }
        }
    }
    cout << qtdDomino << endl;
}