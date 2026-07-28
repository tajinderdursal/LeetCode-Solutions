class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        int i=0,j=n,k=0;
         while(i<n||j<nums.size()){
            if((k%2)==0){
                ans.push_back(nums[i]);
                i++;
            }
            else{
              ans.push_back(nums[j]);  
              j++;
            }
            k++;
         }
        return ans;
        
    }
};