class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    int maxi=1;
    sort(nums.begin(),nums.end());
    int cmax=1;
    if(nums.empty()){
        return 0;
    }
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i]==nums[i+1]){
            continue;
        }
        if(nums[i+1]-nums[i]==1){
            cmax++;
            maxi=max(cmax,maxi);
        }
        else{
           cmax=1;
        }
    }
     return maxi;
        
    }
};