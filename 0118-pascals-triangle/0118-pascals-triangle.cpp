class Solution {
  vector<int> generaterow(int row){
        int ans=1;
        vector<int> arr;
        arr.push_back(ans);
        for(int i=1;i<row;i++){
            ans=ans*(row-i);
            ans=ans/i;
            arr.push_back(ans);
        }
        return arr;
    };
public:
 
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
         for(int i=1;i<=numRows;i++){
            result.push_back(generaterow(i));
        }
   return result;
        
    }
};