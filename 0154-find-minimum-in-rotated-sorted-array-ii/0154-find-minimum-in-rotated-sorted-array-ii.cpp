class Solution {
public:
    int findMin(vector<int>& nums) {
        int min=nums[0];
      int low=0;
      int high=nums.size()-1;
      while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]==nums[high]&&nums[mid]==nums[low]){
             if(nums[low]<min){
            min=nums[low];}
            low++;
            high--;
            continue;
        }
        if(nums[low]<=nums[mid]){
            if(nums[low]<min){
            min=nums[low];}
            low=mid+1;

        }
        else{
            if(nums[mid]<min){
            min=nums[mid];}
            high=mid-1;
        }
      }
      return min;  
    }
};