class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int> valuetoindex;
       for(int current=0;current<nums.size();current++){
         int complete= target-nums[current];
         if(valuetoindex.find(complete)!=valuetoindex.end()){
           return{
            valuetoindex[complete],current
           };
         }
         valuetoindex[nums[current]]=current;
       }
       return{};
    }
};