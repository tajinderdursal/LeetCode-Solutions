class Solution {
    bool place(int row, int col,char ele,vector<vector<char>>& board){
        for(int i=0;i<9;i++){
            if(board[row][i]==ele){
                return false;
            }
        }
        for(int i=0;i<9;i++){
            if(board[i][col]==ele){
                return false;
            }
        }
        int r=(row/3)*3;
        int c=(col/3)*3;
        for(int i=r;i<r+3;i++){
            for(int j=c;j<c+3;j++){
                if(board[i][j]==ele){
                    return false;
                }
            }
        }
        return true;
        
    }


bool function(vector<vector<char>>& board){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(board[i][j]=='.'){
                for(char element='1';element<='9';element++){
                    if(place(i,j,element,board)){
                        board[i][j]=element;
                        if(function(board)){
                            return true;
                        }
                        board[i][j]='.';
                    }
                }
                return false;
            }
        }
    }
    return true;



   
}


public:
    void solveSudoku(vector<vector<char>>& board) {

        function(board);
        
    }
};