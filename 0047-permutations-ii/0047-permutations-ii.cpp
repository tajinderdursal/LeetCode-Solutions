class Solution {
 vector<vector<int>> result;

void function(vector<int>& nums,vector<int> cur,vector<bool> visted){
    if(cur.size()==nums.size()){
        result.push_back(cur);
        return;
    }

    for(int i=0;i<nums.size();i++){
        if(!visted[i]){
            if(i>0&&nums[i]==nums[i-1]&&!visted[i-1]){
                continue;
            }
            visted[i]=true;
            cur.push_back(nums[i]);
            function(nums,cur,visted);
            cur.pop_back();
            visted[i]=false;

        }
       
        }
    }

public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
   
     sort(nums.begin(), nums.end());
      vector<int> cur;

     vector<bool> visted(nums.size(), false);
       function(nums,cur,visted);
       return result;
        
    }
};