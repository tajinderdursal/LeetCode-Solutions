class Solution {
    vector<vector<int>> result;
    void function(int index,vector<int>& nums,vector<int>& cur){
            result.push_back(cur);
            
        for(int i=index;i<nums.size();i++){
        if(i>index&&nums[i]==nums[i-1])continue;
         cur.push_back(nums[i]);
         function(i+1,nums,cur);
         cur.pop_back();
        }
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
       vector<int> cur;
       sort(nums.begin(), nums.end());
       function(0,nums,cur);

       return result; 

    }
};