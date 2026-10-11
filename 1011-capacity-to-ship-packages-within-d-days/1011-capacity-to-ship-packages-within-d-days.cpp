class Solution {
    bool check(vector<int>& arr,int mid, int days){
        int sum=0;
        int count=1;
        for(int i=0;i<arr.size();i++){
            if(sum+arr[i]<=mid){
                sum=sum+arr[i];
                
            }
            else{
              sum=0;
              sum+=arr[i];
              count++;
            }
        }
        
        return count<=days;
    }
    
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int ans;
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);
        while(low<=high){
            int mid=(low+high)/2;
            if(check(weights,mid,days)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
        
    }
};