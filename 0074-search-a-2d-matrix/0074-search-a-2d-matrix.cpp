class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int low=0;
        int high=row*col-1;
       
        while(low<=high){
            int mid=(low+high)/2;
            int crow=mid/col;
            int ccol=mid%col;
            if(matrix[crow][ccol]==target){
                return true;
            }
            else if(matrix[crow][ccol]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return false;
        
       
    }
};