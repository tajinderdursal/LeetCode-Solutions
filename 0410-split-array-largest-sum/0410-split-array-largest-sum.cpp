class Solution {
    int check(vector<int>& arr,int k){
        int count=0;
        int sum=0;
        for(int i=0;i<arr.size();i++){
            if(sum+arr[i]<=k){
                sum+=arr[i];
            }
            else{
                count++;
                sum=arr[i];
            }

        }
        count++;
        return count;
    }
public:
    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
       while(low<=high){
        int mid=(low+high)/2;
        int s=check(nums,mid);
        if(s>k){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
       }
       return low;
    }
};