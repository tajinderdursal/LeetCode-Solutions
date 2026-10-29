class Solution {
    vector<vector<int>> ans;
    void function(int i,int tsum,vector<int>& cans,vector<int> candidates){
        if(i==candidates.size()){
            if(tsum==0){
                ans.push_back(cans);   
            }
            return;
        
            
        }
        if(candidates[i]<=tsum){
            cans.push_back(candidates[i]);
            function(i,tsum-candidates[i],cans,candidates);  
            cans.pop_back();
        }
         function(i+1,tsum,cans,candidates);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>cans;
        function(0,target,cans,candidates);
        return ans;
        
    }
};