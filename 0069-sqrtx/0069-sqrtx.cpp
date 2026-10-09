class Solution {
   
public:
    int mySqrt(int x) {
        long long  low=1;
        long long  high=x/2;
        long long  ans=1;
        if(x==0){
            return 0;
        }
        while(low<=high){
            long long  mid=(low+high)/2;
            if(mid*mid==x){
                return mid;
            }

           else if(mid*mid<x){
                ans=mid;
                low=mid+1;
            }
            if(mid*mid>x){
              high=mid-1;
            }
        }
        return ans;
    
        
    }
};