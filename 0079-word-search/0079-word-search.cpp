class Solution {

bool search(int row,int col,int i,string& word,vector<vector<char>>& board){
    if(i==word.size()){
        return true;
    }
    if(row<0||col<0||row>=board.size()||col>=board[0].size()){
        return false;
    }
    if(board[row][col]!=word[i]){
        return false;
    }
    char temp=board[row][col];
    board[row][col]='#';
    bool found=search(row+1,col,i+1,word,board)||search(row,col+1,i+1,word,board)||search(row-1,col,i+1,word,board)||search(row,col-1,i+1,word,board);
    board[row][col]=temp;
    return found;
}


bool function(string& word,vector<vector<char>>& board){
    int m=board.size();
    int n=board[0].size();

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(board[i][j]==word[0]){
                if(search(i,j,0,word,board)){
                    return true;
                }
            }
        }
    }
    return false;

}


public:
    bool exist(vector<vector<char>>& board, string word) {
        bool result=function(word,board);
        return result;
        
    }
};