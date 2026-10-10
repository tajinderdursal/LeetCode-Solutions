class Solution {
    double totalhrs(vector<int>& piles,int mid){
        double total=0;
        for(int i=0;i<piles.size();i++){
            total+=ceil((double)piles[i]/(double)mid);

        }
        return total;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int ans=0;
       int low=1;
       int high=*max_element(piles.begin(),piles.end());
       while(low<=high){
        int mid=(low+high)/2;
         if(totalhrs(piles,mid)<=h){
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