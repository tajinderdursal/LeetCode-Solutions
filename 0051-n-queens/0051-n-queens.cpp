class Solution {
    vector<vector<string>> result;

    bool place( int row,int col,vector<string>& cur,int n){
        for(int i=0;i<row;i++){
            if(cur[i][col]=='Q'){
                return false;
            }
        }
        for(int i=row-1,j=col-1;i>=0&&j>=0;i--,j--){
            if(cur[i][j]=='Q'){
                return false;
            }
        }
          for(int i=row-1,j=col+1;i>=0&&j<n;i--,j++){
            if(cur[i][j]=='Q'){
                return false;
            }
        }
        return true;
    }

    void function(int n,vector<string>& cur,int row){
        if(cur.size()==n){
            result.push_back(cur);
            return;
        }
        for(int i=0;i<n;i++){
            if(place(row,i,cur,n)){
                string str;
                for(int j=0;j<n;j++){
                    if(j==i){
                        str.push_back('Q');
                    }
                    else{
                      str.push_back('.');
                    }
                }
                cur.push_back(str);
                function(n,cur,row+1);
                cur.pop_back();

            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
     
      vector<string> cur;
        function(n,cur,0);
    return result;
        
    }
};