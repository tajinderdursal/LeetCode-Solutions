class Solution {
    vector<vector<int>> ans;
    void function(int index,vector<int>& cans,int tsum,vector<int>& candidates){
    if(tsum==0){
        ans.push_back(cans);
        return;
    }
    for(int i=index;i<candidates.size();i++){
        if(i>index&&candidates[i]==candidates[i-1])continue;
        if(candidates[i]>tsum) break;
        cans.push_back(candidates[i]);
        function(i+1,cans,tsum-candidates[i],candidates);
        cans.pop_back();

    }

       
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> cans;
        sort(candidates.begin(),candidates.end());
        function(0,cans,target,candidates);
     
         return ans;
    }
};