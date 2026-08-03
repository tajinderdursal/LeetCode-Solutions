class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool a=true,b=true;
        int i=0,j=0;
      while(i<nums.size()-1){
          if(nums[i]>nums[i+1]){
          a=false;
          break;
          }
          i++;
         }

   while(j<nums.size()-1){
          if(nums[j]<nums[j+1]){
          b=false;
          break;
          }
          j++;
         }

       return a||b;

    }
    
};