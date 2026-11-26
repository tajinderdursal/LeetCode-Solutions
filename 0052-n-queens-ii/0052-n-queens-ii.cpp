class Solution {
    int solution=0;
    bool place(int row, int col, vector<vector<int>>& board,int n ){

        for(int i=0;i<row;i++){
            if(board[i][col]==1){
                return false;
            }
        }
        for(int r=row-1,c=col-1;r>=0&&c>=0;r--,c--){
            if(board[r][c]==1){
                return false;
            }
        }
         for(int r=row-1,c=col+1;r>=0&&c<n;r--,c++){
            if(board[r][c]==1){
                return false;
            }
        }
        return true;
    }

void function(int i,  vector<vector<int>>& board,int n  ){
    if(i==n){
        solution++;
        return;
    }
    for(int col=0;col<n;col++){
        if(place(i,col,board,n)){
            board[i][col]=1;
            function(i+1,board,n);
            board[i][col]=0;
        }  
 
    }
}

public:
    int totalNQueens(int n) {
        vector<vector<int>> board(n, vector<int>(n,0));
         function(0,board,n);
        return solution;
    }
};