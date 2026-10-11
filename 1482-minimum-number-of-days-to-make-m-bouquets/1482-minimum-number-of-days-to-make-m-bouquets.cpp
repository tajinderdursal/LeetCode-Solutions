class Solution {
   bool cal(vector<int>& arr, int m , int  mid , int k ){
        int count =0;
        int ans=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<=mid){
            count++;
        }
        else{
            ans+=count/k;
            count=0;
        }
    }
    ans+=count/k;
    if(ans<m){
        return false;
    }
    return true;
   }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=-1;
        if(m>bloomDay.size()/k){
            return -1;
        }
        while(low<=high){
            int mid=(low+high)/2;
            if(cal(bloomDay,m,mid,k)==true){
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