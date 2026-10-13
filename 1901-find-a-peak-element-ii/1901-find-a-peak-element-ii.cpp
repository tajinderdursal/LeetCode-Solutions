class Solution {
    int checkmax(vector<vector<int>>& mat , int col){
        int rowindex=0;
        int maxi=0;
        for(int i=0;i<mat.size();i++){
           if(mat[i][col]>maxi){
            maxi=mat[i][col];
            rowindex=i;
           }
        }
        return rowindex;
    }
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        
        int low=0;
        int high=mat[0].size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            int c=checkmax(mat,mid);
            int left=(mid==0)?-1:mat[c][mid-1];
            int right=(mid==mat[0].size()-1)?-1:mat[c][mid+1];
            
            if(left<mat[c][mid]&&right<mat[c][mid]){
                     return {c,mid};
            }
            else if(left<mat[c][mid]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }


        }
        return {-1,-1};
    }
};