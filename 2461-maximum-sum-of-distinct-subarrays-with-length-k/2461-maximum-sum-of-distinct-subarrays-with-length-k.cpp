class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
     
       long long ans=0;
       long long l=0,r=0;
       long long  sum=0;
       unordered_set<long long > s;
       for(r;r<nums.size();r++ ){
        while(s.count(nums[r])){
             s.erase(nums[l]);
             sum-=nums[l];
             l++;
           
        }
        s.insert(nums[r]);
        sum+=nums[r];
        if(r-l+1==k){
            ans=max(ans,sum);
            s.erase(nums[l]);
            sum-=nums[l];
            l++;
        }
       }
       return ans;
       
    }
};