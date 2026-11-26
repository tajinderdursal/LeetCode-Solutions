class Solution {
      vector<vector<int>> result;
    

void function(vector<int>& nums,vector<int>& cur){
    if(cur.size()==nums.size()){
        result.push_back(cur);
        return;
    }
    for(int i=0;i<nums.size();i++){
        if(nums[i]!=11){
            int original = nums[i];
            cur.push_back(nums[i]);
            nums[i]=11;
            function(nums,cur);
            cur.pop_back();
             nums[i] = original;

        }
    }
}
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> cur;

       function(nums,cur);
       return result;
        
    }
};