class Solution {
    int lowbond(int low,int high,vector<int>& nums,int target){
        int first =-1;
        while(low<=high){
            int mid=(low+high)/2;
              if(nums[mid]==target){
                 first=mid;
                 high=mid-1;
              }
              else if(nums[mid]>target){
                high=mid-1;
              }
              else{
            low=mid+1;
              }
                    }
                    return first;
    }
    int upperbond(int low,int high,vector<int>& nums,int target){
        int last =-1;
        while(low<=high){
            int mid=(low+high)/2;
              if(nums[mid]==target){
                 last=mid;
                  low=mid+1;
              }
              else if(nums[mid]>target){
                high=mid-1;
              }
              else{
            low=mid+1;
              }
                    }
                    return last;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
   int x=lowbond(0,nums.size()-1,nums,target);
   if(x==-1){
    return{-1,-1};
   }
   int y=upperbond(0,nums.size()-1,nums,target);
     return {x,y};
    }
};